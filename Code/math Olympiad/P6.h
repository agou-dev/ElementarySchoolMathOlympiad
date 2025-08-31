#pragma once
void P6_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P6 Example 1 Train Crossing the Bridge","P6��һ �𳵹���"},
		{"Title: The train is 360 meters long and has a speed of 16 meters per second. It takes 90 seconds to pass through a tunnel. How long is the tunnel?",
		"��Ŀ���𳵳�360�ף��ٶ���16��ÿ�룬ͨ��һ�����Ҫ90�룬�������೤?"},
		{"1. Calculate the tunnel length S1. Tunnel length S1=(train speed V1 * transit time T1) - train length S2",
		"1.�����������S1 �������S1=(���ٶ�V1*ͨ��ʱ��T1)-�𳵳���S2"},
		{"Answer: This tunnel is% d meters long",
		"����������%d��"},
		//������
		{"TrainSpeedV1","���ٶ�V1"},
		{"ByTimeT1","ͨ��ʱ��T1"},
		{"TrainLengthN1","�𳵳���S2"},
		{"TunnelLengthS1","�������S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ٶ�V1, 16);
	DefineLangVarInt(ͨ��ʱ��T1, 90);
	DefineLangVarInt(�𳵳���S2, 360);
	ColPrintf(PrintfCol::����, Lang("P6��һ �𳵹���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���𳵳�360�ף��ٶ���16��ÿ�룬ͨ��һ�����Ҫ90�룬�������೤?"));
	DefineLangVarInt(�������S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����������S1 �������S1=(���ٶ�V1*ͨ��ʱ��T1)-�𳵳���S2"));
	�������S1 = (���ٶ�V1 * ͨ��ʱ��T1) - �𳵳���S2;
	�������S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::���, Lang("����������%d��"), (int)�������S1);
}
void P6_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P6 Example 1 Train Crossing the Bridge","P6���� �𳵹���"},
		{"Title: A convoy travels at a speed of 5 meters per second across a 200 meter long bridge, taking a total of 145 seconds. Each car is 5 meters long and spaced 8 meters apart. How many cars are there in total?",
		"��Ŀ��һ�����ӵ��ٶ���5��/����ʻ��200�׳����ţ�����ʱ145�룬ÿ������5�ף����8�ף�һ���ж�������?"},
		{"1. Calculate fleet length S1 Fleet length S1=(transit time * transit speed) - Bridge length",
		"1.���㳵�ӳ���S1 ���ӳ���S1=(ͨ��ʱ��T1*ͨ���ٶ�V1)-�ų�S4"},
		{"2. Calculate shared vehicle N1. Shared vehicle N1=(fleet length S1+interval length S2)/(vehicle length S3+interval length S1)",
		"2.���㹲�еĳ���N1 ���еĳ���N1=(���ӳ���S1+�������S2)/(����S3+�������S2)"},
		{"Answer: There are a total of %d vehicles",
		"��һ����%d����"},
		//������
		{"TrainSpeedV1","�ų�S4"},
		{"ByTimeT1","ͨ��ʱ��T1"},
		{"TrainLengthN1","����S3"},
		{"TunnelLengthS1","�������S2"},
		{"BySpeedV1","ͨ���ٶ�V1"},
		{"FleetLengthS1","���ӳ���S1"},
		{"SharedVehicleN1","���еĳ���N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic = 
		"0:��\n"
		"-:���\n"
		"���ӱ��ͣ�0-0-0-0����0-0\n"
		"���㱾�ͣ�0-0-0-0����0-0-\n"
		;
	DefineLangVarInt(�ų�S4, 200);
	DefineLangVarInt(ͨ��ʱ��T1, 145);
	DefineLangVarInt(����S3, 5);
	DefineLangVarInt(�������S2, 8);
	DefineLangVarInt(ͨ���ٶ�V1, 5);
	ColPrintf(PrintfCol::����, Lang("P6���� �𳵹���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ�����ӵ��ٶ���5��/����ʻ��200�׳����ţ�����ʱ145�룬ÿ������5�ף����8�ף�һ���ж�������?"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(���ӳ���S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳵�ӳ���S1 ���ӳ���S1=(ͨ��ʱ��T1*ͨ���ٶ�V1)-�ų�S4"));
	���ӳ���S1 = (ͨ��ʱ��T1 * ͨ���ٶ�V1) - �ų�S4;
	���ӳ���S1.PrintProcessLog(1);
	DefineLangVarInt(���еĳ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㹲�еĳ���N1 ���еĳ���N1=(���ӳ���S1+�������S2)/(����S3+�������S2)"));
	���еĳ���N1 = (���ӳ���S1 + �������S2) / (����S3 + �������S2);
	���еĳ���N1.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("��һ����%d����"), (int)���еĳ���N1);
}
void P6_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P6 Example Three: Train Crossing the Bridge","P6���� �𳵹���"},
		{"Title: Three grades each have 100 people going on a spring outing, divided into two vertical rows. The distance between adjacent vertical rows of grades 1, 2, and\n3 is 1, 2, and 3 meters respectively. The distance between grades is 5 meters, and the speed is 90 meters per minute.\nIt took 4 minutes to cross a bridge. How many meters is the bridge?",
		"��Ŀ�������꼶����100��ȥ���Σ����ֳ��������ţ�1��2��3���꼶���������������ֱ���1��2��3�ף��꼶֮������5�ף��ٶȶ���90��/���ӣ�����һ��������4����,���ж�����?"},
		{"1. Calculate the spacing number N1. The spacing number N1=the number of students in a single grade NP1/the number of columns in a single grade N2- the spacing number N3\nat the end without spacing",
		"1.����ÿ�꼶�����N1 ÿ�꼶�����N1=���꼶����NP1/���꼶������N2-�����û�м��ļ����N3"},
		{"2. Calculate the total distance between teams S1=the number of distances between each grade N1 * (the distance between grade 1 S2+grade 2 S3+grade 3 S4)",
		"2.��������ܵļ��S1 �����ܵļ��S1=ÿ�꼶�����N1*(��1�꼶���S2+��2�꼶���S3+��3�꼶���S4)"},
		{"3. Calculate team length S5. Team length S5=total distance between teams S1+(distance between third grade N4 * distance between grades S6)",
		"3.������鳤��S5 ���鳤��S5=�����ܵļ��S1+(���꼶֮��ļ����N4*�꼶֮����S6)"},
		{"4.Calculate Bridge Length S7 Bridge Length S7=(Team Speed V1 * Passing Time T1) - Team Length S5",
		"4.�����ų�S7 �ų�S7=(�����ٶ�V1*ͨ��ʱ��T1)-���鳤��S5"},
		{"Answer: The bridge is% d meters long",
		"������%d��"},
		//������
		{"NumberOfStudentsInASingleGradeNP1","���꼶����NP1"},
		{"NumberOfColumnsInASingleGradeN2","���꼶������N2"},
		{"TheNumberOfSpacingN3WithoutAnySpacingAtTheEnd","�����û�м��ļ����N3"},
		{"Grade1SpacingS2","��1�꼶���S2"},
		{"Grade2SpacingS3","��2�꼶���S3"},
		{"Grade3ApacingS4","��3�꼶���S4"},
		{"TheDistanceBetweenThirdGradeStudentsN4","���꼶֮��ļ����N4"},
		{"IntervalBetweenGrades S6","�꼶֮����S6"}, 
		{"TeamSpeedV1","�����ٶ�V1"},
		{"ByTimeT1","ͨ��ʱ��T1"},
		{"DistanceBetweenGradesN1","ÿ�꼶�����N1"},
		{"TheTotalDistanceBetweenTeamsS1","�����ܵļ��S1"},
		{"TeamLengthS5","���鳤��S5"},
		{"BridgeLengthS7","�ų�S7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"0:ѧ��\n"
		"-:���(m)\n"
		"1��      2��       3��\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"������������������������\n"
		;

	DefineLangVarInt(���꼶����NP1, 100);
	DefineLangVarInt(���꼶������N2, 2);
	DefineLangVarInt(�����û�м��ļ����N3, 1);
	DefineLangVarInt(��1�꼶���S2, 1);
	DefineLangVarInt(��2�꼶���S3, 2);
	DefineLangVarInt(��3�꼶���S4, 3);
	DefineLangVarInt(���꼶֮��ļ����N4, 2);
	DefineLangVarInt(�꼶֮����S6, 5);
	DefineLangVarInt(�����ٶ�V1, 90);
	DefineLangVarInt(ͨ��ʱ��T1, 4);
	ColPrintf(PrintfCol::����, Lang("P6���� �𳵹���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������꼶����100��ȥ���Σ����ֳ��������ţ�1��2��3���꼶���������������ֱ���1��2��3�ף��꼶֮������5�ף��ٶȶ���90��/���ӣ�����һ��������4����,���ж�����?"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(ÿ�꼶�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ÿ�꼶�����N1 ÿ�꼶�����N1=���꼶����NP1/���꼶������N2-�����û�м��ļ����N3"));
	ÿ�꼶�����N1 = ���꼶����NP1 / ���꼶������N2 - �����û�м��ļ����N3;
	ÿ�꼶�����N1.PrintProcessLog(1);
	DefineLangVarInt(�����ܵļ��S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������ܵļ��S1 �����ܵļ��S1=ÿ�꼶�����N1*(��1�꼶���S2+��2�꼶���S3+��3�꼶���S4)"));
	�����ܵļ��S1 = ÿ�꼶�����N1 * (��1�꼶���S2 + ��2�꼶���S3 + ��3�꼶���S4);
	�����ܵļ��S1.PrintProcessLog(2);
	DefineLangVarInt(���鳤��S5, 0);
	ColPrintf(PrintfCol::����, Lang("3.������鳤��S5 ���鳤��S5=�����ܵļ��S1+(���꼶֮��ļ����N4*�꼶֮����S6)"));
	���鳤��S5 = �����ܵļ��S1 + (���꼶֮��ļ����N4 * �꼶֮����S6);
	���鳤��S5.PrintProcessLog(3);
	DefineLangVarInt(�ų�S7, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����ų�S7 �ų�S7=(�����ٶ�V1*ͨ��ʱ��T1)-���鳤��S5"));
	�ų�S7 = (�����ٶ�V1 * ͨ��ʱ��T1) - ���鳤��S5;
	�ų�S7.PrintProcessLog(4);
	ColPrintf(PrintfCol::���, Lang("������%d��"), (int)�ų�S7);
}
void P6()
{
	P6_1();
	ColPrintf(PrintfCol::����, "");
	P6_2();
	ColPrintf(PrintfCol::����, "");
	P6_3();
	ColPrintf(PrintfCol::����, "");
}
void P6_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P6();
	Lang.SetCurLanguage(LanguageLib::English);
	P6();
	ColPrintf(PrintfCol::����, "");

}