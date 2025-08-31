#pragma once
//共四道例题
void P17_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P17 case one average speed","P17例一 平均速度"},
		{"Title: The distance from A to B is 12 kilometers. The speed of pedestrians on a downhill slope is 6 kilometers. The distance from B to C is 8 kilometers.\nThe speed on a flat road is 4 kilometers. The distance from C to D is 4 kilometers. The speed on an uphill road is\n2 kilometers. What is the average speed?",
		"题目：从A到B的路程是12千米下坡路人的速度是6千米，从B到C是8千米平路速度是4千米，从C到D是4千米上坡路速度是2千米，求平均速度？"},
		{"1. Calculate the time T1 used for downhill road=downhill road distance S1/downhill road speed V1",
		"1.计算下坡路所用的时间T1 下坡路所用的时间T1=下坡路路程S1/下坡路速度V1"},
		{"2. Calculate the time T2 used for flat road=flat road distance S2/flat road speed V2",
		"2.计算平路所用的时间T2 平路所用的时间T2=平路路路程S2/平路速度V2"},
		{"3. Calculate the time T3 for uphill road=uphill road distance S3/uphill road speed V3",
		"3.计算上坡路所用的时间T3 上坡路所用的时间T3=上坡路路路程S3/上坡路速度V3"},
		{"4. Calculate the total time T4, which is equal to the time T1 spent on the downhill road, the time T2 spent on the flat road, and the time T3 spent on the uphill road",
		"4.计算总时间T4 总时间T4=下坡路所用的时间T1+平路所用的时间T2+上坡路所用的时间T3"},
		{"5. Calculate the total distance S4. The total distance S4 is equal to the downhill road distance S1+the flat road distance S2+the uphill road distance S3",
		"5.计算总路程S4 总路程S4=下坡路路程S1+平路路路程S2+上坡路路路程S3"},
		{"6. Calculate the average speed V4. The average speed V4 is equal to the total distance S4 divided by the total time T4",
		"6.计算平均速度V4 平均速度V4=总路程S4/总时间T4"},
		//变量表
		{"DownhillrouteS1","下坡路路程S1"},
		{"DownhillspeedV1","下坡路速度V1"},
		{"FlatRouteS2","平路路路程S2"},
		{"FlatroadspeedV2","平路速度V2"},
		{"UpslopeRoadDistanceS3","上坡路路路程S3"},
		{"UphillspeedV3","上坡路速度V3"},
		{"TimeT1fordownhillroad","下坡路所用的时间T1"},
		{"TimeT2forflatroad","平路所用的时间T2"},
		{"TimeT3foruphillroad","上坡路所用的时间T3"},
		{"TotaltimeT4","总时间T4"},
		{"TotaldistanceS4","总路程S4"},
		{"AveragespeedV4","平均速度V4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(下坡路路程S1, 12);
	DefineLangVarInt(下坡路速度V1, 6);
	DefineLangVarInt(平路路路程S2, 8);
	DefineLangVarInt(平路速度V2, 4);
	DefineLangVarInt(上坡路路路程S3, 4);
	DefineLangVarInt(上坡路速度V3, 2);
	ColPrintf(PrintfCol::标题, Lang("P17例一 平均速度"));
	ColPrintf(PrintfCol::标题, Lang("题目：从A到B的路程是12千米下坡路人的速度是6千米，从B到C是8千米平路速度是4千米，从C到D是4千米上坡路速度是2千米，求平均速度？"));
	DefineLangVarInt(下坡路所用的时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算下坡路所用的时间T1 下坡路所用的时间T1=下坡路路程S1/下坡路速度V1"));
	下坡路所用的时间T1 = 下坡路路程S1 / 下坡路速度V1;
	下坡路所用的时间T1.PrintProcessLog(1);
	DefineLangVarInt(平路所用的时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算平路所用的时间T2 平路所用的时间T2=平路路路程S2/平路速度V2"));
	平路所用的时间T2 = 平路路路程S2 / 平路速度V2;
	平路所用的时间T2.PrintProcessLog(2);
	DefineLangVarInt(上坡路所用的时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算上坡路所用的时间T3 上坡路所用的时间T3=上坡路路路程S3/上坡路速度V3"));
	上坡路所用的时间T3 = 上坡路路路程S3 / 上坡路速度V3;
	上坡路所用的时间T3.PrintProcessLog(3);
	DefineLangVarInt(总时间T4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算总时间T4 总时间T4=下坡路所用的时间T1+平路所用的时间T2+上坡路所用的时间T3"));
	总时间T4 = 下坡路所用的时间T1 + 平路所用的时间T2 + 上坡路所用的时间T3;
	总时间T4.PrintProcessLog(4);
	DefineLangVarInt(总路程S4, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算总路程S4 总路程S4=下坡路路程S1+平路路路程S2+上坡路路路程S3"));
	总路程S4 = 下坡路路程S1 + 平路路路程S2 + 上坡路路路程S3;
	总路程S4.PrintProcessLog(5);
	DefineLangVarInt(平均速度V4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算平均速度V4 平均速度V4=总路程S4/总时间T4"));
	平均速度V4 = 总路程S4 / 总时间T4;
	平均速度V4.PrintProcessLog(6);
}
void P17_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P17 case 2 average speed","P17例二 平均速度"},
		{"Title: What is the average speed of a motorcycle that travels 90 kilometers at a speed of 30 kilometers and then returns at a speed of 45 kilometers?",
		"题目：摩托车以30千米行了90千米，再以45千米速度返回，求它的平均速度？"},
		{"1. Calculate the total distance S1 of the motorcycle trip. The total distance S1 of the motorcycle trip is equal to the number of round trips N1 multiplied by the total distance S1",
		"1.计算摩托车行的总路程S1 摩托车行的总路程S1=往返数N1*总路程S1"},
		{"2. Calculate the time T1 used in the past time. The time T1 used in the past time is equal to the total distance S1 divided by the forward speed V1",
		"2.计算往时所用的时间T1 往时所用的时间T1=总路程S1/往时速度V1"},
		{"3. Calculate the time T2 used for reverse time. The time T2 used for reverse time is equal to the total distance S1 divided by the reverse time speed V2",
		"3.计算反时所用的时间T2 反时所用的时间T2=总路程S1/反时速度V2"},
		{"4. Calculate the total time T3, which is equal to the time T1 used in the past time and the time T2 used in the reverse time",
		"4.计算总时间T3 总时间T3=往时所用的时间T1+反时所用的时间T2"},
		{"5. Calculate the average speed V3. The average speed V3 is equal to the total distance traveled by the motorcycle S1 divided by the total time T3",
		"5.计算平均速度V3 平均速度V3=摩托车行的总路程S1/总时间T3"},
		//变量表
		{"RoundtripnumberN1","往返数N1"},
		{"TotaldistanceS1","总路程S1"},
		{"ForwardspeedV1","往时速度V1"},
		{"ReversevelocityV2","反时速度V2"},
		{"ThetotaldistancetraveledbymotorcycleS1","摩托车行的总路程S1"},
		{"TimeT1usedinthepast","往时所用的时间T1"},
		{"TimeT2usedforreversetime","反时所用的时间T2"},
		{"TotaltimeT3","总时间T3"},
		{"AveragespeedV3","平均速度V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(往返数N1, 2);
	DefineLangVarInt(总路程S1, 90);
	DefineLangVarInt(往时速度V1, 30);
	DefineLangVarInt(反时速度V2, 45);
	ColPrintf(PrintfCol::标题, Lang("P17例二 平均速度"));
	ColPrintf(PrintfCol::标题, Lang("题目：摩托车以30千米行了90千米，再以45千米速度返回，求它的平均速度？"));
	DefineLangVarInt(摩托车行的总路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算摩托车行的总路程S1 摩托车行的总路程S1=往返数N1*总路程S1"));
	摩托车行的总路程S1 = 往返数N1 * 总路程S1;
	摩托车行的总路程S1.PrintProcessLog(1);
	DefineLangVarInt(往时所用的时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算往时所用的时间T1 往时所用的时间T1=总路程S1/往时速度V1"));
	往时所用的时间T1 = 总路程S1 / 往时速度V1;
	往时所用的时间T1.PrintProcessLog(2);
	DefineLangVarInt(反时所用的时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算反时所用的时间T2 反时所用的时间T2=总路程S1/反时速度V2"));
	反时所用的时间T2 = 总路程S1 / 反时速度V2;
	反时所用的时间T2.PrintProcessLog(3);
	DefineLangVarInt(总时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算总时间T3 总时间T3=往时所用的时间T1+反时所用的时间T2"));
	总时间T3 = 往时所用的时间T1 + 反时所用的时间T2;
	总时间T3.PrintProcessLog(4);
	DefineLangVarInt(平均速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算平均速度V3 平均速度V3=摩托车行的总路程S1/总时间T3"));
	平均速度V3 = 摩托车行的总路程S1 / 总时间T3;
	平均速度V3.PrintProcessLog(5);
}
void P17_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P17 case 3 average speed","P17例三 平均速度"},
		{"Title: A car travels from point A to point B, which is 300 kilometers away. The average speed for the first 120 kilometers is\n40 kilometers. If you want to travel the entire distance at a speed of 50 kilometers, what speed should you travel the\nremaining distance at?",
		"题目：一辆汽车从甲地开往300千米的乙地，前120千米平均速度是40千米，想使全程以50千米速度行驶，剩下的路程因该以什么速度行驶?"},
		{"1. Calculate the remaining distance S1. The remaining distance S1=total distance S2- distance already traveled S3",
		"1.计算剩下的路程S1 剩下的路程S1=总路程S2-已行的路程S3"},
		{"2. Calculate the total time T1, which is equal to the total distance S2 divided by the total average speed V1",
		"2.计算总共的时间T1 总共的时间T1=总路程S2/总的平均速度V1"},
		{"3. Calculate the time T2 that has been traveled. The time T2 that has been traveled is equal to the distance S3 traveled divided by the average speed V2 traveled",
		"3.计算已经走的时间T2 已经走的时间T2=已行的路程S3/已行的平均速度V2"},
		{"4. Calculate the remaining time T3. The remaining time T3 is equal to the total time T1 minus the time T2 that has already passed",
		"4.计算剩下的时间T3 剩下的时间T3=总共的时间T1-已经走的时间T2"},
		{"5. Calculate the average speed V3 to be traveled. The average speed V3 to be traveled is equal to the remaining distance S1 divided by the remaining time T3",
		"5.计算要走的平均速度V3 要走的平均速度V3=剩下的路程S1/剩下的时间T3"},
		//变量表
		{"TotaldistanceS2","总路程S2"},
		{"ThecompletedjourneyS3","已行的路程S3"},
		{"OverallaveragespeedV1","总的平均速度V1"},
		{"AveragespeedV2alreadyachieved","已行的平均速度V2"},
		{"RemainingjourneyS1","剩下的路程S1"},
		{"TotaltimeT1","总共的时间T1"},
		{"TimeT2thathasalreadypassed","已经走的时间T2"},
		{"RemainingtimeT3","剩下的时间T3"},
		{"AveragespeedtotravelV3","要走的平均速度V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总路程S2, 300);
	DefineLangVarInt(已行的路程S3, 120);
	DefineLangVarInt(总的平均速度V1, 50);
	DefineLangVarInt(已行的平均速度V2, 40);
	ColPrintf(PrintfCol::标题, Lang("P17例三 平均速度"));
	ColPrintf(PrintfCol::标题, Lang("题目：一辆汽车从甲地开往300千米的乙地，前120千米平均速度是40千米，想使全程以50千米速度行驶，剩下的路程因该以什么速度行驶?"));
	DefineLangVarInt(剩下的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算剩下的路程S1 剩下的路程S1=总路程S2-已行的路程S3"));
	剩下的路程S1 = 总路程S2 - 已行的路程S3;
	剩下的路程S1.PrintProcessLog(1);
	DefineLangVarInt(总共的时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算总共的时间T1 总共的时间T1=总路程S2/总的平均速度V1"));
	总共的时间T1 = 总路程S2 / 总的平均速度V1;
	总共的时间T1.PrintProcessLog(2);
	DefineLangVarInt(已经走的时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算已经走的时间T2 已经走的时间T2=已行的路程S3/已行的平均速度V2"));
	已经走的时间T2 = 已行的路程S3 / 已行的平均速度V2;
	已经走的时间T2.PrintProcessLog(3);
	DefineLangVarInt(剩下的时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算剩下的时间T3 剩下的时间T3=总共的时间T1-已经走的时间T2"));
	剩下的时间T3 = 总共的时间T1 - 已经走的时间T2;
	剩下的时间T3.PrintProcessLog(4);
	DefineLangVarInt(要走的平均速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算要走的平均速度V3 要走的平均速度V3=剩下的路程S1/剩下的时间T3"));
	要走的平均速度V3 = 剩下的路程S1 / 剩下的时间T3;
	要走的平均速度V3.PrintProcessLog(5);
}
void P17_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P17 case four average speed","P17例四 平均速度"},
		{"Question: An ant crawls along the three sides of an equilateral triangle for one week, with speeds of 50cm, 20cm, and 40cm per minute on each side. What is the average length of centimeters per minute it crawls for one week?",
		"题目：一只蚂蚁沿等边三角形的三条边爬行一周，在三条边上每分钟速度分别是50cm，20cm，40cm，它爬一周的平均每分钟多少厘米？"},
		{"1. Find the least common multiple of its speed as the distance S1",
		"1.求它的速度的公倍数作为一条边路程S1"},
		{"2. Calculate the time T1 used for the first edge. The time T1 used for the first edge is equal to the distance S1 of one edge divided by the speed V1 of the first edge",
		"2.计算第一条边用的时间T1 第一条边用的时间T1=一条边路程S1/第一条边速度V1"},
		{"3. Calculate the time T2 for the second edge. The time T2 for the second edge is equal to the distance S1 of one edge divided by the speed V2 of the second edge",
		"3.计算第二条边用的时间T2 第二条边用的时间T2=一条边路程S1/第二条边速度V2"},
		{"4. Calculate the time T2 for the third edge. The time T2 for the third edge is equal to the distance S1 of one edge divided by the speed V3 of the third edge",
		"4.计算第三条边用的时间T3 第三条边用的时间T3=一条边路程S1/第三条边速度V3"},
		{"5. Calculate the total time T4, which is equal to the time T1 spent on the first edge, the time T2 spent on the second edge, and the time T3 spent on the third edge",
		"5.计算总时间T4 总时间T4=第一条边用的时间T1+第二条边用的时间T2+第三条边用的时间T3"},
		{"6. Calculate the average speed V4. The average speed V4 is equal to one side distance S1 multiplied by the total number of sides N1 divided by the total time T4",
		"6.计算平均速度V4 平均速度V4=一条边路程S1*一共边数N1/总时间T4"},
		//变量表
		{"OnesidejourneyS1","一条边路程S1"},
		{"ThefirstedgevelocityV1","第一条边速度V1"},
		{"ThesecondedgevelocityV2","第二条边速度V2"},
		{"ThethirdedgespeedV3","第三条边速度V3"},
		{"TotalnumberofsidesN1","一共边数N1"},
		{"TimeT1usedforthefirstedge","第一条边用的时间T1"},
		{"TimeT2usedforthesecondedge","第二条边用的时间T2"},
		{"TimeT3usedforthethirdedge","第三条边用的时间T3"},
		{"TotaltimeT4","总时间T4"},
		{"AveragespeedV4","平均速度V4"},
		{"CommonmultipleN2","共倍数N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<5, 5, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddTriangle(ScanningLineT::Point(1, 4), ScanningLineT::Point(2.5, 1), ScanningLineT::Point(4, 4), ScanningLineT::FillMode::EdgeMode, '*');
	test.AddText(PrintfCol::Blue, 2.5, 1.5, "50");
	test.AddText(PrintfCol::Blue, 4.2, 2.5, "40");
	test.AddText(PrintfCol::Blue, 2.5, 3.5, "20");
	DefineFractionVar(第一条边速度V1, 50,1);
	DefineFractionVar(第二条边速度V2, 20,1);
	DefineFractionVar(第三条边速度V3, 40,1);
	DefineFractionVar(一共边数N1, 3,1);
	ColPrintf(PrintfCol::标题, Lang("P17例四 平均速度"));
	ColPrintf(PrintfCol::标题, Lang("题目：一只蚂蚁沿等边三角形的三条边爬行一周，在三条边上每分钟速度分别是50cm，20cm，40cm，它爬一周的平均每分钟多少厘米？"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionVar(共倍数N2, 第一条边速度V1.Var.nNumerator* 第二条边速度V2.Var.nNumerator * 第三条边速度V3.Var.nNumerator,1);
	DefineFractionVar(一条边路程S1, 1,1);
	ColPrintf(PrintfCol::方法, Lang("1.求它的速度的公倍数作为一条边路程S1"));
	一条边路程S1 = 共倍数N2;
	一条边路程S1.PrintProcessLog(5);
	DefineFractionVar(第一条边用的时间T1, 1,1);
	ColPrintf(PrintfCol::方法, Lang("2.计算第一条边用的时间T1 第一条边用的时间T1=一条边路程S1/第一条边速度V1"));
	第一条边用的时间T1 = 一条边路程S1 / 第一条边速度V1;
	第一条边用的时间T1.PrintProcessLog(2);
	DefineFractionVar(第二条边用的时间T2, 1,1);
	ColPrintf(PrintfCol::方法, Lang("3.计算第二条边用的时间T2 第二条边用的时间T2=一条边路程S1/第二条边速度V2"));
	第二条边用的时间T2 = 一条边路程S1 / 第二条边速度V2;
	第二条边用的时间T2.PrintProcessLog(3);
	DefineFractionVar(第三条边用的时间T3, 1,1);
	ColPrintf(PrintfCol::方法, Lang("4.计算第三条边用的时间T3 第三条边用的时间T3=一条边路程S1/第三条边速度V3"));
	第三条边用的时间T3 = 一条边路程S1 / 第三条边速度V3;
	第三条边用的时间T3.PrintProcessLog(4);
	DefineFractionVar(总时间T4, 1,1);
	ColPrintf(PrintfCol::方法, Lang("5.计算总时间T4 总时间T4=第一条边用的时间T1+第二条边用的时间T2+第三条边用的时间T3"));
	总时间T4 = 第一条边用的时间T1 + 第二条边用的时间T2 + 第三条边用的时间T3;
	总时间T4.PrintProcessLog(5);
	DefineFractionVar(平均速度V4, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("6.计算平均速度V4 平均速度V4=一条边路程S1*一共边数N1/总时间T4"));
	平均速度V4 = 一条边路程S1 * 一共边数N1 / 总时间T4;
	平均速度V4.PrintProcessLog(6);
}
void P17()
{
	//共四道题
	P17_1();
	ColPrintf(PrintfCol::方法, "");
	P17_2();
	ColPrintf(PrintfCol::方法, "");
	P17_3();
	ColPrintf(PrintfCol::方法, "");
	P17_4();
	ColPrintf(PrintfCol::方法, "");
}
void P17_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P17();
	Lang.SetCurLanguage(LanguageLib::English);
	P17();
	ColPrintf(PrintfCol::方法, "");

}
