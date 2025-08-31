#pragma once
#include <vector>
#include <functional>
/*
小学奥数包括42个问题：
1.比例问题 
2.分数问题 
3.图形问题 
4.周期素数余数公因数问题 
5.排列组合NP问题 
6.方程问题 
7.集合论问题 
8.符号重载 
9.逻辑问题(假设排除法，列表法)


0. 比例法的妙用(比例问题)
1. 相遇问题(方程问题)
2. 追及问题(方程问题)
3. 火车过桥问题(方程问题)
4. 猎狗追兔问题(比例问题,方程问题)


5. 流水行船问题(方程问题)
6. 平均速度问题(方程问题)
7. 时钟问题(方程问题)
8. 中点相遇问题(方程问题)
9. 图形问题(图形问题)


10. 图形标数法问题(图形问题)
11. 加乘问题(排列组合NP问题)
12. 排列问题(排列组合NP问题)
13. 容斥问题(集合论问题)
14. 树状图整数分拆问题(图形问题，排列组合NP问题)


15. 图形计数问题(图形问题，排列组合NP问题)
16. 字典排列问题(排列组合NP问题)
17. 等差数列问题(周期素数余数公因数问题)
18. 定义新运算问题(符号重载)
19. 分数裂差裂和问题(分数问题)


20. 分数巧算问题(方程问题)
21. 换元法问题(符号重载，方程问题)
22. 提取公因数问题(周期素数余数公因数问题)
23. 去括号问题(分数问题)
24. 循环小数问题(分数问题)


25. 抽屉问题(周期素数余数公因数问题)
26. 分数问题(分数问题)
27. 还原问题(方程问题)
28. 行程问题(方程问题)
29. 和差倍数问题(周期素数余数公因数问题)


30. 鸡兔同笼问题(方程问题)
31. 逻辑推理问题(逻辑问题(假设排除法，列表法))
32. 年龄问题(周期素数余数公因数问题)
33. 牛吃草问题(周期素数余数公因数问题)
34. 盈亏问题(周期素数余数公因数问题)


35. 余数问题(周期素数余数公因数问题)
36. 植树问题(周期素数余数公因数问题)
37. 周期问题(周期素数余数公因数问题)
39. 余数问题1(周期素数余数公因数问题)
38. 质数合数问题(周期素数余数公因数问题)

40. 因数倍数问题(周期素数余数公因数问题)
41. 数的整除问题(周期素数余数公因数问题)
42. 因数问题(周期素数余数公因数问题)






*/

//颜色打印
//红色打印
/*enum PrintfCol
{
	White = 37,
	Red = 31,
	Green = 32,
	Yellow = 33,
	Blue = 34,
	Black = 30,

	标题 = White,
	方法 = Blue,
	步骤 = Blue,
	结果 = Red,
	计算日志 = Green,
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
	//添加子菜单项
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
		ColPrintf(PrintfCol::Green,"请选择菜单项:");
		int i = 0;
		for (;i< m_UiArray.size();i++)
		{
			printf("%d. %s\n",i, m_UiArray[i].pszCommandName);
		}
		ColPrintf(PrintfCol::结果, "%d. %s", i, "返回上级");

		int nUiIndex=0;
		scanf("%d", &nUiIndex);
		if (nUiIndex < m_UiArray.size())
		{
			ColPrintf(PrintfCol::BG_Blue, "执行菜单项:%s\n", m_UiArray[nUiIndex].pszCommandName);
			m_UiArray[nUiIndex].m_UiCallBack(this,nUiIndex);
		}
		else
		{
			if (nUiIndex == m_UiArray.size())
			{
				ColPrintf(PrintfCol::结果, "返回上级菜单");
				bReturnPrev = true;
			}
			else
			{
				ColPrintf(PrintfCol::BG_Red, "非法菜单项:%d\n", nUiIndex);
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