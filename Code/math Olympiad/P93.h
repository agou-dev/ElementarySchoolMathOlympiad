#pragma once
void P93_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P93 case one factor multiple","P93 例一 因数倍数"},
		{"Title: If you write down all the factors of 12, you will find that except for 1 and 12, the largest factor is three times the smallest factor. If there is a number n that is 15 times the maximum and minimum factors except for 1 and n, what are the n that satisfies it",
		"题目：如果你写出12的所有因数，你会发现除了1和12，那么最大的因数是最小的因数的3倍。现有一个数n，除了1和n以外，最大的因数和最小的因数的15倍，那么满足的n有那些"},
		{"1. Let's first verify the characteristics of 12 in the question: the factors of 12 are: 1, 2, 3, 4, 6, 12. Here, the factors need to be written in pairs: 1 * 12, 2 * 6, 3 * 4, satisfying 2 * 6, so they are correct",
		"1.我们先来验证题目中12的特性：12的因数有：1，2，3，4，6，12，这里因数需要成对的写：1*12，2*6，3*4，满足的有2*6，所以是对的"},
		{"2. Because we divide by 1 and n, we exclude 1 as the first factor. The problem requires the smallest prime factor, so even prime numbers have only one 2, and the smallest odd prime number has only one 3. When factoring, we also need the smallest prime factor",
		"2.因为除1和n，所以第一个排除掉1，因为题目要求的是最小的因数，那么偶数的质数只有一个2，最小的奇数的质数也只有一个3，质因数分解时也要最小的质因数"},
		{"3. It happens that n needs to be decomposed into multiple smallest prime factors, so the smallest ones can only be 2 and 3",
		"3.恰好需要分解n，分解成多个最小的质因数，所以最小的只能是2和3"},
		{"4.So the first scenario is 2: 2 * (2 * 15)=2 * 30=60",
		"4.所以现看第一种情况是2的:2*(2*15)=2*30=60"},
		{"5.So the second scenario is 3: 3 * (3 * 15)=3 * 45=135",
		"5.所以现看第二种情况是3的:3*(3*15)=3*45=135"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P93 例一 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：如果你写出12的所有因数，你会发现除了1和12，那么最大的因数是最小的因数的3倍。现有一个数n，除了1和n以外，最大的因数和最小的因数的15倍，那么满足的n有那些"));
	ColPrintf(PrintfCol::方法, Lang("1.我们先来验证题目中12的特性：12的因数有：1，2，3，4，6，12，这里因数需要成对的写：1*12，2*6，3*4，满足的有2*6，所以是对的"));
	ColPrintf(PrintfCol::方法, Lang("2.因为除1和n，所以第一个排除掉1，因为题目要求的是最小的因数，那么偶数的质数只有一个2，最小的奇数的质数也只有一个3，质因数分解时也要最小的质因数"));
	ColPrintf(PrintfCol::方法, Lang("3.恰好需要分解n，分解成多个最小的质因数，所以最小的只能是2和3"));
	ColPrintf(PrintfCol::方法, Lang("4.所以现看第一种情况是2的:2*(2*15)=2*30=60"));
	ColPrintf(PrintfCol::方法, Lang("5.所以现看第二种情况是3的:3*(3*15)=3*45=135"));
}
void P93_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P93 cases with two factor multiples","P93 例二 因数倍数"},
		{"Title: There are 115 candies, 148 cookies, and 74 oranges in the kindergarten. After dividing them evenly, there are still 7 candies, 4 cookies, and 2 oranges left. How many children in the class can have at most?",
		"题目：幼儿园有115颗糖，148块饼干，橘子74个，平均分完后，还剩下7颗糖，饼干4块，橘子两个，班里的小朋友最多有多少个?"},
		{"1. Because there is surplus, these things cannot be divided by the number of people, so the number of people cannot be their factor. However, later on, we will talk about the surplus",
		"1.因为有剩余的，所以这些东西并不能被人数整除，所以人数不能是它们的因数，但是后面又说剩下的"},
		{"2. If they have surplus, it means that after distributing to these people, the remaining quantity is similar to a remainder. We have learned before that to eliminate the remainder and become a multiple, we need to start with the dividend.",
		"2,它们有剩下的，就说明分给这些人后，余下的数量，类似于余数，我们之前学过要消掉余数，成为倍数，就要从被除数入手。"},
		{"3. Because the divisor is the number of three, in order for these three to be divisible by the number of people, the remainder must be subtracted, that is, the remainder must be subtracted",
		"3.因为被除数就是三者的数量，要使这三个能被人数整除就必须把余数减掉，也就是把剩下的减去"},
		{"So the actual amount of candy distributed to these people is: 115-7=108",
		"4.那么实际分给的这些人的糖果数量就是：115-7=108"},
		{"5.So the actual number of cookies distributed to these people is: 148-4=144",
		"5.那么实际分给的这些人的饼干数量就是：148-4=144"},
		{"6.So the actual number of oranges distributed to these people is: 74-2=72",
		"6.那么实际分给的这些人的橘子数量就是：74-2=72"},
		{"7. These are numbers that can be divided by the number of people, or the common factor of these numbers is the number of people.",
		"7.这些都是能被人数整除的数，或者这些数的共因数就是人数。"},
		{"8.Since it is a common factor, it also states the maximum number of people, so the number of people is the greatest common factor of these three",
		"8.既然是公因数它又说最多有多少人，所以人数就是这三者的最大公因数"},
		{"9.Therefore, the greatest common factor of the three is (108, 144, 72)=36 people, so the maximum number of children is 36",
		"9.因此三者的最大公因数是(108,144,72)=36人，所以小朋友最多有36人"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P93 例二 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：幼儿园有115颗糖，148块饼干，橘子74个，平均分完后，还剩下7颗糖，饼干4块，橘子两个，班里的小朋友最多有多少个?"));
	ColPrintf(PrintfCol::方法, Lang("1.因为有剩余的，所以这些东西并不能被人数整除，所以人数不能是它们的因数，但是后面又说剩下的"));
	ColPrintf(PrintfCol::方法, Lang("2,它们有剩下的，就说明分给这些人后，余下的数量，类似于余数，我们之前学过要消掉余数，成为倍数，就要从被除数入手。"));
	ColPrintf(PrintfCol::方法, Lang("3.因为被除数就是三者的数量，要使这三个能被人数整除就必须把余数减掉，也就是把剩下的减去"));
	ColPrintf(PrintfCol::方法, Lang("4.那么实际分给的这些人的糖果数量就是：115-7=108"));
	ColPrintf(PrintfCol::方法, Lang("5.那么实际分给的这些人的饼干数量就是：148-4=144"));
	ColPrintf(PrintfCol::方法, Lang("6.那么实际分给的这些人的橘子数量就是：74-2=72"));
	ColPrintf(PrintfCol::方法, Lang("7.这些都是能被人数整除的数，或者这些数的共因数就是人数。"));
	ColPrintf(PrintfCol::方法, Lang("8.既然是公因数它又说最多有多少人，所以人数就是这三者的最大公因数"));
	ColPrintf(PrintfCol::方法, Lang("9.因此三者的最大公因数是(108,144,72)=36人，所以小朋友最多有36人"));
}
void P93()
{
	P93_1();
	ColPrintf(PrintfCol::方法, "");
	P93_2();
	ColPrintf(PrintfCol::方法, "");
	//P90_2_2();
	ColPrintf(PrintfCol::方法, "");
	//P91P90_3();
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
void P93_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P93();
	Lang.SetCurLanguage(LanguageLib::English);
	P93();
	ColPrintf(PrintfCol::方法, "");

}