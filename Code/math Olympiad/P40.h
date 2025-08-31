#pragma once
void P40_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 1 Plus Multiplication","P40��1(��������С��) �ӳ˷�"},
		{"Title: There are 10 fairy tale books, 8 picture books, and 5 different math books on the bookshelf. How many ways can I choose any one of them? How many methods are there for selecting three different books?",
		"��Ŀ���������10��ͯ���飬8��ͼ���飬��5����ͬ����ѧ�飬�����ȡһ�����ж�����ȡ���������ȡ������ͬ���鹲�м���ȡ����"},
		{"Analysis: For the first question, since they are all different books, we will take a total of three types of books. For\nthe second question, we can number and cross connect the three types of books, resulting in a total of 10 * 8 * 7",
		"��������һ��������Ϊ���ǲ�ͬ������������һ��ȡ��������������ڶ���������Զ��������ţ��������ߣ����ԾͿ�����10*8*7"},
		{"(1) 1. Calculate the number of books to be taken N1=the number of fairy tale books N2+the number of picture books N3+the number of math books N4",
		"(1)1.������ȡһ����ȡ��N1 ��ȡһ����ȡ��N1=ͯ��������N2+ͼ��������N3+��ѧ������N4"},
		
		{"(2) When the math book number is% d: Fairy tale book number is% d Picture book number is% d",
		"(2)����ѧ����Ϊ%dʱ��ͯ������Ϊ%d ͼ������Ϊ%d"},
		{"There are% d ways to select any three books",
		"��ȡ�����鹲��%d��ȡ��"},
		//������
		{"TakeanybookandcountN1","��ȡһ����ȡ��N1"},
		{"NumberofFairyTaleBooksN2","ͯ��������N2"},
		{"NumberofpicturebooksN3","ͼ��������N3"},
		{"NumberofMathematicsBooksN4","��ѧ������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ͯ��������N2, 10);
	DefineLangVarInt(ͼ��������N3, 8);
	DefineLangVarInt(��ѧ������N4, 5);
	ColPrintf(PrintfCol::����, Lang("P40��1(��������С��) �ӳ˷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������10��ͯ���飬8��ͼ���飬��5����ͬ����ѧ�飬�����ȡһ�����ж�����ȡ���������ȡ������ͬ���鹲�м���ȡ����"));
	ColPrintf(PrintfCol::����, Lang("��������һ��������Ϊ���ǲ�ͬ������������һ��ȡ��������������ڶ���������Զ��������ţ��������ߣ����ԾͿ�����10*8*7"));
	DefineLangVarInt(��ȡһ����ȡ��N1, 0);
	ColPrintf(PrintfCol::����, Lang("(1)1.������ȡһ����ȡ��N1 ��ȡһ����ȡ��N1=ͯ��������N2+ͼ��������N3+��ѧ������N4"));
	��ȡһ����ȡ��N1 = ͯ��������N2 + ͼ��������N3 + ��ѧ������N4;
	��ȡһ����ȡ��N1.PrintProcessLog(1);
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
				ColPrintf(PrintfCol::����, Lang("(2)����ѧ����Ϊ%dʱ��ͯ������Ϊ%d ͼ������Ϊ%d"), i,j,k);
				h++;
			}
		}
	};
	ColPrintf(PrintfCol::����, Lang("��ȡ�����鹲��%d��ȡ��"), h);
}
void P40_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 2 First question: Addition of multiplication","P40��2��һС�� �ӳ˷�"},
		{"Question: How many different three digit numbers can be combined using 1, 2, 3, 4, and 5?",
		"��Ŀ������1��2��3��4��5������ϳɼ�����ͬ����λ��?"},
		{"Analysis: Since we need to form a three digit number, let's start with the hundredth digit. Since there are five, there\nare five ways to arrange the hundredth digit. The tenth digit, because one number has already been used, is 5-1, and so on. Finally, connect the intersecting lines of the\ncombination",
		"��������ȻҪ�����λ�������ȴӰ�λ��ʼ������Ϊ��5�����԰�λ����5�ְڷ���ʮλ��Ϊ�Ѿ��õ�һ�������Ծ���5-1���Դ����ƣ�������ϵĽ�������"},
		
		{"When the percentile is% d Ten digits are% d, and one digit is% d",
		"����λΪ%d ʮλΪ%d ��λΪ%d"},
		{"There are a total of% d types",
		"һ����%d��"},

	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P40��2��һС�� �ӳ˷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������1��2��3��4��5������ϳɼ�����ͬ����λ��?"));
	ColPrintf(PrintfCol::����, Lang("��������ȻҪ�����λ�������ȴӰ�λ��ʼ������Ϊ��5�����԰�λ����5�ְڷ���ʮλ��Ϊ�Ѿ��õ�һ�������Ծ���5-1���Դ����ƣ�������ϵĽ�������"));
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
				
				ColPrintf(PrintfCol::����, Lang("����λΪ%d ʮλΪ%d ��λΪ%d"),i, k, j);
				h++;
			}
		}
	};
	ColPrintf(PrintfCol::����, Lang("һ����%d��"), h);
}
void P40_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 2 Second question: Add multiplication","P40��2�ڶ�С�� �ӳ˷�"},
		{"Question: How many different three digit numbers can be combined using 1, 2, 3, 4, and 5?",
		"��Ŀ������1��2��3��4��5������ϳɼ�����ͬ����ż������λ��?"},
		{"Analysis: This question asks us about even numbers, so the number of bits must be even. There are only two even numbers, so there are only two possibilities for the number of bits.",
		"�����������������ż�������Ը�λ��һ����ż����ż��ֻ�����������Ը�λ��ֻ�����ֿ��ܡ�"},
		
		{"When the percentile is% d Ten digits are% d, and one digit is% d",
		"����λΪ%d ʮλΪ%d ��λΪ%d"},
		{"There are a total of% d types",
		"һ����%d��"},

	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P40��2�ڶ�С�� �ӳ˷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������1��2��3��4��5������ϳɼ�����ͬ����ż������λ��?"));
	ColPrintf(PrintfCol::����, Lang("�����������������ż�������Ը�λ��һ����ż����ż��ֻ�����������Ը�λ��ֻ�����ֿ��ܡ�"));
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
				
					ColPrintf(PrintfCol::����, Lang("����λΪ%d ʮλΪ%d ��λΪ%d"),i, k, j);
				h++;
			}
		}
	};
	ColPrintf(PrintfCol::����, Lang("һ����%d��"), h);
}
void P40_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 3 Plus Multiplication","P40��3 �ӳ˷�"},
		{"Title: A certain signalman uses three of the four sides of red, yellow, blue, and green to hang flags. Can one, two, or three flags be hung at a time? How many ways are there in total?",
		"��Ŀ��ĳ�źű��ú�������������е�������죬ÿ�οɹ�1�棬2�棬3�棬һ���м��ְڷ�?"},
		{"Analysis: You can use the three digit method above to calculate the three sides, two sides, and one side, and then add them together to obtain the result",
		"������������������λ���ķ�������3��2���һ����������ӾͿɵó�"},
		{"The color of the% d arrangement on the 1st side is %s",
		"1�� ��%d������ ��ɫΪ%s"},
		{"The color of the first grid on both sides is% s, and the color of the second grid is %s ",
		"2�� ��1����ɫΪ%s ��2����ɫΪ%s "},

		{"Total of %d types on 1 side",
		"1�� �ܼ�%d��"},

		{"Total of %d types on 2 sides",
		"2�� �ܼ�%d��"},

		{"Total of %d types on 3 sides",
		"3�� �ܼ�%d��"},
		{" red ",
		"�� "},
		{" yellow ",
		"�� "},
		{" blue ","�� "},
		{" green ","�� "},
		{"There are a total of %d types",
		"һ����%d��"},
		{"The color of the first grid on the third side is% s, the color of the second grid is% s, and the color of the third grid is %s ",
		"3�� ��1����ɫΪ%s ��2����ɫΪ%s ��3����ɫΪ%s"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P40��3 �ӳ˷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ĳ�źű��ú�������������е�������죬ÿ�οɹ�1�棬2�棬3�棬һ���м��ְڷ�?"));
	ColPrintf(PrintfCol::����, Lang("������������������λ���ķ�������3��2���һ����������ӾͿɵó�"));
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
			strcpy(&col[i][0], "�� ");
		}
		if (i == 2)
		{
			strcpy(&col[i][0], "�� ");
		}
		if (i == 3)
		{
			strcpy(&col[i][0], "�� "); 
		}
		if (i == 4)
		{
			strcpy(&col[i][0], "�� "); ;
		}
	}
	n1 = 0;
	for (i = 1;i <= 4;i++)
	{
		
		ColPrintf(PrintfCol::����, Lang("1�� ��%d������ ��ɫΪ%s"),i,Lang( &col[i][0]));
		n1++;
		h++;
	};
	ColPrintf(PrintfCol::����, Lang("1�� �ܼ�%d��"), n1);

	n1 = 0;
	for (i = 1;i <= 4;i++)
	{
		for (j = 1;j <= 3;j++)
		{
			
			ColPrintf(PrintfCol::����, Lang("2�� ��1����ɫΪ%s ��2����ɫΪ%s "), Lang(&col[i][0]), Lang(&col[j][0]));
			n1++;
			h++;
		}
	};
	ColPrintf(PrintfCol::����, Lang("2�� �ܼ�%d��"), n1);

	n1 = 0;
	for (i = 1;i <= 4;i++)
	{
		

		for (j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 2;k++)
			{
				
				ColPrintf(PrintfCol::����, Lang("3�� ��1����ɫΪ%s ��2����ɫΪ%s ��3����ɫΪ%s"), Lang( &col[i][0]), Lang(&col[j][0]), Lang( &col[k][0]));
				n1++;
				h++;
			}
		}
	};
	ColPrintf(PrintfCol::����, Lang("3�� �ܼ�%d��"), n1);
	ColPrintf(PrintfCol::����, Lang("һ����%d��"), h);
}
void P40_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P40 Example 4 Plus Multiplication","P40��4 �ӳ˷�"},
		{"Title: There are four countries A, B, C, and D on the map. Currently, there are four colors for drawing: red, yellow, blue, and green. The colors of adjacent countries are different, but not every color needs to be used.\nHow many coloring methods are there?",
		"��Ŀ����ͼ����A��B��C��D�ĸ����ң����к������������ɫ��ͼ��ʹ���ڹ��ҵ���ɫ��ͬ��������ÿ����ɫ��Ҫ�ã����ж�����Ⱦɫ��ʽ?"},
		{"When BC colors are the same, A color:% s B color:% s C color:% s D color:% s",
		"��BC��ɫ��ͬʱ A��ɫ��%s  B��ɫ��%s   C��ɫ��%s   D��ɫ��%s"},
		{"When BC colors are different, A color:% s, B color:% s, C color:% s, D color:% s",
		"��BC��ɫ��ͬʱ A��ɫ��%s  B��ɫ��%s   C��ɫ��%s   D��ɫ��%s"},
		{" red ",
		"�� "},
		{" yellow ",
		"�� "},
		{" blue ","�� "},
		{" green ","�� "},
		{"There are a total of %d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P40��4 �ӳ˷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ����A��B��C��D�ĸ����ң����к������������ɫ��ͼ��ʹ���ڹ��ҵ���ɫ��ͬ��������ÿ����ɫ��Ҫ�ã����ж�����Ⱦɫ��ʽ?"));
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
			strcpy(&col[i][0], "�� ");
		}
		if (i == 2)
		{
			strcpy(&col[i][0], "�� ");
		}
		if (i == 3)
		{
			strcpy(&col[i][0], "�� ");
		}
		if (i == 4)
		{
			strcpy(&col[i][0], "�� "); ;
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
					ColPrintf(PrintfCol::����, Lang("��BC��ɫ��ͬʱ A��ɫ��%s  B��ɫ��%s   C��ɫ��%s   D��ɫ��%s"), Lang(&col[i][0]), Lang(&col[j][0]), Lang(&col[k][0]), Lang(&col[k1][0]));
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
					ColPrintf(PrintfCol::����, Lang("��BC��ɫ��ͬʱ A��ɫ��%s  B��ɫ��%s   C��ɫ��%s   D��ɫ��%s"), Lang(&col[i][0]), Lang(&col[j][0]), Lang(&col[k][0]), Lang(&col[k1][0]));
					n1++;
					h++;
				}

			}
		}
	};
	ColPrintf(PrintfCol::����, Lang("һ����%d��"), h);
}
void P40()
{
	P40_1();//��������С��
	ColPrintf(PrintfCol::����, "");
	P40_2_1();
	ColPrintf(PrintfCol::����, "");
	P40_2_2();
	ColPrintf(PrintfCol::����, "");
	P40_3();
	ColPrintf(PrintfCol::����, "");
	P40_4();
	ColPrintf(PrintfCol::����, "");
}
void P40_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P40();
	Lang.SetCurLanguage(LanguageLib::English);
	P40();
	ColPrintf(PrintfCol::����, "");

}