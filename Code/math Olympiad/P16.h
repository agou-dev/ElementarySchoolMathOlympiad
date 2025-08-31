#pragma once
void P16_1()
{
	LanguageLib::LanguageTableT Language = {
		{"Example of P16: A Floating Ship","P16的例一 流水行船"},
		{"Title: A ship sailed upstream and dropped a kettle into the river halfway. When it was discovered, it was already 2\nkilometers away from the kettle. The ship's static water velocity was 4 kilometers, and the water flow velocity was 2 kilometers.\nDoes it take a long time to catch up with the kettle?",
		"题目：一艘船逆流而上，中途把水壶掉入江中，发现时已经距水壶2千米，船静水速度是4千米，水流速度是2千米，追上水壶要所长时间?"},
		{"1. Calculate their speed difference V1. Their speed difference V1=(static water velocity V2+water velocity V3) - water velocity V3",
		"1.计算他们的速度差V1 他们的速度差V1=(静水速度V2+水速V3)-水速V3"},
		{"2. Calculate the time T1 to catch up with the kettle. The time T1 to catch up with the kettle is equal to the distance S1/their speed difference V1",
		"2.计算追上水壶时间T1 追上水壶时间T1=追及路程S1/他们的速度差V1"},
		//变量表
		{"StaticWaterVelocityV2","静水速度V2"},
		{"WaterSpeedV3","水速V3"},
		{"ChasingTheDistanceS1","追及路程S1"},
		{"TheirSpeedDifferenceV1","他们的速度差V1"},
		{"CatchUpWithTheKettleTimeT1","追上水壶时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 静水速度V2, 4);
	DefineLangVar(float, 水速V3, 2);
	DefineLangVar(float, 追及路程S1, 2);
	DefineLangVar(float,他们的速度差V1, 0);
	ColPrintf(PrintfCol::标题, Lang("P16的例一 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：一艘船逆流而上，中途把水壶掉入江中，发现时已经距水壶2千米，船静水速度是4千米，水流速度是2千米，追上水壶要所长时间?"));
	ColPrintf(PrintfCol::方法, Lang("1.计算他们的速度差V1 他们的速度差V1=(静水速度V2+水速V3)-水速V3"));
	他们的速度差V1 = (静水速度V2 + 水速V3) - 水速V3;
	他们的速度差V1.PrintProcessLog(1);
	DefineLangVar(float, 追上水壶时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算追上水壶时间T1 追上水壶时间T1=追及路程S1/他们的速度差V1"));
	追上水壶时间T1 = 追及路程S1 / 他们的速度差V1;
	追上水壶时间T1.PrintProcessLog(2);
}
void P16_2()
{
	LanguageLib::LanguageTableT Language = {
		{"Example of P16: A Floating Ship","P16的例二 流水行船"},
		{"Title: A and B travel 480 kilometers downstream, 56 kilometers in still water, 40 kilometers in still water, with a water speed of 8 kilometers.\nA starts chasing after B 1.5 hours after departure, turns back when A arrives, and meets B halfway. At this point,\nhow many kilometers are you from the finish line?",
		"题目：甲乙顺流而下480千米，静水中甲行56千米，乙行40千米，水速为8千米，乙出发后1.5小时甲开始追，甲到后折返回来，中途与乙相遇，此时离终点多少千米？"},
		{"1. Calculate the total travel time T1 of A driving along the water, which is equal to the total travel time S1 divided by the speed V1 of A in still water and the speed V1 of the water",
		"1.计算甲顺水行驶全程时间T1 甲顺水行驶全程时间T1=全程S1/(静水中甲速度V1+水速V1)"},
		{"2. Calculate the total travel time T2 for B to travel along the water, which is equal to the total travel time S1 divided by (B's speed V2 in still water+water speed V1)",
		"2.计算乙顺水行驶全程时间T2 乙顺水行驶全程时间T2=全程S1/(静水中乙速度V2+水速V1)"},
		{"3. Calculate the time T3 for A to arrive and then for B to travel. The time T3 for A to arrive and\nthen for B to travel is equal to the total time T1 for A to travel along the river\nplus the total time T2 for B to travel along the river",
		"3.计算甲到达后乙行的时间T3 甲到达后乙行的时间T3=甲乙出发时间差T4+甲顺水行驶全程时间T1"},
		{"4. Calculate the velocity V1 of B in still water. The velocity V1 of B in still water is equal to the sum of the velocity V2 of B in still water and the velocity V1 of the water",
		"4.计算乙顺水的速度V1 乙顺水的速度V1=静水中乙速度V2+水速V1"},
		{"5. Calculate the total distance S2 from point A to point B, which is equal to (the total time T2 for point B to\ntravel downstream - the time T3 for point A to travel downstream) multiplied by the speed V1 of point\nB traveling downstream",
		"5.计算甲到后乙距离全程距离S2 甲到后乙距离全程距离S2=(乙顺水行驶全程时间T2-甲到达后乙行的时间T3)*乙顺水的速度V1"},
		{"6. Calculate the upstream velocity V3 of A=the velocity V1 of A in still water minus the velocity V1 of water",
		"6.计算甲逆水速度V3 甲逆水速度V3=静水中甲速度V1-水速V1"},
		{"7. Calculate the distance S3 from the endpoint at this time. The distance S3 from the endpoint at this time is equal to the total distance S1- ((A's upstream speed V3+B's downstream speed V1)/multiplier N1)",
		"7.计算此时距终点距离S3 此时距终点距离S3=全程S1-(乙顺水的速度V1/倍率N1)"},
		//变量表
		{"FullS1","全程S1"},
		{"VelocityV1ofarmorinstillwater","静水中甲速度V1"},
		{"WatervelocityV1","水速V1"},
		{"VelocityV2ofBinstillwater","静水中乙速度V2"},
		{"ThedeparturetimedifferencebetweenAandBisT4","甲乙出发时间差T4"},
		{"MagnificationN1","倍率N1"},
		{"Jiadownstream'stotaltraveltimeT1","甲顺水行驶全程时间T1"},
		{"ThetotaltraveltimeT2forYidownstream","乙顺水行驶全程时间T2"},
		{"ThetimeT3forBtotravelafterAarrives","甲到达后乙行的时间T3"},
		{"ThespeedofflowingwaterV1","乙顺水的速度V1"},
		{"ThetotaldistancefrompointAtopointBisS2","甲到后乙距离全程距离S2"},
		{"Jia'supstreamspeedV3","甲逆水速度V3"},
		{"Atthispoint,thedistancefromtheendpointisS3","此时距终点距离S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 全程S1, 480);
	DefineLangVar(float, 静水中甲速度V1, 56);
	DefineLangVar(float, 水速V1, 8);
	DefineLangVar(float, 静水中乙速度V2, 40);
	DefineLangVar(float, 甲乙出发时间差T4, 1.5);
	DefineLangVar(float, 倍率N1, 2);
	const char* pPic =
		"1.5小时时\n"
		"               480千米\n"
		"|-------------------------------------|\n"
		">\n"
		"甲\n"
		"-----乙---->\n"
		"9小时时\n"
		"               480千米\n"
		"|-------------------------------------|\n"
		"------------------甲------------------>\n"
		"-----乙---------------------->\n"
		" \n"
		"               480千米\n"
		"|-------------------------------------|\n"
		"------------------甲------------------|\n"
		"                                   <--|\n"
		"-----乙--------------------------->\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P16的例二 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙顺流而下480千米，静水中甲行56千米，乙行40千米，水速为8千米，乙出发后1.5小时甲开始追，甲到后折返回来，中途与乙相遇，此时离终点多少千米？"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVar(float, 甲顺水行驶全程时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算甲顺水行驶全程时间T1 甲顺水行驶全程时间T1=全程S1/(静水中甲速度V1+水速V1)"));
	甲顺水行驶全程时间T1 = 全程S1 / (静水中甲速度V1 + 水速V1);
	甲顺水行驶全程时间T1.PrintProcessLog(1);
	DefineLangVar(float, 乙顺水行驶全程时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算乙顺水行驶全程时间T2 乙顺水行驶全程时间T2=全程S1/(静水中乙速度V2+水速V1)"));
	乙顺水行驶全程时间T2 = 全程S1 / (静水中乙速度V2 + 水速V1);
	乙顺水行驶全程时间T2.PrintProcessLog(2);
	DefineLangVar(float, 甲到达后乙行的时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲到达后乙行的时间T3 甲到达后乙行的时间T3=甲乙出发时间差T4+甲顺水行驶全程时间T1"));
	甲到达后乙行的时间T3 = 甲乙出发时间差T4 + 甲顺水行驶全程时间T1;
	甲到达后乙行的时间T3.PrintProcessLog(3);
	DefineLangVar(float, 乙顺水的速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算乙顺水的速度V1 乙顺水的速度V1=静水中乙速度V2+水速V1"));
	乙顺水的速度V1 = 静水中乙速度V2 + 水速V1;
	乙顺水的速度V1.PrintProcessLog(4);
	DefineLangVar(float, 甲到后乙距离全程距离S2, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算甲到后乙距离全程距离S2 甲到后乙距离全程距离S2=(乙顺水行驶全程时间T2-甲到达后乙行的时间T3)*乙顺水的速度V1"));
	甲到后乙距离全程距离S2 = (乙顺水行驶全程时间T2 - 甲到达后乙行的时间T3) * 乙顺水的速度V1;
	甲到后乙距离全程距离S2.PrintProcessLog(5);
	DefineLangVar(float, 甲逆水速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算甲逆水速度V3 甲逆水速度V3=静水中甲速度V1-水速V1"));
	甲逆水速度V3 = 静水中甲速度V1 - 水速V1;
	甲逆水速度V3.PrintProcessLog(6);
	DefineLangVar(float, 此时距终点距离S3, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算此时距终点距离S3 此时距终点距离S3=全程S1-(乙顺水的速度V1/倍率N1)"));
	此时距终点距离S3 = 全程S1 - (乙顺水的速度V1 / 倍率N1);
	此时距终点距离S3.PrintProcessLog(7);
}
void P16()
{
	P16_1();
	ColPrintf(PrintfCol::方法, "");
	P16_2();
	ColPrintf(PrintfCol::方法, "");
}
void P16_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P16();
	Lang.SetCurLanguage(LanguageLib::English);
	P16();
	ColPrintf(PrintfCol::方法, "");

}