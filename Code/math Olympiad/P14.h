#pragma once

void P14_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P14 Example 4: Floating Ship","P14���� ��ˮ�д�"},
		{"Title: Two ports are 560 kilometers apart, and it takes 105 hours for Ship A to make a round trip. Ship B's static water speed is twice that of Ship A. How many hours does it take for Ship B to make a round trip?",
		"��Ŀ���������560ǧ�ף��״�����һ����105Сʱ��������ˮ�õ�ʱ���˳ˮ�ٶȵ�35Сʱ���Ҵ��ľ�ˮ�ٶ��Ǽ׾�ˮ�ٶȵĶ������Ҵ�����һ����Ҫ����Сʱ?"},
		{"1. Calculate the reverse water time T1 of A=(round-trip time T2+round-trip time difference T3 of A)/multiplier N1",
		"1.�������ˮʱ��T1  ����ˮʱ��T1=(������ʱ��T2+������ʱ���T3)/����N1"},
		{"2. Calculate the forward time T4 of A=the reverse time T1 of A - the round-trip time difference T3 of A",
		"2.�����˳ˮʱ��T4 ��˳ˮʱ��T4=����ˮʱ��T1-������ʱ���T3"},
		{"3. Calculate the upstream velocity V1 of A=total distance S1/upstream time T1",
		"3.�������ˮ�ٶ�V1 ����ˮ�ٶ�V1=�ܾ���S1/����ˮʱ��T1"},
		{"4. Calculate the downstream speed V2 of A=total distance S1/downstream time T4",
		"4.�����˳ˮ�ٶ�V2 ��˳ˮ�ٶ�V2=�ܾ���S1/��˳ˮʱ��T4"},
		{"5. Calculate the static water speed V3 of the ship A=(the reverse water speed V1 of the ship A+the forward water speed V2 of the ship A)/multiplier N1",
		"5.����׾�ˮ����V3 �׾�ˮ����V3=(����ˮ�ٶ�V1+��˳ˮ�ٶ�V2)/����N1"},
		{"6. Calculate the water velocity V4, which is equal to the downstream velocity V2 of the vessel and the static water velocity V3 of the vessel",
		"6.����ˮ��V4 ˮ��V4=��˳ˮ�ٶ�V2-�׾�ˮ����V3"},
		{"7. Calculate B's static water ship speed V5=A's static water ship speed V3 * multiplier N1",
		"7.�����Ҿ�ˮ����V5 �Ҿ�ˮ����V5=�׾�ˮ����V3*����N1"},
		{"8. Calculate the downstream speed V6 of B=the static water ship speed V5+water speed V4 of B",
		"8.������˳ˮ�ٶ�V6 ��˳ˮ�ٶ�V6=�Ҿ�ˮ����V5+ˮ��V4"},
		{"9. Calculate B's upstream velocity V7=B's static water ship speed V5- water speed V4",
		"9.��������ˮ�ٶ�V7 ����ˮ�ٶ�V7=�Ҿ�ˮ����V5-ˮ��V4"},
		{"10. Calculate the round-trip time T5 for B=(total distance S1/B upstream speed V7)+(total distance S1/B downstream speed V6)",
		"10.����������ʱ��T5 ������ʱ��T5=(�ܾ���S1/����ˮ�ٶ�V7)+(�ܾ���S1/��˳ˮ�ٶ�V6)"},
		//������
		{"RoundTripTimeT2","������ʱ��T2"},
		{"RoundTripTimeDifferenceT3","������ʱ���T3"},
		{"MagnificationN1","����N1"},
		{"TotalDistanceS1","�ܾ���S1"},
		{"Jia'sReverseWaterTimeT1","����ˮʱ��T1"},
		{"JiaShunshuiTimeT4","��˳ˮʱ��T4"},
		{"Jia'sUpstreamVelocityV1","����ˮ�ٶ�V1"},
		{"JiaShunshuiSpeedV2","��˳ˮ�ٶ�V2"},
		{"JiaJingshuiShipSpeedV3","�׾�ˮ����V3"},
		{"WaterSpeedV4","ˮ��V4"},
		{"BStaticWaterShipSpeedV5","�Ҿ�ˮ����V5"},
		{"YiShunshuiSpeedV6","��˳ˮ�ٶ�V6"},
		{"ReverseWaterVelocityV7","����ˮ�ٶ�V7"},
		{"RoundTripTimeT5","������ʱ��T5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(������ʱ��T2, 105);
	DefineLangVarInt(������ʱ���T3, 35);
	DefineLangVarInt(����N1, 2);
	DefineLangVarInt(�ܾ���S1, 560);
	ColPrintf(PrintfCol::����, Lang("P14���� ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������560ǧ�ף��״�����һ����105Сʱ��������ˮ�õ�ʱ���˳ˮ�ٶȵ�35Сʱ���Ҵ��ľ�ˮ�ٶ��Ǽ׾�ˮ�ٶȵĶ������Ҵ�����һ����Ҫ����Сʱ?"));
	DefineLangVarInt(����ˮʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ˮʱ��T1  ����ˮʱ��T1=(������ʱ��T2+������ʱ���T3)/����N1"));
	����ˮʱ��T1 = (������ʱ��T2 + ������ʱ���T3) / ����N1;
	����ˮʱ��T1.PrintProcessLog(1);
	DefineLangVarInt(��˳ˮʱ��T4, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����˳ˮʱ��T4 ��˳ˮʱ��T4=����ˮʱ��T1-������ʱ���T3"));
	��˳ˮʱ��T4 = ����ˮʱ��T1 - ������ʱ���T3;
	��˳ˮʱ��T4.PrintProcessLog(2);
	DefineLangVarInt(����ˮ�ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("3.�������ˮ�ٶ�V1 ����ˮ�ٶ�V1=�ܾ���S1/����ˮʱ��T1"));
	����ˮ�ٶ�V1 = �ܾ���S1 / ����ˮʱ��T1;
	����ˮ�ٶ�V1.PrintProcessLog(3);
	DefineLangVarInt(��˳ˮ�ٶ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����˳ˮ�ٶ�V2 ��˳ˮ�ٶ�V2=�ܾ���S1/��˳ˮʱ��T4"));
	��˳ˮ�ٶ�V2 = �ܾ���S1 / ��˳ˮʱ��T4;
	��˳ˮ�ٶ�V2.PrintProcessLog(4);
	DefineLangVarInt(�׾�ˮ����V3, 0);
	ColPrintf(PrintfCol::����, Lang("5.����׾�ˮ����V3 �׾�ˮ����V3=(����ˮ�ٶ�V1+��˳ˮ�ٶ�V2)/����N1"));
	�׾�ˮ����V3 = (����ˮ�ٶ�V1 + ��˳ˮ�ٶ�V2) / ����N1;
	�׾�ˮ����V3.PrintProcessLog(5);
	DefineLangVarInt(ˮ��V4, 0);
	ColPrintf(PrintfCol::����, Lang("6.����ˮ��V4 ˮ��V4=��˳ˮ�ٶ�V2-�׾�ˮ����V3"));
	ˮ��V4 = ��˳ˮ�ٶ�V2 - �׾�ˮ����V3;
	ˮ��V4.PrintProcessLog(6);
	DefineLangVarInt(�Ҿ�ˮ����V5, 0);
	ColPrintf(PrintfCol::����, Lang("7.�����Ҿ�ˮ����V5 �Ҿ�ˮ����V5=�׾�ˮ����V3*����N1"));
	�Ҿ�ˮ����V5 = �׾�ˮ����V3 * ����N1;
	�Ҿ�ˮ����V5.PrintProcessLog(7);
	DefineLangVarInt(��˳ˮ�ٶ�V6, 0);
	ColPrintf(PrintfCol::����, Lang("8.������˳ˮ�ٶ�V6 ��˳ˮ�ٶ�V6=�Ҿ�ˮ����V5+ˮ��V4"));
	��˳ˮ�ٶ�V6 = �Ҿ�ˮ����V5 + ˮ��V4;
	��˳ˮ�ٶ�V6.PrintProcessLog(8);
	DefineLangVarInt(����ˮ�ٶ�V7, 0);
	ColPrintf(PrintfCol::����, Lang("9.��������ˮ�ٶ�V7 ����ˮ�ٶ�V7=�Ҿ�ˮ����V5-ˮ��V4"));
	����ˮ�ٶ�V7 = �Ҿ�ˮ����V5 - ˮ��V4;
	����ˮ�ٶ�V7.PrintProcessLog(9);
	DefineLangVarInt(������ʱ��T5, 0);
	ColPrintf(PrintfCol::����, Lang("10.����������ʱ��T5 ������ʱ��T5=(�ܾ���S1/����ˮ�ٶ�V7)+(�ܾ���S1/��˳ˮ�ٶ�V6)"));
	������ʱ��T5 = (�ܾ���S1 / ����ˮ�ٶ�V7) + (�ܾ���S1 / ��˳ˮ�ٶ�V6);
	������ʱ��T5.PrintProcessLog(10);
}
void P14_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P14 Example 5: Floating Ship","P14���� ��ˮ�д�"},
		{"Title: Two docks are 220 kilometers long, and ships A and B are traveling in opposite directions. If they meet after traveling\nin opposite directions for 5 hours, and if they catch up with each other after traveling in the same\ndirection for 55 hours, calculate the static water velocity of the two ships.",
		"��Ŀ������ͷ��220ǧ�ף����������ֱ�������У�����������5Сʱ�����������ͬ�����55Сʱ���׷���ң���������ˮ�ٶȡ�"},
		{"1. Calculate static water velocity and V1 static water velocity and V1=total distance S1/time of encounter in opposite directions T1",
		"1.���㾲ˮ�ٶȺ�V1 ��ˮ�ٶȺ�V1=�ܾ���S1/�����������ʱ��T1"},
		{"2. Calculate the static water velocity difference V2, which is equal to the total distance S1 divided by the time T2 when traveling in the same direction and encountering each other",
		"2.���㾲ˮ�ٶȲ�V2 ��ˮ�ٶȲ�V2=�ܾ���S1/ͬ���������ʱ��T2"},
		{"3. Calculate the static water velocity V3 of A=(static water velocity and V1+static water velocity difference V2)/multiplier N1",
		"3.����׾�ˮ�ٶ�V3 �׾�ˮ�ٶ�V3=(��ˮ�ٶȺ�V1+��ˮ�ٶȲ�V2)/����N1"},
		{"4. Calculate the static water velocity V4 of B and the static water velocity V4 of A=(static water velocity and V1- static water velocity difference V2)/multiplier N1",
		"4.�����Ҿ�ˮ�ٶ�V4 �׾�ˮ�ٶ�V4=(��ˮ�ٶȺ�V1-��ˮ�ٶȲ�V2)/����N1"},
		//������
		{"TotalDistanceS1","�ܾ���S1"},
		{"MeetingTimeT2InTheSameDirection","ͬ���������ʱ��T2"},
		{"MeetingTimeT1InOppositeDirection","�����������ʱ��T1"},
		{"MagnificationN1","����N1"},
		{"StaticWaterVelocityAndV1","��ˮ�ٶȺ�V1"},
		{"StaticWaterVelocityDifferenceV2","��ˮ�ٶȲ�V2"},
		{"JiaStaticWaterVelocityV3","�׾�ˮ�ٶ�V3"},
		{"BStaticWaterVelocityV4","�Ҿ�ˮ�ٶ�V4"},
		{"JiaStaticWaterVelocityV4","�׾�ˮ�ٶ�V4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܾ���S1, 220);
	DefineLangVarInt(ͬ���������ʱ��T2, 55);
	DefineLangVarInt(�����������ʱ��T1, 5);
	DefineLangVarInt(����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P14���� ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������ͷ��220ǧ�ף����������ֱ�������У�����������5Сʱ�����������ͬ�����55Сʱ���׷���ң���������ˮ�ٶȡ�"));
	DefineLangVarInt(��ˮ�ٶȺ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㾲ˮ�ٶȺ�V1 ��ˮ�ٶȺ�V1=�ܾ���S1/�����������ʱ��T1"));
	��ˮ�ٶȺ�V1 = �ܾ���S1 / �����������ʱ��T1;
	��ˮ�ٶȺ�V1.PrintProcessLog(1);
	DefineLangVarInt(��ˮ�ٶȲ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㾲ˮ�ٶȲ�V2 ��ˮ�ٶȲ�V2=�ܾ���S1/ͬ���������ʱ��T2"));
	��ˮ�ٶȲ�V2 = �ܾ���S1 / ͬ���������ʱ��T2;
	��ˮ�ٶȲ�V2.PrintProcessLog(2);
	DefineLangVarInt(�׾�ˮ�ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����׾�ˮ�ٶ�V3 �׾�ˮ�ٶ�V3=(��ˮ�ٶȺ�V1+��ˮ�ٶȲ�V2)/����N1"));
	�׾�ˮ�ٶ�V3 = (��ˮ�ٶȺ�V1 + ��ˮ�ٶȲ�V2) / ����N1;
	�׾�ˮ�ٶ�V3.PrintProcessLog(3);
	DefineLangVarInt(�׾�ˮ�ٶ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����Ҿ�ˮ�ٶ�V4 �׾�ˮ�ٶ�V4=(��ˮ�ٶȺ�V1-��ˮ�ٶȲ�V2)/����N1"));
	�׾�ˮ�ٶ�V4 = (��ˮ�ٶȺ�V1 - ��ˮ�ٶȲ�V2) / ����N1;
	�׾�ˮ�ٶ�V4.PrintProcessLog(4);

}
void P14_3()//flo
{
	LanguageLib::LanguageTableT Language = {
		{"P14 Example six: Flowing Ships","P14���� ��ˮ�д�"},
		{"Title: Ship A and the water flow tester move upstream and downstream, while Ship B moves upstream and downstream. After 7.2 hours, the tester\nmeets Ship B. It is known that Ship A is 31.25 kilometers away from the tester after 2.5 hours,\nand the static water velocities of Ship A and Ship B are equal. Calculate the distance between the two banks",
		"��Ŀ���״���ˮ�������Ǵ�����˳ˮ�����Σ�ͬʱ�Ҵ���ˮ�����ε����Σ�7.2Сʱ�������������������֪��2.5Сʱ������������31.25ǧ�ף����Ҿ�ˮ�ٶ���ȣ�����������"},
		{"1. Calculate the static water velocity V1 of A=distance S1 between A and the tester/time T1 corresponding to the distance between A and the tester",
		"1.����׵ľ�ˮ�ٶ�V1 �׵ľ�ˮ�ٶ�V1=������������·��S1/������������·�̶�Ӧ��ʱ��T1"},
		{"2. Calculate the distance between the two sides S2. The distance between the two sides S2 is equal to the static water velocity V1 of A multiplied by the time T2 when B meets",
		"2.������������S2 ��������S2=�׵ľ�ˮ�ٶ�V1*������ʱ��T2"},
		//������
		{"TheDistanceBetweenAAndTheTesterIsS1","������������·��S1"},
		{"TheTimeT1CorrespondingToTheDistanceBetweenAAndThe Tester","������������·�̶�Ӧ��ʱ��T1"},
		{"MeetingtimeT2","������ʱ��T2"},
		{"TheStaticWaterVelocityV1OfA","�׵ľ�ˮ�ٶ�V1"},
		{"DistanceBetweenTheTwoSidesS2","��������S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P14���� ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���״���ˮ�������Ǵ�����˳ˮ�����Σ�ͬʱ�Ҵ���ˮ�����ε����Σ�7.2Сʱ�������������������֪��2.5Сʱ������������31.25ǧ�ף����Ҿ�ˮ�ٶ���ȣ�����������"));
	DefineLangVar(float, ������������·��S1, 105);
	DefineLangVar(float, ������������·�̶�Ӧ��ʱ��T1, 3);
	DefineLangVar(float, ������ʱ��T2, 2.5);
	DefineLangVar(float, �׵ľ�ˮ�ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����׵ľ�ˮ�ٶ�V1 �׵ľ�ˮ�ٶ�V1=������������·��S1/������������·�̶�Ӧ��ʱ��T1"));
	�׵ľ�ˮ�ٶ�V1 = ������������·��S1 / ������������·�̶�Ӧ��ʱ��T1;
	�׵ľ�ˮ�ٶ�V1.PrintProcessLog(1);
	DefineLangVar(float, ��������S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������������S2 ��������S2=�׵ľ�ˮ�ٶ�V1*������ʱ��T2"));
	��������S2 = �׵ľ�ˮ�ٶ�V1 * ������ʱ��T2;
	��������S2.PrintProcessLog(2);

}
void P14()
{
	P14_1();
	ColPrintf(PrintfCol::����, "");
	P14_2();
	ColPrintf(PrintfCol::����, "");
	P14_3();
	ColPrintf(PrintfCol::����, "");
}
void P14_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P14();
	Lang.SetCurLanguage(LanguageLib::English);
	P14();
	ColPrintf(PrintfCol::����, "");

}