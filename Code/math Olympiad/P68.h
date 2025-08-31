#pragma once
void P68_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P68 Example 1 Remove parentheses Rounding","P68 ��һ ȥ���Ŵ���"},
		{"Title: Calculation 989+289-727+444+427-789+456+111",
		"��Ŀ������989+289-727+444+427-789+456+111"},
		{"1. Put two terms that can be converted into integers together (989-789) - (727-427)+(444+456)+(111+289)",
		"1.�������ܻ�Ϊ�����ķ���һ�� (989-789)-(727-427)+(444+456)+(111+289)"},
		{"2. Simplify the previous step to obtain 200-300+900+400",
		"2.������һ���õ� 200-300+900+400"},
		{"3. Simplify the previous step to obtain 200+900-300+400",
		"3.������һ���õ� 200+900-300+400"},
		{"4. Simplify the previous step to obtain 1100-300+400",
		"4.������һ���õ� 1100-300+400"},
		{"5. Simplify the previous step to obtain 800+400=1200",
		"5.������һ���õ� 800+400=1200"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P68 ��һ ȥ����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������989+289-727+444+427-789+456+111"));
	ColPrintf(PrintfCol::����, Lang("1.�������ܻ�Ϊ�����ķ���һ�� (989-789)-(727-427)+(444+456)+(111+289)"));
	ColPrintf(PrintfCol::����, Lang("2.������һ���õ� 200-300+900+400"));
	ColPrintf(PrintfCol::����, Lang("3.������һ���õ� 200+900-300+400"));
	ColPrintf(PrintfCol::����, Lang("4.������һ���õ� 1100-300+400"));
	ColPrintf(PrintfCol::����, Lang("5.������һ���õ� 800+400=1200"));
}
void P68_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P68 Example 2 Remove parentheses Rounding","P68 ���� ȥ���Ŵ���"},
		{"Title: Calculate 36.4- (4.76-1.87)+2.13- (3.24-23.6)",
		"��Ŀ������36.4-(4.76-1.87)+2.13-(3.24-23.6)"},
		{"1. Remove parentheses 36.4-4.76+1.87+2.13-3.24+23.6",
		"1.ȥ���� 36.4-4.76+1.87+2.13-3.24+23.6"},
		{"2. Put the two terms that can be converted into integers together (36.4+23.6) - (4.76+3.24)+(1.87+2.13)",
		"2.�������ܻ�Ϊ�����ķ���һ�� (36.4+23.6)-(4.76+3.24)+(1.87+2.13)"},
		{"3. Simplify the previous step to obtain 60- (4.76+3.24)+(1.87+2.13)",
		"3.������һ���õ� 60-(4.76+3.24)+(1.87+2.13)"},
		{"4. Simplify the previous step to obtain 60-8+(1.87+2.13)",
		"4.������һ���õ� 60-8+(1.87+2.13)"},
		{"5. Simplify the previous step to obtain 60-8+4",
		"5.������һ���õ� 60-8+4"},
		{"6. Simplify the previous step to obtain 52+4=56",
		"6.������һ���õ� 52+4=56"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P68 ���� ȥ���Ŵ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������36.4-(4.76-1.87)+2.13-(3.24-23.6)"));
	ColPrintf(PrintfCol::����, Lang("1.ȥ���� 36.4-4.76+1.87+2.13-3.24+23.6"));
	ColPrintf(PrintfCol::����, Lang("2.�������ܻ�Ϊ�����ķ���һ�� (36.4+23.6)-(4.76+3.24)+(1.87+2.13)"));
	ColPrintf(PrintfCol::����, Lang("3.������һ���õ� 60-(4.76+3.24)+(1.87+2.13)"));
	ColPrintf(PrintfCol::����, Lang("4.������һ���õ� 60-8+(1.87+2.13)"));
	ColPrintf(PrintfCol::����, Lang("5.������һ���õ� 60-8+4"));
	ColPrintf(PrintfCol::����, Lang("6.������һ���õ� 52+4=56"));
}
void P68_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P68 Example 3: Round with parentheses","P68 ���� ȥ���Ŵ���"},
		{"Title: Calculate 16/13 * 24 * 25 * 91 * 125",
		"��Ŀ������16/13*24*25*91*125"},
		{"1. Convert an integer to the product of two numbers multiplied by 2 * 8/13 * 4 * 6 * 25 * 13 * 7 * 125",
		"1.��������Ϊ��������˵Ļ� 2*8/13*4*6*25*13*7*125"},
		{"2. Put together the two terms that can be multiplied into integers 2 * (8 * 125)/13 * (4 * 25) * 6 * 13 * 7",
		"2.����������ܻ�Ϊ�����ķ���һ�� 2*(8*125)/13*(4*25)*6*13*7"},
		{"3. Simplify the previous step to obtain 2 * 1000/13 * (4 * 25) * 6 * 13 * 7",
		"3.������һ���õ� 2*1000/13*(4*25)*6*13*7"},
		{"4. Simplify the previous step to obtain 2 * 1000/13 * 100 * 6 * 13 * 7",
		"4.������һ���õ� 2*1000/13*100*6*13*7"},
		{"5. Simplify the previous step to obtain 2 * 1000 * 100 * 6 * 7",
		"5.������һ���õ� 2*1000*100*6*7"},
		{"6. Simplify the previous step to obtain 1000 * 100 * 2 * 6 * 7",
		"6.������һ���õ� 1000*100*2*6*7"},
		{"7. Simplify the previous step to obtain 100000 * 2 * 6 * 7",
		"7.������һ���õ� 100000*2*6*7"},
		{"8. Simplify the previous step to obtain 200000 * 6 * 7",
		"8.������һ���õ� 200000*6*7"},
		{"9. Simplify the previous step to obtain 1200000 * 7=8400000",
		"9.������һ���õ� 1200000*7=8400000"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P68 ���� ȥ���Ŵ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������16/13*24*25*91*125"));
	ColPrintf(PrintfCol::����, Lang("1.��������Ϊ��������˵Ļ� 2*8/13*4*6*25*13*7*125"));
	ColPrintf(PrintfCol::����, Lang("2.����������ܻ�Ϊ�����ķ���һ�� 2*(8*125)/13*(4*25)*6*13*7"));
	ColPrintf(PrintfCol::����, Lang("3.������һ���õ� 2*1000/13*(4*25)*6*13*7"));
	ColPrintf(PrintfCol::����, Lang("4.������һ���õ� 2*1000/13*100*6*13*7"));
	ColPrintf(PrintfCol::����, Lang("5.������һ���õ� 2*1000*100*6*7"));
	ColPrintf(PrintfCol::����, Lang("6.������һ���õ� 1000*100*2*6*7"));
	ColPrintf(PrintfCol::����, Lang("7.������һ���õ� 100000*2*6*7"));
	ColPrintf(PrintfCol::����, Lang("8.������һ���õ� 200000*6*7"));
	ColPrintf(PrintfCol::����, Lang("9.������һ���õ� 1200000*7=8400000"));
}
void P68()
{
	P68_1();
	ColPrintf(PrintfCol::����, "");
	P68_2();
	ColPrintf(PrintfCol::����, "");
	P68_3();
	ColPrintf(PrintfCol::����, "");
	//P68();
	ColPrintf(PrintfCol::����, "");
	//P81_5();
	ColPrintf(PrintfCol::����, "");
	//P80_3_2();
	ColPrintf(PrintfCol::����, "");
	//P80_4();
	ColPrintf(PrintfCol::����, "");
	//P66_2();
	ColPrintf(PrintfCol::����, "");
	//P66_3();
	ColPrintf(PrintfCol::����, "");
	//P66_4();
	ColPrintf(PrintfCol::����, "");
	//P77_5();
	ColPrintf(PrintfCol::����, "");
}
void P68_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P68();
	Lang.SetCurLanguage(LanguageLib::English);
	P68();
	ColPrintf(PrintfCol::����, "");

}