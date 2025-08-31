#pragma once
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

struct LanguageLib
{
	enum Language
	{
		English = 0,
		Chinese = 1,
		nMAXLanguageCount = 2,
	};
	//��ʼ�����Կ�
	typedef unordered_map<string, int> LanguageMapT;
	typedef vector<vector<const char*>> LanguageTableT;
	LanguageMapT m_LanguageMap;
	Language m_nCurLanguage;			//��ǰ����
	vector<vector<const char*>> m_LanguageArray;
	string m_szError[nMAXLanguageCount];
	void AddLanguageTable(LanguageTableT & LanguageArray)
	{
		//����������
		m_szError[Chinese] = "���Կ���δ�ҵ�";
		m_szError[English] = "Not found in language library";
		m_LanguageArray = LanguageArray;
		for (int i = 0;i < LanguageArray.size();i++)
		{
			const char* pString = LanguageArray[i][0];
			for (int j = 0;j < LanguageArray[i].size();j++)
			{
				pString = LanguageArray[i][j];
				if (pString)
				{
					m_LanguageMap[string(pString)] = i;
				}
				else
				{
					break;
				}
			}
		}
	}
	//���õ�ǰ����
	void SetCurLanguage(Language lan)
	{
		m_nCurLanguage = lan;
	}
	const char* operator()(const char* pszText)
	{
		LanguageMapT::iterator iter = m_LanguageMap.find(pszText);
		if (iter != m_LanguageMap.end())
		{
			return m_LanguageArray[iter->second][m_nCurLanguage];
		}
		return m_szError[m_nCurLanguage].c_str();
	}
	static LanguageLib& GetInstance()
	{
		static LanguageLib _self;
		return _self;
	}
};
#define Lang LanguageLib::GetInstance()