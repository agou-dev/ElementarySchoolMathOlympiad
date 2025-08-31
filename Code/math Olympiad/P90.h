#pragma once
void P90_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P90 Example One Prime Number Problem","P90 例一 质数问题"},
		{"Title: There are three cards with numbers 1, 2, and 3 on them. Take one, two, or three cards from any of them and arrange them randomly to make them prime numbers. Write down all the prime numbers",
		"题目：有三张卡片上面的数字各是1，2，3，从中任一抽出一张，两张，三张来，任意排列起来，使它成为质数，把所有的质数写出来"},
		{"If you only draw one:",
		"如果只抽一张："},
		{"There are a total of% d sheets",
		"\n共有%d张"},
		{"If you only draw 2:",
		"如果抽2张："},
		{"Because three cards are fixed and unchanging, their sum, such as 1, 2, 3, 1+2+3=6, we have learned about the method of determining multiples of three before. The sum of each of them, if it is a multiple of three, is also a multiple of three, so there is no such thing as a three digit multiple",
		"因为三张卡片是固定不变的，它们所组成的和，比如1，2，3，1+2+3=6，我们之前学过三的倍数判断方法，它们各位之和，如果是三的倍数，它就是三的倍数，这也是三的倍数，所以三位的没有"},
		{"So there are a total of 2+3=5 sheets",
		"所以共有2+3=5张"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P90 例一 质数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：有三张卡片上面的数字各是1，2，3，从中任一抽出一张，两张，三张来，任意排列起来，使它成为质数，把所有的质数写出来"));
	ColPrintf(PrintfCol::方法, Lang("如果只抽一张："));
	int i=withinprime(3);
	ColPrintf(PrintfCol::方法, Lang("\n共有%d张"),i);
	int n=0;
	ColPrintf(PrintfCol::方法, Lang("如果抽2张："));
	i = 0;
	for (int j = 1;j <= 3;j++)
	{
		for (int k = 0;k <= 3;k++)
		{
			char p[256];
			if (j != k)
			{
				sprintf(p, "%d%d", j, k);
				sscanf(p, "%d", &n);

				bool b = prime(n);
				if (b == 1)
				{
					i++;
					printf("%d ", n);
				}
			}
			
		}
	}
	ColPrintf(PrintfCol::方法, Lang("\n共有%d张"), i);
	ColPrintf(PrintfCol::方法, Lang("因为三张卡片是固定不变的，它们所组成的和，比如1，2，3，1+2+3=6，我们之前学过三的倍数判断方法，它们各位之和，如果是三的倍数，它就是三的倍数，这也是三的倍数，所以三位的没有"));
	ColPrintf(PrintfCol::方法, Lang("所以共有2+3=5张"));
}
void P90_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P90 Example Two Prime Number Problem","P90 例二 质数问题"},
		{"Title: Given that p is a prime number and p * p+1 is also a prime number, what is the value of p * p * p * p * p+1997",
		"题目：已知p是质数，p*p+1也是质数，求p*p*p*p*p+1997=多少"},
		{"1. Because p is a prime number, our first thought is that it must be a strange book, except for 2. However, the second information is contradictory because 1 is not a prime number, so 1 * 1+1 is definitely not realistic",
		"1.因为p是一个质数，我们首先想到肯定是一个奇书，除了2，而第二个信息，却矛盾，因为1不是质数，1*1+1肯定不现实"},
		{"2. We know that p * p+1 must be an odd book, so p * p must be an even number, but odd book * odd book! =Even numbers, and even * even=even, so this prime number must be an even number, so only 2 can match",
		"2.我们知道p*p+1一定是一个奇书，所以p*p一定是一个偶数，但奇书*奇书!=偶数，而偶数*偶数==偶数，所以这个质数必定是一个偶数，所以只有2能匹配"},
		{"3. Verify that 2 * 2+1=5 is a rare book, so it is correct, p*p*p*p*p+1997=+32+1997=2029",
		"3.验证2*2+1=5，5是奇书，所以是对的，p*p*p*p*p+1997=+32+1997=2029"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P90 例二 质数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：已知p是质数，p*p+1也是质数，求p*p*p*p*p+1997=多少"));
	ColPrintf(PrintfCol::方法, Lang("1.因为p是一个质数，我们首先想到肯定是一个奇书，除了2，而第二个信息，却矛盾，因为1不是质数，1*1+1肯定不现实"));
	ColPrintf(PrintfCol::方法, Lang("2.我们知道p*p+1一定是一个奇书，所以p*p一定是一个偶数，但奇书*奇书!=偶数，而偶数*偶数==偶数，所以这个质数必定是一个偶数，所以只有2能匹配"));
	ColPrintf(PrintfCol::方法, Lang("3.验证2*2+1=5，5是奇书，所以是对的，p*p*p*p*p+1997=+32+1997=2029"));
}
void P90_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P90 Example 2 Second Small Question: Prime Number Problem","P90 例二第二小题 质数问题"},
		{"Title: If both a and b are prime numbers, and 3a+7b=41, then a+b=____",
		"题目：如果a，b都为质数，且3a+7b=41，则a+b=____"},
		{"1. Since most prime numbers are odd, we still set them as odd numbers here. 3 is an odd number, odd book * odd book=odd book, and 7 is also an odd number, so the result it gives is odd book. Odd+odd is even, but it is odd",
		"1.因为质数大多都是奇数，所以我们这里还是设为奇数，3是一个奇数，奇书*奇书=奇书，7也是一个奇数，所以它所得出的是奇书，奇数+奇数是偶数，它却是奇数"},
		{"2. There are two possibilities, one is that a is 2, and the other is that b is 2. Assuming a is 2, then 3 * 2+7 * 5=41. If b is 2, then it is an approximate value no matter how it is calculated",
		"2.这就有两种可能，一是a是2，二是b是2，先假设a是2，那么3*2+7*5=41，如果b是2，那么怎么算都是一个近似值"},
		{"So a+b=2+5=7",
		"3.所以a+b=2+5=7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P90 例二第二小题 质数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：如果a，b都为质数，且3a+7b=41，则a+b=____"));
	ColPrintf(PrintfCol::方法, Lang("1.因为质数大多都是奇数，所以我们这里还是设为奇数，3是一个奇数，奇书*奇书=奇书，7也是一个奇数，所以它所得出的是奇书，奇数+奇数是偶数，它却是奇数"));
	ColPrintf(PrintfCol::方法, Lang("2.这就有两种可能，一是a是2，二是b是2，先假设a是2，那么3*2+7*5=41，如果b是2，那么怎么算都是一个近似值"));
	ColPrintf(PrintfCol::方法, Lang("3.所以a+b=2+5=7"));
}
void P90_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P90 Example Three Prime Number Problem","P90 例三 质数问题"},
		{"Question: If p and q are both prime numbers and not the same, and p=m+n, q=n * m, then what is (p ^ p+q ^ q)/(m ^ m+n ^ n) equal to?",
		"题目：p和q都为质数，并且不相同，而p=m+n，q=n*m，那么(p^p+q^q)/(m^m+n^n)等于多少？"},
		{"1. Because prime numbers cannot be obtained by multiplying other numbers, we need a number that is 1 and a number that is itself in order to obtain them. Since the definition of p has both m and n, according to the commutative law of addition, we can set either of them as q itself",
		"1.因为质数不能由其它数相乘得到，我们需要一个数是1，一个数是它本身才能得到，因为p的定义都有m和n所以根据加法交换律，我们设哪一个为q本身都可以"},
		{"2. One is 1, so the definition of p can be changed, p=1+q， So they are adjacent, with one even and one odd, and can only be 2 and 3, p=3，q=2",
		"2.一个为1，所以p的定义就可以改变，p=1+q，所以它们是相邻的，相邻的一个偶数一个奇数，只能是2和3，p=3，q=2"},
		{"3.Next, we need to calculate (3 ^ 3+2 ^ 2)/(1 ^ 1+2 ^ 2)=31/3",
		"3.下来就要计算了 (3^3+2^2)/(1^1+2^2)=31/3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P90 例三 质数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：p和q都为质数，并且不相同，而p=m+n，q=n*m，那么(p^p+q^q)/(m^m+n^n)等于多少？"));
	ColPrintf(PrintfCol::方法, Lang("1.因为质数不能由其它数相乘得到，我们需要一个数是1，一个数是它本身才能得到，因为p的定义都有m和n所以根据加法交换律，我们设哪一个为q本身都可以"));
	ColPrintf(PrintfCol::方法, Lang("2.一个为1，所以p的定义就可以改变，p=1+q，所以它们是相邻的，相邻的一个偶数一个奇数，只能是2和3，p=3，q=2"));
	ColPrintf(PrintfCol::方法, Lang("3.下来就要计算了 (3^3+2^2)/(1^1+2^2)=31/3"));
}
void P90()
{
	P90_1();
	ColPrintf(PrintfCol::方法, "");
	P90_2();
	ColPrintf(PrintfCol::方法, "");
	P90_2_2();
	ColPrintf(PrintfCol::方法, "");
	P90_3();
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
void P90_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P90();
	Lang.SetCurLanguage(LanguageLib::English);
	P90();
	ColPrintf(PrintfCol::方法, "");

}