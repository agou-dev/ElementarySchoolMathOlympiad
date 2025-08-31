// 奥数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4305)
#pragma warning(disable : 4244)
#include <iostream>
#include <functional>

#include "LanguageLib.h"
#include "Variable.h"
#include "NPLib.h"
#include <vector>
#include "P22.h"
#include "P23.h"
#include "P1.h"
#include "P3.h"
#include "Windows.h"
#include "P24.h"
#include "P25.h"
#include "P26.h"
#include "P2.h"
#include "P5.h"
#include "P6.h"
#include "P8.h"
#include "P9.h"
#include "P10.h"
#include "P12.h"
//
// 

#include "P27.h"
#include "CalculusEquations.h"
#include "P17.h"
#include "P43.h"
#include "P37.h"
#include "P35.h"
#include "P38.h"
#include "P13.h"
#include "P14.h"
#include "P34.h"
#include "P4.h"
#include "P7.h"
#include "P28.h"
#include "P29.h"
#include "P16.h"
#include "P30.h"
#include "P31.h"
#include "P32.h"
#include "P33.h"
#include "P11.h"
#include "P15.h"
#include "P36.h"
#include "P39.h"
#include "P40.h"
#include "P41.h"
#include "P18.h"
#include "P19.h"
#include "P44.h"
#include "P45.h"
#include "P46.h"
#include "P47.h"
#include "P48.h"
#include "P20.h"
#include "P49.h"
#include "P50.h"
#include "P21.h"
#include "P51.h"
#include "P52.h"
#include "P53.h"
#include "P54.h"
#include "P55.h"
#include "P56.h"
#include "P57.h"
#include "P58.h"
#include "P59.h"
#include "P60.h"
#include "P61.h"
#include "P62.h"
#include "P63.h"
#include "P64.h"
#include "P65.h"
#include "P66.h"
#include "P67.h"
#include "P75.h"
#include "P76.h"
#include "P77.h"
#include "P78.h"
#include "P79.h"
#include "P80.h"
#include "P81.h"
#include "P82.h"
#include "P68.h"
#include "P69.h"
#include "P83.h"
#include "P84.h"
#include "P85.h"
#include "P70.h"
#include "P86.h"
#include "P71.h"
#include "P72.h"
#include "P87.h"
#include "P88.h"
#include "P73.h"
#include "P74.h"
#include "P89.h"
#include "P90.h"
#include "P91.h"
#include "P92.h"
#include "P93.h"
#include "P94.h"
#include "P95.h"
#include "P96.h"
#include "P97.h"
#include "MenuCommand.h"
//#include "Variable.h.h"
int main()
{
	std::locale::global(std::locale(""));

#define UiFuncWarp(_Func)   [&](MenuCommand*  pUi,int nUiIndex) {\
	_Func();\
	}\

	LanguageLib::LanguageTableT Language = {
		{"All questions","所有题目"},
		{"The ingenious use of proportion method","比例法的妙用"},
		{"Encounter problem","相遇问题"},
		{"Follow up on issues","追及问题"},
		{"The issue of trains crossing bridges","火车过桥问题"},
		{"The problem of hunting dogs chasing rabbits","猎狗追兔问题"},
		{"The problem of flowing ships","流水行船问题"},
		{"Average speed issue","平均速度问题"},
		{"Clock issue","时钟问题"},
		{"Mid point encounter problem","中点相遇问题"},
		{"GRAPHICS ISSUES","图形问题"},
		{"The problem of graphical notation method","图形标数法问题"},
		{"Additive problem","加乘问题"},
		{"Permutations","排列问题"},
		{"The problem of tolerance and rejection","容斥问题"},
		{"The problem of integer splitting in tree diagrams","树状图整数分拆问题"},
		{"Graph counting problem","图形计数问题"},
		{"Dictionary arrangement problem","字典排列问题"},
		{"Arithmetic sequence problem","等差数列问题"},
		{"Define a new computational problem","定义新运算问题"},
		{"Score Splitting and Problems","分数裂差裂和问题"},
		{"Clever Score Calculation Problem","分数巧算问题"},
		{"The problem of substitution method","换元法问题"},
		{"Extracting common factors problem","提取公因数问题"},
		{"Remove the bracket issue","去括号问题"},
		{"Circular decimal problem","循环小数问题"},
		{"Drawer issue","抽屉问题"},
		{"Score issue","分数问题"},
		{"Restore problem","还原问题"},
		{"Travel issues","行程问题"},
		{"Sum difference multiple problem","和差倍数问题"},
		{"The problem of chickens and rabbits in the same cage","鸡兔同笼问题"},
		{"Logical reasoning problem","逻辑推理问题"},
		{"Age issues","年龄问题"},
		{"Cattle grazing problem","牛吃草问题"},
		{"Profit and loss issues","盈亏问题"},
		{"Remainder problem","余数问题"},
		{"Tree planting issue","植树问题"},
		{"Cycle issue","周期问题"},
		{"The problem of composite prime numbers","质数合数问题"},
		{"Remainder problem1","余数问题1"},
		{"Factor multiplier problem","因数倍数问题"},
		{"The problem of dividing numbers","数的整除问题"},
		{"Factor issue","因数问题"},
	};
	Lang.AddLanguageTable(
		Language
	);
	Lang.SetCurLanguage(LanguageLib::Chinese);
	MenuCommand::MenuCommandCallBackFunctionT ShowAllProblem = [&](MenuCommand* pUi, int nUiIndex) {
		//if (std::string(Lang("所有题目")) != pUi->m_UiArray[nUiIndex].pszCommandName)
		{
			pUi->CallALLMenuUiCallBack(nUiIndex);
		}
		};

	std::vector<MenuCommand>  UiArray2 = {
		//MenuCommand(std::vector<MenuCommand::UISet>{{"P1",UiFuncWarp(P1_mian)},{"P2",P2_UI} })
		//MenuCommand({{"P1",UiFuncWarp(P1_mian)},{"P2",P2_UI} })
		//0
		{{"P1",UiFuncWarp(P1_mian)},{"P2",UiFuncWarp(P2_mian)},{Lang("所有题目"),ShowAllProblem}},
		//1
		{{"P3",UiFuncWarp(P3_mian)},{"P9",UiFuncWarp(P9_mian) },{Lang("所有题目"),ShowAllProblem}},
		//2
		{{"P4",UiFuncWarp(P4_mian)},{"P10",UiFuncWarp(P10_mian) },{Lang("所有题目"),ShowAllProblem}},
		//3
		{{"P5",UiFuncWarp(P5_mian)},{"P6",UiFuncWarp(P6_mian) },{"P7",UiFuncWarp(P7_mian) },{"P8",UiFuncWarp(P8_mian) },{Lang("所有题目"),ShowAllProblem}},
		//4
		{{"P11",UiFuncWarp(P11_mian)},{"P12",UiFuncWarp(P12_mian) },{Lang("所有题目"),ShowAllProblem}},
		//5
		{{"P13",UiFuncWarp(P13_mian)},{"P14",UiFuncWarp(P14_mian) },{"P15",UiFuncWarp(P15_mian) },{"P16",UiFuncWarp(P16_mian) },{Lang("所有题目"),ShowAllProblem}},
		//6
		{{"P17",UiFuncWarp(P17_mian)},{"P18",UiFuncWarp(P18_mian) },{Lang("所有题目"),ShowAllProblem}},
		//7
		{{"P19",UiFuncWarp(P19_mian)},{"P20",UiFuncWarp(P20_mian) },{"P21",UiFuncWarp(P21_mian) },{"P85",UiFuncWarp(P85_mian) },{Lang("所有题目"),ShowAllProblem}},
		//8
		{{"P22",UiFuncWarp(P22_mian)},{"P23",UiFuncWarp(P23_mian) },{Lang("所有题目"),ShowAllProblem}},
		//9
		{{"P24",UiFuncWarp(P24_mian)},{"P25",UiFuncWarp(P25_mian) },{"P26",UiFuncWarp(P26_mian) },{"P27",UiFuncWarp(P27_mian) },{"P29",UiFuncWarp(P29_mian) },{"P30",UiFuncWarp(P30_mian) },{"P31",UiFuncWarp(P31_mian) },{"P32",UiFuncWarp(P32_mian) },{"P33",UiFuncWarp(P33_mian) },{"P34",UiFuncWarp(P34_mian) },{"P35",UiFuncWarp(P35_mian) },{"P36",UiFuncWarp(P36_mian) },{"P37",UiFuncWarp(P37_mian) },{"P38",UiFuncWarp(P38_mian) },{Lang("所有题目"),ShowAllProblem}},
		//10
		{{"P39",UiFuncWarp(P39_mian)},{Lang("所有题目"),ShowAllProblem}},
		//11
		{{"P40",UiFuncWarp(P40_mian)},{"P41",UiFuncWarp(P41_mian)},{Lang("所有题目"),ShowAllProblem}},
		//12
		{{"P43",UiFuncWarp(P43_mian)},{"P44",UiFuncWarp(P44_mian)},{Lang("所有题目"),ShowAllProblem}},
		//13
		{{"P45",UiFuncWarp(P45_mian)},{"P46",UiFuncWarp(P46_mian)},{"P47",UiFuncWarp(P47_mian)},{Lang("所有题目"),ShowAllProblem}},
		//14
		{{"P48",UiFuncWarp(P48_mian)},{Lang("所有题目"),ShowAllProblem}},
		//15
		{{"P49",UiFuncWarp(P49_mian)},{"P50",UiFuncWarp(P50_mian)},{"P51",UiFuncWarp(P51_mian)},{Lang("所有题目"),ShowAllProblem}},
		//16
		{{"P52",UiFuncWarp(P52_mian)},{Lang("所有题目"),ShowAllProblem}},
		//17
		{{"P54",UiFuncWarp(P54_mian)},{"P55",UiFuncWarp(P55_mian)},{"P56",UiFuncWarp(P56_mian)},{Lang("所有题目"),ShowAllProblem}},
		//18
		{{"P57",UiFuncWarp(P57_mian)},{"P58",UiFuncWarp(P58_mian) },{Lang("所有题目"),ShowAllProblem}},
		//19
		{{"P59",UiFuncWarp(P59_mian)},{"P60",UiFuncWarp(P60_mian) },{"P61",UiFuncWarp(P61_mian) },{Lang("所有题目"),ShowAllProblem}},
		//20
		{{"P62",UiFuncWarp(P62_mian)},{"P63",UiFuncWarp(P63_mian) },{Lang("所有题目"),ShowAllProblem}},
		//21
		{{"P65",UiFuncWarp(P65_mian)},{Lang("所有题目"),ShowAllProblem}},
		//22
		{{"P66",UiFuncWarp(P66_mian)},{"P67",UiFuncWarp(P67_mian) },{Lang("所有题目"),ShowAllProblem}},
		//23
		{{"P68",UiFuncWarp(P68_mian)},{"P69",UiFuncWarp(P69_mian) },{Lang("所有题目"),ShowAllProblem}},
		//24
		{{"P70",UiFuncWarp(P70_mian)},{"P71",UiFuncWarp(P71_mian) },{Lang("所有题目"),ShowAllProblem}},
		//25
		{{"P72",UiFuncWarp(P72_mian)},{Lang("所有题目"),ShowAllProblem}},
		//26
		{{"P73",UiFuncWarp(P73_mian)},{Lang("所有题目"),ShowAllProblem}},
		//27
		{{"P75",UiFuncWarp(P75_mian)},{Lang("所有题目"),ShowAllProblem}},
		//28
		{{"P76",UiFuncWarp(P76_mian)},{"P77",UiFuncWarp(P77_mian)},{Lang("所有题目"),ShowAllProblem}},
		//29
		{{"P78",UiFuncWarp(P78_mian)},{Lang("所有题目"),ShowAllProblem}},
		//30
		{{"P79",UiFuncWarp(P79_mian)},{"P80",UiFuncWarp(P80_mian)},{Lang("所有题目"),ShowAllProblem}},
		//31
		{{"P81",UiFuncWarp(P81_mian)},{"P82",UiFuncWarp(P82_mian)},{Lang("所有题目"),ShowAllProblem}},
		//32
		{{"P83",UiFuncWarp(P83_mian)},{Lang("所有题目"),ShowAllProblem}},
		//33
		{{"P84",UiFuncWarp(P84_mian)},{Lang("所有题目"),ShowAllProblem}},

		//34
		{{"P86",UiFuncWarp(P86_mian)},{Lang("所有题目"),ShowAllProblem}},
		//35
		{{"P87",UiFuncWarp(P87_mian)},{Lang("所有题目"),ShowAllProblem}},
		//36
		{{"P88",UiFuncWarp(P88_mian)},{Lang("所有题目"),ShowAllProblem}},
		//37
		{{"P89",UiFuncWarp(P89_mian)},{Lang("所有题目"),ShowAllProblem}},
		//38
		{{"P90",UiFuncWarp(P90_mian)},{Lang("所有题目"),ShowAllProblem}},
		//39
		{{"P91",UiFuncWarp(P91_mian)},{"P97",UiFuncWarp(P97_mian)},{Lang("所有题目"),ShowAllProblem}},
		//40
		{{"P92",UiFuncWarp(P92_mian)},{"P93",UiFuncWarp(P93_mian)},{Lang("所有题目"),ShowAllProblem}},
		//41
		{{"P94",UiFuncWarp(P94_mian)},{"P96",UiFuncWarp(P96_mian)},{Lang("所有题目"),ShowAllProblem}},
		//42
		{{"P95",UiFuncWarp(P95_mian)},{Lang("所有题目"),ShowAllProblem}},
	};
	//bili = { 
	//	{{"P1",UiFuncWarp(P1_mian)},{"P2",P2_UI}}
	//	 };

	MenuCommand MainUi;
	MainUi.AddSubUiCommand(Lang("比例法的妙用"), UiArray2[0]);
	MainUi.AddSubUiCommand(Lang("相遇问题"), UiArray2[1]);
	MainUi.AddSubUiCommand(Lang("追及问题"), UiArray2[2]);
	MainUi.AddSubUiCommand(Lang("火车过桥问题"), UiArray2[3]);
	MainUi.AddSubUiCommand(Lang("猎狗追兔问题"), UiArray2[4]);
	MainUi.AddSubUiCommand(Lang("流水行船问题"), UiArray2[5]);
	MainUi.AddSubUiCommand(Lang("平均速度问题"), UiArray2[6]);
	MainUi.AddSubUiCommand(Lang("时钟问题"), UiArray2[7]);
	MainUi.AddSubUiCommand(Lang("中点相遇问题"), UiArray2[8]);
	MainUi.AddSubUiCommand(Lang("图形问题"), UiArray2[9]);
	MainUi.AddSubUiCommand(Lang("图形标数法问题"), UiArray2[10]);
	MainUi.AddSubUiCommand(Lang("加乘问题"), UiArray2[11]);
	MainUi.AddSubUiCommand(Lang("排列问题"), UiArray2[12]);
	MainUi.AddSubUiCommand(Lang("容斥问题"), UiArray2[13]);
	MainUi.AddSubUiCommand(Lang("树状图整数分拆问题"), UiArray2[14]);
	MainUi.AddSubUiCommand(Lang("图形计数问题"), UiArray2[15]);
	MainUi.AddSubUiCommand(Lang("字典排列问题"), UiArray2[16]);
	MainUi.AddSubUiCommand(Lang("等差数列问题"), UiArray2[17]);
	MainUi.AddSubUiCommand(Lang("定义新运算问题"), UiArray2[18]);
	MainUi.AddSubUiCommand(Lang("分数裂差裂和问题"), UiArray2[19]);
	MainUi.AddSubUiCommand(Lang("分数巧算问题"), UiArray2[20]);
	MainUi.AddSubUiCommand(Lang("换元法问题"), UiArray2[21]);
	MainUi.AddSubUiCommand(Lang("提取公因数问题"), UiArray2[22]);
	MainUi.AddSubUiCommand(Lang("去括号问题"), UiArray2[23]);
	MainUi.AddSubUiCommand(Lang("循环小数问题"), UiArray2[24]);
	MainUi.AddSubUiCommand(Lang("抽屉问题"), UiArray2[25]);
	MainUi.AddSubUiCommand(Lang("分数问题"), UiArray2[26]);
	MainUi.AddSubUiCommand(Lang("还原问题"), UiArray2[27]);
	MainUi.AddSubUiCommand(Lang("行程问题"), UiArray2[28]);
	MainUi.AddSubUiCommand(Lang("和差倍数问题"), UiArray2[29]);
	MainUi.AddSubUiCommand(Lang("鸡兔同笼问题"), UiArray2[30]);
	MainUi.AddSubUiCommand(Lang("逻辑推理问题"), UiArray2[31]);
	MainUi.AddSubUiCommand(Lang("年龄问题"), UiArray2[32]);
	MainUi.AddSubUiCommand(Lang("牛吃草问题"), UiArray2[33]);

	MainUi.AddSubUiCommand(Lang("盈亏问题"), UiArray2[34]);
	MainUi.AddSubUiCommand(Lang("余数问题"), UiArray2[35]);
	MainUi.AddSubUiCommand(Lang("植树问题"), UiArray2[36]);
	MainUi.AddSubUiCommand(Lang("周期问题"), UiArray2[37]);
	MainUi.AddSubUiCommand(Lang("质数合数问题"), UiArray2[38]);
	MainUi.AddSubUiCommand(Lang("余数问题1"), UiArray2[39]);
	MainUi.AddSubUiCommand(Lang("因数倍数问题"), UiArray2[40]);
	MainUi.AddSubUiCommand(Lang("数的整除问题"), UiArray2[41]);
	MainUi.AddSubUiCommand(Lang("因数问题"), UiArray2[42]);
	for (;;)
	{
		MainUi.Show();
	}
	//NPLib::CPEnum::Test();
	//SetConsoleOutputCP(CP_UTF8);
	//Test::TestVariable();
	// 
	//P22_mian();
	//P1_mian();
	//P23_mian();
	//HighestCommonFactortest();
	//Test::TestFraction();
	//Test::TestFractionProcess();
	/*
	*/
	//P24_mian();
	//P2_mian();
	//P5_mian();
	//P25_mian();
	//P26_mian();
	//P27_mian();
	//P6_mian();
	//P29_mian();
	//P3_mian();
	//P4_mian();
	//P7_mian();
	//P8_mian();
	//P30_mian();
	//P9_mian();
	//P31_mian();
	//P10_mian();
	//P32_mian();
	//P11_mian();
	//P33_mian();
	
	//VariableTest();
	//P12_mian();
	//P13_mian();       //////
	//P14_mian();
	
	
	//P34_mian();
	
	
	
	
	//P15_mian();//7/10
	//P16_mian();//7/12
	//P35_mian();//7/9
	//P36_mian();//7/10
	
	//P38_mian();//7/12
	//P39_mian();//7/13
	//P17_mian();//7/13
	//P40_mian();//7/14


	//P41_mian();//7/16
	//P43_mian();//7/15
	//P44_mian();//7/18
	//P18_mian();//7/15
	
	//picture();
	
	
	
	//P45_mian();//7/17
	//P46_mian();//7/19
	//P47_mian();//7/21
	//P19_mian();//7/17
	
	
	
	//P48_mian();//7/22
	//P49_mian();//7/23
	//P50_mian();//7/23
	//P20_mian();//7/24
	
	
	
	//P51_mian();//7/27
	//P52_mian();//7/27
	//P54_mian();//7/29
	//P21_mian();//7/25
	
	
	//P55_mian();//7/30
	//P56_mian();//7/31
	//P57_mian();//7/31
	//P58_mian();//8/1

	//P59_mian();//8/2
	//P60_mian();//8/2
	//P61_mian();//8/3
	//P62_mian();//8/3

	//P63_mian();//8/3
	//P75_mian();//8/4
	
	//P76_mian();//8/7
	//P65_mian();//8/7
	//P77_mian();//8/7
	//P66_mian();//8/8
	//P78_mian();//8/8
	//P79_mian();//8/10
	//P80_mian();//8/10
	//P81_mian();//8/11
	//P67_mian();//8/11
	//P82_mian();//8/12
	//P68_mian();//8/12
	//P83_mian();//8/13
	//P69_mian();//8/13
	//P84_mian();//8/14//**/
	//P85_mian();//8/15
	//P70_mian();//8/15
	//P86_mian();//8/16
	//P71_mian();//8/16
	//P87_mian();//8/17
	//P72_mian();//8/17
	//P88_mian();//8/19
	//P73_mian();//8/19
	//P89_mian();//8/20
	//textwithinprime();
	//P90_mian();//8/21
	//P91_mian();//8/21
	//P92_mian();//8/22
	//P93_mian();//8/22
	//P94_mian();//8/23
	//P95_mian();//8/23
	//P96_mian();//8/24
	//P97_mian();//8/24
	/*----------------------------The End----------------------2025-8/24上午12：57----------------------*/
	for (;;)
	{
		Sleep(0.0001);
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
