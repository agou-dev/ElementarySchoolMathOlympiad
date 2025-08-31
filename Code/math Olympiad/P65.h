#pragma once
void P65_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P65 case one substitution method","P65 ��һ ��Ԫ��"},
		{"Title: Calculation 31415926 ^ 2-31415925 * 31415927",
		"��Ŀ������31415926^2-31415925*31415927"},
		{"1. Let 31415925 be A",
		"1.��31415925ΪA"},
		{"2. Replace the set number with the original number (A+1) ^ 2-A * (A+1+1)",
		"2.��������滻ԭ������ (A+1)^2-A*(A+1+1)"},
		{"3. Expand step 2 to obtain A ^ 2+1+(2a*1)-A * (A+2)",
		"3,չ����2���õ� A^2+1+(2a*1)-A*(A+2)"},
		{"4. Expand step 3 to obtain A ^ 2+1+2a - (A ^ 2+2a)",
		"4.չ����3���õ� A^2+1+2a-(A^2+2a)"},
		{"5. Subtract the same terms to obtain A ^ 2+1+2a - (A ^ 2+2a)=1",
		"5.����ͬ������õ� A^2+1+2a-(A^2+2a)=1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P65 ��һ ��Ԫ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������31415926^2-31415925*31415927"));
	ColPrintf(PrintfCol::���� , Lang("1.��31415925ΪA"));
	ColPrintf(PrintfCol::����, Lang("2.��������滻ԭ������ (A+1)^2-A*(A+1+1)"));
	ColPrintf(PrintfCol::����, Lang("3,չ����2���õ� A^2+1+(2a*1)-A*(A+2)"));
	ColPrintf(PrintfCol::����, Lang("4.չ����3���õ� A^2+1+2a-(A^2+2a)"));
	ColPrintf(PrintfCol::����, Lang("5.����ͬ������õ� A^2+1+2a-(A^2+2a)=1"));
}
void P65_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P65 cases of binary substitution method","P65 ���� ��Ԫ��"},
		{"Title: Calculation (7.88+6.77+5.66) * (9.31+10.98+10) - (7.88+6.77+5.66+10) * (9.31+10.98)",
		"��Ŀ:����(7.88+6.77+5.66)*(9.31+10.98+10)-(7.88+6.77+5.66+10)*(9.31+10.98)"},
		{"1. Let 7.88+6.77+5.66 be a and 9.31+10.98 be b",
		"1.��7.88+6.77+5.66Ϊa��9.31+10.98Ϊb"},
		{"2. Replace the set number with the original number a * (b+10) - (a+10) * b",
		"2.��������滻ԭ������ a*(b+10)-(a+10)*b"},
		{"3.Step 2: Obtain ab+10a - (ab+10b)",
		"3.չ����2���õ� ab+10a-(ab+10b)"},
		{"4.Step 3: Simplify to obtain ab+10a-ab-10b",
		"4.�����3���õ� ab+10a-ab-10b"},
		{"5. Subtract the same terms to obtain 10a-10b=10 * ((7.88+6.77+5.66) - (9.31+10.98))=10 * 0.02=0.2",
		"5.����ͬ������õ� 10a-10b=10*((7.88+6.77+5.66)-(9.31+10.98))=10*0.02=0.2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P65 ���� ��Ԫ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:����(7.88+6.77+5.66)*(9.31+10.98+10)-(7.88+6.77+5.66+10)*(9.31+10.98)"));
	ColPrintf(PrintfCol::����, Lang("1.��7.88+6.77+5.66Ϊa��9.31+10.98Ϊb"));
	ColPrintf(PrintfCol::����, Lang("2.��������滻ԭ������ a*(b+10)-(a+10)*b"));
	ColPrintf(PrintfCol::����, Lang("3.չ����2���õ� ab+10a-(ab+10b)"));
	ColPrintf(PrintfCol::����, Lang("4.�����3���õ� ab+10a-ab-10b"));
	ColPrintf(PrintfCol::����, Lang("5.����ͬ������õ� 10a-10b=10*((7.88+6.77+5.66)-(9.31+10.98))=10*0.02=0.2"));
}
void P65_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P65 cases of triple substitution method","P65 ���� ��Ԫ��"},
		{"Title: Calculation (1+0.45+0.56) * (0.45+0.56+0.67) - (1+0.45+0.56+0.67)*(0.45+0.56)",
		"��Ŀ������(1+0.45+0.56)*(0.45+0.56+0.67)-(1+0.45+0.56+0.67)*(0.45+0.56)"},
		{"1. Let 0.45+0.56 be a",
		"1.��0.45+0.56Ϊa"},
		{"2.Replace the set number with the original number��1+a��*��a+0.67��-��a+1+0.67��*a",
		"2.��������滻ԭ������(1+a)*(a+0.67)-(a+1+0.67)*a"},
		{"3. Unfold the two terms a+0.67+a ^ 2+0.67a - (a ^ 2+a+0.67a)",
		"3.������չ�� a+0.67+a^2+0.67a-(a^2+a+0.67a)"},
		{"4.Step 3: Simplify to obtain a+0.67+a ^ 2+0.67a-a ^ 2-a-0.67a",
		"4.�����3���õ� a+0.67+a^2+0.67a-a^2-a-0.67a"},
		{"5. Subtract the same term to obtain a+0.67+a ^ 2+0.67a-a ^ 2-a-0.67a=0.67",
		"5.����ͬ������õ� a+0.67+a^2+0.67a-a^2-a-0.67a=0.67"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P65 ���� ��Ԫ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������(1+0.45+0.56)*(0.45+0.56+0.67)-(1+0.45+0.56+0.67)*(0.45+0.56)"));
	ColPrintf(PrintfCol::����, Lang("1.��0.45+0.56Ϊa"));
	ColPrintf(PrintfCol::����, Lang("2.��������滻ԭ������(1+a)*(a+0.67)-(a+1+0.67)*a"));
	ColPrintf(PrintfCol::����, Lang("3.������չ�� a+0.67+a^2+0.67a-(a^2+a+0.67a)"));
	ColPrintf(PrintfCol::����, Lang("4.�����3���õ� a+0.67+a^2+0.67a-a^2-a-0.67a"));
	ColPrintf(PrintfCol::����, Lang("5.����ͬ������õ� a+0.67+a^2+0.67a-a^2-a-0.67a=0.67"));
}
void P65_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P65 cases of four substitution method","P65 ���� ��Ԫ��"},
		{"Title: Calculation (1+(1/2)+(1/3)+(1/4)) * ((1/2)+(1/3)+(1/4)+(1/5)) - (1+(1/2)+(1/3)+(1/4)+(1/5)) * ((1/2)+(1/3)+(1/4))",
		"��Ŀ������(1+(1/2)+(1/3)+(1/4))*((1/2)+(1/3)+(1/4)+(1/5))-(1+(1/2)+(1/3)+(1/4)+(1/5))*((1/2)+(1/3)+(1/4))"},
		{"1. Let (1/2)+(1/3)+(1/4) be a",
		"1.��(1/2)+(1/3)+(1/4)Ϊa"},
		{"2. Replace the set number with the original number (a+1) * (a+(1/5)) - (a+(1/5)+1) * a",
		"2.��������滻ԭ������ (a+1)*(a+(1/5))-(a+(1/5)+1)*a"},
		{"3. Expand the two terms into a ^ 2+1/5a+a+1/5- (a ^ 2+(1/5) a+a)",
		"3.������չ�� a^2+1/5a+a+1/5-(a^2+(1/5)a+a)"},
		{"4.Step 3: Simplify to obtain a ^ 2+1/5a+a+1/5-a ^ 2- (1/5) a-a",
		"4.�����3���õ� a^2+1/5a+a+1/5-a^2-(1/5)a-a"},
		{"5. Subtract the same terms to obtain a ^ 2+1/5a+a+1/5-a ^ 2- (1/5) a-a=1/5 (a-b)=1/5 * 1=1/5",
		"5.����ͬ������õ� a^2+1/5a+a+1/5-a^2-(1/5)a-a=1/5(a-b)=1/5*1=1/5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P65 ���� ��Ԫ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������(1+(1/2)+(1/3)+(1/4))*((1/2)+(1/3)+(1/4)+(1/5))-(1+(1/2)+(1/3)+(1/4)+(1/5))*((1/2)+(1/3)+(1/4))"));
	ColPrintf(PrintfCol::����, Lang("1.��(1/2)+(1/3)+(1/4)Ϊa"));
	ColPrintf(PrintfCol::����, Lang("2.��������滻ԭ������ (a+1)*(a+(1/5))-(a+(1/5)+1)*a"));
	ColPrintf(PrintfCol::����, Lang("3.������չ�� a^2+1/5a+a+1/5-(a^2+(1/5)a+a)"));
	ColPrintf(PrintfCol::����, Lang("4.�����3���õ� a^2+1/5a+a+1/5-a^2-(1/5)a-a"));
	ColPrintf(PrintfCol::����, Lang("5.����ͬ������õ� a^2+1/5a+a+1/5-a^2-(1/5)a-a=1/5(a-b)=1/5*1=1/5"));
}
void P65_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P65 case five substitution method","P65 ���� ��Ԫ��"},
		{"Title: Calculation (1+(1/2)+(1/3)+...+1/2007) * ((1/2)+(1/3)+...+1/2008) - (1+(1/2)+(1/3)+...+1/2008) * ((1/2)+(1/3)+...+1/2007)",
		"��Ŀ:����(1+(1/2)+(1/3)+����+1/2007)*((1/2)+(1/3)+����+1/2008)-(1+(1/2)+(1/3)+����+1/2008)*((1/2)+(1/3)+����+1/2007)"},
		{"1. Let (1/2)+(1/3)+...+1/2007 be a",
		"1.��(1/2)+(1/3)+����+1/2007Ϊa"},
		{"2. Replace the set number with the original number (1+a) * (a+(1/2008)) - (1+a+1/2008) * a",
		"2.��������滻ԭ������ (1+a)*(a+(1/2008))-(1+a+1/2008)*a"},
		{"3. Unfold the two terms (a+1/2008+a ^ 2+(1/2008) * a) - (a+a ^ 2+(1/2008) * a)",
		"3.������չ�� (a+1/2008+a^2+(1/2008)*a)-(a+a^2+(1/2008)*a)"},
		{"4.Step 3 of simplification yields (a+1/2008+a ^ 2+(1/2008) * a) - a-a ^ 2- (1/2008) * a",
		"4.�����3���õ� (a+1/2008+a^2+(1/2008)*a)-a-a^2-(1/2008)*a"},
		{"5. Subtract the same terms to obtain a ^ 2+1/5a+a+1/5-a ^ 2- (1/5) a-a=1/5 (a-b)=1/5 * 1=1/5",
		"5.����ͬ������õ� (a+1/2008+a^2+(1/2008)*a)-a-a^2-(1/2008)*a=1/2008"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P65 ���� ��Ԫ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:����(1+(1/2)+(1/3)+����+1/2007)*((1/2)+(1/3)+����+1/2008)-(1+(1/2)+(1/3)+����+1/2008)*((1/2)+(1/3)+����+1/2007)"));
	ColPrintf(PrintfCol::����, Lang("1.��(1/2)+(1/3)+����+1/2007Ϊa"));
	ColPrintf(PrintfCol::����, Lang("2.��������滻ԭ������ (1+a)*(a+(1/2008))-(1+a+1/2008)*a"));
	ColPrintf(PrintfCol::����, Lang("3.������չ�� (a+1/2008+a^2+(1/2008)*a)-(a+a^2+(1/2008)*a)"));
	ColPrintf(PrintfCol::����, Lang("4.�����3���õ� (a+1/2008+a^2+(1/2008)*a)-a-a^2-(1/2008)*a"));
	ColPrintf(PrintfCol::����, Lang("5.����ͬ������õ� (a+1/2008+a^2+(1/2008)*a)-a-a^2-(1/2008)*a=1/2008"));
}
void P65()
{
	P65_1();
	ColPrintf(PrintfCol::����, "");
	P65_2();
	ColPrintf(PrintfCol::����, "");
	P65_3();
	ColPrintf(PrintfCol::����, "");
	P65_4();
	ColPrintf(PrintfCol::����, "");
	P65_5();
	ColPrintf(PrintfCol::����, "");
}
void P65_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P65();
	Lang.SetCurLanguage(LanguageLib::English);
	P65();
	ColPrintf(PrintfCol::����, "");

}