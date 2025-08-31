#pragma once
void P97_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P97 Example One Remainder Problem","P97 ��һ ��������"},
		{"Question: What is the remainder of dividing the sum of 2 ^ 2003 and 2003 ^ 2 by 7?",
		"��Ŀ��2^2003��2003^2�ĺͳ���7�������Ƕ���?"},
		{"1.We all know that the remainder is separated from the divisor, so we can first calculate the remainder of the two, then add them together to obtain the final remainder",
		"1.���Ƕ�֪�������Ǵӱ������з�������ģ��������ǿ����ȼ�������ߵ�������Ȼ����ӣ��õ���������"},
		{"2. It is still difficult to calculate the remainders of two numbers separately, so we need to find the rules of their remainders in order to calculate them",
		"2.�ֱ�������������������Ǻ����ѣ�����������ҪѰ�����������Ĺ��ɲ������"},
		{"3. First calculate 2 ^ 1/7... 2, then calculate 2 ^ 2/7... 4, then calculate 2 ^ 3/7... 1, and then cycle back to 2 ^ 4/7... 2",
		"3.����2^1/7����2��Ȼ����2^2/7����4��Ȼ����2^3/7����1�����ֻص�2^4/7����2"},
		{"4. We know the law of remainder, so we can directly calculate the remainder: 2003/3... 2",
		"4.����֪�������Ĺ��ɣ����ԾͿ���ֱ�����������2003/3����2"},
		{"But this is not the final answer, it should be reincarnation to the second one, and the remainder is",
		"5.���ⲻ�����յĴ𰸣�Ӧ�����ֻص��ڶ�������������4"},
		{"6. Let's find the remainder of 2003 ^ 2 and write it in this form: 2003 * 2003.",
		"6.��������2003^2��������д��������ʽ��2003*2003��"},
		{"7. We will calculate the remainders separately, because the divisors should be multiplied together, so the remainders should also be multiplied: 2003/7... 1, 1 * 1=1",
		"7.�����ٷֱ������������Ϊ��������ˣ���������ҲӦ����ˣ�2003/7����1��1*1=1"},
		{"8.So the remainder should be 4+1=5",
		"8.��������Ӧ����4+1=5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P97 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��2^2003��2003^2�ĺͳ���7�������Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.���Ƕ�֪�������Ǵӱ������з�������ģ��������ǿ����ȼ�������ߵ�������Ȼ����ӣ��õ���������"));
	ColPrintf(PrintfCol::����, Lang("2.�ֱ�������������������Ǻ����ѣ�����������ҪѰ�����������Ĺ��ɲ������"));
	ColPrintf(PrintfCol::����, Lang("3.����2^1/7����2��Ȼ����2^2/7����4��Ȼ����2^3/7����1�����ֻص�2^4/7����2"));
	ColPrintf(PrintfCol::����, Lang("4.����֪�������Ĺ��ɣ����ԾͿ���ֱ�����������2003/3����2"));
	ColPrintf(PrintfCol::����, Lang("5.���ⲻ�����յĴ𰸣�Ӧ�����ֻص��ڶ�������������4"));
	ColPrintf(PrintfCol::����, Lang("6.��������2003^2��������д��������ʽ��2003*2003��"));
	ColPrintf(PrintfCol::����, Lang("7.�����ٷֱ������������Ϊ��������ˣ���������ҲӦ����ˣ�2003/7����1��1*1=1"));
	ColPrintf(PrintfCol::����, Lang("8.��������Ӧ����4+1=5"));
}
void P97_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P97 Example of Two Remainder Problem","P97 ���� ��������"},
		{"Title: Today is Thursday, what day of the week is after 10 ^ 1000",
		"��Ŀ������������4��10^1000�������ڼ�"},
		{"1. Since the start is on Thursday, the period we calculate should also match the start time, and then we should still search for patterns",
		"1.��Ϊ��ʼ������4���������Ǽ��������ҲҪ������ʼ��ʱ�䣬Ȼ����Ѱ�ҹ���"},
		{"2. Start with small numbers: 10 ^ 1/7... 3, then continue to calculate 10 ^ 2/7... 2, and then continue to calculate 10 ^ 3/7... 6",
		"2.�ȴ�С�������֣�10^1/7����3��Ȼ�������10^2/7����2��Ȼ�������10^3/7����6"},
		{"3. Continue to search for patterns: 10 ^ 4/7... 4, then continue to calculate 10 ^ 5/7... 5, then continue to calculate 10 ^ 6/7... 1, and then continue to calculate 10 ^ 7/7... 3",
		"3.����Ѱ�ҹ��ɣ�10^4/7����4��Ȼ�������10^5/7����5��Ȼ�������10^6/7����1��Ȼ�������10^7/7����3"},
		{"4. This indicates that there are 6 cycles per cycle, and then there is a power of 1000. After 1000 cycles, what is the power",
		"4.��˵����6��һ��ѭ����Ȼ����1000�η���1000��֮���Ǽ�"},
		{"5. So after 1000 iterations, it's 1000/6... 4, which means it stays on 4, the fourth one on each loop, and the remainder is 4",
		"5.��ô1000�κ����1000/6����4��������4��ͣ����ÿ��ѭ���ϵĵ�4������������4"},
		{"6. Therefore, after 10 ^ 1000, it will be Thursday",
		"6.���10^1000����������"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P97 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������������4��10^1000�������ڼ�"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ��ʼ������4���������Ǽ��������ҲҪ������ʼ��ʱ�䣬Ȼ����Ѱ�ҹ���"));
	ColPrintf(PrintfCol::����, Lang("2.�ȴ�С�������֣�10^1/7����3��Ȼ�������10^2/7����2��Ȼ�������10^3/7����6"));
	ColPrintf(PrintfCol::����, Lang("3.����Ѱ�ҹ��ɣ�10^4/7����4��Ȼ�������10^5/7����5��Ȼ�������10^6/7����1��Ȼ�������10^7/7����3"));
	ColPrintf(PrintfCol::����, Lang("4.��˵����6��һ��ѭ����Ȼ����1000�η���1000��֮���Ǽ�"));
	ColPrintf(PrintfCol::����, Lang("5.��ô1000�κ����1000/6����4��������4��ͣ����ÿ��ѭ���ϵĵ�4������������4"));
	ColPrintf(PrintfCol::����, Lang("6.���10^1000����������"));
}
void P97_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P97 Example Three Remainder Problem","P97 ���� ��������"},
		{"Title: What is an integer that is divided by 70110160 to obtain a sum of three remainders of 50",
		"��Ŀ����һ����������ȥ����70��110��160�����õ���������֮����50����ô��������Ƕ���"},
		{"1. First, let's list the equations. Assuming the divisor is a and the remainders are b, c, and d, then: 70/a... b",
		"1.�����������к�ʽ�ӣ������Ϊa�������ֱ���b��c��d��ô��70/a����b"},
		{"2. Then list the formula for the second number, 110/a... c",
		"2.Ȼ���еڶ�������ʽ�ӣ�110/a����c"},
		{"3. Then list the formula for the third number, 160/a... d",
		"3.Ȼ���е���������ʽ�ӣ�160/a����d"},
		{"4. Because we need to calculate the remainder sum, which is 50, to make the unknown variable known, we need to merge the divisors: 340/a... 50",
		"4.��ΪҪ�������ͣ���������50����δ֪�������֪�ģ���ô��Ҫ�ϲ���������340/a����50"},
		{"5. Subtract remainder: 290/a... 0",
		"5.����������290/a����0"},
		{"6. Since we have zero left, we can directly calculate the factors of 290: 1 * 290, 2 * 145, 5 * 58, 10 * 29",
		"6.��Ϊ��0�ˣ��������ǿ���ֱ����290��������1*290��2*145��5*58��10*29"},
		{"7. Because the difference between the divisor and the dividend of 1 and 290 is very large, the remainder is naturally also very large, and we need to strike a balance",
		"7.��Ϊ��1��290�ĳ����ͱ��������ܴ�������ȻҲ�ܴ�Ҫȡƽ���"},
		{"8.The most balanced one is naturally 10 * 29, which is calculated one by one. 70/29... 12110/29... 23160/29... 15, so this integer is 29",
		"8.��Ϊƽ�����Ȼ��10*29�������������㣬70/29����12��110/29����23��160/29����15���������������29"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P97 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ����������ȥ����70��110��160�����õ���������֮����50����ô��������Ƕ���"));
	ColPrintf(PrintfCol::����, Lang("1.�����������к�ʽ�ӣ������Ϊa�������ֱ���b��c��d��ô��70/a����b"));
	ColPrintf(PrintfCol::����, Lang("2.Ȼ���еڶ�������ʽ�ӣ�110/a����c"));
	ColPrintf(PrintfCol::����, Lang("3.Ȼ���е���������ʽ�ӣ�160/a����d"));
	ColPrintf(PrintfCol::����, Lang("4.��˵����6��һ��ѭ����Ȼ����1000�η���1000��֮���Ǽ�"));
	ColPrintf(PrintfCol::����, Lang("5.����������290/a����0"));
	ColPrintf(PrintfCol::����, Lang("6.��Ϊ��0�ˣ��������ǿ���ֱ����290��������1*290��2*145��5*58��10*29"));
	ColPrintf(PrintfCol::����, Lang("7.��Ϊ��1��290�ĳ����ͱ��������ܴ�������ȻҲ�ܴ�Ҫȡƽ���"));
	ColPrintf(PrintfCol::����, Lang("8.��Ϊƽ�����Ȼ��10*29�������������㣬70/29����12��110/29����23��160/29����15���������������29"));
}
void P97_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P97 examples of four remainder problems","P97 ���� ��������"},
		{"Title: Find the remainder of 478 * 296 * 351 divided by 17",
		"��Ŀ����478*296*351����17������"},
		{"1. It's still the same, because the remainder is separated from the dividend, so when multiplying the dividend, the remainder also needs to be multiplied. Or should we first calculate their remainders separately and then multiply them",
		"1.����һ������Ϊ�����Ǵӱ���������ģ����Ա������������ҲҪ��ˣ������ȷֱ�������ǵ�������Ȼ��˻�"},
		{"2. Find the remainder of 478: 478/17... 2",
		"2.��478��������478/17����2"},
		{"3. Find the remainder of 296: 296/17... 7",
		"3.��296��������296/17����7"},
		{"4. Find the remainder of 351: 351/17... 11",
		"4.��351��������351/17����11"},
		{"5. When multiplying the divisors, the remainder should also be multiplied: 2 * 7 * 11=154",
		"5.�������������ҲҪ��ˣ�2*7*11=154"},
		{"6. Finally, there is another step to divide by 17, which is to divide the divisors and the remainder by 154/17... 1",
		"6.�����һ���������17�����������������ҲҪ����154/17����1"},
		{"7.So the remainder is 1",
		"7.����������1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P97 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����478*296*351����17������"));
	ColPrintf(PrintfCol::����, Lang("1.����һ������Ϊ�����Ǵӱ���������ģ����Ա������������ҲҪ��ˣ������ȷֱ�������ǵ�������Ȼ��˻�"));
	ColPrintf(PrintfCol::����, Lang("2.��478��������478/17����2"));
	ColPrintf(PrintfCol::����, Lang("3.��296��������296/17����7"));
	ColPrintf(PrintfCol::����, Lang("4.��351��������351/17����11"));
	ColPrintf(PrintfCol::����, Lang("5.�������������ҲҪ��ˣ�2*7*11=154"));
	ColPrintf(PrintfCol::����, Lang("6.�����һ���������17�����������������ҲҪ����154/17����1"));
	ColPrintf(PrintfCol::����, Lang("7.����������1"));
}
void P97()
{
	P97_1();
	ColPrintf(PrintfCol::����, "");
	P97_2();
	ColPrintf(PrintfCol::����, "");
	P97_3();
	ColPrintf(PrintfCol::����, "");
	P97_4();
	ColPrintf(PrintfCol::����, "");
	//P89_2();
	ColPrintf(PrintfCol::����, "");
	//P89_3();
	ColPrintf(PrintfCol::����, "");
	//P89_4();
	ColPrintf(PrintfCol::����, "");
	//P89_5();
	ColPrintf(PrintfCol::����, "");
	//P73_2();
	ColPrintf(PrintfCol::����, "");
	//P73_3();
	ColPrintf(PrintfCol::����, "");
	//P73_4();
	ColPrintf(PrintfCol::����, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::����, "");
	P55_3();
	ColPrintf(PrintfCol::����, "");*/
}
void P97_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P97();
	Lang.SetCurLanguage(LanguageLib::English);
	P97();
	ColPrintf(PrintfCol::����, "");
}