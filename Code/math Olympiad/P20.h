#pragma once
void P20_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P20 Example 3 Clock Problem","P20例三 时钟问题"},
		{"Title: Lele woke up at 6:30 in the morning and arrived at school to find that the hour and minute hands on her watch had opened up in a straight line for the first time. So, when did Lele arrive at school?",
		"题目：乐乐早上6点半起床，赶到学校发现手表上的时针和分针正好第一次张开成一条直线，那么乐乐到达学校的时间是几时几分?"},
		{"1. Calculate the number of squares N1 where the hour and minute hands lead the hour hand at 7 o'clock. The number of squares N1 where the hour and minute hands lead the hour hand at 7 o'clock is equal to the number of squares N2\n* the number of squares N3 per square",
		"1.计算七点时分针领先时针大格数N1 七点时分针领先时针大格数N1=领先小格数N2*每大格小个数N3"},
		{"2. Calculate the leading grid number N2 at one moment. The leading grid number N2 at one moment is equal to the leading grid number N3 multiplied by the number of cells per large grid N3",
		"2.计算一刻时领先大格数N2 一刻时领先大格数N2=一刻领先小格数N3*每大格小个数N3"},
		{"3. Calculate the clockwise speed V1. The clockwise speed V1 is equal to one hour N2/(one hour minute N1/number of small cells per large grid N3)",
		"3.计算时针速度V1 时针速度V1=一小时N2/(一小时分钟N1/每大格小个数N3)" },
		{"4. Calculate the speed difference V2, which is equal to the minute hand speed V3 minus the hour hand speed V1",
		"4.计算速度差V2 速度差V2=分针速度V3-时针速度V1"},
		{"5. Calculate the error minute T1 at this moment. The error minute T1 at this moment is equal to (the leading grid number N2 at the moment - the leading grid number N1 at the hour and minute hands) divided by the speed difference V2",
		"5.计算这一刻的误差分钟T1 这一刻的误差分钟T1=(一刻时领先大格数N2-七点时分针领先时针大格数N1)/速度差V2"},
		//变量表
		{"LeadingsmallgridnumberN2","领先小格数N2"},
		{"NumberofcellsperlargegridN3","每大格小个数N3"},
		{"LeadingthesmallgridN3inaninstant","一刻领先小格数N3"},
		{"OnehourN2","一小时N2"},
		{"OnehourminuteN1","一小时分钟N1"},
		{"MinutehandspeedV3","分针速度V3"},
		{"At7o'clock,theminutehandleadsthehourhandbyalargenumberofsquaresN1","七点时分针领先时针大格数N1"},
		{"LeadingthelargegridN2inonemoment","一刻时领先大格数N2"},
		{"ClockwisespeedV1","时针速度V1"},
		{"SpeeddifferenceV2","速度差V2"},
		{"TheerroratthismomentisminuteT1","这一刻的误差分钟T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
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
	test.AddScanLineByEdgeGradient(4.0, 2.0, 4, 4.0, 0, 0, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(3.7),float(5.5)} ,{float(3.7),float(5.4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	DefineFractionVar(领先小格数N2, 5,1,1);
	DefineFractionVar(每大格小个数N3, 5,1);
	DefineFractionVar(一刻领先小格数N3, 6,1);
	DefineFractionVar(一小时N2, 1,1);
	DefineFractionVar(一小时分钟N1, 60,1);
	DefineFractionVar(分针速度V3, 1,1);
	ColPrintf(PrintfCol::标题, Lang("P20例三 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：乐乐早上6点半起床，赶到学校发现手表上的时针和分针正好第一次张开成一条直线，那么乐乐到达学校的时间是几时几分?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionVar(七点时分针领先时针大格数N1, 1,1);
	ColPrintf(PrintfCol::方法, Lang("1.计算七点时分针领先时针大格数N1 七点时分针领先时针大格数N1=领先小格数N2*每大格小个数N3"));
	七点时分针领先时针大格数N1 = 领先小格数N2 * 每大格小个数N3;
	七点时分针领先时针大格数N1.PrintProcessLog(1);
	DefineFractionVar(一刻时领先大格数N2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("2.计算一刻时领先大格数N2 一刻时领先大格数N2=一刻领先小格数N3*每大格小个数N3"));
	一刻时领先大格数N2 = 一刻领先小格数N3 * 每大格小个数N3;
	一刻时领先大格数N2.PrintProcessLog(2);
	DefineFractionVar(时针速度V1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("3.计算时针速度V1 时针速度V1=一小时N2/(一小时分钟N1/每大格小个数N3)"));
	时针速度V1 = 一小时N2 / (一小时分钟N1 / 每大格小个数N3);
	时针速度V1.PrintProcessLog(3);
	DefineFractionVar(速度差V2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("4.计算速度差V2 速度差V2=分针速度V3-时针速度V1"));
	速度差V2 = 分针速度V3 - 时针速度V1;
	速度差V2.PrintProcessLog(4);
	DefineFractionVar(这一刻的误差分钟T1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("5.计算这一刻的误差分钟T1 这一刻的误差分钟T1=(一刻时领先大格数N2-七点时分针领先时针大格数N1)/速度差V2"));
	这一刻的误差分钟T1 = (一刻时领先大格数N2 - 七点时分针领先时针大格数N1) / 速度差V2;
	这一刻的误差分钟T1.PrintProcessLog(5);
}
void P20_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P20 Case Three Consolidate Clock Problem","P20例三巩固 时钟问题"},
		{"Question: At what time between 9 and 10 o'clock is the minute hand on the same straight line as the hour hand?",
		"题目：在9到10点的什么时刻，分针于时针在同一条直线上?"},
		{"1. Calculate the speed difference V1, which is equal to the minute hand speed V2 minus the hour hand speed V3",
		"1.计算速度差V1 速度差V1=分针速度V2-时针速度V3"},
		{"2. Calculate the distance difference S1. The distance difference S1 is calculated as the degree N1 from the hour hand at 9 o'clock minus the degree N2 from the first straight line",
		"2.计算路程差S1 路程差S1=九点时距时针度数N1-第一次直线度数N2"},
		{"3. Calculate the first time walking on a straight line to time T1=distance difference S1/speed difference V1",
		"3.计算第一次在直线上走到时间T1 第一次在直线上走到时间T1=路程差S1/速度差V1" },
		{"4. Calculate the distance from the hour hand N1/speed difference V1 when walking on a straight line for the second time to time T2=9 o'clock",
		"4.计算第二次在直线上走到时间T2 第二次在直线上走到时间T2=九点时距时针度数N1/速度差V1"},
		//变量表
		{"MinutehandspeedV2","分针速度V2"},
		{"ClockwisespeedV3","时针速度V3"},
		{"At9o'clock,thedistancefromthehourhandisN1degrees","九点时距时针度数N1"},
		{"ThefirststraightlinedegreeN2","第一次直线度数N2"},
		{"SpeeddifferenceV1","速度差V1"},
		{"DistancedifferenceS1","路程差S1"},
		{"FirsttimewalkingonastraightlineuntiltimeT1","第一次在直线上走到时间T1"},
		{"ThesecondtimewalkingonastraightlinetotimeT2","第二次在直线上走到时间T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
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
	test.AddScanLineByEdgeGradient(2.0, 2.0, 4, 4.0, -(0), 0, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4),float(3.9)},{float(3),float(4.0)} ,{float(3),float(3.9)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	DefineFractionVar(分针速度V2, 6, 1);
	DefineFractionVar(时针速度V3, 1, 2);
	DefineFractionVar(九点时距时针度数N1, 270, 1);
	DefineFractionVar(第一次直线度数N2, 180, 1);
	ColPrintf(PrintfCol::标题, Lang("P20例三 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：乐乐早上6点半起床，赶到学校发现手表上的时针和分针正好第一次张开成一条直线，那么乐乐到达学校的时间是几时几分?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionVar(速度差V1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("1.计算速度差V1 速度差V1=分针速度V2-时针速度V3"));
	速度差V1 = 分针速度V2 - 时针速度V3;
	速度差V1.PrintProcessLog(1);
	DefineFractionVar(路程差S1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("2.计算路程差S1 路程差S1=九点时距时针度数N1-第一次直线度数N2"));
	路程差S1 = 九点时距时针度数N1 - 第一次直线度数N2;
	路程差S1.PrintProcessLog(2);
	DefineFractionVar(第一次在直线上走到时间T1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("3.计算第一次在直线上走到时间T1 第一次在直线上走到时间T1=路程差S1/速度差V1"));
	第一次在直线上走到时间T1 = 路程差S1 / 速度差V1;
	第一次在直线上走到时间T1.PrintProcessLog(3);
	DefineFractionVar(第二次在直线上走到时间T2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("4.计算第二次在直线上走到时间T2 第二次在直线上走到时间T2=九点时距时针度数N1/速度差V1"));
	第二次在直线上走到时间T2 = 九点时距时针度数N1 / 速度差V1;
	第二次在直线上走到时间T2.PrintProcessLog(4);
}
void P20_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P20 case four clock problem","P20例四 时钟问题"},
		{"Title: Tongtong is scheduled to attend school at 8am, but her home alarm clock stops at 6:10am. Tongtong has fully wound up her watch and hurriedly left for school without keeping it. When she arrived at school, she arrived 10\nminutes early and finished school at 12pm. When she returned home, her watch showed exactly 11pm. If Tongtong's school and home times are the same, how many minutes did the clock stop?",
		"题目：彤彤上午8点就要到学校上课，可是家里闹钟6点10分就停了，彤彤上足发条，没有对表就急急忙忙的上学去了，到学校一看，还提早了10分钟，中午12点放学，回家一看表上显示11点整，如果彤彤上学放学时间相同，那么钟表停了多少分?" },
		{"1. Calculate the time T1 for Tong Tong to go to and from school. Tong Tong's time T1 for going to and from school is equal to the time T2 displayed on the home clock minus the time T1 when the alarm clock stopped",
		"1.计算彤彤上下学时间T1 彤彤上下学时间T1=回到家钟表显示时间T2-闹钟停的时间T1"},
		{"2. Calculate the school time T2. School time T2=(dismissal time T6- class time T5)+early time T7",
		"2.计算在校时间T2 在校时间T2=(放学时间T6-上课时间T5)+提早时间T7"},
		{"3. Calculate the intermediate time difference T3. The intermediate time difference T3=Tongtong's time of going to and from school T1- school time T2",
		"3.计算中间时间差T3 中间时间差T3=彤彤上下学时间T1-在校时间T2"},
		{"4. Calculate the school time T4. School time T4=intermediate time difference T3/round-trip quantity N1",
		"4.计算上学时间T4 上学时间T4=中间时间差T3/往返数量N1"},
		{"5. Calculate the time T5 from home. T5=class time T5- school time T4- early time T7",
		"5.计算从家出来时间T5 从家出来时间T5=上课时间T5-上学时间T4-提早时间T7"},
		{"6. Calculate the time T6 when the clock stops. The time T6 when the clock stops is equal to the time T5 when the clock leaves home minus the time T1 when the alarm stops",
		"6.计算表钟停的时间T6 表钟停的时间T6=从家出来时间T5-闹钟停的时间T1"},
		//变量表
		{"Returninghome,theclockdisplaysthetimeT2","回到家钟表显示时间T2"},
		{"AlarmclockofftimeT1","闹钟停的时间T1"},
		{"SchooldismissaltimeT6","放学时间T6"},
		{"ClasstimeT5","上课时间T5"},
		{"EarlyTimeT7","提早时间T7"},
		{"RoundtripquantityN1","往返数量N1"},
		{"Tongtong'sschoolscheduleT1","彤彤上下学时间T1"},
		{"SchooltimeT2","在校时间T2"},
		{"IntermediatetimedifferenceT3","中间时间差T3"},
		{"SchooltimeT4","上学时间T4"},
		{"TimeofleavinghomeT5","从家出来时间T5"},
		{"ClockstoptimeT6","表钟停的时间T6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(回到家钟表显示时间T2, 660);
	DefineLangVarInt(闹钟停的时间T1, 370);
	DefineLangVarInt(放学时间T6, 720);
	DefineLangVarInt(上课时间T5, 480);
	DefineLangVarInt(提早时间T7, 10);
	DefineLangVarInt(往返数量N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P20例四 时钟问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：彤彤上午8点就要到学校上课，可是家里闹钟6点10分就停了，彤彤上足发条，没有对表就急急忙忙的上学去了，到学校一看，还提早了10分钟，中午12点放学，回家一看表上显示11点整，如果彤彤上学放学时间相同，那么钟表停了多少分?"));
	DefineLangVarInt(彤彤上下学时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算彤彤上下学时间T1 彤彤上下学时间T1=回到家钟表显示时间T2-闹钟停的时间T1"));
	彤彤上下学时间T1 = 回到家钟表显示时间T2 - 闹钟停的时间T1;
	彤彤上下学时间T1.PrintProcessLog(1);
	DefineLangVarInt(在校时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算在校时间T2 在校时间T2=(放学时间T6-上课时间T5)+提早时间T7"));
	在校时间T2 = (放学时间T6 - 上课时间T5) + 提早时间T7;
	在校时间T2.PrintProcessLog(2);
	DefineLangVarInt(中间时间差T3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算中间时间差T3 中间时间差T3=彤彤上下学时间T1-在校时间T2"));
	中间时间差T3 = 彤彤上下学时间T1 - 在校时间T2;
	中间时间差T3.PrintProcessLog(3);
	DefineLangVarInt(上学时间T4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算上学时间T4 上学时间T4=中间时间差T3/往返数量N1"));
	上学时间T4 = 中间时间差T3 / 往返数量N1;
	上学时间T4.PrintProcessLog(4);
	DefineLangVarInt(从家出来时间T5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算从家出来时间T5 从家出来时间T5=上课时间T5-上学时间T4-提早时间T7"));
	从家出来时间T5 = 上课时间T5 - 上学时间T4 - 提早时间T7;
	从家出来时间T5.PrintProcessLog(5);
	DefineLangVarInt(表钟停的时间T6, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算表钟停的时间T6 表钟停的时间T6=从家出来时间T5-闹钟停的时间T1"));
	表钟停的时间T6 = 从家出来时间T5 - 闹钟停的时间T1;
	表钟停的时间T6.PrintProcessLog(6);
}
void P20()
{
	P20_1();
	ColPrintf(PrintfCol::方法, "");
	P20_2();
	ColPrintf(PrintfCol::方法, "");
	P20_3();
	ColPrintf(PrintfCol::方法, "");
}
void P20_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P20();
	Lang.SetCurLanguage(LanguageLib::English);
	P20();
	ColPrintf(PrintfCol::方法, "");
}
