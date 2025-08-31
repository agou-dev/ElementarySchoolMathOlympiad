#pragma once
void P52_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 1 First Question Dictionary Arrangement Method","P52例一第一小题 字典排列法"},
		{"Question: How many three digit numbers can be formed using 1, 2, 3, and three digital cards?",
		"题目：用1，2，3，三张数字卡可以组成多少个三位数?"},
		{"When the hundreds are% d, the tens are% d, and the digits are% d",
		"当百位为%d时 十位是%d 个位是%d"},
		{"There are a total of% d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P52例一第一小题 字典排列法"));
	ColPrintf(PrintfCol::标题, Lang("题目：用1，2，3，三张数字卡可以组成多少个三位数?"));
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
							ColPrintf(PrintfCol::方法, Lang("当百位为%d时 十位是%d 个位是%d"), i, j, k);
							h++;
						}
						
					}
					
				}
			}
		}
	}
	ColPrintf(PrintfCol::结果, Lang("一共有%d种"), (int)h);
}
void P52_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 1 Second Question Dictionary Arrangement Method","P52例一第二小题 字典排列法"},
		{"Title: How many different three digit numbers can be formed using three types of digital cards, 1, 2, 3, each with sufficient quantity?",
		"题目：用1，2，3，三种数字卡，每种数字卡都有足够的数量，可以组成多少个不同三位数?"},
		{"When the hundreds are% d, the tens are% d, and the digits are% d",
		"当百位为%d时 十位是%d 个位是%d"},
		{"There are a total of% d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P52例一第二小题 字典排列法"));
	ColPrintf(PrintfCol::标题, Lang("题目：用1，2，3，三种数字卡，每种数字卡都有足够的数量，可以组成多少个不同三位数?"));
	int h = 0;
	for (int i = 1;i <= 3;i++)
	{
		for (int j = 1;j <= 3;j++)
		{
			for (int k = 1;k <= 3;k++)
			{
				
				ColPrintf(PrintfCol::方法, Lang("当百位为%d时 十位是%d 个位是%d"), i, j, k);
				h++;
			}
		}
	}
	ColPrintf(PrintfCol::结果, Lang("一共有%d种"), (int)h);
}
void P52_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 2 First Question Dictionary Arrangement Method","P52例二第一小题 字典排列法"},
		{"Title: How many different types of balls are there to distribute to a puppy, a kitten, and a bunny?",
		"题目：有三个球分别分给小狗，小猫，小兔，请问有多少种分发?"},
		{"When the puppy gets% d balls, the kitten gets% d balls, and the bunny gets% d balls",
		"当小狗分到%d个球时 小猫分到%d个球 小兔分到%d个球"},
		{"There are a total of% d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P52例二第一小题 字典排列法"));
	ColPrintf(PrintfCol::标题, Lang("题目：有三个球分别分给小狗，小猫，小兔，请问有多少种分发?"));
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
					ColPrintf(PrintfCol::方法, Lang("当小狗分到%d个球时 小猫分到%d个球 小兔分到%d个球"), i, j, k);
					h++;
				}
				
			}
		}
	}
	ColPrintf(PrintfCol::结果, Lang("一共有%d种"), (int)h);
}
void P52_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 2 Second Question Dictionary Arrangement Method","P52例二第二小题 字典排列法"},
		{"Title: There are three balls, which are required to be divided into three identical boxes. How many kinds of distribution are there",
		"题目：有三个球，要求分到分到三个一模一样盒子里，请问有多少种分发"},
		{"The first box has 0 balls, the second box has 0 balls, and the second box has 3 balls",
		"第一个盒子球数是0 第二个盒子球数是0 第二个盒子球数是3"},
		{"The number of balls in the first box is 1, the number of balls in the second box is 1, and the number of balls in the second box is 1",
		"第一个盒子球数是1 第二个盒子球数是1 第二个盒子球数是1"},
		{"The first box has 0 balls, the second box has 1 balls, and the second box has 2 balls",
		"第一个盒子球数是0 第二个盒子球数是1 第二个盒子球数是2"},
		{"There are a total of% d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P52例二第二小题 字典排列法"));
	ColPrintf(PrintfCol::标题, Lang("题目：有三个球，要求分到分到三个一模一样盒子里，请问有多少种分发"));
	ColPrintf(PrintfCol::方法, Lang("第一个盒子球数是0 第二个盒子球数是0 第二个盒子球数是3"));
	ColPrintf(PrintfCol::方法, Lang("第一个盒子球数是1 第二个盒子球数是1 第二个盒子球数是1"));
	ColPrintf(PrintfCol::方法, Lang("第一个盒子球数是0 第二个盒子球数是1 第二个盒子球数是2"));
	NPLib::CPEnum test;
	ULONGLONG nRst = test.CTotal(1, 3);
	ULONGLONG nRst1 = test.CTotal(2, 3);
	ULONGLONG nRst2 = test.CTotal(3, 3);
	vector<unsigned int> Num[] = {
		{0,1,2,3},
	};

	NPLibError("一共有%d种", nRst+ nRst1+ nRst2);
}
void P52_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example Three Dictionary Arrangement Method","P52例三 字典排列法"},
		{"Title: Xiaoyue, Dongdong, and Archie have a total of three books, and each person must have at least one. How many storybooks do Xiaoyue, Dongdong, and Archie have respectively",
		"题目：小月，东东，阿奇三人一共有三本书，每个人至少要有一本，问小月，东东，阿奇分别有多少本故事书"},
		{"When Xiaoyue has% d books, Dongdong has% d books, and Archie has% d books",
		"当小月有%d本书 当东东有%d本书 当阿奇有%d本书"},
		{"There are a total of% d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P52例三 字典排列法"));
	ColPrintf(PrintfCol::标题, Lang("题目：小月，东东，阿奇三人一共有三本书，每个人至少要有一本，问小月，东东，阿奇分别有多少本故事书"));
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
					ColPrintf(PrintfCol::方法, Lang("当小月有%d本书 当东东有%d本书 当阿奇有%d本书"), i, j, k);
					h++;
				}

			}
		}
	}
	ColPrintf(PrintfCol::结果, Lang("一共有%d种"), (int)h);
}
void P52_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 Example 4 Branch Method","P52例四 树杈法"},
		{"Title: Using numbers 4, 5, and 6 to form a three digit number, each with sufficient quantity, specifying that the hundred digits must be 4. How many three digit numbers can be formed in total",
		"题目：用数字4，5，6组成一个三位数，每种都有足够的数量，规定百位必须是4，一共可以组成多少个三位数"},
		{"%d-%d-%d",
		"%d-%d-%d"},
		{"There are a total of% d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P52例四 树杈法"));
	ColPrintf(PrintfCol::标题, Lang("题目：用数字4，5，6组成一个三位数，每种都有足够的数量，规定百位必须是4，一共可以组成多少个三位数"));
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
					ColPrintf(PrintfCol::方法, Lang("%d-%d-%d"), Num[i], Num[j], Num[k]);
					h++;
				}
			}
		}
	}
	ColPrintf(PrintfCol::结果, Lang("一共有%d种"), (int)h);
}
void P52_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P52 cases of 5 branch method","P52例五 树杈法"},
		{"Title: A student travels to three places A, B, and C during vacation. He is in this city today and will be in that city tomorrow. If he is in city A on the first day and going to city A on the fifth day, how many different travel plans does he have",
		"题目：一个学生假期到A，B，C三个地方旅游，他今天在这个城市，明天在那个城市，如果他第一天在A城第五天要到A城，他旅游方案有多少种不同的方案"},
		{"%s-%s-%s-%s-%s",
		"%s-%s-%s-%s-%s"},
		{"There are a total of% d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P52例五 树杈法"));
	ColPrintf(PrintfCol::标题, Lang("题目：用数字4，5，6组成一个三位数，每种都有足够的数量，规定百位必须是4，一共可以组成多少个三位数"));
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
							ColPrintf(PrintfCol::方法, Lang("%s-%s-%s-%s-%s"), Apoiu[i].c_str(), Apoiu[j].c_str(), Apoiu[k].c_str(), Apoiu[k1].c_str(), Apoiu[k2].c_str());
							h++;
						}
					}
				}
			}
		}
	}
	ColPrintf(PrintfCol::结果, Lang("一共有%d种"), (int)h);
}
void P52()
{
	P52_1_1();
	ColPrintf(PrintfCol::方法, "");
	P52_1_2();
	ColPrintf(PrintfCol::方法, "");
	P52_2_1();
	ColPrintf(PrintfCol::方法, "");
	P52_2_2();
	ColPrintf(PrintfCol::方法, "");
	P52_3();
	ColPrintf(PrintfCol::方法, "");
	P52_4();
	ColPrintf(PrintfCol::方法, "");
	P52_5();
	ColPrintf(PrintfCol::方法, "");
}
void P52_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P52();
	Lang.SetCurLanguage(LanguageLib::English);
	P52();
	ColPrintf(PrintfCol::方法, "");

}
