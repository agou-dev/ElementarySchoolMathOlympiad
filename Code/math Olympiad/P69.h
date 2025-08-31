#pragma once
void P69_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P69 Example 1 Parenthesization Method 1","P69 例四 去括号方法一"},
		{"Title: Calculation 1/(2/3)/(3/4)/(4/5).../(2011/2012)/(2012/2013)",
		"题目：计算1/(2/3)/(3/4)/(4/5)……/(2011/2012)/(2012/2013)"},
		{"1. Remove parentheses 1/2 * 3 * 4/4 * 5.../2011 * 2012/2012 * 2013",
		"1.去括号 1/2*3/3*4/4*5……/2011*2012/2012*2013"},
		{"2. Offset the same items to obtain 1/2 * 1 * 1 * 1... 1 * 1 * 201",
		"2.抵消相同项得到 1/2*1*1*1……1*1*2013"},
		{"3. Simplify the previous step to obtain 1/2 * 2013",
		"3.化简上一步得到 1/2*2013"},
		{"4. Simplify the previous step to obtain 1 * 2013/2",
		"4.化简上一步得到 1*2013/2"},
		{"5. Simplify the previous step to obtain 2013/2=1006.5",
		"5.化简上一步得到 2013/2=1006.5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P69 例四 去括号方法一"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算1/(2/3)/(3/4)/(4/5)……/(2011/2012)/(2012/2013)"));
	ColPrintf(PrintfCol::方法, Lang("1.去括号 1/2*3/3*4/4*5……/2011*2012/2012*2013"));
	ColPrintf(PrintfCol::方法, Lang("2.抵消相同项得到 1/2*1*1*1……1*1*2013"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 1/2*2013"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 1*2013/2"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 2013/2=1006.5"));
}
void P69_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P69 Example 1 Parenthesization Method 2","P69 例四 去括号方法二"},
		{"Title: Calculation 1/(2/3)/(3/4)/(4/5).../(2011/2012)/(2012/2013)",
		"题目：计算1/(2/3)/(3/4)/(4/5)……/(2011/2012)/(2012/2013)"},
		{"1. Divide into fractions 1/(2/3)/(3/4)/(4/5).../(2011/2012)/(2012/2013)",
		"1.把除法化为分数 1/(2/3)/(3/4)/(4/5)……/(2011/2012)/(2012/2013)"},
		{"2. Convert division into multiplication to calculate 1 * (3/2) * (4/3) * (5/4)... * (2012/2011) * (2013/2012)",
		"2.把除法变成乘法计算 1*(3/2)*(4/3)*(5/4)……*(2012/2011)*(2013/2012)"},
		{"3. Simplify the previous step to obtain 1 * (2013/2)",
		"3.化简上一步得到 1*(2013/2)"},
		{"4. Simplify the previous step to obtain 1 * 1006.5=1006.5",
		"4.化简上一步得到 1*1006.5=1006.5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P69 例四 去括号方法二"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算1/(2/3)/(3/4)/(4/5)……/(2011/2012)/(2012/2013)"));
	ColPrintf(PrintfCol::方法, Lang("1.把除法化为分数 1/(2/3)/(3/4)/(4/5)……/(2011/2012)/(2012/2013)"));
	ColPrintf(PrintfCol::方法, Lang("2.把除法变成乘法计算 1*(3/2)*(4/3)*(5/4)……*(2012/2011)*(2013/2012)"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 1*(2013/2)"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 1*1006.5=1006.5"));
}
void P69_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P69 Example 5: Remove parentheses","P69 例五 去括号"},
		{"Title: Calculation (11 * 10 * 9 * 8... * 2 * 1)/(22 * 24 * 25 * 27)",
		"题目：计算(11*10*9*8……*2*1)/(22*24*25*27)"},
		{"1. Put the items that can be rounded together with the second item (11 * 2/22) * (10 * 5/25) * (4 * 6/24) * (9 * 6/27)*7*4",
		"1.把能凑整的与第二项放在一起 (11*2/22)*(10*5/25)*(4*6/24)*(3*9/27)*7*4"},
		{"2. Simplify the previous step to obtain 1 * 2 * 1 * 1 * 7 * 4",
		"2.化简上一步得到 1*2*2*1*7*4"},
		{"3. Simplify the previous step to obtain 2 * 7 * 4*2",
		"3.化简上一步得到 2*7*4*2"},
		{"4. Simplify the previous step to obtain 14 * 4*2",
		"4.化简上一步得到 14*4*2"},
		{"5. Simplify the previous step to obtain 56 * 2=114",
		"5.化简上一步得到 56*2=114"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P69 例五 去括号"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算(11*10*9*8……*2*1)/(22*24*25*27)"));
	ColPrintf(PrintfCol::方法, Lang("1.把能凑整的与第二项放在一起 (11*2/22)*(10*5/25)*(4*6/24)*(3*9/27)*7*4"));
	ColPrintf(PrintfCol::方法, Lang("2.化简上一步得到 1*2*2*1*7*4"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 2*7*4*2"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 14*4*2"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 56*2=114"));
}
void P69_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P69 case six with parentheses removed","P69 例六 去括号"},
		{"Title: Calculation 11.1 * 4/9 * 3/7.4 * 2",
		"题目：计算11.1*4/9*3/7.4*2"},
		{"1. Decompose decimals (3 * 3.7) * 4/9 * 3/(2 * 3.7) * 2",
		"1.分解小数 (3*3.7)*4/9*3/(2*3.7)*2"},
		{"2. Simplify the previous step to obtain 3 * 3.7 * 4/9 * 3/2/3.7 * 2",
		"2.化简上一步得到 3*3.7*4/9*3/2/3.7*2"},
		{"3. Simplify the previous step to obtain (3 * 3/9) * (3.7/3.7) * 4 * 2/2",
		"3.化简上一步得到 (3*3/9)*(3.7/3.7)*4*2/2"},
		{"4. Simplify the previous step to obtain (3 * 3/9) * (3.7/3.7) * 4 * 1",
		"4.化简上一步得到 (3*3/9)*(3.7/3.7)*4*1"},
		{"5. Simplify the previous step to obtain 1 * 1 * 4 * 1=4",
		"5.化简上一步得到 1*1*4*1=4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P69 例六 去括号"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算11.1*4/9*3/7.4*2"));
	ColPrintf(PrintfCol::方法, Lang("1.分解小数 (3*3.7)*4/9*3/(2*3.7)*2"));
	ColPrintf(PrintfCol::方法, Lang("2.化简上一步得到 3*3.7*4/9*3/2/3.7*2"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 (3*3/9)*(3.7/3.7)*4*2/2"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 (3*3/9)*(3.7/3.7)*4*1"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 1*1*4*1=4"));
}
void P69()
{
	P69_1_1();
	ColPrintf(PrintfCol::方法, "");
	P69_1_2();
	ColPrintf(PrintfCol::方法, "");
	P69_2();
	ColPrintf(PrintfCol::方法, "");
	P69_3();
	ColPrintf(PrintfCol::方法, "");
}
void P69_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P69();
	Lang.SetCurLanguage(LanguageLib::English);
	P69();
	ColPrintf(PrintfCol::方法, "");

}