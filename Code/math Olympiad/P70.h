#pragma once
void P70_formula()
{
	LanguageLib::LanguageTableT Language = {
		{"P70 formula derivation of decimal fraction","P70 公式推导 小数化分数"},
		{"Set the loop section as abc",
		"设循环节为abc"  },
		{"1. Pure cyclic decimal fraction",
		"1.纯循环小数化分数"},
		{"    1. List the equation S1 0. abc * 1000=abc. abc",
		"    1.列出式子S1 0.abc……*1000=abc.abc……"},
		{"    2.Simplify S1 to S2 0.abc…*1000-0.abc…=abc.abc-0.abc…",
		"    2.化简S1得到S2 0.abc……*1000-0.abc……=abc.abc-0.abc……"},
		{"    3. Simplify S2 to obtain S3 0. abc... * 999=abc",
		"    3.化简S2得到S3 0.abc……*999=abc"},
		{"    4. Simplify S3 to obtain S4 0. abc...=abc/999",
		"    4.化简S3得到S4 0.abc……=abc/999"},
		{"2. Mixed cycle decimal fraction",
		"2.混循环小数化分数"},
		{"    1. List the equations S1 0.a(bc……*1000=abc.bc……",
		"    1.列出式子S1 0.a(bc……*1000=abc.bc……"},
		{"    2. List the equations S2 0.a(bc……*10=a.bc……",
		"    2.列出式子S2 0.a(bc……*10=a.bc……"},
		{"    3. According to S1, S2 gets S3 0.a(bc……*1000-0.a(bc……*10=abc.bc……a.bc……",
		"    3.根据S1，S2得到S3 0.a(bc……*1000-0.a(bc……*10=abc.bc……-a.bc……"},
		{"    4. Simplify S3 to obtain S4 0. a (bc... * 990=abc-a)",
		"    4.化简S3得到S4 0.a(bc……*990=abc-a"},
		{"    5. Simplify S4 to obtain S5 0. abcbc...=(abc-a)/990",
		"    5.化简S4得到S5 0.abcbc……=(abc-a)/990"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P70 公式推导 小数化分数"));
	ColPrintf(PrintfCol::方法, Lang("设循环节为abc"));
	ColPrintf(PrintfCol::方法, Lang("1.纯循环小数化分数"));
	ColPrintf(PrintfCol::方法, Lang("    1.列出式子S1 0.abc……*1000=abc.abc……"));
	ColPrintf(PrintfCol::方法, Lang("    2.化简S1得到S2 0.abc……*1000-0.abc……=abc.abc-0.abc……"));
	ColPrintf(PrintfCol::方法, Lang("    3.化简S2得到S3 0.abc……*999=abc"));
	ColPrintf(PrintfCol::方法, Lang("    4.化简S3得到S4 0.abc……=abc/999"));
	ColPrintf(PrintfCol::方法, Lang("2.混循环小数化分数"));
	ColPrintf(PrintfCol::方法, Lang("    1.列出式子S1 0.a(bc……*1000=abc.bc……"));
	ColPrintf(PrintfCol::方法, Lang("    2.列出式子S2 0.a(bc……*10=a.bc……"));
	ColPrintf(PrintfCol::方法, Lang("    3.根据S1，S2得到S3 0.a(bc……*1000-0.a(bc……*10=abc.bc……-a.bc……"));
	ColPrintf(PrintfCol::方法, Lang("    5.化简S4得到S5 0.abcbc……=(abc-a)/990"));
}
void P70_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P70 Example One Recurrent Decimal Problem","P70例一 循环小数问题"},
		{"Title: Convert the following decimals to fractions of 0.7... 0.147147... 0.31818",
		"题目：把下列小数化为分数 0.7…… 0.147147…… 0.31818……"},
		{"1. Calculate 0.7... 0.7...=0. abc...=abc/999=7/9",
		"1.计算0.7…… 0.7……=0.abc……=abc/999=7/9"},
		{"2. Calculate 0.147147... 0.147147...=0. abc...=abc/999=147/999=49/333",
		"2.计算0.147147…… 0.147147……=0.abc……=abc/999=147/999=49/333"},
		{"3. Calculate 0.31818... 0.31818...=(abc-a)/990=(318-3)/990=315/990=7/22",
		"3.计算0.31818…… 0.31818……=(abc-a)/990=(318-3)/990=315/990=7/22"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P70例一 循环小数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：把下列小数化为分数 0.7…… 0.147147…… 0.31818……"));
	ColPrintf(PrintfCol::方法, Lang("1.计算0.7…… 0.7……=0.abc……=abc/999=7/9"));
	ColPrintf(PrintfCol::方法, Lang("2.计算0.147147…… 0.147147……=0.abc……=abc/999=147/999=49/333"));
	ColPrintf(PrintfCol::方法, Lang("3.计算0.31818…… 0.31818……=(abc-a)/990=(318-3)/990=315/990=7/22"));
}
void P70_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P70 Example Two Loop Decimal Problem","P70例二 循环小数问题"},
		{"Title: Calculate 0.11……+0.125+0.33……+0.1666……",
		"题目：计算0.11……+0.125+0.33……+0.1666……"},
		{"1. Convert to a score of 1/9+1/8+1/3+15/90",
		"1.化为分数 1/9+1/8+1/3+15/90"},
		{"2. Simplify the previous step to obtain 1/9+1/8+1/3+15/90=53/72",
		"2.化简上一步得到 1/9+1/8+1/3+15/90=53/72"},
		{"3. Simplify the previous step to obtain 53/72 ≈ 0.736",
		"3.化简上一步得到 53/72≈0.736"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P70例二 循环小数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算0.11……+0.125+0.33……+0.1666……"));
	ColPrintf(PrintfCol::方法, Lang("1.化为分数 1/9+1/8+1/3+15/90"));
	ColPrintf(PrintfCol::方法, Lang("2.化简上一步得到 1/9+1/8+1/3+15/90=53/72"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 53/72≈0.736"));
}
void P70()
{
	P70_formula();
	ColPrintf(PrintfCol::方法, "");
	P70_1();
	ColPrintf(PrintfCol::方法, "");
	P70_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_3();
	ColPrintf(PrintfCol::方法, "");
}
void P70_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P70();
	Lang.SetCurLanguage(LanguageLib::English);
	P70();
	ColPrintf(PrintfCol::方法, "");

}