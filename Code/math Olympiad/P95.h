#pragma once
void P95_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P95 case one factor multiple","P95 ��һ ��������"},
		{"Title: Numbers 144��288��432��720, how many factors do they have?",
		"��Ŀ����һ��144��288��432��720�����ж���������"},
		{"Title: Numbers 144288, 1. Since every number can be obtained by multiplying two prime numbers, we first decompose the prime factors and divide them into two categories. Adding 1 to the number of prime factors gives us an exponent because each number has a factor of 1",
		"1.��Ϊÿһ����������������������˵õ������������ȷֽ�������������������Ϊ���࣬��������������������1����һ��ָ������Ϊÿ��������������1"},
		{"2. We first decompose the prime factor of 144: 144=2 * 2 * 2 * 3 * 3, which can be written as 144=2 ^ 4 * 3 ^ 2",
		"2.�����ȷֽ�144����������144=2*2*2*2*3*3�õ���������д��144=2^4*3^2"},
		{"3. We add the exponent 1 to each term, which becomes 2 ^ 5 * 3 ^ 3. Since it is a prime factor, each of its factors can be multiplied by the prime factor and combined: 3 * 5=15 types",
		"3.���ǰ�ÿһ�����ָ��1���ͱ��2^5*3^3��Ȼ����Ϊ������������������ÿһ������������������������˵õ���Ȼ�������ϣ�3*5=15��"},
		{"4. We first decompose the prime factor of 288: 288=2 * 2 * 2 * 2 * 2 * 3 * 3, which can also be written as 288=2 ^ 5 * 3 ^ 2",
		"4.�����ȷֽ�288����������288=2*2*2*2*2*3*3�õ���������д��288=2^5*3^2"},
		{"5. We add the exponent 1 to each term, which becomes 2 ^ 6 * 3 ^ 3. Since it is a prime factor, each of its factors can be multiplied by the prime factor and combined: 3 * 6=18 types",
		"5.���ǰ�ÿһ�����ָ��1���ͱ��2^6*3^3��Ȼ����Ϊ������������������ÿһ������������������������˵õ���Ȼ�������ϣ�3*6=18��"},
		{"6. We first decompose the prime factor of 432: 432=2 * 2 * 2 * 3 * 3 * 3, which can be written as 432=2 ^ 4 * 3 ^ 3",
		"6.�����ȷֽ�432����������432=2*2*2*2*3*3*3�õ���������д��432=2^4*3^3"},
		{"7. We add the exponent 1 to each term, which becomes 2 ^ 5 * 3 ^ 4. Since it is a prime factor, each of its factors can be multiplied by the prime factor and combined: 4 * 5=20 types",
		"7.���ǰ�ÿһ�����ָ��1���ͱ��2^5*3^4��Ȼ����Ϊ������������������ÿһ������������������������˵õ���Ȼ�������ϣ�4*5=20��"},
		{"8. We first decompose the prime factor of 720: 720=2 * 2 * 2 * 3 * 3 * 5, which can be written as 432=2 ^ 4 * 3 ^ 2 * 5 ^ 1",
		"8.�����ȷֽ�720����������720=2*2*2*2*3*3*5�õ���������д��432=2^4*3^2*5^1"},
		{"9. We add the exponent 1 to each term, which becomes 2 ^ 5 * 3 ^ 3 * 5 ^ 2. Since it is a prime factor, each of its factors can be multiplied by the prime factor and combined: 5 * 3 * 2=30 types",
		"9.���ǰ�ÿһ�����ָ��1���ͱ��2^5*3^3*5^2��Ȼ����Ϊ������������������ÿһ������������������������˵õ���Ȼ�������ϣ�5*3*2=30��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P95 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ��144��288��432��720�����ж���������"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊÿһ����������������������˵õ������������ȷֽ�������������������Ϊ���࣬��������������������1����һ��ָ������Ϊÿ��������������1"));
	ColPrintf(PrintfCol::����, Lang("2.�����ȷֽ�144����������144=2*2*2*2*3*3�õ���������д��144=2^4*3^2"));
	ColPrintf(PrintfCol::����, Lang("3.���ǰ�ÿһ�����ָ��1���ͱ��2^5*3^3��Ȼ����Ϊ������������������ÿһ������������������������˵õ���Ȼ�������ϣ�3*5=15��"));
	ColPrintf(PrintfCol::����, Lang("4.�����ȷֽ�288����������288=2*2*2*2*2*3*3�õ���������д��288=2^5*3^2"));
	ColPrintf(PrintfCol::����, Lang("5.���ǰ�ÿһ�����ָ��1���ͱ��2^6*3^3��Ȼ����Ϊ������������������ÿһ������������������������˵õ���Ȼ�������ϣ�3*6=18��"));
	ColPrintf(PrintfCol::����, Lang("6.�����ȷֽ�432����������432=2*2*2*2*3*3*3�õ���������д��432=2^4*3^3"));
	ColPrintf(PrintfCol::����, Lang("7.���ǰ�ÿһ�����ָ��1���ͱ��2^5*3^4��Ȼ����Ϊ������������������ÿһ������������������������˵õ���Ȼ�������ϣ�4*5=20��"));
	ColPrintf(PrintfCol::����, Lang("8.�����ȷֽ�720����������720=2*2*2*2*3*3*5�õ���������д��432=2^4*3^2*5^1"));
	ColPrintf(PrintfCol::����, Lang("9.���ǰ�ÿһ�����ָ��1���ͱ��2^5*3^3*5^2��Ȼ����Ϊ������������������ÿһ������������������������˵õ���Ȼ�������ϣ�5*3*2=30��"));
}
void P95_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P95 cases with two factor multiples","P95 ���� ��������"},
		{"Question: A two digit number has 6 factors, and the sum of the smallest three factors of this number is 10. What is this number.",
		"��Ŀ��һ����λ����6�������������������С�����������ĺ���10����ô������Ǽ���"},
		{"1. Let's first look at the second condition, because currently only the second condition can be used, which is that the sum of the smallest three factors is 10. It should be noted that it is the minimum factor. If it is not the minimum factor, then this number must contain the minimum factor",
		"1.�����ȿ��ڶ�����������Ϊ����ֻ�еڶ������������ã�������С�����������ĺ���10��Ҫע�������С���������������С��������ô������϶�������С����"},
		{"2. The smallest three factors, of which there must be one, 1 is definite, and it depends on the last two",
		"2.��С���������������п϶���һ��1��ȷ���ģ�������Ҫ������������"},
		{"3.The smallest one is 1, so the second one must be 2, and the last one is 10-1-2=7, so 10=1+2+7",
		"3.��С��һ����1����ô��2���϶�����2�����һ������10-1-2=7������10=1+2+7"},
		{"4. The smallest one is 1, so the second one has 3, and the last one is 10-1-3=6, so 10=1+3+6. However, the factors of 6 also have 2 and 3. With these two factors, 6 cannot be turned, so this one is excluded",
		"4.��С��һ����1����ô��2�����о���3�����һ������10-1-3=6������10=1+3+6����6����������2��3����������������������ô6���ֲ����ˣ�������һ���ų�"},
		{"5. The smallest one is 1, so the second one has 4, and the last one is 10-1-4=5, so 10=1+4+5. However, there is still a factor of 2 for 4. If there is this one, then 4 will not be included, so this one is excluded",
		"5.��С��һ����1����ô��2�����о���4�����һ������10-1-4=5������10=1+4+5����4����������2������һ������ô4���ֲ����ˣ�������һ���ų�"},
		{"6. The rest is basically like this, because the later it is, the less it turns, only the one that matches 10=1+2+7",
		"6.����Ļ���������������ΪԽ�Ǻ���ģ�Խ���ֲ�����ֻ��10=1+2+7��һ������"},
		{"7.So we can enumerate all numbers that are multiples of 2 and 7, and then determine based on the first condition, the sum factor, and finally 98",
		"7.��ô���ǾͿ���ö��������2��7�ı���������Ȼ����ݵ�һ�����������������жϣ������98"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P95 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ����λ����6�������������������С�����������ĺ���10����ô������Ǽ���"));
	ColPrintf(PrintfCol::����, Lang("1.�����ȿ��ڶ�����������Ϊ����ֻ�еڶ������������ã�������С�����������ĺ���10��Ҫע�������С���������������С��������ô������϶�������С����"));
	ColPrintf(PrintfCol::����, Lang("2.��С���������������п϶���һ��1��ȷ���ģ�������Ҫ������������"));
	ColPrintf(PrintfCol::����, Lang("3.��С��һ����1����ô��2���϶�����2�����һ������10-1-2=7������10=1+2+7"));
	ColPrintf(PrintfCol::����, Lang("4.��С��һ����1����ô��2�����о���3�����һ������10-1-3=6������10=1+3+6����6����������2��3����������������������ô6���ֲ����ˣ�������һ���ų�"));
	ColPrintf(PrintfCol::����, Lang("5.��С��һ����1����ô��2�����о���4�����һ������10-1-4=5������10=1+4+5����4����������2������һ������ô4���ֲ����ˣ�������һ���ų�"));
	ColPrintf(PrintfCol::����, Lang("6.����Ļ���������������ΪԽ�Ǻ���ģ�Խ���ֲ�����ֻ��10=1+2+7��һ������"));
	ColPrintf(PrintfCol::����, Lang("7.��ô���ǾͿ���ö��������2��7�ı���������Ȼ����ݵ�һ�����������������жϣ������98"));
}
void P95_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P95 cases with three factor multiples","P95 ���� ��������"},
		{"Question: How many numbers in 1 to 100 have 6 factors?",
		"��Ŀ����1��100�У���6�����������ж��ٸ�?"},
		{"%d",
		"%d,"},
		{"There are a total of% d",
		"һ����%d��"},
		{"1 to 100 contains 6 factors",
		"1��100����6������"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P95 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����1��100�У���6�����������ж��ٸ�?"));
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
			ColPrintf(PrintfCol::����, Lang("%d"),i);
			Nencount++;
		}
		count = 0;
	}
	ColPrintf(PrintfCol::����, Lang("һ����%d��"), Nencount);
}
void P95()
{
	P95_1();
	ColPrintf(PrintfCol::����, "");
	P95_2();
	ColPrintf(PrintfCol::����, "");
	P95_3();
	ColPrintf(PrintfCol::����, "");
	//P94_4();
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
void P95_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P95();
	Lang.SetCurLanguage(LanguageLib::English);
	P95();
	ColPrintf(PrintfCol::����, "");

}