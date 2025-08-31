#pragma once
void P21_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P21 Example 5 Clock Problem","P21���� ʱ������"},
		{"Title: Xiaoqiang has an alarm clock at home that is 3 minutes faster than standard time per hour. One night, Xiaoqiang aimed at the alarm clock and wanted to wake up at 6 o'clock the next day. What time should he set it for",
		"��Ŀ��Сǿ����һ�����ӣ�ÿСʱ�ȱ�׼ʱ���3���ӣ���һ�����ϣ�Сǿ��׼�����ӣ������ڵڶ���6����ʱ�𴲣���Ӧ�ö��ڼ��㼸��"},
		{"1. Calculate Xiaoqiang's sleeping time T1 Xiaoqiang's sleeping time T1=(hours of the day T2- start time T3)+end time T4",
		"1.����Сǿ˯��ʱ��T1 Сǿ˯��ʱ��T1=(һ��Сʱ��T2-��ʼʱ��T3)+����ʱ��T4"},
		{"2. Calculate the fast minute T2. The fast minute T2=Xiaoqiang's sleeping time T1 * faster than standard time T4",
		"2.�����ķ���T2 ��ķ���T2=Сǿ˯��ʱ��T1*�ȱ�׼ʱ���ʱ��T4"},
		{"3. Since it is necessary to wake up at 6am in the morning and the fastest time is 24 minutes, the schedule should be scheduled at 6:24am",
		"3.��Ϊ������Ҫ6���𣬶����ʱ����24���ӣ�����Ӧ����6��24����"},
		//������
		{"HoursperdayT2","һ��Сʱ��T2"},
		{"StarttimeT3","��ʼʱ��T3"},
		{"EndtimeT4","����ʱ��T4"},
		{"FasterthanstandardtimeT4","�ȱ�׼ʱ���ʱ��T4"},
		{"Xiaoqiang'ssleepingtimeT1","Сǿ˯��ʱ��T1"},
		{"FastminuteT2","��ķ���T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ��Сʱ��T2, 24);
	DefineLangVarInt(��ʼʱ��T3, 22);
	DefineLangVarInt(����ʱ��T4, 6);
	DefineLangVarInt(�ȱ�׼ʱ���ʱ��T4, 3);
	ColPrintf(PrintfCol::����, Lang("P21���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��Сǿ����һ�����ӣ�ÿСʱ�ȱ�׼ʱ���3���ӣ���һ�����ϣ�Сǿ��׼�����ӣ������ڵڶ���6����ʱ�𴲣���Ӧ�ö��ڼ��㼸��"));
	DefineLangVarInt(Сǿ˯��ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����Сǿ˯��ʱ��T1 Сǿ˯��ʱ��T1=(һ��Сʱ��T2-��ʼʱ��T3)+����ʱ��T4"));
	Сǿ˯��ʱ��T1 = (һ��Сʱ��T2 - ��ʼʱ��T3) + ����ʱ��T4;
	Сǿ˯��ʱ��T1.PrintProcessLog(1);
	DefineLangVarInt(��ķ���T2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ķ���T2 ��ķ���T2=Сǿ˯��ʱ��T1*�ȱ�׼ʱ���ʱ��T4"));
	��ķ���T2 = Сǿ˯��ʱ��T1 * �ȱ�׼ʱ���ʱ��T4;
	��ķ���T2.PrintProcessLog(2);
	ColPrintf(PrintfCol::����, Lang("3.��Ϊ������Ҫ6���𣬶����ʱ����24���ӣ�����Ӧ����6��24����"));
}
void P21_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P21 Example Six Clock Problem","P21���� ʱ������"},
		{"Title: What time is it when the hour and minute hands of a clock are between 4 and 6, and the clock's five is in the center of the hour and minute hands?",
		"��Ŀ��һ���ӵ�ʱ��ͷ���ָ��4����֮�䣬ʱ�ӵ�����ʱ��ͷ���������룬��ʱʲôʱ��?"},
		{"1. Let the distance between the hour and minute hands be N at 5 o'clock",
		"1.��ʱ�����ľ���5��ľ���ΪN"},
		{"2. Calculate the distance traveled by the minute hand S1=5 * 5-N",
		"2.��������ߵ�·�� �����ߵ�·��=5*5-N"},
		{"3. Calculate the distance traveled by the hour hand. The distance traveled by the hour hand is equal to N",
		"3.����ʱ���ߵ�·�� ʱ���ߵ�·��=N"},
		{"4. Calculate the distance and S1 distance, and S1=5 * 5-N+N=25",
		"4.����·�̺�S1 ·�̺�S1=5*5-N+N=25"},
		{"5. Calculate the extra minute N1=distance and S1/(minute hand speed V2- one hour N2/(one hour minute N1/one large grid number N3))",
		"5.������ߵķ���N1 ���ߵķ���N1=·�̺�S1/(�����ٶ�V2+һСʱN2/(һСʱ����N1/һ���С����N3))"},
		//������
		{"DistanceandS1","·�̺�S1"},
		{"MinutehandspeedV2","�����ٶ�V2"},
		{"OnehourminuteN1","һСʱ����N1"},
		{"OnehourN2","һСʱN2"},
		{"AlargegridandasmallgridN3","һ���С����N3"},
		{"MoreminutestowalkN1","���ߵķ���N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionVar(·�̺�S1, 25, 1);
	DefineFractionVar(�����ٶ�V2, 1, 1);
	DefineFractionVar(һСʱN2, 1, 1);
	DefineFractionVar(һСʱ����N1, 60, 1);
	DefineFractionVar(һ���С����N3, 5, 1);
	ColPrintf(PrintfCol::����, Lang("P21���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ���ӵ�ʱ��ͷ���ָ��4����֮�䣬ʱ�ӵ�����ʱ��ͷ���������룬��ʱʲôʱ��?"));
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
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(5.0),float(4.7)} ,{float(5.0),float(4.6)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = { {float(4),float(3.7)},{float(4.7),float(6.0)} ,{float(4.7),float(5.7)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex2, ScanningLineT::FillMode::RealMode, '+', 0);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	ColPrintf(PrintfCol::����, Lang("1.��ʱ�����ľ���5��ľ���ΪN"));
	ColPrintf(PrintfCol::����, Lang("2.��������ߵ�·�� �����ߵ�·��=5*5-N"));
	ColPrintf(PrintfCol::����, Lang("3.����ʱ���ߵ�·�� ʱ���ߵ�·��=N"));
	ColPrintf(PrintfCol::����, Lang("4.����·�̺�S1 ·�̺�S1=5*5-N+N=25"));
	DefineFractionVar(���ߵķ���N1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("5.������ߵķ���N1 ���ߵķ���N1=·�̺�S1/(�����ٶ�V2+һСʱN2/(һСʱ����N1/һ���С����N3))"));
	���ߵķ���N1 = ·�̺�S1 / (�����ٶ�V2 + һСʱN2 / (һСʱ����N1 / һ���С����N3));
	���ߵķ���N1.PrintProcessLog(2);
}
void P21()
{
	P21_1();
	ColPrintf(PrintfCol::����, "");
	P21_2();
	ColPrintf(PrintfCol::����, "");
	
}
void P21_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P21();
	Lang.SetCurLanguage(LanguageLib::English);
	P21();
	ColPrintf(PrintfCol::����, "");

}