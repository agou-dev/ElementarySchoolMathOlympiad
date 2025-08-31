#pragma once
void P4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P4 Example 1: Follow up on the Issue","P4例一 追及问题"},
		{"Title: A, B, and C depart from A to B at 7 o'clock. A travels at 8 o'clock per hour, B travels at 6 hours per hour, and C departs at\n8 o'clock in the morning. A and C arrive at B at the same time at 6 o'clock. At what time does C catch up?",
		"题目：甲乙丙从A地到B地，7时甲乙两人从A地出发，甲速度是8，乙速度6，丙早上8时出发，16时甲丙同时到B地，丙几点追上?"},
		{"1. Calculate the total distance S1. The total distance S1 is equal to the speed V1 of A * (the arrival time T1 of A and C minus the departure time of A)",
		"1.计算总路程S1 总路程S1=甲速度V1*(甲丙到达时间T1-甲乙出发时间T2)"},
		{"2. Calculate the speed V2 of C=total distance S1/(arrival time T1 of A and C - departure time T3 of C)",
		"2.计算丙速度V2 丙速度V2=总路程S1/(甲丙到达时间T1-丙出发时间T3)"},
		{"3. Calculate the distance between C and B's pursuit S2, where C and B's pursuit S2=B's speed V3 * (C's departure time T3- A and B's departure time T2)",
		"3.计算丙乙追及路程S2 丙乙追及路程S2=乙速度V3*(丙出发时间T3-甲乙出发时间T2)"},
		{"4. Calculate the time T4 for C and B to catch up. C and B to catch up time T4=(distance S2/(C speed V2- B speed V3))+C departure time T3",
		"4.计算丙乙追及时间T4 丙乙追及时间T4=(丙乙追及路程S2/(丙速度V2-乙速度V3))+丙出发时间T3"},
		{"Answer: C will catch up with% d points",
		"答：丙%d点追上"},
		//变量表
		{"ASpeedV1","甲速度V1"},
		{"ArrivalTimeT1ForBothAAndC","甲丙到达时间T1"},
		{"DepartureTimeT2ForPartyAAndPartyB","甲乙出发时间T2"},
		{"DepartureTimeT3","丙出发时间T3"},
		{"BSpeedV3","乙速度V3"},
		{"TotalDistanceS1","总路程S1"},
		{"CSpeedV2","丙速度V2"},
		{"CAndBCatchUpOnTheJourneyS2","丙乙追及路程S2"},
		{"CAndBCatchUpWithTimeT4","丙乙追及时间T4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(甲速度V1, 8);
	DefineLangVarInt(甲丙到达时间T1, 16);
	DefineLangVarInt(甲乙出发时间T2, 7);
	DefineLangVarInt(丙出发时间T3, 8);
	DefineLangVarInt(乙速度V3, 6);
	const char* pPic =
		"          1小时后\n"
		"A-----------------------------------------------B\n"
		"   甲\n"
		"---------------->\n"
		"   乙6千米\n"
		"-------->\n"
		">丙\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P4例一 追及问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙丙从A地到B地，7时甲乙两人从A地出发，甲速度是8，乙速度6，丙早上8时出发，16时甲丙同时到B地，丙几点追上?"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(总路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算总路程S1 总路程S1=甲速度V1*(甲丙到达时间T1-甲乙出发时间T2)"));
	总路程S1 = 甲速度V1 * (甲丙到达时间T1 - 甲乙出发时间T2);
	总路程S1.PrintProcessLog(1);
	DefineLangVarInt(丙速度V2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算丙速度V2 丙速度V2=总路程S1/(甲丙到达时间T1-丙出发时间T3)"));
	丙速度V2 = 总路程S1 / (甲丙到达时间T1 - 丙出发时间T3);
	丙速度V2.PrintProcessLog(2);
	DefineLangVarInt(丙乙追及路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算丙乙追及路程S2 丙乙追及路程S2=乙速度V3*(丙出发时间T3-甲乙出发时间T2)"));
	丙乙追及路程S2 = 乙速度V3 * (丙出发时间T3 - 甲乙出发时间T2);
	丙乙追及路程S2.PrintProcessLog(3);
	DefineLangVarInt(丙乙追及时间T4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算丙乙追及时间T4 丙乙追及时间T4=(丙乙追及路程S2/(丙速度V2-乙速度V3))+丙出发时间T3"));
	丙乙追及时间T4 = (丙乙追及路程S2 / (丙速度V2 - 乙速度V3)) + 丙出发时间T3;
	丙乙追及时间T4.PrintProcessLog(4);
	ColPrintf(PrintfCol::结果, Lang("答：丙%d点追上"), (int)丙乙追及时间T4);
}
void P4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P4 Example 2: Follow up on the Issue","P4例二 追及问题"},
		{"Title: Three cars, fast, medium, and slow, travel from point A to point B with a cyclist in between. The fast, medium, and slow cars catch\nup in 7, 8, and 14 minutes respectively. Given that the speed of the fast car is 800 and\nthe speed of the slow car is 600, what is the speed of the middle car?",
		"题目：快中慢三车从A地到B地，中间有骑车人也一起行驶，快中慢三车分别用7，8，14分钟追上，已知快车速度是800，慢车速度是600，中车速度是多少？"},
		{"1. Calculate the speed V1 of catching up with the cyclist slowly and quickly, V1 of catching up with the cyclist slowly and quickly, V1=(fast speed V2- slow speed V3) * A's pursuit time T1",
		"1.计算快追上骑车人慢离快的路程S1 快追上骑车人慢离快的速度S1=(快车速度V2-慢车速度V3)*快追及时间T1"},
		{"2. Calculate the speed difference V4 between C and the cyclist. The speed difference V4 between C and the cyclist is\nequal to the distance S1 between catching up with the cyclist quickly and moving away slowly, divided by\n(fast catch up time T1- slow catch up time T2)",
		"2.计算丙和骑车人的速度差V4 丙和骑车人的速度差V4=快追上骑车人慢离快的路程S1/(慢追及时间T2-快追及时间T1)"},
		{"3. Calculate the speed V5 of the cyclist, which is equal to the slow speed V3 minus the speed difference V4 between the cyclist and the cyclist",
		"3.计算骑车人速度V5 骑车人速度V5=慢车速度V3-丙和骑车人的速度差V4"},
		{"4. Calculate the slow pursuit distance S2=(slow speed V3- cyclist speed V5) * slow pursuit time T2",
		"4.计算慢车追及路程S2 慢车追及路程S2=(慢车速度V3-骑车人速度V5)*慢追及时间T2"},
		{"5. Calculate the middle car speed V6, which is equal to the slow car catching up distance S2/middle car catching up time T3+rider speed V5",
		"5.计算中车速度V6 中车速度V6=(慢车追及路程S2/中追及时间T3)+骑车人速度V5"},
		{"Answer: The speed of the middle car is% d",
		"答：中车速度是%d"},
		//变量表
		{"ExpressSpeedV2","快车速度V2"},
		{"SlowSpeedV3","慢车速度V3"},
		{"HurryUpAndCatchUpWithTimeT1","快追及时间T1"},
		{"HurryUpAndCatchUpWithTimeT1","中追及时间T3"},
		{"SlowChaseAndTimeT2","慢追及时间T2"},
		{"HurryUpAndCatchUpWithTheCyclist,SlowDownTheFastDistanceS1","快追上骑车人慢离快的路程S1"},
		{"TheSpeedDifferenceV4BetweenTheCyclistAndTheCyclist","丙和骑车人的速度差V4"},
		{"SlowCarChasingDistanceS2","慢车追及路程S2"},
		{"BicycleSpeedV5","骑车人速度V5"},
		{"CRRCSpeedV6","中车速度V6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(快车速度V2, 800);
	DefineLangVarInt(慢车速度V3, 600);
	DefineLangVarInt(快追及时间T1, 7);
	DefineLangVarInt(中追及时间T3, 8);
	DefineLangVarInt(慢追及时间T2, 14);
	ColPrintf(PrintfCol::标题, Lang("P4例二 追及问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：快中慢三车从A地到B地，中间有骑车人也一起行驶，快中慢三车分别用7，8，14分钟追上，已知快车速度是800，慢车速度是600，中车速度是多少？"));
	DefineLangVarInt(快追上骑车人慢离快的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算快追上骑车人慢离快的路程S1 快追上骑车人慢离快的速度S1=(快车速度V2-慢车速度V3)*快追及时间T1"));
	快追上骑车人慢离快的路程S1 = (快车速度V2 - 慢车速度V3) * 快追及时间T1;
	快追上骑车人慢离快的路程S1.PrintProcessLog(1);
	DefineLangVarInt(丙和骑车人的速度差V4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算丙和骑车人的速度差V4 丙和骑车人的速度差V4=快追上骑车人慢离快的路程S1/(慢追及时间T2-快追及时间T1)"));
	丙和骑车人的速度差V4 = 快追上骑车人慢离快的路程S1 / (慢追及时间T2 - 快追及时间T1);
	丙和骑车人的速度差V4.PrintProcessLog(2);
	DefineLangVarInt(骑车人速度V5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算骑车人速度V5 骑车人速度V5=慢车速度V3-丙和骑车人的速度差V4"));
	骑车人速度V5 = 慢车速度V3 - 丙和骑车人的速度差V4;
	骑车人速度V5.PrintProcessLog(3);
	DefineLangVarInt(慢车追及路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算慢车追及路程S2 慢车追及路程S2=(慢车速度V3-骑车人速度V5)*慢追及时间T2"));
	慢车追及路程S2 = (慢车速度V3 - 骑车人速度V5) * 慢追及时间T2;
	慢车追及路程S2.PrintProcessLog(4);
	DefineLangVarInt(中车速度V6, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算中车速度V6 中车速度V6=(慢车追及路程S2/中追及时间T3)+骑车人速度V5"));
	中车速度V6 = 慢车追及路程S2 / 中追及时间T3 + 骑车人速度V5;
	中车速度V6.PrintProcessLog(5);
	ColPrintf(PrintfCol::结果, Lang("答：中车速度是%d"), (int)中车速度V6);
}
void P4()
{
	P4_1();
	ColPrintf(PrintfCol::方法, "");
	P4_2();
	ColPrintf(PrintfCol::方法, "");
}
void P4_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P4();
	Lang.SetCurLanguage(LanguageLib::English);
	P4();
	ColPrintf(PrintfCol::方法, "");

}