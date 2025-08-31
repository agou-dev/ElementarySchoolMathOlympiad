#pragma once
void P1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P1 Example 1 Method 1","P1 例一方法1"},
		{"A wants to go on a trip, originally planned to travel at 100 kilometers per hour, but due to traffic congestion, the speed is 40 \nkilometers per hour, which is three hours later than the original plan. How much time did it take in total?",
		"题目:甲想出去旅游，本计划每小时100千米，但因堵车，速度是40千米每小时，比原计划晚三小时，问一共花了多少时间?"},
		{"1. Calculate the distance difference between the current plan and the original plan. The distance difference between the current plan and the original plan is equal to the planned speed multiplied by the delayed arrival time",
		"1.计算现计划与原计划相差的路程S 现计划与原计划相差的路程S=现计划速度V*晚到的时间T"},
		{"2. Calculate the original planned time. The original planned time is equal to the distance difference between the current plan and the original plan divided by the original planned speed minus the current planned speed",
		"2.计算原计划时间 原计划时间T=现计划与原计划相差的路程S/(原计划速度V-现计划速度V)"},
		{"3. Calculate how long it took=original planned time+delayed arrival time",
		"3.计算花了多长时间T 花了多长时间T=原计划时间T+晚到的时间T"},
		//变量表
		{"OriginalPlannedSpeed","原计划速度V"},
		{"CurrentPlannedSpeed","现计划速度V"},
		{"LateArrivalTime","晚到的时间T",},
		{"TheDistanceDifferenceBetweenTheCurrentPlanAndTheOriginalPlan","现计划与原计划相差的路程S"},
		{"OriginalPlannedTime","原计划时间T"},
		{"HowLongDidItTake","花了多长时间T"},
		{"Answer: The time is %d hour","答：时间是%d小时"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(原计划速度V, 100);
	DefineLangVarInt(现计划速度V, 40);
	DefineLangVarInt(晚到的时间T, 3);
	ColPrintf(PrintfCol::标题,Lang("P1 例一方法1"));
	ColPrintf(PrintfCol::标题,Lang("题目:甲想出去旅游，本计划每小时100千米，但因堵车，速度是40千米每小时，比原计划晚三小时，问一共花了多少时间?"));
	DefineLangVarInt(现计划与原计划相差的路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("1.计算现计划与原计划相差的路程S 现计划与原计划相差的路程S=现计划速度V*晚到的时间T"));
	现计划与原计划相差的路程S = 现计划速度V * 晚到的时间T;
	现计划与原计划相差的路程S.PrintProcessLog(1);
	DefineLangVarInt(原计划时间T, 0);
	ColPrintf(PrintfCol::方法,Lang("2.计算原计划时间 原计划时间T=现计划与原计划相差的路程S/(原计划速度V-现计划速度V)"));
	原计划时间T = 现计划与原计划相差的路程S / (原计划速度V - 现计划速度V);
	原计划时间T.PrintProcessLog(2);
	DefineLangVarInt(花了多长时间T,0)
	ColPrintf(PrintfCol::方法,Lang("3.计算花了多长时间T 花了多长时间T=原计划时间T+晚到的时间T"));
	花了多长时间T = 原计划时间T + 晚到的时间T;
	花了多长时间T.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果,Lang("答：时间是%d小时"), (int)花了多长时间T);
}
void P1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P1 Example 1 Method 2","P1 例一方法二"},
		{"A wants to go on a trip, originally planned to travel at 100 kilometers per hour, but due to traffic congestion, the speed is 40 \nkilometers per hour, which is three hours later than the original plan. How much time did it take in total?",
		"题目:甲想出去旅游，本计划每小时100千米，但因堵车，速度是40千米每小时，比原计划晚三小时，问一共花了多少时间?"},
		{"1. Calculate the speed to speed ratio.Var.ReduceNumeratorDenominator(); ",
		"1.计算速度比V 计算两数的最大公因数"},
		{"2. Calculate the time for each part=(denominator of speed ratio - numerator of speed ratio)",
		"2.计算每份的时间T 每份的时间T=(原计划速度份V-现计划速度份V)/晚到的时间T"},
		{"3. Calculate how much time was spent=time per serving * (denominator of speed ratio+numerator of speed ratio)",
		"3.计算花了多少时间T 花了多少时间T=每份的时间T*（原计划速度份V+(晚到的时间T/每份的时间T)）"},
		//变量表
		{"OriginalPlannedSpeed","原计划速度V"},
		{"CurrentPlannedSpeed","现计划速度V"},
		{"OriginalPlannedSpeed","原计划速度份V"},
		{"CurrentPlannedSpeed","现计划速度份V"},
		{"HighestCommonFactor","最大公因数"},
		{"LateArrivalTime","晚到的时间T",},
		{"SpeedRatio","速度比V"},
		{"EachTime","每份的时间T"},
		{"HowMuchTimeDidItTake","花了多少时间T"},
		{"Answer: The time is %d huors","答：时间是%d小时"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(原计划速度V, 100);
	DefineLangVarInt(晚到的时间T, 3);
	DefineLangVarInt(现计划速度V, 40);
	ColPrintf(PrintfCol::标题,Lang("P1 例一方法二"));
	ColPrintf(PrintfCol::标题,Lang("题目:甲想出去旅游，本计划每小时100千米，但因堵车，速度是40千米每小时，比原计划晚三小时，问一共花了多少时间?"));
	DefineLangVarInt(原计划速度份V, 0);
	DefineLangVarInt(现计划速度份V, 0);
	ColPrintf(PrintfCol::方法,Lang("1.计算速度比V 计算两数的最大公因数"));
	DefineLangVarInt(最大公因数, MaxCommonFactor(原计划速度V.Var, 现计划速度V.Var));
	原计划速度份V = 原计划速度V / 最大公因数;
	现计划速度份V= 现计划速度V/ 最大公因数;
	原计划速度份V.PrintProcessLog(1);
	现计划速度份V.PrintProcessLog(1);
	DefineLangVarInt(每份的时间T,0)
	ColPrintf(PrintfCol::方法,Lang("2.计算每份的时间T 每份的时间T=(原计划速度份V-现计划速度份V)/晚到的时间T"));
	每份的时间T = (原计划速度份V - 现计划速度份V)/ 晚到的时间T;
	每份的时间T.PrintProcessLog(2);
	DefineLangVarInt(花了多少时间T, 0);
	
	//DefineFractionVar(adb, 1, 1);
	
	ColPrintf(PrintfCol::方法,Lang("3.计算花了多少时间T 花了多少时间T=每份的时间T*（原计划速度份V+(晚到的时间T/每份的时间T)）"));
	花了多少时间T = 每份的时间T * (现计划速度份V + (晚到的时间T / 每份的时间T));
	花了多少时间T.PrintProcessLog();
	ColPrintf(PrintfCol::结果, Lang("答：时间是%d小时"), (int)花了多少时间T);
	
}
void P1()
{
	P1_1();
	ColPrintf(PrintfCol::方法,"");
	P1_2();
	ColPrintf(PrintfCol::方法,"");
}
void P1_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P1();
	Lang.SetCurLanguage(LanguageLib::English);
	P1();
	ColPrintf(PrintfCol::方法,"");

}