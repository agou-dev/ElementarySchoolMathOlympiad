// ����.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
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
		{"All questions","������Ŀ"},
		{"The ingenious use of proportion method","������������"},
		{"Encounter problem","��������"},
		{"Follow up on issues","׷������"},
		{"The issue of trains crossing bridges","�𳵹�������"},
		{"The problem of hunting dogs chasing rabbits","�Թ�׷������"},
		{"The problem of flowing ships","��ˮ�д�����"},
		{"Average speed issue","ƽ���ٶ�����"},
		{"Clock issue","ʱ������"},
		{"Mid point encounter problem","�е���������"},
		{"GRAPHICS ISSUES","ͼ������"},
		{"The problem of graphical notation method","ͼ�α���������"},
		{"Additive problem","�ӳ�����"},
		{"Permutations","��������"},
		{"The problem of tolerance and rejection","�ݳ�����"},
		{"The problem of integer splitting in tree diagrams","��״ͼ�����ֲ�����"},
		{"Graph counting problem","ͼ�μ�������"},
		{"Dictionary arrangement problem","�ֵ���������"},
		{"Arithmetic sequence problem","�Ȳ���������"},
		{"Define a new computational problem","��������������"},
		{"Score Splitting and Problems","�����Ѳ��Ѻ�����"},
		{"Clever Score Calculation Problem","������������"},
		{"The problem of substitution method","��Ԫ������"},
		{"Extracting common factors problem","��ȡ����������"},
		{"Remove the bracket issue","ȥ��������"},
		{"Circular decimal problem","ѭ��С������"},
		{"Drawer issue","��������"},
		{"Score issue","��������"},
		{"Restore problem","��ԭ����"},
		{"Travel issues","�г�����"},
		{"Sum difference multiple problem","�Ͳ������"},
		{"The problem of chickens and rabbits in the same cage","����ͬ������"},
		{"Logical reasoning problem","�߼���������"},
		{"Age issues","��������"},
		{"Cattle grazing problem","ţ�Բ�����"},
		{"Profit and loss issues","ӯ������"},
		{"Remainder problem","��������"},
		{"Tree planting issue","ֲ������"},
		{"Cycle issue","��������"},
		{"The problem of composite prime numbers","������������"},
		{"Remainder problem1","��������1"},
		{"Factor multiplier problem","������������"},
		{"The problem of dividing numbers","������������"},
		{"Factor issue","��������"},
	};
	Lang.AddLanguageTable(
		Language
	);
	Lang.SetCurLanguage(LanguageLib::Chinese);
	MenuCommand::MenuCommandCallBackFunctionT ShowAllProblem = [&](MenuCommand* pUi, int nUiIndex) {
		//if (std::string(Lang("������Ŀ")) != pUi->m_UiArray[nUiIndex].pszCommandName)
		{
			pUi->CallALLMenuUiCallBack(nUiIndex);
		}
		};

	std::vector<MenuCommand>  UiArray2 = {
		//MenuCommand(std::vector<MenuCommand::UISet>{{"P1",UiFuncWarp(P1_mian)},{"P2",P2_UI} })
		//MenuCommand({{"P1",UiFuncWarp(P1_mian)},{"P2",P2_UI} })
		//0
		{{"P1",UiFuncWarp(P1_mian)},{"P2",UiFuncWarp(P2_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//1
		{{"P3",UiFuncWarp(P3_mian)},{"P9",UiFuncWarp(P9_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//2
		{{"P4",UiFuncWarp(P4_mian)},{"P10",UiFuncWarp(P10_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//3
		{{"P5",UiFuncWarp(P5_mian)},{"P6",UiFuncWarp(P6_mian) },{"P7",UiFuncWarp(P7_mian) },{"P8",UiFuncWarp(P8_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//4
		{{"P11",UiFuncWarp(P11_mian)},{"P12",UiFuncWarp(P12_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//5
		{{"P13",UiFuncWarp(P13_mian)},{"P14",UiFuncWarp(P14_mian) },{"P15",UiFuncWarp(P15_mian) },{"P16",UiFuncWarp(P16_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//6
		{{"P17",UiFuncWarp(P17_mian)},{"P18",UiFuncWarp(P18_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//7
		{{"P19",UiFuncWarp(P19_mian)},{"P20",UiFuncWarp(P20_mian) },{"P21",UiFuncWarp(P21_mian) },{"P85",UiFuncWarp(P85_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//8
		{{"P22",UiFuncWarp(P22_mian)},{"P23",UiFuncWarp(P23_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//9
		{{"P24",UiFuncWarp(P24_mian)},{"P25",UiFuncWarp(P25_mian) },{"P26",UiFuncWarp(P26_mian) },{"P27",UiFuncWarp(P27_mian) },{"P29",UiFuncWarp(P29_mian) },{"P30",UiFuncWarp(P30_mian) },{"P31",UiFuncWarp(P31_mian) },{"P32",UiFuncWarp(P32_mian) },{"P33",UiFuncWarp(P33_mian) },{"P34",UiFuncWarp(P34_mian) },{"P35",UiFuncWarp(P35_mian) },{"P36",UiFuncWarp(P36_mian) },{"P37",UiFuncWarp(P37_mian) },{"P38",UiFuncWarp(P38_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//10
		{{"P39",UiFuncWarp(P39_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//11
		{{"P40",UiFuncWarp(P40_mian)},{"P41",UiFuncWarp(P41_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//12
		{{"P43",UiFuncWarp(P43_mian)},{"P44",UiFuncWarp(P44_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//13
		{{"P45",UiFuncWarp(P45_mian)},{"P46",UiFuncWarp(P46_mian)},{"P47",UiFuncWarp(P47_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//14
		{{"P48",UiFuncWarp(P48_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//15
		{{"P49",UiFuncWarp(P49_mian)},{"P50",UiFuncWarp(P50_mian)},{"P51",UiFuncWarp(P51_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//16
		{{"P52",UiFuncWarp(P52_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//17
		{{"P54",UiFuncWarp(P54_mian)},{"P55",UiFuncWarp(P55_mian)},{"P56",UiFuncWarp(P56_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//18
		{{"P57",UiFuncWarp(P57_mian)},{"P58",UiFuncWarp(P58_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//19
		{{"P59",UiFuncWarp(P59_mian)},{"P60",UiFuncWarp(P60_mian) },{"P61",UiFuncWarp(P61_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//20
		{{"P62",UiFuncWarp(P62_mian)},{"P63",UiFuncWarp(P63_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//21
		{{"P65",UiFuncWarp(P65_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//22
		{{"P66",UiFuncWarp(P66_mian)},{"P67",UiFuncWarp(P67_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//23
		{{"P68",UiFuncWarp(P68_mian)},{"P69",UiFuncWarp(P69_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//24
		{{"P70",UiFuncWarp(P70_mian)},{"P71",UiFuncWarp(P71_mian) },{Lang("������Ŀ"),ShowAllProblem}},
		//25
		{{"P72",UiFuncWarp(P72_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//26
		{{"P73",UiFuncWarp(P73_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//27
		{{"P75",UiFuncWarp(P75_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//28
		{{"P76",UiFuncWarp(P76_mian)},{"P77",UiFuncWarp(P77_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//29
		{{"P78",UiFuncWarp(P78_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//30
		{{"P79",UiFuncWarp(P79_mian)},{"P80",UiFuncWarp(P80_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//31
		{{"P81",UiFuncWarp(P81_mian)},{"P82",UiFuncWarp(P82_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//32
		{{"P83",UiFuncWarp(P83_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//33
		{{"P84",UiFuncWarp(P84_mian)},{Lang("������Ŀ"),ShowAllProblem}},

		//34
		{{"P86",UiFuncWarp(P86_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//35
		{{"P87",UiFuncWarp(P87_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//36
		{{"P88",UiFuncWarp(P88_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//37
		{{"P89",UiFuncWarp(P89_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//38
		{{"P90",UiFuncWarp(P90_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//39
		{{"P91",UiFuncWarp(P91_mian)},{"P97",UiFuncWarp(P97_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//40
		{{"P92",UiFuncWarp(P92_mian)},{"P93",UiFuncWarp(P93_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//41
		{{"P94",UiFuncWarp(P94_mian)},{"P96",UiFuncWarp(P96_mian)},{Lang("������Ŀ"),ShowAllProblem}},
		//42
		{{"P95",UiFuncWarp(P95_mian)},{Lang("������Ŀ"),ShowAllProblem}},
	};
	//bili = { 
	//	{{"P1",UiFuncWarp(P1_mian)},{"P2",P2_UI}}
	//	 };

	MenuCommand MainUi;
	MainUi.AddSubUiCommand(Lang("������������"), UiArray2[0]);
	MainUi.AddSubUiCommand(Lang("��������"), UiArray2[1]);
	MainUi.AddSubUiCommand(Lang("׷������"), UiArray2[2]);
	MainUi.AddSubUiCommand(Lang("�𳵹�������"), UiArray2[3]);
	MainUi.AddSubUiCommand(Lang("�Թ�׷������"), UiArray2[4]);
	MainUi.AddSubUiCommand(Lang("��ˮ�д�����"), UiArray2[5]);
	MainUi.AddSubUiCommand(Lang("ƽ���ٶ�����"), UiArray2[6]);
	MainUi.AddSubUiCommand(Lang("ʱ������"), UiArray2[7]);
	MainUi.AddSubUiCommand(Lang("�е���������"), UiArray2[8]);
	MainUi.AddSubUiCommand(Lang("ͼ������"), UiArray2[9]);
	MainUi.AddSubUiCommand(Lang("ͼ�α���������"), UiArray2[10]);
	MainUi.AddSubUiCommand(Lang("�ӳ�����"), UiArray2[11]);
	MainUi.AddSubUiCommand(Lang("��������"), UiArray2[12]);
	MainUi.AddSubUiCommand(Lang("�ݳ�����"), UiArray2[13]);
	MainUi.AddSubUiCommand(Lang("��״ͼ�����ֲ�����"), UiArray2[14]);
	MainUi.AddSubUiCommand(Lang("ͼ�μ�������"), UiArray2[15]);
	MainUi.AddSubUiCommand(Lang("�ֵ���������"), UiArray2[16]);
	MainUi.AddSubUiCommand(Lang("�Ȳ���������"), UiArray2[17]);
	MainUi.AddSubUiCommand(Lang("��������������"), UiArray2[18]);
	MainUi.AddSubUiCommand(Lang("�����Ѳ��Ѻ�����"), UiArray2[19]);
	MainUi.AddSubUiCommand(Lang("������������"), UiArray2[20]);
	MainUi.AddSubUiCommand(Lang("��Ԫ������"), UiArray2[21]);
	MainUi.AddSubUiCommand(Lang("��ȡ����������"), UiArray2[22]);
	MainUi.AddSubUiCommand(Lang("ȥ��������"), UiArray2[23]);
	MainUi.AddSubUiCommand(Lang("ѭ��С������"), UiArray2[24]);
	MainUi.AddSubUiCommand(Lang("��������"), UiArray2[25]);
	MainUi.AddSubUiCommand(Lang("��������"), UiArray2[26]);
	MainUi.AddSubUiCommand(Lang("��ԭ����"), UiArray2[27]);
	MainUi.AddSubUiCommand(Lang("�г�����"), UiArray2[28]);
	MainUi.AddSubUiCommand(Lang("�Ͳ������"), UiArray2[29]);
	MainUi.AddSubUiCommand(Lang("����ͬ������"), UiArray2[30]);
	MainUi.AddSubUiCommand(Lang("�߼���������"), UiArray2[31]);
	MainUi.AddSubUiCommand(Lang("��������"), UiArray2[32]);
	MainUi.AddSubUiCommand(Lang("ţ�Բ�����"), UiArray2[33]);

	MainUi.AddSubUiCommand(Lang("ӯ������"), UiArray2[34]);
	MainUi.AddSubUiCommand(Lang("��������"), UiArray2[35]);
	MainUi.AddSubUiCommand(Lang("ֲ������"), UiArray2[36]);
	MainUi.AddSubUiCommand(Lang("��������"), UiArray2[37]);
	MainUi.AddSubUiCommand(Lang("������������"), UiArray2[38]);
	MainUi.AddSubUiCommand(Lang("��������1"), UiArray2[39]);
	MainUi.AddSubUiCommand(Lang("������������"), UiArray2[40]);
	MainUi.AddSubUiCommand(Lang("������������"), UiArray2[41]);
	MainUi.AddSubUiCommand(Lang("��������"), UiArray2[42]);
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
	/*----------------------------The End----------------------2025-8/24����12��57----------------------*/
	for (;;)
	{
		Sleep(0.0001);
	}
	return 0;
}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
