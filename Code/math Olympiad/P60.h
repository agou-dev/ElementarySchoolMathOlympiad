#pragma once
void P60_formula()
{
	LanguageLib::LanguageTableT Language = {
		{"Deduction of fraction difference using P60 formula","P60 ��ʽ�Ƶ� �����Ѳ�"},
		{"1. The crack difference formula is similar to the crack sum formula, but requires the following difference assumption (B-A)/(A * B) to take the subtracted values of each term and multiply them separately, with the same sign: B/A * B-A/A * B. Simplify each term formula to 1/A-1/B, so (B-A)/(A * B)=1/A-1/B",
		"1.�Ѳʽ ���Ѻ����� ֻ����Ҫ������Ĳ� ����(B-A)/(A*B) ��ÿ�������ֵ�ó��ֱ���ˣ����Ų��䣺B/A*B-A/A*B,��ÿ��ʽ�ӻ���1/A-1/B������(B-A)/(A*B)=1/A-1/B"},
		{"2. The splitting terms of two adjacent numbers can be obtained using the splitting formula because the difference between two adjacent numbers is 1, while the molecule is 1. Therefore, there is no need to calculate multiples of the calculated results, so the splitting formula can be directly applied: 1/(n+1) * n=1/n-1/n+1",
		"2.���������������� ��Ϊ�����������Ĳ���1�������Ӿ���һ�������Ѳʽ�Ϳ��Եó������öԼ���Ľ�����б����ļ��㣬����ֱ�����Ѳʽ��1/(n+1)*n=1/n-1/n+1"},
		{"3. The splitting term between two non adjacent numbers is not 1 because the difference between them is not 1. If we set the difference calculated by the formula as k, the calculation result must be divided by k or 1/k, otherwise it will be larger or smaller than the target. Therefore, the formula is: 1/(n+k) * n=(1/n-1/n+1)/k",
		"3.������������������ ��Ϊ���������Ĳ��1�����ù�ʽ��������Ĳ�������Ϊk �������Ҫ��k����1/k����Ȼ��Ŀ����С����˹�ʽ���ǣ�1/(n+k)*n=(1/n-1/n+1)/k"},
		{"4. For the difference between multiple terms, first look at the formula: 1/n (n+1) (n+2). Since it is a three term term, we can use the first two and the last two as two terms. However, because there is an extra term, the calculated difference is not the true difference. The difference between two terms needs to be multiplied by 1/1, and the difference between three numbers needs to be 1/2, and so on. Therefore, 1/n (n+1) (n+2)=1/2 * (1/n (n+1) -1/(n+1) (n+2))",
		"4.�������Ѳ� �ȿ�ʽ�ӣ�1/n(n+1)(n+2),��Ϊ��3����ǿ���ǰ�����ͺ�������Ϊ�������Ϊ�����һ�����Լ���������������Ĳ2����Ĳ�Ҫ��1/1���������Ĳ�Ҫ��1/2���Դ����ƣ����ԣ�1/n(n+1)(n+2)=1/2*(1/n(n+1)-1/(n+1)(n+2))"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P60 ��ʽ�Ƶ� �����Ѳ�"));
	ColPrintf(PrintfCol::����, Lang("1.�Ѳʽ ���Ѻ����� ֻ����Ҫ������Ĳ� ����(B-A)/(A*B) ��ÿ�������ֵ�ó��ֱ���ˣ����Ų��䣺B/A*B-A/A*B,��ÿ��ʽ�ӻ���1/A-1/B������(B-A)/(A*B)=1/A-1/B"));
	ColPrintf(PrintfCol::����, Lang("2.���������������� ��Ϊ�����������Ĳ���1�������Ӿ���һ�������Ѳʽ�Ϳ��Եó������öԼ���Ľ�����б����ļ��㣬����ֱ�����Ѳʽ��1/(n+1)*n=1/n-1/n+1"));
	ColPrintf(PrintfCol::����, Lang("3.������������������ ��Ϊ���������Ĳ��1�����ù�ʽ��������Ĳ�������Ϊk �������Ҫ��k����1/k����Ȼ��Ŀ����С����˹�ʽ���ǣ�1/(n+k)*n=(1/n-1/n+1)/k"));
	ColPrintf(PrintfCol::����, Lang("4.�������Ѳ� �ȿ�ʽ�ӣ�1/n(n+1)(n+2),��Ϊ��3����ǿ���ǰ�����ͺ�������Ϊ�������Ϊ�����һ�����Լ���������������Ĳ2����Ĳ�Ҫ��1/1���������Ĳ�Ҫ��1/2���Դ����ƣ����ԣ�1/n(n+1)(n+2)=1/2*(1/n(n+1)-1/(n+1)(n+2))"));
}
void P60_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 case 4 score difference","P60 ��4 �����Ѳ�"},
		{"Title: Calculate 3/2 * 5+2/5.7+4/7 * 11+5/11 * 16+6/16 * 22+7/22 * 29+1/29",
		"��Ŀ������3/2*5+2/5.7+4/7*11+5/11*16+6/16*22+7/22*29+1/29"},
		{"1. Convert to differential term to obtain S1 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29",
		"1.תΪ�Ѳ���õ�S1 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29"},
		{"2. Offset the similar term S1 to obtain S2 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29=1/2",
		"2.����ͬ����S1�õ�S2 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29=1/2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P60 ��4 �����Ѳ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������3/2*5+2/5.7+4/7*11+5/11*16+6/16*22+7/22*29+1/29"));
	ColPrintf(PrintfCol::����, Lang("1.תΪ�Ѳ���õ�S1 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29"));
	ColPrintf(PrintfCol::����, Lang("2.����ͬ����S1�õ�S2 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29=1/2"));
}
void P60_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 cases of binary score difference","P60 ��5 �����Ѳ�"},
		{"Title: Calculation: 1/3+1/15+1/35+1/63+1/99+1/143+1/195",
		"��Ŀ�����㣺1/3+1/15+1/35+1/63+1/99+1/143+1/195"},
		{"1. Crack 1/1 * 3+1/3 * 5+1/5 * 7+1/7 * 9+1/9 * 11+1/11 * 13+1/13 * 15",
		"1.���� 1/1*3+1/3*5+1/5*7+1/7*9+1/9*11+1/11*13+1/13*15"},
		{"2. Because their difference is 2, which is twice as large as 1, multiply by 1/2/2 ((1/1-1/3)+(1/3-1/5)+(1/5-1/7)+(1/7-1/9)+(1/9-1/11)+(1/11-1/13)+(1/13-1/15))",
		"2.��Ϊ���ǵĲ��2����1��1�����Գ�1/2 1/2((1/1-1/3)+(1/3-1/5)+(1/5-1/7)+(1/7-1/9)+(1/9-1/11)+(1/11-1/13)+(1/13-1/15))"},
		{"3. Offset 1/2 of similar items ((1-1/15)=7/15)",
		"3.����ͬ���� 1/2(1-1/15)=7/15"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P60 ��5 �����Ѳ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����㣺1/3+1/15+1/35+1/63+1/99+1/143+1/195"));
	ColPrintf(PrintfCol::����, Lang("1.���� 1/1*3+1/3*5+1/5*7+1/7*9+1/9*11+1/11*13+1/13*15"));
	ColPrintf(PrintfCol::����, Lang("2.��Ϊ���ǵĲ��2����1��1�����Գ�1/2 1/2((1/1-1/3)+(1/3-1/5)+(1/5-1/7)+(1/7-1/9)+(1/9-1/11)+(1/11-1/13)+(1/13-1/15))"));
	ColPrintf(PrintfCol::����, Lang("3.����ͬ���� 1/2(1-1/15)=7/15"));
}
void P60_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 Case 2 Expanded Score Gap","P60 ��5��չ �����Ѳ�"},
		{"Title: Calculate 4/1 * 6+4/6 * 11+4/11 * 16+...+4/71 * 76+4/76 * 81",
		"��Ŀ������4/1*6+4/6*11+4/11*16+����+4/71*76+4/76*81"},
		{"1. Simplified formula (1/1 * 6+1/6 * 11+1/11 * 16+...+1/71 * 76+1/76 * 81)",
		"1.������ʽ (1/1*6+1/6*11+1/11*16+����+1/71*76+1/76*81)*4"},
		{"2. Due to different differences, increase the multiplier (1/1 * 6+1/6 * 11+1/11 * 16+...+1/71 * 76+1/76 * 81) * 4",
		"2.��Ϊ�ͬ�������ӱ��� (1/1*6+1/6*11+1/11*16+����+1/71*76+1/76*81)*4"},
		{"3. Due to different differences, the cracking difference is increased by multiples 1/5(1/1-1/6+1-1/11+1/11-1/6+...+1/71-1/76+1/76-1/81) * 4",
		"3.�����Ѳ���Ϊ�ͬ�������ӱ��� 1/5(1/1-1/6+1/6-1/11+1/11-1/6+����+1/71-1/76+1/76-1/81)*4"},
		{"4. Offset similar terms to obtain 1/5 (1/1-1/81) * 4=64/81",
		"4.����ͬ����õ� 1/5(1/1-1/81)*4=64/81"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P60 ��5��չ �����Ѳ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������4/1*6+4/6*11+4/11*16+����+4/71*76+4/76*81"));
	ColPrintf(PrintfCol::����, Lang("1.������ʽ (1/1*6+1/6*11+1/11*16+����+1/71*76+1/76*81)*4"));
	ColPrintf(PrintfCol::����, Lang("2.��Ϊ�ͬ�������ӱ��� (1/1*6+1/6*11+1/11*16+����+1/71*76+1/76*81)*4"));
	ColPrintf(PrintfCol::����, Lang("3.�����Ѳ���Ϊ�ͬ�������ӱ��� 1/5(1/1-1/6+1/6-1/11+1/11-1/6+����+1/71-1/76+1/76-1/81)*4"));
	ColPrintf(PrintfCol::����, Lang("4.����ͬ����õ� 1/5(1/1-1/81)*4=64/81"));
}
void P60_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 Case 6 Expanded Score Gap","P60 ��6 �����Ѳ�"},
		{"Title: Calculate 2/1 * (1+2)+3/(1+2) * (1+2+3)+4/(1+2+3) * (1+2+3+4)+...+50/(1+2+3+...+49) * (1+2+3+...+50)",
		"��Ŀ������2/1*(1+2)+3/(1+2)*(1+2+3)+4/(1+2+3)*(1+2+3+4)+����+50/(1+2+3+����+49)*(1+2+3+����+50)"},
		{"1. Simplify equation 2/1 * 3+3/3 * 6+4/6 * 10+...+50/1225 * 1275",
		"1.����ʽ�� 2/1*3+3/3*6+4/6*10+����+50/1225*1275"},
		{"2. List the crack difference of 1/1-1/3+1/3-1/6+1/6-1/10+...+1/1225-1/1275",
		"2.�г��Ѳ� 1/1-1/3+1/3-1/6+1/6-1/10+����+1/1225-1/1275"},
		{"3. Simplify the cancellation equation with similar terms 1-1/1275=1274/1275",
		"3.�������ʽ��ͬ���� 1-1/1275=1274/1275"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P60 ��6 �����Ѳ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������2/1*(1+2)+3/(1+2)*(1+2+3)+4/(1+2+3)*(1+2+3+4)+����+50/(1+2+3+����+49)*(1+2+3+����+50)"));
	ColPrintf(PrintfCol::����, Lang("1.����ʽ�� 2/1*3+3/3*6+4/6*10+����+50/1225*1275"));
	ColPrintf(PrintfCol::����, Lang("2.�г��Ѳ� 1/1-1/3+1/3-1/6+1/6-1/10+����+1/1225-1/1275"));
	ColPrintf(PrintfCol::����, Lang("3.�������ʽ��ͬ���� 1-1/1275=1274/1275"));
}
void P60_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 cases with 7 score differences","P60 ��7 �����Ѳ�"},
		{"Title: Calculate 1/3 ^ 2-1+1/5 ^ 2-1+1/7 ^ 2-1+1/9 ^ 2-1+1/11 ^ 2-1+1/13 ^ 2-1",
		"��Ŀ������1/3^2-1+1/5^2-1+1/7^2-1+1/9^2-1+1/11^2-1+1/13^2-1"},
		{"1. Prove the derivation of the square difference formula (a+b) (a-b)=a ^ 2+ab-ab-b ^ 2=a ^ 2-b ^ 2",
		"1.֤��ƽ���ʽ�Ƶ� (a+b)(a-b)=a^2+ab-ab-b^2=a^2-b^2"},
		{"2. Enter the formula 1/4 * 2+1/6 * 4+1/6 * 8+1/8 * 10+1/10 * 12+1/12 * 14",
		"2.���빫ʽ 1/4*2+1/6*4+1/6*8+1/8*10+1/10*12+1/12*14"},
		{"3.Step 2: Add a multiple (1/4-1/2+1/6-1/4+1/6-1/8+1/8-1/10+1/10-1/12+1/12-1/14) * 1/2",
		"3.�ڶ���ʽ�Ӽ��ϱ��� (1/4-1/2+1/6-1/4+1/6-1/8+1/8-1/10+1/10-1/12+1/12-1/14)*1/2"},
		{"4. Eliminate similar items (1/2-1/14) * 1/2=3/14",
		"4.����ͬ���� (1/2-1/14)*1/2=3/14"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P60 ��7 �����Ѳ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������1/3^2-1+1/5^2-1+1/7^2-1+1/9^2-1+1/11^2-1+1/13^2-1"));
	ColPrintf(PrintfCol::����, Lang("1.֤��ƽ���ʽ�Ƶ� (a+b)(a-b)=a^2+ab-ab-b^2=a^2-b^2"));
	ColPrintf(PrintfCol::����, Lang("2.���빫ʽ 1/4*2+1/6*4+1/6*8+1/8*10+1/10*12+1/12*14"));
	ColPrintf(PrintfCol::����, Lang("3.�ڶ���ʽ�Ӽ��ϱ��� (1/4-1/2+1/6-1/4+1/6-1/8+1/8-1/10+1/10-1/12+1/12-1/14)*1/2"));
	ColPrintf(PrintfCol::����, Lang("4.����ͬ���� (1/2-1/14)*1/2=3/14"));
}
void P60()
{
	P60_formula();
	ColPrintf(PrintfCol::����, "");
	P60_1();
	ColPrintf(PrintfCol::����, "");
	P60_2();
	ColPrintf(PrintfCol::����, "");
	P60_2_1();
	ColPrintf(PrintfCol::����, "");
	P60_3();
	ColPrintf(PrintfCol::����, "");
	P60_4();
	ColPrintf(PrintfCol::����, "");
}
void P60_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P60();
	Lang.SetCurLanguage(LanguageLib::English);
	P60();
	ColPrintf(PrintfCol::����, "");

}