#pragma once
void P9_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P9 case one encounter problem","P9例一 相遇问题"},
		{"Title: Two people, A and B, travel 540 meters apart from each other from point A to point B. They travel in opposite directions, with A traveling at a speed\nof 36 meters and B traveling at a speed of 54 meters. They have a walkie talkie, which can be used when the distance is\nless than 90 meters. How long can they use the walkie talkie to communicate after they depart?\nHow long does it take to use a walkie talkie?",
		"题目：甲乙两人相距540米分别从A地到B地，乘车相向而行，甲速度是36米，乙速度是54米，他们有一个对讲机，相距低于90米时可用对讲机，他们出发后多久可用对讲机联络?用对讲机时经过多长时间？"},
		{"1. Calculate the total distance S1=Distance distance S2- Available walkie talkie distance S3",
		"1.计算总路程S1 总路程S1=相距路程S2-可用对讲机路程S3"},
		{"2. Calculate the time T1 used, which is equal to the total distance S1 / (speed V1 of vehicle A+speed V2 of vehicle B)",
		"2.计算所用时间T1 所用时间T1=总路程S1/(甲速度V1+乙速度V2)"},
		{"3. Calculate the contact time T2 using the walkie talkie. The contact time T2 using the walkie talkie is equal to the available walkie talkie distance S3 divided by (speed V1 of A+speed V2 of B)",
		"3.计算用对讲机联络时间T2 用对讲机联络时间T2=可用对讲机路程S3/(甲速度V1+乙速度V2)"},
		{"Answer: They can use walkie talkies to communicate within% d hours after departure. How long does it take to use walkie talkies for% d hours",
		"答：他们出发后%d小时可用对讲机联络，用对讲机时经过多长%d小时"},
		//变量表
		{"NDistanceS2","相距路程S2"},
		{"NAvailableWalkieTalkieRangeS3","可用对讲机路程S3"},
		{"NASpeedV1","甲速度V1"},
		{"NBSpeedV2","乙速度V2"},
		{"NTotalDistanceS1","总路程S1"},
		{"NTimeTakenT1","所用时间T1"},
		{"NContactTimeT2ThroughWalkieTalkie","用对讲机联络时间T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(甲速度V1, 36);
	DefineLangVarInt(乙速度V2, 54);
	DefineLangVarInt(相距路程S2, 540);
	DefineLangVarInt(可用对讲机路程S3, 90);
	ColPrintf(PrintfCol::标题, Lang("P9例一 相遇问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙两人相距540米分别从A地到B地，乘车相向而行，甲速度是36米，乙速度是54米，他们有一个对讲机，相距低于90米时可用对讲机，他们出发后多久可用对讲机联络?用对讲机时经过多长时间？"));
	DefineLangVarInt(总路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算总路程S1 总路程S1=相距路程S2-可用对讲机路程S3"));
	总路程S1 = 相距路程S2 - 可用对讲机路程S3;
	总路程S1.PrintProcessLog(1);
	DefineLangVarInt(所用时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算所用时间T1 所用时间T1=总路程S1/(甲速度V1+乙速度V2)"));
	所用时间T1 = 总路程S1 / (甲速度V1 + 乙速度V2);
	所用时间T1.PrintProcessLog(2);
	DefineLangVarInt(用对讲机联络时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算用对讲机联络时间T2 用对讲机联络时间T2=可用对讲机路程S3/(甲速度V1+乙速度V2)"));
	用对讲机联络时间T2 = 可用对讲机路程S3 / (甲速度V1 + 乙速度V2);
	用对讲机联络时间T2.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：他们出发后%d小时可用对讲机联络，用对讲机时经过多长%d小时"), (int)所用时间T1, (int)用对讲机联络时间T2);
}
void P9_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P9 Case 2 Encounter Problem","P9例二 相遇问题"},
		{"Title: A and B travel at speeds of 6 kilometers and 4 kilometers respectively from A and B, which are 30 kilometers apart. When the distance is 10 kilometers, how long does it take for them to travel?",
		"题目：甲乙两人从相距30千米AB两地出发速度是6千米和4千米，当距离是10千米，他走了多少时间?"},
		{"1. Calculate the distance S1 that has not yet met and traveled. S1=total distance S1- the distance traveled by question A and question B",
		"1.计算还未相遇走的路程S1 还未相遇走的路程S1=总路程S1-题目甲乙走的距离S2"},
		{"2. Calculate the time T1 that has not yet met and left. The time T1 that has not yet met and left is equal to the distance S1 that has not yet met and left divided by (speed V1 of A+speed V2 of B)",
		"2.计算还未相遇走的时间T1 还未相遇走的时间T1=还未相遇走的路程S1/(甲速度V1+乙速度V2)"},
		{"3. Calculate the distance traveled by meeting S1=total distance S1+distance traveled by question A and B S2",
		"3.计算相遇走的路程S3 相遇走的路程S1=总路程S1+题目甲乙走的距离S2"},
		{"4. Calculate the time T1 of meeting and walking, which is equal to the distance S3 of meeting and walking divided by (speed V1 of A+speed V2 of B)",
		"4.计算相遇走的时间T1 相遇走的时间T1=相遇走的路程S3/(甲速度V1+乙速度V2)"},
		{"Answer: He walked for% d or% d hours",
		"答：他走了%d或%d小时."},
		//变量表
		{"NTotalDistanceS1","总路程S1"},
		{"NTopicAAndB:DistanceTraveledS2","题目甲乙走的距离S2"},
		{"NASpeedV1","甲速度V1"},
		{"NBSpeedV2","乙速度V2"},
		{"NTheJourneyS1ThatWeHaven'tMetYet","还未相遇走的路程S1"},
		{"NTimeT1BeforeMeetingAndLeaving","还未相遇走的时间T1"},
		{"NEncounterAndJourneyS3","相遇走的路程S3"},
		{"NMeetingAndLeavingTimeT1","相遇走的时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"The first type\n"
		"A                      10kilometre           B\n"
		"|-------------------->         <----------|\n"
		"|-----------------------------------------|\n"
		"A                   30kilometre                B\n"
		"The second type\n"
		"A                      10kilometre           B\n"
		"                       <------------------|\n"
		"|------------------------------->\n"
		"|-----------------------------------------|\n"
		"A                   30kilometre                B\n"
		;
	DefineLangVarInt(总路程S1, 30);
	DefineLangVarInt(题目甲乙走的距离S2, 10);
	DefineLangVarInt(甲速度V1, 6);
	DefineLangVarInt(乙速度V2, 4);
	ColPrintf(PrintfCol::标题, Lang("P9例二 相遇问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙两人从相距30千米AB两地出发速度是6千米和4千米，当距离是10千米，他走了多少时间?(甲A乙B)"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(还未相遇走的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算还未相遇走的路程S1 还未相遇走的路程S1=总路程S1-题目甲乙走的距离S2"));
	还未相遇走的路程S1 = 总路程S1 - 题目甲乙走的距离S2;
	还未相遇走的路程S1.PrintProcessLog(1);
	DefineLangVarInt(还未相遇走的时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算还未相遇走的时间T1 还未相遇走的时间T1=还未相遇走的路程S1/(甲速度V1+乙速度V2)"));
	还未相遇走的时间T1 = 还未相遇走的路程S1 / (甲速度V1 + 乙速度V2);
	还未相遇走的时间T1.PrintProcessLog(2);
	DefineLangVarInt(相遇走的路程S3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算相遇走的路程S3 相遇走的路程S3=总路程S1+题目甲乙走的距离S2"));
	相遇走的路程S3 = 总路程S1 + 题目甲乙走的距离S2;
	相遇走的路程S3.PrintProcessLog(3);
	DefineLangVarInt(相遇走的时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算相遇走的时间T1 相遇走的时间T1=相遇走的路程S3/(甲速度V1+乙速度V2)"));
	相遇走的时间T1 = 相遇走的路程S3 / (甲速度V1 + 乙速度V2);
	相遇走的时间T1.PrintProcessLog(4);
	ColPrintf(PrintfCol::结果, Lang("答：他走了%d或%d小时."), (int)相遇走的时间T1,(int)还未相遇走的时间T1);
}
void P9()
{
	P9_1();
	ColPrintf(PrintfCol::方法, "");
	P9_2();
	ColPrintf(PrintfCol::方法, "");
}
void P9_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P9();
	Lang.SetCurLanguage(LanguageLib::English);
	P9();
	ColPrintf(PrintfCol::方法, "");

}