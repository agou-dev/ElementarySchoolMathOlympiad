#pragma once
void P3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P3 Example 1 Encounter Problem","P3例一 相遇问题"},
		{"Title: A, B, and C walk together. A travels at a speed of 80 meters, B travels at a speed of 100 meters, and C travels at a speed of 90 meters.\nA starts from point A, B, and C travel in opposite directions. A and B meet again 30 minutes after meeting.\nWhat is the distance between A and B?",
		"题目：甲，乙，丙三人行，甲速度是80米，乙速度是100米，丙速度是90米，甲从A地，乙，丙从B第出发,相向而行，甲乙相遇后30分钟又与丙相遇，AB两地的距离是多少米？"},
		{"1. Calculate the distance S1 between A and B after they meet. S1=(A speed V1+C speed V2) * A and C meeting time T1",
		"1.计算甲乙相遇后甲丙之间的路程S1 甲乙相遇后甲丙之间的路程S1=(甲速度V1+丙速度V2)*甲丙相遇时间T1"},
		{"2. Calculate the time T2 required for the meeting of Party A and Party B, which is equal to the distance S1\nbetween Party A and Party C after their meeting divided by (Party B's speed V3- Party C's speed)",
		"2.计算甲乙相遇所用的时间T2 甲乙相遇所用的时间T2=甲乙相遇后甲丙之间的路程S1/(乙速度V3-丙速度V2)"},
		{"3. Calculate the total distance S2 between the two places. The total distance S2 between the two places is equal to the time T2 taken for A and B to meet (A speed+B speed)",
		"3.计算两地总路程S2 两地总路程S2=甲乙相遇所用的时间T2*(甲速度V1+乙速度V3)"},
		{"Answer: The distance between A and B is %d m",
		"答：AB两地的距离是%dm"},
		//变量表
		{"ASpeedV1","甲速度V1"},
		{"CSpeedV2","丙速度V2"},
		{"MeetingTimeT1BetweenAAndC","甲丙相遇时间T1"},
		{"BSpeedV3","乙速度V3"},
		{"TheDistanceS1BetweenAAndBAfterTheyMeet","甲乙相遇后甲丙之间的路程S1"},
		{"TheTimeT2TakenForAAndB ToMeet","甲乙相遇所用的时间T2"},
		{"TotalDistanceBetweenTheTwoPlacesS2","两地总路程S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"                               <-------------丙\n"
		"甲-----------------><------------------------乙\n"
		"A---------------------------------------------B\n"
		;
	DefineLangVarInt(甲速度V1, 80);
	DefineLangVarInt(丙速度V2, 90);
	DefineLangVarInt(乙速度V3, 100);
	DefineLangVarInt(甲丙相遇时间T1, 30);
	ColPrintf(PrintfCol::标题, Lang("P3例一 相遇问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲，乙，丙三人行，甲速度是80米，乙速度是100米，丙速度是90米，甲从A地，乙，丙从B第出发,相向而行，甲乙相遇后30分钟又与丙相遇，AB两地的距离是多少米？"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(甲乙相遇后甲丙之间的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算甲乙相遇后甲丙之间的路程S1 甲乙相遇后甲丙之间的路程S1=(甲速度V1+丙速度V2)*甲丙相遇时间T1"));
	甲乙相遇后甲丙之间的路程S1 = (甲速度V1 + 丙速度V2) * 甲丙相遇时间T1;
	甲乙相遇后甲丙之间的路程S1.PrintProcessLog(1);
	DefineLangVarInt(甲乙相遇所用的时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算甲乙相遇所用的时间T2 甲乙相遇所用的时间T2=甲乙相遇后甲丙之间的路程S1/(乙速度V3-丙速度V2)"));
	甲乙相遇所用的时间T2 = 甲乙相遇后甲丙之间的路程S1 / (乙速度V3 - 丙速度V2);
	甲乙相遇所用的时间T2.PrintProcessLog(2);
	DefineLangVarInt(两地总路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算两地总路程S2 两地总路程S2=甲乙相遇所用的时间T2*(甲速度V1+乙速度V3)"));
	两地总路程S2 = 甲乙相遇所用的时间T2 * (甲速度V1 + 乙速度V3);
	两地总路程S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：AB两地的距离是%dm"), (int)两地总路程S2);
}
void P3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P3 Example 2 Encounter Problem","P3例二 追及问题"},
		{"Title: Three vehicles, A, B, and C, travel from point A to point B. The speeds of A and B are 100 and 80 kilometers respectively.\nA truck is approaching them head-on, and the truck will meet with A, B, and C after 12, 14, and 16 hours respectively. Please\ncalculate the speed of C",
		"题目：甲乙丙三辆车从A地到B地，甲乙速度分别是100，80千米，有一辆卡车向他们迎面驶来，卡车分别在12，14，16小时后与甲乙丙相遇，求丙速度"},
		{"1. Calculate the distance S1 between card A and card B after card A meets. S1=(speed V1- speed V2) * card A meeting time T1",
		"1.计算甲卡相遇后乙卡之间的路程S1 甲卡相遇后乙卡之间的路程S1=(甲速度V1-乙速度V2)*甲卡相遇时间T1"},
		{"2. Calculate the truck speed V3. The truck speed V3 is equal to the distance S1 between the first and second trucks after they meet, divided by (the time T2 when the second truck meets - the time T1 when the first truck meets) minus the speed V2 of the second truck",
		"2.计算卡车速度V3 卡车速度V3=甲卡相遇后乙卡之间的路程S1/(乙卡相遇时间T2-甲卡相遇时间T1)-乙速度V2"},
		{"3. Calculate the total distance S2 between the two places. The total distance S2 between the two places is equal to the time T2 taken for A and B to meet (A speed+B speed)",
		"3.计算两地总路程S2 两地总路程S2=甲卡相遇时间T1*(甲速度V1+卡车速度V3)"},
		{"4. Calculate the speed V4 of C=(total distance S2 between the two places/time T2 when C card meets) - truck speed V3",
		"4.计算丙速度V4 丙速度V4=(两地总路程S2/丙卡相遇时间T3)-卡车速度V3"},
		{"Answer: The speed of C is% d kilometers per hour",
		"答：丙速度是%d千米"},
		//变量表
		{"ASpeedV1","甲速度V1"},
		{"CSpeedV4","丙速度V4"},
		{"JiaCardMeetingTimeT1","甲卡相遇时间T1"},
		{"BSpeedV3","卡车速度V3"},
		{"BSpeedV2","乙速度V2"},
		{"MeetingTimeT2OfTheSecondCard","乙卡相遇时间T2"},
		{"MeetingTimeT3OfTheThirdCard","丙卡相遇时间T3"},
		{"TotalDistanceBetweenTheTwoPlacesS2","两地总路程S2"},
		{"TheDistanceS1BetweenCardAAndCardBAfterTheyMeet","甲卡相遇后乙卡之间的路程S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(甲速度V1, 100);
	DefineLangVarInt(乙速度V2, 80);
	DefineLangVarInt(乙卡相遇时间T2, 14);
	DefineLangVarInt(丙卡相遇时间T3, 16);
	DefineLangVarInt(甲卡相遇时间T1, 12);
	const char* pPic =
		"                  12小时后\n"
		"甲----------------------><------------------卡\n"
		"乙--------------->\n"
		"A--------------------------------------------B\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P3例一 相遇问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙丙三辆车从A地到B地，甲乙速度分别是100，80千米，有一辆卡车向他们迎面驶来，卡车分别在12，14，16小时后与甲乙丙相遇，求丙速度"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(甲卡相遇后乙卡之间的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算甲卡相遇后乙卡之间的路程S1 甲卡相遇后乙卡之间的路程S1=(甲速度V1-乙速度V2)*甲卡相遇时间T1"));
	甲卡相遇后乙卡之间的路程S1 = (甲速度V1 - 乙速度V2) * 甲卡相遇时间T1;
	甲卡相遇后乙卡之间的路程S1.PrintProcessLog(1);
	DefineLangVarInt(卡车速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算卡车速度V3 卡车速度V3=甲卡相遇后乙卡之间的路程S1/(乙卡相遇时间T2-甲卡相遇时间T1)-乙速度V2"));
	卡车速度V3  = 甲卡相遇后乙卡之间的路程S1 / (乙卡相遇时间T2 - 甲卡相遇时间T1) - 乙速度V2;
	卡车速度V3.PrintProcessLog(2);
	DefineLangVarInt(两地总路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算两地总路程S2 两地总路程S2=甲卡相遇时间T1*(甲速度V1+卡车速度V3)"));
	两地总路程S2 = 甲卡相遇时间T1 * (甲速度V1 + 卡车速度V3);
	两地总路程S2.PrintProcessLog(3);
	DefineLangVarInt(丙速度V4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算丙速度V4 丙速度V4=(两地总路程S2/丙卡相遇时间T3)-卡车速度V3"));
	丙速度V4 = (两地总路程S2 / 丙卡相遇时间T3) - 卡车速度V3;
	丙速度V4.PrintProcessLog(4);
	ColPrintf(PrintfCol::结果, Lang("答：丙速度是%d千米"), (int)丙速度V4);
}
void P3_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P3 Example Three Equation Method","P3例三 方程法"},
		{"Title: A, B, and C walk together, with A traveling at a speed of 4 meters, B traveling at a speed of 6 meters, and C traveling at a speed of\n5 meters. A and B depart from A and C departs from B, traveling in opposite directions. In how many minutes will\nthe distance between C and B be twice that of C and A",
		"题目：甲，乙，丙三人行，甲速度是4米，乙速度是6米，丙速度是5米，甲乙从A地，丙从B第出发,相向而行，在多少分钟后，丙乙的距离是丙甲的两倍"},
		{"If time is t, then the distance between A and C is (203- (4+5) t), and the distance between C and B is (5+6) t-203)",
		"1.设时间为t，则甲丙距离是(203-(4+5)t)则丙乙距离是((5+6)t-203)"},
		{"2. List the equation S1 11t-203=2 (203-9t)",
		"2.列出式子S1           11t-203=2(203-9t)"},
		{"3. Simplify equation S1 to obtain equation S2 11t-203=(203-9t)+(203-9t)",
		"3.化简式子S1得到式子S2 11t-203=(203-9t)+(203-9t)"},
		{"4. Simplify equation S2 to obtain equation S3 11t-203=406-18t",
		"4.化简式子S2得到式子S3 11t-203=406-18t"},
		{"5. Simplify equation S3 to obtain equation S4 11t=406-18t+203",
		"5.化简式子S3得到式子S4 11t=406-18t+203"},
		{"6. Simplify equation S4 to obtain equation S5 11t=609-18t",
		"6.化简式子S4得到式子S5 11t=609-18t"},
		{"7. Simplify equation S5 to solve t 29t=609 t=609/29",
		"7.化简式子S5解出t      29t=609 t=609/29"},
		{"Answer: After% d minutes, the distance between C and B is twice that of C and A",
		"答：在%d分钟后，丙乙的距离是丙甲的两倍"},
		//变量表
		{"TheDistanceBetweenCAndBIsTwiceThatOfCAndA,AndTheTimeT1IsRequired","丙乙的距离是丙甲的两倍所用的时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(丙乙的距离是丙甲的两倍所用的时间T1, 0);
	const char* pPic =
		"   甲4t米                         丙5t米\n"
		"------------->|    |<----|-----|--------------|\n"
		"  乙6t米\n"
		"--------------------------------->\n"
		"A---------------------------------------------B\n"
		"                 203米\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P3例一 相遇问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲，乙，丙三人行，甲速度是4米，乙速度是6米，丙速度是5米，甲乙从A地，丙从B第出发,相向而行，在多少分钟后，丙乙的距离是丙甲的两倍"));
	ColPrintf(PrintfCol::标题, pPic);
	ColPrintf(PrintfCol::方法, Lang("1.设时间为t，则甲丙距离是(203-(4+5)t)则丙乙距离是((5+6)t-203)"));
	ColPrintf(PrintfCol::方法, Lang("2.列出式子S1           11t-203=2(203-9t)"));
	ColPrintf(PrintfCol::方法, Lang("3.化简式子S1得到式子S2 11t-203=(203-9t)+(203-9t)"));
	ColPrintf(PrintfCol::方法, Lang("4.化简式子S2得到式子S3 11t-203=406-18t"));
	ColPrintf(PrintfCol::方法, Lang("5.化简式子S3得到式子S4 11t=406-18t+203"));
	ColPrintf(PrintfCol::方法, Lang("6.化简式子S4得到式子S5 11t=609-18t"));
	ColPrintf(PrintfCol::方法, Lang("7.化简式子S5解出t      29t=609 t=609/29"));
	丙乙的距离是丙甲的两倍所用的时间T1.Var = 609 / 29;
	ColPrintf(PrintfCol::结果, Lang("答：在%d分钟后，丙乙的距离是丙甲的两倍"), (int)丙乙的距离是丙甲的两倍所用的时间T1);
}
void P3()
{
	P3_1();
	ColPrintf(PrintfCol::方法, "");
	P3_2();
	ColPrintf(PrintfCol::方法, "");
	P3_3();
	ColPrintf(PrintfCol::方法, "");
}
void P3_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P3();
	Lang.SetCurLanguage(LanguageLib::English);
	P3();
	ColPrintf(PrintfCol::方法, "");
	
}