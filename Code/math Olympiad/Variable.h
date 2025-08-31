#pragma once
#include <string>
#include "LanguageLib.h"
#include <windows.h>
#include <algorithm>
//#include <>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415926
//��С������
int MinCommonMultiple(int nFactor1, int nFactor2)
{
	int nBegin = (nFactor1 > nFactor2) ? nFactor1 : nFactor2;
	int nMinMultiple = nBegin;
	for (int i = nBegin;;i++)
	{
		if (((i % nFactor1) == 0) && ((i % nFactor2) == 0))
		{
			nMinMultiple = i;
			break;
		}
	}
	return nMinMultiple;
}
//�ж�������ǲ�������
bool prime(int n)
{
	for (int i = 2;i < n;i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
//��n���ڵ�����
int withinprime(int n)
{
	int j=0;
	for (int i = 2;i <= n;i++)
	{
		bool k=prime(i);
		
		if (k == 1)
		{
			j++;
			printf("%d ", i);
		}
	}
	printf("\n");
	return j;
}
void textwithinprime()
{
	int i=withinprime(9);//2,3,5,7
}
//�������
int MaxCommonFactor(int nFactor1, int nFactor2)
{
	int nBegin = (nFactor1 > nFactor2) ? nFactor2 : nFactor1;
	int nMaxFactor = 1;
	for (int i = nBegin;i != 1;i--)
	{
		if (((nFactor1 % i) == 0) && ((nFactor2 % i) == 0))
		{
			nMaxFactor = i;
			break;
		}
	}
	return nMaxFactor;
}
void HighestCommonFactortest()
{
	int i = MaxCommonFactor(8, 12);
	printf("%d ", i);
	i = MaxCommonFactor(7, 5);
	printf("%d ", i);


	i = MinCommonMultiple(3, 4); //12
	printf("%d ", i);
	i = MinCommonMultiple(4, 6); //12
	printf("%d ", i);

	return;
}




//template<typename VarType = unsigned int>
class Fraction
{
public:
	int nNumerator;           //����
	int nDenominator;		  //��ĸ
	typedef Fraction _Myt;
	Fraction() {};
	~Fraction() {};
	Fraction(int _nNumerator,int _nDenominator)
	{
		nNumerator = _nNumerator;
		nDenominator = _nDenominator;
	}
	
	//�������̴���
	//Լ�� ���ӷ�ĸ������������� �õ��µ� nNumerator nDenominator
	void ReduceNumeratorDenominator()
	{
		int nMaxCommonFactor= MaxCommonFactor(nNumerator, nDenominator);
		nNumerator = nNumerator / nMaxCommonFactor;
		nDenominator = nDenominator / nMaxCommonFactor;
	}
	
	//���ع�����ĸ ����ͨ��
	int CommonDenominator(int nDenominatorA, int nDenominatorB)const
	{
		return MinCommonMultiple(nDenominatorA, nDenominatorB);
	}
	//��
	const _Myt  ADD(const _Myt& B) const {
		Fraction Ret;
		Ret.nDenominator = CommonDenominator(nDenominator, B.nDenominator);
		int nNewNumeratorA = (nNumerator * (Ret.nDenominator / nDenominator));
		int nNewNumeratorB = (B.nNumerator * (Ret.nDenominator / B.nDenominator));
		Ret.nNumerator = nNewNumeratorA + nNewNumeratorB;
		Ret.ReduceNumeratorDenominator();
		return Ret;
	}
	//����
	const _Myt  Dec(const _Myt& B) const {
		_Myt Ret;
		return Ret;
	}
	//�˷�
	const _Myt Mul(const _Myt& B) const {
		_Myt Ret;
		Ret.nNumerator = nNumerator * B.nNumerator;
		Ret.nDenominator = nDenominator * B.nDenominator;
		Ret.ReduceNumeratorDenominator();
		return Ret;
	}
	//����
	const _Myt Div(const _Myt& B) const {
		_Myt Ret;
		return Ret;
	}
	

	//����
	_Myt& Euq(const _Myt& B)
	{
		nNumerator = B.nNumerator;
		nDenominator = B.nDenominator;
		return *this;
	}

	
	_Myt& operator =(const _Myt& B)
	{
		return Euq(B);
	}
	const _Myt operator +(const _Myt& B) const {
		return ADD(B);
	}
	const _Myt operator -(const _Myt& B) const {
		_Myt Decj(-B.nNumerator, B.nDenominator);
		return ADD(Decj);
	}
	const _Myt operator *(const _Myt& B) const {
		return Mul(B);
	}
	const _Myt operator /(const _Myt& B) const {
		_Myt divj( B.nDenominator, B.nNumerator);
		return Mul(divj);
	}

	const _Myt operator +(const unsigned int& B) const {
		_Myt NewB(B, 1);
		return ADD(NewB);
	}
	const _Myt operator -(const unsigned int& B) const {
		_Myt NewB(B, 1);
		_Myt NewB1(-NewB.nNumerator, NewB.nDenominator);
		return ADD(NewB1);
	}
	const _Myt operator *(const unsigned int& B) const {
		_Myt NewB(B, 1);
		return Mul(NewB);
	}

	const _Myt operator /(const unsigned int& B) const {
		_Myt NewB(B, 1);
		return Mul(NewB);
	}
	
	

private:

};
	
#define PROCESS_STACK_SIZE 4096
template<typename _VarType = unsigned int>
class Variable
{
public:
	typedef _VarType VarType;
	VarType Var;
	std::string szVarName;			//��������
	std::string szProcessLog;		//������־
	typedef Variable<VarType> _Myt;
	Variable() {};
	~Variable() {};
	Variable(VarType Val, const char* pszName)
	{
		Var = Val;
		szVarName = pszName;
	}
	static const char* FmtVal(char* pszVal, Fraction & Val)
	{
		sprintf(pszVal, "%d/%d", Val.nNumerator, Val.nDenominator);
		return pszVal;
	}
	static const char* FmtVal(char* pszVal, unsigned char Val)
	{
		sprintf(pszVal, "%hhu", Val);
		return pszVal;
	}
	static const char* FmtVal(char* pszVal, unsigned short Val)
	{
		sprintf(pszVal, "%hu", Val);
		return pszVal;
	}
	static const char* FmtVal(char* pszVal, unsigned int Val)
	{
		sprintf(pszVal, "%u", Val);
		return pszVal;
	}
	static const char* FmtVal(char* pszVal, int Val)
	{
		sprintf(pszVal, "%d", Val);
		return pszVal;
	}
	static const char* FmtVal(char* pszVal, float Val)
	{
		sprintf(pszVal, "%.4f", Val);
		return pszVal;
	}
	static const char* FmtVal(char* pszVal, double Val)
	{
		sprintf(pszVal, "%.4f", Val);
		return pszVal;
	}
	
	//�������̴���
	template<typename _MytB>
	const void ProcessCommon(char* szProcess, const char* szOperator, const _MytB& B) const {
		char szProcessFmt[256];			//���̸�ʽ
		char szProcessFmtB[256];
		//const char* szFmt = GetFmt();
		if (szVarName == "_9897Temp")
		{
			if (B.szVarName == "_9897Temp")
			{
				sprintf(szProcess, "(%s) %s (%s)", szProcessLog.c_str(), szOperator, B.szProcessLog.c_str());
				//sprintf(szProcess, "%s", szProcessFmt);
			}
			else
			{
				sprintf(szProcess, "(%s) %s %s[%s]", szProcessLog.c_str(), szOperator, B.szVarName.c_str(), FmtVal(&szProcessFmtB[0], (typename _MytB::VarType&)B.Var));
				//sprintf(szProcess, szProcessFmt, B.Var);
			}


		}
		else
		{
			if (B.szVarName == "_9897Temp")
			{
				//�Լ�������ʱ������B����ʱ����
				sprintf(szProcess, "%s[%s] %s (%s)", szVarName.c_str(), FmtVal(&szProcessFmt[0], (VarType&)Var), szOperator, B.szProcessLog.c_str());
				//sprintf(szProcess, szProcessFmt, Var);
			}
			else
			{
				//�Լ���B��������ʱ����
				sprintf(szProcess, "%s[%s] %s %s[%s]", szVarName.c_str(), FmtVal(&szProcessFmt[0], (VarType&)Var), szOperator, B.szVarName.c_str(), FmtVal(&szProcessFmtB[0], (typename _MytB::VarType&)B.Var));
				//sprintf(szProcess, szProcessFmt, Var, B.Var);
			}

		}
		return;
	}
	//��
	template<typename _MytB>
	const _Myt ADD(const _MytB& B) const {
		_Myt Ret;
		Ret.Var = Var + B.Var;
		char szProcess[PROCESS_STACK_SIZE];//������־
		ProcessCommon(&szProcess[0], "+", B);
		Ret.szVarName = "_9897Temp";
		Ret.szProcessLog = szProcess;
		return Ret;
	}
	//����
	template<typename _MytB>
	const _Myt Dec(const _MytB& B) const {
		_Myt Ret;
		Ret.Var = Var - B.Var;
		char szProcess[PROCESS_STACK_SIZE];			//������־
		ProcessCommon(&szProcess[0], "-", B);
		Ret.szVarName = "_9897Temp";
		Ret.szProcessLog = szProcess;
		return Ret;
	}

	//����
	template<typename _MytB>
	const _Myt Div(const _MytB& B) const {
		_Myt Ret;
		Ret.Var = Var / B.Var;
		char szProcess[PROCESS_STACK_SIZE];			//������־
		ProcessCommon(&szProcess[0], "/", B);
		Ret.szVarName = "_9897Temp";
		Ret.szProcessLog = szProcess;
		return Ret;
	}
	
	//�˷�
	template<typename _MytB>
	const _Myt Mul(const _MytB& B) const {
		_Myt Ret;
		Ret.Var = Var * B.Var;
		char szProcess[PROCESS_STACK_SIZE];			//������־
		ProcessCommon(&szProcess[0], "*", B);
		Ret.szVarName = "_9897Temp";
		Ret.szProcessLog = szProcess;
		return Ret;
	}
	//ȡ��
	template<typename _MytB>
	const _Myt modulo(const _MytB& B) const {
		_Myt Ret;
		Ret.Var = Var % B.Var;
		char szProcess[PROCESS_STACK_SIZE];			//������־
		ProcessCommon(&szProcess[0], "%", B);
		Ret.szVarName = "_9897Temp";
		Ret.szProcessLog = szProcess;
		return Ret;
	}
	//����
	_Myt& Euq(const _Myt& V)
	{
		char szProcess[PROCESS_STACK_SIZE];//������־
		char szProcessFmt[256];//ֵ��ʽ��
		char szProcessFmtV[256];//ֵ��ʽ��
		Var = V.Var;
		if (V.szVarName == "_9897Temp")
		{
			//�м���ʱ���� �����������
			//const char* szFmt = GetFmt();
			sprintf(szProcess, "%s[%s]=(%s)", szVarName.c_str(), FmtVal(&szProcessFmt[0], (VarType&)Var), V.szProcessLog.c_str());
			//sprintf(szProcess, szProcessFmt, Var);
			szProcessLog = szProcess;
		}
		else
		{
			//�û�����ı��� ������������
			//const char* szFmt = GetFmt();
			sprintf(szProcess, "%s[%s]=%s[%s]", szVarName.c_str(), FmtVal(&szProcessFmt[0], (VarType&)Var), V.szVarName.c_str(), FmtVal(&szProcessFmtV[0], (VarType&)V.Var));
			//sprintf(szProcess, szProcessFmt, Var, V.Var);
			szProcessLog = szProcess;
		}
		return *this;
	}
	_Myt& operator =(const _Myt& V)
	{
		return Euq(V);
	}
	
	template<typename _MytB>
	const _Myt operator +(const _MytB& B) const {
		return ADD(B);
	}
	template<typename _MytB>
	const _Myt operator -(const _MytB& B) const {
		return Dec(B);
	}
	template<typename _MytB>
	const _Myt operator *(const _MytB& B) const {
		return Mul(B);
	}
	template<typename _MytB>
	const _Myt operator /(const _MytB & B) const {
		return Div(B);
	}
	template<typename _MytB>
	const _Myt operator %(const _MytB& B) const {
		return modulo(B);
	}
	/*
	const _Myt operator /(const Fraction & B) const {

		return Div(B);
	}
	*/
	//ת����int����
	
	operator int (){
		return (int)Var;
	}
	void PrintProcessLog()
	{
		/*
		print('\033[1;37;40m����һ�к�ɫ���Ա���\033[0m')

		print('\033[1;37;41m����һ�к�ɫ���Ա���\033[0m')

		print('\033[1;37;42m����һ����ɫ���Ա���\033[0m')

		print('\033[1;37;43m����һ�л�ɫ���Ա���\033[0m')

		print('\033[1;37;44m����һ����ɫ���Ա���\033[0m')

		print('\033[1;37;45m����һ�������Ա���\033[0m')

		print('\033[1;37;46m����һ����ɫ���Ա���\033[0m')

		print('\033[1;37;47m����һ�а�ɫ���Ա���\033[0m')
		*/
		printf("\033[0;32;5m%s\033[0m\n", szProcessLog.c_str());
	}
	void PrintProcessLog(unsigned int nStep)
	{
		printf("\033[0;32;5m%d. %s\033[0m\n", nStep, szProcessLog.c_str());
	}
private:

};

//����һ����������ʼ��
#define DefineVar(_Type,_Name,Var) Variable<_Type> _Name(Var,#_Name);
#define DefineLangVar(_Type,_Name,Var) Variable<_Type> _Name(Var,Lang(#_Name));
#define DefineLangVarInt(_Name,Var) DefineLangVar(int,_Name,Var);
#define DefineLangVarFloat(_Name,Var) DefineLangVar(float,_Name,Var);
#define DefineFractionVar(_Name,_nNumerator, _nDenominator) Variable<Fraction> _Name(Fraction(_nNumerator, _nDenominator),#_Name);
#define DefineFractionLangVar(_Name,_nNumerator, _nDenominator) Variable<Fraction> _Name(Fraction(_nNumerator, _nDenominator),Lang(#_Name));

//��ɫ��ӡ
//��ɫ��ӡ
enum PrintfCol
{
	White = 37,
	Red = 31,
	Green = 32,
	Yellow = 33,
	Blue = 34,
	Black = 30,
	
	����= White,
	���� = Blue,
	���� = Blue,
	��� = Red,
	������־=Green,
	�����ע= White,
	BG_White=47,
	BG_Red=41,
	BG_Green = 42,
	BG_Yellow=43,
	BG_Blue=44,
	BG_Black = 40,
	
};
#define ColPrintf(Col,pszFmt,...) {\
	char szFmt[4096];\
	sprintf(szFmt,"\033[0;%dm%s\033[0m\n",Col,pszFmt);\
	printf(szFmt,__VA_ARGS__);\
}\

namespace Test
{
	void TestVariable()
	{
		/*
		Variable<unsigned int> A(1,"A");
		Variable<unsigned int> B(2,"B");
		Variable<unsigned int> C(0, "C");
		Variable<unsigned int> D(0, "D");
		*/
		DefineVar(unsigned int, A, 1);
		DefineVar(unsigned int, B, 2);
		DefineVar(unsigned int, C, 0);
		DefineVar(unsigned int, D, 0);
		//A+B�õ�һ�����ص���ʱ����Temp ����C�ĵ��ںź���
		//C = A + B;��C = A.ADD(B);�ȼ�
		//C = A.ADD(B);��C.Euq(A.ADD(B));�ȼ�
		C = A + B;
		C.PrintProcessLog();
		C = B;
		C.PrintProcessLog();

		A = C + B;
		A.PrintProcessLog();

		D = (A + B) / C;
		D.PrintProcessLog();

		D = (A - B) * C;
		D.PrintProcessLog();
		/*
			C[3]=(A[1] + B[2])
			C[2]=B[2]
			A[4]=(C[2] + B[2])
			D[3]=((A[4] + B[2]) / C[2])
			D[4]=((A[4] - B[2]) * C[2])
		*/
		return;
	}

	void TestFraction()
	{
		Fraction temp;
		Fraction A(1,2);
		Fraction B(1,3);
		Fraction C = A + B;//C=A.ADD(B);
		//temp = temp.ADD(A, B);
		printf("+:%d/%d\n",  C.nNumerator, C.nDenominator );//5/6
		C = A - B;
		printf("-:%d/%d\n", C.nNumerator, C.nDenominator);// 1/6
		C = A * B;
		printf("*:%d/%d\n", C.nNumerator, C.nDenominator);// 1/6
		C = A / B;
		printf("/:%d/%d\n", C.nNumerator, C.nDenominator);// 2/3
	}
	//���̷���
	void TestFractionProcess()
	{
		Fraction temp;
		//Fraction A(1,2);
		//Fraction B(1,3);
		//Fraction C = A + B;//C=A.ADD(B);
		DefineFractionVar(A, 1, 2);
		DefineFractionVar(B, 1, 3);
		DefineFractionVar(C, 0, 1);
		DefineVar(unsigned int, D, 5);
		//temp = temp.ADD(A, B);
		C = A + B;
		C.PrintProcessLog();
		C = A - B;
		C.PrintProcessLog();
		C = A * B;
		C.PrintProcessLog();
		C = A / B;
		C.PrintProcessLog();

		C = (A + B)/D;
		C.PrintProcessLog();
		
		return;
	}
}

struct MathLib
{
	static int get_sign_bit(float f) {
		uint32_t* p = (uint32_t*)&f; // ��floatָ��ת��Ϊuint32_tָ���Է������ڴ��ʾ
		return (*p >> 31) & 1; // ����31λ��ȡ���λ
	}
	//��֪W(x,y) ��W����X��ļнǣ���һ�����ֵ��1.0
	static float atan2(float x, float y)
	{
		float fAngle = 0.0;
		if (fabs(x) < 0.000001)
		{
			//x����0�����
			if (y > 0.0)
			{
				fAngle = PI / 2;
			}
			else
			{
				fAngle = (3 * PI) / 2;
			}
		}
		else {
			//-PI/2��PI/2
			fAngle = atan(y / x);
			//1�Ǹ���
			if (get_sign_bit(fAngle) == 1)
			{
				if ((fAngle > -0.000001))
				{
					fAngle = PI;
				}
			}
			// ���� x y�������޽� fAngle�任��0 - 2PI
			if ((x > 0.0) && (y > 0.0))
			{
				//��һ����
			}
			else if ((x < 0.0) && (y > 0.0))
			{
				//�ڶ����� 180+Angle
				fAngle = PI + fAngle;
			}
			else if ((x < 0.0) && (y < 0.0))
			{
				//�������� 180+Angle
				fAngle = PI + fAngle;
			}
			else if ((x > 0.0) && (y < 0.0))
			{
				//�������� 180-Angle
				fAngle = (2 * PI) + fAngle;
			}
		}
		//��һ������0-2PI�任��0-1.0
		fAngle = fAngle / (2 * PI);
		return fAngle;
	}
	
	static void atan2Test()
	{
		float edge = 0.707;
		float fAngle[4];
		//��һ����
		fAngle[0] = atan2(edge, edge);
		//�ڶ�����
		fAngle[1] = atan2(-edge, edge);
		//��������
		fAngle[2] = atan2(-edge, -edge);
		//��������
		fAngle[3] = atan2(edge, -edge);
		printf("atan2Test %.2f %.2f %.2f %.2f \n", fAngle[0], fAngle[1], fAngle[2], fAngle[3]);

		fAngle[0] = atan2(0.0, edge);
		//90�� -90��
		fAngle[1] = atan2(0.0, -edge);
		printf("atan2Test %.2f %.2f\n", fAngle[0], fAngle[1]);

		//180 
		fAngle[0] = atan2(-1.0, 0.0);
		//0��
		fAngle[1] = atan2(1.0, 0.0);
		printf("atan2Test %.2f %.2f\n", fAngle[0], fAngle[1]);
		return;
	}
};

//����
#define ScanLenBeginEnd(_Screen,_LineNum,_Begin,_Len)

#define ScanLenHorizontalLine(_Screen,_LineNum,_Begin,_Len,_fLenHigh) _Screen.AddScanLineByEdgeGradient(_LineNum, _fLenHigh, _Begin, _Begin+_Len, 0.0, 0.0, '*');
#define ScanLenHorizontalLine1(_Screen,_LineNum,_Begin,_Len,_fLenHigh) _Screen.AddScanLineByEdgeGradient(_LineNum, _fLenHigh, _Begin, _Begin+_Len, 0.0, 0.0, ' ');
template<int nW=18,int nH=6,int nLinePixel=9, int nRowPixel = 3>
struct ScanningLine
{
	//�������ģʽ
	enum FillMode
	{
		EdgeMode = 1,		//�����ģʽ
		RealMode = 2,		//ʵ�����ģʽ
	};
	//ɨ����
	struct Line
	{
		float fLineNum; //�����к�
		float fBegin;
		float fEnd;
		float fH;       //ɨ���߸߶�,������0.3�и߶�
		int  nZ;   //Z����
		char cTexture;
	};
	//���ֱ�ע
	struct Text
	{
		float fLineNum;		//�����к�
		float fBeginRow;
		PrintfCol nCol;		//��ɫ
		std::string szText;
	};

	//2D��
	struct Point
	{
		float fX;
		float fY;
		Point() {}
		Point(const float& _fX, const float& _fY)
		{
			fX = _fX;
			fY = _fY;
		}
		Point& operator = (const Point& B)
		{
			fX = B.fX;
			fY = B.fY;
			return *this;
		}
		Point operator + (Point & B)
		{
			Point Rst;
			Rst.fX = fX + B.fX;
			Rst.fY = fY + B.fY;
			return Rst;
		}
		Point operator - (Point& B)
		{
			Point Rst;
			Rst.fX = fX - B.fX;
			Rst.fY = fY - B.fY;
			return Rst;
		}
		Point & operator += (Point& B)
		{
			fX = fX + B.fX;
			fY = fY + B.fY;
			return *this;
		}
	};

	

	//��Χ�����ݽṹ
	struct IncludeBox 
	{
		//IncludeBox() {}
		Point BeginPos;			//���ϵ�
		Point EndPos;			//���µ�

		IncludeBox& operator = (const Point& B)
		{
			BeginPos = B;
			EndPos = B;
			return *this;
		}

		bool BoxHit(Point& TestPoint, char& RstMode)
		{
			bool bMatched = false;
			if ((TestPoint.fX > BeginPos.fX) &&
				(TestPoint.fX < EndPos.fX) &&
				(TestPoint.fY > BeginPos.fY) &&
				(TestPoint.fY < EndPos.fY))
			{
				bMatched = true;
				float fEdgeTest=0.03;
				RstMode = FillMode::RealMode;

				if ((TestPoint.fX - BeginPos.fX) < fEdgeTest) RstMode = FillMode::EdgeMode;
				if ((EndPos.fX-TestPoint.fX) < fEdgeTest) RstMode = FillMode::EdgeMode;
				if ((TestPoint.fY - BeginPos.fY) < fEdgeTest) RstMode = FillMode::EdgeMode;
				if ((EndPos.fY- TestPoint.fY) < fEdgeTest) RstMode = FillMode::EdgeMode;
			}
			return bMatched;
		}
		bool Hit(Point& TestPoint, char MatchMode, char& RstMode)
		{
			bool bMatched = false;
			if (BoxHit(TestPoint, RstMode))
			{
				if (MatchMode == FillMode::EdgeMode)
				{
					if (RstMode == FillMode::EdgeMode)
					{
						bMatched = true;
					}
					else
					{
						//���ڱ��ϵĲ���
						bMatched = false;
					}
				}
				else {
					bMatched = true;
				}
			}
			return bMatched;
		}
	};

	template<typename ParentT>
	struct ShapeBase
	{
		//���Ѵ��ڵİ�Χ������Ӱ�Χ��
		void AddBox(IncludeBox& Box)
		{
			IncludeBox SelfBox;
			((ParentT*)this)->GetBox(SelfBox);
			Box.BeginPos.fX = min(Box.BeginPos.fX, SelfBox.BeginPos.fX);
			Box.BeginPos.fY = min(Box.BeginPos.fY, SelfBox.BeginPos.fY);
			Box.EndPos.fX = max(Box.EndPos.fX, SelfBox.EndPos.fX);
			Box.EndPos.fY = max(Box.EndPos.fY, SelfBox.EndPos.fY);

		}
	};

	//������
	struct TriangleBase: public ShapeBase<TriangleBase>
	{
		Point P[3];
		
		//����������AOB�����2�� |AO|*|BO|*Sin(��AOB)=2*SAOB
		static float CrossLength2D(Point & O, Point& A, Point& B)
		{
			Point AO = A - O;
			Point B0 = B - O;
			float fSaobMul2 = (AO.fX * B0.fY) - (AO.fY * B0.fX);
			return fabs(fSaobMul2);
		}
		//�����������е�uv���� ,�ٶ�����������������
		static bool GetPointTriangleUv(Point & TestPoint, Point & FaceVexA, Point & FaceVexO, Point & FaceVexC, OUT Point & UV,OUT char & nMode,bool &bAngleEdge)
		{
			//pa=Point-a
			//pa=u*ab+v*ac         ��������
			//p=(1.0-u-v)*A+ u*B + v*C
			//pa=u*BA+v*CA
			//�������uv
			//p1 = S(PBC) / S(ABC)��
			//p2 = S(PAC) / S(ABC)��u=p2
			//p3 = S(PAB) / S(ABC)��v=p3
			bAngleEdge = false;
			float Sabc = CrossLength2D(FaceVexA, FaceVexO, FaceVexC);
			float Spac = CrossLength2D(TestPoint, FaceVexA, FaceVexC);
			float Spab = CrossLength2D(TestPoint, FaceVexA, FaceVexO);
			float Spbc = CrossLength2D(TestPoint, FaceVexO, FaceVexC);

			UV.fX = Spac / Sabc;
			UV.fY = Spab / Sabc;
			if (Spac / Sabc < 0.025) bAngleEdge = true;
			float fProportion = (Spbc + Spac + Spab) / Sabc;
			
			bool bOK = fProportion< 1.01 ? true : false;
			if (bOK)
			{
				float fEdgeTest = 0.025;
				if ((Spbc/Sabc < fEdgeTest)|| (Spac / Sabc < fEdgeTest)|| (Spab / Sabc < fEdgeTest))
				{
					nMode = FillMode::EdgeMode;
				}
				else
				{
					nMode = FillMode::RealMode;
				}
			}
			
			/*
				4�����ķ�������P��������ABC�ڲ��������������ߵ�������Ϊ���������ֱ����ϵ��u��v�ɱ�ʾ��P�����У�u��0��v��0��u+v��1
				�����Ե�AΪԭ�㣬���������ڲ��κ�һ��P���ɱ�ʾΪ��
				AP=u*AB+v*AC������u��0��v��0��u+v��1��
				����ͼ��ʾ��u=0,v=0����P��A�㣬u=1��v=0����P��B�㣬u=0,v=1����P��C��
				����δ֪����Ҫ�������̣���������߷ֱ����AC��AB�����������̣�
				��1��AP*AB=u*AB*AB+v*AC*AB
				��2��AP*AC=u*AB*AC+v*AC*AC
				����ģ�
				u=((AC*AC)(AP*AB)-(AC*AB)(AP*AC))/((AB*AB)(AC*AC)-(AB*AC)(AC*AB))
				v=((AB*AB)(AP*AC)-(AB*AC)(AP*AB))/((AB*AB)(AC*AC)-(AB*AC)(AC*AB))
			*/
			/*
			glm::vec3 AB = FaceVexB - FaceVexA;
			glm::vec3 AC = FaceVexC - FaceVexA;
			glm::vec3 AP = Point - FaceVexA;
			glm::vec3 div = (((AB * AB)*(AC * AC)) - ((AB * AC)*(AC * AB)));
			glm::vec3 U = (((AC * AC)*(AP * AB)) - ((AC * AB)*(AP * AC))) / div;
			glm::vec3 V = (((AB * AB)*(AP * AC)) - ((AB * AC)*(AP * AB))) / div;
			MESH_DEBUG("GetPointTriangleUv P=[%.4f %.4f %.4f] UV=[%.4f %.4f] U=[%.4f %.4f] V=[%.4f %.4f]", Point.x, Point.y, Point.z, UV.x, UV.y,
				U.x, U.y, U.z, V.x, V.y, V.z);
			*/


			return bOK;
		}

		//��ʼ����Χ��
		void GetBox(IncludeBox& Box)
		{
			float fEdgeAdd = 0.1;
			Box.BeginPos.fX = min(min(P[0].fX, P[1].fX), P[2].fX);
			Box.BeginPos.fY = min(min(P[0].fY, P[1].fY), P[2].fY);

			Box.BeginPos.fX -= fEdgeAdd;
			Box.BeginPos.fY -= fEdgeAdd;

			Box.EndPos.fX = max(max(P[0].fX, P[1].fX), P[2].fX);
			Box.EndPos.fY = max(max(P[0].fY, P[1].fY), P[2].fY);

			Box.EndPos.fX += fEdgeAdd;
			Box.EndPos.fY += fEdgeAdd;
		}
		// �жϵ��Ƿ���ͼ���ڲ� 
		bool Hit(Point& TestPoint, char MatchMode, char& RstMode, bool & bAngleEdge)
		{
			//������Ļ��W�����굽��������Բ������ϵ
			//float fWX = (float(nScreenBeginPosX + s) / float(nLinePixel)) - m_SectorArray[nSectorPos].fOx;
			//float fWY = m_SectorArray[nSectorPos].fOy - (float(nScreenBeginPosY + j) / float(nRowPixel));
			bool bMatched = false;
			Point UV;
			bAngleEdge = false;
			if (GetPointTriangleUv(TestPoint, P[0], P[1], P[2], UV, RstMode, bAngleEdge))
			{
				if (MatchMode == FillMode::EdgeMode)
				{
					if (RstMode == FillMode::EdgeMode)
					{
						bMatched = true;
					}
					else
					{
						//���ڱ��ϵĲ���
						bMatched = false;
					}
				}
				else {
					bMatched = true;
				}
			}
			return bMatched;

		}
		bool Hit(Point& TestPoint, char MatchMode, char& RstMode)
		{
			bool bAngleEdge = false;
			return Hit(TestPoint, MatchMode, RstMode, bAngleEdge);
		}

		bool Hit(Point& TestPoint)
		{
			bool bAngleEdge = false;
			char RstMode = FillMode::RealMode;
			return Hit(TestPoint, FillMode::RealMode, RstMode, bAngleEdge);
		}
	};
	

	struct Triangle :public TriangleBase
	{
		char cTex;					//�����ַ�
		char nMode;					//����ģʽ ʵ����� �����
		int  nZ;
	};
	//�����
	struct PolygonBase :public ShapeBase<PolygonBase>
	{
		std::vector<TriangleBase> m_TriangleArray;
		Point m_O;//ԭ��
		IncludeBox m_Box;
		void Init(const Point& O,std::vector<Point>& VexArray)
		{
			m_O = O;
			for (int nIndex = 1;nIndex < VexArray.size();nIndex++)
			{
				TriangleBase Tri;
				Tri.P[1] = m_O;
				Tri.P[0] = VexArray[nIndex-1];
				Tri.P[2] = VexArray[nIndex];
				m_TriangleArray.push_back(Tri);
			}
			m_Box = O;
			GetBox(m_Box);
			
		}
		//��ʼ����Χ��
		void GetBox(IncludeBox& Box)
		{
			for (int i=0;i< m_TriangleArray.size();i++)
			{
				m_TriangleArray[i].AddBox(Box);
			}
		}
		// �жϵ��Ƿ���ͼ���ڲ� 
		bool Hit(Point& TestPoint, char MatchMode, char& RstMode)
		{
			//������Ļ��W�����굽��������Բ������ϵ
			//float fWX = (float(nScreenBeginPosX + s) / float(nLinePixel)) - m_SectorArray[nSectorPos].fOx;
			//float fWY = m_SectorArray[nSectorPos].fOy - (float(nScreenBeginPosY + j) / float(nRowPixel));
			bool bMatched = false;
			Point UV;
			char nBoxRstMode;
			if (m_Box.Hit(TestPoint, FillMode::RealMode, nBoxRstMode)==false)
			{
				return bMatched;
			}
			//������Χ���޳�
			char nTriRstMode= FillMode::RealMode;
			char nLastTriRstMode= FillMode::RealMode;
			Point TestPointO = TestPoint - m_O;
			//��ʼ������
			Point BeginEdge = m_TriangleArray[0].P[0] - m_O;
			//��ֹ������
			Point EndEdge = m_TriangleArray[m_TriangleArray.size() - 1].P[2] - m_O;
			//����TestPointO��ԭ�����
			float fTestPointOLen = sqrt((TestPointO.fX * TestPointO.fX) + (TestPointO.fY * TestPointO.fY));

			for (int i=0;i< m_TriangleArray.size();i++)
			{
				bool bAngleEdge = false;
				if (m_TriangleArray[i].Hit(TestPoint, MatchMode, nTriRstMode, bAngleEdge))
				{
					if (MatchMode == FillMode::EdgeMode)
					{
						RstMode = nTriRstMode;
						bool bBeginEndEdge = false;
						if (i == 0)
						{
							//��ʼ���ж�
							if ((fabs(MathLib::atan2(BeginEdge.fX, BeginEdge.fY) - MathLib::atan2(TestPointO.fX, TestPointO.fY)) * fTestPointOLen) < 0.01)
								bBeginEndEdge = true;
						}

						if (i == (m_TriangleArray.size()-1))
						{
							//��ֹ���ж�
							if ((fabs(MathLib::atan2(EndEdge.fX, EndEdge.fY) - MathLib::atan2(TestPointO.fX, TestPointO.fY)) * fTestPointOLen) < 0.01)
								bBeginEndEdge = true;
						}
						//if (i >= 1)
						{
							//(nTriRstMode == FillMode::EdgeMode) && (nLastTriRstMode == FillMode::EdgeMode)&&
							if ((bAngleEdge==false)&&(bBeginEndEdge==false))
							{
								//�ڱ� ����Ϊʵ
								RstMode = FillMode::RealMode;
							}
						}

						if (RstMode == FillMode::EdgeMode)
						{
							bMatched = true;
						}
						else
						{
							//���ڱ��ϵĲ���
							bMatched = false;
						}

					}
					else
					{
						bMatched = true;
						break;
					}
					nLastTriRstMode = nTriRstMode;
				}
			}
			
			return bMatched;
		}

		bool Hit(Point& TestPoint)
		{
			char RstMode = FillMode::RealMode;
			return Hit(TestPoint, FillMode::RealMode, RstMode);
		}

	};
	
	struct Polygon: public PolygonBase
	{
		char cTex;					//�����ַ�
		char nMode;					//����ģʽ ʵ����� �����
		int  nZ;
	};
	

	//�����դ��
	struct Sector :public ShapeBase<Sector>
	{
		
		float fOx; //Բ������x
		float fOy; //Բ������y
		float fR;  //Բ�뾶
		float fSectorBeginAngle;	//������ʼ��
		float fSectorEndAngle;		//������ֹ��
		char cTex;					//�����ַ�
		char nMode;					//����ģʽ ʵ����� �����
		int  nZ;
		
		//��ʼ����Χ��
		void GetBox(IncludeBox& Box)
		{
			Box.BeginPos.fX = fOx - fR;
			Box.BeginPos.fY = fOy - fR;

			Box.EndPos.fX = fOx + fR;
			Box.EndPos.fY = fOy + fR;
		}
		// �жϵ��Ƿ���ͼ���ڲ� 
		bool Hit(Point & point, char MatchMode, char & RstMode)
		{
			//������Ļ��W�����굽��������Բ������ϵ
			//float fWX = (float(nScreenBeginPosX + s) / float(nLinePixel)) - m_SectorArray[nSectorPos].fOx;
			//float fWY = m_SectorArray[nSectorPos].fOy - (float(nScreenBeginPosY + j) / float(nRowPixel));
			bool bMatched = false;
			float fWX = point.fX- fOx;
			float fWY = fOy-point.fY;
			//�㵽Բ�ľ����ж�
			float fWR2 = ((fWX * fWX) + (fWY * fWY));
			//if (fWR2 < fMinR) fMinR = fWR2;
			float fWR = sqrt(fWR2);

			float fTestR =fR;// +0.2;
			float fTestR2 = fTestR * fTestR;
			if (fWR2 < (fTestR2 + 0.1))
			{
				float fAngle = MathLib::atan2(fWX, fWY);
				//�Ƿ�Χ�ж�
				if ((fAngle > (fSectorBeginAngle - 0.001)) && (fAngle < (fSectorEndAngle + 0.001)))
				{
					//�����Ƿ��ڱ���
					bool bEdgeMode = false;
					if (MatchMode == FillMode::EdgeMode)
					{
						//�ű߰뾶��Ȩ�ж�
						if (fabs(fAngle - fSectorBeginAngle) < (0.01 / fWR)) bEdgeMode = true;
						if (fabs(fAngle - fSectorEndAngle) < (0.01 / fWR)) bEdgeMode = true;

						if (fabs(fWR - fR) < 0.1) bEdgeMode = true;

						if (bEdgeMode)
						{
							RstMode = FillMode::EdgeMode;
							bMatched = true;
						}
						else
						{
							//���ڱ��ϵĲ���
							bMatched = false;
						}
					}
					else {
						RstMode= FillMode::RealMode;
						bMatched = true;
					}

				}
			}
			return bMatched;
		}
		// �жϵ��Ƿ���ͼ���ڲ� 
		bool Hit(Point& point)
		{
			char RstMode;
			return Hit(point, FillMode::RealMode,RstMode);
		}
	};

	char cFrameFuffer[(nH* nRowPixel) + 1][(nW * nLinePixel)+1];
	std::vector<Line> m_ScanLine;		//ɨ���������
	std::vector<Text> m_TextArray;		//�ı������
	std::vector<Sector> m_SectorArray;		//���������
	std::vector<Triangle> m_TriangleArray; //�����������
	std::vector<Polygon> m_PolygonArray; //������������
	//����
	unsigned int AddSector(float fOx,float fOy,float fR,float fSectorBeginAngle,float fSectorEndAngle,char nMode, char cTex='*', int nZ = 0)
	{
		Sector s;
		s.fOx = fOx;
		s.fOy = fOy;
		s.fR = fR;

		s.fSectorBeginAngle = fmod(fSectorBeginAngle/360,1.0);
		s.fSectorEndAngle = fmod(fSectorEndAngle/360,1.0);
		s.nMode = nMode;
		s.cTex = cTex;
		s.nZ = nZ;
		m_SectorArray.push_back(s);
		return m_SectorArray.size() - 1;
	}
	Sector* SectorN(unsigned int nSectorIndex)
	{
		return &m_SectorArray[nSectorIndex];
	}
	//������
	unsigned int AddTriangle(Point A, Point B, Point C, char nMode, char cTex = '*', int nZ = 0)
	{
		Triangle Tri;
		Tri.P[0] = A;
		Tri.P[1] = B;
		Tri.P[2] = C;
		Tri.nMode = nMode;
		Tri.cTex = cTex;
		Tri.nZ = nZ;
		m_TriangleArray.push_back(Tri);
		return m_TriangleArray.size() - 1;
	}
	Triangle* TriangleN(unsigned int nTriangleIndex)
	{
		return &m_TriangleArray[nTriangleIndex];
	}
	//�����
	unsigned int AddPolygon(const Point& O, std::vector<Point>& VexArray, char nMode, char cTex = '*', int nZ = 0)
	{
		Polygon Pol;
		Pol.nMode = nMode;
		Pol.cTex = cTex;
		Pol.nZ = nZ;
		m_PolygonArray.push_back(Pol);
		unsigned int nIndex = m_PolygonArray.size() - 1;
		m_PolygonArray[nIndex].Init(O, VexArray);
		return nIndex;
	}
	Polygon* PolygonN(unsigned int nPolygonIndex)
	{
		return &m_PolygonArray[nPolygonIndex];
	}
	//�߱任���ı���
	unsigned int AddLine(const Point& Begin, const Point& End, float fW, char nMode, char cTex = '*', int nZ = 0)
	{
		float fHalfW = fW / 2.0;
		//б��
		float fK = (Begin.fX - End.fX) / (Begin.fY - End.fY);
		float fK2 = fK * fK;
		float dx = sqrt((fW * fW) / (4 * (1 + fK2)));
		dx = (fK > 0) ? dx : -dx;
		float dy = dx * fK;
		dy = -dy;
		Point O= Point(Begin.fX+dx,Begin.fY+dy);
		std::vector<Point> VexArray = { Point(Begin.fX - dx,Begin.fY - dy) ,Point(End.fX - dx,End.fY - dy),Point(End.fX + dx,End.fY + dy) };
		if (fabs(Begin.fY - End.fY) < 0.0001)
		{
			//����
			O = Point(Begin.fX, Begin.fY - fHalfW);
			VexArray = { Point(Begin.fX,Begin.fY + fHalfW) ,Point(End.fX,End.fY + fHalfW),Point(End.fX,End.fY - fHalfW) };
		}
		if (fabs(Begin.fX - End.fX) < 0.0001)
		{
			//����
			O = Point(Begin.fX+ fHalfW, Begin.fY);
			VexArray = { Point(Begin.fX - fHalfW,Begin.fY) ,Point(End.fX - fHalfW,End.fY),Point(End.fX + fHalfW,End.fY) };
		}
		return AddPolygon(O, VexArray, nMode, cTex, nZ);
	}
	void AddScanLine(float fLineNum, float fBegin, float fEnd,char cTexture='0', int nZ=0)
	{
		Line line;
		line.fLineNum = fLineNum;
		line.fBegin = fBegin;
		line.fEnd = fEnd;
		line.cTexture = cTexture;
		line.nZ = nZ;
		m_ScanLine.push_back(line);
	}
	//ͨ����ʼ����ֹ��б������ɨ����
	void AddScanLineByEdgeGradient(float fBeginLineNum,float fLineCount, float fBeginEdge, float fEndEdge,float dBeginEdgeStep,float dEndEdgeStep, char cTexture = '0', int nZ = 0)
	{
		float fEndScanningLinePos = fBeginLineNum + fLineCount;
		bool bOver = false;
		for (float fLineOffset= 0;fLineOffset <fLineCount;fLineOffset +=1.0)
		{
			float fLinePos = fBeginLineNum+float(fLineOffset);
			//����ƫ��
			float fLineBeginOffset = fLineOffset * dBeginEdgeStep;
			float fLineEndOffset = fLineOffset * dEndEdgeStep;
			float dBeginEdgeRow = (dBeginEdgeStep / float(nRowPixel));
			float dEndEdgeRow = (dEndEdgeStep / float(nRowPixel));
			for (unsigned int nScanningLine=0;nScanningLine< nRowPixel;nScanningLine++)
			{
				float fScanningLinePos = fLinePos + ((nScanningLine) * (1.0 / float(nRowPixel)));
				if (fScanningLinePos > fEndScanningLinePos) {
					bOver = true;
					break;
				}

				Line ScanningLine;
				ScanningLine.fLineNum = fScanningLinePos;
				float fScanningLineBeginOffset = dBeginEdgeRow * nScanningLine;
				//��ʼ+����ƫ��+������ƫ��
				ScanningLine.fBegin = fBeginEdge+ fLineBeginOffset+fScanningLineBeginOffset;

				float fScanningLineEndOffset = dEndEdgeRow * float(nScanningLine);
				
				//����+����ƫ��+������ƫ��
				ScanningLine.fEnd= fEndEdge + fLineEndOffset + fScanningLineEndOffset;
				ScanningLine.fH = 1.0;
				if (fEndScanningLinePos - fScanningLinePos< 1.0)
				{
					ScanningLine.fH = fEndScanningLinePos-fScanningLinePos;
				}
				ScanningLine.cTexture = cTexture;
				ScanningLine.nZ = nZ;
				m_ScanLine.push_back(ScanningLine);
			}
			if (bOver) break;
		}
	}
	//��֧�ֻ����Ʊ�
	//float fBeginLineNum	��ʼ�� 
	//float fBeginRow		��ʼ��
	void AddText(PrintfCol nTextCol, float fBeginLineNum, float fBeginRow, const char* pText)
	{
		Text txt;
		txt.nCol = nTextCol;
		txt.fLineNum = fBeginLineNum;
		txt.fBeginRow = fBeginRow;// *nRowPixel;
		txt.szText = pText;
		m_TextArray.push_back(txt);
	}
	//����
	void Clear(char nChar='-')
	{

		for (int i = 0;i < nH * nRowPixel;i++)
		{
			for (int j = 0;j < nW * nLinePixel;j++)
			{
				cFrameFuffer[i][j] = nChar;
			}
			cFrameFuffer[i][(nW * nLinePixel)] = '\n';
		}
		cFrameFuffer[nH * nRowPixel][0] = 0;
		
	}
	//�����������
	void ClearOp()
	{
		m_ScanLine.clear();
		m_SectorArray.clear();
		m_TriangleArray.clear();
		m_TextArray.clear();
		m_PolygonArray.clear();
	}
	template<typename ShapeT>
	void DrawShape(ShapeT & Array, int nCurZ)
	{
		unsigned int nSectorPos = 0;
		for (;nSectorPos < Array.size();nSectorPos++)
		{
			if (Array[nSectorPos].nZ != nCurZ)
				break;

			IncludeBox Box;
			Array[nSectorPos].GetBox(Box);
			BoxChip(Box);
			//ȷ����ӷ��α߳���ʼ������ 
			float fBeginPosX = Box.BeginPos.fX;
			float fBeginPosY = Box.BeginPos.fY;
			float fEdgeLenX = Box.EndPos.fX - Box.BeginPos.fX;
			float fEdgeLenY = Box.EndPos.fY - Box.BeginPos.fY;

			//��������������Ͻ�������ʼ����� ��Ļ x y������������
			unsigned int nScreenBeginPosX = fBeginPosX * nLinePixel;
			unsigned int nScreenBeginPosY = fBeginPosY * nRowPixel;
			unsigned int nScreenEdgeLenX = (fEdgeLenX * nLinePixel) + 1;
			unsigned int nScreenEdgeLenY = (fEdgeLenY * nRowPixel) + 1;
			//ö������������
			float fMinR = 100.0;
			for (unsigned int j = 0;j < nScreenEdgeLenY;j++)
			{
				//float fWY = m_SectorArray[i].fOy - (float(nScreenBeginPosY + j) / float(nRowPixel));
				fMinR = 100.0;
				for (unsigned int s = 0;s < nScreenEdgeLenX;s++)
				{
					//������Ļ��W�����굽��������Բ������ϵ

					//float fWX = (float(nScreenBeginPosX + s) / float(nLinePixel)) - m_SectorArray[nSectorPos].fOx;
					//float fWY = m_SectorArray[nSectorPos].fOy - (float(nScreenBeginPosY + j) / float(nRowPixel));
					float fWX = (float(nScreenBeginPosX + s) / float(nLinePixel));
					float fWY = (float(nScreenBeginPosY + j) / float(nRowPixel));
					Point P;
					P.fX = fWX;
					P.fY = fWY;
					char RstMode;
					if (Array[nSectorPos].Hit(P, Array[nSectorPos].nMode, RstMode))
					{
						cFrameFuffer[nScreenBeginPosY + j][nScreenBeginPosX + s] = Array[nSectorPos].cTex;
					}
				}
			}
		}
	}
	//����ɨ���߻��Ƶ�֡����
	void Draw()
	{
		//Z����
		/*
		[&](const void* pA, const void* pB)->int {
			return ((Line*)pA)->nZ - ((Line*)pB)->nZ;
			}
			*/
		std::sort(m_ScanLine.begin(), m_ScanLine.end(), [&](const Line & pA, const  Line& pB)->int {
			return pA.nZ < pB.nZ;
			});
		std::sort(m_SectorArray.begin(), m_SectorArray.end(), [&](const Sector& pA, const  Sector& pB)->int {
			return pA.nZ < pB.nZ;
			});
		/*
		std::qsort(&m_ScanLine[0], m_ScanLine.size(), sizeof(Line), [&](const void* pA, const void* pB)->int {
			return ((Line*)pA)->nZ - ((Line*)pB)->nZ;
			});

		std::qsort(&m_SectorArray[0], m_SectorArray.size(), sizeof(Line), [&](const void* pA, const void* pB)->int {
			return ((Sector*)pA)->nZ - ((Sector*)pB)->nZ;
			});
*/
		//����ɨ����
		unsigned int nLinePos = 0;
		unsigned int nSectorPos = 0;
		for (int nCurZ = 0;nCurZ < 6;nCurZ++)
		{
			for (;nLinePos < m_ScanLine.size();nLinePos++)
			{
				if (m_ScanLine[nLinePos].nZ != nCurZ)
					break;

				unsigned int nLineOffset = m_ScanLine[nLinePos].fLineNum * nRowPixel;
				unsigned int nRowOffsetBegin = m_ScanLine[nLinePos].fBegin * nLinePixel;
				unsigned int nRowOffsetEnd = m_ScanLine[nLinePos].fEnd * nLinePixel;
				if (nLineOffset >= nH * nRowPixel)
					continue;

				if (nRowOffsetBegin >= nW * nLinePixel) nRowOffsetBegin = (nW * nLinePixel) - 1;
				if (nRowOffsetEnd >= nW * nLinePixel) nRowOffsetEnd = (nW * nLinePixel) - 1;

				for (unsigned int j = nRowOffsetBegin;j <= nRowOffsetEnd;j++)
				{
					cFrameFuffer[nLineOffset][j] = ((j == nRowOffsetBegin) || (j == nRowOffsetEnd)) ? '*' : m_ScanLine[nLinePos].cTexture;
				}
				/*
				//�����ı�
				for (int i = 0;i < m_TextArray.size();i++)
				{
					unsigned int nLineOffset = m_TextArray[i].fLineNum * nRowPixel;
					unsigned int nRowOffsetBegin = m_TextArray[i].fBeginRow * nLinePixel;
					//unsigned int nRowOffsetEnd = m_TextArray[i].fEnd * nLinePixel;
					const char* pszText = m_TextArray[i].szText.c_str();
					unsigned int nLen = m_TextArray[i].szText.length();
					if (nRowOffsetBegin + nLen >= nW * nLinePixel)
					{
						nLen = (nW * nLinePixel - nRowOffsetBegin) >= 0 ? (nW * nLinePixel - nRowOffsetBegin) : 0;
					}
					for (unsigned int nOffset = 0;nOffset < nLen;nOffset++)
					{
						unsigned int nTextPos = nRowOffsetBegin + nOffset;
						cFrameFuffer[nLineOffset][nTextPos] = pszText[nOffset];
					}
				}*/
			}

			//��������
			DrawShape(m_SectorArray, nCurZ);

			//����������
			DrawShape(m_TriangleArray, nCurZ);

			//���ƶ����
			DrawShape(m_PolygonArray, nCurZ);
		}
		
		
	}
	//������Ļ�ߴ�ü���Χ�е��Ϸ���Χ
	void BoxChip(IncludeBox& Box)
	{
		Box.BeginPos.fX = max(Box.BeginPos.fX, 0.0);
		Box.BeginPos.fX = min(Box.BeginPos.fX, float(nW) - 0.01);

		Box.BeginPos.fY = max(Box.BeginPos.fY, 0.0);
		Box.BeginPos.fY = min(Box.BeginPos.fY, float(nH) - 0.01);

		Box.EndPos.fX = max(Box.EndPos.fX, 0.0);
		Box.EndPos.fX = min(Box.EndPos.fX, float(nW) - 0.01);

		Box.EndPos.fY = max(Box.EndPos.fY, 0.0);
		Box.EndPos.fY = min(Box.EndPos.fY, float(nH) - 0.01);
	}
	//������亯��
	//[&](Point & p ,char nFillMode)->bool{}
	template<typename SetTheoryConditionT>
	void FillShapeBySetTheoryCondition(IncludeBox & Box,char nFillMode, SetTheoryConditionT & SetTheoryCondition,char cTex)
	{
		//�ü���Χ�У�������������Ļ;
		BoxChip(Box);
		//ȷ����Χ����ӷ��α߳���ʼ������ 
		
		float fBeginPosX = Box.BeginPos.fX;
		float fBeginPosY = Box.BeginPos.fY;
		float fEdgeLenX = Box.EndPos.fX - Box.BeginPos.fX;
		float fEdgeLenY = Box.EndPos.fY - Box.BeginPos.fY;

		//��������������Ͻ�������ʼ����� ��Ļ x y������������
		unsigned int nScreenBeginPosX = fBeginPosX * nLinePixel;
		unsigned int nScreenBeginPosY = fBeginPosY * nRowPixel;
		unsigned int nScreenEdgeLenX = (fEdgeLenX * nLinePixel) + 1;
		unsigned int nScreenEdgeLenY = (fEdgeLenY * nRowPixel) + 1;
		//ö�ٰ�Χ���ڵ�����
		float fMinR = 100.0;
		for (unsigned int j = 0;j < nScreenEdgeLenY;j++)
		{
			//float fWY = m_SectorArray[i].fOy - (float(nScreenBeginPosY + j) / float(nRowPixel));
			fMinR = 100.0;
			for (unsigned int s = 0;s < nScreenEdgeLenX;s++)
			{
				//������Ļ��W�����굽��������Բ������ϵ
				
				float fWX = (float(nScreenBeginPosX + s) / float(nLinePixel));
				float fWY = (float(nScreenBeginPosY + j) / float(nRowPixel));
				Point P;
				P.fX = fWX;
				P.fY = fWY;
				char RstMode;
				if (SetTheoryCondition(P, nFillMode))
				{
					cFrameFuffer[nScreenBeginPosY + j][nScreenBeginPosX + s] = cTex;
				}
				
			}
		}
	}
	
	void Printf(const PrintfCol Col)
	{
		printf("\033[0;%dm%s\033[0m", Col, &cFrameFuffer[0][0]);

		//���ݵ�ǰ���λ��
		int nEndX;int nEndY;
		GetCursorPosition(nEndX, nEndY);
		//�����ı�
		for (int i = 0;i < m_TextArray.size();i++)
		{
			unsigned int nLineOffset = m_TextArray[i].fLineNum * nRowPixel;
			unsigned int nRowOffsetBegin = m_TextArray[i].fBeginRow * nLinePixel;
			//unsigned int nRowOffsetEnd = m_TextArray[i].fEnd * nLinePixel;
			const char* pszText = m_TextArray[i].szText.c_str();
			unsigned int nLen = m_TextArray[i].szText.length();
			if (nRowOffsetBegin + nLen >= nW * nLinePixel)
			{
				nLen = (nW * nLinePixel - nRowOffsetBegin) >= 0 ? (nW * nLinePixel - nRowOffsetBegin) : 0;
			}
			int nResidueLine = (nH * nRowPixel) - nLineOffset;
			//��������õ���ǰ����ı�������λ��
			SetCursorPosition(nRowOffsetBegin, nEndY - nResidueLine);
			ColPrintf(m_TextArray[i].nCol, pszText);
		}
		//��ԭ��ǰ���λ��
		SetCursorPosition(nEndX, nEndY);
		printf("\n");
	}
	
	//���ù��λ��
	void SetCursorPosition(int x, int y) {
		COORD coord;
		coord.X = x;
		coord.Y = y;
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(handle, coord);
		//CONSOLE_CURSOR_INFO info;
		//GetConsoleCursorInfo(STD_OUTPUT_HANDLE, &info);
	}
	//��ȡ��ǰ���λ��
	void GetCursorPosition(int& cursorX, int& cursorY) {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		cursorX = cursorY = 0;
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		if (GetConsoleScreenBufferInfo(hConsole, &csbi)) {
			cursorX = csbi.dwCursorPosition.X;
			cursorY = csbi.dwCursorPosition.Y;

		}
	}
};



struct TreeNode
{
	int nParentVexIndex; //����������
	int nParentNodeIndex; //��Node����
	int nSelfNodeIndex; //Vex�Լ�����
	int nSelfVexIndex; //Vex�Լ�����

	int nchildVexIndex[2];//�ӽڵ㶥������
	int nchildNodeIndex[2];//�ӽڵ�Node����
	//ScanningLine<10, 10, 18, 8>::Point Vex;//��������
};
struct TreeVex
{
	int nLevel; //���
	int nNodeIndex;
	ScanningLine<10, 10, 18, 8>::Point Vex;//��������
};
//������
struct TreeContext
{
	std::vector<TreeNode> NodeArray;
	std::vector<TreeVex> VexArray;

	unsigned int m_nRootNodeIndex;
	unsigned int m_nMaxLevel;
	//�½�һ��Node
	unsigned int NewNode(int nParentNodeIndex, int nParenVexIndex)
	{
		TreeNode Node;
		TreeVex Vex;
		Node.nParentVexIndex = nParenVexIndex;// = VexArray.size();
		Node.nParentNodeIndex = nParentNodeIndex;
		//VexArray.push_back(Vex);
		Node.nchildVexIndex[0] = VexArray.size();
		VexArray.push_back(Vex);
		Node.nchildVexIndex[1] = VexArray.size();
		VexArray.push_back(Vex);
		int nRstNodeIndex = NodeArray.size();
		Node.nchildNodeIndex[0] = -1;
		Node.nchildNodeIndex[1] = -1;
		NodeArray.push_back(Node);
		return nRstNodeIndex;
	}
	//��ʼ��
	void Init(int nMaxLevel)
	{
		//��ʼ������һ��Root�ڵ�
		m_nMaxLevel = nMaxLevel;
		TreeVex Vex;
		VexArray.push_back(Vex);

		m_nRootNodeIndex = NewNode(-1, 0);
		NodeArray[m_nRootNodeIndex].nSelfNodeIndex = m_nRootNodeIndex;
		NodeArray[m_nRootNodeIndex].nSelfVexIndex = 0;
	}
	//������
	bool CreateTree(int nNodeIndex, int nVexIndex, int nCurLevel)
	{
		if (nCurLevel >= (m_nMaxLevel - 2)) return false;
		//Ϊ���Ӷ������Node
		int nLeftNodeIndex = NewNode(nNodeIndex, NodeArray[nNodeIndex].nchildVexIndex[0]);
		//Ϊ���Ӷ������Node
		int nRightNodeIndex = NewNode(nNodeIndex, NodeArray[nNodeIndex].nchildVexIndex[1]);

		NodeArray[nNodeIndex].nchildNodeIndex[0] = nLeftNodeIndex;
		NodeArray[nNodeIndex].nchildNodeIndex[1] = nRightNodeIndex;

		NodeArray[nLeftNodeIndex].nSelfNodeIndex = nLeftNodeIndex;
		NodeArray[nLeftNodeIndex].nSelfVexIndex = NodeArray[nNodeIndex].nchildVexIndex[0];

		NodeArray[nRightNodeIndex].nSelfNodeIndex = nRightNodeIndex;
		NodeArray[nRightNodeIndex].nSelfVexIndex = NodeArray[nNodeIndex].nchildVexIndex[1];


		CreateTree(nLeftNodeIndex, NodeArray[nNodeIndex].nchildVexIndex[0], nCurLevel + 1);
		CreateTree(nRightNodeIndex, NodeArray[nNodeIndex].nchildVexIndex[1], nCurLevel + 1);

		return false;
	}
	void CreateTree()
	{
		CreateTree(m_nRootNodeIndex, m_nRootNodeIndex, 0);
	}
	//ö����
	template< typename CallBackT>
	bool EnumTree(int nNodeIndex, int nLevel, const CallBackT& CallBack)
	{
		CallBack(nNodeIndex, nLevel);
		if (NodeArray[nNodeIndex].nchildNodeIndex[0] != -1)
		{
			EnumTree(NodeArray[nNodeIndex].nchildNodeIndex[0], nLevel + 1, CallBack);
		}
		if (NodeArray[nNodeIndex].nchildNodeIndex[1] != -1)
		{
			EnumTree(NodeArray[nNodeIndex].nchildNodeIndex[1], nLevel + 1, CallBack);
		}
		return true;
	}
	//�����ʼ�� ˮƽ���� bHMode=true���Ǵ�ֱģʽ
	void VexMake(float fStepW, float fStepH, float fOffsetX = 0.5, float fOffsetY=0.5,bool bHMode=false)
	{
		VexArray[0].nLevel = 0;
		VexArray[0].Vex.fX = fOffsetX;
		float fMaxH = pow(2, float(m_nMaxLevel - 1)) * fStepH;
		VexArray[0].Vex.fY = fOffsetY+ fMaxH / 2.0;


		EnumTree(m_nRootNodeIndex, 0, [&](int nNodeIndex, int nLevel) {
			int nLeftVexIndex = NodeArray[nNodeIndex].nchildVexIndex[0];
			int nRightVexIndex = NodeArray[nNodeIndex].nchildVexIndex[1];

			float fLevelH = fMaxH / pow(2, float(nLevel + 1));
			//if (NodeArray[nNodeIndex].nParentVexIndex >= 0)
			{
				VexArray[nLeftVexIndex].nLevel = nLevel;
				if (bHMode)
				{
					VexArray[nLeftVexIndex].Vex.fX = VexArray[NodeArray[nNodeIndex].nSelfVexIndex].Vex.fX - (fLevelH / 2.0);
					VexArray[nLeftVexIndex].Vex.fY = VexArray[NodeArray[nNodeIndex].nSelfVexIndex].Vex.fY + fStepW;

					VexArray[nRightVexIndex].nLevel = nLevel;
					VexArray[nRightVexIndex].Vex.fX = VexArray[NodeArray[nNodeIndex].nSelfVexIndex].Vex.fX + (fLevelH / 2.0);
					VexArray[nRightVexIndex].Vex.fY = VexArray[NodeArray[nNodeIndex].nSelfVexIndex].Vex.fY + fStepW;
				}
				else
				{
					VexArray[nLeftVexIndex].Vex.fY = VexArray[NodeArray[nNodeIndex].nSelfVexIndex].Vex.fY - (fLevelH / 2.0);
					VexArray[nLeftVexIndex].Vex.fX = VexArray[NodeArray[nNodeIndex].nSelfVexIndex].Vex.fX + fStepW;

					VexArray[nRightVexIndex].nLevel = nLevel;
					VexArray[nRightVexIndex].Vex.fY = VexArray[NodeArray[nNodeIndex].nSelfVexIndex].Vex.fY + (fLevelH / 2.0);
					VexArray[nRightVexIndex].Vex.fX = VexArray[NodeArray[nNodeIndex].nSelfVexIndex].Vex.fX + fStepW;
				}
				
			}
			}
		);
	}
	
	//�ķ�

	int FindVex(const char* pExpCode, int szExpLen, int nRootPos, int nNodeIndex)
	{
		if (nRootPos == szExpLen - 1)
		{
			return pExpCode[nRootPos] == 'L' ? NodeArray[nNodeIndex].nchildVexIndex[0] : NodeArray[nNodeIndex].nchildVexIndex[1];
		}
		else
		{
			return FindVex(pExpCode, szExpLen, nRootPos + 1, pExpCode[nRootPos] == 'L' ? NodeArray[nNodeIndex].nchildNodeIndex[0] : NodeArray[nNodeIndex].nchildNodeIndex[1]);
		}
	}
	int FindVex(const char* pExpCode)
	{
		unsigned int nExpCodeLen = strlen(pExpCode);
		if (nExpCodeLen == 0)
		{
			return 0;
		}
		return FindVex(pExpCode, strlen(pExpCode), 0, 0);
	}

	template< typename CallBackT>
	int SetVex(const char* pExpCode, const CallBackT& CallBack)
	{
		int nFindVexInde = FindVex(pExpCode);
		if (nFindVexInde >= 0)
		{
			CallBack(nFindVexInde);
		}
		return nFindVexInde;
	}

};

void DrawShapeTest()
{
	typedef ScanningLine<15, 11, 18, 8> ScanningLineT;
	ScanningLineT test;
	//����
	test.AddSector(3.0, 3.0, 2.0, 0, 359.9, ScanningLineT::FillMode::RealMode, '+');
	test.AddSector(8.0, 3.0, 2.0, 0, 90.0, ScanningLineT::FillMode::RealMode, '+');
	test.AddSector(13.0, 3.0, 2.0, 45, 135.0, ScanningLineT::FillMode::RealMode, '*');

	test.AddSector(3.0, 8.0, 2.0, 0, 359.9, ScanningLineT::FillMode::EdgeMode, '*');
	test.AddSector(8.0, 8.0, 2.0, 0, 90.0, ScanningLineT::FillMode::EdgeMode, '*');
	test.AddSector(13.0, 8.0, 2.0, 45, 135.0, ScanningLineT::FillMode::EdgeMode, '*');

	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);

	//������
	test.ClearOp();
	float fLineOffset = 0.0;
	test.AddTriangle(ScanningLineT::Point(1.0, 3.5 + fLineOffset), ScanningLineT::Point(2.5, 1.0 + fLineOffset), ScanningLineT::Point(4.0, 3.5 + fLineOffset), ScanningLineT::FillMode::RealMode, '+');
	test.AddTriangle(ScanningLineT::Point(5.0, 2.5 + fLineOffset), ScanningLineT::Point(6.5, 1.0 + fLineOffset), ScanningLineT::Point(7.5, 4.0 + fLineOffset), ScanningLineT::FillMode::RealMode, '*');
	test.AddTriangle(ScanningLineT::Point(9.0, 2.5 + fLineOffset), ScanningLineT::Point(11.5, 1.0 + fLineOffset), ScanningLineT::Point(10.5, 4.0 + fLineOffset), ScanningLineT::FillMode::RealMode, 'g');

	fLineOffset = 6.0;
	test.AddTriangle(ScanningLineT::Point(1.0, 3.5 + fLineOffset), ScanningLineT::Point(2.5, 1.0 + fLineOffset), ScanningLineT::Point(4.0, 3.5 + fLineOffset), ScanningLineT::FillMode::EdgeMode, '+');
	test.AddTriangle(ScanningLineT::Point(5.0, 2.5 + fLineOffset), ScanningLineT::Point(6.5, 1.0 + fLineOffset), ScanningLineT::Point(7.5, 4.0 + fLineOffset), ScanningLineT::FillMode::EdgeMode, '*');
	test.AddTriangle(ScanningLineT::Point(9.0, 2.5 + fLineOffset), ScanningLineT::Point(11.5, 1.0 + fLineOffset), ScanningLineT::Point(10.5, 4.0 + fLineOffset), ScanningLineT::FillMode::EdgeMode, 'g');

	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);

	//�����
	test.ClearOp();
	float fLineOffsetY = 0.5;
	float fLineOffsetX = 0.0;
	//std::vector<ScanningLineT::Point> Vex = { Vex1,ScanningLineT::Point(1.0,3.5),ScanningLineT::Point(1.0,3.5) };
	std::vector<ScanningLineT::Point> Vex1 = { {float(3.5 + fLineOffsetX),float(3.5 + fLineOffsetY)},{float(3.5 + fLineOffsetX),float(0.5 + fLineOffsetY)},{float(1.0 + fLineOffsetX),float(0.5 + fLineOffsetY)}, };
	test.AddPolygon(ScanningLineT::Point(float(1.0 + fLineOffsetX), float(3.5 + fLineOffsetY)), Vex1, ScanningLineT::FillMode::RealMode, '+');


	fLineOffsetY = 6.0;
	std::vector<ScanningLineT::Point> Vex2 = { {3.5,float(3.5 + fLineOffsetY)},{3.5,float(0.5 + fLineOffsetY)},{1.0,float(0.5 + fLineOffsetY)}, };
	test.AddPolygon(ScanningLineT::Point(float(1.0 + fLineOffsetX), float(3.5 + fLineOffsetY)), Vex2, ScanningLineT::FillMode::EdgeMode, '+');

	fLineOffsetY = 0.5;
	fLineOffsetX = 5.0;
	std::vector<ScanningLineT::Point> Vex3 = { {float(1.0 + fLineOffsetX),float(2.0 + fLineOffsetY)},{float(3.0 + fLineOffsetX),float(0.0 + fLineOffsetY)},{float(5.0 + fLineOffsetX),float(2.0 + fLineOffsetY)}, {float(4.0 + fLineOffsetX),float(4.0 + fLineOffsetY)} };
	test.AddPolygon(ScanningLineT::Point(float(2.0 + fLineOffsetX), float(4.0 + fLineOffsetY)), Vex3, ScanningLineT::FillMode::RealMode, '+');

	fLineOffsetY = 5.0;
	fLineOffsetX = 5.0;
	std::vector<ScanningLineT::Point> Vex4 = { {float(1.0 + fLineOffsetX),float(3.0 + fLineOffsetY)},{float(3.0 + fLineOffsetX),float(1.0 + fLineOffsetY)},{float(5.0 + fLineOffsetX),float(3.0 + fLineOffsetY)}, {float(4.0 + fLineOffsetX),float(5.0 + fLineOffsetY)} };
	test.AddPolygon(ScanningLineT::Point(float(2.0 + fLineOffsetX), float(5.0 + fLineOffsetY)), Vex4, ScanningLineT::FillMode::EdgeMode, '+');

	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);

	//�߶����
	float fW = 0.07;
	test.ClearOp();
	fLineOffsetY = 0.5;
	fLineOffsetX = 0.0;
	//std::vector<ScanningLineT::Point> Vex = { Vex1,ScanningLineT::Point(1.0,3.5),ScanningLineT::Point(1.0,3.5) };
	ScanningLineT::Point Begin = ScanningLineT::Point(1.0+fLineOffsetX, 0.5+fLineOffsetY);
	ScanningLineT::Point End = ScanningLineT::Point(5.0 + fLineOffsetX, 4.5 + fLineOffsetY);
	test.AddLine(Begin, End, fW, ScanningLineT::FillMode::RealMode, '+');


	fLineOffsetY = 6.0;
	Begin = ScanningLineT::Point(1.0 + fLineOffsetX, 0.5 + fLineOffsetY);
	End = ScanningLineT::Point(5.0 + fLineOffsetX, 4.5 + fLineOffsetY);
	test.AddLine(Begin, End, fW, ScanningLineT::FillMode::EdgeMode, '+');

	fLineOffsetY = 0.5;
	fLineOffsetX = 6.0;
	Begin = ScanningLineT::Point(1.0 + fLineOffsetX, 0.5 + fLineOffsetY);
	End = ScanningLineT::Point(5.0 + fLineOffsetX, 4.5 + fLineOffsetY);
	test.AddLine(Begin, End, fW, ScanningLineT::FillMode::RealMode, '+');

	fLineOffsetY = 6.0;
	fLineOffsetX = 6.0;
	Begin = ScanningLineT::Point(1.0 + fLineOffsetX, 0.5 + fLineOffsetY);
	End = ScanningLineT::Point(5.0 + fLineOffsetX, 4.5 + fLineOffsetY);
	test.AddLine(Begin, End, fW, ScanningLineT::FillMode::EdgeMode, '+');

	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);

	//�����߶����
	fW = 0.15;
	test.ClearOp();
	fLineOffsetY = 0.5;
	fLineOffsetX = 0.0;
	//std::vector<ScanningLineT::Point> Vex = { Vex1,ScanningLineT::Point(1.0,3.5),ScanningLineT::Point(1.0,3.5) };
	Begin = ScanningLineT::Point(1.0 + fLineOffsetX, 3.7 + fLineOffsetY);
	End = ScanningLineT::Point(5.0 + fLineOffsetX, 3.7 + fLineOffsetY);
	test.AddLine(Begin, End, fW, ScanningLineT::FillMode::RealMode, '+');


	fLineOffsetY = 6.0;
	Begin = ScanningLineT::Point(1.0 + fLineOffsetX, 3.7 + fLineOffsetY);
	End = ScanningLineT::Point(5.0 + fLineOffsetX, 3.7 + fLineOffsetY);
	test.AddLine(Begin, End, fW, ScanningLineT::FillMode::EdgeMode, '+');

	fLineOffsetY = 0.5;
	fLineOffsetX = 6.0;
	Begin = ScanningLineT::Point(3.5 + fLineOffsetX, 0.5 + fLineOffsetY);
	End = ScanningLineT::Point(3.5 + fLineOffsetX, 4.5 + fLineOffsetY);
	test.AddLine(Begin, End, fW, ScanningLineT::FillMode::RealMode, '+');

	fLineOffsetY = 6.0;
	fLineOffsetX = 6.0;
	Begin = ScanningLineT::Point(3.5 + fLineOffsetX, 0.5 + fLineOffsetY);
	End = ScanningLineT::Point(3.5 + fLineOffsetX, 4.5 + fLineOffsetY);
	test.AddLine(Begin, End, fW, ScanningLineT::FillMode::EdgeMode, '+');

	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);


}
void FillShapeTest()
{
	typedef ScanningLine<15, 11, 18, 8> ScanningLineT;
	ScanningLineT test;
	float fLineOffsetY = 0.0;
	float fLineOffsetX = 0.0;
	std::vector<ScanningLineT::Point> Vex1 = { {float(4.5 + fLineOffsetX),float(3.5 + fLineOffsetY)},{float(4.5 + fLineOffsetX),float(0.5 + fLineOffsetY)},{float(1.0 + fLineOffsetX),float(0.5 + fLineOffsetY)}, };
	//������
	test.AddPolygon(ScanningLineT::Point(float(1.0 + fLineOffsetX), float(3.5 + fLineOffsetY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+');
	//����
	test.AddSector(3.5, 3.0, 2.0, 45.0, 330.9, ScanningLineT::FillMode::EdgeMode, '+');
	
	fLineOffsetX = 6.0;
	//��2
	std::vector<ScanningLineT::Point> Vex2 = { {float(4.5 + fLineOffsetX),float(3.5 + fLineOffsetY)},{float(4.5 + fLineOffsetX),float(0.5 + fLineOffsetY)},{float(1.0 + fLineOffsetX),float(0.5 + fLineOffsetY)}, };
	unsigned int nShapeIndexA = test.AddPolygon(ScanningLineT::Point(float(1.0 + fLineOffsetX), float(3.5 + fLineOffsetY)), Vex2, ScanningLineT::FillMode::EdgeMode, '+');
	unsigned int nShapeIndexB = test.AddSector(3.5 + fLineOffsetX, 3.0+ fLineOffsetY, 2.0, 45.0, 330.9, ScanningLineT::FillMode::EdgeMode, '+');

	ScanningLineT::IncludeBox Box;
	test.PolygonN(nShapeIndexA)->GetBox(Box);
	test.SectorN(nShapeIndexB)->AddBox(Box);

	//����1
	fLineOffsetX = 0.0;
	fLineOffsetY = 6.5;
	std::vector<ScanningLineT::Point> Vex3 = { {float(4.5 + fLineOffsetX),float(3.5 + fLineOffsetY)},{float(4.5 + fLineOffsetX),float(0.5 + fLineOffsetY)},{float(1.0 + fLineOffsetX),float(0.5 + fLineOffsetY)}, };
	unsigned int nShapeIndexA1 = test.AddPolygon(ScanningLineT::Point(float(1.0 + fLineOffsetX), float(3.5 + fLineOffsetY)), Vex3, ScanningLineT::FillMode::EdgeMode, '+');
	unsigned int nShapeIndexB1 = test.AddSector(3.5 + fLineOffsetX, 3.0+ fLineOffsetY, 2.0, 45.0, 330.9, ScanningLineT::FillMode::EdgeMode, '+');
	//����
	

	ScanningLineT::IncludeBox Box1;
	test.PolygonN(nShapeIndexA1)->GetBox(Box1);
	test.SectorN(nShapeIndexB1)->AddBox(Box1);

	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InAB = test.PolygonN(nShapeIndexA)->Hit(p) & test.SectorN(nShapeIndexB)->Hit(p);
		return InAB;
		};

	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//A����B��һ������nSectorIndexA
		bool InAB = test.PolygonN(nShapeIndexA1)->Hit(p) | test.SectorN(nShapeIndexB1)->Hit(p);
		return InAB;
		};

	test.Clear();
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.FillShapeBySetTheoryCondition(Box1, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, 's');

	test.Printf(PrintfCol::Green);

}
void TreeTest()
{
	typedef ScanningLine<10, 10, 18, 8> ScanningLineT;

	ScanningLineT test;
	TreeContext TNode;
	TNode.Init(4);
	TNode.CreateTree();
	TNode.VexMake(1.0, 0.8);

	const char* pExp = "LLL";
	int nFindVexIndex = TNode.FindVex(pExp);
	ColPrintf(PrintfCol::����, "FindVex-%d[%d]", TNode.VexArray[nFindVexIndex].nLevel, nFindVexIndex);

	pExp = "LRL";
	nFindVexIndex = TNode.FindVex(pExp);
	ColPrintf(PrintfCol::����, "FindVex-%d[%d]", TNode.VexArray[nFindVexIndex].nLevel, nFindVexIndex);

	pExp = "RL";
	nFindVexIndex = TNode.FindVex(pExp);
	ColPrintf(PrintfCol::����, "FindVex-%d[%d]", TNode.VexArray[nFindVexIndex].nLevel, nFindVexIndex);
}
void VariableTest()
{
	
	typedef ScanningLine<15, 11, 18, 8> ScanningLineT;
	ScanningLineT test;
	MathLib::atan2Test();
	DrawShapeTest();
	FillShapeTest();
	TreeTest();
	return;
}