#pragma once
void P20_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P20 Example 3 Clock Problem","P20���� ʱ������"},
		{"Title: Lele woke up at 6:30 in the morning and arrived at school to find that the hour and minute hands on her watch had opened up in a straight line for the first time. So, when did Lele arrive at school?",
		"��Ŀ����������6����𴲣��ϵ�ѧУ�����ֱ��ϵ�ʱ��ͷ������õ�һ���ſ���һ��ֱ�ߣ���ô���ֵ���ѧУ��ʱ���Ǽ�ʱ����?"},
		{"1. Calculate the number of squares N1 where the hour and minute hands lead the hour hand at 7 o'clock. The number of squares N1 where the hour and minute hands lead the hour hand at 7 o'clock is equal to the number of squares N2\n* the number of squares N3 per square",
		"1.�����ߵ�ʱ��������ʱ������N1 �ߵ�ʱ��������ʱ������N1=����С����N2*ÿ���С����N3"},
		{"2. Calculate the leading grid number N2 at one moment. The leading grid number N2 at one moment is equal to the leading grid number N3 multiplied by the number of cells per large grid N3",
		"2.����һ��ʱ���ȴ����N2 һ��ʱ���ȴ����N2=һ������С����N3*ÿ���С����N3"},
		{"3. Calculate the clockwise speed V1. The clockwise speed V1 is equal to one hour N2/(one hour minute N1/number of small cells per large grid N3)",
		"3.����ʱ���ٶ�V1 ʱ���ٶ�V1=һСʱN2/(һСʱ����N1/ÿ���С����N3)" },
		{"4. Calculate the speed difference V2, which is equal to the minute hand speed V3 minus the hour hand speed V1",
		"4.�����ٶȲ�V2 �ٶȲ�V2=�����ٶ�V3-ʱ���ٶ�V1"},
		{"5. Calculate the error minute T1 at this moment. The error minute T1 at this moment is equal to (the leading grid number N2 at the moment - the leading grid number N1 at the hour and minute hands) divided by the speed difference V2",
		"5.������һ�̵�������T1 ��һ�̵�������T1=(һ��ʱ���ȴ����N2-�ߵ�ʱ��������ʱ������N1)/�ٶȲ�V2"},
		//������
		{"LeadingsmallgridnumberN2","����С����N2"},
		{"NumberofcellsperlargegridN3","ÿ���С����N3"},
		{"LeadingthesmallgridN3inaninstant","һ������С����N3"},
		{"OnehourN2","һСʱN2"},
		{"OnehourminuteN1","һСʱ����N1"},
		{"MinutehandspeedV3","�����ٶ�V3"},
		{"At7o'clock,theminutehandleadsthehourhandbyalargenumberofsquaresN1","�ߵ�ʱ��������ʱ������N1"},
		{"LeadingthelargegridN2inonemoment","һ��ʱ���ȴ����N2"},
		{"ClockwisespeedV1","ʱ���ٶ�V1"},
		{"SpeeddifferenceV2","�ٶȲ�V2"},
		{"TheerroratthismomentisminuteT1","��һ�̵�������T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
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
	test.AddScanLineByEdgeGradient(4.0, 2.0, 4, 4.0, 0, 0, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(3.7),float(5.5)} ,{float(3.7),float(5.4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	DefineFractionVar(����С����N2, 5,1,1);
	DefineFractionVar(ÿ���С����N3, 5,1);
	DefineFractionVar(һ������С����N3, 6,1);
	DefineFractionVar(һСʱN2, 1,1);
	DefineFractionVar(һСʱ����N1, 60,1);
	DefineFractionVar(�����ٶ�V3, 1,1);
	ColPrintf(PrintfCol::����, Lang("P20���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����������6����𴲣��ϵ�ѧУ�����ֱ��ϵ�ʱ��ͷ������õ�һ���ſ���һ��ֱ�ߣ���ô���ֵ���ѧУ��ʱ���Ǽ�ʱ����?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionVar(�ߵ�ʱ��������ʱ������N1, 1,1);
	ColPrintf(PrintfCol::����, Lang("1.�����ߵ�ʱ��������ʱ������N1 �ߵ�ʱ��������ʱ������N1=����С����N2*ÿ���С����N3"));
	�ߵ�ʱ��������ʱ������N1 = ����С����N2 * ÿ���С����N3;
	�ߵ�ʱ��������ʱ������N1.PrintProcessLog(1);
	DefineFractionVar(һ��ʱ���ȴ����N2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("2.����һ��ʱ���ȴ����N2 һ��ʱ���ȴ����N2=һ������С����N3*ÿ���С����N3"));
	һ��ʱ���ȴ����N2 = һ������С����N3 * ÿ���С����N3;
	һ��ʱ���ȴ����N2.PrintProcessLog(2);
	DefineFractionVar(ʱ���ٶ�V1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("3.����ʱ���ٶ�V1 ʱ���ٶ�V1=һСʱN2/(һСʱ����N1/ÿ���С����N3)"));
	ʱ���ٶ�V1 = һСʱN2 / (һСʱ����N1 / ÿ���С����N3);
	ʱ���ٶ�V1.PrintProcessLog(3);
	DefineFractionVar(�ٶȲ�V2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("4.�����ٶȲ�V2 �ٶȲ�V2=�����ٶ�V3-ʱ���ٶ�V1"));
	�ٶȲ�V2 = �����ٶ�V3 - ʱ���ٶ�V1;
	�ٶȲ�V2.PrintProcessLog(4);
	DefineFractionVar(��һ�̵�������T1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("5.������һ�̵�������T1 ��һ�̵�������T1=(һ��ʱ���ȴ����N2-�ߵ�ʱ��������ʱ������N1)/�ٶȲ�V2"));
	��һ�̵�������T1 = (һ��ʱ���ȴ����N2 - �ߵ�ʱ��������ʱ������N1) / �ٶȲ�V2;
	��һ�̵�������T1.PrintProcessLog(5);
}
void P20_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P20 Case Three Consolidate Clock Problem","P20�������� ʱ������"},
		{"Question: At what time between 9 and 10 o'clock is the minute hand on the same straight line as the hour hand?",
		"��Ŀ����9��10���ʲôʱ�̣�������ʱ����ͬһ��ֱ����?"},
		{"1. Calculate the speed difference V1, which is equal to the minute hand speed V2 minus the hour hand speed V3",
		"1.�����ٶȲ�V1 �ٶȲ�V1=�����ٶ�V2-ʱ���ٶ�V3"},
		{"2. Calculate the distance difference S1. The distance difference S1 is calculated as the degree N1 from the hour hand at 9 o'clock minus the degree N2 from the first straight line",
		"2.����·�̲�S1 ·�̲�S1=�ŵ�ʱ��ʱ�����N1-��һ��ֱ�߶���N2"},
		{"3. Calculate the first time walking on a straight line to time T1=distance difference S1/speed difference V1",
		"3.�����һ����ֱ�����ߵ�ʱ��T1 ��һ����ֱ�����ߵ�ʱ��T1=·�̲�S1/�ٶȲ�V1" },
		{"4. Calculate the distance from the hour hand N1/speed difference V1 when walking on a straight line for the second time to time T2=9 o'clock",
		"4.����ڶ�����ֱ�����ߵ�ʱ��T2 �ڶ�����ֱ�����ߵ�ʱ��T2=�ŵ�ʱ��ʱ�����N1/�ٶȲ�V1"},
		//������
		{"MinutehandspeedV2","�����ٶ�V2"},
		{"ClockwisespeedV3","ʱ���ٶ�V3"},
		{"At9o'clock,thedistancefromthehourhandisN1degrees","�ŵ�ʱ��ʱ�����N1"},
		{"ThefirststraightlinedegreeN2","��һ��ֱ�߶���N2"},
		{"SpeeddifferenceV1","�ٶȲ�V1"},
		{"DistancedifferenceS1","·�̲�S1"},
		{"FirsttimewalkingonastraightlineuntiltimeT1","��һ����ֱ�����ߵ�ʱ��T1"},
		{"ThesecondtimewalkingonastraightlinetotimeT2","�ڶ�����ֱ�����ߵ�ʱ��T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
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
	test.AddScanLineByEdgeGradient(2.0, 2.0, 4, 4.0, -(0), 0, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(3),float(4.0)} ,{float(3),float(3.9)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	DefineFractionVar(�����ٶ�V2, 6, 1);
	DefineFractionVar(ʱ���ٶ�V3, 1, 2);
	DefineFractionVar(�ŵ�ʱ��ʱ�����N1, 270, 1);
	DefineFractionVar(��һ��ֱ�߶���N2, 180, 1);
	ColPrintf(PrintfCol::����, Lang("P20���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����������6����𴲣��ϵ�ѧУ�����ֱ��ϵ�ʱ��ͷ������õ�һ���ſ���һ��ֱ�ߣ���ô���ֵ���ѧУ��ʱ���Ǽ�ʱ����?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionVar(�ٶȲ�V1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("1.�����ٶȲ�V1 �ٶȲ�V1=�����ٶ�V2-ʱ���ٶ�V3"));
	�ٶȲ�V1 = �����ٶ�V2 - ʱ���ٶ�V3;
	�ٶȲ�V1.PrintProcessLog(1);
	DefineFractionVar(·�̲�S1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("2.����·�̲�S1 ·�̲�S1=�ŵ�ʱ��ʱ�����N1-��һ��ֱ�߶���N2"));
	·�̲�S1 = �ŵ�ʱ��ʱ�����N1 - ��һ��ֱ�߶���N2;
	·�̲�S1.PrintProcessLog(2);
	DefineFractionVar(��һ����ֱ�����ߵ�ʱ��T1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("3.�����һ����ֱ�����ߵ�ʱ��T1 ��һ����ֱ�����ߵ�ʱ��T1=·�̲�S1/�ٶȲ�V1"));
	��һ����ֱ�����ߵ�ʱ��T1 = ·�̲�S1 / �ٶȲ�V1;
	��һ����ֱ�����ߵ�ʱ��T1.PrintProcessLog(3);
	DefineFractionVar(�ڶ�����ֱ�����ߵ�ʱ��T2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("4.����ڶ�����ֱ�����ߵ�ʱ��T2 �ڶ�����ֱ�����ߵ�ʱ��T2=�ŵ�ʱ��ʱ�����N1/�ٶȲ�V1"));
	�ڶ�����ֱ�����ߵ�ʱ��T2 = �ŵ�ʱ��ʱ�����N1 / �ٶȲ�V1;
	�ڶ�����ֱ�����ߵ�ʱ��T2.PrintProcessLog(4);
}
void P20_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P20 case four clock problem","P20���� ʱ������"},
		{"Title: Tongtong is scheduled to attend school at 8am, but her home alarm clock stops at 6:10am. Tongtong has fully wound up her watch and hurriedly left for school without keeping it. When she arrived at school, she arrived 10\nminutes early and finished school at 12pm. When she returned home, her watch showed exactly 11pm. If Tongtong's school and home times are the same, how many minutes did the clock stop?",
		"��Ŀ��ͮͮ����8���Ҫ��ѧУ�ϿΣ����Ǽ�������6��10�־�ͣ�ˣ�ͮͮ���㷢����û�жԱ�ͼ���ææ����ѧȥ�ˣ���ѧУһ������������10���ӣ�����12���ѧ���ؼ�һ��������ʾ11���������ͮͮ��ѧ��ѧʱ����ͬ����ô�ӱ�ͣ�˶��ٷ�?" },
		{"1. Calculate the time T1 for Tong Tong to go to and from school. Tong Tong's time T1 for going to and from school is equal to the time T2 displayed on the home clock minus the time T1 when the alarm clock stopped",
		"1.����ͮͮ����ѧʱ��T1 ͮͮ����ѧʱ��T1=�ص����ӱ���ʾʱ��T2-����ͣ��ʱ��T1"},
		{"2. Calculate the school time T2. School time T2=(dismissal time T6- class time T5)+early time T7",
		"2.������Уʱ��T2 ��Уʱ��T2=(��ѧʱ��T6-�Ͽ�ʱ��T5)+����ʱ��T7"},
		{"3. Calculate the intermediate time difference T3. The intermediate time difference T3=Tongtong's time of going to and from school T1- school time T2",
		"3.�����м�ʱ���T3 �м�ʱ���T3=ͮͮ����ѧʱ��T1-��Уʱ��T2"},
		{"4. Calculate the school time T4. School time T4=intermediate time difference T3/round-trip quantity N1",
		"4.������ѧʱ��T4 ��ѧʱ��T4=�м�ʱ���T3/��������N1"},
		{"5. Calculate the time T5 from home. T5=class time T5- school time T4- early time T7",
		"5.����Ӽҳ���ʱ��T5 �Ӽҳ���ʱ��T5=�Ͽ�ʱ��T5-��ѧʱ��T4-����ʱ��T7"},
		{"6. Calculate the time T6 when the clock stops. The time T6 when the clock stops is equal to the time T5 when the clock leaves home minus the time T1 when the alarm stops",
		"6.�������ͣ��ʱ��T6 ����ͣ��ʱ��T6=�Ӽҳ���ʱ��T5-����ͣ��ʱ��T1"},
		//������
		{"Returninghome,theclockdisplaysthetimeT2","�ص����ӱ���ʾʱ��T2"},
		{"AlarmclockofftimeT1","����ͣ��ʱ��T1"},
		{"SchooldismissaltimeT6","��ѧʱ��T6"},
		{"ClasstimeT5","�Ͽ�ʱ��T5"},
		{"EarlyTimeT7","����ʱ��T7"},
		{"RoundtripquantityN1","��������N1"},
		{"Tongtong'sschoolscheduleT1","ͮͮ����ѧʱ��T1"},
		{"SchooltimeT2","��Уʱ��T2"},
		{"IntermediatetimedifferenceT3","�м�ʱ���T3"},
		{"SchooltimeT4","��ѧʱ��T4"},
		{"TimeofleavinghomeT5","�Ӽҳ���ʱ��T5"},
		{"ClockstoptimeT6","����ͣ��ʱ��T6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ص����ӱ���ʾʱ��T2, 660);
	DefineLangVarInt(����ͣ��ʱ��T1, 370);
	DefineLangVarInt(��ѧʱ��T6, 720);
	DefineLangVarInt(�Ͽ�ʱ��T5, 480);
	DefineLangVarInt(����ʱ��T7, 10);
	DefineLangVarInt(��������N1, 2);
	ColPrintf(PrintfCol::����, Lang("P20���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ͮͮ����8���Ҫ��ѧУ�ϿΣ����Ǽ�������6��10�־�ͣ�ˣ�ͮͮ���㷢����û�жԱ�ͼ���ææ����ѧȥ�ˣ���ѧУһ������������10���ӣ�����12���ѧ���ؼ�һ��������ʾ11���������ͮͮ��ѧ��ѧʱ����ͬ����ô�ӱ�ͣ�˶��ٷ�?"));
	DefineLangVarInt(ͮͮ����ѧʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ͮͮ����ѧʱ��T1 ͮͮ����ѧʱ��T1=�ص����ӱ���ʾʱ��T2-����ͣ��ʱ��T1"));
	ͮͮ����ѧʱ��T1 = �ص����ӱ���ʾʱ��T2 - ����ͣ��ʱ��T1;
	ͮͮ����ѧʱ��T1.PrintProcessLog(1);
	DefineLangVarInt(��Уʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������Уʱ��T2 ��Уʱ��T2=(��ѧʱ��T6-�Ͽ�ʱ��T5)+����ʱ��T7"));
	��Уʱ��T2 = (��ѧʱ��T6 - �Ͽ�ʱ��T5) + ����ʱ��T7;
	��Уʱ��T2.PrintProcessLog(2);
	DefineLangVarInt(�м�ʱ���T3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����м�ʱ���T3 �м�ʱ���T3=ͮͮ����ѧʱ��T1-��Уʱ��T2"));
	�м�ʱ���T3 = ͮͮ����ѧʱ��T1 - ��Уʱ��T2;
	�м�ʱ���T3.PrintProcessLog(3);
	DefineLangVarInt(��ѧʱ��T4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ѧʱ��T4 ��ѧʱ��T4=�м�ʱ���T3/��������N1"));
	��ѧʱ��T4 = �м�ʱ���T3 / ��������N1;
	��ѧʱ��T4.PrintProcessLog(4);
	DefineLangVarInt(�Ӽҳ���ʱ��T5, 0);
	ColPrintf(PrintfCol::����, Lang("5.����Ӽҳ���ʱ��T5 �Ӽҳ���ʱ��T5=�Ͽ�ʱ��T5-��ѧʱ��T4-����ʱ��T7"));
	�Ӽҳ���ʱ��T5 = �Ͽ�ʱ��T5 - ��ѧʱ��T4 - ����ʱ��T7;
	�Ӽҳ���ʱ��T5.PrintProcessLog(5);
	DefineLangVarInt(����ͣ��ʱ��T6, 0);
	ColPrintf(PrintfCol::����, Lang("6.�������ͣ��ʱ��T6 ����ͣ��ʱ��T6=�Ӽҳ���ʱ��T5-����ͣ��ʱ��T1"));
	����ͣ��ʱ��T6 = �Ӽҳ���ʱ��T5 - ����ͣ��ʱ��T1;
	����ͣ��ʱ��T6.PrintProcessLog(6);
}
void P20()
{
	P20_1();
	ColPrintf(PrintfCol::����, "");
	P20_2();
	ColPrintf(PrintfCol::����, "");
	P20_3();
	ColPrintf(PrintfCol::����, "");
}
void P20_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P20();
	Lang.SetCurLanguage(LanguageLib::English);
	P20();
	ColPrintf(PrintfCol::����, "");
}
