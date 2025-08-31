#pragma once
void P93_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P93 case one factor multiple","P93 ��һ ��������"},
		{"Title: If you write down all the factors of 12, you will find that except for 1 and 12, the largest factor is three times the smallest factor. If there is a number n that is 15 times the maximum and minimum factors except for 1 and n, what are the n that satisfies it",
		"��Ŀ�������д��12��������������ᷢ�ֳ���1��12����ô������������С��������3��������һ����n������1��n���⣬������������С��������15������ô�����n����Щ"},
		{"1. Let's first verify the characteristics of 12 in the question: the factors of 12 are: 1, 2, 3, 4, 6, 12. Here, the factors need to be written in pairs: 1 * 12, 2 * 6, 3 * 4, satisfying 2 * 6, so they are correct",
		"1.����������֤��Ŀ��12�����ԣ�12�������У�1��2��3��4��6��12������������Ҫ�ɶԵ�д��1*12��2*6��3*4���������2*6�������ǶԵ�"},
		{"2. Because we divide by 1 and n, we exclude 1 as the first factor. The problem requires the smallest prime factor, so even prime numbers have only one 2, and the smallest odd prime number has only one 3. When factoring, we also need the smallest prime factor",
		"2.��Ϊ��1��n�����Ե�һ���ų���1����Ϊ��ĿҪ�������С����������ôż��������ֻ��һ��2����С������������Ҳֻ��һ��3���������ֽ�ʱҲҪ��С��������"},
		{"3. It happens that n needs to be decomposed into multiple smallest prime factors, so the smallest ones can only be 2 and 3",
		"3.ǡ����Ҫ�ֽ�n���ֽ�ɶ����С����������������С��ֻ����2��3"},
		{"4.So the first scenario is 2: 2 * (2 * 15)=2 * 30=60",
		"4.�����ֿ���һ�������2��:2*(2*15)=2*30=60"},
		{"5.So the second scenario is 3: 3 * (3 * 15)=3 * 45=135",
		"5.�����ֿ��ڶ��������3��:3*(3*15)=3*45=135"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P93 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������д��12��������������ᷢ�ֳ���1��12����ô������������С��������3��������һ����n������1��n���⣬������������С��������15������ô�����n����Щ"));
	ColPrintf(PrintfCol::����, Lang("1.����������֤��Ŀ��12�����ԣ�12�������У�1��2��3��4��6��12������������Ҫ�ɶԵ�д��1*12��2*6��3*4���������2*6�������ǶԵ�"));
	ColPrintf(PrintfCol::����, Lang("2.��Ϊ��1��n�����Ե�һ���ų���1����Ϊ��ĿҪ�������С����������ôż��������ֻ��һ��2����С������������Ҳֻ��һ��3���������ֽ�ʱҲҪ��С��������"));
	ColPrintf(PrintfCol::����, Lang("3.ǡ����Ҫ�ֽ�n���ֽ�ɶ����С����������������С��ֻ����2��3"));
	ColPrintf(PrintfCol::����, Lang("4.�����ֿ���һ�������2��:2*(2*15)=2*30=60"));
	ColPrintf(PrintfCol::����, Lang("5.�����ֿ��ڶ��������3��:3*(3*15)=3*45=135"));
}
void P93_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P93 cases with two factor multiples","P93 ���� ��������"},
		{"Title: There are 115 candies, 148 cookies, and 74 oranges in the kindergarten. After dividing them evenly, there are still 7 candies, 4 cookies, and 2 oranges left. How many children in the class can have at most?",
		"��Ŀ���׶�԰��115���ǣ�148����ɣ�����74����ƽ������󣬻�ʣ��7���ǣ�����4�飬���������������С��������ж��ٸ�?"},
		{"1. Because there is surplus, these things cannot be divided by the number of people, so the number of people cannot be their factor. However, later on, we will talk about the surplus",
		"1.��Ϊ��ʣ��ģ�������Щ���������ܱ����������������������������ǵ����������Ǻ�����˵ʣ�µ�"},
		{"2. If they have surplus, it means that after distributing to these people, the remaining quantity is similar to a remainder. We have learned before that to eliminate the remainder and become a multiple, we need to start with the dividend.",
		"2,������ʣ�µģ���˵���ָ���Щ�˺����µ�����������������������֮ǰѧ��Ҫ������������Ϊ��������Ҫ�ӱ��������֡�"},
		{"3. Because the divisor is the number of three, in order for these three to be divisible by the number of people, the remainder must be subtracted, that is, the remainder must be subtracted",
		"3.��Ϊ�������������ߵ�������Ҫʹ�������ܱ����������ͱ��������������Ҳ���ǰ�ʣ�µļ�ȥ"},
		{"So the actual amount of candy distributed to these people is: 115-7=108",
		"4.��ôʵ�ʷָ�����Щ�˵��ǹ��������ǣ�115-7=108"},
		{"5.So the actual number of cookies distributed to these people is: 148-4=144",
		"5.��ôʵ�ʷָ�����Щ�˵ı����������ǣ�148-4=144"},
		{"6.So the actual number of oranges distributed to these people is: 74-2=72",
		"6.��ôʵ�ʷָ�����Щ�˵������������ǣ�74-2=72"},
		{"7. These are numbers that can be divided by the number of people, or the common factor of these numbers is the number of people.",
		"7.��Щ�����ܱ���������������������Щ���Ĺ���������������"},
		{"8.Since it is a common factor, it also states the maximum number of people, so the number of people is the greatest common factor of these three",
		"8.��Ȼ�ǹ���������˵����ж����ˣ������������������ߵ��������"},
		{"9.Therefore, the greatest common factor of the three is (108, 144, 72)=36 people, so the maximum number of children is 36",
		"9.������ߵ����������(108,144,72)=36�ˣ�����С���������36��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P93 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���׶�԰��115���ǣ�148����ɣ�����74����ƽ������󣬻�ʣ��7���ǣ�����4�飬���������������С��������ж��ٸ�?"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ��ʣ��ģ�������Щ���������ܱ����������������������������ǵ����������Ǻ�����˵ʣ�µ�"));
	ColPrintf(PrintfCol::����, Lang("2,������ʣ�µģ���˵���ָ���Щ�˺����µ�����������������������֮ǰѧ��Ҫ������������Ϊ��������Ҫ�ӱ��������֡�"));
	ColPrintf(PrintfCol::����, Lang("3.��Ϊ�������������ߵ�������Ҫʹ�������ܱ����������ͱ��������������Ҳ���ǰ�ʣ�µļ�ȥ"));
	ColPrintf(PrintfCol::����, Lang("4.��ôʵ�ʷָ�����Щ�˵��ǹ��������ǣ�115-7=108"));
	ColPrintf(PrintfCol::����, Lang("5.��ôʵ�ʷָ�����Щ�˵ı����������ǣ�148-4=144"));
	ColPrintf(PrintfCol::����, Lang("6.��ôʵ�ʷָ�����Щ�˵������������ǣ�74-2=72"));
	ColPrintf(PrintfCol::����, Lang("7.��Щ�����ܱ���������������������Щ���Ĺ���������������"));
	ColPrintf(PrintfCol::����, Lang("8.��Ȼ�ǹ���������˵����ж����ˣ������������������ߵ��������"));
	ColPrintf(PrintfCol::����, Lang("9.������ߵ����������(108,144,72)=36�ˣ�����С���������36��"));
}
void P93()
{
	P93_1();
	ColPrintf(PrintfCol::����, "");
	P93_2();
	ColPrintf(PrintfCol::����, "");
	//P90_2_2();
	ColPrintf(PrintfCol::����, "");
	//P91P90_3();
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
void P93_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P93();
	Lang.SetCurLanguage(LanguageLib::English);
	P93();
	ColPrintf(PrintfCol::����, "");

}