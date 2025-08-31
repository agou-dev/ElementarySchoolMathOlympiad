#pragma once
void P19_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P19 Example 1 Clock Problem","P19��һ ʱ������"},
		{"Question: What is the obtuse angle formed by the hour and minute hands when the clock is represented as 1:45?",
		"��Ŀ��ʱ�ӱ�ʾΪ1ʱ45�֣�ʱ��ͷ������γɵĶ۽��Ƕ��ٶ�?"},
		{"1. Calculate the hour and minute hand angles N1 at one o'clock. The hour and minute hand angles N1 at one o'clock are separated by a large grid N1 multiplied by the degree N2 of one large grid",
		"1.����һ��ʱʱ��ͷ����N1 һ��ʱʱ��ͷ����N1=һ��ʱ�������N1*һ�����Ķ���N2"},
		{"2. Calculate the number of squares with large errors N3=minutes pointed by the minute hand N5/hour minute N4",
		"2.�����������N3 �������N3=����ָ��ķ���N5/һСʱ����N4"},
		{"3. Large grid number N3 with partition error",
		"3.Լ���������N3"},
		{"4. Calculate the degree of error N6. The degree of error N6 is equal to the number of error grids N3 multiplied by the degree of one grid N2",
		"4.����������N6 ������N6=�������N3*һ�����Ķ���N2"},
		{"5. Calculate the obtuse angle degree N7. The obtuse angle degree N7 is equal to the hour and minute hand angles N1 at one point plus the error degree N6",
		"5.����۽Ƕ���N7 �۽Ƕ���N7=һ��ʱʱ��ͷ����N1+������N6"},
		//������
		{"Atonepoint,thereisalargelatticenumberN1betweenthem","һ��ʱ�������N1"},
		{"AlargegriddegreeN2","һ�����Ķ���N2"},
		{"AlargegriddegreeN21","һ�����Ķ���N21"},
		{"TheminutehandpointstominuteN5","����ָ��ķ���N5"},
		{"OnehourandminuteN4","һСʱ����N4"},
		{"Oneo'clockhourandminutehandanglesN1","һ��ʱʱ��ͷ����N1"},
		{"LargeerrorgridN3","�������N3"},
		{"ErrordegreeN6","������N6"},
		{"ErrordegreeN61","������N61"},
		{"BluntangledegreeN7","�۽Ƕ���N7"},
		
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ��ʱ�������N1, 4);
	DefineLangVarInt(һ�����Ķ���N2, 30);
	DefineLangVarInt(����ָ��ķ���N5, 45);
	DefineLangVarInt(һСʱ����N4, 60);
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddSector(4, 4, 3.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*',0);
	
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
	test.AddScanLineByEdgeGradient(4.0, 0.1, 1.5, 4.0, -(0), 0, '*');
	//test.AddScanLineByEdgeGradient(4.0, 0.1, 4.0, 1.5, -(0), 0, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(5.5),float(2.5)} ,{float(5.5),float(2.4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	ColPrintf(PrintfCol::����, Lang("P19��һ ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ʱ�ӱ�ʾΪ1ʱ45�֣�ʱ��ͷ������γɵĶ۽��Ƕ��ٶ�?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(һ��ʱʱ��ͷ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ��ʱʱ��ͷ����N1 һ��ʱʱ��ͷ����N1=һ��ʱ�������N1*һ�����Ķ���N2"));
	һ��ʱʱ��ͷ����N1 = һ��ʱ�������N1 * һ�����Ķ���N2;
	һ��ʱʱ��ͷ����N1.PrintProcessLog(1);
	DefineFractionVar(�������N3, 0, 0);
	//DefineLangVarInt(�������N3, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����������N3 �������N3=����ָ��ķ���N5/һСʱ����N4"));
	�������N3.Var.nNumerator = ����ָ��ķ���N5;
	�������N3.Var.nDenominator = һСʱ����N4;
	ColPrintf(PrintfCol::����, Lang("3.Լ���������N3"));
	int nMaxCommonFactor = MaxCommonFactor(�������N3.Var.nNumerator, �������N3.Var.nDenominator);
	�������N3.Var.nNumerator = �������N3.Var.nNumerator / nMaxCommonFactor;
	�������N3.Var.nDenominator = �������N3.Var.nDenominator / nMaxCommonFactor;
	DefineFractionVar(������N6, 1,1);
	DefineLangVar(float,������N61, 0);
	DefineFractionVar(һ�����Ķ���N21, 1,1);
	ColPrintf(PrintfCol::����, Lang("4.����������N6 ������N6=�������N3*һ�����Ķ���N2"));
	һ�����Ķ���N21.Var.nNumerator = һ�����Ķ���N2;
	������N6 = �������N3 * һ�����Ķ���N21;
	������N61.Var= float(������N6.Var.nNumerator)/ float(������N6.Var.nDenominator);
	������N6.PrintProcessLog(4);
	DefineLangVar(float,�۽Ƕ���N7, 0);
	ColPrintf(PrintfCol::����, Lang("5.����۽Ƕ���N7 �۽Ƕ���N7=һ��ʱʱ��ͷ����N1+������N6"));
	�۽Ƕ���N7.Var = float(һ��ʱʱ��ͷ����N1) + ������N61;
}
void P19_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P19 Case 2 Clock Problem","P19���� ʱ������"},
		{"Question: At what time does the hour and minute hands of a clock coincide for the first time at 4 o'clock?",
		"��Ŀ���ӱ��ʱ��ͷ�����4����ٷֵ�һ���غ�?"},
		{"1. Calculate the clockwise speed V1. Clockwise speed V1=one hour N2 / (one hour minute N1/one large grid small number N3)",
		"1.����ʱ���ٶ�V1 ʱ���ٶ�V1=һСʱN2/(һСʱ����N1/һ���С����N3)" },
		{"2. Calculate the speed difference V2, which is equal to the minute hand speed V3 minus the hour hand speed V1",
		"2.�����ٶȲ�V2 �ٶȲ�V2=�����ٶ�V3-ʱ���ٶ�V1"},
		{"3. Calculate the total number of small grids N2. The total number of small grids N2 is equal to the number of small grids in a large grid N3 multiplied by the number of grids with large differences N4",
		"3.������С����N2 ��С����N2=һ���С����N3*�������N4"},
		{"4. Calculate the tracking time T1, which is equal to the total number of grids N2 divided by the speed difference V2",
		"4.����׷��ʱ��T1 ׷��ʱ��T1=��С����N2/�ٶȲ�V2"},
		//������
		{"OnehourN2","һСʱN2"},
		{"OnehourminuteN1","һСʱ����N1"},
		{"AlargegridwithasmallnumberN3","һ���С����N3"},
		{"LargedifferenceinlatticenumberN4","�������N4"},
		{"ClockwisespeedV1","ʱ���ٶ�V1"},
		{"SpeeddifferenceV2","�ٶȲ�V2"},
		{"TotalnumberofcellsN2","��С����N2"},
		{"ChasingTimeT1","׷��ʱ��T1"},
		{"MinutehandspeedV3","�����ٶ�V3"},
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
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(5.5),float(4.5)} ,{float(5.5),float(4.4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	DefineFractionVar(һСʱN2, 1,1);
	DefineFractionVar(һСʱ����N1, 60,1);
	DefineFractionVar(һ���С����N3, 5,1);
	DefineFractionVar(�������N4, 4,1);
	DefineFractionVar(�����ٶ�V3,1,1)
	ColPrintf(PrintfCol::����, Lang("P19���� ʱ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ӱ��ʱ��ͷ�����4����ٷֵ�һ���غ�?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionVar(ʱ���ٶ�V1, 1,1);
	ColPrintf(PrintfCol::����, Lang("1.����ʱ���ٶ�V1 ʱ���ٶ�V1=һСʱN2/(һСʱ����N1/һ���С����N3)"));
	ʱ���ٶ�V1 = һСʱN2 / (һСʱ����N1 / һ���С����N3);
	ʱ���ٶ�V1.PrintProcessLog(1);
	DefineFractionVar(�ٶȲ�V2, 1,1);
	ColPrintf(PrintfCol::����, Lang("2.�����ٶȲ�V2 �ٶȲ�V2=�����ٶ�V3-ʱ���ٶ�V1"));
	�ٶȲ�V2 = �����ٶ�V3 - ʱ���ٶ�V1;
	�ٶȲ�V2.PrintProcessLog(1);
	DefineFractionVar(��С����N2, 1,1);
	ColPrintf(PrintfCol::����, Lang("3.������С����N2 ��С����N2=һ���С����N3*�������N4"));
	��С����N2 = һ���С����N3 * �������N4;
	��С����N2.PrintProcessLog(1);
	DefineFractionVar(׷��ʱ��T1, 1,1);
	ColPrintf(PrintfCol::����, Lang("4.����׷��ʱ��T1 ׷��ʱ��T1=��С����N2/�ٶȲ�V2"));
	׷��ʱ��T1 = ��С����N2 / �ٶȲ�V2;
	׷��ʱ��T1.PrintProcessLog(1);
}
void P19()
{
	P19_1();
	ColPrintf(PrintfCol::����, "");
	P19_2();
	ColPrintf(PrintfCol::����, "");
	//P2_3();
	ColPrintf(PrintfCol::����, "");
}
void P19_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P19();
	Lang.SetCurLanguage(LanguageLib::English);
	P19();
	ColPrintf(PrintfCol::����, "");

}