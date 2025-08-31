#pragma once
void P87_rude()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Regular Remainder Problem","P87 规律 余数问题"},
		{"1. The remainder must be less than the divisor, otherwise the quotient will have to be added by one",
		"1.余数一定小于除数，不然商就要加一"},
		{"2. If the divisors are added, the change in the remainder",
		"2.被除数如果相加，余数的变化"},
		{"    1. Condition: Let a and b be natural numbers, c be the divisor, j1 be the quotient of a/c, and j2 be the quotient of b/c. If r is the remainder of these two natural numbers that are the same, then it must satisfy: a/c=j1... r b/c=j2... r",
		"    1.条件：设a，b为自然数，c为除数，j1为a/c的商，j2为b/c的商。r为这两个自然数相同的余数，则必须满足：a/c=j1……r b/c=j2……r"},
		{"    2.To ensure that there are no remainders and that the remainders are equal, we first formulate the relationship: a=c * j1+r b=c * j2+r",
		"    2.要使没有余数，而且余数相等，所以我们先把关系理出：a=c*j1+r b=c*j2+r"},
		{"    3. Since both add r, our goal is that there is no remainder, so a-b=(c * j1+r) - (c * j2+r)",
		"    3.因为两个都加r，我们的目标是没有余数，所以 a-b=(c*j1+r) -(c*j2+r)"},
		{"    4. Simplify the previous step to obtain a-b=c * j1+r - c * j2-r",
		"    4.化简上一步得到 a-b=c*j1+r -c*j2-r"},
		{"    5. Simplify the previous step to obtain a-b=c * (j1-j2) with no remainder, so the formula is derived",
		"    5.化简上一步得到 a-b=c*(j1-j2) 没有余数所以公式推出"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 规律 余数问题"));
	ColPrintf(PrintfCol::方法, Lang("1.余数一定小于除数，不然商就要加一"));
	ColPrintf(PrintfCol::方法, Lang("2.被除数如果相加，余数的变化"));
	ColPrintf(PrintfCol::方法, Lang("    1.条件：设a，b为自然数，c为除数，j1为a/c的商，j2为b/c的商。r为这两个自然数相同的余数，则必须满足：a/c=j1……r b/c=j2……r"));
	ColPrintf(PrintfCol::方法, Lang("    2.要使没有余数，而且余数相等，所以我们先把关系理出：a=c*j1+r b=c*j2+r"));
	ColPrintf(PrintfCol::方法, Lang("    3.因为两个都加r，我们的目标是没有余数，所以 a-b=(c*j1+r) -(c*j2+r)"));
	ColPrintf(PrintfCol::方法, Lang("    4.化简上一步得到 a-b=c*j1+r -c*j2-r"));
	ColPrintf(PrintfCol::方法, Lang("    5.化简上一步得到 a-b=c*(j1-j2) 没有余数所以公式推出"));
}
void P87_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example One Remainder Problem","P87 例一 余数问题"},
		{"Question: What is the minimum value of a natural number divided by 3 to 1, divided by 5 to 3, and divided by 7 to 5?",
		"题目：一个自然数除以3余1，除以5余3，除以7余5，这个自然数最小是多少？"},
		{"Through observation, it was found that dividing this natural number by three divisors results in a difference of 2 between the divisor and the remainder. Therefore, as long as the natural number is reduced by 2, there will be no remainder.",
		"1.通过观察发现这个自然数除以三个除数，除数与余数之间的差是2，所以只要自然数减少2余数就没有了。"},
		{"2. Assuming there is no remainder, natural numbers are the least common multiple of 3, 5, and 7: 3 * 5 * 7=105",
		"2.假设没有余数，自然数是3，5，7的最小公倍数：3*5*7=105"},
		{"3. We add the remainder and subtract the natural number without remainder from 3-1: 105- (3-1)=103",
		"3.我们加上余数，用3-1减去没有余数的自然数：105-(3-1)=103"},
		{"Therefore, this natural number is 103",
		"4.因此这个自然数是103"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例一 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个自然数除以3余1，除以5余3，除以7余5，这个自然数最小是多少？"));
	ColPrintf(PrintfCol::方法, Lang("1.通过观察发现这个自然数除以三个除数，除数与余数之间的差是2，所以只要自然数减少2余数就没有了。"));
	ColPrintf(PrintfCol::方法, Lang("2.假设没有余数，自然数是3，5，7的最小公倍数：3*5*7=105"));
	ColPrintf(PrintfCol::方法, Lang("3.我们加上余数，用3-1减去没有余数的自然数：105-(3-1)=103"));
	ColPrintf(PrintfCol::方法, Lang("4.因此这个自然数是103"));
}
void P87_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example of Two Remainder Problem","P87 例二 余数问题"},
		{"Title: What is the remainder of the product of 9437569 and 8057127 divided by 9?",
		"题目：9437569与8057127的乘积除以9的余数是什么?"},
		{"1. We can calculate their remainders separately, as they are products, we need to multiply them together",
		"1.我们可以分别计算它们的余数，因为是乘积所以我们要相乘"},
		{"2.Although our computational workload is much less than that of normal thinking, it is still a lot. We can use the method of judging the multiple of three, because the factor of 9 is 3. Finally, add up all of you and divide by 9",
		"2.虽然我们的的计算量比正常思维的计算量少的多，但依旧很多，我们可以用判断三的倍数的方法，因为9的因数是3，最后把各位加起来除9就行了"},
		{"3. List equation S1 (9+4+3+7+5+6+9)/9=4... 7",
		"3.列出式子S1 (9+4+3+7+5+6+9)/9=4……7"},
		{"4. List equation S2 (8+0+5+7+1+2+7)/9=4... 7",
		"4.列出式子S2 (8+0+5+7+1+2+7)/9=3……3"},
		{"5. According to the requirements of the question, multiply the remainders of S1 and S2 to obtain S3 (3 * 7)/9=2... 3",
		"5.根据题目要求S1，S2余数相乘得到S3 (3*7)/9=2……3"},
		{"So the remainder is 7",
		"6.所以余数是7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例二 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：9437569与8057127的乘积除以9的余数是什么?"));
	ColPrintf(PrintfCol::方法, Lang("1.我们可以分别计算它们的余数，因为是乘积所以我们要相乘"));
	ColPrintf(PrintfCol::方法, Lang("2.虽然我们的的计算量比正常思维的计算量少的多，但依旧很多，我们可以用判断三的倍数的方法，因为9的因数是3，最后把各位加起来除9就行了"));
	ColPrintf(PrintfCol::方法, Lang("3.列出式子S1 (9+4+3+7+5+6+9)/9=4……7"));
	ColPrintf(PrintfCol::方法, Lang("4.列出式子S2 (8+0+5+7+1+2+7)/9=3……3"));
	ColPrintf(PrintfCol::方法, Lang("5.根据题目要求S1，S2余数相乘得到S3 (3*7)/9=2……3"));
	ColPrintf(PrintfCol::方法, Lang("6.所以余数是7"));
}
void P87_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Three Remainder Problem","P87 例三 余数问题"},
		{"Question: Among the natural numbers 1, 2, 3... 30, how many different numbers can be extracted whose sum is not a multiple of 7?",
		"题目：在1，2，3……30的这些自然数中，最多能取出多少个任意两个不同的数的和不是7的倍数?"},
		{"1. Let's first enumerate the number of remainders 1, 2, 3, 4, 5, 6, 0",
		"1.我们先枚举余数是1，2，3，4，5，6，0的数量"},
		{"2. There are 5 numbers with a remainder of 1 when divided by 7: 1, 8, 15, 22, 29 \The remainder of n divided by 7 is 2: 2, 9, 16, 23, 30. 5 numbers: 3, 10, 17, 24 with a remainder of 3 divided by 7: 4, 11, 18, 25  4 numbers: 5, 12, 19, 26  4 numbers with a remainder of 5 divided by 7. \The remainder of n divided by 7 is 6: 6, 13, 20, 27  4 numbers",
		"2.被7除余数是1的：1, 8, 15, 22, 29  ‌5个数‌.\n被7除余数是2的：2, 9, 16, 23, 30。‌5个数\n被7除余数是3的:3, 10, 17, 24\n被7除余数是4的:4, 11, 18, 25 → ‌4个数‌\n被7除余数是5的:5, 12, 19, 26  ‌4个数‌。\n被7除余数是6的:6, 13, 20, 27  ‌4个数‌\n"},
		{"3. Choose the best one because it is the largest, so we prioritize the ones with remainders 1 and 2, and then the one with a remainder of 4, so there are a total of 5+4+5=14?",
		"3.选出最优 因为是最大，所以我们优先选择余数是1和2的，然后一个4的，所以一共有5+4+5=14？"},
		{"4. We also forgot about the combination of remainders that are 0. If we add two of them together, it will definitely be a multiple of 7. If it is 0, then it satisfies the condition that it is not a multiple of 7, so 14+1=15",
		"4.我们还忘了余数是0的组合，如果取两个相加，肯定是7的倍数，如果是0，那么满足，它不是7的倍数，所以就是14+1=15个"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例三 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：在1，2，3……30的这些自然数中，最多能取出多少个任意两个不同的数的和不是7的倍数?"));
	ColPrintf(PrintfCol::方法, Lang("1.我们先枚举余数是1，2，3，4，5，6，0的数量"));
	ColPrintf(PrintfCol::方法, Lang("2.被7除余数是1的：1, 8, 15, 22, 29  ‌5个数‌.\n被7除余数是2的：2, 9, 16, 23, 30。‌5个数\n被7除余数是3的:3, 10, 17, 24\n被7除余数是4的:4, 11, 18, 25 → ‌4个数‌\n被7除余数是5的:5, 12, 19, 26  ‌4个数‌。\n被7除余数是6的:6, 13, 20, 27  ‌4个数‌"));
	ColPrintf(PrintfCol::方法, Lang("3.选出最优 因为是最大，所以我们优先选择余数是1和2的，然后一个4的，所以一共有5+4+5=14？"));
	ColPrintf(PrintfCol::方法, Lang("4.我们还忘了余数是0的组合，如果取两个相加，肯定是7的倍数，如果是0，那么满足，它不是7的倍数，所以就是14+1=15个"));
}
void P87_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example of Four Remainder Problem","P87 例四 余数问题"},
		{"Question: What is the remainder of 9 to the power of 79/7?",
		"题目：9的79次方/7的余数是多少?"},
		{"1. We found that the remainder of 9/7 is 2 9 ^ 2/7, the remainder of 4 9 ^ 3/7 is 1 9 ^ 4/7, the remainder of 2 9 ^ 5/7 is 4... From this, we discovered that they are a periodic cycle: 2-4-1",
		"1.发现规律 9/7的余数是2 9^2/7的余数是4 9^3/7的余数是1 9^4/7的余数是2 9^5/7的余数是4……从中我们发现它们是一个周期循环：2-4-1"},
		{"2. Cycle number and remainder 79/3=26... 1",
		"2.周期循环数以及余数 79/3=26……1"},
		{"3. Because there is a remainder in the last loop that has not been completed, the first number at the beginning is 2, so the remainder to the power of 79 is 2",
		"3.因为最后一个循环，有余数没有循环完，它开始第一个数是2，所以79次方的余数是2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例四 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：9的79次方/7的余数是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.发现规律 9/7的余数是2 9^2/7的余数是4 9^3/7的余数是1 9^4/7的余数是2 9^5/7的余数是4……从中我们发现它们是一个周期循环：2-4-1"));
	ColPrintf(PrintfCol::方法, Lang("2.周期循环数以及余数 79/3=26……1"));
	ColPrintf(PrintfCol::方法, Lang("3.因为最后一个循环，有余数没有循环完，它开始第一个数是2，所以79次方的余数是2"));
}
void P87()
{
	//P70_formula();
	ColPrintf(PrintfCol::方法, "");
	P87_rude();
	ColPrintf(PrintfCol::方法, "");
	P87_1();
	ColPrintf(PrintfCol::方法, "");
	P87_2();
	ColPrintf(PrintfCol::方法, "");
	P87_3();
	ColPrintf(PrintfCol::方法, "");
	P87_4();
	ColPrintf(PrintfCol::方法, "");

	//P70_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_3();
	ColPrintf(PrintfCol::方法, "");
}
void P87_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P87();
	Lang.SetCurLanguage(LanguageLib::English);
	P87();
	ColPrintf(PrintfCol::方法, "");

}