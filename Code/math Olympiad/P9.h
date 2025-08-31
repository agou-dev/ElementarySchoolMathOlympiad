#pragma once
void P9_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P9 case one encounter problem","P9��һ ��������"},
		{"Title: Two people, A and B, travel 540 meters apart from each other from point A to point B. They travel in opposite directions, with A traveling at a speed\nof 36 meters and B traveling at a speed of 54 meters. They have a walkie talkie, which can be used when the distance is\nless than 90 meters. How long can they use the walkie talkie to communicate after they depart?\nHow long does it take to use a walkie talkie?",
		"��Ŀ�������������540�׷ֱ��A�ص�B�أ��˳�������У����ٶ���36�ף����ٶ���54�ף�������һ���Խ�����������90��ʱ���öԽ��������ǳ������ÿ��öԽ�������?�öԽ���ʱ�����೤ʱ�䣿"},
		{"1. Calculate the total distance S1=Distance distance S2- Available walkie talkie distance S3",
		"1.������·��S1 ��·��S1=���·��S2-���öԽ���·��S3"},
		{"2. Calculate the time T1 used, which is equal to the total distance S1 / (speed V1 of vehicle A+speed V2 of vehicle B)",
		"2.��������ʱ��T1 ����ʱ��T1=��·��S1/(���ٶ�V1+���ٶ�V2)"},
		{"3. Calculate the contact time T2 using the walkie talkie. The contact time T2 using the walkie talkie is equal to the available walkie talkie distance S3 divided by (speed V1 of A+speed V2 of B)",
		"3.�����öԽ�������ʱ��T2 �öԽ�������ʱ��T2=���öԽ���·��S3/(���ٶ�V1+���ٶ�V2)"},
		{"Answer: They can use walkie talkies to communicate within% d hours after departure. How long does it take to use walkie talkies for% d hours",
		"�����ǳ�����%dСʱ���öԽ������磬�öԽ���ʱ�����೤%dСʱ"},
		//������
		{"NDistanceS2","���·��S2"},
		{"NAvailableWalkieTalkieRangeS3","���öԽ���·��S3"},
		{"NASpeedV1","���ٶ�V1"},
		{"NBSpeedV2","���ٶ�V2"},
		{"NTotalDistanceS1","��·��S1"},
		{"NTimeTakenT1","����ʱ��T1"},
		{"NContactTimeT2ThroughWalkieTalkie","�öԽ�������ʱ��T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ٶ�V1, 36);
	DefineLangVarInt(���ٶ�V2, 54);
	DefineLangVarInt(���·��S2, 540);
	DefineLangVarInt(���öԽ���·��S3, 90);
	ColPrintf(PrintfCol::����, Lang("P9��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������������540�׷ֱ��A�ص�B�أ��˳�������У����ٶ���36�ף����ٶ���54�ף�������һ���Խ�����������90��ʱ���öԽ��������ǳ������ÿ��öԽ�������?�öԽ���ʱ�����೤ʱ�䣿"));
	DefineLangVarInt(��·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������·��S1 ��·��S1=���·��S2-���öԽ���·��S3"));
	��·��S1 = ���·��S2 - ���öԽ���·��S3;
	��·��S1.PrintProcessLog(1);
	DefineLangVarInt(����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������ʱ��T1 ����ʱ��T1=��·��S1/(���ٶ�V1+���ٶ�V2)"));
	����ʱ��T1 = ��·��S1 / (���ٶ�V1 + ���ٶ�V2);
	����ʱ��T1.PrintProcessLog(2);
	DefineLangVarInt(�öԽ�������ʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����öԽ�������ʱ��T2 �öԽ�������ʱ��T2=���öԽ���·��S3/(���ٶ�V1+���ٶ�V2)"));
	�öԽ�������ʱ��T2 = ���öԽ���·��S3 / (���ٶ�V1 + ���ٶ�V2);
	�öԽ�������ʱ��T2.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("�����ǳ�����%dСʱ���öԽ������磬�öԽ���ʱ�����೤%dСʱ"), (int)����ʱ��T1, (int)�öԽ�������ʱ��T2);
}
void P9_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P9 Case 2 Encounter Problem","P9���� ��������"},
		{"Title: A and B travel at speeds of 6 kilometers and 4 kilometers respectively from A and B, which are 30 kilometers apart. When the distance is 10 kilometers, how long does it take for them to travel?",
		"��Ŀ���������˴����30ǧ��AB���س����ٶ���6ǧ�׺�4ǧ�ף���������10ǧ�ף������˶���ʱ��?"},
		{"1. Calculate the distance S1 that has not yet met and traveled. S1=total distance S1- the distance traveled by question A and question B",
		"1.���㻹δ�����ߵ�·��S1 ��δ�����ߵ�·��S1=��·��S1-��Ŀ�����ߵľ���S2"},
		{"2. Calculate the time T1 that has not yet met and left. The time T1 that has not yet met and left is equal to the distance S1 that has not yet met and left divided by (speed V1 of A+speed V2 of B)",
		"2.���㻹δ�����ߵ�ʱ��T1 ��δ�����ߵ�ʱ��T1=��δ�����ߵ�·��S1/(���ٶ�V1+���ٶ�V2)"},
		{"3. Calculate the distance traveled by meeting S1=total distance S1+distance traveled by question A and B S2",
		"3.���������ߵ�·��S3 �����ߵ�·��S1=��·��S1+��Ŀ�����ߵľ���S2"},
		{"4. Calculate the time T1 of meeting and walking, which is equal to the distance S3 of meeting and walking divided by (speed V1 of A+speed V2 of B)",
		"4.���������ߵ�ʱ��T1 �����ߵ�ʱ��T1=�����ߵ�·��S3/(���ٶ�V1+���ٶ�V2)"},
		{"Answer: He walked for% d or% d hours",
		"��������%d��%dСʱ."},
		//������
		{"NTotalDistanceS1","��·��S1"},
		{"NTopicAAndB:DistanceTraveledS2","��Ŀ�����ߵľ���S2"},
		{"NASpeedV1","���ٶ�V1"},
		{"NBSpeedV2","���ٶ�V2"},
		{"NTheJourneyS1ThatWeHaven'tMetYet","��δ�����ߵ�·��S1"},
		{"NTimeT1BeforeMeetingAndLeaving","��δ�����ߵ�ʱ��T1"},
		{"NEncounterAndJourneyS3","�����ߵ�·��S3"},
		{"NMeetingAndLeavingTimeT1","�����ߵ�ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"The first type\n"
		"A                      10kilometre           B\n"
		"|-------------------->         <----------|\n"
		"|-----------------------------------------|\n"
		"A                   30kilometre                B\n"
		"The second type\n"
		"A                      10kilometre           B\n"
		"                       <------------------|\n"
		"|------------------------------->\n"
		"|-----------------------------------------|\n"
		"A                   30kilometre                B\n"
		;
	DefineLangVarInt(��·��S1, 30);
	DefineLangVarInt(��Ŀ�����ߵľ���S2, 10);
	DefineLangVarInt(���ٶ�V1, 6);
	DefineLangVarInt(���ٶ�V2, 4);
	ColPrintf(PrintfCol::����, Lang("P9���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������˴����30ǧ��AB���س����ٶ���6ǧ�׺�4ǧ�ף���������10ǧ�ף������˶���ʱ��?(��A��B)"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(��δ�����ߵ�·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㻹δ�����ߵ�·��S1 ��δ�����ߵ�·��S1=��·��S1-��Ŀ�����ߵľ���S2"));
	��δ�����ߵ�·��S1 = ��·��S1 - ��Ŀ�����ߵľ���S2;
	��δ�����ߵ�·��S1.PrintProcessLog(1);
	DefineLangVarInt(��δ�����ߵ�ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㻹δ�����ߵ�ʱ��T1 ��δ�����ߵ�ʱ��T1=��δ�����ߵ�·��S1/(���ٶ�V1+���ٶ�V2)"));
	��δ�����ߵ�ʱ��T1 = ��δ�����ߵ�·��S1 / (���ٶ�V1 + ���ٶ�V2);
	��δ�����ߵ�ʱ��T1.PrintProcessLog(2);
	DefineLangVarInt(�����ߵ�·��S3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������ߵ�·��S3 �����ߵ�·��S3=��·��S1+��Ŀ�����ߵľ���S2"));
	�����ߵ�·��S3 = ��·��S1 + ��Ŀ�����ߵľ���S2;
	�����ߵ�·��S3.PrintProcessLog(3);
	DefineLangVarInt(�����ߵ�ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("4.���������ߵ�ʱ��T1 �����ߵ�ʱ��T1=�����ߵ�·��S3/(���ٶ�V1+���ٶ�V2)"));
	�����ߵ�ʱ��T1 = �����ߵ�·��S3 / (���ٶ�V1 + ���ٶ�V2);
	�����ߵ�ʱ��T1.PrintProcessLog(4);
	ColPrintf(PrintfCol::���, Lang("��������%d��%dСʱ."), (int)�����ߵ�ʱ��T1,(int)��δ�����ߵ�ʱ��T1);
}
void P9()
{
	P9_1();
	ColPrintf(PrintfCol::����, "");
	P9_2();
	ColPrintf(PrintfCol::����, "");
}
void P9_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P9();
	Lang.SetCurLanguage(LanguageLib::English);
	P9();
	ColPrintf(PrintfCol::����, "");

}