#pragma once
void P21_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P21 Example 5 Clock Problem","P21例五 时钟问题"},
		{"Title: Xiaoqiang has an alarm clock at home that is 3 minutes faster than standard time per hour. One night, Xiaoqiang aimed at the alarm clock and wanted to wake up at 6 o'clock the next day. What time should he set it for",
		"题目：小强家有一个闹钟，每小时比标准时间快3分钟，有一天晚上，小强对准了闹钟，他想在第二天6点钟时起床，他应该定在几点几分"},
		{"1. Calculate Xiaoqiang's sleeping time T1 Xiaoqiang's sleeping time T1=(hours of the day T2- start time T3)+end time T4",
		"1.计算小强睡觉时间T1 小强睡觉时间T1=(一天小时数T2-开始时间T3)+结束时间T4"},
		{"2. Calculate the fast minute T2. The fast minute T2=Xiaoqiang's sleeping time T1 * faster than standard time T4",
		"2.计算快的分钟T2 快的分钟T2=小强睡觉时间T1*比标准时间快时间T4"},
		{"3. Since it is necessary to wake up at 6am in the morning and the fastest time is 24 minutes, the schedule should be scheduled at 6:24am",
		"3.因为早上需要6点起，而快的时间是24分钟，所以应该在6点24定表"},
		//变量表
		{"HoursperdayT2","一天小时数T2"},
		{"StarttimeT3","开始时间T3"},
		{"EndtimeT4","结束时间T4"},
		{"FasterthanstandardtimeT4","比标准时间快时间T4"},
		{"Xiaoqiang'ssleepingtimeT1","小强睡觉时间T1"},
		{"FastminuteT2","快的分钟T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一天小时数T2, 24);
	DefineLangVarInt(开始时间T3, 22);
	DefineLangVarInt(结束时间T4, 6);
	DefineLangVarInt(比标准时间快时间T4, 3);
	ColPrintf(PrintfCol::标题, Lang("P21例五 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：小强家有一个闹钟，每小时比标准时间快3分钟，有一天晚上，小强对准了闹钟，他想在第二天6点钟时起床，他应该定在几点几分"));
	DefineLangVarInt(小强睡觉时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算小强睡觉时间T1 小强睡觉时间T1=(一天小时数T2-开始时间T3)+结束时间T4"));
	小强睡觉时间T1 = (一天小时数T2 - 开始时间T3) + 结束时间T4;
	小强睡觉时间T1.PrintProcessLog(1);
	DefineLangVarInt(快的分钟T2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算快的分钟T2 快的分钟T2=小强睡觉时间T1*比标准时间快时间T4"));
	快的分钟T2 = 小强睡觉时间T1 * 比标准时间快时间T4;
	快的分钟T2.PrintProcessLog(2);
	ColPrintf(PrintfCol::方法, Lang("3.因为早上需要6点起，而快的时间是24分钟，所以应该在6点24定表"));
}
void P21_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P21 Example Six Clock Problem","P21例六 时钟问题"},
		{"Title: What time is it when the hour and minute hands of a clock are between 4 and 6, and the clock's five is in the center of the hour and minute hands?",
		"题目：一个钟的时针和分针指在4与六之间，时钟的五在时针和分针的正中央，这时什么时刻?"},
		{"1. Let the distance between the hour and minute hands be N at 5 o'clock",
		"1.设时针分针的距离5点的距离为N"},
		{"2. Calculate the distance traveled by the minute hand S1=5 * 5-N",
		"2.计算分针走的路程 分针走的路程=5*5-N"},
		{"3. Calculate the distance traveled by the hour hand. The distance traveled by the hour hand is equal to N",
		"3.计算时针走的路程 时针走的路程=N"},
		{"4. Calculate the distance and S1 distance, and S1=5 * 5-N+N=25",
		"4.计算路程和S1 路程和S1=5*5-N+N=25"},
		{"5. Calculate the extra minute N1=distance and S1/(minute hand speed V2- one hour N2/(one hour minute N1/one large grid number N3))",
		"5.计算多走的分钟N1 多走的分钟N1=路程和S1/(分针速度V2+一小时N2/(一小时分钟N1/一大格小格数N3))"},
		//变量表
		{"DistanceandS1","路程和S1"},
		{"MinutehandspeedV2","分针速度V2"},
		{"OnehourminuteN1","一小时分钟N1"},
		{"OnehourN2","一小时N2"},
		{"AlargegridandasmallgridN3","一大格小格数N3"},
		{"MoreminutestowalkN1","多走的分钟N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionVar(路程和S1, 25, 1);
	DefineFractionVar(分针速度V2, 1, 1);
	DefineFractionVar(一小时N2, 1, 1);
	DefineFractionVar(一小时分钟N1, 60, 1);
	DefineFractionVar(一大格小格数N3, 5, 1);
	ColPrintf(PrintfCol::标题, Lang("P21例六 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个钟的时针和分针指在4与六之间，时钟的五在时针和分针的正中央，这时什么时刻?"));
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddSector(4, 4, 3.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex6 = { {float(4),float(3.9)},{float(6.9),float(3.9)},{float(6.9),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');
	test.AddText(PrintfCol::顶点标注, 0.9, 3.9, "12");
	test.AddText(PrintfCol::顶点标注, 1.4, 5.5, "1");
	test.AddText(PrintfCol::顶点标注, 2, 6.3, "2");
	test.AddText(PrintfCol::顶点标注, 4, 7.0, "3");
	test.AddText(PrintfCol::顶点标注, 5.3, 6.9, "4");
	test.AddText(PrintfCol::顶点标注, 6.7, 5.7, "5");
	test.AddText(PrintfCol::顶点标注, 7.3, 4, "6");
	test.AddText(PrintfCol::顶点标注, 6.7, 2.3, "7");
	test.AddText(PrintfCol::顶点标注, 5.7, 1.3, "8");
	test.AddText(PrintfCol::顶点标注, 4, 0.9, "9");
	test.AddText(PrintfCol::顶点标注, 3.0, 1.0, "10");
	test.AddText(PrintfCol::顶点标注, 2.0, 1.5, "11");
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(5.0),float(4.7)} ,{float(5.0),float(4.6)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = { {float(4),float(3.7)},{float(4.7),float(6.0)} ,{float(4.7),float(5.7)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex2, ScanningLineT::FillMode::RealMode, '+', 0);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	ColPrintf(PrintfCol::方法, Lang("1.设时针分针的距离5点的距离为N"));
	ColPrintf(PrintfCol::方法, Lang("2.计算分针走的路程 分针走的路程=5*5-N"));
	ColPrintf(PrintfCol::方法, Lang("3.计算时针走的路程 时针走的路程=N"));
	ColPrintf(PrintfCol::方法, Lang("4.计算路程和S1 路程和S1=5*5-N+N=25"));
	DefineFractionVar(多走的分钟N1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("5.计算多走的分钟N1 多走的分钟N1=路程和S1/(分针速度V2+一小时N2/(一小时分钟N1/一大格小格数N3))"));
	多走的分钟N1 = 路程和S1 / (分针速度V2 + 一小时N2 / (一小时分钟N1 / 一大格小格数N3));
	多走的分钟N1.PrintProcessLog(2);
}
void P21()
{
	P21_1();
	ColPrintf(PrintfCol::方法, "");
	P21_2();
	ColPrintf(PrintfCol::方法, "");
	
}
void P21_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P21();
	Lang.SetCurLanguage(LanguageLib::English);
	P21();
	ColPrintf(PrintfCol::方法, "");

}