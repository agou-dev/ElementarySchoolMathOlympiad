#pragma once


//本篇有7个分别是P45_1_1,P45_1_2,P45_1_3,P45_1_4,P45_1_5,P45_2,P45_3.
//例一包括5个小题，例二和例三
void P45_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1: The first question is about tolerance and rejection","P45例一第一小题 容斥问题"},
		{"What are the numbers from 1 to 100 that can be divided by 2?",
		"例一题目：在1到100这些自然数中"},
		{"(1) Question: How many can be divided by 2?",
		"(1)题目：能被2整除的有几个？"},
		{"1. Calculate the number N1 that can be divided by two. The number N1 that can be divided by two is equal to the number N2 of these numbers divided by N3 among them",
		"1.计算能被二整除的数量N1 能被二整除的数量N1=这些数的个数N2/在这些数中被二整除N3"},
		//变量表
		{"ThequantityN1thatcanbedividedbytwo","能被二整除的数量N1"},
		{"ThenumberofthesenumbersN2","这些数的个数N2"},
		{"DividedbytwoamongthesenumbersN3","在这些数中被二整除N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(这些数的个数N2, 100);
	DefineLangVarInt(在这些数中被二整除N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P45例一第一小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("例一题目：在1到100这些自然数中"));
	ColPrintf(PrintfCol::标题, Lang("(1)题目：能被2整除的有几个？"));
	DefineLangVarInt(能被二整除的数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算能被二整除的数量N1 能被二整除的数量N1=这些数的个数N2/在这些数中被二整除N3"));
	能被二整除的数量N1 = 这些数的个数N2 / 在这些数中被二整除N3;
	能被二整除的数量N1.PrintProcessLog(1);
}
void P45_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1 Second sub question: Refutation problem","P45例一第二小题 容斥问题"},
		{"(2) Question: How many can be divided by 3?",
		"(2)题目：能被3整除的有几个？"},
		{"1. Calculate the number N1 that can be divided by three and the number N1 that can be divided by two=the number of these numbers N2/the number N3 that can be divided by three among these numbers",
		"1.计算能被三整除的数量N1 能被三整除的数量N1=这些数的个数N2/在这些数中被三整除N3"},
		//变量表
		{"ThequantityN1thatcanbedividedbytwo","能被三整除的数量N1"},
		{"ThenumberofthesenumbersN2","这些数的个数N2"},
		{"DividedByThreeAmongTheseNumbersN3","在这些数中被三整除N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(这些数的个数N2, 100);
	DefineLangVarInt(在这些数中被三整除N3, 3);
	ColPrintf(PrintfCol::标题, Lang("P45例一第二小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("(2)题目：能被3整除的有几个？"));
	DefineLangVarInt(能被三整除的数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算能被三整除的数量N1 能被三整除的数量N1=这些数的个数N2/在这些数中被三整除N3"));
	能被三整除的数量N1 = 这些数的个数N2 / 在这些数中被三整除N3;
	能被三整除的数量N1.PrintProcessLog(1);
}
void P45_1_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1 Third sub question: Refutation problem","P45例一第三小题 容斥问题"},
		{"(3) Question: How many can be divided by 2 and 3?",
		"(3)题目：能被2和3整除的有几个？"},
		{"1. Find the least common multiple of 2 and 3",
		"1.求2和3的最小公倍数"},
		{"2. Calculate the number N1 that can be divided by three and two, which is equal to the number of these numbers N2 divided by the least common multiple N3",
		"2.计算能被三和二整除的数量N1 能被三和二整除的数量N1=这些数的个数N2/最小公倍数N3"},
		//变量表
		{"The quantity N1 that can be divided by three and two","能被三和二整除的数量N1"},
		{"The number of these numbers N2","这些数的个数N2"},
		{"Divided by three among these numbers N3","在这些数中被三整除N3"},
		{"Divided by two among these numbers N3","在这些数中被二整除N3"},
		{"Minimum common multiple N3","最小公倍数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(这些数的个数N2, 100);
	DefineLangVarInt(在这些数中被三整除N3, 3);
	DefineLangVarInt(在这些数中被二整除N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P45例一第三小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("(3)题目：能被2和3整除的有几个？"));
	DefineLangVarInt(最小公倍数N3, MinCommonMultiple(在这些数中被三整除N3, 在这些数中被二整除N3));
	ColPrintf(PrintfCol::方法, Lang("1.求2和3的最小公倍数"));
	DefineLangVarInt(能被三和二整除的数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算能被三和二整除的数量N1 能被三和二整除的数量N1=这些数的个数N2/最小公倍数N3"));
	能被三和二整除的数量N1 = 这些数的个数N2 / 最小公倍数N3;
	能被三和二整除的数量N1.PrintProcessLog(2);
}
void P45_1_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1 Third sub question: Refutation problem","P45例一第四小题 容斥问题"},
		{"(4) Question: How many can be divided by 2 or 3?",
		"(4)题目：能被2或3整除的有几个？"},
		{"1. Calculate the number N1 that can be divided by two. The number N1 that can be divided by two is equal to the number N2 of these numbers divided by N3 among them",
		"1.计算能被二整除的数量N1 能被二整除的数量N1=这些数的个数N2/在这些数中被二整除N3"},
		{"2. Calculate the number of numbers that can be divided by three N4=the number of these numbers N2/the number of numbers that can be divided by three N5",
		"2.计算能被三整除的数量N4 能被三整除的数量N4=这些数的个数N2/在这些数中被三整除N5"},
		{"3. Calculate the number of repetitions that can be divided by three or two N6=the number of repetitions that can be divided by three or two N1+the number of repetitions that can be divided by three N4",
		"3.计算能被三或二整除的有重复的数量N6 能被三或二整除的有重复的数量N6=能被二整除的数量N1+能被三整除的数量N4"},
		{"4. Find the least common multiple of 2 and 3",
		"4.求2和3的最小公倍数"},
		{"5. Calculate the number of numbers that can be divided by three and two N8=the number of these numbers N2/the least common multiple N7",
		"5.计算能被三和二整除的数量N8 能被三和二整除的数量N8=这些数的个数N2/最小公倍数N7"},
		{"6. Calculate the number N10 that can be divided by three or two, which is equal to the number N6 that can be divided by three or two, and the number N8 that can be divided by three or two",
		"6.计算能被三或二整除的数量N10 能被三或二整除的数量N10=能被三或二整除的有重复的数量N6-能被三和二整除的数量N8"},
		//变量表
		{"ThenumberofthesenumbersN2","这些数的个数N2"},
		{"DividedbytwoamongthesenumbersN3","在这些数中被二整除N3"},
		{"Dividedbythreeamongthesenumbers,N5","在这些数中被三整除N5"},
		{"ThequantityN1thatcanbedividedbytwo","能被二整除的数量N1"},
		{"ThequantitythatcanbedividedbythreeN4","能被三整除的数量N4"},
		{"ThequantitythatcanbedividedbythreeortwoN10","能被三或二整除的数量N10"},
		{"TherearerepeatedquantitiesN6thatcanbedividedbythreeortwo","能被三或二整除的有重复的数量N6"},
		{"MinimumcommonmultipleN7","最小公倍数N7"},
		{"ThequantitythatcanbedividedbythreeandtwoN8","能被三和二整除的数量N8"},

	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(这些数的个数N2, 100);
	DefineLangVarInt(在这些数中被三整除N5, 3);
	DefineLangVarInt(在这些数中被二整除N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P45例一第四小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("(4)题目：能被2或3整除的有几个？"));
	DefineLangVarInt(能被二整除的数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算能被二整除的数量N1 能被二整除的数量N1=这些数的个数N2/在这些数中被二整除N3"));
	能被二整除的数量N1 = 这些数的个数N2 / 在这些数中被二整除N3;
	能被二整除的数量N1.PrintProcessLog(1);
	DefineLangVarInt(能被三整除的数量N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算能被三整除的数量N4 能被三整除的数量N4=这些数的个数N2/在这些数中被三整除N5"));
	能被三整除的数量N4 = 这些数的个数N2 / 在这些数中被三整除N5;
	能被三整除的数量N4.PrintProcessLog(2);
	DefineLangVarInt(能被三或二整除的有重复的数量N6, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算能被三或二整除的有重复的数量N6 能被三或二整除的有重复的数量N6=能被二整除的数量N1+能被三整除的数量N4"));
	能被三或二整除的有重复的数量N6 = 能被二整除的数量N1 + 能被三整除的数量N4;
	能被三或二整除的有重复的数量N6.PrintProcessLog(3);
	DefineLangVarInt(最小公倍数N7, MinCommonMultiple(在这些数中被三整除N5, 在这些数中被二整除N3));
	ColPrintf(PrintfCol::方法, Lang("4.求2和3的最小公倍数"));
	DefineLangVarInt(能被三和二整除的数量N8, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算能被三和二整除的数量N8 能被三和二整除的数量N8=这些数的个数N2/最小公倍数N7"));
	能被三和二整除的数量N8 = 这些数的个数N2 / 最小公倍数N7;
	能被三和二整除的数量N8.PrintProcessLog(5);
	DefineLangVarInt(能被三或二整除的数量N10, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算能被三或二整除的数量N10 能被三或二整除的数量N10=能被三或二整除的有重复的数量N6-能被三和二整除的数量N8"));
	能被三或二整除的数量N10 = 能被三或二整除的有重复的数量N6 - 能被三和二整除的数量N8;
	能被三或二整除的数量N10.PrintProcessLog(6);
}
void P45_1_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1, Question 5: Content and Rejection","P45例一第五小题 容斥问题"},
		{"(5) Question: How many cannot be divided by 2 and 3?",
		"(5)题目：不能被2和3整除的有几个？"},
		{"1. Calculate the number N1 that can be divided by two. The number N1 that can be divided by two is equal to the number N2 of these numbers divided by N3 among them",
		"1.计算能被二整除的数量N1 能被二整除的数量N1=这些数的个数N2/在这些数中被二整除N3"},
		{"2. Calculate the number of numbers that can be divided by three N4=the number of these numbers N2/the number of numbers that can be divided by three N5",
		"2.计算能被三整除的数量N4 能被三整除的数量N4=这些数的个数N2/在这些数中被三整除N5"},
		{"3. Calculate the number of repetitions that can be divided by three or two N6=the number of repetitions that can be divided by three or two N1+the number of repetitions that can be divided by three N4",
		"3.计算能被三或二整除的有重复的数量N6 能被三或二整除的有重复的数量N6=能被二整除的数量N1+能被三整除的数量N4"},
		{"4. Find the least common multiple of 2 and 3",
		"4.求2和3的最小公倍数"},
		{"5. Calculate the number of numbers that can be divided by three and two N8=the number of these numbers N2/the least common multiple N7",
		"5.计算能被三和二整除的数量N8 能被三和二整除的数量N8=这些数的个数N2/最小公倍数N7"},
		{"6. Calculate the number N10 that can be divided by three or two, which is equal to the number N6 that can be divided by three or two, and the number N8 that can be divided by three or two",
		"6.计算能被三或二整除的数量N10 能被三或二整除的数量N10=能被三或二整除的有重复的数量N6-能被三和二整除的数量N8"},
		{"7. Calculate the number N11 that cannot be divisible. The number N11 that cannot be divisible=the number of these numbers N2- the number N10 that can be divided by three or two",
		"7.计算不能整除的数N11 不能整除的数N11=这些数的个数N2-能被三或二整除的数量N10"},
		//变量表
		{"ThenumberofthesenumbersN2","这些数的个数N2"},
		{"DividedbytwoamongthesenumbersN3","在这些数中被二整除N3"},
		{"Dividedbythreeamongthesenumbers,N5","在这些数中被三整除N5"},
		{"ThequantityN1thatcanbedividedbytwo","能被二整除的数量N1"},
		{"ThequantitythatcanbedividedbythreeN4","能被三整除的数量N4"},
		{"ThequantitythatcanbedividedbythreeortwoN10","能被三或二整除的数量N10"},
		{"TherearerepeatedquantitiesN6thatcanbedividedbythreeortwo","能被三或二整除的有重复的数量N6"},
		{"MinimumcommonmultipleN7","最小公倍数N7"},
		{"ThequantitythatcanbedividedbythreeandtwoN8","能被三和二整除的数量N8"},
		{"NumberN11thatcannotbedivisible","不能整除的数N11"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(这些数的个数N2, 100);
	DefineLangVarInt(在这些数中被三整除N5, 3);
	DefineLangVarInt(在这些数中被二整除N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P45例一第五小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("(5)题目：不能被2和3整除的有几个？"));
	DefineLangVarInt(能被二整除的数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算能被二整除的数量N1 能被二整除的数量N1=这些数的个数N2/在这些数中被二整除N3"));
	能被二整除的数量N1 = 这些数的个数N2 / 在这些数中被二整除N3;
	能被二整除的数量N1.PrintProcessLog(1);
	DefineLangVarInt(能被三整除的数量N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算能被三整除的数量N4 能被三整除的数量N4=这些数的个数N2/在这些数中被三整除N5"));
	能被三整除的数量N4 = 这些数的个数N2 / 在这些数中被三整除N5;
	能被三整除的数量N4.PrintProcessLog(2);
	DefineLangVarInt(能被三或二整除的有重复的数量N6, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算能被三或二整除的有重复的数量N6 能被三或二整除的有重复的数量N6=能被二整除的数量N1+能被三整除的数量N4"));
	能被三或二整除的有重复的数量N6 = 能被二整除的数量N1 + 能被三整除的数量N4;
	能被三或二整除的有重复的数量N6.PrintProcessLog(3);
	DefineLangVarInt(最小公倍数N7, MinCommonMultiple(在这些数中被三整除N5, 在这些数中被二整除N3));
	ColPrintf(PrintfCol::方法, Lang("4.求2和3的最小公倍数"));
	DefineLangVarInt(能被三和二整除的数量N8, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算能被三和二整除的数量N8 能被三和二整除的数量N8=这些数的个数N2/最小公倍数N7"));
	能被三和二整除的数量N8 = 这些数的个数N2 / 最小公倍数N7;
	能被三和二整除的数量N8.PrintProcessLog(5);
	DefineLangVarInt(能被三或二整除的数量N10, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算能被三或二整除的数量N10 能被三或二整除的数量N10=能被三或二整除的有重复的数量N6-能被三和二整除的数量N8"));
	能被三或二整除的数量N10 = 能被三或二整除的有重复的数量N6 - 能被三和二整除的数量N8;
	能被三或二整除的数量N10.PrintProcessLog(6);
	DefineLangVarInt(不能整除的数N11, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算不能整除的数N11 不能整除的数N11=这些数的个数N2-能被三或二整除的数量N10"));
	不能整除的数N11 = 这些数的个数N2 - 能被三或二整除的数量N10;
	不能整除的数N11.PrintProcessLog(7);
}
void P45_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 2: Exclusion Problem","P45例二 容斥问题"},
		{"Title: Arrange 100 lights numbered 1-100 in a row, turn on the lights numbered 3 multiples once, turn on the lights numbered 5 multiples once, and how many lights are on",
		"题目：写有1-100编号的100盏灯排成一排，把编号为3的倍数的灯开一次，把编号为5的倍数的灯开一次，亮的灯有多少盏"},
		{"1. Calculate the number of lights N1 that can be divided by three. The number of lights N1 that can be divided by three is equal to the number of these lights N2 divided by the number of lights N3 divided by three",
		"1.计算能被三整除的编号灯编号N1 能被三整除的编号灯编号N1=这些灯的个数N2/在这些灯编号中被三整除N3"},
		{"2. Calculate the number of lights that can be divided by five, N4. The number of lights that can be divided by five, N4=the number of these lights, N2/the number of lights that can be divided by five, N5",
		"2.计算能被五整除的编号灯编号N4 能被五整除的编号灯编号N4=这些灯的个数N2/在这些灯编号中被五整除N5"},
		{"3. Calculate the number of repeated lights that can be divided by three or five, N6. The number of repeated lights that can be divided by three or five, N6=the number of lights that can be divided by three, N1+the number of lights that can be divided by five, N4",
		"3.计算灯编号能被三或五整除的有重复的数量N6 灯编号能被三或五整除的有重复的数量N6=能被三整除的编号灯编号N1+能被五整除的编号灯编号N4"},
		{"4. Find the least common multiple of 3 and 5",
		"4.求3和5的最小公倍数"},
		{"5. Calculate the number of lights that can be divided by three and five, N8. The number of lights that can be divided by three and five, N8, is equal to the number of these lights, N2, divided by the least common multiple, N7",
		"5.计算能被三和五整除的灯编号N8 能被三和五整除的灯编号N8=这些灯的个数N2/最小公倍数N7"},
		{"6. Calculate the number of lights that can be divided by three or five, N10. The number of lights that can be divided by three or five, N10=the number of repeated lights that can be divided by three or\nfive, N6- the number of lights that can be divided by three or five, N8",
		"6.计算能被三或五整除的灯编号N10 能被三或五整除的灯编号N10=灯编号能被三或五整除的有重复的数量N6-能被三和五整除的灯编号N8"},
		//变量表
		{"ThenumberoftheselightsN2","这些灯的个数N2"},
		{"DividedbythreeN3intheselampnumbers","在这些灯编号中被三整除N3"},
		{"Dividedbyfiveintheselampnumbers,N5","在这些灯编号中被五整除N5"},
		{"MinimumcommonmultipleN7","最小公倍数N7"},
		{"NumberlightN1thatcanbedividedbythree","能被三整除的编号灯编号N1"},
		{"NumberlightN4dividedbyfive","被五整除的编号灯编号N4"},
		{"LampnumbersthatcanbedividedbythreeorfivehaveduplicatequantitiesN6","灯编号能被三或五整除的有重复的数量N6"},
		{"LampnumberN8thatcanbedividedbythreeandfive","能被三和五整除的灯编号N8"},
		{"LampnumberN10thatcanbedividedbythreeorfive","能被三或五整除的灯编号N10"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(这些灯的个数N2, 100);
	DefineLangVarInt(在这些灯编号中被三整除N3, 3);
	DefineLangVarInt(在这些灯编号中被五整除N5, 5);
	ColPrintf(PrintfCol::标题, Lang("P45例二 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：写有1-100编号的100盏灯排成一排，把编号为3的倍数的灯开一次，把编号为5的倍数的灯开一次，亮的灯有多少盏"));
	DefineLangVarInt(能被三整除的编号灯编号N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算能被三整除的编号灯编号N1 能被三整除的编号灯编号N1=这些灯的个数N2/在这些灯编号中被三整除N3"));
	能被三整除的编号灯编号N1 = 这些灯的个数N2 / 在这些灯编号中被三整除N3;
	能被三整除的编号灯编号N1.PrintProcessLog(1);
	DefineLangVarInt(能被五整除的编号灯编号N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算能被五整除的编号灯编号N4 能被五整除的编号灯编号N4=这些灯的个数N2/在这些灯编号中被五整除N5"));
	能被五整除的编号灯编号N4 = 这些灯的个数N2 / 在这些灯编号中被五整除N5;
	能被五整除的编号灯编号N4.PrintProcessLog(2);
	DefineLangVarInt(灯编号能被三或五整除的有重复的数量N6, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算灯编号能被三或五整除的有重复的数量N6 灯编号能被三或五整除的有重复的数量N6=能被三整除的编号灯编号N1+能被五整除的编号灯编号N4"));
	灯编号能被三或五整除的有重复的数量N6 = 能被三整除的编号灯编号N1 + 能被五整除的编号灯编号N4;
	灯编号能被三或五整除的有重复的数量N6.PrintProcessLog(3);
	DefineLangVarInt(最小公倍数N7, MinCommonMultiple(在这些灯编号中被三整除N3, 在这些灯编号中被五整除N5));
	ColPrintf(PrintfCol::方法, Lang("4.求3和5的最小公倍数"));
	DefineLangVarInt(能被三和五整除的灯编号N8, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算能被三和五整除的灯编号N8 能被三和五整除的灯编号N8=这些灯的个数N2/最小公倍数N7"));
	能被三和五整除的灯编号N8 = 这些灯的个数N2 / 最小公倍数N7;
	能被三和五整除的灯编号N8.PrintProcessLog(5);
	DefineLangVarInt(能被三或五整除的灯编号N10, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算能被三或五整除的灯编号N10 能被三或五整除的灯编号N10=灯编号能被三或五整除的有重复的数量N6-能被三和五整除的灯编号N8"));
	能被三或五整除的灯编号N10 = 灯编号能被三或五整除的有重复的数量N6 - 能被三和五整除的灯编号N8;
	能被三或五整除的灯编号N10.PrintProcessLog(5);
}
void P45_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 cases of three tolerance rejection problem","P45例三 容斥问题"},
		{"Title: A 101cm long wooden stick, starting from the same end, draw a scale every 4cm for the first time and every 6cm for the second time. If the stick is divided into sections according to the scale, how many sections can be cut?",
		"题目：一根长101cm的木棍，从同一端开始，第一次每隔4cm画一个刻度，第二次每隔6cm画一个刻度，如果按刻度把木棍分割段，可以截多少段?"},
		{"1. Calculate the truncation number N1 every four centimeters, which is equal to the total number of centimeters N2 divided by the truncation number N3 every four centimeters",
		"1.计算每隔四厘米截断数N1 每隔四厘米截断数N1=总共的厘米数N2/每隔四厘米N3"},
		{"2. Calculate the truncation number N4 every six centimeters, which is equal to the total number of centimeters N2 divided by the truncation number N5 every six centimeters",
		"2.计算每隔六厘米截断数N4 每隔六厘米截断数N4=总共的厘米数N2/每隔六厘米N5"},
		{"3. Calculate the least common multiple of 4 and 6",
		"3.计算4和6的最小公倍数"},
		{"4. Calculate the repeated truncation number N7, which is equal to the total number of centimeters N2 divided by the least common multiple N6",
		"4.计算重复的截断数N7 重复的截断数N7=总共的厘米数N2/最小公倍数N6"},
		{"5. Calculate the total number of segments N8. The total number of segments N8 is equal to the number of segments N1 every four centimeters plus the number of segments N4 every six centimeters minus the number of repeated segments N7",
		"5.计算总共可截段数N8 总共可截段数N8=每隔四厘米截断数N1+每隔六厘米截断数N4-重复的截断数N7"},
		//变量表
		{"TotalcentimetersN2","总共的厘米数N2"},
		{"EveryfourcentimetersN3","每隔四厘米N3"},
		{"N5everysixcentimeters","每隔六厘米N5"},
		{"MinimumcommonmultipleN6","最小公倍数N6"},
		{"CutoffN1everyfourcentimeters","每隔四厘米截断数N1"},
		{"CutoffN4everysixcentimeters","每隔六厘米截断数N4"},
		{"RepetitivetruncationnumberN7","重复的截断数N7"},
		{"TotalnumberofsegmentsN8","总共可截段数N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共的厘米数N2, 101);
	DefineLangVarInt(每隔四厘米N3, 4);
	DefineLangVarInt(每隔六厘米N5, 6);
	ColPrintf(PrintfCol::标题, Lang("P45例三 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一根长101cm的木棍，从同一端开始，第一次每隔4cm画一个刻度，第二次每隔6cm画一个刻度，如果按刻度把木棍分割段，可以截多少段?"));
	DefineLangVarInt(每隔四厘米截断数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算每隔四厘米截断数N1 每隔四厘米截断数N1=总共的厘米数N2/每隔四厘米N3"));
	每隔四厘米截断数N1 = 总共的厘米数N2 / 每隔四厘米N3;
	每隔四厘米截断数N1.PrintProcessLog(1);
	DefineLangVarInt(每隔六厘米截断数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每隔六厘米截断数N4 每隔六厘米截断数N4=总共的厘米数N2/每隔六厘米N5"));
	每隔六厘米截断数N4 = 总共的厘米数N2 / 每隔六厘米N5;
	每隔六厘米截断数N4.PrintProcessLog(2);
	DefineLangVarInt(最小公倍数N6, MinCommonMultiple(每隔四厘米N3, 每隔六厘米N5));
	ColPrintf(PrintfCol::方法, Lang("3.计算4和6的最小公倍数"));
	DefineLangVarInt(重复的截断数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算重复的截断数N7 重复的截断数N7=总共的厘米数N2/最小公倍数N6"));
	重复的截断数N7 = 总共的厘米数N2 / 最小公倍数N6;
	重复的截断数N7.PrintProcessLog(4);
	DefineLangVarInt(总共可截段数N8, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算总共可截段数N8 总共可截段数N8=每隔四厘米截断数N1+每隔六厘米截断数N4-重复的截断数N7"));
	总共可截段数N8 = 每隔四厘米截断数N1 + 每隔六厘米截断数N4 - 重复的截断数N7;
	总共可截段数N8.PrintProcessLog(5);
}
void P45()
{
	P45_1_1();
	ColPrintf(PrintfCol::方法, "");
	P45_1_2();
	ColPrintf(PrintfCol::方法, "");
	P45_1_3();
	ColPrintf(PrintfCol::方法, "");
	P45_1_4();
	ColPrintf(PrintfCol::方法, "");
	P45_1_5();
	ColPrintf(PrintfCol::方法, "");
	P45_2();
	ColPrintf(PrintfCol::方法, "");
	P45_3();
	ColPrintf(PrintfCol::方法, "");
}
void P45_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P45();
	Lang.SetCurLanguage(LanguageLib::English);
	P45();
	ColPrintf(PrintfCol::方法, "");

}