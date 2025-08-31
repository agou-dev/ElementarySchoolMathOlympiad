#pragma once
void P91_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P91 Example One Remainder Problem","P91 例一 余数问题"},
		{"Title: Divide 1013 by a two digit number, the remainder is 12, find all two digit numbers that meet the criteria",
		"题目：1013除以一个两位数，余数是12，求出符合条件的所有两位数"},
		{"1. Because 1013 has a remainder, its factors are not the correct quotient either. Due to the interference of the remainder, the factors can only be divisible, leaving those with a remainder helpless.",
		"1.因为1013有余数，它的因数也不是正确的商，因为有余数的干扰，因数只能是被整除的，有余数的就束手无策了。"},
		{"2. So we have to remove the remainder, which comes from the divisor. If it is not completely divided and is not satisfied with the divisor, then we remove the excess and remove it from the divisor",
		"2.所以我们得把余数给去掉，余数的来源是被除数，没有被除尽，又不满除数，所以多余的就去掉，从被除数里面去"},
		{"3. Assuming that this two digit number is x, then 1013/x... 12, regardless of the quotient, can be divided by all, and there is no requirement for the quotient, but it can be calculated later",
		"3.我们假设这个两位数为x，那么1013/x……12，不管商是几，除尽就可以了，又没要求商，但商可以后面去计算"},
		{"4. After taking the dividend, it is (1013-12)/x... 0=>1001/x... 0",
		"4.从被除数取出来后就是(1013-12)/x……0=>1001/x……0"},
		{"So now we just need to find the factor of 1001, because 1001 can already be divided by these two digits",
		"5.那么现在只需要找1001的因数就可以了，因为1001已经可以被这个两位数整除"},
		{"The factors of 6.1001 are 1 * 1001, 7 * 143, 11 * 91, 13 * 77, which means 11001, 7143, 11, 91, 13, 77",
		"6.1001的因数：1*1001，7*143，11*91，13*77，也就是1，1001，7，143，11，91，13，77"},
		{"7. As the question requires two digit numbers, it is necessary to exclude some: 11, 91, 13, 77",
		"7.因为题目要求是两位数，所以要排除一些：11，91，13，77"},
		{"8. We also need one more condition, which is that the remainder must be smaller than the divisor. If the remainder is 12, then 11 is excluded",
		"8.我们还要一个条件就是余数一定比除数小，余数是12，那么11就排除"},
		{"So the two digit numbers that meet the criteria are 91, 13, and 77",
		"9.所以符合条件的两位数是91，13，77"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P91 例一 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：1013除以一个两位数，余数是12，求出符合条件的所有两位数"));
	ColPrintf(PrintfCol::方法, Lang("1.因为1013有余数，它的因数也不是正确的商，因为有余数的干扰，因数只能是被整除的，有余数的就束手无策了。"));
	ColPrintf(PrintfCol::方法, Lang("2.所以我们得把余数给去掉，余数的来源是被除数，没有被除尽，又不满除数，所以多余的就去掉，从被除数里面去"));
	ColPrintf(PrintfCol::方法, Lang("3.我们假设这个两位数为x，那么1013/x……12，不管商是几，除尽就可以了，又没要求商，但商可以后面去计算"));
	ColPrintf(PrintfCol::方法, Lang("4.从被除数取出来后就是(1013-12)/x……0=>1001/x……0"));
	ColPrintf(PrintfCol::方法, Lang("5.那么现在只需要找1001的因数就可以了，因为1001已经可以被这个两位数整除"));
	ColPrintf(PrintfCol::方法, Lang("6.1001的因数：1*1001，7*143，11*91，13*77，也就是1，1001，7，143，11，91，13，77"));
	ColPrintf(PrintfCol::方法, Lang("7.因为题目要求是两位数，所以要排除一些：11，91，13，77"));
	ColPrintf(PrintfCol::方法, Lang("8.我们还要一个条件就是余数一定比除数小，余数是12，那么11就排除"));
	ColPrintf(PrintfCol::方法, Lang("9.所以符合条件的两位数是91，13，77"));
}
void P91_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P91 Example of Two Remainder Problem","P91 例二 余数问题"},
		{"Question: What is a natural number whose quotient and remainder are equal when divided by 11, and whose quotient is three times the remainder when divided by 9?",
		"题目：一个自然数，它除以11的商和余数是相等的，除以9时商是余数的三倍，这个自然数是多少?"},
		{"1. At the beginning, let's list the equations because there are two equations with different quantities used. Therefore, let's first list the first equation. Let the dividend be y and the remainder be x, then y/11=x... x",
		"1.开始还是列出式子，因为有两个式子，且用的量都各不相同，所以我们先列第一个式子，设被除数为y，余数商都是x，那么：y/11=x……x"},
		{"2. Since the dividend is unknown, the remainder cannot be removed, so we can only simplify: y=11 * a+a=>y=12a",
		"2.因为被除数是未知的，所以余数不能去掉，所以我们只能化简：y=11*a+a=>y=12a"},
		{"3. According to the question, let's list the second equation. Assuming the dividend is y and the remainder is x, then y/9=3x... x",
		"3.根据题意我们列出第二个式子，假设被除数为y，余数是x，那么：y/9=3x……x"},
		{"4. Continue simplifying the second equation: y=9 * 3x+x=>8b",
		"4.继续把第二个式子化简：y=9*3x+x=>28b"},
		{"Since this natural number can be decomposed into 28 b's or 12 a's, then it must be the least common multiple of the two numbers, which is 84",
		"5.既然这个自然数可以分解为28个个b或12个a，那么它一定是两数的最小公倍数就是84"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P91 例二 余数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个自然数，它除以11的商和余数是相等的，除以9时商是余数的三倍，这个自然数是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.开始还是列出式子，因为有两个式子，且用的量都各不相同，所以我们先列第一个式子，设被除数为y，余数商都是x，那么：y/11=x……x"));
	ColPrintf(PrintfCol::方法, Lang("2.因为被除数是未知的，所以余数不能去掉，所以我们只能化简：y=11*a+a=>y=12a"));
	ColPrintf(PrintfCol::方法, Lang("3.根据题意我们列出第二个式子，假设被除数为y，余数是x，那么：y/9=3x……x"));
	ColPrintf(PrintfCol::方法, Lang("4.继续把第二个式子化简：y=9*3x+x=>28b"));
	ColPrintf(PrintfCol::方法, Lang("5.既然这个自然数可以分解为28个个b或12个a，那么它一定是两数的最小公倍数就是84"));
}
void P91()
{
	P91_1();
	ColPrintf(PrintfCol::方法, "");
	P91_2();
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
void P91_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P91();
	Lang.SetCurLanguage(LanguageLib::English);
	P91();
	ColPrintf(PrintfCol::方法, "");

}