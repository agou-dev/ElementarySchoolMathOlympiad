#pragma once
//#include "value.h"
//#include "../BinaryHeapIndex.h"
#include <functional>

#ifndef WORK_MODE_SERVER
#define NPLibError printf
#else
#define NPLibError g_Log

#endif



#define win_min min
#define win_max max

namespace NPLib
{
	//系统三态状态
	enum SystemTristate
	{
		Idle=0,				//空闲
		Busy=1,				//繁忙
		Complete=2,			//完成
	};
	//手状态向量
	struct HandStateVector
	{
		enum HandObjectState
		{
			Up,			//手在上面
			Down,		//手在下面
		};
		HandObjectState nHandState;		//手状态
		SystemTristate	nSystemState;	//系统状态
	};
	//产生周期内不重复的随机数,齿轮咬合磨损原理
	struct CycRand 
	{
		unsigned int m_nCyc;
		unsigned int m_nStep;
		unsigned int m_nCurVal;
		void Init(unsigned int nCyc, unsigned int nSeed=0)
		{
			m_nCyc = nCyc;
			m_nStep = win_max(1,m_nCyc>>2);
			for (;;)
			{
				unsigned int nMod = m_nCyc % m_nStep;
				if (nMod == 0)
				{
					m_nStep++;
				}
				else
				{
					break;
				}
			}
			m_nCurVal = nSeed % nCyc;
		}
		unsigned int GetRand()
		{
			m_nCurVal += m_nStep;
			m_nCurVal = m_nCurVal % m_nCyc;
			return m_nCurVal;
		}
		
		/*
		//RandCallT 返回true则继续call
		[&](unsigned int nIndex,unsigned int nRandV)->bool {
			return true;
		}
		*/
		template<typename RandCallT>
		unsigned int DoRand(unsigned int nCyc, unsigned int nSeed, RandCallT & RandCall)
		{
			unsigned int nCallCount = 0;
			Init(nCyc, nSeed);
			for (int i = 0; i < m_nCyc; i++)
			{
				unsigned int nRand = GetRand();
				bool bContinue = RandCall(i, nRand);
				nCallCount++;

				if (bContinue == false) break;
			}
			return nCallCount;
		}
		void Test()
		{
			CycRand V;
			int nCount = 17;
			V.Init(nCount, 3);
			std::vector<unsigned int> nArray;
			nArray.resize(nCount);
			for (int i=0;i< nCount;i++)
			{
				nArray[i] = V.GetRand();
			}
			//chk
			bool bFalse=false;
			for (int i = 0; i < nCount-1; i++)
			{
				for (int s = i+1; s < nCount; s++)
				{
					if (nArray[i] == nArray[s])
					{
						bFalse = true;
						break;
					}
				}
			}

			std::vector<unsigned int> nArray2;
			nArray2.resize(15);
			std::function<bool(unsigned int, unsigned int)> EnumFunc = [&](unsigned int nIndex, unsigned int nRandV)->bool {
				nArray2[nIndex] = nRandV;
				return true;
				};
			V.DoRand(15, 3,EnumFunc);

			return;
		}
	};
	struct Bitmap
	{
		unsigned int m_nObjectCount;
		unsigned int m_nTick;
		std::vector<unsigned int> m_ClearMap;
		std::vector<unsigned int> m_BitMap;
		void Init(unsigned int nObjectCount)
		{
			m_nObjectCount = nObjectCount;
			unsigned int nSize= (nObjectCount / 32) + 1;
			m_BitMap.resize(nSize);

			unsigned int nClearSize = (nSize / 32) + 1;
			m_ClearMap.resize(nClearSize);
			m_nTick = 0;

		}
		//测试判断是否已存在
		bool Test(unsigned int nObject)
		{
			unsigned int nAddr = (nObject / 32);
			unsigned int nOffset = (nObject % 32);
			unsigned int nClearAddr = (nAddr / 32);
			unsigned int nClearOffset = (nAddr % 32);
			if ((m_ClearMap[nClearAddr] & (1 << nClearOffset)) == 0)
			{
				return false;
			}
			return (m_BitMap[nAddr] & (1 << nOffset)) == 0 ? false : true;
		}
		bool TestAll()
		{
			bool bAll = true;
			for (unsigned int i=0;i< m_BitMap.size();i++)
			{
				if (i < (m_BitMap.size() - 1))
				{
					if (m_BitMap[i] != 0xffffffff)
					{
						bAll = false;
						break;
					}
				}
				else
				{
					unsigned int nEndCount = m_nObjectCount % 32;
					unsigned int nEndMask = (1 << nEndCount) - 1;
					unsigned int nEndV = (nEndMask & m_BitMap[m_BitMap.size()-1]);
					if (nEndV && (nEndV == nEndMask))
					{
					}
					else
					{
						bAll = false;
					}
					break;
				}
			}
			return bAll;
		}
		//设置为已存在
		void Set(unsigned int nObject,bool bOne=true)
		{
			unsigned int nAddr = (nObject / 32);
			unsigned int nOffset = (nObject % 32);

			unsigned int nClearAddr = (nAddr / 32);
			unsigned int nClearOffset = (nAddr % 32);
			if ((m_ClearMap[nClearAddr] & (1 << nClearOffset)) == 0)
			{
				m_ClearMap[nClearAddr] = m_ClearMap[nClearAddr] | (1 << nClearOffset);
				m_BitMap[nAddr] = 0;
			}
			unsigned int nMask = ~(1 << nOffset);
			unsigned int nVal = bOne ? (1 << nOffset) : 0;
			m_BitMap[nAddr] = (m_BitMap[nAddr]& nMask) | nVal;
			return;
		}
		void Clear()
		{
			m_nTick++;
			memset(&m_ClearMap[0], 0, m_ClearMap.size() * 4);
		}
	};
	class CPEnum
	{
	public:
		CPEnum() {};
		~CPEnum() {};
		//阶乘F(v)
		ULONGLONG Factorial(ULONGLONG nV)
		{
			return (nV == 1) ? 1 : nV * Factorial(nV - 1);
		}
		//排列数 P(n,m) n个里面选m个
		ULONGLONG PTotal(unsigned int n, unsigned int m) {
			m = min(n, m);
			return Factorial(n) / Factorial(n - m);
		}
		//防止大数版
		ULONGLONG PTotalB(unsigned int n, unsigned int m) {
			m = min(n, m);
			ULONGLONG nV = 1;
			for (unsigned int i = 0; i < m; i++)
			{
				nV *= n - i;
			}
			return nV;
		}
		//组合数 C(n,m)   P(n,m)/F(m)
		ULONGLONG CTotal(unsigned int n, unsigned int m) {
			m = min(n, m);
			return PTotalB(n, m) / Factorial(m);
		}
		//细分m!避免产生大数
		ULONGLONG CTotalB(unsigned int n, unsigned int m) {
			m = min(n, m);
			ULONGLONG nV = 1;
			ULONGLONG nMod = m;
			for (unsigned int i = 0; i < m; i++)
			{
				nV *= n - i;
				if ((nV % nMod) == 0)
				{
					nV /= nMod;
					if (nMod > 1)
					{
						nMod--;
					}
				}
			}
			return nV;
		}


		//裁剪器函数
		bool Clip(vector<unsigned int>& vec, unsigned int nStack, void* pContext)
		{
			return false;
		}
		//结果回调
		void EnumCall(vector<unsigned int>& vec, unsigned int nStack, void * pContext)
		{
		}
		template<typename ClipT, typename EnumCallBackT, typename UserContextT>
		struct PEnumContext {
			unsigned int n;
			unsigned int m;
			std::vector<unsigned int> vec;
			Bitmap Maskfilter;
			//unsigned int nStack;
			//ClipT& Clip;
			//EnumCallBackT* EnumCall;
			UserContextT* pContext;
		};
		template<typename ClipT, typename EnumCallBackT, typename UserContextT>
		struct CEnumContext {
			unsigned int n;
			unsigned int m;
			std::vector<unsigned int> vec;
			//Bitmap Maskfilter;
			//unsigned int nStack;
			//ClipT& Clip;
			//EnumCallBackT* EnumCall;
			UserContextT* pContext;
		};

		//使用bitmap检测重复后复杂度为P(n,m)
		template<typename PEnumContextT, typename ClipT, typename EnumCallBackT>
		void PEnumInternal(PEnumContextT & PEnumContext, unsigned int nStack, ClipT& Clip, EnumCallBackT& EnumCall) {

			if (nStack >= PEnumContext.m) {
				EnumCall(PEnumContext.vec, nStack, PEnumContext.pContext);
				return;
			}

			for (int i = 0; i < PEnumContext.n; i++)
			{
				bool bHas = false;
				if (nStack == 0)
				{
					PEnumContext.Maskfilter.Clear();
				}
				if (PEnumContext.Maskfilter.Test(i))
				{
					bHas = true;
				}

				if (bHas)
					continue;

				PEnumContext.Maskfilter.Set(i);
				PEnumContext.vec[nStack] = i;
				
				bool bClip=Clip(PEnumContext.vec, nStack, PEnumContext.pContext);
				if (bClip == false)
				{
					PEnumInternal(PEnumContext, nStack + 1, Clip, EnumCall);
				}
			}
		}
		
		//A P排列数裁剪枚举
		template< typename ClipT, typename EnumCallBackT, typename UserContextT>
		void PEnum(unsigned int n, unsigned int m, ClipT& Clip, EnumCallBackT& EnumCall, UserContextT* pUserContext = NULL) {
			PEnumContext<ClipT, EnumCallBackT, UserContextT> EnumContext;
			EnumContext.vec.resize(m);
			//Bitmap Maskfilter;
			EnumContext.Maskfilter.Init(n);
			EnumContext.n = n;
			EnumContext.m = m;
			EnumContext.pContext = pUserContext;
			//EnumContext.Clip = &Clip;
			//EnumContext.EnumCall = &EnumCall;
			return PEnumInternal(EnumContext, 0, Clip, EnumCall);
		}
		
		//算法复杂度为C(n,m)
		template<typename CEnumContextT, typename ClipT, typename EnumCallBackT>
		void CEnumInternal(CEnumContextT& CEnumContext, unsigned int nStack,unsigned int nBegin, ClipT& Clip, EnumCallBackT& EnumCall) {

			if (nStack >= CEnumContext.m) {
				EnumCall(CEnumContext.vec, nStack, CEnumContext.pContext);
				return;
			}
			unsigned int nEnd = CEnumContext.n - (CEnumContext.m-1- nStack);
			for (int i = nBegin; i < nEnd; i++)
			{
				CEnumContext.vec[nStack] = i;

				bool bClip = Clip(CEnumContext.vec, nStack, CEnumContext.pContext);
				if (bClip == false)
				{
					CEnumInternal(CEnumContext, nStack + 1,i+1, Clip, EnumCall);
				}
			}
		}

		//C组合数裁剪枚举C(n,m)
		template<typename ClipT, typename EnumCallBackT,typename UserContextT>
		void CEnum(unsigned int n, unsigned int m, ClipT& Clip, EnumCallBackT& EnumCall, UserContextT* pUserContext =NULL) {
			//std::vector<unsigned int> vec;//枚举向量值下标
			//vec.resize(m);
			CEnumContext<ClipT, EnumCallBackT, UserContextT> EnumContext;
			EnumContext.vec.resize(m);
			//Bitmap Maskfilter;
			EnumContext.n = n;
			EnumContext.m = m;
			EnumContext.pContext = pUserContext;
			//Maskfilter.Init(Array.size());
			return CEnumInternal(EnumContext, 0,0, Clip, EnumCall);
		}
		
		
		static void Test()
		{
			CPEnum test;
			ULONGLONG nRst[16] = {0};
			nRst[0] = test.PTotal(6, 4);//360
			nRst[1] = test.CTotal(6, 4);//15
			nRst[2] = test.CTotal(4, 1);//4
			nRst[3] = test.CTotal(4, 3);//4
			nRst[4] = test.PTotal(4, 1);//4
			nRst[5] = test.PTotal(4, 3);//24
			nRst[6] = test.PTotal(8, 2);//56
			nRst[7] = test.PTotal(4, 2);//12
			nRst[8] = test.CTotal(8, 2);//28
			nRst[9] = test.CTotal(4, 2);//6

			nRst[10] = test.CTotalB(4, 2);//6
			nRst[11] = test.CTotalB(8, 2);//6
			nRst[12] = test.CTotalB(136, 8);//4706,703,903,330 4706G
			nRst[13] = test.CTotalB(32, 32);//1
			nRst[14] = test.CTotalB(40, 32);//3100,796,899,200 3100G
			//

			vector<unsigned int> Num[] = {
				{4,3,2,1},
				{5,6,7,8, 4,3,2,1}
			};
			std::string szLog[8];
			unsigned int nTotal[8] = { 0 };
			unsigned int nMatchTotal[8] = { 0 };
			unsigned int nLogIndex = 0;
			unsigned int nNumArrayID = 0;
			function<void(vector<unsigned int>&, unsigned int, void*) > EnumFunc= [&](vector<unsigned int>& vec, unsigned int nStack,void * pContext) {
				char szVec[128];
				nTotal[nLogIndex]++;
				//if (Num[nNumArrayID][vec[0]] < Num[nNumArrayID][vec[1]]) return;

				sprintf(szVec, "%03d:(", nMatchTotal[nLogIndex]);
				szLog[nLogIndex] += szVec;
				nMatchTotal[nLogIndex]++;
				for (int i = 0; i < nStack; i++)
				{
					sprintf(szVec, "[%d:%d]", vec[i], Num[nNumArrayID][vec[i]]);
					szLog[nLogIndex] += szVec;
					if (i != nStack - 1)
					{
						szLog[nLogIndex] += ",";
					}
				}
				szLog[nLogIndex] += ")\t";
				if (nMatchTotal[nLogIndex] % 4 == 0)
				{
					szLog[nLogIndex] += "\n";
				}
			};
			//P[4,2]
			std::function<bool(vector<unsigned int>&, unsigned int, void*)> ChipFunc = [&](vector<unsigned int>& vec, unsigned int nStack, void* pContext)->bool {
				return false;
				};
			nNumArrayID = 0;
			test.PEnum(Num[nNumArrayID].size(), 2,
				ChipFunc,
				EnumFunc,(void*)NULL);

			NPLibError("P[4,2] Count=%d\n", nTotal[nLogIndex]);
			NPLibError(szLog[nLogIndex].c_str());
			NPLibError("\nEnd Count=%d\n", nTotal[nLogIndex]);

			nLogIndex = 1;
			nNumArrayID = 0;
			//C(4,2)
			test.CEnum(Num[nNumArrayID].size(), 2,
				ChipFunc,
				EnumFunc, (void*)NULL);

			NPLibError("C[4,2] Count=%d\n", nTotal[nLogIndex]);
			NPLibError(szLog[nLogIndex].c_str());
			NPLibError("\nEnd Count=%d\n", nTotal[nLogIndex]);
			////C(8,2)
			nLogIndex = 2;
			nNumArrayID = 1;
			test.CEnum(Num[nNumArrayID].size(), 2,
				ChipFunc,
				EnumFunc, (void*)NULL);
			NPLibError("C[8,2] Count=%d\n", nTotal[nLogIndex]);
			NPLibError(szLog[nLogIndex].c_str());
			NPLibError("\nEnd Count=%d\n", nTotal[nLogIndex]);

			return;

		}
		
	private:

	};
	//退火枚举器
	

	//多名单排名,形成多个后备名单

};
