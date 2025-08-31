#pragma once
void P97_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P97 Example One Remainder Problem","P97 例一 余数问题"},
		{"Question: What is the remainder of dividing the sum of 2 ^ 2003 and 2003 ^ 2 by 7?",
		"题目：2^2003与2003^2的和除以7的余数是多少?"},
		{"1.We all know that the remainder is separated from the divisor, so we can first calculate the remainder of the two, then add them together to obtain the final remainder",
		"1.我们都知道余数是从被除数中分离出来的，所以我们可以先计算出两者的余数，然后相加，得到最后的余数"},
		{"2. It is still difficult to calculate the remainders of two numbers separately, so we need to find the rules of their remainders in order to calculate them",
		"2.分别计算两个数的余数还是很困难，所以我们需要寻找它们余数的规律才能算出"},
		{"3. First calculate 2 ^ 1/7... 2, then calculate 2 ^ 2/7... 4, then calculate 2 ^ 3/7... 1, and then cycle back to 2 ^ 4/7... 2",
		"3.先算2^1/7……2，然后算2^2/7……4，然后算2^3/7……1，又轮回到2^4/7……2"},
		{"4. We know the law of remainder, so we can directly calculate the remainder: 2003/3... 2",
		"4.我们知道余数的规律，所以就可以直接算出余数：2003/3……2"},
		{"But this is not the final answer, it should be reincarnation to the second one, and the remainder is",
		"5.但这不是最终的答案，应该是轮回到第二个，余数就是4"},
		{"6. Let's find the remainder of 2003 ^ 2 and write it in this form: 2003 * 2003.",
		"6.我们再求2003^2的余数，写成这种形式：2003*2003。"},
		{"7. We will calculate the remainders separately, because the divisors should be multiplied together, so the remainders should also be multiplied: 2003/7... 1, 1 * 1=1",
		"7.我们再分别计算余数，因为被除数相乘，所以余数也应该相乘：2003/7……1，1*1=1"},
		{"8.So the remainder should be 4+1=5",
		"8.所以余数应该是4+1=5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P97 例一 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：2^2003与2003^2的和除以7的余数是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.我们都知道余数是从被除数中分离出来的，所以我们可以先计算出两者的余数，然后相加，得到最后的余数"));
	ColPrintf(PrintfCol::方法, Lang("2.分别计算两个数的余数还是很困难，所以我们需要寻找它们余数的规律才能算出"));
	ColPrintf(PrintfCol::方法, Lang("3.先算2^1/7……2，然后算2^2/7……4，然后算2^3/7……1，又轮回到2^4/7……2"));
	ColPrintf(PrintfCol::方法, Lang("4.我们知道余数的规律，所以就可以直接算出余数：2003/3……2"));
	ColPrintf(PrintfCol::方法, Lang("5.但这不是最终的答案，应该是轮回到第二个，余数就是4"));
	ColPrintf(PrintfCol::方法, Lang("6.我们再求2003^2的余数，写成这种形式：2003*2003。"));
	ColPrintf(PrintfCol::方法, Lang("7.我们再分别计算余数，因为被除数相乘，所以余数也应该相乘：2003/7……1，1*1=1"));
	ColPrintf(PrintfCol::方法, Lang("8.所以余数应该是4+1=5"));
}
void P97_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P97 Example of Two Remainder Problem","P97 例二 余数问题"},
		{"Title: Today is Thursday, what day of the week is after 10 ^ 1000",
		"题目：今天是星期4，10^1000后是星期几"},
		{"1. Since the start is on Thursday, the period we calculate should also match the start time, and then we should still search for patterns",
		"1.因为起始是星期4，所以我们计算的周期也要符合起始的时间，然后还是寻找规律"},
		{"2. Start with small numbers: 10 ^ 1/7... 3, then continue to calculate 10 ^ 2/7... 2, and then continue to calculate 10 ^ 3/7... 6",
		"2.先从小的数入手：10^1/7……3，然后继续算10^2/7……2，然后继续算10^3/7……6"},
		{"3. Continue to search for patterns: 10 ^ 4/7... 4, then continue to calculate 10 ^ 5/7... 5, then continue to calculate 10 ^ 6/7... 1, and then continue to calculate 10 ^ 7/7... 3",
		"3.继续寻找规律：10^4/7……4，然后继续算10^5/7……5，然后继续算10^6/7……1，然后继续算10^7/7……3"},
		{"4. This indicates that there are 6 cycles per cycle, and then there is a power of 1000. After 1000 cycles, what is the power",
		"4.这说明是6个一个循环，然后有1000次方，1000次之后是几"},
		{"5. So after 1000 iterations, it's 1000/6... 4, which means it stays on 4, the fourth one on each loop, and the remainder is 4",
		"5.那么1000次后就是1000/6……4，就是在4上停留，每个循环上的第4个，余数就是4"},
		{"6. Therefore, after 10 ^ 1000, it will be Thursday",
		"6.因此10^1000后是星期四"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P97 例二 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：今天是星期4，10^1000后是星期几"));
	ColPrintf(PrintfCol::方法, Lang("1.因为起始是星期4，所以我们计算的周期也要符合起始的时间，然后还是寻找规律"));
	ColPrintf(PrintfCol::方法, Lang("2.先从小的数入手：10^1/7……3，然后继续算10^2/7……2，然后继续算10^3/7……6"));
	ColPrintf(PrintfCol::方法, Lang("3.继续寻找规律：10^4/7……4，然后继续算10^5/7……5，然后继续算10^6/7……1，然后继续算10^7/7……3"));
	ColPrintf(PrintfCol::方法, Lang("4.这说明是6个一个循环，然后有1000次方，1000次之后是几"));
	ColPrintf(PrintfCol::方法, Lang("5.那么1000次后就是1000/6……4，就是在4上停留，每个循环上的第4个，余数就是4"));
	ColPrintf(PrintfCol::方法, Lang("6.因此10^1000后是星期四"));
}
void P97_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P97 Example Three Remainder Problem","P97 例三 余数问题"},
		{"Title: What is an integer that is divided by 70110160 to obtain a sum of three remainders of 50",
		"题目：有一个整数用它去除以70，110，160，所得的三个余数之和是50，那么这个整数是多少"},
		{"1. First, let's list the equations. Assuming the divisor is a and the remainders are b, c, and d, then: 70/a... b",
		"1.我们首先先列好式子，设除数为a，余数分别是b，c，d那么：70/a……b"},
		{"2. Then list the formula for the second number, 110/a... c",
		"2.然后列第二个数的式子，110/a……c"},
		{"3. Then list the formula for the third number, 160/a... d",
		"3.然后列第三个数的式子，160/a……d"},
		{"4. Because we need to calculate the remainder sum, which is 50, to make the unknown variable known, we need to merge the divisors: 340/a... 50",
		"4.因为要算余数和，余数和是50，把未知数变成已知的，那么就要合并被除数：340/a……50"},
		{"5. Subtract remainder: 290/a... 0",
		"5.消掉余数：290/a……0"},
		{"6. Since we have zero left, we can directly calculate the factors of 290: 1 * 290, 2 * 145, 5 * 58, 10 * 29",
		"6.因为余0了，所以我们可以直接算290的因数：1*290，2*145，5*58，10*29"},
		{"7. Because the difference between the divisor and the dividend of 1 and 290 is very large, the remainder is naturally also very large, and we need to strike a balance",
		"7.因为除1和290的除数和被除数相差很大，余数自然也很大，要取平衡的"},
		{"8.The most balanced one is naturally 10 * 29, which is calculated one by one. 70/29... 12110/29... 23160/29... 15, so this integer is 29",
		"8.最为平衡的自然是10*29，挨个带入试算，70/29……12，110/29……23，160/29……15，所以这个整数是29"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P97 例三 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一个整数用它去除以70，110，160，所得的三个余数之和是50，那么这个整数是多少"));
	ColPrintf(PrintfCol::方法, Lang("1.我们首先先列好式子，设除数为a，余数分别是b，c，d那么：70/a……b"));
	ColPrintf(PrintfCol::方法, Lang("2.然后列第二个数的式子，110/a……c"));
	ColPrintf(PrintfCol::方法, Lang("3.然后列第三个数的式子，160/a……d"));
	ColPrintf(PrintfCol::方法, Lang("4.这说明是6个一个循环，然后有1000次方，1000次之后是几"));
	ColPrintf(PrintfCol::方法, Lang("5.消掉余数：290/a……0"));
	ColPrintf(PrintfCol::方法, Lang("6.因为余0了，所以我们可以直接算290的因数：1*290，2*145，5*58，10*29"));
	ColPrintf(PrintfCol::方法, Lang("7.因为除1和290的除数和被除数相差很大，余数自然也很大，要取平衡的"));
	ColPrintf(PrintfCol::方法, Lang("8.最为平衡的自然是10*29，挨个带入试算，70/29……12，110/29……23，160/29……15，所以这个整数是29"));
}
void P97_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P97 examples of four remainder problems","P97 例四 余数问题"},
		{"Title: Find the remainder of 478 * 296 * 351 divided by 17",
		"题目：求478*296*351除以17的余数"},
		{"1. It's still the same, because the remainder is separated from the dividend, so when multiplying the dividend, the remainder also needs to be multiplied. Or should we first calculate their remainders separately and then multiply them",
		"1.还是一样，因为余数是从被除数分离的，所以被除数相乘余数也要相乘，还是先分别求出它们的余数，然后乘积"},
		{"2. Find the remainder of 478: 478/17... 2",
		"2.求478的余数：478/17……2"},
		{"3. Find the remainder of 296: 296/17... 7",
		"3.求296的余数：296/17……7"},
		{"4. Find the remainder of 351: 351/17... 11",
		"4.求351的余数：351/17……11"},
		{"5. When multiplying the divisors, the remainder should also be multiplied: 2 * 7 * 11=154",
		"5.被除数相乘余数也要相乘：2*7*11=154"},
		{"6. Finally, there is another step to divide by 17, which is to divide the divisors and the remainder by 154/17... 1",
		"6.最后还有一个步骤除以17，被除数相除，余数也要除：154/17……1"},
		{"7.So the remainder is 1",
		"7.所以余数是1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P97 例四 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：求478*296*351除以17的余数"));
	ColPrintf(PrintfCol::方法, Lang("1.还是一样，因为余数是从被除数分离的，所以被除数相乘余数也要相乘，还是先分别求出它们的余数，然后乘积"));
	ColPrintf(PrintfCol::方法, Lang("2.求478的余数：478/17……2"));
	ColPrintf(PrintfCol::方法, Lang("3.求296的余数：296/17……7"));
	ColPrintf(PrintfCol::方法, Lang("4.求351的余数：351/17……11"));
	ColPrintf(PrintfCol::方法, Lang("5.被除数相乘余数也要相乘：2*7*11=154"));
	ColPrintf(PrintfCol::方法, Lang("6.最后还有一个步骤除以17，被除数相除，余数也要除：154/17……1"));
	ColPrintf(PrintfCol::方法, Lang("7.所以余数是1"));
}
void P97()
{
	P97_1();
	ColPrintf(PrintfCol::方法, "");
	P97_2();
	ColPrintf(PrintfCol::方法, "");
	P97_3();
	ColPrintf(PrintfCol::方法, "");
	P97_4();
	ColPrintf(PrintfCol::方法, "");
	//P89_2();
	ColPrintf(PrintfCol::方法, "");
	//P89_3();
	ColPrintf(PrintfCol::方法, "");
	//P89_4();
	ColPrintf(PrintfCol::方法, "");
	//P89_5();
	ColPrintf(PrintfCol::方法, "");
	//P73_2();
	ColPrintf(PrintfCol::方法, "");
	//P73_3();
	ColPrintf(PrintfCol::方法, "");
	//P73_4();
	ColPrintf(PrintfCol::方法, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::方法, "");
	P55_3();
	ColPrintf(PrintfCol::方法, "");*/
}
void P97_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P97();
	Lang.SetCurLanguage(LanguageLib::English);
	P97();
	ColPrintf(PrintfCol::方法, "");
}