#pragma once
void P8_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P8 Example 1 Overtaking Problem: Train Crossing the Bridge","P8例一 超车问题火车过桥"},
		{"Title: It took 25 seconds for a train to pass through a tunnel that is 250 meters long, and 23 seconds to cross a bridge that\nis 210 meters long. In front of it is a freight train that is 320 meters long and has a\nspeed of 17 meters per second. How many seconds did it take for the train to catch up and leave?",
		"题目：火车过隧道，隧道长是250米用了25秒，过210米的桥用了23秒，它前面有一列货车长320米速度17米/秒，火车追到到相离用了多少秒?"},
		{"1. Calculate train speed V1. Train speed V1=(tunnel length S1- bridge length S2)/(tunnel crossing time T1- bridge crossing time T2)",
		"1.计算火车速度V1 火车速度V1=(隧道长度S1-桥长S2)/(过隧道时间T1-过桥时间T2)"},
		{"2. Calculate the length of the train S3. Train length S3=(train speed V1 * tunnel passage time T1) - tunnel length S1",
		"2.计算火车长度S3 火车长度S3=(火车速度V1*过隧道时间T1)-隧道长度S1"},
		{"3. Calculate overtaking time T3 Overtaking time T3=(train length S3+truck length S4)/(train speed V1- truck speed V2)",
		"3.计算超车时间T3 超车时间T3=(火车长度S3+货车长度S4)/(火车速度V1-货车速度V2)"},
		{"Answer: It took% d seconds for the train to catch up and leave",
		"答：火车追到到相离用了%d秒"},
		//变量表
		{"TunnelLengthS1","隧道长度S1"},
		{"BridgeLengthS2","桥长S2"},
		{"TunnelPassageTimeT1","过隧道时间T1"},
		{"BridgeCrossingTimeT2","过桥时间T2"},
		{"TruckLengthS4","货车长度S4"},
		{"TruckSpeedV2","货车速度V2"},
		{"TrainSpeedV1","火车速度V1"},
		{"TrainLengthS3","火车长度S3"},
		{"OvertakingTimeT3","超车时间T3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(隧道长度S1, 250);
	DefineLangVarInt(桥长S2, 210);
	DefineLangVarInt(过隧道时间T1, 25);
	DefineLangVarInt(过桥时间T2, 23);
	DefineLangVarInt(货车长度S4, 320);
	DefineLangVarInt(货车速度V2, 17);
	ColPrintf(PrintfCol::标题, Lang("P8例一 超车问题火车过桥"));
	ColPrintf(PrintfCol::标题, Lang("题目：火车过隧道，隧道长是250米用了25秒，过210米的桥用了23秒，它前面有一列货车长320米速度17米/秒，火车追到到相离用了多少秒?"));
	DefineLangVarInt(火车速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算火车速度V1 火车速度V1=(隧道长度S1-桥长S2)/(过隧道时间T1-过桥时间T2)"));
	火车速度V1 = (隧道长度S1 - 桥长S2) / (过隧道时间T1 - 过桥时间T2);
	火车速度V1.PrintProcessLog(1);
	DefineLangVarInt(火车长度S3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算火车长度S3 火车长度S3=(火车速度V1*过隧道时间T1)-隧道长度S1"));
	火车长度S3 = (火车速度V1 * 过隧道时间T1) - 隧道长度S1;
	火车长度S3.PrintProcessLog(2);
	DefineLangVarInt(超车时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算超车时间T3 超车时间T3=(火车长度S3+货车长度S4)/(火车速度V1-货车速度V2)"));
	超车时间T3 = (火车长度S3 + 货车长度S4) / (火车速度V1 - 货车速度V2);
	超车时间T3.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：火车追到到相离用了%d秒"), (int)超车时间T3);
}
void P8_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P8 Example 2 Overtaking Problem","P8例二 超车问题"},
		{"Title: There are two trains traveling in the same direction, the fast train has a speed of 33 meters per second and the slow train has a speed of 21\nmeters per second. If the front of the train is level for 20 seconds and then exceeds the slow train, and if the rear of the train is level for 25\nseconds and then exceeds the slow train, what is the length of the two trains? What is the time it takes for\nthe front of the two trains to overlap and the rear of the two trains to separate?",
		"题目：有两列火车同向而行，快车速度是33米/秒，慢车速度是21米/秒，如果车头平齐20秒后超过慢车，如果车尾平齐25秒后超过慢车，\n两车车长是多少，两车车头重叠到车尾相离的时间是多少?"},
		{"1. Calculate the length of the express train S1. The length of the express train S1 is equal to (express speed V1- local speed V2)\nmultiplied by the time it takes for the front of the train to be level with the local train T1",
		"1.计算快车车长S1 快车车长S1=(快车速度V1-慢车速度V2)*车头平齐超过慢车时间T1"},
		{"2. Calculate the length of the local train S2. The length of the local train S2 is equal to\n(express speed V1- local speed V2) * the time it takes for the rear of the train to be level\nbeyond the local train T2",
		"2.计算慢车车长S2 慢车车长S2=(快车速度V1-慢车速度V2)*车尾平齐超过慢车时间T2"},
		{"3. Calculate the time T3 for the overlap of the front and the separation of the rear of the vehicle. The time T3 for the overlap of\nthe front and the separation of the rear of the vehicle is calculated as (express train\nlength S1+local train length S2) divided by (express train speed V1+local train speed V2)",
		"3.计算车车头重叠到车尾相离的时间T3 车车头重叠到车尾相离的时间T3=(快车车长S1+慢车车长S2)/(快车速度V1+慢车速度V2)"},
		{"Answer: The time it takes for the front of the car to overlap and the rear to separate is% d seconds",
		"答：车车头重叠到车尾相离的时间是%d秒"},
		//变量表
		{"ExpressSpeedV1","快车速度V1"},
		{"SlowSpeedV2","慢车速度V2"},
		{"TheFrontOfTheCarIsLevelBeyondTheIdleTimeT1","车头平齐超过慢车时间T1"},
		{"TheTailOfTheCarIsLevelBeyondTheLdleTimeT2","车尾平齐超过慢车时间T2"},
		{"ExpressTrainConductorS1","快车车长S1"},
		{"SlowCarDriverS2","慢车车长S2"},
		{"TheTimeT3FromTheOverlapOfTheFrontOfTheCarToTheSeparationOfTheRearOfTheCar","车车头重叠到车尾相离的时间T3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(快车速度V1, 33);
	DefineLangVarInt(慢车速度V2, 21);
	DefineLangVarInt(车头平齐超过慢车时间T1, 20);
	DefineLangVarInt(车尾平齐超过慢车时间T2, 25);
	const char* pPic =
		"车头平齐\n"
		"         -------->\n"
		"----------------->\n"
		"|-----------------------------------------------------|\n"
		"车尾平齐\n"
		"-------->\n"
		"----------------->\n"
		"|-----------------------------------------------------|\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P8例二 超车问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：有两列火车同向而行，快车速度是33米/秒，慢车速度是21米/秒，如果车头平齐20秒后超过慢车，如果车尾平齐25秒后超过慢车，\n两车车长是多少，两车车头重叠到车尾相离的时间是多少?"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(快车车长S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算快车车长S1 快车车长S1=(快车速度V1-慢车速度V2)*车头平齐超过慢车时间T1"));
	快车车长S1 = (快车速度V1 - 慢车速度V2) * 车头平齐超过慢车时间T1;
	快车车长S1.PrintProcessLog(1);
	DefineLangVarInt(慢车车长S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算慢车车长S2 慢车车长S2=(快车速度V1-慢车速度V2)*车尾平齐超过慢车时间T2"));
	慢车车长S2 = (快车速度V1 - 慢车速度V2) * 车尾平齐超过慢车时间T2;
	慢车车长S2.PrintProcessLog(2);
	DefineLangVarInt(车车头重叠到车尾相离的时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算车车头重叠到车尾相离的时间T3 车车头重叠到车尾相离的时间T3=(快车车长S1+慢车车长S2)/(快车速度V1+慢车速度V2)"));
	车车头重叠到车尾相离的时间T3 = (快车车长S1 + 慢车车长S2) / (快车速度V1 + 慢车速度V2);
	车车头重叠到车尾相离的时间T3.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：车车头重叠到车尾相离的时间是%d秒"), (int)车车头重叠到车尾相离的时间T3);
}
void P8_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P8 Example 2 Overtaking Problem Encounter Problem","P8例二 超车问题相遇问题"},
		{"Title: A car with a length of 15 meters departs from point A at a speed of 5 meters per second. Point A departs from point A and point B\ndeparts from point B. The car catches up with point A for 6 seconds before leaving point A. After 30 seconds, the car encounters point B and leaves point\nB after 2 seconds. What is the distance between point A and point B?",
		"题目：一辆车长15米从A地出发速度是5米/秒，甲从A地出发，乙从B地出发，车追上甲6秒后离开了甲，30秒后车遇到乙，过了2秒后离开乙，甲乙相距多少米?"},
		{"1. Calculate the speed V1 of vehicle A, which is equal to (vehicle speed V2 * time T1 for vehicle to chase after vehicle A - vehicle length S1) divided by the time T1 for vehicle to chase after vehicle A",
		"1.计算甲速度V1 甲速度V1=(车速度V2*车追甲的时间T1-车长S1)/车追甲的时间T1"},
		{"2. Calculate the speed V3 of vehicle B=(vehicle length S1- vehicle speed V2 * vehicle error time T2)/vehicle error time T2",
		"2.计算乙速度V3 乙速度V3=(车长S1-车速度V2*车错乙的时间T2)/车错乙的时间T2"},
		{"3. Calculate the distance S2 between Party A and Party B, which is equal to (vehicle speed V2- vehicle speed V3) multiplied by (time T3 between Party A and Party B+time T2 when the vehicle misses Party B)",
		"3.计算甲乙相距路程S2 甲乙相距路程S2=(车速度V2-乙速度V3)*(甲乙相距时间T3+车错乙的时间T2)"},
		{"Answer: A and B are% d meters apart",
		"答：甲乙相距%f米"},
		//变量表
		{"VehicleSpeedV2","车速度V2"},
		{"TimeT1ForCarChaseAfterArmor","车追甲的时间T1"},
		{"CarCaptainS1","车长S1"},
		{"CarErrorB'sTimeT2","车错乙的时间T2"},
		{"TimeT3BetweenAAndB","甲乙相距时间T3"},
		{"ASpeedV1","甲速度V1"},
		{"BSpeedV3","乙速度V3"},
		{"DistanceS2BetweenAAndB","甲乙相距路程S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,车速度V2, 5);
	DefineLangVar(float,车追甲的时间T1, 6);
	DefineLangVar(float,车长S1, 15);
	DefineLangVar(float,车错乙的时间T2, 2);
	DefineLangVar(float,甲乙相距时间T3, 30);
	ColPrintf(PrintfCol::标题, Lang("P8例二 超车问题相遇问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一辆车长15米从A地出发速度是5米/秒，甲从A地出发，乙从B地出发，车追上甲6秒后离开了甲，30秒后车遇到乙，过了2秒后离开乙，甲乙相距多少米?"));
	DefineLangVar(float,甲速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算甲速度V1 甲速度V1=(车速度V2*车追甲的时间T1-车长S1)/车追甲的时间T1"));
	甲速度V1 = (车速度V2 * 车追甲的时间T1 - 车长S1) / 车追甲的时间T1;
	甲速度V1.PrintProcessLog(1);
	DefineLangVar(float,乙速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算乙速度V3 乙速度V3=(车长S1-车速度V2*车错乙的时间T2)/车错乙的时间T2"));
	乙速度V3 = (车长S1 - 车速度V2 * 车错乙的时间T2) / 车错乙的时间T2;
	乙速度V3.PrintProcessLog(2);
	DefineLangVar(float,甲乙相距路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲乙相距路程S2 甲乙相距路程S2=(车速度V2-乙速度V3)*(甲乙相距时间T3+车错乙的时间T2)"));
	甲乙相距路程S2 = (车速度V2 - 乙速度V3) * (甲乙相距时间T3 + 车错乙的时间T2);
	甲乙相距路程S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：甲乙相距%f米"), (float)甲乙相距路程S2);
}
void P8()
{
	P8_1();
	ColPrintf(PrintfCol::方法, "");
	P8_2();
	ColPrintf(PrintfCol::方法, "");
	P8_3();
	ColPrintf(PrintfCol::方法, "");
}
void P8_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P8();
	Lang.SetCurLanguage(LanguageLib::English);
	P8();
	ColPrintf(PrintfCol::方法, "");

}