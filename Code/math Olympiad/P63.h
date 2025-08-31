#pragma once
void P63_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P63 Example 4 Score Clever Calculation","P63 ��4 ��������"},
		{"Title: Calculation 2007/2007 (2007/2008)",
		"��Ŀ������2007/2007(2007/2008)"},
		{"1. Convert the latter item into a fake score 2007/((2008 * 2007+2007)/2008)",
		"1.�Ѻ�һ�Ϊ�ٷ��� 2007/((2008*2007+2007)/2008)"},
		{"2. Merge the latter molecule 2007/((2009 * 2007)/2008)",
		"2.�Ѻ�һ����Ӻϲ� 2007/((2009*2007)/2008)"},
		{"3. Replace division with multiplication 2007/(2008/(2009 * 2007))",
		"3.�ѳ�����Ϊ�˷� 2007/(2008/(2009*2007))"},
		{"4. Subtract one term from the denominator (2008/2009)",
		"4.�ѷ�ĸ�е�һ��Լ�� (2008/2009)"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P63 ��4 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������2007/2007(2007/2008)"));
	ColPrintf(PrintfCol::����, Lang("1.�Ѻ�һ�Ϊ�ٷ��� 2007/((2008*2007+2007)/2008)"));
	ColPrintf(PrintfCol::����, Lang("2.�Ѻ�һ����Ӻϲ� 2007/((2009*2007)/2008)"));
	ColPrintf(PrintfCol::����, Lang("3.�ѳ�����Ϊ�˷� 2007/(2008/(2009*2007))"));
	ColPrintf(PrintfCol::����, Lang("4.�ѷ�ĸ�е�һ��Լ�� (2008/2009)"));
}
void P63_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P63 Example 5 Score Clever Calculation","P63 ��5 ��������"},
		{"Title: Calculation (1 * 2+2 * 4+3 * 6+4 * 8)/(2 * 3+4 * 6+6 * 9+8 * 12)",
		"��Ŀ������(1*2+2*4+3*6+4*8)/(2*3+4*6+6*9+8*12)"},
		{"1. Substitute the relationship between items into (1 * 2+(1 ^ 2+2 ^ 2+3 ^ 2+4 ^ 2))/(2 * 3+(1 ^ 2+2 ^ 2+3 ^ 2+4 ^ 2))",
		"1.�������֮��Ĺ�ϵ���� (1*2+(1^2+2^2+3^2+4^2))/(2*3+(1^2+2^2+3^2+4^2))"},
		{"2. Reduce items with the same structure by (1 * 2)/(2 * 3)",
		"2.����ͬ�ṹ����Լ�� (1*2)/(2*3)"},
		{"3. Calculation, approximately divided into 2/6=1/3",
		"3.���㣬Լ�� 2/6=1/3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P63 ��5 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������(1*2+2*4+3*6+4*8)/(2*3+4*6+6*9+8*12)"));
	ColPrintf(PrintfCol::����, Lang("1.�������֮��Ĺ�ϵ���� (1*2+(1^2+2^2+3^2+4^2))/(2*3+(1^2+2^2+3^2+4^2))"));
	ColPrintf(PrintfCol::����, Lang("2.����ͬ�ṹ����Լ�� (1*2)/(2*3)"));
	ColPrintf(PrintfCol::����, Lang("3.���㣬Լ�� 2/6=1/3"));
}
void P63_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P63 Case 5 Consolidation Score Clever Calculation","P63 ��5���� ��������"},
		{"Title: Calculation (1 * 2 * 3+3 * 6 * 9+7 * 14 * 21)/(1 * 3 * 5+3 * 9 * 15+7 * 21 * 35)",
		"��Ŀ:����(1*2*3+3*6*9+7*14*21)/(1*3*5+3*9*15+7*21*35)"},
		{"1. Substitute the relationship between items into (1 * 2 * 3 * (1 ^ 3+3 ^ 3+7 ^ 3))/(1*3*5*(1^3+3^3+7^3))",
		"1.�������֮��Ĺ�ϵ���� (1*2*3*(1^3+3^3+7^3))/(1*3*5*(1^3+3^3+7^3))"},
		{"2. Reduce items with the same structure by (1 * 2 * 3)/(1 * 3 * 5)",
		"2.����ͬ�ṹ����Լ�� (1*2*3)/(1*3*5)"},
		{"3. Calculation, approximately divided into 6/15=2/5",
		"3.���㣬Լ�� 6/15=2/5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P63 ��5���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:����(1*2*3+3*6*9+7*14*21)/(1*3*5+3*9*15+7*21*35)"));
	ColPrintf(PrintfCol::����, Lang("1.�������֮��Ĺ�ϵ���� (1*2*3*(1^3+3^3+7^3))/(1*3*5*(1^3+3^3+7^3))"));
	ColPrintf(PrintfCol::����, Lang("2.����ͬ�ṹ����Լ�� (1*2*3)/(1*3*5)"));
	ColPrintf(PrintfCol::����, Lang("3.���㣬Լ�� 6/15=2/5"));
}
void P63_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P63 Case 6 Score Clever Calculation","P63 ��6 ��������"},
		{"Title: (3 (7/11)+4 (8/13)+5 (15/17))/(2/(2/11)+2 (10/11)+3 (9/17))",
		"��Ŀ��(3(7/11)+4(8/13)+5(15/17))/(2/(2/11)+2(10/11)+3(9/17))"},
		{"1. Convert fractions into fake fractions (40/11)+60/13)+100/17)/(24/11)+36/13)+60/17)",
		"1.�Ѵ�������Ϊ�ٷ��� (40/11)+60/13)+100/17))/(24/11)+36/13)+60/17))"},
		{"2. Convert the molecule into its simplest fraction of 20 * (2/11)+3/13)+5/17)/(12 * (2/11)+3/13)+5/17)",
		"2.�ѷ��ӻ�Ϊ������ 20*(2/11)+3/13)+5/17))/(12*(2/11)+3/13)+5/17)))"},
		{"3. Offset similar items by 20/12=5/3",
		"3.��ͬ������� 20/12=5/3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P63 ��6 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��(3(7/11)+4(8/13)+5(15/17))/(2/(2/11)+2(10/11)+3(9/17))"));
	ColPrintf(PrintfCol::����, Lang("1.�Ѵ�������Ϊ�ٷ��� (40/11)+60/13)+100/17))/(24/11)+36/13)+60/17))"));
	ColPrintf(PrintfCol::����, Lang("2.�ѷ��ӻ�Ϊ������ 20*(2/11)+3/13)+5/17))/(12*(2/11)+3/13)+5/17)))"));
	ColPrintf(PrintfCol::����, Lang("3.��ͬ������� 20/12=5/3"));
}
void P63_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P63 Case 7 Score Clever Calculation","P63 ��7 ��������"},
		{"Title: Calculation (8+9+10)/7- (9+10+11)/8- (10+11+12)/9- (11+12+13)/10)/1/7-1/8-1/9-1/10",
		"��Ŀ������((8+9+10)/7-(9+10+11)/8-(10+11+12)/9-(11+12+13)/10)/1/7-1/8-1/9-1/10"},
		{"1. The innermost item extracts the common factor from 3 (6/7) -3 (6/8) -3 (6/9) -3 (6/10)",
		"1.���������һ��ѹ�������ȡ 3(6/7)-3(6/8)-3(6/9)-3(6/10)"},
		{"2. Eliminate 3 and extract molecule 6 * (1/7-1/8-1/9-1/10)",
		"2.��3�����ѷ������ 6*(1/7-1/8-1/9-1/10)"},
		{"3. Substitute the second step into the original equation (6 * (1/7-1/8-1/9-1/10)/1/7-1/8-1/9-1/10)",
		"3.�ѵڶ�������ԭʽ�� (6*(1/7-1/8-1/9-1/10))/1/7-1/8-1/9-1/10"},
		{"4. Offset similar items 6",
		"4.����ͬ���� 6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P63 ��7 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������((8+9+10)/7-(9+10+11)/8-(10+11+12)/9-(11+12+13)/10)/1/7-1/8-1/9-1/10"));
	ColPrintf(PrintfCol::����, Lang("1.���������һ��ѹ�������ȡ 3(6/7)-3(6/8)-3(6/9)-3(6/10)"));
	ColPrintf(PrintfCol::����, Lang("2.��3�����ѷ������ 6*(1/7-1/8-1/9-1/10)"));
	ColPrintf(PrintfCol::����, Lang("3.�ѵڶ�������ԭʽ�� (6*(1/7-1/8-1/9-1/10))/1/7-1/8-1/9-1/10"));
	ColPrintf(PrintfCol::����, Lang("4.����ͬ���� 6"));
}
void P63_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P63 Case 8 Score Clever Calculation","P63 ��8 ��������"},
		{"Title: (1+17) * (1+(17/2)) * (1+(17/3)) * (1+(17/4) *... * (1+(17/19))",
		"��Ŀ��(1+17)*(1+(17/2))*(1+(17/3))*(1+(17/4)*����*(1+(17/19)/(1+19)*(1+(19/2))*(1+(19/3))*(1+(19/4)*����*(1+(19/17)"},
		{"1. Write the sum of integer fractions as a false fraction (18/1) * (19/2) * (20/3) * (21/4) *... * (36/19)/(19/1) * (21/2) * (22/3)) * (23/4) *... * (36/17)",
		"1.�������������д�ɼٷ��� (18/1)*(19/2)*(20/3)*(21/4)*����*(36/19)/(19/1)*(21/2)*(22/3))*(23/4)*����*(36/17)"},
		{"2. Multiply the numerator and denominator by 2, 3, 4... 19 18 * 19 * 20 * 21 *... 36/19 * 21 * 22 * 23 *... * 36",
		"2.���ӷ�ĸÿ��ֱ��2��3��4����19 18*19*20*21*����36/19*21*22*23*����*36"},
		{"3. Offset similar items 18 * 19/18 * 19=1",
		"3.����ͬ���� 18*19/18*19=1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P63 ��8 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��(1+17)*(1+(17/2))*(1+(17/3))*(1+(17/4)*����*(1+(17/19)/(1+19)*(1+(19/2))*(1+(19/3))*(1+(19/4)*����*(1+(19/17)"));
	ColPrintf(PrintfCol::����, Lang("1.�������������д�ɼٷ��� (18/1)*(19/2)*(20/3)*(21/4)*����*(36/19)/(19/1)*(21/2)*(22/3))*(23/4)*����*(36/17)"));
	ColPrintf(PrintfCol::����, Lang("2.���ӷ�ĸÿ��ֱ��2��3��4����19 18*19*20*21*����36/19*21*22*23*����*36"));
	ColPrintf(PrintfCol::����, Lang("3.����ͬ���� 18*19/18*19=1"));
}
void P63_7()
{
	LanguageLib::LanguageTableT Language = {
		{"P63 Case 9 Score Clever Calculation","P63 ��9 ��������"},
		{"Title: Calculation (1-1/2+1/3-1/4+1/5-1/6...+1/5-1/2006)/1/2008+1/2001+...+1/4012",
		"��Ŀ������(1-1/2+1/3-1/4+1/5-1/6����+1/2005-1/2006)/1/2008+1/2001+����+1/4012"},
		{"1. Transform the molecule into a plus sign, and finally subtract the even terms (1+1/2+1/3+1/4+1/5+1/6...+1/2005+1/2006) - (1/2+1/4+1/6+...+1/2006)/1/2008+1/2001+����+1/4012",
		"1.�ѷ���ȫ��Ӻţ�����ȥż���� ((1+1/2+1/3+1/4+1/5+1/6����+1/2005+1/2006)-(1/2+1/4+1/6+����+1/2006))/1/2008+1/2001+����+1/4012"},
		{"2. Convert even numbered items into half of the total number ((1+1/2+1/3+1/4+1/5+1/6...+1/2005+1/2006) - (1/1+1/2+1/3+...+1/1003))/1/2008+1/2001+...+1/4012",
		"2.��ż���Ϊ������һ�� ((1+1/2+1/3+1/4+1/5+1/6����+1/2005+1/2006)-(1/1+1/2+1/3+����+1/1003))/1/2008+1/2001+����+1/4012"},
		{"3. Convert the denominator to be the same as the numerator ((1+1/2+1/2+1/3+1/4+1/5+1/6...+1/2005+1/2006) - (1/1+1/2+1/3+...+1/1003)/(1/1+1/2+1/3+...+1/1003) * 1/2",
		"3.�ѷ�ĸ��2 ((1+1/2+1/3+1/4+1/5+1/6����+1/2005+1/2006)-(1/1+1/2+1/3+����+1/1003))/(1/1004+1/1005+����+1/2006)*1/2"},
		{"4. Convert the numerator to be the same as the denominator (1/1004+1/1005+...+1/2006)/(1/1004+1/1005+...+1/2006) * 1/2",
		"4.�ѷ��ӻ�Ϊ�ͷ�ĸһ�� ((1/1004+1/1005+����+1/2006))/(1/1004+1/1005+����+1/2006)*1/2"},
		{"5. Offset the same class and swap the numerator and denominator by 2",
		"5.����ͬ����������ӷ�ĸ���� 2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P63 ��9 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������(1-1/2+1/3-1/4+1/5-1/6����+1/2005-1/2006)/1/2008+1/2001+����+1/4012"));
	ColPrintf(PrintfCol::����, Lang("1.�ѷ���ȫ��Ӻţ�����ȥż���� ((1+1/2+1/3+1/4+1/5+1/6����+1/2005+1/2006)-(1/2+1/4+1/6+����+1/2006))/1/2008+1/2001+����+1/4012"));
	ColPrintf(PrintfCol::����, Lang("2.��ż���Ϊ������һ�� ((1+1/2+1/3+1/4+1/5+1/6����+1/2005+1/2006)-(1/1+1/2+1/3+����+1/1003))/1/2008+1/2001+����+1/4012"));
	ColPrintf(PrintfCol::����, Lang("3.�ѷ�ĸ��2 ((1+1/2+1/3+1/4+1/5+1/6����+1/2005+1/2006)-(1/1+1/2+1/3+����+1/1003))/(1/1004+1/1005+����+1/2006)*1/2"));
	ColPrintf(PrintfCol::����, Lang("4.�ѷ��ӻ�Ϊ�ͷ�ĸһ�� ((1/1004+1/1005+����+1/2006))/(1/1004+1/1005+����+1/2006)*1/2"));
	ColPrintf(PrintfCol::����, Lang("5.����ͬ����������ӷ�ĸ���� 2"));
}
void P63()
{
	P63_1();
	ColPrintf(PrintfCol::����, "");
	P63_2();
	ColPrintf(PrintfCol::����, "");
	P63_3();
	ColPrintf(PrintfCol::����, "");
	P63_4();
	ColPrintf(PrintfCol::����, "");
	P63_5();
	ColPrintf(PrintfCol::����, "");
	P63_6();
	ColPrintf(PrintfCol::����, "");
	P63_7();
	ColPrintf(PrintfCol::����, "");
}
void P63_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P63();
	Lang.SetCurLanguage(LanguageLib::English);
	P63();
	ColPrintf(PrintfCol::����, "");
}