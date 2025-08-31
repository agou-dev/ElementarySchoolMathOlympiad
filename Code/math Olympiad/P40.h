#pragma once
void P40_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 1 Plus Multiplication","P40例1(包含两道小题) 加乘法"},
		{"Title: There are 10 fairy tale books, 8 picture books, and 5 different math books on the bookshelf. How many ways can I choose any one of them? How many methods are there for selecting three different books?",
		"题目：书架上有10本童话书，8本图画书，和5本不同的数学书，如果任取一本共有多少种取法？如果任取三本不同的书共有几种取法？"},
		{"Analysis: For the first question, since they are all different books, we will take a total of three types of books. For\nthe second question, we can number and cross connect the three types of books, resulting in a total of 10 * 8 * 7",
		"分析：第一个问题因为都是不同的书所以我们一共取三种书的总数，第二个问题可以对三种书编号，交叉连线，所以就可以有10*8*7"},
		{"(1) 1. Calculate the number of books to be taken N1=the number of fairy tale books N2+the number of picture books N3+the number of math books N4",
		"(1)1.计算任取一本书取数N1 任取一本书取数N1=童话书数量N2+图画书数量N3+数学书数量N4"},
		
		{"(2) When the math book number is% d: Fairy tale book number is% d Picture book number is% d",
		"(2)当数学书编号为%d时：童话书编号为%d 图画书编号为%d"},
		{"There are% d ways to select any three books",
		"任取三本书共有%d种取法"},
		//变量表
		{"TakeanybookandcountN1","任取一本书取数N1"},
		{"NumberofFairyTaleBooksN2","童话书数量N2"},
		{"NumberofpicturebooksN3","图画书数量N3"},
		{"NumberofMathematicsBooksN4","数学书数量N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(童话书数量N2, 10);
	DefineLangVarInt(图画书数量N3, 8);
	DefineLangVarInt(数学书数量N4, 5);
	ColPrintf(PrintfCol::标题, Lang("P40例1(包含两道小题) 加乘法"));
	ColPrintf(PrintfCol::标题, Lang("题目：书架上有10本童话书，8本图画书，和5本不同的数学书，如果任取一本共有多少种取法？如果任取三本不同的书共有几种取法？"));
	ColPrintf(PrintfCol::标题, Lang("分析：第一个问题因为都是不同的书所以我们一共取三种书的总数，第二个问题可以对三种书编号，交叉连线，所以就可以有10*8*7"));
	DefineLangVarInt(任取一本书取数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("(1)1.计算任取一本书取数N1 任取一本书取数N1=童话书数量N2+图画书数量N3+数学书数量N4"));
	任取一本书取数N1 = 童话书数量N2 + 图画书数量N3 + 数学书数量N4;
	任取一本书取数N1.PrintProcessLog(1);
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1;i <= 5;i++)
	{
		
		for (j = 1;j <= 8;j++)
		{
			for (k = 1;k <= 10;k++)
			{
				ColPrintf(PrintfCol::方法, Lang("(2)当数学书编号为%d时：童话书编号为%d 图画书编号为%d"), i,j,k);
				h++;
			}
		}
	};
	ColPrintf(PrintfCol::方法, Lang("任取三本书共有%d种取法"), h);
}
void P40_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 2 First question: Addition of multiplication","P40例2第一小题 加乘法"},
		{"Question: How many different three digit numbers can be combined using 1, 2, 3, 4, and 5?",
		"题目：利用1，2，3，4，5可以组合成几个不同的三位数?"},
		{"Analysis: Since we need to form a three digit number, let's start with the hundredth digit. Since there are five, there\nare five ways to arrange the hundredth digit. The tenth digit, because one number has already been used, is 5-1, and so on. Finally, connect the intersecting lines of the\ncombination",
		"分析：既然要组成三位数：那先从百位开始看，因为有5个所以百位就有5种摆法，十位因为已经用掉一个数所以就是5-1，以此类推，最后把组合的交叉连线"},
		
		{"When the percentile is% d Ten digits are% d, and one digit is% d",
		"当百位为%d 十位为%d 个位为%d"},
		{"There are a total of% d types",
		"一共有%d种"},

	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P40例2第一小题 加乘法"));
	ColPrintf(PrintfCol::标题, Lang("题目：利用1，2，3，4，5可以组合成几个不同的三位数?"));
	ColPrintf(PrintfCol::标题, Lang("分析：既然要组成三位数：那先从百位开始看，因为有5个所以百位就有5种摆法，十位因为已经用掉一个数所以就是5-1，以此类推，最后把组合的交叉连线"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1;i <= 5;i++)
	{
		
			
		

		for (j = 1;j <= 4;j++)
		{
			for (k = 1;k <= 3;k++)
			{
				
				ColPrintf(PrintfCol::方法, Lang("当百位为%d 十位为%d 个位为%d"),i, k, j);
				h++;
			}
		}
	};
	ColPrintf(PrintfCol::方法, Lang("一共有%d种"), h);
}
void P40_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 2 Second question: Add multiplication","P40例2第二小题 加乘法"},
		{"Question: How many different three digit numbers can be combined using 1, 2, 3, 4, and 5?",
		"题目：利用1，2，3，4，5可以组合成几个不同且是偶数的三位数?"},
		{"Analysis: This question asks us about even numbers, so the number of bits must be even. There are only two even numbers, so there are only two possibilities for the number of bits.",
		"分析：这道题问我们偶数，所以个位上一定是偶数，偶数只有两个，所以个位上只有两种可能。"},
		
		{"When the percentile is% d Ten digits are% d, and one digit is% d",
		"当百位为%d 十位为%d 个位为%d"},
		{"There are a total of% d types",
		"一共有%d种"},

	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P40例2第二小题 加乘法"));
	ColPrintf(PrintfCol::标题, Lang("题目：利用1，2，3，4，5可以组合成几个不同且是偶数的三位数?"));
	ColPrintf(PrintfCol::标题, Lang("分析：这道题问我们偶数，所以个位上一定是偶数，偶数只有两个，所以个位上只有两种可能。"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1;i <= 4;i++)
	{
		
		

		for (j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 2;k++)
			{
				
					ColPrintf(PrintfCol::方法, Lang("当百位为%d 十位为%d 个位为%d"),i, k, j);
				h++;
			}
		}
	};
	ColPrintf(PrintfCol::方法, Lang("一共有%d种"), h);
}
void P40_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 3 Plus Multiplication","P40例3 加乘法"},
		{"Title: A certain signalman uses three of the four sides of red, yellow, blue, and green to hang flags. Can one, two, or three flags be hung at a time? How many ways are there in total?",
		"题目：某信号兵用红黄蓝绿四面其中的三面挂旗，每次可挂1面，2面，3面，一共有几种摆法?"},
		{"Analysis: You can use the three digit method above to calculate the three sides, two sides, and one side, and then add them together to obtain the result",
		"分析：可以用上面三位数的方法，把3面2面和一面计算出再相加就可得出"},
		{"The color of the% d arrangement on the 1st side is %s",
		"1面 第%d种排列 颜色为%s"},
		{"The color of the first grid on both sides is% s, and the color of the second grid is %s ",
		"2面 第1格颜色为%s 第2格颜色为%s "},

		{"Total of %d types on 1 side",
		"1面 总计%d种"},

		{"Total of %d types on 2 sides",
		"2面 总计%d种"},

		{"Total of %d types on 3 sides",
		"3面 总计%d种"},
		{" red ",
		"红 "},
		{" yellow ",
		"黄 "},
		{" blue ","蓝 "},
		{" green ","绿 "},
		{"There are a total of %d types",
		"一共有%d种"},
		{"The color of the first grid on the third side is% s, the color of the second grid is% s, and the color of the third grid is %s ",
		"3面 第1格颜色为%s 第2格颜色为%s 第3格颜色为%s"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P40例3 加乘法"));
	ColPrintf(PrintfCol::标题, Lang("题目：某信号兵用红黄蓝绿四面其中的三面挂旗，每次可挂1面，2面，3面，一共有几种摆法?"));
	ColPrintf(PrintfCol::标题, Lang("分析：可以用上面三位数的方法，把3面2面和一面计算出再相加就可得出"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int n1 = 0;
	char col[5][16];
	//std::string col[5];
	//char* col[5];
	
	for (i = 1;i <= 4;i++)
	{
		if (i == 1)
		{
			strcpy(&col[i][0], "红 ");
		}
		if (i == 2)
		{
			strcpy(&col[i][0], "黄 ");
		}
		if (i == 3)
		{
			strcpy(&col[i][0], "蓝 "); 
		}
		if (i == 4)
		{
			strcpy(&col[i][0], "绿 "); ;
		}
	}
	n1 = 0;
	for (i = 1;i <= 4;i++)
	{
		
		ColPrintf(PrintfCol::方法, Lang("1面 第%d种排列 颜色为%s"),i,Lang( &col[i][0]));
		n1++;
		h++;
	};
	ColPrintf(PrintfCol::方法, Lang("1面 总计%d种"), n1);

	n1 = 0;
	for (i = 1;i <= 4;i++)
	{
		for (j = 1;j <= 3;j++)
		{
			
			ColPrintf(PrintfCol::方法, Lang("2面 第1格颜色为%s 第2格颜色为%s "), Lang(&col[i][0]), Lang(&col[j][0]));
			n1++;
			h++;
		}
	};
	ColPrintf(PrintfCol::方法, Lang("2面 总计%d种"), n1);

	n1 = 0;
	for (i = 1;i <= 4;i++)
	{
		

		for (j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 2;k++)
			{
				
				ColPrintf(PrintfCol::方法, Lang("3面 第1格颜色为%s 第2格颜色为%s 第3格颜色为%s"), Lang( &col[i][0]), Lang(&col[j][0]), Lang( &col[k][0]));
				n1++;
				h++;
			}
		}
	};
	ColPrintf(PrintfCol::方法, Lang("3面 总计%d种"), n1);
	ColPrintf(PrintfCol::方法, Lang("一共有%d种"), h);
}
void P40_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 4 Plus Multiplication","P40例4 加乘法"},
		{"Title: There are four countries A, B, C, and D on the map. Currently, there are four colors for drawing: red, yellow, blue, and green. The colors of adjacent countries are different, but not every color needs to be used.\nHow many coloring methods are there?",
		"题目：地图上有A，B，C，D四个国家，现有红黄蓝绿四种颜色绘图，使相邻国家的颜色不同，但不是每种颜色又要用，问有多少种染色方式?"},
		{"When BC colors are the same, A color:% s B color:% s C color:% s D color:% s",
		"当BC颜色相同时 A颜色：%s  B颜色：%s   C颜色：%s   D颜色：%s"},
		{"When BC colors are different, A color:% s, B color:% s, C color:% s, D color:% s",
		"当BC颜色不同时 A颜色：%s  B颜色：%s   C颜色：%s   D颜色：%s"},
		{" red ",
		"红 "},
		{" yellow ",
		"黄 "},
		{" blue ","蓝 "},
		{" green ","绿 "},
		{"There are a total of %d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P40例4 加乘法"));
	ColPrintf(PrintfCol::标题, Lang("题目：地图上有A，B，C，D四个国家，现有红黄蓝绿四种颜色绘图，使相邻国家的颜色不同，但不是每种颜色又要用，问有多少种染色方式?"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int n1 = 0;
	int k1 = 0;
	char col[5][16];
	for (i = 1;i <= 4;i++)
	{
		if (i == 1)
		{
			strcpy(&col[i][0], "红 ");
		}
		if (i == 2)
		{
			strcpy(&col[i][0], "黄 ");
		}
		if (i == 3)
		{
			strcpy(&col[i][0], "蓝 ");
		}
		if (i == 4)
		{
			strcpy(&col[i][0], "绿 "); ;
		}
	}
	n1 = 0;
	for (i = 1;i <= 4;i++)
	{


		for (j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 3;k++)
			{
				for (k1 = 1;k1 <= 1;k1++)
				{
					ColPrintf(PrintfCol::方法, Lang("当BC颜色相同时 A颜色：%s  B颜色：%s   C颜色：%s   D颜色：%s"), Lang(&col[i][0]), Lang(&col[j][0]), Lang(&col[k][0]), Lang(&col[k1][0]));
					n1++;
					h++;
				}
				
			}
		}
	};
	n1 = 0;
	for (i = 1;i <= 4;i++)
	{


		for (j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 2;k++)
			{
				for (k1 = 1;k1 <= 2;k1++)
				{
					ColPrintf(PrintfCol::方法, Lang("当BC颜色不同时 A颜色：%s  B颜色：%s   C颜色：%s   D颜色：%s"), Lang(&col[i][0]), Lang(&col[j][0]), Lang(&col[k][0]), Lang(&col[k1][0]));
					n1++;
					h++;
				}

			}
		}
	};
	ColPrintf(PrintfCol::方法, Lang("一共有%d种"), h);
}
void P40()
{
	P40_1();//包含两道小题
	ColPrintf(PrintfCol::方法, "");
	P40_2_1();
	ColPrintf(PrintfCol::方法, "");
	P40_2_2();
	ColPrintf(PrintfCol::方法, "");
	P40_3();
	ColPrintf(PrintfCol::方法, "");
	P40_4();
	ColPrintf(PrintfCol::方法, "");
}
void P40_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P40();
	Lang.SetCurLanguage(LanguageLib::English);
	P40();
	ColPrintf(PrintfCol::方法, "");

}