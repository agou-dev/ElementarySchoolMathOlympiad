#pragma once
void P70_formula()
{
	LanguageLib::LanguageTableT Language = {
		{"P70 formula derivation of decimal fraction","P70 ��ʽ�Ƶ� С��������"},
		{"Set the loop section as abc",
		"��ѭ����Ϊabc"  },
		{"1. Pure cyclic decimal fraction",
		"1.��ѭ��С��������"},
		{"    1. List the equation S1 0. abc * 1000=abc. abc",
		"    1.�г�ʽ��S1 0.abc����*1000=abc.abc����"},
		{"    2.Simplify S1 to S2 0.abc��*1000-0.abc��=abc.abc-0.abc��",
		"    2.����S1�õ�S2 0.abc����*1000-0.abc����=abc.abc-0.abc����"},
		{"    3. Simplify S2 to obtain S3 0. abc... * 999=abc",
		"    3.����S2�õ�S3 0.abc����*999=abc"},
		{"    4. Simplify S3 to obtain S4 0. abc...=abc/999",
		"    4.����S3�õ�S4 0.abc����=abc/999"},
		{"2. Mixed cycle decimal fraction",
		"2.��ѭ��С��������"},
		{"    1. List the equations S1 0.a(bc����*1000=abc.bc����",
		"    1.�г�ʽ��S1 0.a(bc����*1000=abc.bc����"},
		{"    2. List the equations S2 0.a(bc����*10=a.bc����",
		"    2.�г�ʽ��S2 0.a(bc����*10=a.bc����"},
		{"    3. According to S1, S2 gets S3 0.a(bc����*1000-0.a(bc����*10=abc.bc����a.bc����",
		"    3.����S1��S2�õ�S3 0.a(bc����*1000-0.a(bc����*10=abc.bc����-a.bc����"},
		{"    4. Simplify S3 to obtain S4 0. a (bc... * 990=abc-a)",
		"    4.����S3�õ�S4 0.a(bc����*990=abc-a"},
		{"    5. Simplify S4 to obtain S5 0. abcbc...=(abc-a)/990",
		"    5.����S4�õ�S5 0.abcbc����=(abc-a)/990"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P70 ��ʽ�Ƶ� С��������"));
	ColPrintf(PrintfCol::����, Lang("��ѭ����Ϊabc"));
	ColPrintf(PrintfCol::����, Lang("1.��ѭ��С��������"));
	ColPrintf(PrintfCol::����, Lang("    1.�г�ʽ��S1 0.abc����*1000=abc.abc����"));
	ColPrintf(PrintfCol::����, Lang("    2.����S1�õ�S2 0.abc����*1000-0.abc����=abc.abc-0.abc����"));
	ColPrintf(PrintfCol::����, Lang("    3.����S2�õ�S3 0.abc����*999=abc"));
	ColPrintf(PrintfCol::����, Lang("    4.����S3�õ�S4 0.abc����=abc/999"));
	ColPrintf(PrintfCol::����, Lang("2.��ѭ��С��������"));
	ColPrintf(PrintfCol::����, Lang("    1.�г�ʽ��S1 0.a(bc����*1000=abc.bc����"));
	ColPrintf(PrintfCol::����, Lang("    2.�г�ʽ��S2 0.a(bc����*10=a.bc����"));
	ColPrintf(PrintfCol::����, Lang("    3.����S1��S2�õ�S3 0.a(bc����*1000-0.a(bc����*10=abc.bc����-a.bc����"));
	ColPrintf(PrintfCol::����, Lang("    5.����S4�õ�S5 0.abcbc����=(abc-a)/990"));
}
void P70_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P70 Example One Recurrent Decimal Problem","P70��һ ѭ��С������"},
		{"Title: Convert the following decimals to fractions of 0.7... 0.147147... 0.31818",
		"��Ŀ��������С����Ϊ���� 0.7���� 0.147147���� 0.31818����"},
		{"1. Calculate 0.7... 0.7...=0. abc...=abc/999=7/9",
		"1.����0.7���� 0.7����=0.abc����=abc/999=7/9"},
		{"2. Calculate 0.147147... 0.147147...=0. abc...=abc/999=147/999=49/333",
		"2.����0.147147���� 0.147147����=0.abc����=abc/999=147/999=49/333"},
		{"3. Calculate 0.31818... 0.31818...=(abc-a)/990=(318-3)/990=315/990=7/22",
		"3.����0.31818���� 0.31818����=(abc-a)/990=(318-3)/990=315/990=7/22"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P70��һ ѭ��С������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������С����Ϊ���� 0.7���� 0.147147���� 0.31818����"));
	ColPrintf(PrintfCol::����, Lang("1.����0.7���� 0.7����=0.abc����=abc/999=7/9"));
	ColPrintf(PrintfCol::����, Lang("2.����0.147147���� 0.147147����=0.abc����=abc/999=147/999=49/333"));
	ColPrintf(PrintfCol::����, Lang("3.����0.31818���� 0.31818����=(abc-a)/990=(318-3)/990=315/990=7/22"));
}
void P70_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P70 Example Two Loop Decimal Problem","P70���� ѭ��С������"},
		{"Title: Calculate 0.11����+0.125+0.33����+0.1666����",
		"��Ŀ������0.11����+0.125+0.33����+0.1666����"},
		{"1. Convert to a score of 1/9+1/8+1/3+15/90",
		"1.��Ϊ���� 1/9+1/8+1/3+15/90"},
		{"2. Simplify the previous step to obtain 1/9+1/8+1/3+15/90=53/72",
		"2.������һ���õ� 1/9+1/8+1/3+15/90=53/72"},
		{"3. Simplify the previous step to obtain 53/72 �� 0.736",
		"3.������һ���õ� 53/72��0.736"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P70���� ѭ��С������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������0.11����+0.125+0.33����+0.1666����"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ���� 1/9+1/8+1/3+15/90"));
	ColPrintf(PrintfCol::����, Lang("2.������һ���õ� 1/9+1/8+1/3+15/90=53/72"));
	ColPrintf(PrintfCol::����, Lang("3.������һ���õ� 53/72��0.736"));
}
void P70()
{
	P70_formula();
	ColPrintf(PrintfCol::����, "");
	P70_1();
	ColPrintf(PrintfCol::����, "");
	P70_2();
	ColPrintf(PrintfCol::����, "");
	//P69_2();
	ColPrintf(PrintfCol::����, "");
	//P69_3();
	ColPrintf(PrintfCol::����, "");
}
void P70_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P70();
	Lang.SetCurLanguage(LanguageLib::English);
	P70();
	ColPrintf(PrintfCol::����, "");

}