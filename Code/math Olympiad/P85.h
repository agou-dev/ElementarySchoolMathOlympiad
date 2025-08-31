#pragma once
void P85_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P85 Example 1 Clock Problem","P85 ��һ ʱ������"},
		{"Title: Starting from four o'clock, how much time does it take for the hour hand to coincide with the minute hand?",
		"��Ŀ�����ĵ㿪ʼ���پ�������ʱ�䣬ʱ������������غ�?"},
		{"1. Calculate the pursuit distance S1, Chasing distance S1=Four points N1 * Each large grid degree N2",
		"1.����׷��·��S1 ׷��·��S1=�ĵ�N1*ÿ������N2"},
		{"2. Calculate the speed difference V1, which is equal to the minute hand speed V2 minus the hour hand speed V3",
		"2.�����ٶȲ�V1 �ٶȲ�V1=�����ٶ�V2-ʱ���ٶ�V3"},
		{"3. Calculate the coincidence time T1. The coincidence time T1 is equal to the following distance S1 divided by the speed difference V1",
		"3.�����غ�ʱ��T1 �غ�ʱ��T1=׷��·��S1/�ٶȲ�V1"},
		//������
		{"Fouro'clockN1","�ĵ�N1"},
		{"EachgriddegreeN2","ÿ������N2"},
		{"MinutehandspeedV2","�����ٶ�V2"},
		{"ClockwisespeedV3","ʱ���ٶ�V3"},
		{"ChasingthedistanceS1","׷��·��S1"},
		{"SpeeddifferenceV1","�ٶȲ�V1"},
		{"ChasingthedistanceS1","׷��·��S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(�ĵ�N1, 4, 1);
	DefineFractionLangVar(ÿ������N2, 30, 1);
	DefineFractionLangVar(�����ٶ�V2, 6, 1);
	DefineFractionLangVar(ʱ���ٶ�V3, 1, 2);
	ColPrintf(PrintfCol::����, Lang("P85 ��һ ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ĵ㿪ʼ���پ�������ʱ�䣬ʱ������������غ�?"));
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddSector(4, 4, 3.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex6 = { {float(4),float(3.9)},{float(6.9),float(3.9)},{float(6.9),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');
	test.AddText(PrintfCol::�����ע, 0.9, 3.9, "12");
	test.AddText(PrintfCol::�����ע, 1.4, 5.5, "1");
	test.AddText(PrintfCol::�����ע, 2, 6.3, "2");
	test.AddText(PrintfCol::�����ע, 4, 7.0, "3");
	test.AddText(PrintfCol::�����ע, 5.3, 6.9, "4");
	test.AddText(PrintfCol::�����ע, 6.7, 5.7, "5");
	test.AddText(PrintfCol::�����ע, 7.3, 4, "6");
	test.AddText(PrintfCol::�����ע, 6.7, 2.3, "7");
	test.AddText(PrintfCol::�����ע, 5.7, 1.3, "8");
	test.AddText(PrintfCol::�����ע, 4, 0.9, "9");
	test.AddText(PrintfCol::�����ע, 3.0, 1.0, "10");
	test.AddText(PrintfCol::�����ע, 2.0, 1.5, "11");
	//test.AddScanLineByEdgeGradient(4.0, 2.0, 4, 4.0, 0, 0, '*');
	ScanningLineT::Point Begin = {4,4};
	ScanningLineT::Point End = {6.0,5.7};
	test.AddLine(Begin, End, 0.07, PrintfCol::Green);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionLangVar(׷��·��S1, 1,1);
	ColPrintf(PrintfCol::����, Lang("1.����׷��·��S1 ׷��·��S1=�ĵ�N1*ÿ������N2"));
	׷��·��S1 = �ĵ�N1 * ÿ������N2;
	׷��·��S1.PrintProcessLog(1);
	DefineFractionLangVar(�ٶȲ�V1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("2.�����ٶȲ�V1 �ٶȲ�V1=�����ٶ�V2-ʱ���ٶ�V3"));
	�ٶȲ�V1 = �����ٶ�V2 - ʱ���ٶ�V3;
	�ٶȲ�V1.PrintProcessLog(2);
	DefineFractionLangVar(�غ�ʱ��T1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("3.�����غ�ʱ��T1 �غ�ʱ��T1=׷��·��S1/�ٶȲ�V1"));
	�غ�ʱ��T1 = ׷��·��S1 / �ٶȲ�V1;
	�غ�ʱ��T1.PrintProcessLog(3);
}
void P85_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P85 Example 2 Clock Problem","P85 ���� ʱ������"},
		{"Question: How many minutes after five o'clock, the hour and minute hands must be equidistant from five and must be on both sides of five",
		"��Ŀ���������ٷ��Ӻ�ʱ��ͷ�����������ȣ��ұ�����5����"},
		{"1. Calculate the tracking distance S1. The tracking distance S1 is equal to five points N1 multiplied by each large grid degree N2",
		"1.����׷��·��S1 ׷��·��S1=���N1*ÿ������N2"},
		{"2. Set the hour and minute hands of m minutes to be equal to the distance of 5, and on both sides of 5",
		"2.��m����ʱʱ��ͷ�����������ȣ�������5����"},
		{"1. List the distance traveled by the hour hand in the formula S1 m * 0.5",
		"1.�г�ʽ��ʱ���ߵ�·��S1 m*0.5"},
		{"2. List the distance between the minute hand and the distance 5 in equation S2 150-6m",
		"2.�г�ʽ�ӷ������5��·��S2 150-6m"},
		{"3. According to S1 and S2, list the equation S3 m * 0.5=150-6m",
		"3.����S1��S2�г�ʽ��S3 m*0.5=150-6m"},
		{"4. Simplify S3 to obtain S4 6.5m=150",
		"4.����S3�õ�S4 6.5m=150"},
		{"5. Simplify S4 to obtain S5 m=23 (1/13)",
		"5.����S4�õ�S5 m=23(1/13)"},
		//������
		{"Fiveo'clockN1","���N1"},
		{"EachgriddegreeN2","ÿ������N2"},
		{"ChasingthedistanceS1","׷��·��S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(���N1, 5, 1);
	DefineFractionLangVar(ÿ������N2, 30, 1);
	ColPrintf(PrintfCol::����, Lang("P85 ���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������ٷ��Ӻ�ʱ��ͷ�����������ȣ��ұ�����5����"));
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddSector(4, 4, 3.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex6 = { {float(4),float(3.9)},{float(6.9),float(3.9)},{float(6.9),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');
	test.AddText(PrintfCol::�����ע, 0.9, 3.9, "12");
	test.AddText(PrintfCol::�����ע, 1.4, 5.5, "1");
	test.AddText(PrintfCol::�����ע, 2, 6.3, "2");
	test.AddText(PrintfCol::�����ע, 4, 7.0, "3");
	test.AddText(PrintfCol::�����ע, 5.3, 6.9, "4");
	test.AddText(PrintfCol::�����ע, 6.7, 5.7, "5");
	test.AddText(PrintfCol::�����ע, 7.3, 4, "6");
	test.AddText(PrintfCol::�����ע, 6.7, 2.3, "7");
	test.AddText(PrintfCol::�����ע, 5.7, 1.3, "8");
	test.AddText(PrintfCol::�����ע, 4, 0.9, "9");
	test.AddText(PrintfCol::�����ע, 3.0, 1.0, "10");
	test.AddText(PrintfCol::�����ע, 2.0, 1.5, "11");
	//test.AddScanLineByEdgeGradient(4.0, 2.0, 4, 4.0, 0, 0, '*');
	ScanningLineT::Point Begin = { 4,4 };
	ScanningLineT::Point End = { 4.4,5.3 };
	ScanningLineT::Point Begin1 = { 4,4 };
	ScanningLineT::Point End1 = { 6.0,5.7 };
	test.AddLine(Begin, End, 0.07, PrintfCol::Green);
	test.AddLine(Begin1, End1, 0.07, PrintfCol::Green);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionLangVar(׷��·��S1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("1.����׷��·��S1 ׷��·��S1=���N1*ÿ������N2"));
	׷��·��S1 = ���N1 * ÿ������N2;
	׷��·��S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::����, Lang("2.��m����ʱʱ��ͷ�����������ȣ�������5����"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��ʱ���ߵ�·��S1 m*0.5"));
	ColPrintf(PrintfCol::����, Lang("2.�г�ʽ�ӷ������5��·��S2 150-6m"));
	ColPrintf(PrintfCol::����, Lang("3.����S1��S2�г�ʽ��S3 m*0.5=150-6m"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 6.5m=150"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�õ�S5 m=23(1/13)"));
}
void P85_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P85 Example Three Clock Problem","P85 ���� ʱ������"},
		{"Title: Lily started reading after 3 o'clock, and the minute and hour hands happened to coincide. After 5 o'clock, the minute and hour hands happened to coincide. How much time did Lily read?",
		"��Ŀ������3�����ʱ��ʼ���飬�����ʱ�������غϣ�����5����ӣ������ʱ�������غϣ������˶���ʱ�����?"},
		{"1. Calculate the three-point multiple pursuit distance S1. The three-point multiple pursuit distance S1=three-point N1 * per large grid degree N2",
		"1.���������׷��·��S1 �����׷��·��S1=����N1*ÿ������N2"},
		{"2. Calculate the three-point chase time T1, which is equal to the three-point chase distance S1 divided by the minute hand speed V2 and the hour hand speed V3",
		"2.���������׷��ʱ��T1 �����׷��ʱ��T1=�����׷��·��S1/(�����ٶ�V2-ʱ���ٶ�V3)"},
		{"3. Calculate the distance S2 for catching up at five o'clock, where S2=five o'clock N3 * N2 for each large grid degree",
		"3.��������׷��·��S2 ����׷��·��S2=���N3*ÿ������N2"},
		{"4. Calculate the time T2 for catching up after 5 o'clock. The time T2 for catching up after 5 o'clock is equal to the distance S2 for catching up after 5 o'clock divided by the minute hand speed V2 and the hour hand speed V3",
		"4.��������׷��ʱ��T2 ����׷��ʱ��T2=����׷��·��S2/(�����ٶ�V2-ʱ���ٶ�V3)"},
		{"5. Calculate how long you have been reading the book T3=after five o'clock, time T2- after three o'clock, time T1",
		"5.���㿴�˶೤ʱ����T3 ���˶೤ʱ����T3=����׷��ʱ��T2-�����׷��ʱ��T1"},
		//������
		{"Threeo'clockN1","����N1"},
		{"EachgriddegreeN2","ÿ������N2"},
		{"MinutehandspeedV2","�����ٶ�V2"},
		{"ClockwisespeedV3","ʱ���ٶ�V3"},
		{"Fiveo'clockN3","���N3"},
		{"Afterthreeo'clock,catchupwiththeS1journey","�����׷��·��S1"},
		{"After3o'clock,catchupwithtimeT1","�����׷��ʱ��T1"},
		{"TrackS2after5o'clock","����׷��·��S2"},
		{"After5o'clock,catchupwithtimeT2","����׷��ʱ��T2"},
		{"HowlonghaveyoubeenreadingT3","���˶೤ʱ����T3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(����N1, 3, 1);
	DefineFractionLangVar(ÿ������N2, 30, 1);
	DefineFractionLangVar(�����ٶ�V2, 6, 1);
	DefineFractionLangVar(ʱ���ٶ�V3, 1, 2);
	DefineFractionLangVar(���N3, 5, 1);
	ColPrintf(PrintfCol::����, Lang("P85 ���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������3�����ʱ��ʼ���飬�����ʱ�������غϣ�����5����ӣ������ʱ�������غϣ������˶���ʱ�����?"));
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddSector(4, 4, 3.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex6 = { {float(4),float(3.9)},{float(6.9),float(3.9)},{float(6.9),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');
	test.AddText(PrintfCol::�����ע, 0.9, 3.9, "12");
	test.AddText(PrintfCol::�����ע, 1.4, 5.5, "1");
	test.AddText(PrintfCol::�����ע, 2, 6.3, "2");
	test.AddText(PrintfCol::�����ע, 4, 7.0, "3");
	test.AddText(PrintfCol::�����ע, 5.3, 6.9, "4");
	test.AddText(PrintfCol::�����ע, 6.7, 5.7, "5");
	test.AddText(PrintfCol::�����ע, 7.3, 4, "6");
	test.AddText(PrintfCol::�����ע, 6.7, 2.3, "7");
	test.AddText(PrintfCol::�����ע, 5.7, 1.3, "8");
	test.AddText(PrintfCol::�����ע, 4, 0.9, "9");
	test.AddText(PrintfCol::�����ע, 3.0, 1.0, "10");
	test.AddText(PrintfCol::�����ע, 2.0, 1.5, "11");
	//test.AddScanLineByEdgeGradient(4.0, 2.0, 4, 4.0, 0, 0, '*');
	ScanningLineT::Point Begin1 = { 4,4 };
	ScanningLineT::Point End1 = { 6.0,4.3 };
	//test.AddLine(Begin, End, 0.07, PrintfCol::Green);
	test.AddLine(Begin1, End1, 0.07, PrintfCol::Green);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);

	
	DefineFractionLangVar(�����׷��·��S1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("1.���������׷��·��S1 �����׷��·��S1=����N1*ÿ������N2"));
	�����׷��·��S1 = ����N1 * ÿ������N2;
	�����׷��·��S1.PrintProcessLog(1);
	DefineFractionLangVar(�����׷��ʱ��T1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("2.���������׷��ʱ��T1 �����׷��ʱ��T1=�����׷��·��S1/(�����ٶ�V2-ʱ���ٶ�V3)"));
	�����׷��ʱ��T1 = �����׷��·��S1 / (�����ٶ�V2 - ʱ���ٶ�V3);
	�����׷��ʱ��T1.PrintProcessLog(2);
	DefineFractionLangVar(����׷��·��S2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("3.��������׷��·��S2 ����׷��·��S2=���N3*ÿ������N2"));
	����׷��·��S2 = ���N3 * ÿ������N2;
	����׷��·��S2.PrintProcessLog(3);
	DefineFractionLangVar(����׷��ʱ��T2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("4.��������׷��ʱ��T2 ����׷��ʱ��T2=����׷��·��S2/(�����ٶ�V2-ʱ���ٶ�V3)"));
	����׷��ʱ��T2 = ����׷��·��S2 / (�����ٶ�V2 - ʱ���ٶ�V3);
	����׷��ʱ��T2.PrintProcessLog(4);
	DefineFractionLangVar(���˶೤ʱ����T3, 1, 1);
	ColPrintf(PrintfCol::����, Lang("5.���㿴�˶೤ʱ����T3 ���˶೤ʱ����T3=����׷��ʱ��T2-�����׷��ʱ��T1"));
	���˶೤ʱ����T3 = ����׷��ʱ��T2 - �����׷��ʱ��T1;
	���˶೤ʱ����T3.PrintProcessLog(5);
}
void P85_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P85 Case Four Clock Problem","P85 ���� ʱ������"},
		{"Title: Xiaoming has a watch that is two seconds faster than the standard time per minute. Xiaoming aligns the time at 8 o'clock in the morning. When the watch points to 12 o'clock, what is the standard time?",
		"��Ŀ��С���п��ֱ�ÿ���ӱȱ�׼ʱ������룬С������8���ʱ���׼������ָ��12ʱ����׼ʱ���Ƕ���?"},
		{"Set the standard time (minutes) as t and the hour as t1",
		"���׼ʱ��(����)Ϊt,СʱΪt1"},
		{"1. List the distance traveled per minute using equation S1 (1+2/60) t=(31/30) t=240",
		"1.�г�ÿ�����ߵ�·��ʽ��S1 (1+ 2/60)t=(31/30)t=240"},
		{"2. Simplify S1 to obtain S2 t=240/(31/30)=7200/31",
		"2.����S1�õ�S2 t=240/(31/30)=7200/31"},
		{"3. Simplify S2 to obtain S3 t/60=t1=7200/31/60=120/31",
		"3.����S2�õ�S3 t/60=t1=7200/31/60=120/31"},
		{"4. Because from 8:00 to 12:00 in the table, the standard time is 120/31 hours, and 120/31+8=11 (27/31) hours",
		"4.��Ϊ��8�㿪ʼ����12�㣬��׼ʱ����120/31Сʱ��120/31+8=11(27/31)Сʱ"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P85 ���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������ٷ��Ӻ�ʱ��ͷ�����������ȣ��ұ�����5����"));
	ColPrintf(PrintfCol::����, Lang("���׼ʱ��(����)Ϊt,СʱΪt1"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ÿ�����ߵ�·��ʽ��S1 (1+ 2/60)t=(31/30)t=240"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 t=240/(31/30)=7200/31"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 t/60=t1=7200/31/60=120/31"));
	ColPrintf(PrintfCol::����, Lang("4.��Ϊ��8�㿪ʼ����12�㣬��׼ʱ����120/31Сʱ��120/31+8=11(27/31)Сʱ"));
}
void P85()
{
	P85_1();
	ColPrintf(PrintfCol::����, "");
	P85_2();
	ColPrintf(PrintfCol::����, "");
	P85_3();
	ColPrintf(PrintfCol::����, "");
	P85_4();
	ColPrintf(PrintfCol::����, "");
	//P84_2();
	ColPrintf(PrintfCol::����, "");
	//P84_3();
	ColPrintf(PrintfCol::����, "");
	//P77_4();
	ColPrintf(PrintfCol::����, "");
	//P77_5();
	ColPrintf(PrintfCol::����, "");
}
void P85_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P85();
	Lang.SetCurLanguage(LanguageLib::English);
	P85();
	ColPrintf(PrintfCol::����, "");

}