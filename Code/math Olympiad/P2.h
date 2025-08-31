#pragma once
void P2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P2 Example One Proportional Method","P2例一 比例法"},
		{"Title: Ningning walks to school every day. If the distance is 60 meters per minute, it will be 5 minutes late.\nIf it is 80 meters, it will be 10 minutes early. Ask about the distance.",
		"题目：宁宁每天步行到学校，如果每分钟60米，迟到5分钟，80米则早到10分钟，问路程。"},
		{"1. Calculate the maximum common factor between two numbers based on the speed ratio V",
		"1.计算速度比V 计算两数的最大公因数"},
		{"2. Calculate the time difference T2 of one part. The time difference T2 of one part is calculated as (late arrival time T+early arrival time T1) divided by (early arrival speed V - late arrival speed V1)",
		"2.计算一份的时间差T2 一份的时间差T2=(迟到的时间T+早到的时间T1)/(早到的速度份V-晚到的速度份V1)"},
		{"4. Calculate the time T3 for lateness. The time T3 for lateness is equal to the speed V1 of lateness multiplied by the time difference T2",
		"4.计算迟到用的时间T3 迟到用的时间T3=晚到的时间份T1*一份的时间差T2"},
		{"3. Calculate the time ratio V to calculate the greatest common factor of two numbers",
		"3.计算时间比V 速度比和时间比呈反比"},
		{"5. Calculate the total distance S, which is equal to the time T3 for being late and the speed V for being late",
		"5.计算总路程S 总路程S = 迟到用的时间T3 * 晚到的速度V"},
		{"Answer: The distance from home to school is %d meters",
		"答：从家到学校的路程是%d米"},
		//变量表
		{"LateArrivalSpeedV","晚到的速度V"},
		{"EarlyArrivalSpeedV","早到的速度V"},
		{"LateTimeT","迟到的时间T"},
		{"EarlyArrivalTimeT1","早到的时间T1"},
		{"EarlyArrivalSpeedV","早到的速度份V"},
		{"LateArrivalSpeedV1","晚到的速度份V1"},
		{"TimeDifferenceT2","一份的时间差T2"},
		{"LateArrivalTimeT3","迟到用的时间T3"},
		{"TotalDistanceS","总路程S"},
		{"HighestCommonFactor","最大公因数"},
		{"EarlyArrivalSpeedV","早到的时间份T"},
		{"LateArrivalSpeedV1","晚到的时间份T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(晚到的速度V, 60);
	DefineLangVarInt(早到的速度V, 80);
	DefineLangVarInt(迟到的时间T, 5);
	DefineLangVarInt(早到的时间T1, 10);
	ColPrintf(PrintfCol::标题, Lang("P2例一 比例法"));
	ColPrintf(PrintfCol::标题, Lang("题目：宁宁每天步行到学校，如果每分钟60米，迟到5分钟，80米则早到10分钟，问路程。"));
	DefineLangVarInt(早到的速度份V,0);
	DefineLangVarInt(晚到的速度份V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算速度比V 计算两数的最大公因数"));
	DefineLangVarInt(最大公因数, MaxCommonFactor(晚到的速度V.Var, 早到的速度V.Var));
	早到的速度份V = 早到的速度V / 最大公因数;
	晚到的速度份V1 = 晚到的速度V / 最大公因数;
	早到的速度份V.PrintProcessLog(1);
	晚到的速度份V1.PrintProcessLog(1);
	DefineLangVarInt(一份的时间差T2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算一份的时间差T2 一份的时间差T2=(迟到的时间T+早到的时间T1)/(早到的速度份V-晚到的速度份V1)"));
	一份的时间差T2 = (迟到的时间T + 早到的时间T1) / (早到的速度份V - 晚到的速度份V1);
	一份的时间差T2.PrintProcessLog(2);
	DefineLangVarInt(早到的时间份T, 0);
	DefineLangVarInt(晚到的时间份T1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算时间比V 速度比和时间比呈反比"));
	早到的时间份T = 晚到的速度份V1;
	晚到的时间份T1 = 早到的速度份V;
	早到的时间份T.PrintProcessLog(3);
	晚到的时间份T1.PrintProcessLog(3);
	DefineLangVarInt(迟到用的时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算迟到用的时间T3 迟到用的时间T3=晚到的时间份T1*一份的时间差T2"));
	迟到用的时间T3 = 晚到的时间份T1 * 一份的时间差T2;
	迟到用的时间T3.PrintProcessLog(4);
	DefineLangVarInt(总路程S, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算总路程S 总路程S = 迟到用的时间T3 * 晚到的速度V"));
	总路程S = 迟到用的时间T3 * 晚到的速度V;
	总路程S.PrintProcessLog(5);
	ColPrintf(PrintfCol::结果, Lang("答：从家到学校的路程是%d米"),(int)总路程S);
}
void P2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P2 Example 2 Proportional Method","P2例二 比例法"},
		{"Title: A travels from location A to location B. If he leaves at 7am and arrives promptly at 5pm, and wants to leave at 10am\nand arrive promptly at 5pm, he must walk an additional 6 kilometers per hour",
		"题目：甲从A地到B地办事，假如他10小时到，他想从7小时到，就必须每小时多走6千米，问路程"},
		{"1. Calculate the maximum common factor between two numbers based on the speed ratio V",
		"1.计算速度比V 计算两数的最大公因数"},
		{"2. Calculate the original planned speed Voriginal planned speed V1=multi lane distance per hour V1/(current planned speed N2- original planned speed N1) * original planned speed N1",
		"2.计算原计划速度V 原计划速度V1 = 每小时多行路程V1 / (现计划速度份N2 - 原计划速度份N1) * 原计划速度份N1"},
		{"3. Calculate the total distance S, which is equal to the original planned speed V1 multiplied by the original planned time T1",
		"3.计算总路程S 总路程S1 = 原计划速度V1 * 原计划时间T1"},
		{"Answer: The total distance S is %d kilometers",
		"答：总路程S是%d千米"},
		//变量表
		{"OriginalPlannedTimeT1","原计划时间T1"},
		{"CurrentPlannedTimeT2","现计划时间T2"},
		{"MultipleTripsPerHourV1","每小时多行路程V1"},
		{"OriginalPlannedSpeedShareN1","原计划速度份N1"},
		{"CurrentPlannedSpeedN2","现计划速度份N2"},
		{"HighestCommonFactor","最大公因数"},
		{"OriginalPlannedSpeedV1","原计划速度V1"},
		{"TotalDistanceS1","总路程S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(原计划时间T1, 10);
	DefineLangVarInt(现计划时间T2, 7);
	DefineLangVarInt(每小时多行路程V1, 6);
	ColPrintf(PrintfCol::标题, Lang("P2例二 比例法"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲从A地到B地办事，假如他10小时到，他想从7小时到，就必须每小时多走6千米，问路程"));
	ColPrintf(PrintfCol::方法, Lang("1.计算速度比V 计算两数的最大公因数"));
	DefineLangVarInt(最大公因数, MaxCommonFactor(原计划时间T1.Var, 现计划时间T2.Var));
	DefineLangVarInt(原计划速度份N1, 0);
	DefineLangVarInt(现计划速度份N2, 0);
	现计划速度份N2 = 原计划时间T1 / 最大公因数;
	原计划速度份N1 = 现计划时间T2 / 最大公因数;
	原计划速度份N1.PrintProcessLog(1);
	现计划速度份N2.PrintProcessLog(1);
	DefineLangVarInt(原计划速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算原计划速度V 原计划速度V1 = 每小时多行路程V1 / (现计划速度份N2 - 原计划速度份N1) * 原计划速度份N1"));
	原计划速度V1 = 每小时多行路程V1 / (现计划速度份N2 - 原计划速度份N1) * 原计划速度份N1;
	原计划速度V1.PrintProcessLog(2);
	DefineLangVarInt(总路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算总路程S 总路程S1 = 原计划速度V1 * 原计划时间T1"));
	总路程S1 = 原计划速度V1 * 原计划时间T1;
	总路程S1.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：总路程S是%d千米"), (int)总路程S1);
}
void P2_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P2 Example Three Proportional Method",
		"P2例三 比例法"},
		{"Title: Two people walking towards each other, meeting after 4 hours, if their speed increases\nby 1 kilometer, meeting after 3 hours, ask about the distance.",
		"题目：两个人相向而行，4小时后相遇，如果速度提升1千米，3小时后相遇，问路程。"},
		{"1. Calculate the maximum common factor between two numbers based on the speed ratio V:T",
		"1.计算速度比和时间比V:T 计算两数的最大公因数"},
		{"2. Calculate speed and V4 speed and V4=number of people N5 * original planned speed N3",
		"2.计算速度和V4 速度和V4=人数N5*原计划速度份N3"},
		{"3. Calculate the total distance S, where S1 equals the speed and V4 multiplied by the original planned speed and N3",
		"3.计算总路程S 总路程S1=速度和V4*原计划速度份N3"},
		{"Answer: The total distance S is %d kilometers",
		"答：总路程S是%d千米"},
		//变量表
		{"OriginalPlannedTimeT1","原计划时间T1"},
		{"CurrentPlannedTime T2","现计划时间T2"},
		{"IncreasedSpeedV3","提升的速度V3"},
		{"OriginalPlannedTimeShareN1","原计划时间份N1"},
		{"CurrentPlannedTimeShareT1","现计划时间份T1"},
		{"OriginalPlanneSpeedShareT2","原计划速度份T2"},
		{"CurrentPlannedSpeedN2","现计划速度份N2"},
		{"SpeedandV4","速度和V4"},
		{"TotalDistanceS1","总路程S1"},
		{"HighestCommonFactor","最大公因数"},
		{"NumberOfPeopleN5","人数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(原计划时间T1, 4);
	DefineLangVarInt(现计划时间T2, 3);
	DefineLangVarInt(提升的速度V3, 1);
	DefineLangVarInt(人数N5, 2);
	ColPrintf(PrintfCol::标题, Lang("P2例三 比例法"));
	ColPrintf(PrintfCol::标题, Lang("题目：两个人相向而行，4小时后相遇，如果速度提升1千米，3小时后相遇，问路程。"));
	ColPrintf(PrintfCol::方法, Lang("1.计算速度比和时间比V:T 计算两数的最大公因数"));
	DefineLangVarInt(最大公因数, MaxCommonFactor(原计划时间T1.Var, 现计划时间T2.Var));
	DefineLangVarInt(原计划时间份N1, 0);
	DefineLangVarInt(现计划时间份T1, 0);
	DefineLangVarInt(原计划速度份T2, 0);
	DefineLangVarInt(现计划速度份N2, 0);
	原计划时间份N1 = 原计划时间T1 / 最大公因数;
	现计划时间份T1 = 现计划时间T2 / 最大公因数;
	原计划速度份T2 = 现计划时间份T1;
	现计划速度份N2 = 原计划时间份N1;
	原计划时间份N1.PrintProcessLog(1);
	现计划时间份T1.PrintProcessLog(1);
	原计划速度份T2.PrintProcessLog(1);
	现计划速度份N2.PrintProcessLog(1);
	DefineLangVarInt(速度和V4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算速度和V4 速度和V4=人数N5*原计划速度份N3"));
	速度和V4 = 人数N5 * 原计划速度份T2;
	速度和V4.PrintProcessLog(2);
	DefineLangVarInt(总路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算总路程S 总路程S1=速度和V4*原计划速度份N3"));
	总路程S1 = 速度和V4 * 原计划时间份N1;
	总路程S1.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：总路程S是%d千米"),(int)总路程S1);
}
void P2()
{
	P2_1();
	ColPrintf(PrintfCol::方法, "");
	P2_2();
	ColPrintf(PrintfCol::方法, "");
	P2_3();
	ColPrintf(PrintfCol::方法, "");
}
void P2_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P2();
	Lang.SetCurLanguage(LanguageLib::English);
	P2();
	ColPrintf(PrintfCol::方法, "");

}