#pragma once
void P71_rule()
{
	LanguageLib::LanguageTableT Language = {
		{"P71 Regular Cycle Decimal Fraction","P71 规律 循环小数化分数"},
		{"1. Common formulas",
		"1.常用式子"},
		{"    1.1/7=0.142857142857……=abc/999=142857/99999",
		"    1.1/7=0.142857142857……=abc/999=142857/99999"},
		{"    2.2/7=0.285714285714……=abc/999=285714/99999",
		"    2.2/7=0.285714285714……=abc/999=285714/99999"},
		{"    3.3/7=0.428571428571……=abc/999=428571/99999",
		"    3.3/7=0.428571428571……=abc/999=428571/99999"},
		{"    4.4/7=0.571428571428……=abc/999=571428/99999",
		"    4.4/7=0.571428571428……=abc/999=571428/99999"},
		{"    5.5/7=0.714285714285……=abc/999=714285/99999",
		"    5.5/7=0.714285714285……=abc/999=714285/99999"},
		{"    6.6/7=0.857142857142……=abc/999=857142/99999",
		"    6.6/7=0.857142857142……=abc/999=857142/99999"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P71 规律 循环小数化分数"));
	ColPrintf(PrintfCol::方法, Lang("1.常用式子"));
	ColPrintf(PrintfCol::方法, Lang("    1.1/7=0.142857142857……=abc/999=142857/99999"));
	ColPrintf(PrintfCol::方法, Lang("    2.2/7=0.285714285714……=abc/999=285714/99999"));
	ColPrintf(PrintfCol::方法, Lang("    3.3/7=0.428571428571……=abc/999=428571/99999"));
	ColPrintf(PrintfCol::方法, Lang("    4.4/7=0.571428571428……=abc/999=571428/99999"));
	ColPrintf(PrintfCol::方法, Lang("    5.5/7=0.714285714285……=abc/999=714285/99999"));
	ColPrintf(PrintfCol::方法, Lang("    6.6/7=0.857142857142……=abc/999=857142/99999"));
}
void P71_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P71 Example One Cycle Decimal Score","P71 例一 循环小数化分数"},
		{"Question: If the true fraction a/7 is converted to decimal, and the sum of several consecutive numbers starting from the first decimal place is 1992, then what is a?",
		"题目：真分数a/7化为小数后，如果从小数点第一位的数字开始连续若干个数字之和是1992，那么a是多少?"},
		{"1. According to the rule, the number after the decimal point is 142857. After adding them up, divide it by 1992 to calculate how many cycles there are. Then, determine the following decimals based on the remainder, and use them to find the ones that follow the rule",
		"1.根据规律符合的是小数点后面是142857，加起来算出后，用它除1992算出循环多少个，然后根据余数来确定后面的几个小数，通过后面的几个小数来找与规律相同的"},
		{"2. Calculate the total number of nodes in each cycle as 1+4+2+8+5+7=27",
		"2.计算每个循环节总数 1+4+2+8+5+7=27"},
		{"3. Calculate the number of cyclic digits 1992/27=73... 21",
		"3.计算循环位数 1992/27=73……21"},
		{"4. Calculate the number of loops without loops in the last loop 27-21-6, 6=2+4",
		"4.计算最后一个循环最后没有循环的数 27-21-6，6=2+4"},
		{"5. According to the pattern, if the end is 2 and 4, only 857142 can be satisfied, so a is 6",
		"5.根据规律找出末尾是2和4，满足的只能是857142，所以a是6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P71 例一 循环小数化分数"));
	ColPrintf(PrintfCol::标题, Lang("题目：真分数a/7化为小数后，如果从小数点第一位的数字开始连续若干个数字之和是1992，那么a是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.根据规律符合的是小数点后面是142857，加起来算出后，用它除1992算出循环多少个，然后根据余数来确定后面的几个小数，通过后面的几个小数来找与规律相同的"));
	ColPrintf(PrintfCol::方法, Lang("2.计算每个循环节总数 1+4+2+8+5+7=27"));
	ColPrintf(PrintfCol::方法, Lang("3.计算循环位数 1992/27=73……21"));
	ColPrintf(PrintfCol::方法, Lang("4.计算最后一个循环最后没有循环的数 27-21-6，6=2+4"));
	ColPrintf(PrintfCol::方法, Lang("5.根据规律找出末尾是2和4，满足的只能是857142，所以a是6"));
}
void P71_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P71 Example Two Cycle Decimal Score","P71 例二 循环小数化分数"},
		{"Question: A student multiplies 1.2333... by a, and considers 1.2333... as 1.23. The result is 0.3 less. What is the correct result?",
		"题目：某学生将1.2333……乘以a，把1.2333……看成1.23，结果少了0.3，正确的结果是多少?"},
		{"1. List equations S1 1.2333... a-1.23a=0.3",
		"1.列出式子S1 1.2333……a-1.23a=0.3"},
		{"2. Extract the common factor S1 to obtain S2 a (1.2333... -1.23)=0.3",
		"2.提取公因数S1得到S2 a(1.2333……-1.23)=0.3"},
		{"3. Convert S2 into a fraction S3 a (1 (21/90) -1 (23/100))=(3/10)",
		"3.把S2化为分数S3 a(1(21/90)-1(23/100))=(3/10)"},
		{"4. Simplify S3 to obtain S4 a (1/300)=(3/10)",
		"4.化简S3得到S4 a(1/300)=(3/10)"},
		{"5. Simplify S4 to obtain S5 a=(3/10) * 300/1=90",
		"5.化简S4得到S5 a=(3/10)*300/1=90"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P71 例二 循环小数化分数"));
	ColPrintf(PrintfCol::标题, Lang("题目：某学生将1.2333……乘以a，把1.2333……看成1.23，结果少了0.3，正确的结果是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 1.2333……a-1.23a=0.3"));
	ColPrintf(PrintfCol::方法, Lang("2.提取公因数S1得到S2 a(1.2333……-1.23)=0.3"));
	ColPrintf(PrintfCol::方法, Lang("3.把S2化为分数S3 a(1(21/90)-1(23/100))=(3/10)"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 a(1/300)=(3/10)"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S4得到S5 a=(3/10)*300/1=90"));
}
void P71_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P71 Example 3 Cycle Decimal Score","P71 例三 循环小数化分数"},
		{"Title: What is abc when the sum of the numerator and denominator is 58 when written as the simplest fraction",
		"题目：纯循环小数0.abcabc……写成最简分数时，分子分母的和是58，则abc是多少"},
		{"1. Simplify cyclic decimals 0. abcabc...=abc/999",
		"1.化简循环小数 0.abcabc……=abc/999"},
		{"2. Decompose 999 to approximately 999=111 * 9=3 * 37 * 9=3 * 37 * 3 ^ 2=37 * 3 ^ 3",
		"2.分解999使能够约分 999=111*9=3*37*9=3*37*3^2=37*3^3=x"},
		{"3. List the range of denominators after simplification 58/2<x<58",
		"3.列举化简后分母的范围 58/2<x<58"},
		{"4. Which item matches 3 ^ 3=27<29 37>29, so 37 is the denominator",
		"4.哪一项符合 3^3=27<29 37>29,所以37符合是分母"},
		{"5. Take step 4 into step 1 (? * 3 ^ 3)/37 * 3 ^ 3=abc/999",
		"5.将第4步带入第一步 (?*3^3)/37*3^3=abc/999"},
		{"6. Simplify the previous step to obtain (? * 3 ^ 3)/37 * 3 ^ 3=? /37 ? +37=58",
		"6.化简上一步得到 (?*3^3)/37*3^3=?/37 abc+37=58"},
		{"7. Simplify the previous step to obtain abc+37=58 abc=21",
		"7.化简上一步得到 abc+37=58 abc=21"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P71 例三 循环小数化分数"));
	ColPrintf(PrintfCol::标题, Lang("题目：纯循环小数0.abcabc……写成最简分数时，分子分母的和是58，则abc是多少"));
	ColPrintf(PrintfCol::方法, Lang("1.化简循环小数 0.abcabc……=abc/999"));
	ColPrintf(PrintfCol::方法, Lang("2.分解999使能够约分 999=111*9=3*37*9=3*37*3^2=37*3^3=x"));
	ColPrintf(PrintfCol::方法, Lang("3.列举化简后分母的范围 58/2<x<58"));
	ColPrintf(PrintfCol::方法, Lang("4.哪一项符合 3^3=27<29 37>29,所以37符合是分母"));
	ColPrintf(PrintfCol::方法, Lang("5.将第4步带入第一步 (?*3^3)/37*3^3=abc/999"));
	ColPrintf(PrintfCol::方法, Lang("6.化简上一步得到 (?*3^3)/37*3^3=?/37 abc+37=58"));
	ColPrintf(PrintfCol::方法, Lang("7.化简上一步得到 abc+37=58 abc=21"));
}
void P71()
{
	//P70_formula();
	ColPrintf(PrintfCol::方法, "");
	P71_rule();
	ColPrintf(PrintfCol::方法, "");
	P71_1();
	ColPrintf(PrintfCol::方法, "");
	P71_2();
	ColPrintf(PrintfCol::方法, "");
	P71_3();
	ColPrintf(PrintfCol::方法, "");
	
	//P70_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_3();
	ColPrintf(PrintfCol::方法, "");
}
void P71_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P71();
	Lang.SetCurLanguage(LanguageLib::English);
	P71();
	ColPrintf(PrintfCol::方法, "");

}