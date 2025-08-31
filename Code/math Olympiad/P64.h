#pragma once
void P64_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P64 Example 1 Score Grouping Calculation","P64 例一 分数分组计算"},
		{"Title: Calculation (1+3+5+7+...+2009) - (2+4+6+...+2008)",
		"题目:计算(1+3+5+7+……+2009)-(2+4+6+……+2008)"},
		{"1. Subtract the items in two parentheses one by one by 1+((3-2)+(5-4)+(7-6)+...+(2009-2018))",
		"1.把两个括号的项一一相减 1+((3-2)+(5-4)+(7-6)+……+(2009-2008))"},
		{"2. Simplify the previous step to obtain 1+(1 * (2008/2))=1005",
		"2.化简上一步得到 1+(1*(2008/2))=1005"}
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P64 例一 分数分组计算"));
	ColPrintf(PrintfCol::标题, Lang("题目:计算(1+3+5+7+……+2009)-(2+4+6+……+2008)"));
	ColPrintf(PrintfCol::方法, Lang("1.把两个括号的项一一相减 1+((3-2)+(5-4)+(7-6)+……+(2009-2008))"));
	ColPrintf(PrintfCol::方法, Lang("2.化简上一步得到 1+(1*(2008/2))=1005"));
}
void P64_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P64 case two score grouping calculation","P64 例二 分数分组计算"},
		{"Title: 2008+2007-2006-2005+2004+2003-2002-2001+...+4+3-2-1",
		"题目：2008+2007-2006-2005+2004+2003-2002-2001+……+4+3-2-1"},
		{"1. Every four items are a cycle, each cycle is enclosed in parentheses (2008+2007-2006-2005)+(2004+2003-2002-2001)+...+(4+3-2-1)",
		"1.每四项为一个周期，每一个周期带一个括号 (2008+2007-2006-2005)+(2004+2003-2002-2001)+……+(4+3-2-1)"},
		{"2. Simplify the previous step to obtain 4+4+...+4",
		"2.化简上一步得到 4+4+……+4"},
		{"3. Calculate how many items are there in total? 2008/4=502"
		"3.计算一共多少项 2008/4=502"},
		{"4. Calculate step 2: 4+4+...+4=502 * 4=2008",
		"4.计算第2步 4+4+……+4=502*4=2008"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P64 例二 分数分组计算"));
	ColPrintf(PrintfCol::标题, Lang("题目：2008+2007-2006-2005+2004+2003-2002-2001+……+4+3-2-1"));
	ColPrintf(PrintfCol::方法, Lang("1.每四项为一个周期，每一个周期带一个括号 (2008+2007-2006-2005)+(2004+2003-2002-2001)+……+(4+3-2-1)"));
	ColPrintf(PrintfCol::方法, Lang("2.化简上一步得到 4+4+……+4"));
	ColPrintf(PrintfCol::方法, Lang("3.计算一共多少项 2008/4=502"));
	ColPrintf(PrintfCol::方法, Lang("4.计算第2步 4+4+……+4=502*4=2008"));
}
void P64_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P64 case three score grouping calculation","P64 例三 分数分组计算"},
		{"Title: 1989+1988+1987-1985+1984+...+3+2+1",
		"题目：1989+1988+1987-1986-1985+1984+……+3+2+1"},
		{"1. Every six items form a cycle, with each cycle enclosed in parentheses (1989+1988+1987-1986-1985+1984)+...+3+2+1",
		"1.每六项为一个周期，每一个周期带一个括号 (1989+1988+1987-1986-1985+1984)+……+3+2+1"},
		{"2. Calculate the number of items (1989-3)/6",
		"2.计算项数 (1989-3)/6"},
		{"3. Combine the second and first steps 9 * (1989-3)/6+3+2+1“",
		"3.把第二步和第一步联合 9*(1989-3)/6+3+2+1"},
		{"4. Simplify the previous step to obtain 9 * (1986/6)+6",
		"4.化简上一步得到 9*(1986/6)+6"},
		{"5. Simplify the previous step to obtain 9 * 331+6=2985",
		"5.化简上一步得到 9*331+6=2985"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P64 例三 分数分组计算"));
	ColPrintf(PrintfCol::标题, Lang("题目：1989+1988+1987-1986-1985+1984+……+3+2+1"));
	ColPrintf(PrintfCol::方法, Lang("1.每六项为一个周期，每一个周期带一个括号 (1989+1988+1987-1986-1985+1984)+……+3+2+1"));
	ColPrintf(PrintfCol::方法, Lang("2.计算项数 (1989-3)/6"));
	ColPrintf(PrintfCol::方法, Lang("3.把第二步和第一步联合 9*(1989-3)/6+3+2+1"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 9*(1986/6)+6"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 9*331+6=2985"));
}
void P64_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P64 Case Three Consolidation Score Grouping Calculation","P64 例三巩固 分数分组计算"},
		{"Title: Calculate 1+2-3-4+5+6-7-8-9+10+11-12-13+...+2006",
		"题目：计算1+2-3-4+5+6-7-8-9+10+11-12-13+……+2006"},
		{"1. Every six items form a cycle, each cycle is enclosed in parentheses 1+(2-3-4+5)+(6-7-8-9)+(10+11-12-13)+...+2006",
		"1.每六项为一个周期，每一个周期带一个括号 1+(2-3-4+5)+(6-7-8-9)+(10+11-12-13)+……+2006"},
		{"2. Calculate the value of each item 2-3-4+5=0",
		"2.计算每项的值 2-3-4+5=0"},
		{"3. How many items are there in total (2006-201)/4=501... 1",
		"3.共有多少项 (2006-1)/4=501……1"},
		{"4. Combine the second and first steps by 1+(501 * 0)+...+2006=2007",
		"4.把第二步和第一步联合 1+(501*0)+……+2006=2007"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P64 例三巩固 分数分组计算"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算1+2-3-4+5+6-7-8-9+10+11-12-13+……+2006"));
	ColPrintf(PrintfCol::方法, Lang("1.每六项为一个周期，每一个周期带一个括号 1+(2-3-4+5)+(6-7-8-9)+(10+11-12-13)+……+2006"));
	ColPrintf(PrintfCol::方法, Lang("2.计算每项的值 2-3-4+5=0"));
	ColPrintf(PrintfCol::方法, Lang("3.共有多少项 (2006-1)/4=501……1"));
	ColPrintf(PrintfCol::方法, Lang("4.把第二步和第一步联合 1+(501*0)+……+2006=2007"));
}
void P64_5()
{
	LanguageLib::LanguageTableT Language = {
		{"","P64 例四巩固 分数分组计算"},
	};
}