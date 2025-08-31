#pragma once
void P77_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 Case One Travel Problem","P77 例一 行程问题"},
		{"Title: The water speed is 15 kilometers per hour. If you travel 320 kilometers downstream for 8 hours, how many kilometers do you travel upstream?",
		"题目：水速是15千米每小时，如果顺水8小时行320千米，若逆水行多少千米?"},
		{"1. Calculate the downstream speed V1, which is equal to the downstream distance S1 divided by the total time T1",
		"1.计算顺水速度V1 顺水速度V1=顺水路程S1/总时间T1"},
		{"2. Calculate the ship speed V2, which is equal to the downstream speed V1 minus the downstream speed V3",
		"2.计算船速V2 船速V2=顺水速度V1-水速V3"},
		{"3. Calculate the upstream velocity V4, which is equal to the ship speed V2 minus the water speed V3",
		"3.计算逆水速度V4 逆水速度V4=船速V2-水速V3"},
		{"4. Calculate the upstream distance S2=total time T1 * upstream speed V4",
		"4.计算逆水路程S2 逆水路程S2=总时间T1*逆水速度V4"},
		//变量表
		{"ShunshuiRoadS1","顺水路程S1"},
		{"TotaltimeT1","总时间T1"},
		{"WaterspeedV3","水速V3"},
		{"ShunshuispeedV1","顺水速度V1"},
		{"ShipspeedV2","船速V2"},
		{"UpstreamvelocityV4","逆水速度V4"},
		{"UpstreamjourneyS2","逆水路程S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 顺水路程S1, 320);
	DefineLangVar(float, 总时间T1, 8);
	DefineLangVar(float, 水速V3, 15);
	ColPrintf(PrintfCol::标题, Lang("P77 例一 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：水速是15千米每小时，如果顺水8小时行320千米，若逆水行多少千米?"));
	DefineLangVar(float, 顺水速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算顺水速度V1 顺水速度V1=顺水路程S1/总时间T1"));
	顺水速度V1 = 顺水路程S1 / 总时间T1;
	顺水速度V1.PrintProcessLog(2);
	DefineLangVar(float, 船速V2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算船速V2 船速V2=顺水速度V1-水速V3"));
	船速V2 = 顺水速度V1 - 水速V3;
	船速V2.PrintProcessLog(2);
	DefineLangVar(float, 逆水速度V4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算逆水速度V4 逆水速度V4=船速V2-水速V3"));
	逆水速度V4 = 船速V2 - 水速V3;
	逆水速度V4.PrintProcessLog(3);
	DefineLangVar(float, 逆水路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算逆水路程S2 逆水路程S2=总时间T1*逆水速度V4"));
	逆水路程S2 = 总时间T1 * 逆水速度V4;
	逆水路程S2.PrintProcessLog(4);
}
void P77_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 Case 2 Travel Problem","P77 例二 行程问题"},
		{"Title: A wooden boat is traveling on the water surface, with a speed of 1 hour and 5 kilometers in the water and 5 hours and 5 kilometers in the opposite direction. What are the boat speed and water speed?",
		"题目：一只木船在水面行驶，顺水1小时5千米，逆水5小时5千米，船速和水速各是多少?"},
		{"1. Calculate the upstream velocity V1, which is equal to the upstream distance S1 divided by the upstream time T1",
		"1.计算逆水速度V1 逆水速度V1=逆水路程S1/逆水时间T1"},
		{"2. Calculate the downstream speed V2, which is equal to the downstream distance S1 divided by the downstream time T",
		"2.计算顺水速度V2 顺水速度V2=顺水路程S1/顺水时间T1"},
		{"3. Calculate the ship speed V3, which is equal to (upstream speed V1+downstream speed V2) divided by the multiplier N1",
		"3.计算船速V3 船速V3=(逆水速度V1+顺水速度V2)/倍率N1"},
		{"4. Calculate the water speed V4, which is equal to the downstream speed V2 minus the ship speed V3",
		"4.计算水速V4 水速V4=顺水速度V2-船速V3"},
		//变量表
		{"UpstreamjourneyS1","逆水路程S1"},
		{"ReversewatertimeT1","逆水时间T1"},
		{"ShunshuiRoadS1","顺水路程S1"},
		{"ShunshuitimeT1","顺水时间T1"},
		{"MagnificationN1","倍率N1"},
		{"UpstreamvelocityV1","逆水速度V1"},
		{"ParallelspeedV2","顺水速度V2"},
		{"ShipspeedV3","船速V3"},
		{"WaterspeedV4","水速V4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 逆水路程S1, 5);
	DefineLangVar(float, 逆水时间T1, 5);
	DefineLangVar(float, 顺水路程S1, 5);
	DefineLangVar(float, 顺水时间T1, 1);
	DefineLangVar(float, 倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P77 例二 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一只木船在水面行驶，顺水1小时5千米，逆水5小时5千米，船速和水速各是多少?"));
	DefineLangVar(float, 逆水速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算逆水速度V1 逆水速度V1=逆水路程S1/逆水时间T1"));
	逆水速度V1 = 逆水路程S1 / 逆水时间T1;
	逆水速度V1.PrintProcessLog(1);
	DefineLangVar(float, 顺水速度V2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算顺水速度V2 顺水速度V2=顺水路程S1/顺水时间T1"));
	顺水速度V2 = 顺水路程S1 / 顺水时间T1;
	顺水速度V2.PrintProcessLog(2);
	DefineLangVar(float, 船速V3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算船速V3 船速V3=(逆水速度V1+顺水速度V2)/倍率N1"));
	船速V3 = (逆水速度V1 + 顺水速度V2) / 倍率N1;
	船速V3.PrintProcessLog(3);
	DefineLangVar(float, 水速V4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算水速V4 水速V4=顺水速度V2-船速V3"));
	水速V4 = 顺水速度V2 - 船速V3;
	水速V4.PrintProcessLog(4);
}
void P77_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 Case Three Trip Problem","P77 例三 行程问题"},
		{"Title: How many seconds does it take for a train with a length of 150 meters and a speed of 19 meters per second to cross a 420 meter bridge?",
		"题目：一辆火车长150米，每秒行19米，全车通过420米的桥要多少秒?"},
		{"1. Calculate the distance to be traveled by the train S1=train length S2+bridge length S3",
		"1.计算火车要行路程S1 火车要行路程S1=火车长S2+桥长S3"},
		{"2. Calculate the crossing time T1, which is equal to the distance traveled by the train S1 divided by the train speed V1",
		"2.计算过桥时间T1 过桥时间T1=火车要行路程S1/火车速度V1"},
		//变量表
		{"TrainconductorS2","火车长S2"},
		{"BridgelengthS3","桥长S3"},
		{"TrainspeedV1","火车速度V1"},
		{"TraintraveldistanceS1","火车要行路程S1"},
		{"BridgecrossingtimeT1","过桥时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 火车长S2, 150);
	DefineLangVar(float, 桥长S3, 420);
	DefineLangVar(float, 火车速度V1, 19);
	ColPrintf(PrintfCol::标题, Lang("P77 例三 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一辆火车长150米，每秒行19米，全车通过420米的桥要多少秒?"));
	const char* pPic =
		"火车---------150米------->\n"
		"                         桥A----------------------420米-------------------B\n"
		;
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVar(float, 火车要行路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算火车要行路程S1 火车要行路程S1=火车长S2+桥长S3"));
	火车要行路程S1 = 火车长S2 + 桥长S3;
	火车要行路程S1.PrintProcessLog(1);
	DefineLangVar(float, 过桥时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算过桥时间T1 过桥时间T1=火车要行路程S1/火车速度V1"));
	过桥时间T1 = 火车要行路程S1 / 火车速度V1;
	过桥时间T1.PrintProcessLog(2);
}
void P77_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 Case Four Travel Problem","P77 例四 行程问题"},
		{"Title: How many seconds did it take for a passenger car to be 190 meters long and a truck to be 240 meters long, with two cars traveling towards each other at speeds of 20 meters per second and 23 meters per second, respectively, from the intersection of the front and the separation of the rear of the car",
		"题目：一辆客车长190米，一辆货车长240米，两车分别以20米每秒和23米每秒的速度相向而行，从车头交汇和车尾相离共用了多少秒"},
		{"1. Calculate the intersection distance S1. Intersection distance S1=Bus length L1+Truck length L2",
		"1.计算交汇路程S1 交汇路程S1=客车长度L1+货车长度L2"},
		{"2. Calculate the speed and V1 speed, where V1=bus speed V2+truck speed V3",
		"2.计算速度和V1 速度和V1=客车速度V2+货车速度V3"},
		{"3. Calculate the meeting time T1, which is equal to the intersection distance S1 divided by the speed and V1",
		"3.计算相遇时间T1 相遇时间T1=交汇路程S1/速度和V1"},
		//变量表
		{"BuslengthL1","客车长度L1"},
		{"TrucklengthL2","货车长度L2"},
		{"BusspeedV2","客车速度V2"},
		{"TruckspeedV3","货车速度V3"},
		{"IntersectionrouteS1","交汇路程S1"},
		{"SpeedandV1","速度和V1"},
		{"MeetingtimeT1","相遇时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 客车长度L1, 190);
	DefineLangVar(float, 货车长度L2, 240);
	DefineLangVar(float, 客车速度V2, 20);
	DefineLangVar(float, 货车速度V3, 23);
	ColPrintf(PrintfCol::标题, Lang("P77 例四 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一辆客车长190米，一辆货车长240米，两车分别以20米每秒和23米每秒的速度相向而行，从车头交汇和车尾相离共用了多少秒"));
	DefineLangVar(float, 交汇路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算交汇路程S1 交汇路程S1=客车长度L1+货车长度L2"));
	交汇路程S1 = 客车长度L1 + 货车长度L2;
	交汇路程S1.PrintProcessLog(1);
	DefineLangVar(float, 速度和V1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算速度和V1 速度和V1=客车速度V2+货车速度V3"));
	速度和V1 = 客车速度V2 + 货车速度V3;
	速度和V1.PrintProcessLog(2);
	DefineLangVar(float, 相遇时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算相遇时间T1 相遇时间T1=交汇路程S1/速度和V1"));
	相遇时间T1 = 交汇路程S1 / 速度和V1;
	相遇时间T1.PrintProcessLog(3);
}
void P77_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 case five itinerary problem","P77 例五 行程问题"},
		{"Title: It takes 65 seconds for a train to cross a 990 meter bridge, and 90.5 seconds for the same speed to cross a 1500 meter bridge. Calculate the speed and length of the train",
		"题目：一列火车通过990米的大桥用65秒，同样的速度过1500米的大桥要90.5秒，求车速和车长"},
		{"1. Calculate the distance difference S1 between two major bridges, where S1=the first bridge length L1-the second bridge length L2",
		"1.计算两个大桥路程差S1 两个大桥路程差S1=第一个桥长L1-第二个桥长L2"},
		{"2. Calculate the time difference T1 between two bridges. The time difference T1 between two bridges is equal to the first bridge time T2 plus the second bridge time T3",
		"2.计算两个大桥时间差T1 两个大桥时间差T1=第一个桥时间T2-第二个桥时间T3"},
		{"3. Calculate the vehicle speed V1, which is equal to the distance difference S1 between two major bridges divided by the time difference T1 between two major bridges",
		"3.计算车速V1 车速V1=两个大桥路程差S1/两个大桥时间差T1"},
		{"4. Calculate the distance of the train passing through the first bridge S2=vehicle speed V1 * first bridge time T2",
		"4.计算火车通过第一个桥行的路程S2 火车通过第一个桥行的路程S2=车速V1*第一个桥时间T2"},
		{"5. Calculate the length of the train S3, which is equal to the distance of the train passing through the first bridge S2 minus the length of the first bridge L1",
		"5.计算车长S3 车长S3=火车通过第一个桥行的路程S2-第一个桥长L1"},
		//变量表
		{"ThefirstbridgelengthL1","第一个桥长L1"},
		{"SecondbridgelengthL2","第二个桥长L2"},
		{"ThefirstbridgetimeT2","第一个桥时间T2"},
		{"ThesecondbridgetimeT3","第二个桥时间T3"},
		{"ThedistancedifferencebetweenthetwobridgesisS1","两个大桥路程差S1"},
		{"TimedifferenceT1betweentwobridges","两个大桥时间差T1"},
		{"VehiclespeedV1","车速V1"},
		{"ThedistanceofthetrainpassingthroughthefirstbridgeS2","火车通过第一个桥行的路程S2"},
		{"CarCaptainS3","车长S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 第一个桥长L1, 1500);
	DefineLangVar(float, 第二个桥长L2, 990);
	DefineLangVar(float, 第一个桥时间T2, 90.5);
	DefineLangVar(float, 第二个桥时间T3, 65);
	ColPrintf(PrintfCol::标题, Lang("P77 例五 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一列火车通过990米的大桥用65秒，同样的速度过1500米的大桥要90.5秒，求车速和车长"));
	DefineLangVar(float, 两个大桥路程差S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算两个大桥路程差S1 两个大桥路程差S1=第一个桥长L1-第二个桥长L2"));
	两个大桥路程差S1 = 第一个桥长L1 - 第二个桥长L2;
	两个大桥路程差S1.PrintProcessLog(1);
	DefineLangVar(float, 两个大桥时间差T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算两个大桥时间差T1 两个大桥时间差T1=第一个桥时间T2-第二个桥时间T3"));
	两个大桥时间差T1 = 第一个桥时间T2 - 第二个桥时间T3;
	两个大桥时间差T1.PrintProcessLog(2);
	DefineLangVar(float, 车速V1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算车速V1 车速V1=两个大桥路程差S1/两个大桥时间差T1"));
	车速V1 = 两个大桥路程差S1 / 两个大桥时间差T1;
	车速V1.PrintProcessLog(3);
	DefineLangVar(float, 火车通过第一个桥行的路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算火车通过第一个桥行的路程S2 火车通过第一个桥行的路程S2=车速V1*第一个桥时间T2"));
	火车通过第一个桥行的路程S2 = 车速V1 * 第一个桥时间T2;
	火车通过第一个桥行的路程S2.PrintProcessLog(4);
	DefineLangVar(float, 车长S3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算车长S3 车长S3=火车通过第一个桥行的路程S2-第一个桥长L1"));
	车长S3 = 火车通过第一个桥行的路程S2 - 第一个桥长L1;
	车长S3.PrintProcessLog(5);
}
void P77()
{
	P77_1();
	ColPrintf(PrintfCol::方法, "");
	P77_2();
	ColPrintf(PrintfCol::方法, "");
	P77_3();
	ColPrintf(PrintfCol::方法, "");
	P77_4();
	ColPrintf(PrintfCol::方法, "");
	P77_5();
	ColPrintf(PrintfCol::方法, "");
}
void P77_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P77();
	Lang.SetCurLanguage(LanguageLib::English);
	P77();
	ColPrintf(PrintfCol::方法, "");

}