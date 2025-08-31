#pragma once
void P2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P2 Example One Proportional Method","P2��һ ������"},
		{"Title: Ningning walks to school every day. If the distance is 60 meters per minute, it will be 5 minutes late.\nIf it is 80 meters, it will be 10 minutes early. Ask about the distance.",
		"��Ŀ������ÿ�첽�е�ѧУ�����ÿ����60�ף��ٵ�5���ӣ�80�����絽10���ӣ���·�̡�"},
		{"1. Calculate the maximum common factor between two numbers based on the speed ratio V",
		"1.�����ٶȱ�V �����������������"},
		{"2. Calculate the time difference T2 of one part. The time difference T2 of one part is calculated as (late arrival time T+early arrival time T1) divided by (early arrival speed V - late arrival speed V1)",
		"2.����һ�ݵ�ʱ���T2 һ�ݵ�ʱ���T2=(�ٵ���ʱ��T+�絽��ʱ��T1)/(�絽���ٶȷ�V-�����ٶȷ�V1)"},
		{"4. Calculate the time T3 for lateness. The time T3 for lateness is equal to the speed V1 of lateness multiplied by the time difference T2",
		"4.����ٵ��õ�ʱ��T3 �ٵ��õ�ʱ��T3=����ʱ���T1*һ�ݵ�ʱ���T2"},
		{"3. Calculate the time ratio V to calculate the greatest common factor of two numbers",
		"3.����ʱ���V �ٶȱȺ�ʱ��ȳʷ���"},
		{"5. Calculate the total distance S, which is equal to the time T3 for being late and the speed V for being late",
		"5.������·��S ��·��S = �ٵ��õ�ʱ��T3 * �����ٶ�V"},
		{"Answer: The distance from home to school is %d meters",
		"�𣺴Ӽҵ�ѧУ��·����%d��"},
		//������
		{"LateArrivalSpeedV","�����ٶ�V"},
		{"EarlyArrivalSpeedV","�絽���ٶ�V"},
		{"LateTimeT","�ٵ���ʱ��T"},
		{"EarlyArrivalTimeT1","�絽��ʱ��T1"},
		{"EarlyArrivalSpeedV","�絽���ٶȷ�V"},
		{"LateArrivalSpeedV1","�����ٶȷ�V1"},
		{"TimeDifferenceT2","һ�ݵ�ʱ���T2"},
		{"LateArrivalTimeT3","�ٵ��õ�ʱ��T3"},
		{"TotalDistanceS","��·��S"},
		{"HighestCommonFactor","�������"},
		{"EarlyArrivalSpeedV","�絽��ʱ���T"},
		{"LateArrivalSpeedV1","����ʱ���T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�����ٶ�V, 60);
	DefineLangVarInt(�絽���ٶ�V, 80);
	DefineLangVarInt(�ٵ���ʱ��T, 5);
	DefineLangVarInt(�絽��ʱ��T1, 10);
	ColPrintf(PrintfCol::����, Lang("P2��һ ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������ÿ�첽�е�ѧУ�����ÿ����60�ף��ٵ�5���ӣ�80�����絽10���ӣ���·�̡�"));
	DefineLangVarInt(�絽���ٶȷ�V,0);
	DefineLangVarInt(�����ٶȷ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ٶȱ�V �����������������"));
	DefineLangVarInt(�������, MaxCommonFactor(�����ٶ�V.Var, �絽���ٶ�V.Var));
	�絽���ٶȷ�V = �絽���ٶ�V / �������;
	�����ٶȷ�V1 = �����ٶ�V / �������;
	�絽���ٶȷ�V.PrintProcessLog(1);
	�����ٶȷ�V1.PrintProcessLog(1);
	DefineLangVarInt(һ�ݵ�ʱ���T2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����һ�ݵ�ʱ���T2 һ�ݵ�ʱ���T2=(�ٵ���ʱ��T+�絽��ʱ��T1)/(�絽���ٶȷ�V-�����ٶȷ�V1)"));
	һ�ݵ�ʱ���T2 = (�ٵ���ʱ��T + �絽��ʱ��T1) / (�絽���ٶȷ�V - �����ٶȷ�V1);
	һ�ݵ�ʱ���T2.PrintProcessLog(2);
	DefineLangVarInt(�絽��ʱ���T, 0);
	DefineLangVarInt(����ʱ���T1, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ʱ���V �ٶȱȺ�ʱ��ȳʷ���"));
	�絽��ʱ���T = �����ٶȷ�V1;
	����ʱ���T1 = �絽���ٶȷ�V;
	�絽��ʱ���T.PrintProcessLog(3);
	����ʱ���T1.PrintProcessLog(3);
	DefineLangVarInt(�ٵ��õ�ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ٵ��õ�ʱ��T3 �ٵ��õ�ʱ��T3=����ʱ���T1*һ�ݵ�ʱ���T2"));
	�ٵ��õ�ʱ��T3 = ����ʱ���T1 * һ�ݵ�ʱ���T2;
	�ٵ��õ�ʱ��T3.PrintProcessLog(4);
	DefineLangVarInt(��·��S, 0);
	ColPrintf(PrintfCol::����, Lang("5.������·��S ��·��S = �ٵ��õ�ʱ��T3 * �����ٶ�V"));
	��·��S = �ٵ��õ�ʱ��T3 * �����ٶ�V;
	��·��S.PrintProcessLog(5);
	ColPrintf(PrintfCol::���, Lang("�𣺴Ӽҵ�ѧУ��·����%d��"),(int)��·��S);
}
void P2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P2 Example 2 Proportional Method","P2���� ������"},
		{"Title: A travels from location A to location B. If he leaves at 7am and arrives promptly at 5pm, and wants to leave at 10am\nand arrive promptly at 5pm, he must walk an additional 6 kilometers per hour",
		"��Ŀ���״�A�ص�B�ذ��£�������10Сʱ���������7Сʱ�����ͱ���ÿСʱ����6ǧ�ף���·��"},
		{"1. Calculate the maximum common factor between two numbers based on the speed ratio V",
		"1.�����ٶȱ�V �����������������"},
		{"2. Calculate the original planned speed Voriginal planned speed V1=multi lane distance per hour V1/(current planned speed N2- original planned speed N1) * original planned speed N1",
		"2.����ԭ�ƻ��ٶ�V ԭ�ƻ��ٶ�V1 = ÿСʱ����·��V1 / (�ּƻ��ٶȷ�N2 - ԭ�ƻ��ٶȷ�N1) * ԭ�ƻ��ٶȷ�N1"},
		{"3. Calculate the total distance S, which is equal to the original planned speed V1 multiplied by the original planned time T1",
		"3.������·��S ��·��S1 = ԭ�ƻ��ٶ�V1 * ԭ�ƻ�ʱ��T1"},
		{"Answer: The total distance S is %d kilometers",
		"����·��S��%dǧ��"},
		//������
		{"OriginalPlannedTimeT1","ԭ�ƻ�ʱ��T1"},
		{"CurrentPlannedTimeT2","�ּƻ�ʱ��T2"},
		{"MultipleTripsPerHourV1","ÿСʱ����·��V1"},
		{"OriginalPlannedSpeedShareN1","ԭ�ƻ��ٶȷ�N1"},
		{"CurrentPlannedSpeedN2","�ּƻ��ٶȷ�N2"},
		{"HighestCommonFactor","�������"},
		{"OriginalPlannedSpeedV1","ԭ�ƻ��ٶ�V1"},
		{"TotalDistanceS1","��·��S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ԭ�ƻ�ʱ��T1, 10);
	DefineLangVarInt(�ּƻ�ʱ��T2, 7);
	DefineLangVarInt(ÿСʱ����·��V1, 6);
	ColPrintf(PrintfCol::����, Lang("P2���� ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���״�A�ص�B�ذ��£�������10Сʱ���������7Сʱ�����ͱ���ÿСʱ����6ǧ�ף���·��"));
	ColPrintf(PrintfCol::����, Lang("1.�����ٶȱ�V �����������������"));
	DefineLangVarInt(�������, MaxCommonFactor(ԭ�ƻ�ʱ��T1.Var, �ּƻ�ʱ��T2.Var));
	DefineLangVarInt(ԭ�ƻ��ٶȷ�N1, 0);
	DefineLangVarInt(�ּƻ��ٶȷ�N2, 0);
	�ּƻ��ٶȷ�N2 = ԭ�ƻ�ʱ��T1 / �������;
	ԭ�ƻ��ٶȷ�N1 = �ּƻ�ʱ��T2 / �������;
	ԭ�ƻ��ٶȷ�N1.PrintProcessLog(1);
	�ּƻ��ٶȷ�N2.PrintProcessLog(1);
	DefineLangVarInt(ԭ�ƻ��ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ԭ�ƻ��ٶ�V ԭ�ƻ��ٶ�V1 = ÿСʱ����·��V1 / (�ּƻ��ٶȷ�N2 - ԭ�ƻ��ٶȷ�N1) * ԭ�ƻ��ٶȷ�N1"));
	ԭ�ƻ��ٶ�V1 = ÿСʱ����·��V1 / (�ּƻ��ٶȷ�N2 - ԭ�ƻ��ٶȷ�N1) * ԭ�ƻ��ٶȷ�N1;
	ԭ�ƻ��ٶ�V1.PrintProcessLog(2);
	DefineLangVarInt(��·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.������·��S ��·��S1 = ԭ�ƻ��ٶ�V1 * ԭ�ƻ�ʱ��T1"));
	��·��S1 = ԭ�ƻ��ٶ�V1 * ԭ�ƻ�ʱ��T1;
	��·��S1.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("����·��S��%dǧ��"), (int)��·��S1);
}
void P2_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P2 Example Three Proportional Method",
		"P2���� ������"},
		{"Title: Two people walking towards each other, meeting after 4 hours, if their speed increases\nby 1 kilometer, meeting after 3 hours, ask about the distance.",
		"��Ŀ��������������У�4Сʱ������������ٶ�����1ǧ�ף�3Сʱ����������·�̡�"},
		{"1. Calculate the maximum common factor between two numbers based on the speed ratio V:T",
		"1.�����ٶȱȺ�ʱ���V:T �����������������"},
		{"2. Calculate speed and V4 speed and V4=number of people N5 * original planned speed N3",
		"2.�����ٶȺ�V4 �ٶȺ�V4=����N5*ԭ�ƻ��ٶȷ�N3"},
		{"3. Calculate the total distance S, where S1 equals the speed and V4 multiplied by the original planned speed and N3",
		"3.������·��S ��·��S1=�ٶȺ�V4*ԭ�ƻ��ٶȷ�N3"},
		{"Answer: The total distance S is %d kilometers",
		"����·��S��%dǧ��"},
		//������
		{"OriginalPlannedTimeT1","ԭ�ƻ�ʱ��T1"},
		{"CurrentPlannedTime T2","�ּƻ�ʱ��T2"},
		{"IncreasedSpeedV3","�������ٶ�V3"},
		{"OriginalPlannedTimeShareN1","ԭ�ƻ�ʱ���N1"},
		{"CurrentPlannedTimeShareT1","�ּƻ�ʱ���T1"},
		{"OriginalPlanneSpeedShareT2","ԭ�ƻ��ٶȷ�T2"},
		{"CurrentPlannedSpeedN2","�ּƻ��ٶȷ�N2"},
		{"SpeedandV4","�ٶȺ�V4"},
		{"TotalDistanceS1","��·��S1"},
		{"HighestCommonFactor","�������"},
		{"NumberOfPeopleN5","����N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ԭ�ƻ�ʱ��T1, 4);
	DefineLangVarInt(�ּƻ�ʱ��T2, 3);
	DefineLangVarInt(�������ٶ�V3, 1);
	DefineLangVarInt(����N5, 2);
	ColPrintf(PrintfCol::����, Lang("P2���� ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������������У�4Сʱ������������ٶ�����1ǧ�ף�3Сʱ����������·�̡�"));
	ColPrintf(PrintfCol::����, Lang("1.�����ٶȱȺ�ʱ���V:T �����������������"));
	DefineLangVarInt(�������, MaxCommonFactor(ԭ�ƻ�ʱ��T1.Var, �ּƻ�ʱ��T2.Var));
	DefineLangVarInt(ԭ�ƻ�ʱ���N1, 0);
	DefineLangVarInt(�ּƻ�ʱ���T1, 0);
	DefineLangVarInt(ԭ�ƻ��ٶȷ�T2, 0);
	DefineLangVarInt(�ּƻ��ٶȷ�N2, 0);
	ԭ�ƻ�ʱ���N1 = ԭ�ƻ�ʱ��T1 / �������;
	�ּƻ�ʱ���T1 = �ּƻ�ʱ��T2 / �������;
	ԭ�ƻ��ٶȷ�T2 = �ּƻ�ʱ���T1;
	�ּƻ��ٶȷ�N2 = ԭ�ƻ�ʱ���N1;
	ԭ�ƻ�ʱ���N1.PrintProcessLog(1);
	�ּƻ�ʱ���T1.PrintProcessLog(1);
	ԭ�ƻ��ٶȷ�T2.PrintProcessLog(1);
	�ּƻ��ٶȷ�N2.PrintProcessLog(1);
	DefineLangVarInt(�ٶȺ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ٶȺ�V4 �ٶȺ�V4=����N5*ԭ�ƻ��ٶȷ�N3"));
	�ٶȺ�V4 = ����N5 * ԭ�ƻ��ٶȷ�T2;
	�ٶȺ�V4.PrintProcessLog(2);
	DefineLangVarInt(��·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.������·��S ��·��S1=�ٶȺ�V4*ԭ�ƻ��ٶȷ�N3"));
	��·��S1 = �ٶȺ�V4 * ԭ�ƻ�ʱ���N1;
	��·��S1.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("����·��S��%dǧ��"),(int)��·��S1);
}
void P2()
{
	P2_1();
	ColPrintf(PrintfCol::����, "");
	P2_2();
	ColPrintf(PrintfCol::����, "");
	P2_3();
	ColPrintf(PrintfCol::����, "");
}
void P2_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P2();
	Lang.SetCurLanguage(LanguageLib::English);
	P2();
	ColPrintf(PrintfCol::����, "");

}