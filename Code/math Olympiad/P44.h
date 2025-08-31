#pragma once
void P44_1()
{

	LanguageLib::LanguageTableT Language = {
		{"P44 Example 1 permutation combination","P44例一 排列组合"},
		{"Title: Xiaohong and the other 5 classmates take a photo. Xiaohong cannot be on the far left or right. How many arrangements are there?",
		"题目：小红和其余5名同学拍照，小红不能在最左和最右，有几种排列?"},
		{"Analysis: We can first calculate the number of permutations that Xiaohong can have on the left and right of 6 people, and then subtract Xiaohong's positions on both sides",
		"分析：我们可以先算6个人小红可以在左右的排列数，再把小红两边占所用的排列数减去"},
		{"1. Calculate the total number of permutations N1 for six people. The total number of permutations N1 for six people is equal to the total number of people N1 * (total number of people N1-\nnumber of people selected each time N2) * (total number of people N1- number of people selected each time N2- number of people selected each time N2) * (total number of people N1-\nnumber of people selected each time N2- number of people selected each time N2) * (total number of people N1- number of people selected each time\nN2- number of people selected each time N2)",
		"1.计算六个人一共的排列种数N1 六个人一共的排列种数N1=一共的人数N1*(一共的人数N1-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2-每次选人数N2-每次选人数N2)"},
		{"2. Calculate the number of options for Xiaohong on one side N3=Other students N4 * (Other students N4- Number of options selected each time N2) * (Other students N4- Number of options selected each time N2- Number of options selected each time N2) * (Other students N4- Number of options selected each time N2- Number of options selected each time N2)",
		"2.计算小红在一边的种数N3 小红在一边的种数N3=其余同学N4*(其余同学N4-每次选人数N2)*(其余同学N4-每次选人数N2-每次选人数N2)*(其余同学N4-每次选人数N2-每次选人数N2-每次选人数N2)"},
		{"3. Calculate the number of species on both sides of Xiaohong N4=the number of species on one side of Xiaohong N3 * the number of sides where Xiaohong cannot stand N5",
		"3.计算小红在两边的种数N4 小红在两边的种数N4=小红在一边的种数N3*小红不能站的边数N5"},
		{"4. Calculate the total number of permutations N6=the total number of permutations for six people N1- the number of permutations for Xiaohong on both sides N4",
		"4.计算一共排列数N6 一共排列数N6=六个人一共的排列种数N1-小红在两边的种数N4"},
		//变量表
		{"ThetotalnumberofpeopleisN1","一共的人数N1"},
		{"NumberofcandidatesselectedeachtimeN2","每次选人数N2"},
		{"ThenumberofsidesthatXiaohongcannotstandonisN5","小红不能站的边数N5"},
		{"ThetotalnumberofpermutationsN1forsixpeople","六个人一共的排列种数N1"},
		{"ThenumberofspecieswithXiaohongonthesideN3","小红在一边的种数N3"},
		{"Xiaohong'snumberofspeciesonbothsidesN4","小红在两边的种数N4"},
		{"TotalarrangementnumberN6","一共排列数N6"},
		{"OtherstudentsN4","其余同学N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一共的人数N1, 6);
	DefineLangVarInt(每次选人数N2, 1);
	DefineLangVarInt(小红不能站的边数N5, 2);
	DefineLangVarInt(其余同学N4, 5);
	ColPrintf(PrintfCol::标题, Lang("P44例一 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目：小红和其余5名同学拍照，小红不能在最左和最右，有几种排列?"));
	ColPrintf(PrintfCol::标题, Lang("分析：我们可以先算6个人小红可以在左右的排列数，再把小红两边占所用的排列数减去"));
	DefineLangVarInt(六个人一共的排列种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算六个人一共的排列种数N1 六个人一共的排列种数N1=一共的人数N1*(一共的人数N1-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2-每次选人数N2-每次选人数N2)"));
	六个人一共的排列种数N1 = 一共的人数N1 * (一共的人数N1 - 每次选人数N2) * (一共的人数N1 - 每次选人数N2 - 每次选人数N2) * (一共的人数N1 - 每次选人数N2 - 每次选人数N2 - 每次选人数N2) * (一共的人数N1 - 每次选人数N2 - 每次选人数N2 - 每次选人数N2 - 每次选人数N2);
	六个人一共的排列种数N1.PrintProcessLog(1);
	DefineLangVarInt(小红在一边的种数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算小红在一边的种数N3 小红在一边的种数N3=其余同学N4*(其余同学N4-每次选人数N2)*(其余同学N4-每次选人数N2-每次选人数N2)*(其余同学N4-每次选人数N2-每次选人数N2-每次选人数N2)"));
	小红在一边的种数N3 = 其余同学N4 * (其余同学N4 - 每次选人数N2) * (其余同学N4 - 每次选人数N2 - 每次选人数N2) * (其余同学N4 - 每次选人数N2 - 每次选人数N2 - 每次选人数N2);
	小红在一边的种数N3.PrintProcessLog(2);
	DefineLangVarInt(小红在两边的种数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算小红在两边的种数N4 小红在两边的种数N4=小红在一边的种数N3*小红不能站的边数N5"));
	小红在两边的种数N4 = 小红在一边的种数N3 * 小红不能站的边数N5;
	小红在两边的种数N4.PrintProcessLog(3);
	DefineLangVarInt(一共排列数N6, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算一共排列数N6 一共排列数N6=六个人一共的排列种数N1-小红在两边的种数N4"));
	一共排列数N6 = 六个人一共的排列种数N1 - 小红在两边的种数N4;
	一共排列数N6.PrintProcessLog(4);
}
void P44_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P44 Example 2 permutation combination","P44例二 排列组合"},
		{"Title: Weiwei bought 6 types of food, but she cannot bring the fifth and sixth types. She has to choose 4 types as her meals. How many choices do she have?",
		"题目：薇薇买了6种食物，但第五种和第六种不能带，她要选4种作为餐点，她有几种选择？"},
		{"Analysis: Since we need to choose food, we cannot have the same things in different orders, such as items numbered 0, 1,\n2, 3 and 1, 0, 2, 3 being the same. This is equivalent to having only one type, so we need to eliminate duplicates and use this method to subtract\nthe fifth and sixth types",
		"分析：既然要选择食物我们不能相同的事物不同的顺序，比如编号为0，1，2，3和1，0，2，3是一样的，这就相当于只有一种，所以我们得把重复的除掉用这个方法把第五第六种减掉，可以写作：C^m_n=A^m_n/m"},
		{"1. Calculate the total number of species N1, which includes all species N1=(total number of people N1 * (total number of people N1- number of people selected each time N2) * (total number of people N1- number of people selected each time N2- number of people selected each time N2) * (total number of people N1- number of people selected each time N2- number of people selected each time N2)",
		"1.计算包含全部的种数N1 包含全部的种数N1=(一共的人数N1*(一共的人数N1-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2-每次选人数N2))"},
		{"2. Calculate the number of repetitions N2. The number of repetitions N2=the number of choices N1 per time * (the number of choices N1 per time - the number of choices N2 per time) * (the number of choices N1 per time -\nthe number of choices N2 per time) * (the number of choices N1 per time - the number of choices N2 per time - the number of choices N2 per\ntime)",
		"2.计算重复的种数N2 重复的种数N2=每次的选择数N1*(每次的选择数N1-每次选人数N2)*(每次的选择数N1-每次选人数N2-每次选人数N2)*(每次的选择数N1-每次选人数N2-每次选人数N2-每次选人数N2)"},
		{"3. Calculate the number of non duplicated species N4=including all species N1/duplicated species N2",
		"3.计算没有重复种数N4 没有重复种数N4=包含全部的种数N1/重复的种数N2"},
		{"4. If there are no duplicates in the calculation, you cannot select the number of items N5. If there are no duplicates, you cannot select the number of items N5=((total\nquantity N7- non selectable quantity N6) * (total quantity N7- non selectable quantity N6) - number of people selected each time N2)/(non\nselectable quantity N6 * (non selectable quantity N6- number of people selected each time N2)",
		"4.计算没重复不能选择种数N5 没重复不能选择种数N5 = ((总共的数量N7 - 不能选择的数量N6)* ( (总共的数量N7 - 不能选择的数量N6) - 每次选人数N2))/ (不能选择的数量N6 * (不能选择的数量N6 - 每次选人数N2));"},
		{"5. Calculate the total number of choices N7. The total number of choices N7 is equal to the number of non duplicated items N4 minus the number of non duplicated items N5",
		"5.计算一共选择数N7 一共选择数N7=没有重复种数N4-没重复不能选择种数N5"},
		//变量表
		{"ThetotalnumberofpeopleisN1","一共的人数N1"},
		{"NumberofcandidatesselectedeachtimeN2","每次选人数N2"},
		{"NumberofchoiceseachtimeN1","每次的选择数N1"},
		{"ThetotalquantityisN7","总共的数量N7"},
		{"NumberN6thatcannotbeselected","不能选择的数量N6"},
		{"IncludingallspeciesN1","包含全部的种数N1"},
		{"NumberofrepeatedspeciesN2","重复的种数N2"},
		{"NoduplicatenumberN4","没有重复种数N4"},
		{"Noduplicates.CannotselectnumberN5","没重复不能选择种数N5"},
		{"ThetotalnumberofchoicesisN7","一共选择数N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一共的人数N1, 6);
	DefineLangVarInt(每次选人数N2, 1);
	DefineLangVarInt(每次的选择数N1, 4);
	DefineLangVarInt(总共的数量N7, 6);
	DefineLangVarInt(不能选择的数量N6, 2);
	ColPrintf(PrintfCol::标题, Lang("P44例二 排列组合"));
	ColPrintf(PrintfCol::标题, Lang("题目：薇薇买了6种食物，但第五种和第六种不能带，她要选4种作为餐点，她有几种选择？"));
	ColPrintf(PrintfCol::标题, Lang("分析：既然要选择食物我们不能相同的事物不同的顺序，比如编号为0，1，2，3和1，0，2，3是一样的，这就相当于只有一种，所以我们得把重复的除掉用这个方法把第五第六种减掉，可以写作：C^m_n=A^m_n/m"));
	DefineLangVarInt(包含全部的种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算包含全部的种数N1 包含全部的种数N1=(一共的人数N1*(一共的人数N1-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2)*(一共的人数N1-每次选人数N2-每次选人数N2-每次选人数N2))"));
	包含全部的种数N1 = (一共的人数N1 * (一共的人数N1 - 每次选人数N2) * (一共的人数N1 - 每次选人数N2 - 每次选人数N2) * (一共的人数N1 - 每次选人数N2 - 每次选人数N2 - 每次选人数N2));
	包含全部的种数N1.PrintProcessLog(1);
	DefineLangVarInt(重复的种数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算重复的种数N2 重复的种数N2=每次的选择数N1*(每次的选择数N1-每次选人数N2)*(每次的选择数N1-每次选人数N2-每次选人数N2)*(每次的选择数N1-每次选人数N2-每次选人数N2-每次选人数N2)"));
	重复的种数N2 = 每次的选择数N1 * (每次的选择数N1 - 每次选人数N2) * (每次的选择数N1 - 每次选人数N2 - 每次选人数N2) * (每次的选择数N1 - 每次选人数N2 - 每次选人数N2 - 每次选人数N2);
	重复的种数N2.PrintProcessLog(2);
	DefineLangVarInt(没有重复种数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算没有重复种数N4 没有重复种数N4=包含全部的种数N1/重复的种数N2"));
	没有重复种数N4 = 包含全部的种数N1 / 重复的种数N2;
	没有重复种数N4.PrintProcessLog(3);
	DefineLangVarInt(没重复不能选择种数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算没重复不能选择种数N5 没重复不能选择种数N5 = ((总共的数量N7 - 不能选择的数量N6)* ( (总共的数量N7 - 不能选择的数量N6) - 每次选人数N2))/ (不能选择的数量N6 * (不能选择的数量N6 - 每次选人数N2));"));
	没重复不能选择种数N5 = ((总共的数量N7 - 不能选择的数量N6)* ( (总共的数量N7 - 不能选择的数量N6) - 每次选人数N2))/ (不能选择的数量N6 * (不能选择的数量N6 - 每次选人数N2));
	没重复不能选择种数N5.PrintProcessLog(4);
	DefineLangVarInt(一共选择数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算一共选择数N7 一共选择数N7=没有重复种数N4-没重复不能选择种数N5"));
	一共选择数N7 = 没有重复种数N4 - 没重复不能选择种数N5;
	一共选择数N7.PrintProcessLog(5);
}
void P44()
{
	P44_1();
	ColPrintf(PrintfCol::方法, "");
	P44_2();
	ColPrintf(PrintfCol::方法, "");
	
}
void P44_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P44();
	Lang.SetCurLanguage(LanguageLib::English);
	P44();
	ColPrintf(PrintfCol::方法, "");

}