#pragma once
void P19_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P19 Example 1 Clock Problem","P19例一 时钟问题"},
		{"Question: What is the obtuse angle formed by the hour and minute hands when the clock is represented as 1:45?",
		"题目：时钟表示为1时45分，时针和分针所形成的钝角是多少度?"},
		{"1. Calculate the hour and minute hand angles N1 at one o'clock. The hour and minute hand angles N1 at one o'clock are separated by a large grid N1 multiplied by the degree N2 of one large grid",
		"1.计算一点时时针和分针角N1 一点时时针和分针角N1=一点时相距大格数N1*一个大格的度数N2"},
		{"2. Calculate the number of squares with large errors N3=minutes pointed by the minute hand N5/hour minute N4",
		"2.计算误差大格数N3 误差大格数N3=分针指向的分钟N5/一小时分钟N4"},
		{"3. Large grid number N3 with partition error",
		"3.约分误差大格数N3"},
		{"4. Calculate the degree of error N6. The degree of error N6 is equal to the number of error grids N3 multiplied by the degree of one grid N2",
		"4.计算误差度数N6 误差度数N6=误差大格数N3*一个大格的度数N2"},
		{"5. Calculate the obtuse angle degree N7. The obtuse angle degree N7 is equal to the hour and minute hand angles N1 at one point plus the error degree N6",
		"5.计算钝角度数N7 钝角度数N7=一点时时针和分针角N1+误差度数N6"},
		//变量表
		{"Atonepoint,thereisalargelatticenumberN1betweenthem","一点时相距大格数N1"},
		{"AlargegriddegreeN2","一个大格的度数N2"},
		{"AlargegriddegreeN21","一个大格的度数N21"},
		{"TheminutehandpointstominuteN5","分针指向的分钟N5"},
		{"OnehourandminuteN4","一小时分钟N4"},
		{"Oneo'clockhourandminutehandanglesN1","一点时时针和分针角N1"},
		{"LargeerrorgridN3","误差大格数N3"},
		{"ErrordegreeN6","误差度数N6"},
		{"ErrordegreeN61","误差度数N61"},
		{"BluntangledegreeN7","钝角度数N7"},
		
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一点时相距大格数N1, 4);
	DefineLangVarInt(一个大格的度数N2, 30);
	DefineLangVarInt(分针指向的分钟N5, 45);
	DefineLangVarInt(一小时分钟N4, 60);
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddSector(4, 4, 3.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*',0);
	
	std::vector<ScanningLineT::Point> Vex6 = { {float(4),float(3.9)},{float(6.9),float(3.9)},{float(6.9),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');
	test.AddText(PrintfCol::顶点标注, 0.9, 3.9, "12");
	test.AddText(PrintfCol::顶点标注, 1.4, 5.5, "1");
	test.AddText(PrintfCol::顶点标注, 2, 6.3, "2");
	test.AddText(PrintfCol::顶点标注, 4, 7.0, "3");
	test.AddText(PrintfCol::顶点标注, 5.3, 6.9, "4");
	test.AddText(PrintfCol::顶点标注, 6.7, 5.7, "5");
	test.AddText(PrintfCol::顶点标注, 7.3, 4, "6");
	test.AddText(PrintfCol::顶点标注, 6.7, 2.3, "7");
	test.AddText(PrintfCol::顶点标注, 5.7, 1.3, "8");
	test.AddText(PrintfCol::顶点标注, 4, 0.9, "9");
	test.AddText(PrintfCol::顶点标注, 3.0, 1.0, "10");
	test.AddText(PrintfCol::顶点标注, 2.0, 1.5, "11");
	test.AddScanLineByEdgeGradient(4.0, 0.1, 1.5, 4.0, -(0), 0, '*');
	//test.AddScanLineByEdgeGradient(4.0, 0.1, 4.0, 1.5, -(0), 0, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(5.5),float(2.5)} ,{float(5.5),float(2.4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	ColPrintf(PrintfCol::标题, Lang("P19例一 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：时钟表示为1时45分，时针和分针所形成的钝角是多少度?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(一点时时针和分针角N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一点时时针和分针角N1 一点时时针和分针角N1=一点时相距大格数N1*一个大格的度数N2"));
	一点时时针和分针角N1 = 一点时相距大格数N1 * 一个大格的度数N2;
	一点时时针和分针角N1.PrintProcessLog(1);
	DefineFractionVar(误差大格数N3, 0, 0);
	//DefineLangVarInt(误差大格数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算误差大格数N3 误差大格数N3=分针指向的分钟N5/一小时分钟N4"));
	误差大格数N3.Var.nNumerator = 分针指向的分钟N5;
	误差大格数N3.Var.nDenominator = 一小时分钟N4;
	ColPrintf(PrintfCol::方法, Lang("3.约分误差大格数N3"));
	int nMaxCommonFactor = MaxCommonFactor(误差大格数N3.Var.nNumerator, 误差大格数N3.Var.nDenominator);
	误差大格数N3.Var.nNumerator = 误差大格数N3.Var.nNumerator / nMaxCommonFactor;
	误差大格数N3.Var.nDenominator = 误差大格数N3.Var.nDenominator / nMaxCommonFactor;
	DefineFractionVar(误差度数N6, 1,1);
	DefineLangVar(float,误差度数N61, 0);
	DefineFractionVar(一个大格的度数N21, 1,1);
	ColPrintf(PrintfCol::方法, Lang("4.计算误差度数N6 误差度数N6=误差大格数N3*一个大格的度数N2"));
	一个大格的度数N21.Var.nNumerator = 一个大格的度数N2;
	误差度数N6 = 误差大格数N3 * 一个大格的度数N21;
	误差度数N61.Var= float(误差度数N6.Var.nNumerator)/ float(误差度数N6.Var.nDenominator);
	误差度数N6.PrintProcessLog(4);
	DefineLangVar(float,钝角度数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算钝角度数N7 钝角度数N7=一点时时针和分针角N1+误差度数N6"));
	钝角度数N7.Var = float(一点时时针和分针角N1) + 误差度数N61;
}
void P19_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P19 Case 2 Clock Problem","P19例二 时钟问题"},
		{"Question: At what time does the hour and minute hands of a clock coincide for the first time at 4 o'clock?",
		"题目：钟表的时针和分针在4点多少分第一次重合?"},
		{"1. Calculate the clockwise speed V1. Clockwise speed V1=one hour N2 / (one hour minute N1/one large grid small number N3)",
		"1.计算时针速度V1 时针速度V1=一小时N2/(一小时分钟N1/一大格小个数N3)" },
		{"2. Calculate the speed difference V2, which is equal to the minute hand speed V3 minus the hour hand speed V1",
		"2.计算速度差V2 速度差V2=分针速度V3-时针速度V1"},
		{"3. Calculate the total number of small grids N2. The total number of small grids N2 is equal to the number of small grids in a large grid N3 multiplied by the number of grids with large differences N4",
		"3.计算总小格数N2 总小格数N2=一大格小格数N3*相差大格数N4"},
		{"4. Calculate the tracking time T1, which is equal to the total number of grids N2 divided by the speed difference V2",
		"4.计算追及时间T1 追及时间T1=总小格数N2/速度差V2"},
		//变量表
		{"OnehourN2","一小时N2"},
		{"OnehourminuteN1","一小时分钟N1"},
		{"AlargegridwithasmallnumberN3","一大格小格数N3"},
		{"LargedifferenceinlatticenumberN4","相差大格数N4"},
		{"ClockwisespeedV1","时针速度V1"},
		{"SpeeddifferenceV2","速度差V2"},
		{"TotalnumberofcellsN2","总小格数N2"},
		{"ChasingTimeT1","追及时间T1"},
		{"MinutehandspeedV3","分针速度V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddSector(4, 4, 3.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex6 = { {float(4),float(3.9)},{float(6.9),float(3.9)},{float(6.9),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');
	test.AddText(PrintfCol::顶点标注, 0.9, 3.9, "12");
	test.AddText(PrintfCol::顶点标注, 1.4, 5.5, "1");
	test.AddText(PrintfCol::顶点标注, 2, 6.3, "2");
	test.AddText(PrintfCol::顶点标注, 4, 7.0, "3");
	test.AddText(PrintfCol::顶点标注, 5.3, 6.9, "4");
	test.AddText(PrintfCol::顶点标注, 6.7, 5.7, "5");
	test.AddText(PrintfCol::顶点标注, 7.3, 4, "6");
	test.AddText(PrintfCol::顶点标注, 6.7, 2.3, "7");
	test.AddText(PrintfCol::顶点标注, 5.7, 1.3, "8");
	test.AddText(PrintfCol::顶点标注, 4, 0.9, "9");
	test.AddText(PrintfCol::顶点标注, 3.0, 1.0, "10");
	test.AddText(PrintfCol::顶点标注, 2.0, 1.5, "11");
	test.AddScanLineByEdgeGradient(2.0, 2.0, 4, 4.0, -(0), 0, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(5.5),float(4.5)} ,{float(5.5),float(4.4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	DefineFractionVar(一小时N2, 1,1);
	DefineFractionVar(一小时分钟N1, 60,1);
	DefineFractionVar(一大格小格数N3, 5,1);
	DefineFractionVar(相差大格数N4, 4,1);
	DefineFractionVar(分针速度V3,1,1)
	ColPrintf(PrintfCol::标题, Lang("P19例二 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：钟表的时针和分针在4点多少分第一次重合?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionVar(时针速度V1, 1,1);
	ColPrintf(PrintfCol::方法, Lang("1.计算时针速度V1 时针速度V1=一小时N2/(一小时分钟N1/一大格小格数N3)"));
	时针速度V1 = 一小时N2 / (一小时分钟N1 / 一大格小格数N3);
	时针速度V1.PrintProcessLog(1);
	DefineFractionVar(速度差V2, 1,1);
	ColPrintf(PrintfCol::方法, Lang("2.计算速度差V2 速度差V2=分针速度V3-时针速度V1"));
	速度差V2 = 分针速度V3 - 时针速度V1;
	速度差V2.PrintProcessLog(1);
	DefineFractionVar(总小格数N2, 1,1);
	ColPrintf(PrintfCol::方法, Lang("3.计算总小格数N2 总小格数N2=一大格小格数N3*相差大格数N4"));
	总小格数N2 = 一大格小格数N3 * 相差大格数N4;
	总小格数N2.PrintProcessLog(1);
	DefineFractionVar(追及时间T1, 1,1);
	ColPrintf(PrintfCol::方法, Lang("4.计算追及时间T1 追及时间T1=总小格数N2/速度差V2"));
	追及时间T1 = 总小格数N2 / 速度差V2;
	追及时间T1.PrintProcessLog(1);
}
void P19()
{
	P19_1();
	ColPrintf(PrintfCol::方法, "");
	P19_2();
	ColPrintf(PrintfCol::方法, "");
	//P2_3();
	ColPrintf(PrintfCol::方法, "");
}
void P19_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P19();
	Lang.SetCurLanguage(LanguageLib::English);
	P19();
	ColPrintf(PrintfCol::方法, "");

}