#pragma once
void P66_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P66 Example 1 Extracting Common Factors","P66 ��һ ��ȡ������"},
		{"Title: Calculate 138 * 1 (3/4)+23.3 * (2 - 75%) -175% * 38+(1+0.25) * 6 (7/10)",
		"��Ŀ������138*1(3/4)+23.3*(2-75%)-175%*38+(1+0.25)*6(7/10)"},
		{"1. Convert the score to a decimal of 138 * 1.75+23.3 * 1.25-1.75 * 38+1.25 * 6.7",
		"1.�ѷ���ת��ΪС�� 138*1.75+23.3*1.25-1.75*38+1.25*6.7"},
		{"2. Put items with the same factor together, 138 * 1.75-1.75 * 38+23.3 * 1.25+1.25 * 6.7",
		"2.����ͬ�����������һ�� 138*1.75-1.75*38+23.3*1.25+1.25*6.7"},
		{"3. Because the factor is the same, add another factor and subtract 100 * 1.75+(30 * 1.25)",
		"3.��Ϊ������ͬ��һ��������Ӽ� 100*1.75+(30*1.25)"},
		{"4. Simplify the previous step to obtain 175+37.5=212.5",
		"4.������һ���õ� 175+37.5=212.5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P66 ��һ ��ȡ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������138*1(3/4)+23.3*(2-75%)-175%*38+(1+0.25)*6(7/10)"));
	ColPrintf(PrintfCol::����, Lang("1.�ѷ���ת��ΪС�� 138*1.75+23.3*1.25-1.75*38+1.25*6.7"));
	ColPrintf(PrintfCol::����, Lang("2.����ͬ�����������һ�� 138*1.75-1.75*38+23.3*1.25+1.25*6.7"));
	ColPrintf(PrintfCol::����, Lang("3.��Ϊ������ͬ��һ��������Ӽ� 100*1.75+(30*1.25)"));
	ColPrintf(PrintfCol::����, Lang("4.������һ���õ� 175+37.5=212.5"));
}
void P66_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P66 Case 2 Extracting Common Factors","P66 ���� ��ȡ������"},
		{"Title: Calculate 999999 * 777778+33333+666666",
		"��Ŀ������999999*777778+333333+666666"},
		{"1. Convert the first term to terms of the same factor 333333 * 233333+333333+666666",
		"1.�ѵ�һ��ת��Ϊͬ�������� 333333*2333334+333333+666666"},
		{"2. Merge numbers with the same factor 333333 * 300000=999999000000",
		"2.�ϲ�ͬ�������� 333333*3000000=999999000000"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P66 ���� ��ȡ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������999999*777778+333333+666666"));
	ColPrintf(PrintfCol::����, Lang("1.�ѵ�һ��ת��Ϊͬ�������� 333333*2333334+333333+666666"));
	ColPrintf(PrintfCol::����, Lang("2.�ϲ�ͬ�������� 333333*3000000=999999000000"));
}
void P66_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P66 Case Three Extracting Common Factors","P66 ���� ��ȡ������"},
		{"Title: Calculate 9 * 17+91/17-5 * 17+45/17",
		"��Ŀ������9*17+91/17-5*17+45/17"},
		{"1. Divide the multiplication or division into a category of 9 * 17-5 * 17+91/17+45/17",
		"1.�ѳ˻���ķֳ�һ�� 9*17-5*17+91/17+45/17"},
		{"2. Merge multiply or divide multiple items (9-5) * 17+(91+45)/17",
		"2.�ѳ˻���Ķ���ϲ� (9-5)*17+(91+45)/17"},
		{"3. Simplify the previous step to obtain 4 * 17+136/17",
		"3.������һ���õ� 4*17+136/17"},
		{"4. Simplify the previous step to obtain 68+8=76",
		"4.������һ���õ� 68+8=76"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P66 ���� ��ȡ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������9*17+91/17-5*17+45/17"));
	ColPrintf(PrintfCol::����, Lang("1.�ѳ˻���ķֳ�һ�� 9*17-5*17+91/17+45/17"));
	ColPrintf(PrintfCol::����, Lang("2.�ѳ˻���Ķ���ϲ� (9-5)*17+(91+45)/17"));
	ColPrintf(PrintfCol::����, Lang("3.������һ���õ� 4*17+136/17"));
	ColPrintf(PrintfCol::����, Lang("4.������һ���õ� 68+8=76"));
}
void P66_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P66 Subtopic Extraction of Common Factors","P66 ���� ��ȡ������"},
		{"Title: Calculation of (933 * 263.2+(311 * 3) * 38.8- (622 * 1.5))+3333 * 44444-11111 * 22222",
		"��Ŀ������(933*263.2+(311*3)*38.8-(622*1.5))+33333*44444-11111*22222"},
		{"1. Calculate (933 * 263.2+933 * 38.8-933)+3333 * 44444-11111 * 22222 in parentheses",
		"1.�������ڵ���� (933*263.2+933*38.8-933)+33333*44444-11111*22222"},
		{"2. Convert the following to the same factor (933 * 263.2+933 * 38.8-933)+66666 * 22222-11111 * 22222",
		"2.�Ѻ����ת��Ϊͬ���� (933*263.2+933*38.8-933)+66666*22222-11111*22222"},
		{"3. Merge multiple multiplication or division items (933 * 301-933)+55555 * 22222",
		"3.�ѳ˻���Ķ���ϲ� (933*301-933)+55555*22222"},
		{"4. Simplify the previous step to obtain (933 * 300)+55555 * 22222",
		"4.������һ���õ� (933*300)+55555*22222"},
		{"5. Simplify the previous step to obtain 27900+111110=139010",
		"5.������һ���õ� 27900+111110=139010"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P66 ���� ��ȡ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������(933*263.2+(311*3)*38.8-(622*1.5))+33333*44444-11111*22222"));
	ColPrintf(PrintfCol::����, Lang("1.�������ڵ���� (933*263.2+933*38.8-933)+33333*44444-11111*22222"));
	ColPrintf(PrintfCol::����, Lang("2.�Ѻ����ת��Ϊͬ���� (933*263.2+933*38.8-933)+66666*22222-11111*22222"));
	ColPrintf(PrintfCol::����, Lang("3.�ѳ˻���Ķ���ϲ� (933*301-933)+55555*22222"));
	ColPrintf(PrintfCol::����, Lang("4.������һ���õ� (933*300)+55555*22222"));
	ColPrintf(PrintfCol::����, Lang("5.������һ���õ� 27900+111110=139010"));
}
void P66()
{
	P66_1();
	ColPrintf(PrintfCol::����, "");
	P66_2();
	ColPrintf(PrintfCol::����, "");
	P66_3();
	ColPrintf(PrintfCol::����, "");
	P66_4();
	ColPrintf(PrintfCol::����, "");
	//P77_5();
	ColPrintf(PrintfCol::����, "");
}
void P66_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P66();
	Lang.SetCurLanguage(LanguageLib::English);
	P66();
	ColPrintf(PrintfCol::����, "");

}