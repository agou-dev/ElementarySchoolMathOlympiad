#pragma once
void P62_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P62 Example 1 Clever Score Calculation","P62 ��1 ��������"},
		{"Title: Calculate 84 (4/19) * 1.375+105 (5/19) * 0.9",
		"��Ŀ������84(4/19)*1.375+105(5/19)*0.9"},
		{"1. Convert decimals to false fractions (for easy multiplication and division) 84 (4/19) * 11/8+105 (5/19) * 9/10",
		"1.��С����Ϊ�ٷ���(���ڳ˳�) 84(4/19)*11/8+105(5/19)*9/10"},
		{"2. Convert fractions into integers and add fractions in the form of (84+(4/19)) * 11/8+(105+(5/19)) * 9/10",
		"2.�Ѵ��������������ͷ�����ӵ���ʽ (84+(4/19))*11/8+(105+(5/19))*9/10"},
		{"3. Multiply each number in parentheses by the outside (84 * 11/8+11/8 * 4/19)+(105 * 9/10+9/10 * (5/19))",
		"3.�������ÿ������������� (84*11/8+11/8*4/19)+(105*9/10+9/10*(5/19))"},
		{"4.Step 3: Simplify to obtain (110+110/19)+(90+90/19)",
		"4.�����3���õ� (110+110/19)+(90+90/19��"},
		{"5. Adding integers and decimals: 200+200/19=4000/19",
		"5.�������С����� 200+200/19=4000/19"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P62 ��1 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������84(4/19)*1.375+105(5/19)*0.9"));
	ColPrintf(PrintfCol::����, Lang("1.��С����Ϊ�ٷ���(���ڳ˳�) 84(4/19)*11/8+105(5/19)*9/10"));
	ColPrintf(PrintfCol::����, Lang("2.�Ѵ��������������ͷ�����ӵ���ʽ (84+(4/19))*11/8+(105+(5/19))*9/10"));
	ColPrintf(PrintfCol::����, Lang("3.�������ÿ������������� (84*11/8+11/8*4/19)+(105*9/10+9/10*(5/19))"));
	ColPrintf(PrintfCol::����, Lang("4.�����3���õ� (110+110/19)+(90+90/19��"));
	ColPrintf(PrintfCol::����, Lang("5.�������С����� 200+200/19=4000/19"));
}
void P62_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P62 Example 2 Score Clever Calculation","P62 ��2 ��������"},
		{"Title: Calculate 53 (2/3)/(5/3)+71 (3/4)/7/4+91 (4/5)/9/5",
		"��Ŀ������53(2/3)/(5/3)+71(3/4)/7/4+91(4/5)/9/5"},
		{"1. Convert division into multiplication 53 (2/3) * (3/5)+71 (3/4) * (4/7)+91 (4/5) * (5/9)",
		"1.�ѳ������ɳ˷� 53(2/3)*(3/5)+71(3/4)*(4/7)+91(4/5)*(5/9)"},
		{"2. Convert fractions into integers and add them together in the form of (53+(2/3)) * (3/5)+(71+(3/4)) * (4/7)+(91+(4/5)) * (5/9)",
		"2.�Ѵ��������������ͷ�����ӵ���ʽ (53+(2/3))*(3/5)+(71+(3/4))*(4/7)+(91+(4/5))*(5/9)"},
		{"3. Multiply each number in parentheses by the outside (53 * (3/5)+(2/3) * (3/5))+(71 * (4/7)+(3/4) * (4/7))+(91 * (5/9)+(4/5) * (5/9))",
		"3.�������ÿ������������� (53*(3/5)+(2/3)*(3/5))+(71*(4/7)+(3/4)*(4/7))+(91*(5/9)+(4/5)*(5/9))"},
		{"4. Simplify the previous step to obtain (30+1)+(40+1)+(50+1)",
		"4.������һ���õ� (30+1)+(40+1)+(50+1)=123"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P62 ��2 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������53(2/3)/(5/3)+71(3/4)/7/4+91(4/5)/9/5"));
	ColPrintf(PrintfCol::����, Lang("1.�ѳ������ɳ˷� 53(2/3)*(3/5)+71(3/4)*(4/7)+91(4/5)*(5/9)"));
	ColPrintf(PrintfCol::����, Lang("2.�Ѵ��������������ͷ�����ӵ���ʽ (53+(2/3))*(3/5)+(71+(3/4))*(4/7)+(91+(4/5))*(5/9)"));
	ColPrintf(PrintfCol::����, Lang("3.�������ÿ������������� (53*(3/5)+(2/3)*(3/5))+(71*(4/7)+(3/4)*(4/7))+(91*(5/9)+(4/5)*(5/9))"));
	ColPrintf(PrintfCol::����, Lang("4.������һ���õ� (30+1)+(40+1)+(50+1)=123"));
}
void P62_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P62 Example 3 Score Clever Calculation","P62 ��3 ��������"},
		{"Title: Calculation 1997 (1997/1998)/1997",
		"��Ŀ������1997(1997/1998)/1997"},
		{"1. Convert fractions into integers and add fractions together (1997+(1997/1998))/1997",
		"1.�Ѵ��������������ͷ�����ӵ���ʽ (1997+(1997/1998))/1997"},
		{"2. Convert division into multiplication (1997+(1997/1998)) * (1/1997)",
		"2.�ѳ������ɳ˷� (1997+(1997/1998))*(1/1997)"},
		{"3. Multiply each number in parentheses by the outside (1997 * (1/1997)+(1997/1998) * (1/1997))",
		"3.�������ÿ������������� (1997*(1/1997)+(1997/1998)*(1/1997))"},
		{"4. Simplify the previous step to obtain (1+1/1998)=1(1/1998)",
		"4.������һ���õ� (1+1/1998)=1(1/1998)"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P62 ��3 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������1997(1997/1998)/1997"));
	ColPrintf(PrintfCol::����, Lang("1.�Ѵ��������������ͷ�����ӵ���ʽ (1997+(1997/1998))/1997"));
	ColPrintf(PrintfCol::����, Lang("2.�ѳ������ɳ˷� (1997+(1997/1998))*(1/1997)"));
	ColPrintf(PrintfCol::����, Lang("3.�������ÿ������������� (1997*(1/1997)+(1997/1998)*(1/1997))"));
	ColPrintf(PrintfCol::����, Lang("4.������һ���õ� (1+1/1998)=1(1/1998)"));
}
void P62()
{
	P62_1();
	ColPrintf(PrintfCol::����, "");
	P62_2();
	ColPrintf(PrintfCol::����, "");
	P62_3();
	ColPrintf(PrintfCol::����, "");
}
void P62_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P62();
	Lang.SetCurLanguage(LanguageLib::English);
	P62();
	ColPrintf(PrintfCol::����, "");

}