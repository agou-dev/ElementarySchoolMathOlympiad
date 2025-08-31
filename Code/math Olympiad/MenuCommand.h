#pragma once
#include <vector>
#include <functional>
/*
Сѧ��������42�����⣺
1.�������� 
2.�������� 
3.ͼ������ 
4.���������������������� 
5.�������NP���� 
6.�������� 
7.���������� 
8.�������� 
9.�߼�����(�����ų������б�)


0. ������������(��������)
1. ��������(��������)
2. ׷������(��������)
3. �𳵹�������(��������)
4. �Թ�׷������(��������,��������)


5. ��ˮ�д�����(��������)
6. ƽ���ٶ�����(��������)
7. ʱ������(��������)
8. �е���������(��������)
9. ͼ������(ͼ������)


10. ͼ�α���������(ͼ������)
11. �ӳ�����(�������NP����)
12. ��������(�������NP����)
13. �ݳ�����(����������)
14. ��״ͼ�����ֲ�����(ͼ�����⣬�������NP����)


15. ͼ�μ�������(ͼ�����⣬�������NP����)
16. �ֵ���������(�������NP����)
17. �Ȳ���������(����������������������)
18. ��������������(��������)
19. �����Ѳ��Ѻ�����(��������)


20. ������������(��������)
21. ��Ԫ������(�������أ���������)
22. ��ȡ����������(����������������������)
23. ȥ��������(��������)
24. ѭ��С������(��������)


25. ��������(����������������������)
26. ��������(��������)
27. ��ԭ����(��������)
28. �г�����(��������)
29. �Ͳ������(����������������������)


30. ����ͬ������(��������)
31. �߼���������(�߼�����(�����ų������б�))
32. ��������(����������������������)
33. ţ�Բ�����(����������������������)
34. ӯ������(����������������������)


35. ��������(����������������������)
36. ֲ������(����������������������)
37. ��������(����������������������)
39. ��������1(����������������������)
38. ������������(����������������������)

40. ������������(����������������������)
41. ������������(����������������������)
42. ��������(����������������������)






*/

//��ɫ��ӡ
//��ɫ��ӡ
/*enum PrintfCol
{
	White = 37,
	Red = 31,
	Green = 32,
	Yellow = 33,
	Blue = 34,
	Black = 30,

	���� = White,
	���� = Blue,
	���� = Blue,
	��� = Red,
	������־ = Green,
	BG_White = 47,
	BG_Red = 41,
	BG_Green = 42,
	BG_Yellow = 43,
	BG_Blue = 44,
	BG_Black = 40,

};
#define ColPrintf(Col,pszFmt,...) {\
	char szFmt[1024];\
	sprintf(szFmt,"\033[0;%dm%s\033[0m\n",Col,pszFmt);\
	printf(szFmt,__VA_ARGS__);\
}\*/


struct MenuCommand
{
	typedef std::function<void(MenuCommand*,int)> MenuCommandCallBackFunctionT;
	struct UISet
	{
		const char* pszCommandName;
		MenuCommandCallBackFunctionT m_UiCallBack;
	};
	std::vector<UISet> m_UiArray;
	 
	MenuCommand()
	{

	}
	MenuCommand(const std::vector<MenuCommand::UISet>& InitArray)
	{
		m_UiArray = InitArray;
	}
	MenuCommand(const std::initializer_list<UISet>& InitArray)
	{
		m_UiArray = InitArray;
	}
	MenuCommand& operator =(std::initializer_list<UISet>& InitArray)
	{
		m_UiArray = InitArray;
		return *this;
	}
	
	void AddUiCommand(UISet& Ui)
	{
		m_UiArray.push_back(Ui);
	}
	//����Ӳ˵���
	void AddSubUiCommand(const char * pSubMenuName, MenuCommand & SubUi)
	{
		UISet SubUiSet;
		SubUiSet.pszCommandName = pSubMenuName;
		SubUiSet.m_UiCallBack = [&](MenuCommand* pUi, int nUiIndex) {
			for (;;)
			{
				bool bReturnPrev = SubUi.Show();
				if (bReturnPrev)
					break;
			}
		};
		m_UiArray.push_back(SubUiSet);
	}
	bool Show()
	{
		bool bReturnPrev = false;
		ColPrintf(PrintfCol::Green,"��ѡ��˵���:");
		int i = 0;
		for (;i< m_UiArray.size();i++)
		{
			printf("%d. %s\n",i, m_UiArray[i].pszCommandName);
		}
		ColPrintf(PrintfCol::���, "%d. %s", i, "�����ϼ�");

		int nUiIndex=0;
		scanf("%d", &nUiIndex);
		if (nUiIndex < m_UiArray.size())
		{
			ColPrintf(PrintfCol::BG_Blue, "ִ�в˵���:%s\n", m_UiArray[nUiIndex].pszCommandName);
			m_UiArray[nUiIndex].m_UiCallBack(this,nUiIndex);
		}
		else
		{
			if (nUiIndex == m_UiArray.size())
			{
				ColPrintf(PrintfCol::���, "�����ϼ��˵�");
				bReturnPrev = true;
			}
			else
			{
				ColPrintf(PrintfCol::BG_Red, "�Ƿ��˵���:%d\n", nUiIndex);
			}
			
		}
		return bReturnPrev;
	}
	void CallALLMenuUiCallBack(int nSelfIndex)
	{
		for (int i = 0;i < m_UiArray.size();i++)
		{
			if (nSelfIndex != i)
			{
				m_UiArray[i].m_UiCallBack(this, i);
			}
		}
	}
};