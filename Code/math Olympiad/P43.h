#pragma once
void P43_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 1 permutation combination","P43例一 排列组合"},
		{"Question: How many combinations are there for three stations in a row selected by five students ABCDE?",
		"题目：五名同学ABCDE从中选三个站一排有多少种组合?"},
		{"Analysis: Since there are five ways to choose the first student among the five students, only four can be chosen because the first student has already chosen one, and so on",
		"分析：既然从五名同学里那第一个同学选法就有5种，因为第一个已经选了一个所以只有四个可以选，以此类推，最后根据乘法原理相乘"},
		{"1. Calculate the first possible number N1=the total number of classmates N2",
		"1.计算第一个位可能数N1 第一个位可能数N1=一共的同学数N2"},
		{"2. Calculate the second possible number N3. The second possible number N3=the first possible number N1- the number of candidates selected each time N4",
		"2.计算第二个位可能数N3 第二个位可能数N3=第一个位可能数N1-每次选人数N4"},
		{"3. Calculate the third possible number N5. The third possible number N5=the second possible number N3- the number of people selected each time N4",
		"3.计算第三个位可能数N5 第三个位可能数N5=第二个位可能数N3-每次选人数N4"},
		{"4. Calculate the total number of possible candidates N6=the first possible candidate N1 * the second possible candidate N3 * the third possible candidate N5",
		"4.计算总共可选人N6 总共可选人N6=第一个位可能数N1*第二个位可能数N3*第三个位可能数N5"},
		//变量表
		{"TotalnumberofclassmatesN2","一共的同学数N2"},
		{"NumberofcandidatesselectedeachtimeN4","每次选人数N4"},
		{"ThefirstpossiblenumberisN1","第一个位可能数N1"},
		{"ThesecondpossiblenumberisN3","第二个位可能数N3"},
		{"ThethirdpossiblenumberisN5","第三个位可能数N5"},
		{"AtotalofN6canbeselected","总共可选人N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一共的同学数N2, 5);
	DefineLangVarInt(每次选人数N4, 1);
	ColPrintf(PrintfCol::标题, Lang("P43例一 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目：五名同学ABCDE从中选三个站一排有多少种组合?"));
	ColPrintf(PrintfCol::标题, Lang("分析：既然从五名同学里那第一个同学选法就有5种，因为第一个已经选了一个所以只有四个可以选，以此类推，最后根据乘法原理相乘"));
	DefineLangVarInt(第一个位可能数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算第一个位可能数N1 第一个位可能数N1=一共的同学数N2"));
	第一个位可能数N1 = 一共的同学数N2;
	第一个位可能数N1.PrintProcessLog(1);
	DefineLangVarInt(第二个位可能数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第二个位可能数N3 第二个位可能数N3=第一个位可能数N1-每次选人数N4"));
	第二个位可能数N3 = 第一个位可能数N1 - 每次选人数N4;
	第二个位可能数N3.PrintProcessLog(2);
	DefineLangVarInt(第三个位可能数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算第三个位可能数N5 第三个位可能数N5=第二个位可能数N3-每次选人数N4"));
	第三个位可能数N5 = 第二个位可能数N3 - 每次选人数N4;
	第三个位可能数N5.PrintProcessLog(3);
	DefineLangVarInt(总共可选人N6, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算总共可选人N6 总共可选人N6=第一个位可能数N1*第二个位可能数N3*第三个位可能数N5"));
	总共可选人N6 = 第一个位可能数N1 * 第二个位可能数N3 * 第三个位可能数N5;
	总共可选人N6.PrintProcessLog(4);
}
void P43_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 2 permutation combination","P43例二 排列组合"},
		{"Question: How many combinations are there for three stations in a row selected by five students ABCDE?",
		"题目：五名同学ABCDE从中选五个站一排有多少种组合?"},
		{"Analysis: Since there are five ways to choose the first student among the five students, only four can be chosen because the first student has already chosen one, and so on",
		"分析：既然从五名同学里那第一个同学选法就有5种，因为第一个已经选了一个所以只有四个可以选，以此类推，最后根据乘法原理相乘，另外从5个人中选出3个人可以写成A_5^3"},
		{"1. Calculate the first possible number N1=the total number of classmates N2",
		"1.计算第一个位可能数N1 第一个位可能数N1=一共的同学数N2"},
		{"2. Calculate the second possible number N3. The second possible number N3=the first possible number N1- the number of candidates selected each time N4",
		"2.计算第二个位可能数N3 第二个位可能数N3=第一个位可能数N1-每次选人数N4"},
		{"3. Calculate the third possible number N5. The third possible number N5=the second possible number N3- the number of people selected each time N4",
		"3.计算第三个位可能数N5 第三个位可能数N5=第二个位可能数N3-每次选人数N4"},
		
		{"6. Calculate the total number of candidates N6 and N6=the first possible number N1 * the second possible number N3 * the third possible number N5 ",
		"6.计算总共可选人N6 总共可选人N6=第一个位可能数N1*第二个位可能数N3*第三个位可能数N5"},
		//变量表
		{"TotalnumberofclassmatesN2","一共的同学数N2"},
		{"NumberofcandidatesselectedeachtimeN4","每次选人数N4"},
		{"ThefirstpossiblenumberisN1","第一个位可能数N1"},
		{"ThesecondpossiblenumberisN3","第二个位可能数N3"},
		{"ThethirdpossiblenumberisN5","第三个位可能数N5"},
		{"ThefourthpossiblenumberisN6","第四个位可能数N6"},
		{"ThefifthpossiblenumberisN7","第五个位可能数N7"},
		{"AtotalofN6canbeselected","总共可选人N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一共的同学数N2, 5);
	DefineLangVarInt(每次选人数N4, 1);
	ColPrintf(PrintfCol::标题, Lang("P43例一 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目：五名同学ABCDE从中选三个站一排有多少种组合?"));
	ColPrintf(PrintfCol::标题, Lang("分析：既然从五名同学里那第一个同学选法就有5种，因为第一个已经选了一个所以只有四个可以选，以此类推，最后根据乘法原理相乘"));
	DefineLangVarInt(第一个位可能数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算第一个位可能数N1 第一个位可能数N1=一共的同学数N2"));
	第一个位可能数N1 = 一共的同学数N2;
	第一个位可能数N1.PrintProcessLog(1);
	DefineLangVarInt(第二个位可能数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第二个位可能数N3 第二个位可能数N3=第一个位可能数N1-每次选人数N4"));
	第二个位可能数N3 = 第一个位可能数N1 - 每次选人数N4;
	第二个位可能数N3.PrintProcessLog(2);
	DefineLangVarInt(第三个位可能数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算第三个位可能数N5 第三个位可能数N5=第二个位可能数N3-每次选人数N4"));
	第三个位可能数N5 = 第二个位可能数N3 - 每次选人数N4;
	第三个位可能数N5.PrintProcessLog(3);
	
	DefineLangVarInt(总共可选人N6, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算总共可选人N6 总共可选人N6=第一个位可能数N1*第二个位可能数N3"));
	总共可选人N6 = 第一个位可能数N1 * 第二个位可能数N3 * 第三个位可能数N5 ;
	总共可选人N6.PrintProcessLog(6);
}
void P43_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example Four Arrangement Combination","P43例四 排列组合"},
		{"Title: How many methods are there to choose 3 out of 10 students to clean up",
		"题目:从10名同学中选出3个来打扫卫生，一共有几种选法"},
		{"Analysis: We can calculate the total number of options like the previous question, but the arrangement of the three people in the middle is also included. We only need one option, so we have to divide it by A3 ^ 3",
		"分析：我们可以像上道题一样把总共的选法计算出来，但中间的三个人的排列也在内，我们只要一种，所以我们得除以A_3^3"},
		{"1. Calculate the total number of permutations N1=total number of people N2 * (total\nnumber of people N2- number of people selected each time N4) * (total number of people N2- number of people selected each time N4- number of\npeople selected each time N4)",
		"1.计算总共的排列种数N1 总共的排列种数N1=一共的人数N2*(一共的人数N2-每次选人数N4)*(一共的人数N2-每次选人数N4-每次选人数N4)"},
		{"2. Calculate the number of three person arrangements N3. The number of three person arrangements N3=the number of people selected N5 * (the number of people selected N5- the\nnumber of people selected each time N4) * (the number of people selected N5- the number of people selected each time N4- the number of people selected each time\nN4)",
		"2.计算三人排列种数N3 三人排列种数N3=选的人数N5*(选的人数N5-每次选人数N4)*(选的人数N5-每次选人数N4-每次选人数N4)"},
		{"3. Calculate the total number of choices N6=the total number of permutations N1/the number of permutations N3 for three people",
		"3.计算一共的选法N6 一共的选法N6=总共的排列种数N1/三人排列种数N3"},
		//变量表
		{"TotalnumberofpeopleN2","一共的人数N2"},
		{"NumberofcandidatesselectedeachtimeN4","每次选人数N4"},
		{"NumberofpeopleselectedN5","选的人数N5"},
		{"ThetotalnumberofpermutationsN1","总共的排列种数N1"},
		{"Threepersonarrangement,numberN3","三人排列种数N3"},
		{"ThetotalselectionmethodN6","一共的选法N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一共的人数N2, 10);
	DefineLangVarInt(每次选人数N4, 1);
	DefineLangVarInt(选的人数N5, 3);

	ColPrintf(PrintfCol::标题, Lang("P43例四 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目:从10名同学中选出3个来打扫卫生，一共有几种选法"));
	ColPrintf(PrintfCol::标题, Lang("分析：我们可以像上道题一样把总共的选法计算出来，但中间的三个人的排列也在内，我们只要一种，所以我们得除以A_3^3"));
	DefineLangVarInt(总共的排列种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算总共的排列种数N1 总共的排列种数N1=一共的人数N2*(一共的人数N2-每次选人数N4)*(一共的人数N2-每次选人数N4-每次选人数N4)"));
	总共的排列种数N1 = 一共的人数N2 * (一共的人数N2 - 每次选人数N4) * (一共的人数N2 - 每次选人数N4 - 每次选人数N4);
	总共的排列种数N1.PrintProcessLog(1);
	DefineLangVarInt(三人排列种数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算三人排列种数N3 三人排列种数N3=选的人数N5*(选的人数N5-每次选人数N4)*(选的人数N5-每次选人数N4-每次选人数N4)"));
	三人排列种数N3 = 选的人数N5 * (选的人数N5 - 每次选人数N4) * (选的人数N5 - 每次选人数N4 - 每次选人数N4);
	三人排列种数N3.PrintProcessLog(2);
	DefineLangVarInt(一共的选法N6, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共的选法N6 一共的选法N6=总共的排列种数N1/三人排列种数N3"));
	一共的选法N6 = 总共的排列种数N1 / 三人排列种数N3;
	一共的选法N6.PrintProcessLog(3);
}
void P43_4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 4 First question arrangement and combination","P43例四第一小题 排列组合"},
		{"Question: How many matches do 6 teams need to play in a single round robin match, with each team playing one match?",
		"题目：6支队伍进行单循环赛，每两队就要比赛一场，则共需要比赛多少场比赛?"},
		{"1. Calculate the number of repeated team matches N1=total number of teams N1 * (total number of teams N1- number of teams selected each time N4)",
		"1.计算有重复队伍比赛场数N1 有重复队伍比赛场数N1=总共的队伍数N1*(总共的队伍数N1-每次选队伍数N4)"},
		{"2. Calculate duplicate teams N2 duplicate teams N2=two teams participate once N3 * (two teams participate once N3- the number of teams selected each time N4)",
		"2.计算重复的队伍N2 重复的队伍N2=两队参加一次N3*(两队参加一次N3-每次选队伍数N4)"},
		{"3. Calculate the number of matches without duplicate teams N3=the number of matches with duplicate teams N1/the number of matches with duplicate teams N2",
		"3.计算没有重复队伍比赛场数N3 没有重复队伍比赛场数N3=有重复队伍比赛场数N1/重复的队伍N2"},
		//变量表
		{"ThetotalnumberofteamsN1","总共的队伍数N1"},
		{"NumberofteamsselectedeachtimeN4","每次选队伍数N4"},
		{"TwoteamsparticipateinN3once","两队参加一次N3"},
		{"NumberofrepeatedteammatchesN1","有重复队伍比赛场数N1"},
		{"RepeatedTeamN2","重复的队伍N2"},
		{"NorepeatedteammatchesN3","没有重复队伍比赛场数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共的队伍数N1, 6);
	DefineLangVarInt(每次选队伍数N4, 1);
	DefineLangVarInt(两队参加一次N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P43例四第一小题 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目：6支队伍进行单循环赛，每两队就要比赛一场，则共需要比赛多少场比赛?"));
	DefineLangVarInt(有重复队伍比赛场数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算有重复队伍比赛场数N1 有重复队伍比赛场数N1=总共的队伍数N1*(总共的队伍数N1-每次选队伍数N4)"));
	有重复队伍比赛场数N1 = 总共的队伍数N1 * (总共的队伍数N1 - 每次选队伍数N4);
	有重复队伍比赛场数N1.PrintProcessLog(1);
	DefineLangVarInt(重复的队伍N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算重复的队伍N2 重复的队伍N2=两队参加一次N3*(两队参加一次N3-每次选队伍数N4)"));
	重复的队伍N2 = 两队参加一次N3 * (两队参加一次N3 - 每次选队伍数N4);
	重复的队伍N2.PrintProcessLog(2);
	DefineLangVarInt(没有重复队伍比赛场数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算没有重复队伍比赛场数N3 没有重复队伍比赛场数N3=有重复队伍比赛场数N1/重复的队伍N2"));
	没有重复队伍比赛场数N3 = 有重复队伍比赛场数N1 / 重复的队伍N2;
	没有重复队伍比赛场数N3.PrintProcessLog(3);
}
void P43_4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 4 Second question arrangement and combination","P43例四第二小题 排列组合"},
		{"Question: As shown in the figure, how many triangles can be formed with five points on the circumference as vertices?",
		"题目：以圆周的五个点为顶点能构成多少个三角形?"},
		{"1. Calculate the number of vertices with repeating energy N1=total number of vertices N2 * (total number of vertices N2- number of vertices selected each time N3) * (total number of vertices N2- number of vertices selected each time\nN3- number of vertices selected each time N3)",
		"1.计算有重复能构成的顶点数N1 有重复能构成的顶点数N1=总共顶点数N2*(总共顶点数N2-每次选的顶点数N3)*(总共顶点数N2-每次选的顶点数N3-每次选的顶点数N3)"},
		{"2. Calculate the number of repeated vertices N4. The number of repeated vertices N4 is equal to the number of triangle vertices N5 * (the number of triangle vertices N5- the number of vertices selected each time N3) * (the number of\ntriangle vertices N5- the number of vertices selected each time N3- the number of vertices selected each time N3)",
		"2.计算重复顶点数N4 重复顶点数N4=三角形顶点数N5*(三角形顶点数N5-每次选的顶点数N3)*(三角形顶点数N5-每次选的顶点数N3-每次选的顶点数N3)"},
		{"3. Calculate the number of vertices without duplicates N5=the number of vertices with duplicates N1/the number of vertices with duplicates N4",
		"3.计算没有重复构成的顶点数N5 没有重复构成的顶点数N5=有重复能构成的顶点数N1/重复顶点数N4"},
		//变量表
		{"TotalnumberofverticesN2","总共顶点数N2"},
		{"ThenumberofverticesselectedeachtimeN3","每次选的顶点数N3"},
		{"NumberofverticesoftriangleN5","三角形顶点数N5"},
		{"ThenumberofverticesN1thatcanbeformedbyrepetition","有重复能构成的顶点数N1"},
		{"NumberofrepeatedverticesN4","重复顶点数N4"},
		{"NumberofverticeswithoutrepeatedcompositionN5","没有重复构成的顶点数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共顶点数N2, 5);
	DefineLangVarInt(每次选的顶点数N3, 1);
	DefineLangVarInt(三角形顶点数N5, 3);
	ColPrintf(PrintfCol::标题, Lang("P43例四第一小题 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目：6支队伍进行单循环赛，每两队就要比赛一场，则共需要比赛多少场比赛?"));
	DefineLangVarInt(有重复能构成的顶点数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算有重复能构成的顶点数N1 有重复能构成的顶点数N1=总共顶点数N2*(总共顶点数N2-每次选的顶点数N3)*(总共顶点数N2-每次选的顶点数N3-每次选的顶点数N3)"));
	有重复能构成的顶点数N1 = 总共顶点数N2 * (总共顶点数N2 - 每次选的顶点数N3) * (总共顶点数N2 - 每次选的顶点数N3 - 每次选的顶点数N3);
	有重复能构成的顶点数N1.PrintProcessLog(1);
	DefineLangVarInt(重复顶点数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算重复顶点数N4 重复顶点数N4=三角形顶点数N5*(三角形顶点数N5-每次选的顶点数N3)*(三角形顶点数N5-每次选的顶点数N3-每次选的顶点数N3)"));
	重复顶点数N4 = 三角形顶点数N5 * (三角形顶点数N5 - 每次选的顶点数N3) * (三角形顶点数N5 - 每次选的顶点数N3 - 每次选的顶点数N3);
	重复顶点数N4.PrintProcessLog(2);
	DefineLangVarInt(没有重复构成的顶点数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算没有重复构成的顶点数N5 没有重复构成的顶点数N5=有重复能构成的顶点数N1/重复顶点数N4"));
	没有重复构成的顶点数N5 = 有重复能构成的顶点数N1 / 重复顶点数N4;
	没有重复构成的顶点数N5.PrintProcessLog(3);
}
void P43_5_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 5 First question arrangement and combination","P43例五第一小题 排列组合"},
		{"Title: Select five people from ten to sing together. Two people can stand in the first row, and three people can stand in the second row. How many different standing styles are there in total?",
		"题目：从十个人中选出五个人合唱，第一排可站2个人，第二排可站3人，一共有多少种不同的站法？"},
		{"1. Calculate the total number of station methods N1=total number of people N1 * (total number of people N1- number of people selected each time) * (total number of people N1- number of people selected each time - number of people\nselected each time) (total number of people N1- number of people selected each time - number of people selected each time - number of people selected each time) (total number of people N1- number of people selected each time -\nnumber of people selected each time - number of people selected each time - number of people selected each time)",
		"1.计算一共的站法数N1 一共的站法数N1=总共的人数N1*(总共的人数N1-每次选的人数N2)*(总共的人数N1-每次选的人数-每次选的人数)(总共的人数N1-每次选的人数-每次选的人数-每次选的人数)(总共的人数N1-每次选的人数-每次选的人数-每次选的人数-每次选的人数)"},
		//变量表
		{"ThetotalnumberofpeopleN1","总共的人数N1"},
		{"ThenumberofpeopleselectedeachtimeN2","每次选的人数N2"},
		{"ThetotalnumberofstationmethodsN1","一共的站法数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共的人数N1, 10);
	DefineLangVarInt(每次选的人数N2, 1);
	ColPrintf(PrintfCol::标题, Lang("P43例五第一小题 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目：从十个人中选出五个人合唱，第一排可站2个人，第二排可站3人，一共有多少种不同的站法？"));
	DefineLangVarInt(一共的站法数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共的站法数N1 一共的站法数N1=总共的人数N1*(总共的人数N1-每次选的人数N2)*(总共的人数N1-每次选的人数N2-每次选的人数N2)*(总共的人数N1-每次选的人数N2-每次选的人数N2-每次选的人数N2)*(总共的人数N1-每次选的人数N2-每次选的人数N2-每次选的人数N2-每次选的人数N2)"));
	一共的站法数N1 = 总共的人数N1 * (总共的人数N1 - 每次选的人数N2) * (总共的人数N1 - 每次选的人数N2 - 每次选的人数N2)*(总共的人数N1 - 每次选的人数N2 - 每次选的人数N2 - 每次选的人数N2)*(总共的人数N1 - 每次选的人数N2 - 每次选的人数N2 - 每次选的人数N2 - 每次选的人数N2);
	一共的站法数N1.PrintProcessLog(1);
}
void P43_5_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 5 Second question arrangement and combination","P43例五第二小题 排列组合"},
		{"Question: How many different methods are there for selecting 2 people from ten to sweep the floor and 3 people to mop the floor?",
		"题目：从十个人中选出2个人扫地，3人拖地，一共有多少种不同的选法？"},
		{"1. Calculate the number of non repeating sweeping types N1. The number of non repeating sweeping types N1=(total number of people N1 * (total number of people N1- number of people selected each time N2))/(number of sweeping people N3 * (number of sweeping people N3- number of people selected each time N2))",
		"1.计算不重复扫地种数N1 不重复扫地种数N1=(一共的人数N1*(一共的人数N1-每次选的人数N2))/(扫地人数N3*(扫地人数N3-每次选的人数N2))"},
		{"2. Calculate the number of non duplicated mopping types N1=(total number of people N1 * (total number of people N1- number of people selected each time N2))/(number of mopping people N3 * (number of mopping people N3- number of\npeople selected each time N2- number of people selected each time N2))",
		"2.计算不重复拖地种数N1 不重复拖地种数N1=(一共的人数N1*(一共的人数N1-每次选的人数N2))/(拖地人数N3*(拖地人数N3-每次选的人数N2-每次选的人数N2))"},
		{"3. Calculate the total number of options N3=number of non repeating sweeping methods N1 * number of non repeating mopping methods N1",
		"3.计算一共的选法N3 一共的选法N3=不重复扫地种数N1*不重复拖地种数N1"},
		//变量表
		{"ThetotalnumberofpeopleisN1","一共的人数N1"},
		{"NumberofpeopleselectedeachtimeN2","每次选的人数N2"},
		{"NumberofsweepersN3","扫地人数N3"},
		{"NumberofmoppingpersonnelN3","拖地人数N3"},
		{"NumberofnonrepetitivesweepingmethodsN1","不重复扫地种数N1"},
		{"NumberofnonrepetitivemoppingmethodsN1","不重复拖地种数N1"},
		{"ThetotalselectionmethodN3","一共的选法N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一共的人数N1, 10);
	DefineLangVarInt(每次选的人数N2, 1);
	DefineLangVarInt(扫地人数N3, 2);
	DefineLangVarInt(拖地人数N3, 3);
	ColPrintf(PrintfCol::标题, Lang("P43例五第二小题 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目：从十个人中选出2个人扫地，3人拖地，一共有多少种不同的选法？"));
	DefineLangVarInt(不重复扫地种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算不重复扫地种数N1 不重复扫地种数N1=(一共的人数N1*(一共的人数N1-每次选的人数N2))/(扫地人数N3*(扫地人数N3-每次选的人数N2))"));
	不重复扫地种数N1 = (一共的人数N1 * (一共的人数N1 - 每次选的人数N2)) / (扫地人数N3 * (扫地人数N3 - 每次选的人数N2 ));
	不重复扫地种数N1.PrintProcessLog(1);
	DefineLangVarInt(不重复拖地种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算不重复拖地种数N1 不重复拖地种数N1=(一共的人数N1*(一共的人数N1-每次选的人数N2))/(拖地人数N3*(拖地人数N3-每次选的人数N2-每次选的人数N2))"));
	不重复拖地种数N1 = (一共的人数N1 * (一共的人数N1 - 每次选的人数N2)) / (拖地人数N3 * (拖地人数N3 - 每次选的人数N2 - 每次选的人数N2));
	不重复拖地种数N1.PrintProcessLog(2);
	DefineLangVarInt(一共的选法N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共的选法N3 一共的选法N3=不重复扫地种数N1*不重复拖地种数N1"));
	一共的选法N3 = 不重复扫地种数N1 * 不重复拖地种数N1;
	一共的选法N3.PrintProcessLog(3);
}
void P43()
{
	P43_1();
	ColPrintf(PrintfCol::方法, "");
	P43_2();
	ColPrintf(PrintfCol::方法, "");
	P43_3();
	ColPrintf(PrintfCol::方法, "");
	P43_4_1();
	ColPrintf(PrintfCol::方法, "");
	P43_4_2();
	ColPrintf(PrintfCol::方法, "");
	P43_5_1();
	ColPrintf(PrintfCol::方法, "");
	P43_5_2();
	ColPrintf(PrintfCol::方法, "");
}
void P43_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P43();
	Lang.SetCurLanguage(LanguageLib::English);
	P43();
	ColPrintf(PrintfCol::方法, "");

}