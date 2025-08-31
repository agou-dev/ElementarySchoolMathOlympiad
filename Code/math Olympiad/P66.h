#pragma once
void P66_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P66 Example 1 Extracting Common Factors","P66 例一 提取公因数"},
		{"Title: Calculate 138 * 1 (3/4)+23.3 * (2 - 75%) -175% * 38+(1+0.25) * 6 (7/10)",
		"题目：计算138*1(3/4)+23.3*(2-75%)-175%*38+(1+0.25)*6(7/10)"},
		{"1. Convert the score to a decimal of 138 * 1.75+23.3 * 1.25-1.75 * 38+1.25 * 6.7",
		"1.把分数转换为小数 138*1.75+23.3*1.25-1.75*38+1.25*6.7"},
		{"2. Put items with the same factor together, 138 * 1.75-1.75 * 38+23.3 * 1.25+1.25 * 6.7",
		"2.把相同因数的项放在一起 138*1.75-1.75*38+23.3*1.25+1.25*6.7"},
		{"3. Because the factor is the same, add another factor and subtract 100 * 1.75+(30 * 1.25)",
		"3.因为因数相同另一个因数相加减 100*1.75+(30*1.25)"},
		{"4. Simplify the previous step to obtain 175+37.5=212.5",
		"4.化简上一步得到 175+37.5=212.5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P66 例一 提取公因数"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算138*1(3/4)+23.3*(2-75%)-175%*38+(1+0.25)*6(7/10)"));
	ColPrintf(PrintfCol::方法, Lang("1.把分数转换为小数 138*1.75+23.3*1.25-1.75*38+1.25*6.7"));
	ColPrintf(PrintfCol::方法, Lang("2.把相同因数的项放在一起 138*1.75-1.75*38+23.3*1.25+1.25*6.7"));
	ColPrintf(PrintfCol::方法, Lang("3.因为因数相同另一个因数相加减 100*1.75+(30*1.25)"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 175+37.5=212.5"));
}
void P66_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P66 Case 2 Extracting Common Factors","P66 例二 提取公因数"},
		{"Title: Calculate 999999 * 777778+33333+666666",
		"题目：计算999999*777778+333333+666666"},
		{"1. Convert the first term to terms of the same factor 333333 * 233333+333333+666666",
		"1.把第一项转换为同因数的项 333333*2333334+333333+666666"},
		{"2. Merge numbers with the same factor 333333 * 300000=999999000000",
		"2.合并同因数的数 333333*3000000=999999000000"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P66 例二 提取公因数"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算999999*777778+333333+666666"));
	ColPrintf(PrintfCol::方法, Lang("1.把第一项转换为同因数的项 333333*2333334+333333+666666"));
	ColPrintf(PrintfCol::方法, Lang("2.合并同因数的数 333333*3000000=999999000000"));
}
void P66_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P66 Case Three Extracting Common Factors","P66 例三 提取公因数"},
		{"Title: Calculate 9 * 17+91/17-5 * 17+45/17",
		"题目：计算9*17+91/17-5*17+45/17"},
		{"1. Divide the multiplication or division into a category of 9 * 17-5 * 17+91/17+45/17",
		"1.把乘或除的分成一类 9*17-5*17+91/17+45/17"},
		{"2. Merge multiply or divide multiple items (9-5) * 17+(91+45)/17",
		"2.把乘或除的多项合并 (9-5)*17+(91+45)/17"},
		{"3. Simplify the previous step to obtain 4 * 17+136/17",
		"3.化简上一步得到 4*17+136/17"},
		{"4. Simplify the previous step to obtain 68+8=76",
		"4.化简上一步得到 68+8=76"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P66 例三 提取公因数"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算9*17+91/17-5*17+45/17"));
	ColPrintf(PrintfCol::方法, Lang("1.把乘或除的分成一类 9*17-5*17+91/17+45/17"));
	ColPrintf(PrintfCol::方法, Lang("2.把乘或除的多项合并 (9-5)*17+(91+45)/17"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 4*17+136/17"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 68+8=76"));
}
void P66_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P66 Subtopic Extraction of Common Factors","P66 副题 提取公因数"},
		{"Title: Calculation of (933 * 263.2+(311 * 3) * 38.8- (622 * 1.5))+3333 * 44444-11111 * 22222",
		"题目：计算(933*263.2+(311*3)*38.8-(622*1.5))+33333*44444-11111*22222"},
		{"1. Calculate (933 * 263.2+933 * 38.8-933)+3333 * 44444-11111 * 22222 in parentheses",
		"1.把括号内的算出 (933*263.2+933*38.8-933)+33333*44444-11111*22222"},
		{"2. Convert the following to the same factor (933 * 263.2+933 * 38.8-933)+66666 * 22222-11111 * 22222",
		"2.把后面的转换为同因数 (933*263.2+933*38.8-933)+66666*22222-11111*22222"},
		{"3. Merge multiple multiplication or division items (933 * 301-933)+55555 * 22222",
		"3.把乘或除的多项合并 (933*301-933)+55555*22222"},
		{"4. Simplify the previous step to obtain (933 * 300)+55555 * 22222",
		"4.化简上一步得到 (933*300)+55555*22222"},
		{"5. Simplify the previous step to obtain 27900+111110=139010",
		"5.化简上一步得到 27900+111110=139010"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P66 副题 提取公因数"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算(933*263.2+(311*3)*38.8-(622*1.5))+33333*44444-11111*22222"));
	ColPrintf(PrintfCol::方法, Lang("1.把括号内的算出 (933*263.2+933*38.8-933)+33333*44444-11111*22222"));
	ColPrintf(PrintfCol::方法, Lang("2.把后面的转换为同因数 (933*263.2+933*38.8-933)+66666*22222-11111*22222"));
	ColPrintf(PrintfCol::方法, Lang("3.把乘或除的多项合并 (933*301-933)+55555*22222"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 (933*300)+55555*22222"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 27900+111110=139010"));
}
void P66()
{
	P66_1();
	ColPrintf(PrintfCol::方法, "");
	P66_2();
	ColPrintf(PrintfCol::方法, "");
	P66_3();
	ColPrintf(PrintfCol::方法, "");
	P66_4();
	ColPrintf(PrintfCol::方法, "");
	//P77_5();
	ColPrintf(PrintfCol::方法, "");
}
void P66_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P66();
	Lang.SetCurLanguage(LanguageLib::English);
	P66();
	ColPrintf(PrintfCol::方法, "");

}