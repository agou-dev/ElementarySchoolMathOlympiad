#pragma once
void P60_formula()
{
	LanguageLib::LanguageTableT Language = {
		{"Deduction of fraction difference using P60 formula","P60 公式推导 分数裂差"},
		{"1. The crack difference formula is similar to the crack sum formula, but requires the following difference assumption (B-A)/(A * B) to take the subtracted values of each term and multiply them separately, with the same sign: B/A * B-A/A * B. Simplify each term formula to 1/A-1/B, so (B-A)/(A * B)=1/A-1/B",
		"1.裂差公式 和裂和相似 只不过要求下面的差 假设(B-A)/(A*B) 把每项相减的值拿出分别相乘，符号不变：B/A*B-A/A*B,把每项式子化简：1/A-1/B，所以(B-A)/(A*B)=1/A-1/B"},
		{"2. The splitting terms of two adjacent numbers can be obtained using the splitting formula because the difference between two adjacent numbers is 1, while the molecule is 1. Therefore, there is no need to calculate multiples of the calculated results, so the splitting formula can be directly applied: 1/(n+1) * n=1/n-1/n+1",
		"2.相邻两个数的裂项 因为相邻两个数的差是1，而分子就是一，所以裂差公式就可以得出，不用对计算的结果进行倍数的计算，所以直接套裂差公式：1/(n+1)*n=1/n-1/n+1"},
		{"3. The splitting term between two non adjacent numbers is not 1 because the difference between them is not 1. If we set the difference calculated by the formula as k, the calculation result must be divided by k or 1/k, otherwise it will be larger or smaller than the target. Therefore, the formula is: 1/(n+k) * n=(1/n-1/n+1)/k",
		"3.不相邻两个数的裂项 因为不相邻它的差不是1，而用公式计算出来的差我们设为k 则计算结果要除k，或1/k，不然比目标大或小，因此公式就是：1/(n+k)*n=(1/n-1/n+1)/k"},
		{"4. For the difference between multiple terms, first look at the formula: 1/n (n+1) (n+2). Since it is a three term term, we can use the first two and the last two as two terms. However, because there is an extra term, the calculated difference is not the true difference. The difference between two terms needs to be multiplied by 1/1, and the difference between three numbers needs to be 1/2, and so on. Therefore, 1/n (n+1) (n+2)=1/2 * (1/n (n+1) -1/(n+1) (n+2))",
		"4.多个项的裂差 先看式子：1/n(n+1)(n+2),因为是3项，我们可以前两个和后两个作为两项，又因为多出来一项所以计算出来不是真正的差，2个项的差要乘1/1，三个数的差要成1/2，以此类推，所以：1/n(n+1)(n+2)=1/2*(1/n(n+1)-1/(n+1)(n+2))"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P60 公式推导 分数裂差"));
	ColPrintf(PrintfCol::方法, Lang("1.裂差公式 和裂和相似 只不过要求下面的差 假设(B-A)/(A*B) 把每项相减的值拿出分别相乘，符号不变：B/A*B-A/A*B,把每项式子化简：1/A-1/B，所以(B-A)/(A*B)=1/A-1/B"));
	ColPrintf(PrintfCol::方法, Lang("2.相邻两个数的裂项 因为相邻两个数的差是1，而分子就是一，所以裂差公式就可以得出，不用对计算的结果进行倍数的计算，所以直接套裂差公式：1/(n+1)*n=1/n-1/n+1"));
	ColPrintf(PrintfCol::方法, Lang("3.不相邻两个数的裂项 因为不相邻它的差不是1，而用公式计算出来的差我们设为k 则计算结果要除k，或1/k，不然比目标大或小，因此公式就是：1/(n+k)*n=(1/n-1/n+1)/k"));
	ColPrintf(PrintfCol::方法, Lang("4.多个项的裂差 先看式子：1/n(n+1)(n+2),因为是3项，我们可以前两个和后两个作为两项，又因为多出来一项所以计算出来不是真正的差，2个项的差要乘1/1，三个数的差要成1/2，以此类推，所以：1/n(n+1)(n+2)=1/2*(1/n(n+1)-1/(n+1)(n+2))"));
}
void P60_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 case 4 score difference","P60 例4 分数裂差"},
		{"Title: Calculate 3/2 * 5+2/5.7+4/7 * 11+5/11 * 16+6/16 * 22+7/22 * 29+1/29",
		"题目：计算3/2*5+2/5.7+4/7*11+5/11*16+6/16*22+7/22*29+1/29"},
		{"1. Convert to differential term to obtain S1 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29",
		"1.转为裂差项得到S1 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29"},
		{"2. Offset the similar term S1 to obtain S2 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29=1/2",
		"2.抵消同类项S1得到S2 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29=1/2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P60 例4 分数裂差"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算3/2*5+2/5.7+4/7*11+5/11*16+6/16*22+7/22*29+1/29"));
	ColPrintf(PrintfCol::方法, Lang("1.转为裂差项得到S1 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29"));
	ColPrintf(PrintfCol::方法, Lang("2.抵消同类项S1得到S2 1/2-1/5+1/5-1/7+1/7-1/11+1/11-1/16+1/16-1/22+1/22-1/29+1/29=1/2"));
}
void P60_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 cases of binary score difference","P60 例5 分数裂差"},
		{"Title: Calculation: 1/3+1/15+1/35+1/63+1/99+1/143+1/195",
		"题目：计算：1/3+1/15+1/35+1/63+1/99+1/143+1/195"},
		{"1. Crack 1/1 * 3+1/3 * 5+1/5 * 7+1/7 * 9+1/9 * 11+1/11 * 13+1/13 * 15",
		"1.裂项 1/1*3+1/3*5+1/5*7+1/7*9+1/9*11+1/11*13+1/13*15"},
		{"2. Because their difference is 2, which is twice as large as 1, multiply by 1/2/2 ((1/1-1/3)+(1/3-1/5)+(1/5-1/7)+(1/7-1/9)+(1/9-1/11)+(1/11-1/13)+(1/13-1/15))",
		"2.因为它们的差都是2，比1大1倍所以乘1/2 1/2((1/1-1/3)+(1/3-1/5)+(1/5-1/7)+(1/7-1/9)+(1/9-1/11)+(1/11-1/13)+(1/13-1/15))"},
		{"3. Offset 1/2 of similar items ((1-1/15)=7/15)",
		"3.抵消同类项 1/2(1-1/15)=7/15"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P60 例5 分数裂差"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算：1/3+1/15+1/35+1/63+1/99+1/143+1/195"));
	ColPrintf(PrintfCol::方法, Lang("1.裂项 1/1*3+1/3*5+1/5*7+1/7*9+1/9*11+1/11*13+1/13*15"));
	ColPrintf(PrintfCol::方法, Lang("2.因为它们的差都是2，比1大1倍所以乘1/2 1/2((1/1-1/3)+(1/3-1/5)+(1/5-1/7)+(1/7-1/9)+(1/9-1/11)+(1/11-1/13)+(1/13-1/15))"));
	ColPrintf(PrintfCol::方法, Lang("3.抵消同类项 1/2(1-1/15)=7/15"));
}
void P60_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 Case 2 Expanded Score Gap","P60 例5拓展 分数裂差"},
		{"Title: Calculate 4/1 * 6+4/6 * 11+4/11 * 16+...+4/71 * 76+4/76 * 81",
		"题目：计算4/1*6+4/6*11+4/11*16+……+4/71*76+4/76*81"},
		{"1. Simplified formula (1/1 * 6+1/6 * 11+1/11 * 16+...+1/71 * 76+1/76 * 81)",
		"1.化简算式 (1/1*6+1/6*11+1/11*16+……+1/71*76+1/76*81)*4"},
		{"2. Due to different differences, increase the multiplier (1/1 * 6+1/6 * 11+1/11 * 16+...+1/71 * 76+1/76 * 81) * 4",
		"2.因为差不同所以增加倍数 (1/1*6+1/6*11+1/11*16+……+1/71*76+1/76*81)*4"},
		{"3. Due to different differences, the cracking difference is increased by multiples 1/5(1/1-1/6+1-1/11+1/11-1/6+...+1/71-1/76+1/76-1/81) * 4",
		"3.化成裂差因为差不同所以增加倍数 1/5(1/1-1/6+1/6-1/11+1/11-1/6+……+1/71-1/76+1/76-1/81)*4"},
		{"4. Offset similar terms to obtain 1/5 (1/1-1/81) * 4=64/81",
		"4.抵消同类项得到 1/5(1/1-1/81)*4=64/81"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P60 例5拓展 分数裂差"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算4/1*6+4/6*11+4/11*16+……+4/71*76+4/76*81"));
	ColPrintf(PrintfCol::方法, Lang("1.化简算式 (1/1*6+1/6*11+1/11*16+……+1/71*76+1/76*81)*4"));
	ColPrintf(PrintfCol::方法, Lang("2.因为差不同所以增加倍数 (1/1*6+1/6*11+1/11*16+……+1/71*76+1/76*81)*4"));
	ColPrintf(PrintfCol::方法, Lang("3.化成裂差因为差不同所以增加倍数 1/5(1/1-1/6+1/6-1/11+1/11-1/6+……+1/71-1/76+1/76-1/81)*4"));
	ColPrintf(PrintfCol::方法, Lang("4.抵消同类项得到 1/5(1/1-1/81)*4=64/81"));
}
void P60_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 Case 6 Expanded Score Gap","P60 例6 分数裂差"},
		{"Title: Calculate 2/1 * (1+2)+3/(1+2) * (1+2+3)+4/(1+2+3) * (1+2+3+4)+...+50/(1+2+3+...+49) * (1+2+3+...+50)",
		"题目：计算2/1*(1+2)+3/(1+2)*(1+2+3)+4/(1+2+3)*(1+2+3+4)+……+50/(1+2+3+……+49)*(1+2+3+……+50)"},
		{"1. Simplify equation 2/1 * 3+3/3 * 6+4/6 * 10+...+50/1225 * 1275",
		"1.化简式子 2/1*3+3/3*6+4/6*10+……+50/1225*1275"},
		{"2. List the crack difference of 1/1-1/3+1/3-1/6+1/6-1/10+...+1/1225-1/1275",
		"2.列出裂差 1/1-1/3+1/3-1/6+1/6-1/10+……+1/1225-1/1275"},
		{"3. Simplify the cancellation equation with similar terms 1-1/1275=1274/1275",
		"3.化简抵消式子同类项 1-1/1275=1274/1275"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P60 例6 分数裂差"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算2/1*(1+2)+3/(1+2)*(1+2+3)+4/(1+2+3)*(1+2+3+4)+……+50/(1+2+3+……+49)*(1+2+3+……+50)"));
	ColPrintf(PrintfCol::方法, Lang("1.化简式子 2/1*3+3/3*6+4/6*10+……+50/1225*1275"));
	ColPrintf(PrintfCol::方法, Lang("2.列出裂差 1/1-1/3+1/3-1/6+1/6-1/10+……+1/1225-1/1275"));
	ColPrintf(PrintfCol::方法, Lang("3.化简抵消式子同类项 1-1/1275=1274/1275"));
}
void P60_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P60 cases with 7 score differences","P60 例7 分数裂差"},
		{"Title: Calculate 1/3 ^ 2-1+1/5 ^ 2-1+1/7 ^ 2-1+1/9 ^ 2-1+1/11 ^ 2-1+1/13 ^ 2-1",
		"题目：计算1/3^2-1+1/5^2-1+1/7^2-1+1/9^2-1+1/11^2-1+1/13^2-1"},
		{"1. Prove the derivation of the square difference formula (a+b) (a-b)=a ^ 2+ab-ab-b ^ 2=a ^ 2-b ^ 2",
		"1.证明平方差公式推导 (a+b)(a-b)=a^2+ab-ab-b^2=a^2-b^2"},
		{"2. Enter the formula 1/4 * 2+1/6 * 4+1/6 * 8+1/8 * 10+1/10 * 12+1/12 * 14",
		"2.带入公式 1/4*2+1/6*4+1/6*8+1/8*10+1/10*12+1/12*14"},
		{"3.Step 2: Add a multiple (1/4-1/2+1/6-1/4+1/6-1/8+1/8-1/10+1/10-1/12+1/12-1/14) * 1/2",
		"3.第二步式子加上倍数 (1/4-1/2+1/6-1/4+1/6-1/8+1/8-1/10+1/10-1/12+1/12-1/14)*1/2"},
		{"4. Eliminate similar items (1/2-1/14) * 1/2=3/14",
		"4.消除同类项 (1/2-1/14)*1/2=3/14"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P60 例7 分数裂差"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算1/3^2-1+1/5^2-1+1/7^2-1+1/9^2-1+1/11^2-1+1/13^2-1"));
	ColPrintf(PrintfCol::方法, Lang("1.证明平方差公式推导 (a+b)(a-b)=a^2+ab-ab-b^2=a^2-b^2"));
	ColPrintf(PrintfCol::方法, Lang("2.带入公式 1/4*2+1/6*4+1/6*8+1/8*10+1/10*12+1/12*14"));
	ColPrintf(PrintfCol::方法, Lang("3.第二步式子加上倍数 (1/4-1/2+1/6-1/4+1/6-1/8+1/8-1/10+1/10-1/12+1/12-1/14)*1/2"));
	ColPrintf(PrintfCol::方法, Lang("4.消除同类项 (1/2-1/14)*1/2=3/14"));
}
void P60()
{
	P60_formula();
	ColPrintf(PrintfCol::方法, "");
	P60_1();
	ColPrintf(PrintfCol::方法, "");
	P60_2();
	ColPrintf(PrintfCol::方法, "");
	P60_2_1();
	ColPrintf(PrintfCol::方法, "");
	P60_3();
	ColPrintf(PrintfCol::方法, "");
	P60_4();
	ColPrintf(PrintfCol::方法, "");
}
void P60_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P60();
	Lang.SetCurLanguage(LanguageLib::English);
	P60();
	ColPrintf(PrintfCol::方法, "");

}