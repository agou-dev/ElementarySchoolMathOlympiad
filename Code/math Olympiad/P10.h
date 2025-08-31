#pragma once
void P10_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P10 Example 1: Follow up on Issues","P10��һ ׷������"},
		{"Title: On a highway, car A is traveling at a speed of 90000 meters per hour, followed by car B chasing car A at a speed of 108000 meters per hour. Car B's\nbrakes fail and it rushes forward, sounding a warning horn for 5 seconds before colliding\nwith car A. How many meters are the two cars apart when car B honks its horn?",
		"��Ŀ��һ����·��A�����ٶ���90000��/Сʱ����������B����׷A�������ٶ���108000��/Сʱ��B����ɲ��ʧ����ǰ��ȥ������Ԥ��5���ײ��A��������B��������ʱ������������?"},
		{"1. Calculate the speed difference V1. Speed difference V1=B, car speed V2-A, car speed V3",
		"1.�����ٶȲ�V1 �ٶȲ�V1=B�����ٶ�V2-A�����ٶ�V3"},
		{"2. Calculate the distance S1 after five hours. S1=speed difference V1 * horn time T1",
		"2.������Сʱ���е�·��S1 ��Сʱ���е�·��S1=�ٶȲ�V1*����ʱ��T1"},
		{"3. Calculate the distance between two vehicles S2, which is equal to the distance S1 after five hours divided by the number of seconds N1 in one hour",
		"3.�����������S2 �������S2=��Сʱ���е�·��S1/һСʱ����N1"},
		{"Answer: When car B honks its horn, the two cars are% d meters apart",
		"����B��������ʱ�������%d��"},
		//������
		{"BCarSpeedV2","B�����ٶ�V2"},
		{"ACarSpeedV3","A�����ٶ�V3"},
		{"HornTimeT1","����ʱ��T1"},
		{"OneHourSecondsN1","һСʱ����N1"},
		{"SpeedDifferenceV1","�ٶȲ�V1"},
		{"FiveHourJourneyS1","��Сʱ���е�·��S1"},
		{"TheDistanceBetweenTheTwoCarsIsS2","�������S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(B�����ٶ�V2, 108000);
	DefineLangVarInt(A�����ٶ�V3, 90000);
	DefineLangVarInt(����ʱ��T1, 5);
	DefineLangVarInt(һСʱ����N1, 3600);
	ColPrintf(PrintfCol::����, Lang("P10��һ ׷������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ����·��A�����ٶ���90000��/Сʱ����������B����׷A�������ٶ���108000��/Сʱ��B����ɲ��ʧ����ǰ��ȥ������Ԥ��5���ײ��A��������B��������ʱ������������?"));
	DefineLangVarInt(�ٶȲ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ٶȲ�V1 �ٶȲ�V1=B�����ٶ�V2-A�����ٶ�V3"));
	�ٶȲ�V1 = B�����ٶ�V2 - A�����ٶ�V3;
	�ٶȲ�V1.PrintProcessLog(1);
	DefineLangVarInt(��Сʱ���е�·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.������Сʱ���е�·��S1 ��Сʱ���е�·��S1=�ٶȲ�V1*����ʱ��T1"));
	��Сʱ���е�·��S1 = �ٶȲ�V1 * ����ʱ��T1;
	��Сʱ���е�·��S1.PrintProcessLog(2);
	DefineLangVarInt(�������S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����������S2 �������S2=��Сʱ���е�·��S1/һСʱ����N1"));
	�������S2 = ��Сʱ���е�·��S1 / һСʱ����N1;
	�������S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("����B��������ʱ�������%d��"), (int)�������S2);
}
void P10_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P10 Example 2: Follow up on Issues","P10���� ׷������"},
		{"Title: A and B in a 100 meter race, A runs from the starting point, B runs 8 meters behind A, and A still has 12\nmeters to reach the finish line. B catches up with A, but when B\nreaches the finish line, how much further does A have to reach the finish line?",
		"��Ŀ������100�����ܣ��״�����ܣ����ڼ׺���8���ܣ��׻���12�׵��յ�ʱ����׷�ϼף����ܵ��յ�ʱ�׻��ж�Զ�ܵ��յ㣿"},
		{"1. Calculate the running distance S1 when B catches up with A, where S1 equals the distance between the track and the distance S2 when B catches up with A",
		"1.������׷����ʱ����·��S1 ��׷����ʱ����·��S1=��������S2-��׷����ʱ��ľ���S3"},
		{"2. Calculate the distance traveled by B when chasing A, S2. The distance traveled by B when chasing A, S2=the\ndistance traveled by A when chasing B, S1+ the additional distance traveled by B compared to A, S3",
		"2.������׷����ʱ����·��S4 ��׷����ʱ����·��S4=��׷����ʱ����·��S1+�ұȼ׶���·��S5"},
		{"3. Calculate the distance traveled by B together S4=the distance traveled by B over A S5+the track distance S2",
		"3.�����ҹ��ߵ�·��S4 �ҹ��ߵ�·��S4=�ұȼ׶���·��S5+��������S2"},
		{"4. Calculate the distance S6 that A runs when B reaches the finish line. The distance S6\nthat A runs when B reaches the finish line is equal to (the distance S4 that B travels together/the distance S4 that B runs when B\nchases after A) * the distance S1 that A runs when B chases after A",
		"4.�����ҵ��յ�ʱ���ܾ���S6 �ҵ��յ�ʱ���ܾ���S6=(�ҹ��ߵ�·��S4/��׷����ʱ����·��S4)*��׷����ʱ����·��S1"},
		{"5. Calculate the distance between point A and the finish line when point B reaches the finish line. S7=track distance\nS2- distance between point A and the finish line when point B reaches the finish line. S6",
		"5.�����ҵ��յ�ʱ�����յ����S7 �ҵ��յ�ʱ�����յ����S7=��������S2-�ҵ��յ�ʱ���ܾ���S6"},
		{"Answer: When B reaches the finish line, A still has% f meters left to reach the finish line",
		"�����ܵ��յ�ʱ�׻���%f���ܵ��յ�"},
		//������
		{"TrackDistanceS2","��������S2"},
		{"TheDistanceS3FromBChasingA","��׷����ʱ��ľ���S3"},
		{"AIsBetterThanBMultiRouteS5","�ұȼ׶���·��S5"},
		{"WhenBChasesAARunsDistanceS1","��׷����ʱ����·��S1"},
		{"WhenBChasesABRunsDistanceS4","��׷����ʱ����·��S4"},
		{"TheJourneySharedByPartyBIsS4","�ҹ��ߵ�·��S4"},
		{"WhenBReachesTheFinishLineARunsADistanceOfS6","�ҵ��յ�ʱ���ܾ���S6"},
		{"WhenBReachesTheFinishLineAIsAtADistanceOfS7FromTheFinishLine","�ҵ��յ�ʱ�����յ����S7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,��������S2, 100);
	DefineLangVar(float,��׷����ʱ��ľ���S3, 12);
	DefineLangVar(float,�ұȼ׶���·��S5, 8);
	ColPrintf(PrintfCol::����, Lang("P10���� ׷������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������100�����ܣ��״�����ܣ����ڼ׺���8���ܣ��׻���12�׵��յ�ʱ����׷�ϼף����ܵ��յ�ʱ�׻��ж�Զ�ܵ��յ㣿"));
	DefineLangVar(float,��׷����ʱ����·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������׷����ʱ����·��S1 ��׷����ʱ����·��S1=��������S2-��׷����ʱ��ľ���S3"));
	��׷����ʱ����·��S1 = ��������S2 - ��׷����ʱ��ľ���S3;
	��׷����ʱ����·��S1.PrintProcessLog(1);
	DefineLangVar(float, ��׷����ʱ����·��S4, 0);
	ColPrintf(PrintfCol::����, Lang("2.������׷����ʱ����·��S4 ��׷����ʱ����·��S4=��׷����ʱ����·��S1+�ұȼ׶���·��S5"));
	��׷����ʱ����·��S4 = ��׷����ʱ����·��S1 + �ұȼ׶���·��S5;
	��׷����ʱ����·��S4.PrintProcessLog(2);
	DefineLangVar(float, �ҹ��ߵ�·��S4, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ҹ��ߵ�·��S4 �ҹ��ߵ�·��S4=�ұȼ׶���·��S5+��������S2"));
	�ҹ��ߵ�·��S4 = �ұȼ׶���·��S5 + ��������S2;
	�ҹ��ߵ�·��S4.PrintProcessLog(3);
	DefineLangVar(float, �ҵ��յ�ʱ���ܾ���S6, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����ҵ��յ�ʱ���ܾ���S6 �ҵ��յ�ʱ���ܾ���S6=(�ҹ��ߵ�·��S4/��׷����ʱ����·��S4)*��׷����ʱ����·��S1"));
	�ҵ��յ�ʱ���ܾ���S6 = (�ҹ��ߵ�·��S4 / ��׷����ʱ����·��S4) * ��׷����ʱ����·��S1;
	�ҵ��յ�ʱ���ܾ���S6.PrintProcessLog(4);
	DefineLangVar(float, �ҵ��յ�ʱ�����յ����S7, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����ҵ��յ�ʱ�����յ����S7 �ҵ��յ�ʱ�����յ����S7=��������S2-�ҵ��յ�ʱ���ܾ���S6"));
	�ҵ��յ�ʱ�����յ����S7 = ��������S2 - �ҵ��յ�ʱ���ܾ���S6;
	�ҵ��յ�ʱ�����յ����S7.PrintProcessLog(5);
	ColPrintf(PrintfCol::���, Lang("�����ܵ��յ�ʱ�׻���%f���ܵ��յ�"), (float)�ҵ��յ�ʱ�����յ����S7);
}
void P10()
{
	P10_1();
	ColPrintf(PrintfCol::����, "");
	P10_2();
	ColPrintf(PrintfCol::����, "");
	/*P3_3();
	ColPrintf(PrintfCol::����, "");*/
}
void P10_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P10();
	Lang.SetCurLanguage(LanguageLib::English);
	P10();
	ColPrintf(PrintfCol::����, "");

}