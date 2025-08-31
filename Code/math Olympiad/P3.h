#pragma once
void P3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P3 Example 1 Encounter Problem","P3��һ ��������"},
		{"Title: A, B, and C walk together. A travels at a speed of 80 meters, B travels at a speed of 100 meters, and C travels at a speed of 90 meters.\nA starts from point A, B, and C travel in opposite directions. A and B meet again 30 minutes after meeting.\nWhat is the distance between A and B?",
		"��Ŀ���ף��ң��������У����ٶ���80�ף����ٶ���100�ף����ٶ���90�ף��״�A�أ��ң�����B�ڳ���,������У�����������30���������������AB���صľ����Ƕ����ף�"},
		{"1. Calculate the distance S1 between A and B after they meet. S1=(A speed V1+C speed V2) * A and C meeting time T1",
		"1.�������������ױ�֮���·��S1 ����������ױ�֮���·��S1=(���ٶ�V1+���ٶ�V2)*�ױ�����ʱ��T1"},
		{"2. Calculate the time T2 required for the meeting of Party A and Party B, which is equal to the distance S1\nbetween Party A and Party C after their meeting divided by (Party B's speed V3- Party C's speed)",
		"2.��������������õ�ʱ��T2 �����������õ�ʱ��T2=����������ױ�֮���·��S1/(���ٶ�V3-���ٶ�V2)"},
		{"3. Calculate the total distance S2 between the two places. The total distance S2 between the two places is equal to the time T2 taken for A and B to meet (A speed+B speed)",
		"3.����������·��S2 ������·��S2=�����������õ�ʱ��T2*(���ٶ�V1+���ٶ�V3)"},
		{"Answer: The distance between A and B is %d m",
		"��AB���صľ�����%dm"},
		//������
		{"ASpeedV1","���ٶ�V1"},
		{"CSpeedV2","���ٶ�V2"},
		{"MeetingTimeT1BetweenAAndC","�ױ�����ʱ��T1"},
		{"BSpeedV3","���ٶ�V3"},
		{"TheDistanceS1BetweenAAndBAfterTheyMeet","����������ױ�֮���·��S1"},
		{"TheTimeT2TakenForAAndB ToMeet","�����������õ�ʱ��T2"},
		{"TotalDistanceBetweenTheTwoPlacesS2","������·��S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"                               <-------------��\n"
		"��-----------------><------------------------��\n"
		"A---------------------------------------------B\n"
		;
	DefineLangVarInt(���ٶ�V1, 80);
	DefineLangVarInt(���ٶ�V2, 90);
	DefineLangVarInt(���ٶ�V3, 100);
	DefineLangVarInt(�ױ�����ʱ��T1, 30);
	ColPrintf(PrintfCol::����, Lang("P3��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ף��ң��������У����ٶ���80�ף����ٶ���100�ף����ٶ���90�ף��״�A�أ��ң�����B�ڳ���,������У�����������30���������������AB���صľ����Ƕ����ף�"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(����������ױ�֮���·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������������ױ�֮���·��S1 ����������ױ�֮���·��S1=(���ٶ�V1+���ٶ�V2)*�ױ�����ʱ��T1"));
	����������ױ�֮���·��S1 = (���ٶ�V1 + ���ٶ�V2) * �ױ�����ʱ��T1;
	����������ױ�֮���·��S1.PrintProcessLog(1);
	DefineLangVarInt(�����������õ�ʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������������õ�ʱ��T2 �����������õ�ʱ��T2=����������ױ�֮���·��S1/(���ٶ�V3-���ٶ�V2)"));
	�����������õ�ʱ��T2 = ����������ױ�֮���·��S1 / (���ٶ�V3 - ���ٶ�V2);
	�����������õ�ʱ��T2.PrintProcessLog(2);
	DefineLangVarInt(������·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����������·��S2 ������·��S2=�����������õ�ʱ��T2*(���ٶ�V1+���ٶ�V3)"));
	������·��S2 = �����������õ�ʱ��T2 * (���ٶ�V1 + ���ٶ�V3);
	������·��S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("��AB���صľ�����%dm"), (int)������·��S2);
}
void P3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P3 Example 2 Encounter Problem","P3���� ׷������"},
		{"Title: Three vehicles, A, B, and C, travel from point A to point B. The speeds of A and B are 100 and 80 kilometers respectively.\nA truck is approaching them head-on, and the truck will meet with A, B, and C after 12, 14, and 16 hours respectively. Please\ncalculate the speed of C",
		"��Ŀ�����ұ���������A�ص�B�أ������ٶȷֱ���100��80ǧ�ף���һ������������ӭ��ʻ���������ֱ���12��14��16Сʱ������ұ�����������ٶ�"},
		{"1. Calculate the distance S1 between card A and card B after card A meets. S1=(speed V1- speed V2) * card A meeting time T1",
		"1.����׿��������ҿ�֮���·��S1 �׿��������ҿ�֮���·��S1=(���ٶ�V1-���ٶ�V2)*�׿�����ʱ��T1"},
		{"2. Calculate the truck speed V3. The truck speed V3 is equal to the distance S1 between the first and second trucks after they meet, divided by (the time T2 when the second truck meets - the time T1 when the first truck meets) minus the speed V2 of the second truck",
		"2.���㿨���ٶ�V3 �����ٶ�V3=�׿��������ҿ�֮���·��S1/(�ҿ�����ʱ��T2-�׿�����ʱ��T1)-���ٶ�V2"},
		{"3. Calculate the total distance S2 between the two places. The total distance S2 between the two places is equal to the time T2 taken for A and B to meet (A speed+B speed)",
		"3.����������·��S2 ������·��S2=�׿�����ʱ��T1*(���ٶ�V1+�����ٶ�V3)"},
		{"4. Calculate the speed V4 of C=(total distance S2 between the two places/time T2 when C card meets) - truck speed V3",
		"4.������ٶ�V4 ���ٶ�V4=(������·��S2/��������ʱ��T3)-�����ٶ�V3"},
		{"Answer: The speed of C is% d kilometers per hour",
		"�𣺱��ٶ���%dǧ��"},
		//������
		{"ASpeedV1","���ٶ�V1"},
		{"CSpeedV4","���ٶ�V4"},
		{"JiaCardMeetingTimeT1","�׿�����ʱ��T1"},
		{"BSpeedV3","�����ٶ�V3"},
		{"BSpeedV2","���ٶ�V2"},
		{"MeetingTimeT2OfTheSecondCard","�ҿ�����ʱ��T2"},
		{"MeetingTimeT3OfTheThirdCard","��������ʱ��T3"},
		{"TotalDistanceBetweenTheTwoPlacesS2","������·��S2"},
		{"TheDistanceS1BetweenCardAAndCardBAfterTheyMeet","�׿��������ҿ�֮���·��S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ٶ�V1, 100);
	DefineLangVarInt(���ٶ�V2, 80);
	DefineLangVarInt(�ҿ�����ʱ��T2, 14);
	DefineLangVarInt(��������ʱ��T3, 16);
	DefineLangVarInt(�׿�����ʱ��T1, 12);
	const char* pPic =
		"                  12Сʱ��\n"
		"��----------------------><------------------��\n"
		"��--------------->\n"
		"A--------------------------------------------B\n"
		;
	ColPrintf(PrintfCol::����, Lang("P3��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ұ���������A�ص�B�أ������ٶȷֱ���100��80ǧ�ף���һ������������ӭ��ʻ���������ֱ���12��14��16Сʱ������ұ�����������ٶ�"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(�׿��������ҿ�֮���·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����׿��������ҿ�֮���·��S1 �׿��������ҿ�֮���·��S1=(���ٶ�V1-���ٶ�V2)*�׿�����ʱ��T1"));
	�׿��������ҿ�֮���·��S1 = (���ٶ�V1 - ���ٶ�V2) * �׿�����ʱ��T1;
	�׿��������ҿ�֮���·��S1.PrintProcessLog(1);
	DefineLangVarInt(�����ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㿨���ٶ�V3 �����ٶ�V3=�׿��������ҿ�֮���·��S1/(�ҿ�����ʱ��T2-�׿�����ʱ��T1)-���ٶ�V2"));
	�����ٶ�V3  = �׿��������ҿ�֮���·��S1 / (�ҿ�����ʱ��T2 - �׿�����ʱ��T1) - ���ٶ�V2;
	�����ٶ�V3.PrintProcessLog(2);
	DefineLangVarInt(������·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����������·��S2 ������·��S2=�׿�����ʱ��T1*(���ٶ�V1+�����ٶ�V3)"));
	������·��S2 = �׿�����ʱ��T1 * (���ٶ�V1 + �����ٶ�V3);
	������·��S2.PrintProcessLog(3);
	DefineLangVarInt(���ٶ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ٶ�V4 ���ٶ�V4=(������·��S2/��������ʱ��T3)-�����ٶ�V3"));
	���ٶ�V4 = (������·��S2 / ��������ʱ��T3) - �����ٶ�V3;
	���ٶ�V4.PrintProcessLog(4);
	ColPrintf(PrintfCol::���, Lang("�𣺱��ٶ���%dǧ��"), (int)���ٶ�V4);
}
void P3_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P3 Example Three Equation Method","P3���� ���̷�"},
		{"Title: A, B, and C walk together, with A traveling at a speed of 4 meters, B traveling at a speed of 6 meters, and C traveling at a speed of\n5 meters. A and B depart from A and C departs from B, traveling in opposite directions. In how many minutes will\nthe distance between C and B be twice that of C and A",
		"��Ŀ���ף��ң��������У����ٶ���4�ף����ٶ���6�ף����ٶ���5�ף����Ҵ�A�أ�����B�ڳ���,������У��ڶ��ٷ��Ӻ󣬱��ҵľ����Ǳ��׵�����"},
		{"If time is t, then the distance between A and C is (203- (4+5) t), and the distance between C and B is (5+6) t-203)",
		"1.��ʱ��Ϊt����ױ�������(203-(4+5)t)����Ҿ�����((5+6)t-203)"},
		{"2. List the equation S1 11t-203=2 (203-9t)",
		"2.�г�ʽ��S1           11t-203=2(203-9t)"},
		{"3. Simplify equation S1 to obtain equation S2 11t-203=(203-9t)+(203-9t)",
		"3.����ʽ��S1�õ�ʽ��S2 11t-203=(203-9t)+(203-9t)"},
		{"4. Simplify equation S2 to obtain equation S3 11t-203=406-18t",
		"4.����ʽ��S2�õ�ʽ��S3 11t-203=406-18t"},
		{"5. Simplify equation S3 to obtain equation S4 11t=406-18t+203",
		"5.����ʽ��S3�õ�ʽ��S4 11t=406-18t+203"},
		{"6. Simplify equation S4 to obtain equation S5 11t=609-18t",
		"6.����ʽ��S4�õ�ʽ��S5 11t=609-18t"},
		{"7. Simplify equation S5 to solve t 29t=609 t=609/29",
		"7.����ʽ��S5���t      29t=609 t=609/29"},
		{"Answer: After% d minutes, the distance between C and B is twice that of C and A",
		"����%d���Ӻ󣬱��ҵľ����Ǳ��׵�����"},
		//������
		{"TheDistanceBetweenCAndBIsTwiceThatOfCAndA,AndTheTimeT1IsRequired","���ҵľ����Ǳ��׵��������õ�ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ҵľ����Ǳ��׵��������õ�ʱ��T1, 0);
	const char* pPic =
		"   ��4t��                         ��5t��\n"
		"------------->|    |<----|-----|--------------|\n"
		"  ��6t��\n"
		"--------------------------------->\n"
		"A---------------------------------------------B\n"
		"                 203��\n"
		;
	ColPrintf(PrintfCol::����, Lang("P3��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ף��ң��������У����ٶ���4�ף����ٶ���6�ף����ٶ���5�ף����Ҵ�A�أ�����B�ڳ���,������У��ڶ��ٷ��Ӻ󣬱��ҵľ����Ǳ��׵�����"));
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("1.��ʱ��Ϊt����ױ�������(203-(4+5)t)����Ҿ�����((5+6)t-203)"));
	ColPrintf(PrintfCol::����, Lang("2.�г�ʽ��S1           11t-203=2(203-9t)"));
	ColPrintf(PrintfCol::����, Lang("3.����ʽ��S1�õ�ʽ��S2 11t-203=(203-9t)+(203-9t)"));
	ColPrintf(PrintfCol::����, Lang("4.����ʽ��S2�õ�ʽ��S3 11t-203=406-18t"));
	ColPrintf(PrintfCol::����, Lang("5.����ʽ��S3�õ�ʽ��S4 11t=406-18t+203"));
	ColPrintf(PrintfCol::����, Lang("6.����ʽ��S4�õ�ʽ��S5 11t=609-18t"));
	ColPrintf(PrintfCol::����, Lang("7.����ʽ��S5���t      29t=609 t=609/29"));
	���ҵľ����Ǳ��׵��������õ�ʱ��T1.Var = 609 / 29;
	ColPrintf(PrintfCol::���, Lang("����%d���Ӻ󣬱��ҵľ����Ǳ��׵�����"), (int)���ҵľ����Ǳ��׵��������õ�ʱ��T1);
}
void P3()
{
	P3_1();
	ColPrintf(PrintfCol::����, "");
	P3_2();
	ColPrintf(PrintfCol::����, "");
	P3_3();
	ColPrintf(PrintfCol::����, "");
}
void P3_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P3();
	Lang.SetCurLanguage(LanguageLib::English);
	P3();
	ColPrintf(PrintfCol::����, "");
	
}