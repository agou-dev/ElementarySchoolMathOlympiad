#pragma once
void P95_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P95 case one factor multiple","P95 例一 因数倍数"},
		{"Title: Numbers 144，288，432，720, how many factors do they have?",
		"题目：数一数144，288，432，720，各有多少因数？"},
		{"Title: Numbers 144288, 1. Since every number can be obtained by multiplying two prime numbers, we first decompose the prime factors and divide them into two categories. Adding 1 to the number of prime factors gives us an exponent because each number has a factor of 1",
		"1.因为每一个数都可以由两个质数相乘得到，所以我们先分解质因数，把质因数分为两类，加上质因数的数量加上1，这一个指数，因为每个数的因数都有1"},
		{"2. We first decompose the prime factor of 144: 144=2 * 2 * 2 * 3 * 3, which can be written as 144=2 ^ 4 * 3 ^ 2",
		"2.我们先分解144的质因数：144=2*2*2*2*3*3得到，还可以写成144=2^4*3^2"},
		{"3. We add the exponent 1 to each term, which becomes 2 ^ 5 * 3 ^ 3. Since it is a prime factor, each of its factors can be multiplied by the prime factor and combined: 3 * 5=15 types",
		"3.我们把每一项加上指数1，就变成2^5*3^3，然后因为是质因数，所以它的每一个因数，都可以由质因数相乘得到，然后进行组合：3*5=15种"},
		{"4. We first decompose the prime factor of 288: 288=2 * 2 * 2 * 2 * 2 * 3 * 3, which can also be written as 288=2 ^ 5 * 3 ^ 2",
		"4.我们先分解288的质因数：288=2*2*2*2*2*3*3得到，还可以写成288=2^5*3^2"},
		{"5. We add the exponent 1 to each term, which becomes 2 ^ 6 * 3 ^ 3. Since it is a prime factor, each of its factors can be multiplied by the prime factor and combined: 3 * 6=18 types",
		"5.我们把每一项加上指数1，就变成2^6*3^3，然后因为是质因数，所以它的每一个因数，都可以由质因数相乘得到，然后进行组合：3*6=18种"},
		{"6. We first decompose the prime factor of 432: 432=2 * 2 * 2 * 3 * 3 * 3, which can be written as 432=2 ^ 4 * 3 ^ 3",
		"6.我们先分解432的质因数：432=2*2*2*2*3*3*3得到，还可以写成432=2^4*3^3"},
		{"7. We add the exponent 1 to each term, which becomes 2 ^ 5 * 3 ^ 4. Since it is a prime factor, each of its factors can be multiplied by the prime factor and combined: 4 * 5=20 types",
		"7.我们把每一项加上指数1，就变成2^5*3^4，然后因为是质因数，所以它的每一个因数，都可以由质因数相乘得到，然后进行组合：4*5=20种"},
		{"8. We first decompose the prime factor of 720: 720=2 * 2 * 2 * 3 * 3 * 5, which can be written as 432=2 ^ 4 * 3 ^ 2 * 5 ^ 1",
		"8.我们先分解720的质因数：720=2*2*2*2*3*3*5得到，还可以写成432=2^4*3^2*5^1"},
		{"9. We add the exponent 1 to each term, which becomes 2 ^ 5 * 3 ^ 3 * 5 ^ 2. Since it is a prime factor, each of its factors can be multiplied by the prime factor and combined: 5 * 3 * 2=30 types",
		"9.我们把每一项加上指数1，就变成2^5*3^3*5^2，然后因为是质因数，所以它的每一个因数，都可以由质因数相乘得到，然后进行组合：5*3*2=30种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P95 例一 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：数一数144，288，432，720，各有多少因数？"));
	ColPrintf(PrintfCol::方法, Lang("1.因为每一个数都可以由两个质数相乘得到，所以我们先分解质因数，把质因数分为两类，加上质因数的数量加上1，这一个指数，因为每个数的因数都有1"));
	ColPrintf(PrintfCol::方法, Lang("2.我们先分解144的质因数：144=2*2*2*2*3*3得到，还可以写成144=2^4*3^2"));
	ColPrintf(PrintfCol::方法, Lang("3.我们把每一项加上指数1，就变成2^5*3^3，然后因为是质因数，所以它的每一个因数，都可以由质因数相乘得到，然后进行组合：3*5=15种"));
	ColPrintf(PrintfCol::方法, Lang("4.我们先分解288的质因数：288=2*2*2*2*2*3*3得到，还可以写成288=2^5*3^2"));
	ColPrintf(PrintfCol::方法, Lang("5.我们把每一项加上指数1，就变成2^6*3^3，然后因为是质因数，所以它的每一个因数，都可以由质因数相乘得到，然后进行组合：3*6=18种"));
	ColPrintf(PrintfCol::方法, Lang("6.我们先分解432的质因数：432=2*2*2*2*3*3*3得到，还可以写成432=2^4*3^3"));
	ColPrintf(PrintfCol::方法, Lang("7.我们把每一项加上指数1，就变成2^5*3^4，然后因为是质因数，所以它的每一个因数，都可以由质因数相乘得到，然后进行组合：4*5=20种"));
	ColPrintf(PrintfCol::方法, Lang("8.我们先分解720的质因数：720=2*2*2*2*3*3*5得到，还可以写成432=2^4*3^2*5^1"));
	ColPrintf(PrintfCol::方法, Lang("9.我们把每一项加上指数1，就变成2^5*3^3*5^2，然后因为是质因数，所以它的每一个因数，都可以由质因数相乘得到，然后进行组合：5*3*2=30种"));
}
void P95_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P95 cases with two factor multiples","P95 例二 因数倍数"},
		{"Question: A two digit number has 6 factors, and the sum of the smallest three factors of this number is 10. What is this number.",
		"题目：一个两位数有6个因数，且这个数的最小的三个因数的和是10，那么这个数是几。"},
		{"1. Let's first look at the second condition, because currently only the second condition can be used, which is that the sum of the smallest three factors is 10. It should be noted that it is the minimum factor. If it is not the minimum factor, then this number must contain the minimum factor",
		"1.我们先看第二个条件，因为现在只有第二个条件可以用，就是最小的三个因数的和是10，要注意的是最小因数，如果不是最小因数，那么这个数肯定包含最小因数"},
		{"2. The smallest three factors, of which there must be one, 1 is definite, and it depends on the last two",
		"2.最小的三个因数，其中肯定有一，1是确定的，下来就要看后面两个了"},
		{"3.The smallest one is 1, so the second one must be 2, and the last one is 10-1-2=7, so 10=1+2+7",
		"3.最小的一个是1，那么第2个肯定就是2，最后一个就是10-1-2=7，所以10=1+2+7"},
		{"4. The smallest one is 1, so the second one has 3, and the last one is 10-1-3=6, so 10=1+3+6. However, the factors of 6 also have 2 and 3. With these two factors, 6 cannot be turned, so this one is excluded",
		"4.最小的一个是1，那么第2个还有就是3，最后一个就是10-1-3=6，所以10=1+3+6，但6的因数还有2和3，这两个，有这两个，那么6就轮不到了，所以这一个排除"},
		{"5. The smallest one is 1, so the second one has 4, and the last one is 10-1-4=5, so 10=1+4+5. However, there is still a factor of 2 for 4. If there is this one, then 4 will not be included, so this one is excluded",
		"5.最小的一个是1，那么第2个还有就是4，最后一个就是10-1-4=5，所以10=1+4+5，但4的因数还有2，有这一个，那么4就轮不到了，所以这一个排除"},
		{"6. The rest is basically like this, because the later it is, the less it turns, only the one that matches 10=1+2+7",
		"6.后面的基本都是这样，因为越是后面的，越是轮不到，只有10=1+2+7这一个符合"},
		{"7.So we can enumerate all numbers that are multiples of 2 and 7, and then determine based on the first condition, the sum factor, and finally 98",
		"7.那么我们就可以枚举所有是2和7的倍数的数，然后根据第一个条件，和因数，判断，最后是98"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P95 例二 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个两位数有6个因数，且这个数的最小的三个因数的和是10，那么这个数是几。"));
	ColPrintf(PrintfCol::方法, Lang("1.我们先看第二个条件，因为现在只有第二个条件可以用，就是最小的三个因数的和是10，要注意的是最小因数，如果不是最小因数，那么这个数肯定包含最小因数"));
	ColPrintf(PrintfCol::方法, Lang("2.最小的三个因数，其中肯定有一，1是确定的，下来就要看后面两个了"));
	ColPrintf(PrintfCol::方法, Lang("3.最小的一个是1，那么第2个肯定就是2，最后一个就是10-1-2=7，所以10=1+2+7"));
	ColPrintf(PrintfCol::方法, Lang("4.最小的一个是1，那么第2个还有就是3，最后一个就是10-1-3=6，所以10=1+3+6，但6的因数还有2和3，这两个，有这两个，那么6就轮不到了，所以这一个排除"));
	ColPrintf(PrintfCol::方法, Lang("5.最小的一个是1，那么第2个还有就是4，最后一个就是10-1-4=5，所以10=1+4+5，但4的因数还有2，有这一个，那么4就轮不到了，所以这一个排除"));
	ColPrintf(PrintfCol::方法, Lang("6.后面的基本都是这样，因为越是后面的，越是轮不到，只有10=1+2+7这一个符合"));
	ColPrintf(PrintfCol::方法, Lang("7.那么我们就可以枚举所有是2和7的倍数的数，然后根据第一个条件，和因数，判断，最后是98"));
}
void P95_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P95 cases with three factor multiples","P95 例三 因数倍数"},
		{"Question: How many numbers in 1 to 100 have 6 factors?",
		"题目：在1到100中，有6个因数的数有多少个?"},
		{"%d",
		"%d,"},
		{"There are a total of% d",
		"一共有%d个"},
		{"1 to 100 contains 6 factors",
		"1到100含有6个因数"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P95 例三 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：在1到100中，有6个因数的数有多少个?"));
	int count = 0;
	int Nencount = 0;
	int i = 1;
	int j = 1;
	for (i = 1;i <= 100;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 6)
		{
			ColPrintf(PrintfCol::方法, Lang("%d"),i);
			Nencount++;
		}
		count = 0;
	}
	ColPrintf(PrintfCol::方法, Lang("一共有%d个"), Nencount);
}
void P95()
{
	P95_1();
	ColPrintf(PrintfCol::方法, "");
	P95_2();
	ColPrintf(PrintfCol::方法, "");
	P95_3();
	ColPrintf(PrintfCol::方法, "");
	//P94_4();
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
void P95_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P95();
	Lang.SetCurLanguage(LanguageLib::English);
	P95();
	ColPrintf(PrintfCol::方法, "");

}