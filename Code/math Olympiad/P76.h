#pragma once
void P76_1()
{
	LanguageLib::LanguageTableT Language = { 
		{"P76 Case 1 Travel Problem","P76 例一 行程问题"},
		{"Title: Two cars, A and B, depart from A and B respectively, traveling in opposite directions. It is known that there is a difference of 270 kilometers between the two places, with A traveling at a speed of 65 kilometers per hour and B traveling at a speed of 70 kilometers per hour. How long did the two cars meet?",
		"题目：甲乙两车分别从A，B地出发，相向而行，已知两地相差270千米，甲速度是65千米每小时，乙的速度是70千米每小时。多长时间两车相遇?"},
		{"1. Calculate the speed and V1 speed, where V1=speed of A V2+speed of B V3",
		"1.计算速度和V1 速度和V1=甲速度V2+乙速度V3"},
		{"2. Calculate the meeting time T1, which is equal to the total distance S1 divided by the speed and V1",
		"2.计算相遇时间T1 相遇时间T1=总路程S1/速度和V1"},
		//变量表
		{"JiaSpeedV2","甲速度V2"},
		{"YispeedV3","乙速度V3"},
		{"TotaldistanceS1","总路程S1"},
		{"SpeedandV1","速度和V1"},
		{"MeetingtimeT1","相遇时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(甲速度V2, 65);
	DefineLangVarInt(乙速度V3, 70);
	DefineLangVarInt(总路程S1, 270);
	ColPrintf(PrintfCol::标题, Lang("P76 例一 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙两车分别从A，B地出发，相向而行，已知两地相差270千米，甲速度是65千米每小时，乙的速度是70千米每小时。多长时间两车相遇?"));
	const char* pPic =
		"甲----------------------><------------------乙\n"
		"A----------------------270千米---------------B\n"
		;
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(速度和V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算速度和V1 速度和V1=甲速度V2+乙速度V3"));
	速度和V1 = 甲速度V2 + 乙速度V3;
	速度和V1.PrintProcessLog(1);
	DefineLangVarInt(相遇时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算相遇时间T1 相遇时间T1=总路程S1/速度和V1"));
	相遇时间T1 = 总路程S1 / 速度和V1;
	相遇时间T1.PrintProcessLog(2);
}
void P76_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case 2 Travel Problem","P76 例二 行程问题"},
		{"Title: AB are 400 kilometers apart. A travels from A to B at a speed of 60 kilometers. Two hours later, B travels from B to A at a speed of 80 kilometers. How long does it take for them to meet?",
		"题目：AB两地相距400千米，甲从A到B，速度是60千米，两小时后，乙从B到A，速度是80千米，多长时间相遇?"},
		{"1. Calculate the distance S1 of the A line in two hours. The distance S1 of the A line in two hours is equal to two hours T1 multiplied by the speed V1 of the A line",
		"1.计算两小时时路程甲行的路程S1 两小时时路程甲行的路程S1=两小时T1*甲速度V1"},
		{"2. Calculate the encounter distance S2. Encounter distance S2=total distance S3- travel time of two hours. Travel distance S1 of line A",
		"2.计算相遇路程S2 相遇路程S2=总路程S3-两小时时路程甲行的路程S1"},
		{"3. Calculate the speed and V2 speed, where V2=B speed V3+A speed V1",
		"3.计算速度和V2 速度和V2=乙速度V3+甲速度V1"},
		{"4. Calculate the meeting time T2, which is equal to the meeting distance S2 divided by the speed and V2",
		"4.计算相遇时间T2 相遇时间T2=相遇路程S2/速度和V2"},
		//变量表
		{"TwohourT1","两小时T1"},
		{"AspeedV1","甲速度V1"},
		{"TotaldistanceS3","总路程S3"},
		{"BspeedV3","乙速度V3"},
		{"Twohours'journeyfromrouteA,routeS1","两小时时路程甲行的路程S1"},
		{"EncounterjourneyS2","相遇路程S2"},
		{"SpeedandV2","速度和V2"},
		{"MeetingtimeT2","相遇时间T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(两小时T1, 2);
	DefineLangVarInt(甲速度V1, 60);
	DefineLangVarInt(总路程S3, 400);
	DefineLangVarInt(乙速度V3, 80);
	const char* pPic =
	    "乙没有走甲走的路程\n"
		"甲-------------->---------><------------------乙\n"
		"A----------------------400千米---------------B\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P76 例二 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：AB两地相距400千米，甲从A到B，速度是60千米，两小时后，乙从B到A，速度是80千米，多长时间相遇?"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(两小时时路程甲行的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算两小时时路程甲行的路程S1 两小时时路程甲行的路程S1=两小时T1*甲速度V1"));
	两小时时路程甲行的路程S1 = 两小时T1 * 甲速度V1;
	两小时时路程甲行的路程S1.PrintProcessLog(1);
	DefineLangVarInt(相遇路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算相遇路程S2 相遇路程S2=总路程S3-两小时时路程甲行的路程S1"));
	相遇路程S2 = 总路程S3 - 两小时时路程甲行的路程S1;
	相遇路程S2.PrintProcessLog(2);
	DefineLangVarInt(速度和V2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算速度和V2 速度和V2=乙速度V3+甲速度V1"));
	速度和V2 = 乙速度V3 + 甲速度V1;
	速度和V2.PrintProcessLog(2);
	DefineLangVarInt(相遇时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算相遇时间T2 相遇时间T2=相遇路程S2/速度和V2"));
	相遇时间T2 = 相遇路程S2 / 速度和V2;
	相遇时间T2.PrintProcessLog(4);
}
void P76_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case Three Trip Problem","P76 例三 行程问题"},
		{"Title: Da Mao and Er Mao are walking towards each other at a distance of 1000 kilometers. Da Mao travels at a speed of 120 meters per minute, while Er Mao travels at a speed of 80 meters. How many meters did a dog walk from Da Mao back and forth between the two until they met?",
		"题目：大毛和二毛相距1000千米相向而行，大毛每分钟行120米，二毛行80米，一只狗从大毛开始往返于两者之间，直到相遇，狗共走了多少米?"},
		{"1. Calculate the velocity of the second hair of the big hair and V1. The velocity of the second hair of the big hair and V1=the velocity of the big hair V2+the velocity of the second hair V3",
		"1.计算大毛二毛速度和V1 大毛二毛速度和V1=大毛速度V2+二毛速度V3"},
		{"2. Calculate the meeting time T1, which is equal to the total distance S1 divided by the speed of the second mile and V1",
		"2.计算相遇时间T1 相遇时间T1=总路程S1/大毛二毛速度和V1"},
		{"3. Calculate the distance traveled by the dog S2=Meeting time T1 * Dog speed V3",
		"3.计算狗走的路程S2 狗走的路程S2=相遇时间T1*狗速度V3"},
		//变量表
		{"BighairspeedV2","大毛速度V2"},
		{"SecondspeedV3","二毛速度V3"},
		{"TotaldistanceS1","总路程S1"},
		{"DogspeedV3","狗速度V3"},
		{"DaMaoErMaoSpeedandV1","大毛二毛速度和V1"},
		{"MeetingtimeT1","相遇时间T1"},
		{"TheJourneyoftheDogS2","狗走的路程S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(大毛速度V2, 120);
	DefineLangVarInt(二毛速度V3, 80);
	DefineLangVarInt(总路程S1, 1000);
	DefineLangVarInt(狗速度V3, 500);
	ColPrintf(PrintfCol::标题, Lang("P76 例三 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：AB两地相距400千米，甲从A到B，速度是60千米，两小时后，乙从B到A，速度是80千米，多长时间相遇?"));
	DefineLangVarInt(大毛二毛速度和V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算大毛二毛速度和V1 大毛二毛速度和V1=大毛速度V2+二毛速度V3"));
	大毛二毛速度和V1 = 大毛速度V2 + 二毛速度V3;
	大毛二毛速度和V1.PrintProcessLog(1);
	DefineLangVarInt(相遇时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算相遇时间T1 相遇时间T1=总路程S1/大毛二毛速度和V1"));
	相遇时间T1 = 总路程S1 / 大毛二毛速度和V1;
	相遇时间T1.PrintProcessLog(2);
	DefineLangVarInt(狗走的路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算狗走的路程S2 狗走的路程S2=相遇时间T1*狗速度V3"));
	狗走的路程S2 = 相遇时间T1 * 狗速度V3;
	狗走的路程S2.PrintProcessLog(3);
}
void P76_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case Four Travel Problem","P76 例四 行程问题"},
		{"Title: There are two types of cars in Beiwang Town and Nanwang Town: buses and minibuses. The speed of buses from Beiwang Town to Nanwang Town is 35 kilometers per hour, and the speed of minibuses from Nanwang Town to Beiwang Town is 40 kilometers per hour. They meet at a distance of 2.5 kilometers from the midpoint of the two towns. What is the total distance in kilometers",
		"题目：北旺镇和南旺镇的车有两种：大巴，中巴，大巴从北旺镇到南旺镇速度是35千米每小时，中巴从南旺镇到北旺镇速度是40千米每小时，他们离两地中点2.5千米的地方相遇，总路程是多少千米"},
		{"1. Calculate the distance S1 that the bus has walked more than the minibus, which is equal to the distance S2 from the midpoint multiplied by N1",
		"1.计算大巴比中巴多走路程S1 大巴比中巴多走路程S1=离中点距离S2*倍率N1"},
		{"2. Calculate the hourly speed difference V1=bus speed V2- bus speed V3",
		"2.计算每小时速度差V1 每小时速度差V1=大巴速度V2-中巴速度V3"},
		{"3. Calculate the speed and V2 speed, and V2=bus speed V2+bus speed V3",
		"3.计算速度和V2 速度和V2=大巴速度V2+中巴速度V3"},
		{"4. Calculate the total time T1, which is equal to the distance traveled by the bus compared to the minibus S1 divided by the speed difference V1 per hour",
		"4.计算总时间T1 总时间T1=大巴比中巴多走路程S1/每小时速度差V1"},
		{"5. Calculate the total distance S2=total time T1 * speed and V2",
		"5.计算总路程S2 总路程S2=总时间T1*速度和V2"},
		//变量表
		{"DistancefrommidpointS2","离中点距离S2"},
		{"MagnificationN1","倍率N1"},
		{"BusspeedV2","大巴速度V2"},
		{"ChinaPakistanspeedV3","中巴速度V3"},
		{"BuseshavemorewalkingdistanceS1thanminibuses","大巴比中巴多走路程S1"},
		{"HourlyspeeddifferenceV1","每小时速度差V1"},
		{"SpeedandV2","速度和V2"},
		{"TotaltimeT1","总时间T1"},
		{"TotaldistanceS2","总路程S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 离中点距离S2, 2.5);
	DefineLangVar(float, 倍率N1, 2);
	DefineLangVar(float, 大巴速度V2, 40);
	DefineLangVar(float, 中巴速度V3, 35);
	const char* pPic =
		"大巴-----------------------------><------------------中巴\n"
		"                   1000千米 2.5千米\n"
		"北旺镇-------------------|---|---|-----------------南旺镇\n"
		"                          中点"
		;
	ColPrintf(PrintfCol::标题, Lang("P76 例四 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：北旺镇和南旺镇的车有两种：大巴，中巴，大巴从北旺镇到南旺镇速度是35千米每小时，中巴从南旺镇到北旺镇速度是40千米每小时，他们离两地中点2.5千米的地方相遇，总路程是多少千米"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVar(float,大巴比中巴多走路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算大巴比中巴多走路程S1 大巴比中巴多走路程S1=离中点距离S2*倍率N1"));
	大巴比中巴多走路程S1 = 离中点距离S2 * 倍率N1;
	大巴比中巴多走路程S1.PrintProcessLog(1);
	DefineLangVar(float, 每小时速度差V1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每小时速度差V1 每小时速度差V1=大巴速度V2-中巴速度V3"));
	每小时速度差V1 = 大巴速度V2 - 中巴速度V3;
	每小时速度差V1.PrintProcessLog(2);
	DefineLangVar(float, 速度和V2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算速度和V2 速度和V2=大巴速度V2+中巴速度V3"));
	速度和V2 = 大巴速度V2 + 中巴速度V3;
	速度和V2.PrintProcessLog(3);
	DefineLangVar(float, 总时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算总时间T1 总时间T1=大巴比中巴多走路程S1/每小时速度差V1"));
	总时间T1 = 大巴比中巴多走路程S1 / 每小时速度差V1;
	总时间T1.PrintProcessLog(4);
	DefineLangVar(float, 总路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算总路程S2 总路程S2=总时间T1*速度和V2"));
	总路程S2 = 总时间T1 * 速度和V2;
	总路程S2.PrintProcessLog(5);
}
void P76_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case 5 Travel Problem","P76 例五 行程问题"},
		{"Title: A lion chasing a sheep, the sheep is 10 meters ahead, the lion's speed is 10, and the sheep's speed is 8. How many seconds will it take to catch up with the sheep?",
		"题目：一只狮子追赶一只羊，羊在正前方10米位置，狮子的速度是10，羊的速度是8，多少秒后追上羊?"},
		{"1. Calculate the speed difference V1 and peed difference V1=Lion speed V2-Sheep speed V3",
		"1.计算速度差V1 速度差V1=狮子速度V2-羊速度V3"},
		{"2. Calculate the time of catching up T1 and time of catching up T1=catching distance S1/speed difference V1",
		"2.计算追及时间T1 追及时间T1=追及路程S1/速度差V1"},
		//变量表
		{"LionSpeedV2","狮子速度V2"},
		{"SheepspeedV3","羊速度V3"},
		{"ChasingthedistanceS1","追及路程S1"},
		{"SpeeddifferenceV1","速度差V1"},
		{"ChasingTimeT1","追及时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(狮子速度V2, 10);
	DefineLangVarInt(羊速度V3, 8);
	DefineLangVarInt(追及路程S1, 10);
	ColPrintf(PrintfCol::标题, Lang("P76 例五 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一只狮子追赶一只羊，羊在正前方10米位置，狮子的速度是10，羊的速度是8，多少秒后追上羊?"));
	const char* pPic =
		"狮子|-----|----------------->\n"
		"     10米 羊---------------------->\n"
		"A----------------------270千米---------------B\n"
		;
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(速度差V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算速度差V1 速度差V1=狮子速度V2-羊速度V3"));
	速度差V1 = 狮子速度V2 - 羊速度V3;
	速度差V1.PrintProcessLog(1);
	DefineLangVarInt(追及时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算追及时间T1 追及时间T1=追及路程S1/速度差V1"));
	追及时间T1 = 追及路程S1 / 速度差V1;
	追及时间T1.PrintProcessLog(2);
}
void P76_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case Six Travel Problem","P76 例六 行程问题"},
		{"Question: Two cars are traveling to the airport at speeds of 30 kilometers per hour and 45 kilometers per hour respectively. The first car takes 30 minutes to travel before the second car leaves. Both cars arrive at the same time. What is the total distance?",
		"题目：两辆车分别以30千米和45千米每小时的速度去飞机场，第一辆车走30分钟后，第二辆车才走，两辆车同时到达，问总路程?"},
		{"1. Convert the time difference T1 of the second vehicle to 0.5 hours in units of 30 minutes",
		"1.第二辆时间差T1转换为以小时为单位 30分钟=0.5小时"},
		{"2. Calculate the following distance S1. The following distance S1 is equal to the time difference T1 of the second vehicle multiplied by the speed V1 of the first vehicle",
		"2.计算追及路程S1 追及路程S1=第二辆时间差T1*第一辆车速度V1"},
		{"3. Calculate the speed difference V3, which is equal to the speed of the first vehicle V1 minus the speed of the second vehicle V2",
		"3.计算速度差V3 速度差V3=第一辆车速度V1-第二辆车速度V2"},
		{"4. Calculate the total distance S2. The total distance S2 is equal to the following distance S1 divided by the speed difference V3",
		"4.计算总路程S2 总路程S2=追及路程S1/速度差V3"},
		//变量表
		{"SecondvehicletimedifferenceT1","第二辆时间差T1"},
		{"FirstvehiclespeedV1","第一辆车速度V1"},
		{"SecondvehiclespeedV2","第二辆车速度V2"},
		{"ChasingthedistanceS1","追及路程S1"},
		{"SpeeddifferenceV3","速度差V3"},
		{"TotaldistanceS2","总路程S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,第二辆时间差T1, 30);
	DefineLangVar(float, 第一辆车速度V1, 45);
	DefineLangVar(float, 第二辆车速度V2, 30);
	const char* pPic =
		"第一辆车|------------------|--------------------------------------->\n"
		"         第一辆车行30分钟  第二辆车-------------------------------->\n"
		"A------------------------------------------------------------------飞机厂\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P76 例五 行程问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一只狮子追赶一只羊，羊在正前方10米位置，狮子的速度是10，羊的速度是8，多少秒后追上羊?"));
	ColPrintf(PrintfCol::标题, pPic);
	ColPrintf(PrintfCol::方法, Lang("1.第二辆时间差T1转换为以小时为单位 30分钟=0.5小时"));
	第二辆时间差T1.Var = 0.5;
	DefineLangVar(float, 追及路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算追及路程S1 追及路程S1=第二辆时间差T1*第一辆车速度V1"));
	追及路程S1 = 第二辆时间差T1 * 第一辆车速度V1;
	追及路程S1.PrintProcessLog(2);
	DefineLangVar(float, 速度差V3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算速度差V3 速度差V3=第一辆车速度V1-第二辆车速度V2"));
	速度差V3 = 第一辆车速度V1 - 第二辆车速度V2;
	速度差V3.PrintProcessLog(3);
	DefineLangVar(float, 总路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算总路程S2 总路程S2=追及路程S1/速度差V3"));
	总路程S2 = 追及路程S1 / 速度差V3;
	总路程S2.PrintProcessLog(4);
}
void P76()
{
	P76_1();
	ColPrintf(PrintfCol::方法, "");
	P76_2();
	ColPrintf(PrintfCol::方法, "");
	P76_3();
	ColPrintf(PrintfCol::方法, "");
	P76_4();
	ColPrintf(PrintfCol::方法, "");
	P76_5();
	ColPrintf(PrintfCol::方法, "");
	P76_6();
	ColPrintf(PrintfCol::方法, "");
}
void P76_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P76();
	Lang.SetCurLanguage(LanguageLib::English);
	P76();
	ColPrintf(PrintfCol::方法, "");

}