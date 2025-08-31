#pragma once
void P1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P1 Example 1 Method 1","P1 ��һ����1"},
		{"A wants to go on a trip, originally planned to travel at 100 kilometers per hour, but due to traffic congestion, the speed is 40 \nkilometers per hour, which is three hours later than the original plan. How much time did it take in total?",
		"��Ŀ:�����ȥ���Σ����ƻ�ÿСʱ100ǧ�ף�����³����ٶ���40ǧ��ÿСʱ����ԭ�ƻ�����Сʱ����һ�����˶���ʱ��?"},
		{"1. Calculate the distance difference between the current plan and the original plan. The distance difference between the current plan and the original plan is equal to the planned speed multiplied by the delayed arrival time",
		"1.�����ּƻ���ԭ�ƻ�����·��S �ּƻ���ԭ�ƻ�����·��S=�ּƻ��ٶ�V*����ʱ��T"},
		{"2. Calculate the original planned time. The original planned time is equal to the distance difference between the current plan and the original plan divided by the original planned speed minus the current planned speed",
		"2.����ԭ�ƻ�ʱ�� ԭ�ƻ�ʱ��T=�ּƻ���ԭ�ƻ�����·��S/(ԭ�ƻ��ٶ�V-�ּƻ��ٶ�V)"},
		{"3. Calculate how long it took=original planned time+delayed arrival time",
		"3.���㻨�˶೤ʱ��T ���˶೤ʱ��T=ԭ�ƻ�ʱ��T+����ʱ��T"},
		//������
		{"OriginalPlannedSpeed","ԭ�ƻ��ٶ�V"},
		{"CurrentPlannedSpeed","�ּƻ��ٶ�V"},
		{"LateArrivalTime","����ʱ��T",},
		{"TheDistanceDifferenceBetweenTheCurrentPlanAndTheOriginalPlan","�ּƻ���ԭ�ƻ�����·��S"},
		{"OriginalPlannedTime","ԭ�ƻ�ʱ��T"},
		{"HowLongDidItTake","���˶೤ʱ��T"},
		{"Answer: The time is %d hour","��ʱ����%dСʱ"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ԭ�ƻ��ٶ�V, 100);
	DefineLangVarInt(�ּƻ��ٶ�V, 40);
	DefineLangVarInt(����ʱ��T, 3);
	ColPrintf(PrintfCol::����,Lang("P1 ��һ����1"));
	ColPrintf(PrintfCol::����,Lang("��Ŀ:�����ȥ���Σ����ƻ�ÿСʱ100ǧ�ף�����³����ٶ���40ǧ��ÿСʱ����ԭ�ƻ�����Сʱ����һ�����˶���ʱ��?"));
	DefineLangVarInt(�ּƻ���ԭ�ƻ�����·��S, 0);
	ColPrintf(PrintfCol::����,Lang("1.�����ּƻ���ԭ�ƻ�����·��S �ּƻ���ԭ�ƻ�����·��S=�ּƻ��ٶ�V*����ʱ��T"));
	�ּƻ���ԭ�ƻ�����·��S = �ּƻ��ٶ�V * ����ʱ��T;
	�ּƻ���ԭ�ƻ�����·��S.PrintProcessLog(1);
	DefineLangVarInt(ԭ�ƻ�ʱ��T, 0);
	ColPrintf(PrintfCol::����,Lang("2.����ԭ�ƻ�ʱ�� ԭ�ƻ�ʱ��T=�ּƻ���ԭ�ƻ�����·��S/(ԭ�ƻ��ٶ�V-�ּƻ��ٶ�V)"));
	ԭ�ƻ�ʱ��T = �ּƻ���ԭ�ƻ�����·��S / (ԭ�ƻ��ٶ�V - �ּƻ��ٶ�V);
	ԭ�ƻ�ʱ��T.PrintProcessLog(2);
	DefineLangVarInt(���˶೤ʱ��T,0)
	ColPrintf(PrintfCol::����,Lang("3.���㻨�˶೤ʱ��T ���˶೤ʱ��T=ԭ�ƻ�ʱ��T+����ʱ��T"));
	���˶೤ʱ��T = ԭ�ƻ�ʱ��T + ����ʱ��T;
	���˶೤ʱ��T.PrintProcessLog(3);
	ColPrintf(PrintfCol::���,Lang("��ʱ����%dСʱ"), (int)���˶೤ʱ��T);
}
void P1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P1 Example 1 Method 2","P1 ��һ������"},
		{"A wants to go on a trip, originally planned to travel at 100 kilometers per hour, but due to traffic congestion, the speed is 40 \nkilometers per hour, which is three hours later than the original plan. How much time did it take in total?",
		"��Ŀ:�����ȥ���Σ����ƻ�ÿСʱ100ǧ�ף�����³����ٶ���40ǧ��ÿСʱ����ԭ�ƻ�����Сʱ����һ�����˶���ʱ��?"},
		{"1. Calculate the speed to speed ratio.Var.ReduceNumeratorDenominator(); ",
		"1.�����ٶȱ�V �����������������"},
		{"2. Calculate the time for each part=(denominator of speed ratio - numerator of speed ratio)",
		"2.����ÿ�ݵ�ʱ��T ÿ�ݵ�ʱ��T=(ԭ�ƻ��ٶȷ�V-�ּƻ��ٶȷ�V)/����ʱ��T"},
		{"3. Calculate how much time was spent=time per serving * (denominator of speed ratio+numerator of speed ratio)",
		"3.���㻨�˶���ʱ��T ���˶���ʱ��T=ÿ�ݵ�ʱ��T*��ԭ�ƻ��ٶȷ�V+(����ʱ��T/ÿ�ݵ�ʱ��T)��"},
		//������
		{"OriginalPlannedSpeed","ԭ�ƻ��ٶ�V"},
		{"CurrentPlannedSpeed","�ּƻ��ٶ�V"},
		{"OriginalPlannedSpeed","ԭ�ƻ��ٶȷ�V"},
		{"CurrentPlannedSpeed","�ּƻ��ٶȷ�V"},
		{"HighestCommonFactor","�������"},
		{"LateArrivalTime","����ʱ��T",},
		{"SpeedRatio","�ٶȱ�V"},
		{"EachTime","ÿ�ݵ�ʱ��T"},
		{"HowMuchTimeDidItTake","���˶���ʱ��T"},
		{"Answer: The time is %d huors","��ʱ����%dСʱ"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ԭ�ƻ��ٶ�V, 100);
	DefineLangVarInt(����ʱ��T, 3);
	DefineLangVarInt(�ּƻ��ٶ�V, 40);
	ColPrintf(PrintfCol::����,Lang("P1 ��һ������"));
	ColPrintf(PrintfCol::����,Lang("��Ŀ:�����ȥ���Σ����ƻ�ÿСʱ100ǧ�ף�����³����ٶ���40ǧ��ÿСʱ����ԭ�ƻ�����Сʱ����һ�����˶���ʱ��?"));
	DefineLangVarInt(ԭ�ƻ��ٶȷ�V, 0);
	DefineLangVarInt(�ּƻ��ٶȷ�V, 0);
	ColPrintf(PrintfCol::����,Lang("1.�����ٶȱ�V �����������������"));
	DefineLangVarInt(�������, MaxCommonFactor(ԭ�ƻ��ٶ�V.Var, �ּƻ��ٶ�V.Var));
	ԭ�ƻ��ٶȷ�V = ԭ�ƻ��ٶ�V / �������;
	�ּƻ��ٶȷ�V= �ּƻ��ٶ�V/ �������;
	ԭ�ƻ��ٶȷ�V.PrintProcessLog(1);
	�ּƻ��ٶȷ�V.PrintProcessLog(1);
	DefineLangVarInt(ÿ�ݵ�ʱ��T,0)
	ColPrintf(PrintfCol::����,Lang("2.����ÿ�ݵ�ʱ��T ÿ�ݵ�ʱ��T=(ԭ�ƻ��ٶȷ�V-�ּƻ��ٶȷ�V)/����ʱ��T"));
	ÿ�ݵ�ʱ��T = (ԭ�ƻ��ٶȷ�V - �ּƻ��ٶȷ�V)/ ����ʱ��T;
	ÿ�ݵ�ʱ��T.PrintProcessLog(2);
	DefineLangVarInt(���˶���ʱ��T, 0);
	
	//DefineFractionVar(adb, 1, 1);
	
	ColPrintf(PrintfCol::����,Lang("3.���㻨�˶���ʱ��T ���˶���ʱ��T=ÿ�ݵ�ʱ��T*��ԭ�ƻ��ٶȷ�V+(����ʱ��T/ÿ�ݵ�ʱ��T)��"));
	���˶���ʱ��T = ÿ�ݵ�ʱ��T * (�ּƻ��ٶȷ�V + (����ʱ��T / ÿ�ݵ�ʱ��T));
	���˶���ʱ��T.PrintProcessLog();
	ColPrintf(PrintfCol::���, Lang("��ʱ����%dСʱ"), (int)���˶���ʱ��T);
	
}
void P1()
{
	P1_1();
	ColPrintf(PrintfCol::����,"");
	P1_2();
	ColPrintf(PrintfCol::����,"");
}
void P1_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P1();
	Lang.SetCurLanguage(LanguageLib::English);
	P1();
	ColPrintf(PrintfCol::����,"");

}