#pragma once
void P6_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P6 Example 1 Train Crossing the Bridge","P6例一 火车过桥"},
		{"Title: The train is 360 meters long and has a speed of 16 meters per second. It takes 90 seconds to pass through a tunnel. How long is the tunnel?",
		"题目：火车长360米，速度是16米每秒，通过一个隧道要90秒，这个隧道多长?"},
		{"1. Calculate the tunnel length S1. Tunnel length S1=(train speed V1 * transit time T1) - train length S2",
		"1.计算隧道长度S1 隧道长度S1=(火车速度V1*通过时间T1)-火车长度S2"},
		{"Answer: This tunnel is% d meters long",
		"答：这个隧道有%d米"},
		//变量表
		{"TrainSpeedV1","火车速度V1"},
		{"ByTimeT1","通过时间T1"},
		{"TrainLengthN1","火车长度S2"},
		{"TunnelLengthS1","隧道长度S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(火车速度V1, 16);
	DefineLangVarInt(通过时间T1, 90);
	DefineLangVarInt(火车长度S2, 360);
	ColPrintf(PrintfCol::标题, Lang("P6例一 火车过桥"));
	ColPrintf(PrintfCol::标题, Lang("题目：火车长360米，速度是16米每秒，通过一个隧道要90秒，这个隧道多长?"));
	DefineLangVarInt(隧道长度S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算隧道长度S1 隧道长度S1=(火车速度V1*通过时间T1)-火车长度S2"));
	隧道长度S1 = (火车速度V1 * 通过时间T1) - 火车长度S2;
	隧道长度S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::结果, Lang("答：这个隧道有%d米"), (int)隧道长度S1);
}
void P6_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P6 Example 1 Train Crossing the Bridge","P6例二 火车过桥"},
		{"Title: A convoy travels at a speed of 5 meters per second across a 200 meter long bridge, taking a total of 145 seconds. Each car is 5 meters long and spaced 8 meters apart. How many cars are there in total?",
		"题目：一个车队的速度是5米/秒行驶过200米长的桥，共用时145秒，每个车长5米，间隔8米，一共有多少辆车?"},
		{"1. Calculate fleet length S1 Fleet length S1=(transit time * transit speed) - Bridge length",
		"1.计算车队长度S1 车队长度S1=(通过时间T1*通过速度V1)-桥长S4"},
		{"2. Calculate shared vehicle N1. Shared vehicle N1=(fleet length S1+interval length S2)/(vehicle length S3+interval length S1)",
		"2.计算共有的车辆N1 共有的车辆N1=(车队长度S1+间隔长度S2)/(车长S3+间隔长度S2)"},
		{"Answer: There are a total of %d vehicles",
		"答：一共有%d辆车"},
		//变量表
		{"TrainSpeedV1","桥长S4"},
		{"ByTimeT1","通过时间T1"},
		{"TrainLengthN1","车长S3"},
		{"TunnelLengthS1","间隔长度S2"},
		{"BySpeedV1","通过速度V1"},
		{"FleetLengthS1","车队长度S1"},
		{"SharedVehicleN1","共有的车辆N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic = 
		"0:车\n"
		"-:间隔\n"
		"车队本型：0-0-0-0……0-0\n"
		"计算本型：0-0-0-0……0-0-\n"
		;
	DefineLangVarInt(桥长S4, 200);
	DefineLangVarInt(通过时间T1, 145);
	DefineLangVarInt(车长S3, 5);
	DefineLangVarInt(间隔长度S2, 8);
	DefineLangVarInt(通过速度V1, 5);
	ColPrintf(PrintfCol::标题, Lang("P6例二 火车过桥"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个车队的速度是5米/秒行驶过200米长的桥，共用时145秒，每个车长5米，间隔8米，一共有多少辆车?"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(车队长度S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算车队长度S1 车队长度S1=(通过时间T1*通过速度V1)-桥长S4"));
	车队长度S1 = (通过时间T1 * 通过速度V1) - 桥长S4;
	车队长度S1.PrintProcessLog(1);
	DefineLangVarInt(共有的车辆N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算共有的车辆N1 共有的车辆N1=(车队长度S1+间隔长度S2)/(车长S3+间隔长度S2)"));
	共有的车辆N1 = (车队长度S1 + 间隔长度S2) / (车长S3 + 间隔长度S2);
	共有的车辆N1.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：一共有%d辆车"), (int)共有的车辆N1);
}
void P6_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P6 Example Three: Train Crossing the Bridge","P6例三 火车过桥"},
		{"Title: Three grades each have 100 people going on a spring outing, divided into two vertical rows. The distance between adjacent vertical rows of grades 1, 2, and\n3 is 1, 2, and 3 meters respectively. The distance between grades is 5 meters, and the speed is 90 meters per minute.\nIt took 4 minutes to cross a bridge. How many meters is the bridge?",
		"题目：三个年级各有100人去春游，都分成两列竖排，1，2，3号年级相邻两行竖排相距分别是1，2，3米，年级之间间距是5米，速度都是90米/分钟，过了一座桥用了4分钟,桥有多少米?"},
		{"1. Calculate the spacing number N1. The spacing number N1=the number of students in a single grade NP1/the number of columns in a single grade N2- the spacing number N3\nat the end without spacing",
		"1.计算每年级间距数N1 每年级间距数N1=单年级人数NP1/单年级的列数N2-最后面没有间距的间距数N3"},
		{"2. Calculate the total distance between teams S1=the number of distances between each grade N1 * (the distance between grade 1 S2+grade 2 S3+grade 3 S4)",
		"2.计算队伍总的间距S1 队伍总的间距S1=每年级间距数N1*(号1年级间距S2+号2年级间距S3+号3年级间距S4)"},
		{"3. Calculate team length S5. Team length S5=total distance between teams S1+(distance between third grade N4 * distance between grades S6)",
		"3.计算队伍长度S5 队伍长度S5=队伍总的间距S1+(三年级之间的间距数N4*年级之间间距S6)"},
		{"4.Calculate Bridge Length S7 Bridge Length S7=(Team Speed V1 * Passing Time T1) - Team Length S5",
		"4.计算桥长S7 桥长S7=(队伍速度V1*通过时间T1)-队伍长度S5"},
		{"Answer: The bridge is% d meters long",
		"答：桥有%d米"},
		//变量表
		{"NumberOfStudentsInASingleGradeNP1","单年级人数NP1"},
		{"NumberOfColumnsInASingleGradeN2","单年级的列数N2"},
		{"TheNumberOfSpacingN3WithoutAnySpacingAtTheEnd","最后面没有间距的间距数N3"},
		{"Grade1SpacingS2","号1年级间距S2"},
		{"Grade2SpacingS3","号2年级间距S3"},
		{"Grade3ApacingS4","号3年级间距S4"},
		{"TheDistanceBetweenThirdGradeStudentsN4","三年级之间的间距数N4"},
		{"IntervalBetweenGrades S6","年级之间间距S6"}, 
		{"TeamSpeedV1","队伍速度V1"},
		{"ByTimeT1","通过时间T1"},
		{"DistanceBetweenGradesN1","每年级间距数N1"},
		{"TheTotalDistanceBetweenTeamsS1","队伍总的间距S1"},
		{"TeamLengthS5","队伍长度S5"},
		{"BridgeLengthS7","桥长S7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"0:学生\n"
		"-:间隔(m)\n"
		"1号      2号       3号\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"0-0-----0--0-----0---0\n"
		"………………………………\n"
		;

	DefineLangVarInt(单年级人数NP1, 100);
	DefineLangVarInt(单年级的列数N2, 2);
	DefineLangVarInt(最后面没有间距的间距数N3, 1);
	DefineLangVarInt(号1年级间距S2, 1);
	DefineLangVarInt(号2年级间距S3, 2);
	DefineLangVarInt(号3年级间距S4, 3);
	DefineLangVarInt(三年级之间的间距数N4, 2);
	DefineLangVarInt(年级之间间距S6, 5);
	DefineLangVarInt(队伍速度V1, 90);
	DefineLangVarInt(通过时间T1, 4);
	ColPrintf(PrintfCol::标题, Lang("P6例三 火车过桥"));
	ColPrintf(PrintfCol::标题, Lang("题目：三个年级各有100人去春游，都分成两列竖排，1，2，3号年级相邻两行竖排相距分别是1，2，3米，年级之间间距是5米，速度都是90米/分钟，过了一座桥用了4分钟,桥有多少米?"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(每年级间距数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算每年级间距数N1 每年级间距数N1=单年级人数NP1/单年级的列数N2-最后面没有间距的间距数N3"));
	每年级间距数N1 = 单年级人数NP1 / 单年级的列数N2 - 最后面没有间距的间距数N3;
	每年级间距数N1.PrintProcessLog(1);
	DefineLangVarInt(队伍总的间距S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算队伍总的间距S1 队伍总的间距S1=每年级间距数N1*(号1年级间距S2+号2年级间距S3+号3年级间距S4)"));
	队伍总的间距S1 = 每年级间距数N1 * (号1年级间距S2 + 号2年级间距S3 + 号3年级间距S4);
	队伍总的间距S1.PrintProcessLog(2);
	DefineLangVarInt(队伍长度S5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算队伍长度S5 队伍长度S5=队伍总的间距S1+(三年级之间的间距数N4*年级之间间距S6)"));
	队伍长度S5 = 队伍总的间距S1 + (三年级之间的间距数N4 * 年级之间间距S6);
	队伍长度S5.PrintProcessLog(3);
	DefineLangVarInt(桥长S7, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算桥长S7 桥长S7=(队伍速度V1*通过时间T1)-队伍长度S5"));
	桥长S7 = (队伍速度V1 * 通过时间T1) - 队伍长度S5;
	桥长S7.PrintProcessLog(4);
	ColPrintf(PrintfCol::结果, Lang("答：桥有%d米"), (int)桥长S7);
}
void P6()
{
	P6_1();
	ColPrintf(PrintfCol::方法, "");
	P6_2();
	ColPrintf(PrintfCol::方法, "");
	P6_3();
	ColPrintf(PrintfCol::方法, "");
}
void P6_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P6();
	Lang.SetCurLanguage(LanguageLib::English);
	P6();
	ColPrintf(PrintfCol::方法, "");

}