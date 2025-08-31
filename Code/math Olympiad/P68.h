#pragma once
void P68_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P68 Example 1 Remove parentheses Rounding","P68 例一 去括号凑整"},
		{"Title: Calculation 989+289-727+444+427-789+456+111",
		"题目：计算989+289-727+444+427-789+456+111"},
		{"1. Put two terms that can be converted into integers together (989-789) - (727-427)+(444+456)+(111+289)",
		"1.把两项能化为整数的放在一起 (989-789)-(727-427)+(444+456)+(111+289)"},
		{"2. Simplify the previous step to obtain 200-300+900+400",
		"2.化简上一步得到 200-300+900+400"},
		{"3. Simplify the previous step to obtain 200+900-300+400",
		"3.化简上一步得到 200+900-300+400"},
		{"4. Simplify the previous step to obtain 1100-300+400",
		"4.化简上一步得到 1100-300+400"},
		{"5. Simplify the previous step to obtain 800+400=1200",
		"5.化简上一步得到 800+400=1200"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P68 例一 去括号"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算989+289-727+444+427-789+456+111"));
	ColPrintf(PrintfCol::方法, Lang("1.把两项能化为整数的放在一起 (989-789)-(727-427)+(444+456)+(111+289)"));
	ColPrintf(PrintfCol::方法, Lang("2.化简上一步得到 200-300+900+400"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 200+900-300+400"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 1100-300+400"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 800+400=1200"));
}
void P68_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P68 Example 2 Remove parentheses Rounding","P68 例二 去括号凑整"},
		{"Title: Calculate 36.4- (4.76-1.87)+2.13- (3.24-23.6)",
		"题目：计算36.4-(4.76-1.87)+2.13-(3.24-23.6)"},
		{"1. Remove parentheses 36.4-4.76+1.87+2.13-3.24+23.6",
		"1.去括号 36.4-4.76+1.87+2.13-3.24+23.6"},
		{"2. Put the two terms that can be converted into integers together (36.4+23.6) - (4.76+3.24)+(1.87+2.13)",
		"2.把两项能化为整数的放在一起 (36.4+23.6)-(4.76+3.24)+(1.87+2.13)"},
		{"3. Simplify the previous step to obtain 60- (4.76+3.24)+(1.87+2.13)",
		"3.化简上一步得到 60-(4.76+3.24)+(1.87+2.13)"},
		{"4. Simplify the previous step to obtain 60-8+(1.87+2.13)",
		"4.化简上一步得到 60-8+(1.87+2.13)"},
		{"5. Simplify the previous step to obtain 60-8+4",
		"5.化简上一步得到 60-8+4"},
		{"6. Simplify the previous step to obtain 52+4=56",
		"6.化简上一步得到 52+4=56"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P68 例二 去括号凑整"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算36.4-(4.76-1.87)+2.13-(3.24-23.6)"));
	ColPrintf(PrintfCol::方法, Lang("1.去括号 36.4-4.76+1.87+2.13-3.24+23.6"));
	ColPrintf(PrintfCol::方法, Lang("2.把两项能化为整数的放在一起 (36.4+23.6)-(4.76+3.24)+(1.87+2.13)"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 60-(4.76+3.24)+(1.87+2.13)"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 60-8+(1.87+2.13)"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 60-8+4"));
	ColPrintf(PrintfCol::方法, Lang("6.化简上一步得到 52+4=56"));
}
void P68_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P68 Example 3: Round with parentheses","P68 例三 去括号凑整"},
		{"Title: Calculate 16/13 * 24 * 25 * 91 * 125",
		"题目：计算16/13*24*25*91*125"},
		{"1. Convert an integer to the product of two numbers multiplied by 2 * 8/13 * 4 * 6 * 25 * 13 * 7 * 125",
		"1.把整数化为两个数相乘的积 2*8/13*4*6*25*13*7*125"},
		{"2. Put together the two terms that can be multiplied into integers 2 * (8 * 125)/13 * (4 * 25) * 6 * 13 * 7",
		"2.把两项相乘能化为整数的放在一起 2*(8*125)/13*(4*25)*6*13*7"},
		{"3. Simplify the previous step to obtain 2 * 1000/13 * (4 * 25) * 6 * 13 * 7",
		"3.化简上一步得到 2*1000/13*(4*25)*6*13*7"},
		{"4. Simplify the previous step to obtain 2 * 1000/13 * 100 * 6 * 13 * 7",
		"4.化简上一步得到 2*1000/13*100*6*13*7"},
		{"5. Simplify the previous step to obtain 2 * 1000 * 100 * 6 * 7",
		"5.化简上一步得到 2*1000*100*6*7"},
		{"6. Simplify the previous step to obtain 1000 * 100 * 2 * 6 * 7",
		"6.化简上一步得到 1000*100*2*6*7"},
		{"7. Simplify the previous step to obtain 100000 * 2 * 6 * 7",
		"7.化简上一步得到 100000*2*6*7"},
		{"8. Simplify the previous step to obtain 200000 * 6 * 7",
		"8.化简上一步得到 200000*6*7"},
		{"9. Simplify the previous step to obtain 1200000 * 7=8400000",
		"9.化简上一步得到 1200000*7=8400000"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P68 例三 去括号凑整"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算16/13*24*25*91*125"));
	ColPrintf(PrintfCol::方法, Lang("1.把整数化为两个数相乘的积 2*8/13*4*6*25*13*7*125"));
	ColPrintf(PrintfCol::方法, Lang("2.把两项相乘能化为整数的放在一起 2*(8*125)/13*(4*25)*6*13*7"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 2*1000/13*(4*25)*6*13*7"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步得到 2*1000/13*100*6*13*7"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 2*1000*100*6*7"));
	ColPrintf(PrintfCol::方法, Lang("6.化简上一步得到 1000*100*2*6*7"));
	ColPrintf(PrintfCol::方法, Lang("7.化简上一步得到 100000*2*6*7"));
	ColPrintf(PrintfCol::方法, Lang("8.化简上一步得到 200000*6*7"));
	ColPrintf(PrintfCol::方法, Lang("9.化简上一步得到 1200000*7=8400000"));
}
void P68()
{
	P68_1();
	ColPrintf(PrintfCol::方法, "");
	P68_2();
	ColPrintf(PrintfCol::方法, "");
	P68_3();
	ColPrintf(PrintfCol::方法, "");
	//P68();
	ColPrintf(PrintfCol::方法, "");
	//P81_5();
	ColPrintf(PrintfCol::方法, "");
	//P80_3_2();
	ColPrintf(PrintfCol::方法, "");
	//P80_4();
	ColPrintf(PrintfCol::方法, "");
	//P66_2();
	ColPrintf(PrintfCol::方法, "");
	//P66_3();
	ColPrintf(PrintfCol::方法, "");
	//P66_4();
	ColPrintf(PrintfCol::方法, "");
	//P77_5();
	ColPrintf(PrintfCol::方法, "");
}
void P68_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P68();
	Lang.SetCurLanguage(LanguageLib::English);
	P68();
	ColPrintf(PrintfCol::方法, "");

}