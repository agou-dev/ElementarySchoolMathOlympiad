#pragma once
void P4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P4 Example 1: Follow up on the Issue","P4��һ ׷������"},
		{"Title: A, B, and C depart from A to B at 7 o'clock. A travels at 8 o'clock per hour, B travels at 6 hours per hour, and C departs at\n8 o'clock in the morning. A and C arrive at B at the same time at 6 o'clock. At what time does C catch up?",
		"��Ŀ�����ұ���A�ص�B�أ�7ʱ�������˴�A�س��������ٶ���8�����ٶ�6��������8ʱ������16ʱ�ױ�ͬʱ��B�أ�������׷��?"},
		{"1. Calculate the total distance S1. The total distance S1 is equal to the speed V1 of A * (the arrival time T1 of A and C minus the departure time of A)",
		"1.������·��S1 ��·��S1=���ٶ�V1*(�ױ�����ʱ��T1-���ҳ���ʱ��T2)"},
		{"2. Calculate the speed V2 of C=total distance S1/(arrival time T1 of A and C - departure time T3 of C)",
		"2.������ٶ�V2 ���ٶ�V2=��·��S1/(�ױ�����ʱ��T1-������ʱ��T3)"},
		{"3. Calculate the distance between C and B's pursuit S2, where C and B's pursuit S2=B's speed V3 * (C's departure time T3- A and B's departure time T2)",
		"3.�������׷��·��S2 ����׷��·��S2=���ٶ�V3*(������ʱ��T3-���ҳ���ʱ��T2)"},
		{"4. Calculate the time T4 for C and B to catch up. C and B to catch up time T4=(distance S2/(C speed V2- B speed V3))+C departure time T3",
		"4.�������׷��ʱ��T4 ����׷��ʱ��T4=(����׷��·��S2/(���ٶ�V2-���ٶ�V3))+������ʱ��T3"},
		{"Answer: C will catch up with% d points",
		"�𣺱�%d��׷��"},
		//������
		{"ASpeedV1","���ٶ�V1"},
		{"ArrivalTimeT1ForBothAAndC","�ױ�����ʱ��T1"},
		{"DepartureTimeT2ForPartyAAndPartyB","���ҳ���ʱ��T2"},
		{"DepartureTimeT3","������ʱ��T3"},
		{"BSpeedV3","���ٶ�V3"},
		{"TotalDistanceS1","��·��S1"},
		{"CSpeedV2","���ٶ�V2"},
		{"CAndBCatchUpOnTheJourneyS2","����׷��·��S2"},
		{"CAndBCatchUpWithTimeT4","����׷��ʱ��T4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ٶ�V1, 8);
	DefineLangVarInt(�ױ�����ʱ��T1, 16);
	DefineLangVarInt(���ҳ���ʱ��T2, 7);
	DefineLangVarInt(������ʱ��T3, 8);
	DefineLangVarInt(���ٶ�V3, 6);
	const char* pPic =
		"          1Сʱ��\n"
		"A-----------------------------------------------B\n"
		"   ��\n"
		"---------------->\n"
		"   ��6ǧ��\n"
		"-------->\n"
		">��\n"
		;
	ColPrintf(PrintfCol::����, Lang("P4��һ ׷������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ұ���A�ص�B�أ�7ʱ�������˴�A�س��������ٶ���8�����ٶ�6��������8ʱ������16ʱ�ױ�ͬʱ��B�أ�������׷��?"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(��·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������·��S1 ��·��S1=���ٶ�V1*(�ױ�����ʱ��T1-���ҳ���ʱ��T2)"));
	��·��S1 = ���ٶ�V1 * (�ױ�����ʱ��T1 - ���ҳ���ʱ��T2);
	��·��S1.PrintProcessLog(1);
	DefineLangVarInt(���ٶ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ٶ�V2 ���ٶ�V2=��·��S1/(�ױ�����ʱ��T1-������ʱ��T3)"));
	���ٶ�V2 = ��·��S1 / (�ױ�����ʱ��T1 - ������ʱ��T3);
	���ٶ�V2.PrintProcessLog(2);
	DefineLangVarInt(����׷��·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.�������׷��·��S2 ����׷��·��S2=���ٶ�V3*(������ʱ��T3-���ҳ���ʱ��T2)"));
	����׷��·��S2 = ���ٶ�V3 * (������ʱ��T3 - ���ҳ���ʱ��T2);
	����׷��·��S2.PrintProcessLog(3);
	DefineLangVarInt(����׷��ʱ��T4, 0);
	ColPrintf(PrintfCol::����, Lang("4.�������׷��ʱ��T4 ����׷��ʱ��T4=(����׷��·��S2/(���ٶ�V2-���ٶ�V3))+������ʱ��T3"));
	����׷��ʱ��T4 = (����׷��·��S2 / (���ٶ�V2 - ���ٶ�V3)) + ������ʱ��T3;
	����׷��ʱ��T4.PrintProcessLog(4);
	ColPrintf(PrintfCol::���, Lang("�𣺱�%d��׷��"), (int)����׷��ʱ��T4);
}
void P4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P4 Example 2: Follow up on the Issue","P4���� ׷������"},
		{"Title: Three cars, fast, medium, and slow, travel from point A to point B with a cyclist in between. The fast, medium, and slow cars catch\nup in 7, 8, and 14 minutes respectively. Given that the speed of the fast car is 800 and\nthe speed of the slow car is 600, what is the speed of the middle car?",
		"��Ŀ��������������A�ص�B�أ��м����ﳵ��Ҳһ����ʻ�������������ֱ���7��8��14����׷�ϣ���֪�쳵�ٶ���800�������ٶ���600���г��ٶ��Ƕ��٣�"},
		{"1. Calculate the speed V1 of catching up with the cyclist slowly and quickly, V1 of catching up with the cyclist slowly and quickly, V1=(fast speed V2- slow speed V3) * A's pursuit time T1",
		"1.�����׷���ﳵ��������·��S1 ��׷���ﳵ���������ٶ�S1=(�쳵�ٶ�V2-�����ٶ�V3)*��׷��ʱ��T1"},
		{"2. Calculate the speed difference V4 between C and the cyclist. The speed difference V4 between C and the cyclist is\nequal to the distance S1 between catching up with the cyclist quickly and moving away slowly, divided by\n(fast catch up time T1- slow catch up time T2)",
		"2.��������ﳵ�˵��ٶȲ�V4 �����ﳵ�˵��ٶȲ�V4=��׷���ﳵ��������·��S1/(��׷��ʱ��T2-��׷��ʱ��T1)"},
		{"3. Calculate the speed V5 of the cyclist, which is equal to the slow speed V3 minus the speed difference V4 between the cyclist and the cyclist",
		"3.�����ﳵ���ٶ�V5 �ﳵ���ٶ�V5=�����ٶ�V3-�����ﳵ�˵��ٶȲ�V4"},
		{"4. Calculate the slow pursuit distance S2=(slow speed V3- cyclist speed V5) * slow pursuit time T2",
		"4.��������׷��·��S2 ����׷��·��S2=(�����ٶ�V3-�ﳵ���ٶ�V5)*��׷��ʱ��T2"},
		{"5. Calculate the middle car speed V6, which is equal to the slow car catching up distance S2/middle car catching up time T3+rider speed V5",
		"5.�����г��ٶ�V6 �г��ٶ�V6=(����׷��·��S2/��׷��ʱ��T3)+�ﳵ���ٶ�V5"},
		{"Answer: The speed of the middle car is% d",
		"���г��ٶ���%d"},
		//������
		{"ExpressSpeedV2","�쳵�ٶ�V2"},
		{"SlowSpeedV3","�����ٶ�V3"},
		{"HurryUpAndCatchUpWithTimeT1","��׷��ʱ��T1"},
		{"HurryUpAndCatchUpWithTimeT1","��׷��ʱ��T3"},
		{"SlowChaseAndTimeT2","��׷��ʱ��T2"},
		{"HurryUpAndCatchUpWithTheCyclist,SlowDownTheFastDistanceS1","��׷���ﳵ��������·��S1"},
		{"TheSpeedDifferenceV4BetweenTheCyclistAndTheCyclist","�����ﳵ�˵��ٶȲ�V4"},
		{"SlowCarChasingDistanceS2","����׷��·��S2"},
		{"BicycleSpeedV5","�ﳵ���ٶ�V5"},
		{"CRRCSpeedV6","�г��ٶ�V6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�쳵�ٶ�V2, 800);
	DefineLangVarInt(�����ٶ�V3, 600);
	DefineLangVarInt(��׷��ʱ��T1, 7);
	DefineLangVarInt(��׷��ʱ��T3, 8);
	DefineLangVarInt(��׷��ʱ��T2, 14);
	ColPrintf(PrintfCol::����, Lang("P4���� ׷������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������������A�ص�B�أ��м����ﳵ��Ҳһ����ʻ�������������ֱ���7��8��14����׷�ϣ���֪�쳵�ٶ���800�������ٶ���600���г��ٶ��Ƕ��٣�"));
	DefineLangVarInt(��׷���ﳵ��������·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����׷���ﳵ��������·��S1 ��׷���ﳵ���������ٶ�S1=(�쳵�ٶ�V2-�����ٶ�V3)*��׷��ʱ��T1"));
	��׷���ﳵ��������·��S1 = (�쳵�ٶ�V2 - �����ٶ�V3) * ��׷��ʱ��T1;
	��׷���ﳵ��������·��S1.PrintProcessLog(1);
	DefineLangVarInt(�����ﳵ�˵��ٶȲ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������ﳵ�˵��ٶȲ�V4 �����ﳵ�˵��ٶȲ�V4=��׷���ﳵ��������·��S1/(��׷��ʱ��T2-��׷��ʱ��T1)"));
	�����ﳵ�˵��ٶȲ�V4 = ��׷���ﳵ��������·��S1 / (��׷��ʱ��T2 - ��׷��ʱ��T1);
	�����ﳵ�˵��ٶȲ�V4.PrintProcessLog(2);
	DefineLangVarInt(�ﳵ���ٶ�V5, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ﳵ���ٶ�V5 �ﳵ���ٶ�V5=�����ٶ�V3-�����ﳵ�˵��ٶȲ�V4"));
	�ﳵ���ٶ�V5 = �����ٶ�V3 - �����ﳵ�˵��ٶȲ�V4;
	�ﳵ���ٶ�V5.PrintProcessLog(3);
	DefineLangVarInt(����׷��·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������׷��·��S2 ����׷��·��S2=(�����ٶ�V3-�ﳵ���ٶ�V5)*��׷��ʱ��T2"));
	����׷��·��S2 = (�����ٶ�V3 - �ﳵ���ٶ�V5) * ��׷��ʱ��T2;
	����׷��·��S2.PrintProcessLog(4);
	DefineLangVarInt(�г��ٶ�V6, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����г��ٶ�V6 �г��ٶ�V6=(����׷��·��S2/��׷��ʱ��T3)+�ﳵ���ٶ�V5"));
	�г��ٶ�V6 = ����׷��·��S2 / ��׷��ʱ��T3 + �ﳵ���ٶ�V5;
	�г��ٶ�V6.PrintProcessLog(5);
	ColPrintf(PrintfCol::���, Lang("���г��ٶ���%d"), (int)�г��ٶ�V6);
}
void P4()
{
	P4_1();
	ColPrintf(PrintfCol::����, "");
	P4_2();
	ColPrintf(PrintfCol::����, "");
}
void P4_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P4();
	Lang.SetCurLanguage(LanguageLib::English);
	P4();
	ColPrintf(PrintfCol::����, "");

}