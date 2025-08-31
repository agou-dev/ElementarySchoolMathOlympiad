#pragma once

void P14_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P14 Example 4: Floating Ship","P14例四 流水行船"},
		{"Title: Two ports are 560 kilometers apart, and it takes 105 hours for Ship A to make a round trip. Ship B's static water speed is twice that of Ship A. How many hours does it take for Ship B to make a round trip?",
		"题目：两港相距560千米，甲船往返一次是105小时，其中逆水用的时间多顺水速度的35小时，乙船的静水速度是甲静水速度的二倍，乙船往返一次需要多少小时?"},
		{"1. Calculate the reverse water time T1 of A=(round-trip time T2+round-trip time difference T3 of A)/multiplier N1",
		"1.计算甲逆水时间T1  甲逆水时间T1=(甲往返时间T2+甲往返时间差T3)/倍率N1"},
		{"2. Calculate the forward time T4 of A=the reverse time T1 of A - the round-trip time difference T3 of A",
		"2.计算甲顺水时间T4 甲顺水时间T4=甲逆水时间T1-甲往返时间差T3"},
		{"3. Calculate the upstream velocity V1 of A=total distance S1/upstream time T1",
		"3.计算甲逆水速度V1 甲逆水速度V1=总距离S1/甲逆水时间T1"},
		{"4. Calculate the downstream speed V2 of A=total distance S1/downstream time T4",
		"4.计算甲顺水速度V2 甲顺水速度V2=总距离S1/甲顺水时间T4"},
		{"5. Calculate the static water speed V3 of the ship A=(the reverse water speed V1 of the ship A+the forward water speed V2 of the ship A)/multiplier N1",
		"5.计算甲静水船速V3 甲静水船速V3=(甲逆水速度V1+甲顺水速度V2)/倍率N1"},
		{"6. Calculate the water velocity V4, which is equal to the downstream velocity V2 of the vessel and the static water velocity V3 of the vessel",
		"6.计算水速V4 水速V4=甲顺水速度V2-甲静水船速V3"},
		{"7. Calculate B's static water ship speed V5=A's static water ship speed V3 * multiplier N1",
		"7.计算乙静水船速V5 乙静水船速V5=甲静水船速V3*倍率N1"},
		{"8. Calculate the downstream speed V6 of B=the static water ship speed V5+water speed V4 of B",
		"8.计算乙顺水速度V6 乙顺水速度V6=乙静水船速V5+水速V4"},
		{"9. Calculate B's upstream velocity V7=B's static water ship speed V5- water speed V4",
		"9.计算乙逆水速度V7 乙逆水速度V7=乙静水船速V5-水速V4"},
		{"10. Calculate the round-trip time T5 for B=(total distance S1/B upstream speed V7)+(total distance S1/B downstream speed V6)",
		"10.计算乙往返时间T5 乙往返时间T5=(总距离S1/乙逆水速度V7)+(总距离S1/乙顺水速度V6)"},
		//变量表
		{"RoundTripTimeT2","甲往返时间T2"},
		{"RoundTripTimeDifferenceT3","甲往返时间差T3"},
		{"MagnificationN1","倍率N1"},
		{"TotalDistanceS1","总距离S1"},
		{"Jia'sReverseWaterTimeT1","甲逆水时间T1"},
		{"JiaShunshuiTimeT4","甲顺水时间T4"},
		{"Jia'sUpstreamVelocityV1","甲逆水速度V1"},
		{"JiaShunshuiSpeedV2","甲顺水速度V2"},
		{"JiaJingshuiShipSpeedV3","甲静水船速V3"},
		{"WaterSpeedV4","水速V4"},
		{"BStaticWaterShipSpeedV5","乙静水船速V5"},
		{"YiShunshuiSpeedV6","乙顺水速度V6"},
		{"ReverseWaterVelocityV7","乙逆水速度V7"},
		{"RoundTripTimeT5","乙往返时间T5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(甲往返时间T2, 105);
	DefineLangVarInt(甲往返时间差T3, 35);
	DefineLangVarInt(倍率N1, 2);
	DefineLangVarInt(总距离S1, 560);
	ColPrintf(PrintfCol::标题, Lang("P14例四 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：两港相距560千米，甲船往返一次是105小时，其中逆水用的时间多顺水速度的35小时，乙船的静水速度是甲静水速度的二倍，乙船往返一次需要多少小时?"));
	DefineLangVarInt(甲逆水时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算甲逆水时间T1  甲逆水时间T1=(甲往返时间T2+甲往返时间差T3)/倍率N1"));
	甲逆水时间T1 = (甲往返时间T2 + 甲往返时间差T3) / 倍率N1;
	甲逆水时间T1.PrintProcessLog(1);
	DefineLangVarInt(甲顺水时间T4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算甲顺水时间T4 甲顺水时间T4=甲逆水时间T1-甲往返时间差T3"));
	甲顺水时间T4 = 甲逆水时间T1 - 甲往返时间差T3;
	甲顺水时间T4.PrintProcessLog(2);
	DefineLangVarInt(甲逆水速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲逆水速度V1 甲逆水速度V1=总距离S1/甲逆水时间T1"));
	甲逆水速度V1 = 总距离S1 / 甲逆水时间T1;
	甲逆水速度V1.PrintProcessLog(3);
	DefineLangVarInt(甲顺水速度V2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算甲顺水速度V2 甲顺水速度V2=总距离S1/甲顺水时间T4"));
	甲顺水速度V2 = 总距离S1 / 甲顺水时间T4;
	甲顺水速度V2.PrintProcessLog(4);
	DefineLangVarInt(甲静水船速V3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算甲静水船速V3 甲静水船速V3=(甲逆水速度V1+甲顺水速度V2)/倍率N1"));
	甲静水船速V3 = (甲逆水速度V1 + 甲顺水速度V2) / 倍率N1;
	甲静水船速V3.PrintProcessLog(5);
	DefineLangVarInt(水速V4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算水速V4 水速V4=甲顺水速度V2-甲静水船速V3"));
	水速V4 = 甲顺水速度V2 - 甲静水船速V3;
	水速V4.PrintProcessLog(6);
	DefineLangVarInt(乙静水船速V5, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算乙静水船速V5 乙静水船速V5=甲静水船速V3*倍率N1"));
	乙静水船速V5 = 甲静水船速V3 * 倍率N1;
	乙静水船速V5.PrintProcessLog(7);
	DefineLangVarInt(乙顺水速度V6, 0);
	ColPrintf(PrintfCol::方法, Lang("8.计算乙顺水速度V6 乙顺水速度V6=乙静水船速V5+水速V4"));
	乙顺水速度V6 = 乙静水船速V5 + 水速V4;
	乙顺水速度V6.PrintProcessLog(8);
	DefineLangVarInt(乙逆水速度V7, 0);
	ColPrintf(PrintfCol::方法, Lang("9.计算乙逆水速度V7 乙逆水速度V7=乙静水船速V5-水速V4"));
	乙逆水速度V7 = 乙静水船速V5 - 水速V4;
	乙逆水速度V7.PrintProcessLog(9);
	DefineLangVarInt(乙往返时间T5, 0);
	ColPrintf(PrintfCol::方法, Lang("10.计算乙往返时间T5 乙往返时间T5=(总距离S1/乙逆水速度V7)+(总距离S1/乙顺水速度V6)"));
	乙往返时间T5 = (总距离S1 / 乙逆水速度V7) + (总距离S1 / 乙顺水速度V6);
	乙往返时间T5.PrintProcessLog(10);
}
void P14_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P14 Example 5: Floating Ship","P14例五 流水行船"},
		{"Title: Two docks are 220 kilometers long, and ships A and B are traveling in opposite directions. If they meet after traveling\nin opposite directions for 5 hours, and if they catch up with each other after traveling in the same\ndirection for 55 hours, calculate the static water velocity of the two ships.",
		"题目：两码头长220千米，甲乙两船分别相向而行，如果相向而行5小时后相遇，如果同向而行55小时后甲追上乙，求两船静水速度。"},
		{"1. Calculate static water velocity and V1 static water velocity and V1=total distance S1/time of encounter in opposite directions T1",
		"1.计算静水速度和V1 静水速度和V1=总距离S1/相向而行相遇时间T1"},
		{"2. Calculate the static water velocity difference V2, which is equal to the total distance S1 divided by the time T2 when traveling in the same direction and encountering each other",
		"2.计算静水速度差V2 静水速度差V2=总距离S1/同向而行相遇时间T2"},
		{"3. Calculate the static water velocity V3 of A=(static water velocity and V1+static water velocity difference V2)/multiplier N1",
		"3.计算甲静水速度V3 甲静水速度V3=(静水速度和V1+静水速度差V2)/倍率N1"},
		{"4. Calculate the static water velocity V4 of B and the static water velocity V4 of A=(static water velocity and V1- static water velocity difference V2)/multiplier N1",
		"4.计算乙静水速度V4 甲静水速度V4=(静水速度和V1-静水速度差V2)/倍率N1"},
		//变量表
		{"TotalDistanceS1","总距离S1"},
		{"MeetingTimeT2InTheSameDirection","同向而行相遇时间T2"},
		{"MeetingTimeT1InOppositeDirection","相向而行相遇时间T1"},
		{"MagnificationN1","倍率N1"},
		{"StaticWaterVelocityAndV1","静水速度和V1"},
		{"StaticWaterVelocityDifferenceV2","静水速度差V2"},
		{"JiaStaticWaterVelocityV3","甲静水速度V3"},
		{"BStaticWaterVelocityV4","乙静水速度V4"},
		{"JiaStaticWaterVelocityV4","甲静水速度V4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总距离S1, 220);
	DefineLangVarInt(同向而行相遇时间T2, 55);
	DefineLangVarInt(相向而行相遇时间T1, 5);
	DefineLangVarInt(倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P14例五 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：两码头长220千米，甲乙两船分别相向而行，如果相向而行5小时后相遇，如果同向而行55小时后甲追上乙，求两船静水速度。"));
	DefineLangVarInt(静水速度和V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算静水速度和V1 静水速度和V1=总距离S1/相向而行相遇时间T1"));
	静水速度和V1 = 总距离S1 / 相向而行相遇时间T1;
	静水速度和V1.PrintProcessLog(1);
	DefineLangVarInt(静水速度差V2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算静水速度差V2 静水速度差V2=总距离S1/同向而行相遇时间T2"));
	静水速度差V2 = 总距离S1 / 同向而行相遇时间T2;
	静水速度差V2.PrintProcessLog(2);
	DefineLangVarInt(甲静水速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲静水速度V3 甲静水速度V3=(静水速度和V1+静水速度差V2)/倍率N1"));
	甲静水速度V3 = (静水速度和V1 + 静水速度差V2) / 倍率N1;
	甲静水速度V3.PrintProcessLog(3);
	DefineLangVarInt(甲静水速度V4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算乙静水速度V4 甲静水速度V4=(静水速度和V1-静水速度差V2)/倍率N1"));
	甲静水速度V4 = (静水速度和V1 - 静水速度差V2) / 倍率N1;
	甲静水速度V4.PrintProcessLog(4);

}
void P14_3()//flo
{
	LanguageLib::LanguageTableT Language = {
		{"P14 Example six: Flowing Ships","P14例六 流水行船"},
		{"Title: Ship A and the water flow tester move upstream and downstream, while Ship B moves upstream and downstream. After 7.2 hours, the tester\nmeets Ship B. It is known that Ship A is 31.25 kilometers away from the tester after 2.5 hours,\nand the static water velocities of Ship A and Ship B are equal. Calculate the distance between the two banks",
		"题目：甲船和水流测试仪从上游顺水到下游，同时乙船逆水从下游到上游，7.2小时后测试仪与乙相遇，已知甲2.5小时后与测试仪相距31.25千米，甲乙静水速度相等，求两岸距离"},
		{"1. Calculate the static water velocity V1 of A=distance S1 between A and the tester/time T1 corresponding to the distance between A and the tester",
		"1.计算甲的静水速度V1 甲的静水速度V1=甲与测试仪相距路程S1/甲与测试仪相距路程对应的时间T1"},
		{"2. Calculate the distance between the two sides S2. The distance between the two sides S2 is equal to the static water velocity V1 of A multiplied by the time T2 when B meets",
		"2.计算两岸距离S2 两岸距离S2=甲的静水速度V1*乙相遇时间T2"},
		//变量表
		{"TheDistanceBetweenAAndTheTesterIsS1","甲与测试仪相距路程S1"},
		{"TheTimeT1CorrespondingToTheDistanceBetweenAAndThe Tester","甲与测试仪相距路程对应的时间T1"},
		{"MeetingtimeT2","乙相遇时间T2"},
		{"TheStaticWaterVelocityV1OfA","甲的静水速度V1"},
		{"DistanceBetweenTheTwoSidesS2","两岸距离S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P14例六 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲船和水流测试仪从上游顺水到下游，同时乙船逆水从下游到上游，7.2小时后测试仪与乙相遇，已知甲2.5小时后与测试仪相距31.25千米，甲乙静水速度相等，求两岸距离"));
	DefineLangVar(float, 甲与测试仪相距路程S1, 105);
	DefineLangVar(float, 甲与测试仪相距路程对应的时间T1, 3);
	DefineLangVar(float, 乙相遇时间T2, 2.5);
	DefineLangVar(float, 甲的静水速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算甲的静水速度V1 甲的静水速度V1=甲与测试仪相距路程S1/甲与测试仪相距路程对应的时间T1"));
	甲的静水速度V1 = 甲与测试仪相距路程S1 / 甲与测试仪相距路程对应的时间T1;
	甲的静水速度V1.PrintProcessLog(1);
	DefineLangVar(float, 两岸距离S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算两岸距离S2 两岸距离S2=甲的静水速度V1*乙相遇时间T2"));
	两岸距离S2 = 甲的静水速度V1 * 乙相遇时间T2;
	两岸距离S2.PrintProcessLog(2);

}
void P14()
{
	P14_1();
	ColPrintf(PrintfCol::方法, "");
	P14_2();
	ColPrintf(PrintfCol::方法, "");
	P14_3();
	ColPrintf(PrintfCol::方法, "");
}
void P14_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P14();
	Lang.SetCurLanguage(LanguageLib::English);
	P14();
	ColPrintf(PrintfCol::方法, "");

}