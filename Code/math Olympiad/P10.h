#pragma once
void P10_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P10 Example 1: Follow up on Issues","P10例一 追及问题"},
		{"Title: On a highway, car A is traveling at a speed of 90000 meters per hour, followed by car B chasing car A at a speed of 108000 meters per hour. Car B's\nbrakes fail and it rushes forward, sounding a warning horn for 5 seconds before colliding\nwith car A. How many meters are the two cars apart when car B honks its horn?",
		"题目：一条公路，A汽车速度是90000米/小时，后面又有B汽车追A汽车，速度是108000米/小时，B汽车刹车失灵向前冲去并鸣笛预警5秒后撞到A汽车，在B汽车鸣笛时两车相距多少米?"},
		{"1. Calculate the speed difference V1. Speed difference V1=B, car speed V2-A, car speed V3",
		"1.计算速度差V1 速度差V1=B汽车速度V2-A汽车速度V3"},
		{"2. Calculate the distance S1 after five hours. S1=speed difference V1 * horn time T1",
		"2.计算五小时后行的路程S1 五小时后行的路程S1=速度差V1*鸣笛时间T1"},
		{"3. Calculate the distance between two vehicles S2, which is equal to the distance S1 after five hours divided by the number of seconds N1 in one hour",
		"3.计算两车相距S2 两车相距S2=五小时后行的路程S1/一小时秒数N1"},
		{"Answer: When car B honks its horn, the two cars are% d meters apart",
		"答：在B汽车鸣笛时两车相距%d米"},
		//变量表
		{"BCarSpeedV2","B汽车速度V2"},
		{"ACarSpeedV3","A汽车速度V3"},
		{"HornTimeT1","鸣笛时间T1"},
		{"OneHourSecondsN1","一小时秒数N1"},
		{"SpeedDifferenceV1","速度差V1"},
		{"FiveHourJourneyS1","五小时后行的路程S1"},
		{"TheDistanceBetweenTheTwoCarsIsS2","两车相距S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(B汽车速度V2, 108000);
	DefineLangVarInt(A汽车速度V3, 90000);
	DefineLangVarInt(鸣笛时间T1, 5);
	DefineLangVarInt(一小时秒数N1, 3600);
	ColPrintf(PrintfCol::标题, Lang("P10例一 追及问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一条公路，A汽车速度是90000米/小时，后面又有B汽车追A汽车，速度是108000米/小时，B汽车刹车失灵向前冲去并鸣笛预警5秒后撞到A汽车，在B汽车鸣笛时两车相距多少米?"));
	DefineLangVarInt(速度差V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算速度差V1 速度差V1=B汽车速度V2-A汽车速度V3"));
	速度差V1 = B汽车速度V2 - A汽车速度V3;
	速度差V1.PrintProcessLog(1);
	DefineLangVarInt(五小时后行的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算五小时后行的路程S1 五小时后行的路程S1=速度差V1*鸣笛时间T1"));
	五小时后行的路程S1 = 速度差V1 * 鸣笛时间T1;
	五小时后行的路程S1.PrintProcessLog(2);
	DefineLangVarInt(两车相距S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算两车相距S2 两车相距S2=五小时后行的路程S1/一小时秒数N1"));
	两车相距S2 = 五小时后行的路程S1 / 一小时秒数N1;
	两车相距S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：在B汽车鸣笛时两车相距%d米"), (int)两车相距S2);
}
void P10_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P10 Example 2: Follow up on Issues","P10例二 追及问题"},
		{"Title: A and B in a 100 meter race, A runs from the starting point, B runs 8 meters behind A, and A still has 12\nmeters to reach the finish line. B catches up with A, but when B\nreaches the finish line, how much further does A have to reach the finish line?",
		"题目：甲乙100米赛跑，甲从起点跑，乙在甲后面8米跑，甲还有12米到终点时，乙追上甲，乙跑到终点时甲还有多远跑到终点？"},
		{"1. Calculate the running distance S1 when B catches up with A, where S1 equals the distance between the track and the distance S2 when B catches up with A",
		"1.计算乙追到甲时甲跑路程S1 乙追到甲时甲跑路程S1=赛道距离S2-乙追到甲时离的距离S3"},
		{"2. Calculate the distance traveled by B when chasing A, S2. The distance traveled by B when chasing A, S2=the\ndistance traveled by A when chasing B, S1+ the additional distance traveled by B compared to A, S3",
		"2.计算乙追到甲时乙跑路程S4 乙追到甲时乙跑路程S4=乙追到甲时甲跑路程S1+乙比甲多行路程S5"},
		{"3. Calculate the distance traveled by B together S4=the distance traveled by B over A S5+the track distance S2",
		"3.计算乙共走的路程S4 乙共走的路程S4=乙比甲多行路程S5+赛道距离S2"},
		{"4. Calculate the distance S6 that A runs when B reaches the finish line. The distance S6\nthat A runs when B reaches the finish line is equal to (the distance S4 that B travels together/the distance S4 that B runs when B\nchases after A) * the distance S1 that A runs when B chases after A",
		"4.计算乙到终点时甲跑距离S6 乙到终点时甲跑距离S6=(乙共走的路程S4/乙追到甲时乙跑路程S4)*乙追到甲时甲跑路程S1"},
		{"5. Calculate the distance between point A and the finish line when point B reaches the finish line. S7=track distance\nS2- distance between point A and the finish line when point B reaches the finish line. S6",
		"5.计算乙到终点时甲离终点距离S7 乙到终点时甲离终点距离S7=赛道距离S2-乙到终点时甲跑距离S6"},
		{"Answer: When B reaches the finish line, A still has% f meters left to reach the finish line",
		"答：乙跑到终点时甲还有%f米跑到终点"},
		//变量表
		{"TrackDistanceS2","赛道距离S2"},
		{"TheDistanceS3FromBChasingA","乙追到甲时离的距离S3"},
		{"AIsBetterThanBMultiRouteS5","乙比甲多行路程S5"},
		{"WhenBChasesAARunsDistanceS1","乙追到甲时甲跑路程S1"},
		{"WhenBChasesABRunsDistanceS4","乙追到甲时乙跑路程S4"},
		{"TheJourneySharedByPartyBIsS4","乙共走的路程S4"},
		{"WhenBReachesTheFinishLineARunsADistanceOfS6","乙到终点时甲跑距离S6"},
		{"WhenBReachesTheFinishLineAIsAtADistanceOfS7FromTheFinishLine","乙到终点时甲离终点距离S7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,赛道距离S2, 100);
	DefineLangVar(float,乙追到甲时离的距离S3, 12);
	DefineLangVar(float,乙比甲多行路程S5, 8);
	ColPrintf(PrintfCol::标题, Lang("P10例二 追及问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙100米赛跑，甲从起点跑，乙在甲后面8米跑，甲还有12米到终点时，乙追上甲，乙跑到终点时甲还有多远跑到终点？"));
	DefineLangVar(float,乙追到甲时甲跑路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算乙追到甲时甲跑路程S1 乙追到甲时甲跑路程S1=赛道距离S2-乙追到甲时离的距离S3"));
	乙追到甲时甲跑路程S1 = 赛道距离S2 - 乙追到甲时离的距离S3;
	乙追到甲时甲跑路程S1.PrintProcessLog(1);
	DefineLangVar(float, 乙追到甲时乙跑路程S4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算乙追到甲时乙跑路程S4 乙追到甲时乙跑路程S4=乙追到甲时甲跑路程S1+乙比甲多行路程S5"));
	乙追到甲时乙跑路程S4 = 乙追到甲时甲跑路程S1 + 乙比甲多行路程S5;
	乙追到甲时乙跑路程S4.PrintProcessLog(2);
	DefineLangVar(float, 乙共走的路程S4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算乙共走的路程S4 乙共走的路程S4=乙比甲多行路程S5+赛道距离S2"));
	乙共走的路程S4 = 乙比甲多行路程S5 + 赛道距离S2;
	乙共走的路程S4.PrintProcessLog(3);
	DefineLangVar(float, 乙到终点时甲跑距离S6, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算乙到终点时甲跑距离S6 乙到终点时甲跑距离S6=(乙共走的路程S4/乙追到甲时乙跑路程S4)*乙追到甲时甲跑路程S1"));
	乙到终点时甲跑距离S6 = (乙共走的路程S4 / 乙追到甲时乙跑路程S4) * 乙追到甲时甲跑路程S1;
	乙到终点时甲跑距离S6.PrintProcessLog(4);
	DefineLangVar(float, 乙到终点时甲离终点距离S7, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算乙到终点时甲离终点距离S7 乙到终点时甲离终点距离S7=赛道距离S2-乙到终点时甲跑距离S6"));
	乙到终点时甲离终点距离S7 = 赛道距离S2 - 乙到终点时甲跑距离S6;
	乙到终点时甲离终点距离S7.PrintProcessLog(5);
	ColPrintf(PrintfCol::结果, Lang("答：乙跑到终点时甲还有%f米跑到终点"), (float)乙到终点时甲离终点距离S7);
}
void P10()
{
	P10_1();
	ColPrintf(PrintfCol::方法, "");
	P10_2();
	ColPrintf(PrintfCol::方法, "");
	/*P3_3();
	ColPrintf(PrintfCol::方法, "");*/
}
void P10_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P10();
	Lang.SetCurLanguage(LanguageLib::English);
	P10();
	ColPrintf(PrintfCol::方法, "");

}