#pragma once
void P90_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P90 Example One Prime Number Problem","P90 ��һ ��������"},
		{"Title: There are three cards with numbers 1, 2, and 3 on them. Take one, two, or three cards from any of them and arrange them randomly to make them prime numbers. Write down all the prime numbers",
		"��Ŀ�������ſ�Ƭ��������ָ���1��2��3��������һ���һ�ţ����ţ�����������������������ʹ����Ϊ�����������е�����д����"},
		{"If you only draw one:",
		"���ֻ��һ�ţ�"},
		{"There are a total of% d sheets",
		"\n����%d��"},
		{"If you only draw 2:",
		"�����2�ţ�"},
		{"Because three cards are fixed and unchanging, their sum, such as 1, 2, 3, 1+2+3=6, we have learned about the method of determining multiples of three before. The sum of each of them, if it is a multiple of three, is also a multiple of three, so there is no such thing as a three digit multiple",
		"��Ϊ���ſ�Ƭ�ǹ̶�����ģ���������ɵĺͣ�����1��2��3��1+2+3=6������֮ǰѧ�����ı����жϷ��������Ǹ�λ֮�ͣ���������ı��������������ı�������Ҳ�����ı�����������λ��û��"},
		{"So there are a total of 2+3=5 sheets",
		"���Թ���2+3=5��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P90 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������ſ�Ƭ��������ָ���1��2��3��������һ���һ�ţ����ţ�����������������������ʹ����Ϊ�����������е�����д����"));
	ColPrintf(PrintfCol::����, Lang("���ֻ��һ�ţ�"));
	int i=withinprime(3);
	ColPrintf(PrintfCol::����, Lang("\n����%d��"),i);
	int n=0;
	ColPrintf(PrintfCol::����, Lang("�����2�ţ�"));
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
	ColPrintf(PrintfCol::����, Lang("\n����%d��"), i);
	ColPrintf(PrintfCol::����, Lang("��Ϊ���ſ�Ƭ�ǹ̶�����ģ���������ɵĺͣ�����1��2��3��1+2+3=6������֮ǰѧ�����ı����жϷ��������Ǹ�λ֮�ͣ���������ı��������������ı�������Ҳ�����ı�����������λ��û��"));
	ColPrintf(PrintfCol::����, Lang("���Թ���2+3=5��"));
}
void P90_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P90 Example Two Prime Number Problem","P90 ���� ��������"},
		{"Title: Given that p is a prime number and p * p+1 is also a prime number, what is the value of p * p * p * p * p+1997",
		"��Ŀ����֪p��������p*p+1Ҳ����������p*p*p*p*p+1997=����"},
		{"1. Because p is a prime number, our first thought is that it must be a strange book, except for 2. However, the second information is contradictory because 1 is not a prime number, so 1 * 1+1 is definitely not realistic",
		"1.��Ϊp��һ�����������������뵽�϶���һ�����飬����2�����ڶ�����Ϣ��ȴì�ܣ���Ϊ1����������1*1+1�϶�����ʵ"},
		{"2. We know that p * p+1 must be an odd book, so p * p must be an even number, but odd book * odd book! =Even numbers, and even * even=even, so this prime number must be an even number, so only 2 can match",
		"2.����֪��p*p+1һ����һ�����飬����p*pһ����һ��ż����������*����!=ż������ż��*ż��==ż����������������ض���һ��ż��������ֻ��2��ƥ��"},
		{"3. Verify that 2 * 2+1=5 is a rare book, so it is correct, p*p*p*p*p+1997=+32+1997=2029",
		"3.��֤2*2+1=5��5�����飬�����ǶԵģ�p*p*p*p*p+1997=+32+1997=2029"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P90 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����֪p��������p*p+1Ҳ����������p*p*p*p*p+1997=����"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊp��һ�����������������뵽�϶���һ�����飬����2�����ڶ�����Ϣ��ȴì�ܣ���Ϊ1����������1*1+1�϶�����ʵ"));
	ColPrintf(PrintfCol::����, Lang("2.����֪��p*p+1һ����һ�����飬����p*pһ����һ��ż����������*����!=ż������ż��*ż��==ż����������������ض���һ��ż��������ֻ��2��ƥ��"));
	ColPrintf(PrintfCol::����, Lang("3.��֤2*2+1=5��5�����飬�����ǶԵģ�p*p*p*p*p+1997=+32+1997=2029"));
}
void P90_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P90 Example 2 Second Small Question: Prime Number Problem","P90 �����ڶ�С�� ��������"},
		{"Title: If both a and b are prime numbers, and 3a+7b=41, then a+b=____",
		"��Ŀ�����a��b��Ϊ��������3a+7b=41����a+b=____"},
		{"1. Since most prime numbers are odd, we still set them as odd numbers here. 3 is an odd number, odd book * odd book=odd book, and 7 is also an odd number, so the result it gives is odd book. Odd+odd is even, but it is odd",
		"1.��Ϊ������඼�������������������ﻹ����Ϊ������3��һ������������*����=���飬7Ҳ��һ�����������������ó��������飬����+������ż������ȴ������"},
		{"2. There are two possibilities, one is that a is 2, and the other is that b is 2. Assuming a is 2, then 3 * 2+7 * 5=41. If b is 2, then it is an approximate value no matter how it is calculated",
		"2.��������ֿ��ܣ�һ��a��2������b��2���ȼ���a��2����ô3*2+7*5=41�����b��2����ô��ô�㶼��һ������ֵ"},
		{"So a+b=2+5=7",
		"3.����a+b=2+5=7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P90 �����ڶ�С�� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����a��b��Ϊ��������3a+7b=41����a+b=____"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ������඼�������������������ﻹ����Ϊ������3��һ������������*����=���飬7Ҳ��һ�����������������ó��������飬����+������ż������ȴ������"));
	ColPrintf(PrintfCol::����, Lang("2.��������ֿ��ܣ�һ��a��2������b��2���ȼ���a��2����ô3*2+7*5=41�����b��2����ô��ô�㶼��һ������ֵ"));
	ColPrintf(PrintfCol::����, Lang("3.����a+b=2+5=7"));
}
void P90_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P90 Example Three Prime Number Problem","P90 ���� ��������"},
		{"Question: If p and q are both prime numbers and not the same, and p=m+n, q=n * m, then what is (p ^ p+q ^ q)/(m ^ m+n ^ n) equal to?",
		"��Ŀ��p��q��Ϊ���������Ҳ���ͬ����p=m+n��q=n*m����ô(p^p+q^q)/(m^m+n^n)���ڶ��٣�"},
		{"1. Because prime numbers cannot be obtained by multiplying other numbers, we need a number that is 1 and a number that is itself in order to obtain them. Since the definition of p has both m and n, according to the commutative law of addition, we can set either of them as q itself",
		"1.��Ϊ������������������˵õ���������Ҫһ������1��һ��������������ܵõ�����Ϊp�Ķ��嶼��m��n���Ը��ݼӷ������ɣ���������һ��Ϊq��������"},
		{"2. One is 1, so the definition of p can be changed, p=1+q�� So they are adjacent, with one even and one odd, and can only be 2 and 3, p=3��q=2",
		"2.һ��Ϊ1������p�Ķ���Ϳ��Ըı䣬p=1+q���������������ڵģ����ڵ�һ��ż��һ��������ֻ����2��3��p=3��q=2"},
		{"3.Next, we need to calculate (3 ^ 3+2 ^ 2)/(1 ^ 1+2 ^ 2)=31/3",
		"3.������Ҫ������ (3^3+2^2)/(1^1+2^2)=31/3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P90 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��p��q��Ϊ���������Ҳ���ͬ����p=m+n��q=n*m����ô(p^p+q^q)/(m^m+n^n)���ڶ��٣�"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ������������������˵õ���������Ҫһ������1��һ��������������ܵõ�����Ϊp�Ķ��嶼��m��n���Ը��ݼӷ������ɣ���������һ��Ϊq��������"));
	ColPrintf(PrintfCol::����, Lang("2.һ��Ϊ1������p�Ķ���Ϳ��Ըı䣬p=1+q���������������ڵģ����ڵ�һ��ż��һ��������ֻ����2��3��p=3��q=2"));
	ColPrintf(PrintfCol::����, Lang("3.������Ҫ������ (3^3+2^2)/(1^1+2^2)=31/3"));
}
void P90()
{
	P90_1();
	ColPrintf(PrintfCol::����, "");
	P90_2();
	ColPrintf(PrintfCol::����, "");
	P90_2_2();
	ColPrintf(PrintfCol::����, "");
	P90_3();
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
void P90_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P90();
	Lang.SetCurLanguage(LanguageLib::English);
	P90();
	ColPrintf(PrintfCol::����, "");

}