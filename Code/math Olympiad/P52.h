#pragma once
void P52_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 1 First Question Dictionary Arrangement Method","P52��һ��һС�� �ֵ����з�"},
		{"Question: How many three digit numbers can be formed using 1, 2, 3, and three digital cards?",
		"��Ŀ����1��2��3���������ֿ�������ɶ��ٸ���λ��?"},
		{"When the hundreds are% d, the tens are% d, and the digits are% d",
		"����λΪ%dʱ ʮλ��%d ��λ��%d"},
		{"There are a total of% d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P52��һ��һС�� �ֵ����з�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����1��2��3���������ֿ�������ɶ��ٸ���λ��?"));
	int h = 0;
	for (int i = 1;i <= 3;i++)
	{
		for (int j = 1;j <= 3;j++)
		{
			for (int k = 1;k <= 3;k++)
			{
				if (i != k)
				{
					if (j != k)
					{
						if (i != j)
						{
							ColPrintf(PrintfCol::����, Lang("����λΪ%dʱ ʮλ��%d ��λ��%d"), i, j, k);
							h++;
						}
						
					}
					
				}
			}
		}
	}
	ColPrintf(PrintfCol::���, Lang("һ����%d��"), (int)h);
}
void P52_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 1 Second Question Dictionary Arrangement Method","P52��һ�ڶ�С�� �ֵ����з�"},
		{"Title: How many different three digit numbers can be formed using three types of digital cards, 1, 2, 3, each with sufficient quantity?",
		"��Ŀ����1��2��3���������ֿ���ÿ�����ֿ������㹻��������������ɶ��ٸ���ͬ��λ��?"},
		{"When the hundreds are% d, the tens are% d, and the digits are% d",
		"����λΪ%dʱ ʮλ��%d ��λ��%d"},
		{"There are a total of% d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P52��һ�ڶ�С�� �ֵ����з�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����1��2��3���������ֿ���ÿ�����ֿ������㹻��������������ɶ��ٸ���ͬ��λ��?"));
	int h = 0;
	for (int i = 1;i <= 3;i++)
	{
		for (int j = 1;j <= 3;j++)
		{
			for (int k = 1;k <= 3;k++)
			{
				
				ColPrintf(PrintfCol::����, Lang("����λΪ%dʱ ʮλ��%d ��λ��%d"), i, j, k);
				h++;
			}
		}
	}
	ColPrintf(PrintfCol::���, Lang("һ����%d��"), (int)h);
}
void P52_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 2 First Question Dictionary Arrangement Method","P52������һС�� �ֵ����з�"},
		{"Title: How many different types of balls are there to distribute to a puppy, a kitten, and a bunny?",
		"��Ŀ����������ֱ�ָ�С����Сè��С�ã������ж����ַַ�?"},
		{"When the puppy gets% d balls, the kitten gets% d balls, and the bunny gets% d balls",
		"��С���ֵ�%d����ʱ Сè�ֵ�%d���� С�÷ֵ�%d����"},
		{"There are a total of% d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P52������һС�� �ֵ����з�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����������ֱ�ָ�С����Сè��С�ã������ж����ַַ�?"));
	int h = 0;
	int l = 3;
	for (int i = 0;i <= 3;i++)
	{
		for (int j = 0;j <= 3;j++)
		{
			for (int k = 0;k <= 3;k++)
			{
				if (i + k + j == l)
				{
					ColPrintf(PrintfCol::����, Lang("��С���ֵ�%d����ʱ Сè�ֵ�%d���� С�÷ֵ�%d����"), i, j, k);
					h++;
				}
				
			}
		}
	}
	ColPrintf(PrintfCol::���, Lang("һ����%d��"), (int)h);
}
void P52_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 2 Second Question Dictionary Arrangement Method","P52�����ڶ�С�� �ֵ����з�"},
		{"Title: There are three balls, which are required to be divided into three identical boxes. How many kinds of distribution are there",
		"��Ŀ����������Ҫ��ֵ��ֵ�����һģһ������������ж����ַַ�"},
		{"The first box has 0 balls, the second box has 0 balls, and the second box has 3 balls",
		"��һ������������0 �ڶ�������������0 �ڶ�������������3"},
		{"The number of balls in the first box is 1, the number of balls in the second box is 1, and the number of balls in the second box is 1",
		"��һ������������1 �ڶ�������������1 �ڶ�������������1"},
		{"The first box has 0 balls, the second box has 1 balls, and the second box has 2 balls",
		"��һ������������0 �ڶ�������������1 �ڶ�������������2"},
		{"There are a total of% d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P52�����ڶ�С�� �ֵ����з�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����������Ҫ��ֵ��ֵ�����һģһ������������ж����ַַ�"));
	ColPrintf(PrintfCol::����, Lang("��һ������������0 �ڶ�������������0 �ڶ�������������3"));
	ColPrintf(PrintfCol::����, Lang("��һ������������1 �ڶ�������������1 �ڶ�������������1"));
	ColPrintf(PrintfCol::����, Lang("��һ������������0 �ڶ�������������1 �ڶ�������������2"));
	NPLib::CPEnum test;
	ULONGLONG nRst = test.CTotal(1, 3);
	ULONGLONG nRst1 = test.CTotal(2, 3);
	ULONGLONG nRst2 = test.CTotal(3, 3);
	vector<unsigned int> Num[] = {
		{0,1,2,3},
	};

	NPLibError("һ����%d��", nRst+ nRst1+ nRst2);
}
void P52_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example Three Dictionary Arrangement Method","P52���� �ֵ����з�"},
		{"Title: Xiaoyue, Dongdong, and Archie have a total of three books, and each person must have at least one. How many storybooks do Xiaoyue, Dongdong, and Archie have respectively",
		"��Ŀ��С�£���������������һ���������飬ÿ��������Ҫ��һ������С�£�����������ֱ��ж��ٱ�������"},
		{"When Xiaoyue has% d books, Dongdong has% d books, and Archie has% d books",
		"��С����%d���� ��������%d���� ��������%d����"},
		{"There are a total of% d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P52���� �ֵ����з�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��С�£���������������һ���������飬ÿ��������Ҫ��һ������С�£�����������ֱ��ж��ٱ�������"));
	int h = 0;
	int l = 7;
	for (int i = 1;i <= 7;i++)
	{
		for (int j = 1;j <= 7;j++)
		{
			for (int k = 1;k <= 7;k++)
			{
				if (i + k + j == l)
				{
					ColPrintf(PrintfCol::����, Lang("��С����%d���� ��������%d���� ��������%d����"), i, j, k);
					h++;
				}

			}
		}
	}
	ColPrintf(PrintfCol::���, Lang("һ����%d��"), (int)h);
}
void P52_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 4 Branch Method","P52���� ��辷�"},
		{"Title: Using numbers 4, 5, and 6 to form a three digit number, each with sufficient quantity, specifying that the hundred digits must be 4. How many three digit numbers can be formed in total",
		"��Ŀ��������4��5��6���һ����λ����ÿ�ֶ����㹻���������涨��λ������4��һ��������ɶ��ٸ���λ��"},
		{"%d-%d-%d",
		"%d-%d-%d"},
		{"There are a total of% d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P52���� ��辷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������4��5��6���һ����λ����ÿ�ֶ����㹻���������涨��λ������4��һ��������ɶ��ٸ���λ��"));
	int h = 0;
	int Num[4] = { 4,5,6 };
	for (int i = 0;i <= 2;i++)
	{
		for (int j = 0;j <= 2;j++)
		{
			for (int k = 0;k <= 2;k++)
			{
				if (Num[i] == 4)
				{
					ColPrintf(PrintfCol::����, Lang("%d-%d-%d"), Num[i], Num[j], Num[k]);
					h++;
				}
			}
		}
	}
	ColPrintf(PrintfCol::���, Lang("һ����%d��"), (int)h);
}
void P52_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 cases of 5 branch method","P52���� ��辷�"},
		{"Title: A student travels to three places A, B, and C during vacation. He is in this city today and will be in that city tomorrow. If he is in city A on the first day and going to city A on the fifth day, how many different travel plans does he have",
		"��Ŀ��һ��ѧ�����ڵ�A��B��C�����ط����Σ���������������У��������Ǹ����У��������һ����A�ǵ�����Ҫ��A�ǣ������η����ж����ֲ�ͬ�ķ���"},
		{"%s-%s-%s-%s-%s",
		"%s-%s-%s-%s-%s"},
		{"There are a total of% d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P52���� ��辷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������4��5��6���һ����λ����ÿ�ֶ����㹻���������涨��λ������4��һ��������ɶ��ٸ���λ��"));
	int h = 0;
	std::string Apoiu[4] = {"A","B","C"};
	for (int i = 0;i <= 2;i++)
	{
		for (int j = 0;j <= 2;j++)
		{
			for (int k = 0;k <= 2;k++)
			{
				for (int k1 = 0;k1 <= 2;k1++)
				{
					for (int k2 = 0;k2 <= 2;k2++)
					{
						if (i != j && j != k && k != k1 && Apoiu[k1] != "A"&& Apoiu[k2] == "A"&& Apoiu[i] == "A")
						{
							ColPrintf(PrintfCol::����, Lang("%s-%s-%s-%s-%s"), Apoiu[i].c_str(), Apoiu[j].c_str(), Apoiu[k].c_str(), Apoiu[k1].c_str(), Apoiu[k2].c_str());
							h++;
						}
					}
				}
			}
		}
	}
	ColPrintf(PrintfCol::���, Lang("һ����%d��"), (int)h);
}
void P52()
{
	P52_1_1();
	ColPrintf(PrintfCol::����, "");
	P52_1_2();
	ColPrintf(PrintfCol::����, "");
	P52_2_1();
	ColPrintf(PrintfCol::����, "");
	P52_2_2();
	ColPrintf(PrintfCol::����, "");
	P52_3();
	ColPrintf(PrintfCol::����, "");
	P52_4();
	ColPrintf(PrintfCol::����, "");
	P52_5();
	ColPrintf(PrintfCol::����, "");
}
void P52_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P52();
	Lang.SetCurLanguage(LanguageLib::English);
	P52();
	ColPrintf(PrintfCol::����, "");

}
