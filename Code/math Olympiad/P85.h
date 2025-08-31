#pragma once
void P85_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P85 Example 1 Clock Problem","P85 例一 时钟问题"},
		{"Title: Starting from four o'clock, how much time does it take for the hour hand to coincide with the minute hand?",
		"题目：从四点开始，再经过多少时间，时针正好与分针重合?"},
		{"1. Calculate the pursuit distance S1, Chasing distance S1=Four points N1 * Each large grid degree N2",
		"1.计算追及路程S1 追及路程S1=四点N1*每大格度数N2"},
		{"2. Calculate the speed difference V1, which is equal to the minute hand speed V2 minus the hour hand speed V3",
		"2.计算速度差V1 速度差V1=分针速度V2-时针速度V3"},
		{"3. Calculate the coincidence time T1. The coincidence time T1 is equal to the following distance S1 divided by the speed difference V1",
		"3.计算重合时间T1 重合时间T1=追及路程S1/速度差V1"},
		//变量表
		{"Fouro'clockN1","四点N1"},
		{"EachgriddegreeN2","每大格度数N2"},
		{"MinutehandspeedV2","分针速度V2"},
		{"ClockwisespeedV3","时针速度V3"},
		{"ChasingthedistanceS1","追及路程S1"},
		{"SpeeddifferenceV1","速度差V1"},
		{"ChasingthedistanceS1","追及路程S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(四点N1, 4, 1);
	DefineFractionLangVar(每大格度数N2, 30, 1);
	DefineFractionLangVar(分针速度V2, 6, 1);
	DefineFractionLangVar(时针速度V3, 1, 2);
	ColPrintf(PrintfCol::标题, Lang("P85 例一 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：从四点开始，再经过多少时间，时针正好与分针重合?"));
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
	//test.AddScanLineByEdgeGradient(4.0, 2.0, 4, 4.0, 0, 0, '*');
	ScanningLineT::Point Begin = {4,4};
	ScanningLineT::Point End = {6.0,5.7};
	test.AddLine(Begin, End, 0.07, PrintfCol::Green);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionLangVar(追及路程S1, 1,1);
	ColPrintf(PrintfCol::方法, Lang("1.计算追及路程S1 追及路程S1=四点N1*每大格度数N2"));
	追及路程S1 = 四点N1 * 每大格度数N2;
	追及路程S1.PrintProcessLog(1);
	DefineFractionLangVar(速度差V1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("2.计算速度差V1 速度差V1=分针速度V2-时针速度V3"));
	速度差V1 = 分针速度V2 - 时针速度V3;
	速度差V1.PrintProcessLog(2);
	DefineFractionLangVar(重合时间T1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("3.计算重合时间T1 重合时间T1=追及路程S1/速度差V1"));
	重合时间T1 = 追及路程S1 / 速度差V1;
	重合时间T1.PrintProcessLog(3);
}
void P85_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P85 Example 2 Clock Problem","P85 例二 时钟问题"},
		{"Question: How many minutes after five o'clock, the hour and minute hands must be equidistant from five and must be on both sides of five",
		"题目：五点过多少分钟后，时针和分针和五距离相等，且必须在5两边"},
		{"1. Calculate the tracking distance S1. The tracking distance S1 is equal to five points N1 multiplied by each large grid degree N2",
		"1.计算追及路程S1 追及路程S1=五点N1*每大格度数N2"},
		{"2. Set the hour and minute hands of m minutes to be equal to the distance of 5, and on both sides of 5",
		"2.设m分钟时时针和分针和五距离相等，而且在5两边"},
		{"1. List the distance traveled by the hour hand in the formula S1 m * 0.5",
		"1.列出式子时针走的路程S1 m*0.5"},
		{"2. List the distance between the minute hand and the distance 5 in equation S2 150-6m",
		"2.列出式子分针距离5的路程S2 150-6m"},
		{"3. According to S1 and S2, list the equation S3 m * 0.5=150-6m",
		"3.根据S1，S2列出式子S3 m*0.5=150-6m"},
		{"4. Simplify S3 to obtain S4 6.5m=150",
		"4.化简S3得到S4 6.5m=150"},
		{"5. Simplify S4 to obtain S5 m=23 (1/13)",
		"5.化简S4得到S5 m=23(1/13)"},
		//变量表
		{"Fiveo'clockN1","五点N1"},
		{"EachgriddegreeN2","每大格度数N2"},
		{"ChasingthedistanceS1","追及路程S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(五点N1, 5, 1);
	DefineFractionLangVar(每大格度数N2, 30, 1);
	ColPrintf(PrintfCol::标题, Lang("P85 例二 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：五点过多少分钟后，时针和分针和五距离相等，且必须在5两边"));
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
	//test.AddScanLineByEdgeGradient(4.0, 2.0, 4, 4.0, 0, 0, '*');
	ScanningLineT::Point Begin = { 4,4 };
	ScanningLineT::Point End = { 4.4,5.3 };
	ScanningLineT::Point Begin1 = { 4,4 };
	ScanningLineT::Point End1 = { 6.0,5.7 };
	test.AddLine(Begin, End, 0.07, PrintfCol::Green);
	test.AddLine(Begin1, End1, 0.07, PrintfCol::Green);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionLangVar(追及路程S1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("1.计算追及路程S1 追及路程S1=五点N1*每大格度数N2"));
	追及路程S1 = 五点N1 * 每大格度数N2;
	追及路程S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::方法, Lang("2.设m分钟时时针和分针和五距离相等，而且在5两边"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子时针走的路程S1 m*0.5"));
	ColPrintf(PrintfCol::方法, Lang("2.列出式子分针距离5的路程S2 150-6m"));
	ColPrintf(PrintfCol::方法, Lang("3.根据S1，S2列出式子S3 m*0.5=150-6m"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 6.5m=150"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S4得到S5 m=23(1/13)"));
}
void P85_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P85 Example Three Clock Problem","P85 例三 时钟问题"},
		{"Title: Lily started reading after 3 o'clock, and the minute and hour hands happened to coincide. After 5 o'clock, the minute and hour hands happened to coincide. How much time did Lily read?",
		"题目：莉莉3点多钟时开始看书，分针和时针正好重合，看到5点多钟，分针和时针正好重合，莉莉看了多少时间的书?"},
		{"1. Calculate the three-point multiple pursuit distance S1. The three-point multiple pursuit distance S1=three-point N1 * per large grid degree N2",
		"1.计算三点多追及路程S1 三点多追及路程S1=三点N1*每大格度数N2"},
		{"2. Calculate the three-point chase time T1, which is equal to the three-point chase distance S1 divided by the minute hand speed V2 and the hour hand speed V3",
		"2.计算三点多追及时间T1 三点多追及时间T1=三点多追及路程S1/(分针速度V2-时针速度V3)"},
		{"3. Calculate the distance S2 for catching up at five o'clock, where S2=five o'clock N3 * N2 for each large grid degree",
		"3.计算五点多追及路程S2 五点多追及路程S2=五点N3*每大格度数N2"},
		{"4. Calculate the time T2 for catching up after 5 o'clock. The time T2 for catching up after 5 o'clock is equal to the distance S2 for catching up after 5 o'clock divided by the minute hand speed V2 and the hour hand speed V3",
		"4.计算五点多追及时间T2 五点多追及时间T2=五点多追及路程S2/(分针速度V2-时针速度V3)"},
		{"5. Calculate how long you have been reading the book T3=after five o'clock, time T2- after three o'clock, time T1",
		"5.计算看了多长时间书T3 看了多长时间书T3=五点多追及时间T2-三点多追及时间T1"},
		//变量表
		{"Threeo'clockN1","三点N1"},
		{"EachgriddegreeN2","每大格度数N2"},
		{"MinutehandspeedV2","分针速度V2"},
		{"ClockwisespeedV3","时针速度V3"},
		{"Fiveo'clockN3","五点N3"},
		{"Afterthreeo'clock,catchupwiththeS1journey","三点多追及路程S1"},
		{"After3o'clock,catchupwithtimeT1","三点多追及时间T1"},
		{"TrackS2after5o'clock","五点多追及路程S2"},
		{"After5o'clock,catchupwithtimeT2","五点多追及时间T2"},
		{"HowlonghaveyoubeenreadingT3","看了多长时间书T3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(三点N1, 3, 1);
	DefineFractionLangVar(每大格度数N2, 30, 1);
	DefineFractionLangVar(分针速度V2, 6, 1);
	DefineFractionLangVar(时针速度V3, 1, 2);
	DefineFractionLangVar(五点N3, 5, 1);
	ColPrintf(PrintfCol::标题, Lang("P85 例三 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：莉莉3点多钟时开始看书，分针和时针正好重合，看到5点多钟，分针和时针正好重合，莉莉看了多少时间的书?"));
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
	//test.AddScanLineByEdgeGradient(4.0, 2.0, 4, 4.0, 0, 0, '*');
	ScanningLineT::Point Begin1 = { 4,4 };
	ScanningLineT::Point End1 = { 6.0,4.3 };
	//test.AddLine(Begin, End, 0.07, PrintfCol::Green);
	test.AddLine(Begin1, End1, 0.07, PrintfCol::Green);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);

	
	DefineFractionLangVar(三点多追及路程S1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("1.计算三点多追及路程S1 三点多追及路程S1=三点N1*每大格度数N2"));
	三点多追及路程S1 = 三点N1 * 每大格度数N2;
	三点多追及路程S1.PrintProcessLog(1);
	DefineFractionLangVar(三点多追及时间T1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("2.计算三点多追及时间T1 三点多追及时间T1=三点多追及路程S1/(分针速度V2-时针速度V3)"));
	三点多追及时间T1 = 三点多追及路程S1 / (分针速度V2 - 时针速度V3);
	三点多追及时间T1.PrintProcessLog(2);
	DefineFractionLangVar(五点多追及路程S2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("3.计算五点多追及路程S2 五点多追及路程S2=五点N3*每大格度数N2"));
	五点多追及路程S2 = 五点N3 * 每大格度数N2;
	五点多追及路程S2.PrintProcessLog(3);
	DefineFractionLangVar(五点多追及时间T2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("4.计算五点多追及时间T2 五点多追及时间T2=五点多追及路程S2/(分针速度V2-时针速度V3)"));
	五点多追及时间T2 = 五点多追及路程S2 / (分针速度V2 - 时针速度V3);
	五点多追及时间T2.PrintProcessLog(4);
	DefineFractionLangVar(看了多长时间书T3, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("5.计算看了多长时间书T3 看了多长时间书T3=五点多追及时间T2-三点多追及时间T1"));
	看了多长时间书T3 = 五点多追及时间T2 - 三点多追及时间T1;
	看了多长时间书T3.PrintProcessLog(5);
}
void P85_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P85 Case Four Clock Problem","P85 例四 时钟问题"},
		{"Title: Xiaoming has a watch that is two seconds faster than the standard time per minute. Xiaoming aligns the time at 8 o'clock in the morning. When the watch points to 12 o'clock, what is the standard time?",
		"题目：小明有块手表，每分钟比标准时间快两秒，小明早上8点把时间对准，当表指向12时，标准时间是多少?"},
		{"Set the standard time (minutes) as t and the hour as t1",
		"设标准时间(分钟)为t,小时为t1"},
		{"1. List the distance traveled per minute using equation S1 (1+2/60) t=(31/30) t=240",
		"1.列出每分钟走的路程式子S1 (1+ 2/60)t=(31/30)t=240"},
		{"2. Simplify S1 to obtain S2 t=240/(31/30)=7200/31",
		"2.化简S1得到S2 t=240/(31/30)=7200/31"},
		{"3. Simplify S2 to obtain S3 t/60=t1=7200/31/60=120/31",
		"3.化简S2得到S3 t/60=t1=7200/31/60=120/31"},
		{"4. Because from 8:00 to 12:00 in the table, the standard time is 120/31 hours, and 120/31+8=11 (27/31) hours",
		"4.因为从8点开始到表12点，标准时间是120/31小时，120/31+8=11(27/31)小时"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P85 例二 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：五点过多少分钟后，时针和分针和五距离相等，且必须在5两边"));
	ColPrintf(PrintfCol::方法, Lang("设标准时间(分钟)为t,小时为t1"));
	ColPrintf(PrintfCol::方法, Lang("1.列出每分钟走的路程式子S1 (1+ 2/60)t=(31/30)t=240"));
	ColPrintf(PrintfCol::方法, Lang("2.化简S1得到S2 t=240/(31/30)=7200/31"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 t/60=t1=7200/31/60=120/31"));
	ColPrintf(PrintfCol::方法, Lang("4.因为从8点开始到表12点，标准时间是120/31小时，120/31+8=11(27/31)小时"));
}
void P85()
{
	P85_1();
	ColPrintf(PrintfCol::方法, "");
	P85_2();
	ColPrintf(PrintfCol::方法, "");
	P85_3();
	ColPrintf(PrintfCol::方法, "");
	P85_4();
	ColPrintf(PrintfCol::方法, "");
	//P84_2();
	ColPrintf(PrintfCol::方法, "");
	//P84_3();
	ColPrintf(PrintfCol::方法, "");
	//P77_4();
	ColPrintf(PrintfCol::方法, "");
	//P77_5();
	ColPrintf(PrintfCol::方法, "");
}
void P85_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P85();
	Lang.SetCurLanguage(LanguageLib::English);
	P85();
	ColPrintf(PrintfCol::方法, "");

}