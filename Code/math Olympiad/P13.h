#pragma once
void P13_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P13 Example Three: Flowing Ships","P13例三 流水行船"},
		{"Title: Ship B traveled for 2 hours along the water, covering 120 kilometers, and returned in 4 hours. Ship A traveled a distance along the water and returned in 3 hours. How many more hours did Ship A travel along the water than against it?",
		"题目：乙船顺水行了2小时，行了120千米，返回用了4小时，甲船顺水行了一段距离后，返回用了3小时，甲顺水行的时间比逆水行的时间多几小时?"},
		{"1. Calculate B's speed V1. B's speed V1=B's travel distance S1/B's time T1",
		"1.计算乙速度V1 乙速度V1=乙行的路程S1/乙所用的时间T1"},
		{"2. Calculate the reverse flow velocity V2 of B=the distance S1 of B row/the reverse flow time T2 of B",
		"2.计算乙逆流速度V2 乙逆流速度V2=乙行的路程S1/乙逆流时间T2"},
		{"3. Calculate the downstream speed V3 of B=the distance S1 of B/the downstream time T2 of B",
		"3.计算乙顺流速度V3 乙顺流速度V3=乙行的路程S1/乙顺流时间T2"},
		{"4. Calculate the water flow velocity V4. Water flow velocity V4=(downstream velocity V3- upstream velocity V2)/number of shared velocities N1",
		"4.计算水流速度V4 水流速度V4=(乙顺流速度V3-乙逆流速度V2)/共有的速度数量N1"},
		{"5. Calculate the downstream velocity V5 of A=the distance S1 of B/the downstream time T3 of A",
		"5.计算甲顺流速度V5 甲顺流速度V5=乙行的路程S1/甲顺流时间T3"},
		{"6. Calculate the upstream velocity of A V6=downstream velocity of A V5- water flow velocity V4- water flow velocity V4",
		"6.计算甲逆水速度V6 甲逆水速度V6=甲顺流速度V5-水流速度V4-水流速度V4"},
		{"7. Calculate the multi-purpose time T4. The multi-purpose time T4 is calculated as (the distance S1 of line B/the upstream speed V6 of line A) minus the downstream time T3 of line A",
		"7.计算多用时间T4 多用时间T4=(乙行的路程S1/甲逆水速度V6)-甲顺流时间T3"},
		//变量表
		{"TheTimeT1UsedByB","乙所用的时间T1"},
		{"RouteS1OfBankB","乙行的路程S1"},
		{"BCounterCurrentTimeT2","乙逆流时间T2"},
		{"BDownstreamTimeT2","乙顺流时间T2"},
		{"CommonSpeedQuantityN1","共有的速度数量N1"},
		{"BSpeedV1","乙速度V1"},
		{"BCounterCurrentVlocityV2","乙逆流速度V2"},
		{"BDownstreamSpeedV3","乙顺流速度V3"},
		{"WaterFlowVlocityV4","水流速度V4"},
		{"Jia'sDownstreamSpeedV5","甲顺流速度V5"},
		{"JiaReverseWaterSpeedV6","甲逆水速度V6"},
		{"SpendMoreTimeT4","多用时间T4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总距离S1, 180);
	DefineLangVarInt(暴雨前顺水时间T1, 10);
	DefineLangVarInt(暴雨前逆水时间T2, 15);
	DefineLangVarInt(共有的速度数量N1, 2);
}
void P13_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P13 Example 1: Floating Ship","P13例一 流水行船"},
		{"Title: Two docks are 352 kilometers apart. It takes 11 hours downstream and 16 hours upstream. What is the speed of the ship?",
		"题目：两个码头相距352千米，如果顺流而下需要11小时，逆流而上需要16小时，求船速度？"},
		{"1. Calculate the downstream ship speed V1, which is equal to the total distance S1 divided by the downstream time T1",
		"1.计算顺水船速V1 顺水船速V1=总路程S1/顺水时间T1"},
		{"2. Calculate the upstream ship speed V2, which is equal to the total distance S1 divided by the upstream time T2",
		"2.计算逆水船速V2 逆水船速V2=总路程S1/逆水时间T2"},
		{"3. Calculate the ship speed V3. Ship speed V3=(downstream ship speed V1+upstream ship speed V2)/number of shared speeds N1",
		"3.计算船速度V3 船速度V3=(顺水船速V1+逆水船速V2)/共有的速度数量N1"},
		//变量表
		{"TotalDistanceS1","总路程S1"},
		{"ShunshuiTimeT1","顺水时间T1"},
		{"ReverseWaterTimeT2","逆水时间T2"},
		{"CommonSpeedQuantityN1","共有的速度数量N1"},
		{"ShunshuiBoatSpeedV1","顺水船速V1"},
		{"ReverseCurrentShipSpeedV2","逆水船速V2"},
		{"ShipSpeedV3","船速度V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总路程S1, 352);
	DefineLangVarInt(顺水时间T1, 11);
	DefineLangVarInt(逆水时间T2, 16);
	DefineLangVarInt(共有的速度数量N1, 2);
	DefineLangVarInt(顺水船速V1, 0);
	ColPrintf(PrintfCol::标题, Lang("P13例一 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：两个码头相距352千米，如果顺流而下需要11小时，逆流而上需要16小时，求船速度？"));
	ColPrintf(PrintfCol::方法, Lang("1.计算顺水船速V1 顺水船速V1=总路程S1/顺水时间T1"));
	顺水船速V1 = 总路程S1 / 顺水时间T1;
	顺水船速V1.PrintProcessLog(1);
	DefineLangVarInt(逆水船速V2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算逆水船速V2 逆水船速V2=总路程S1/逆水时间T2"));
	逆水船速V2 = 总路程S1 / 逆水时间T2;
	逆水船速V2.PrintProcessLog(2);
	DefineLangVarInt(船速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算船速度V3 船速度V3=(顺水船速V1+逆水船速V2)/共有的速度数量N1"));
	船速度V3 = (顺水船速V1 + 逆水船速V2) / 共有的速度数量N1;
	船速度V3.PrintProcessLog(3);
}
void P13_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P13 Example 2: Floating Ship","P13例二 流水行船"},
		{"Topic: It takes 10 hours for a ship to go back and forth between 180 km wharves, and 15 hours for a ship to\ngo against the current. Because of the increase of rainstorm flow, it takes 9 hours for a ship to\ngo along the current, and how many hours for a ship to go against the current?",
		"题目:船往返于180千米码头之间，顺水需用10小时，逆水则用15小时，由于暴雨水流增加,此时顺水用时9小时，逆水用时多少小时?"},
		{"1. Calculate the downstream speed before rainstorm V1: downstream speed before rainstorm V1=total distance S1/downstream time before rainstorm T1",
		"1.计算暴雨前顺水速度V1 暴雨前顺水速度V1=总距离S1/暴雨前顺水时间T1"},
		{"2. Calculate the upstream velocity before rainstorm V2: upstream velocity before rainstorm V2=total distance S1/upstream time before rainstorm T2",
		"2.计算暴雨前逆水速度V2 暴雨前逆水速度V2=总距离S1/暴雨前逆水时间T2"},
		{"3. Calculated ship speed V3 Ship speed V3=(downstream speed before rainstorm V1+upstream speed before rainstorm V2)/number of common speeds N1",
		"3.计算船速度V3 船速度V3=(暴雨前顺水速度V1+暴雨前逆水速度V2)/共有的速度数量N1"},
		{"4. Calculate downstream velocity after rainstorm V4 downstream velocity before rainstorm V4=total distance S1/downstream time before rainstorm T3",
		"4.计算暴雨后顺水速度V4 暴雨后顺水速度V4=总距离S1/暴雨前顺水时间T1"},
		{"5. Calculate the flow speed after rainstorm V5 The flow speed after rainstorm V5=the downstream speed after rainstorm V4- the ship speed V3",
		"5.计算暴雨后水流速度V5 暴雨后水流速度V5=暴雨后顺水速度V4-船速度V3"},
		{"6. Calculate the backwater speed after rainstorm V6=vessel speed V3- flow speed after rainstorm V5 after rainstorm",
		"6.计算暴雨后逆水速度V6 暴雨后逆水速度V6=船速度V3-暴雨后水流速度V5"},
		{"7. Calculate the counter current time after rainstorm T4 The counter current time after rainstorm T4=total distance S1/counter current speed after rainstorm V6",
		"7.计算暴雨后逆水时间T4 暴雨后逆水时间T4=总距离S1/暴雨后逆水速度V6"},
		//变量表
		{"TotalDistanceS1","总距离S1"},
		{"FollowWaterTimeBeforeRainstormT1","暴雨前顺水时间T1"},
		{"HeadwaterTimeT2BeforeRainstorm","暴雨前逆水时间T2"},
		{"CommoSpeedQuantityN1","共有的速度数量N1"},
		{"FollowWaterTimeBeforeRainstormT3","暴雨前顺水时间T3"},
		{"DownstreamSpeedBeforeRainstormV1","暴雨前顺水速度V1"},
		{"HeadwaterVelocityBeforeRainstormV2","暴雨前逆水速度V2"},
		{"ShipSpeedV3","船速度V3"},
		{"DownstreamSpeedAfterRainstormV4","暴雨后顺水速度V4"},
		{"FlowVelocityAfterRainstormV5","暴雨后水流速度V5"},
		{"HeadwaterSpeedAfterRainstormV6","暴雨后逆水速度V6"},
		{"BackflowTimeAfterRainstormT4","暴雨后逆水时间T4"},
	};
	Lang.AddLanguageTable(
		Language
	);

	DefineLangVarInt(总距离S1, 180);
	DefineLangVarInt(暴雨前顺水时间T1, 10);
	DefineLangVarInt(暴雨前逆水时间T2, 15);
	DefineLangVarInt(共有的速度数量N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P13例二 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：两个码头相距352千米，如果顺流而下需要11小时，逆流而上需要16小时，求船速度？"));
	DefineLangVarInt(暴雨前顺水速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算暴雨前顺水速度V1 暴雨前顺水速度V1=总距离S1/暴雨前顺水时间T1"));
	暴雨前顺水速度V1 = 总距离S1 / 暴雨前顺水时间T1;
	暴雨前顺水速度V1.PrintProcessLog(1);
	DefineLangVarInt(暴雨前逆水速度V2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算暴雨前逆水速度V2 暴雨前逆水速度V2=总距离S1/暴雨前逆水时间T2"));
	暴雨前逆水速度V2 = 总距离S1 / 暴雨前逆水时间T2;
	暴雨前逆水速度V2.PrintProcessLog(2);
	DefineLangVarInt(船速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算船速度V3 船速度V3=(暴雨前顺水速度V1+暴雨前逆水速度V2)/共有的速度数量N1"));
	船速度V3 = (暴雨前顺水速度V1 + 暴雨前逆水速度V2) / 共有的速度数量N1;
	船速度V3.PrintProcessLog(3);
	DefineLangVarInt(暴雨后顺水速度V4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算暴雨后顺水速度V4 暴雨后顺水速度V4=总距离S1/暴雨前顺水时间T1"));
	暴雨后顺水速度V4 = 总距离S1 / 暴雨前顺水时间T1;
	暴雨后顺水速度V4.PrintProcessLog(5);
	DefineLangVarInt(暴雨后水流速度V5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算暴雨后水流速度V5 暴雨后水流速度V5=暴雨后顺水速度V4-船速度V3"));
	暴雨后水流速度V5 = 暴雨后顺水速度V4 - 船速度V3;
	暴雨后水流速度V5.PrintProcessLog(5);
	DefineLangVarInt(暴雨后逆水速度V6, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算暴雨后逆水速度V6 暴雨后逆水速度V6=船速度V3-暴雨后水流速度V5"));
	暴雨后逆水速度V6 = 船速度V3 - 暴雨后水流速度V5;
	暴雨后逆水速度V6.PrintProcessLog(6);
	DefineLangVarInt(暴雨后逆水时间T4, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算暴雨后逆水时间T4 暴雨后逆水时间T4=总距离S1/暴雨后逆水速度V6"));
	暴雨后逆水时间T4=总距离S1 / 暴雨后逆水速度V6;
	暴雨后逆水时间T4.PrintProcessLog(7);
}
void P13()
{
	P13_1();
	ColPrintf(PrintfCol::方法, "");
	P13_2();
	ColPrintf(PrintfCol::方法, "");
}
void P13_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P13();
	Lang.SetCurLanguage(LanguageLib::English);
	P13();
	ColPrintf(PrintfCol::方法, "");

}