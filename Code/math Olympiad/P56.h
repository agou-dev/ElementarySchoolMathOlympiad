#pragma once
void P56_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P56 Elementary School Olympiad Math A-level Course Example Seven arithmetic sequence","P56小学奥数A级课程 例七 等差数列"},
		{"Question: Xiaoming practices abacus. He sums up natural numbers from the beginning. When he adds a certain number, the sum is 2013, but he finds that one number is missing. What is this number?",
		"题目：小明练习打算盘，他按照自然数的顺序从一开始求和，当加到某个数时，和是2013，但他发现少加了一个数，这个数是多少?"},
		{"1. Let the end and number of items be n, and this number be x",
		"1.设末尾和项数为n 这个数为x"},
		{"2. List the arithmetic sequence 1+2+3+4+...+n",
		"2.列出等差数列 1+2+3+4+……+n"},
		{"3. List the equation S1 n * (n+1)=2013+x based on the arithmetic sequence and formula",
		"3.根据等差数列和公式列出式子S1 n*(n+1)/2=2013+x"},
		{"4. Expand equation S1 to obtain S2 n * (n+1)=(2013+x) * 2",
		"4.展开式子S1得到S2 n*(n+1)=(2013+x)*2"},
		{"5. Simplify S2 to obtain S3 n * (n+1)=4026+2x",
		"5.化简S2得到S3 n*(n+1)=4026+2x"},
		{"6. Because the calculation is missing, the correct value must be greater than n * n, which must be greater than 4026. Assuming n=63, 63 * 63=3969, 64 * 64=4096, take the middle value of 63 * 64=4032, so 4032-4026=6",
		"6.因为算少了所以正确的必须要大 n*n必须比4026大 因为假设n=63 63*63=3969 64*64=4096 取中间值 63*64=4032 所以4032-4026=6"},
		{"7. Simplify S7 by listing equation S8 4032=4026+2x=>2x=4032-4026=>x=6/2=>3",
		"7.化简S7列出式子S8 4032=4026+2x=>2x=4032-4026=>x=6/2=>3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P56小学奥数A级课程 例七 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：小明练习打算盘，他按照自然数的顺序从一开始求和，当加到某个数时，和是2013，但他发现少加了一个数，这个数是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.设末尾和项数为n 这个数为x"));
	ColPrintf(PrintfCol::方法, Lang("2.列出等差数列 1+2+3+4+……+n"));
	ColPrintf(PrintfCol::方法, Lang("3.根据等差数列和公式列出式子S1 n*(n+1)/2=2013+x"));
	ColPrintf(PrintfCol::方法, Lang("4.展开式子S1得到S2 n*(n+1)=(2013+x)*2"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S2得到S3 n*(n+1)=4026+2x"));
	ColPrintf(PrintfCol::方法, Lang("6.因为算少了所以正确的必须要大 n*n必须比4026大 因为假设n=63 63*63=3969 64*64=4096 取中间值 63*64=4032 所以4032-4026=6"));
	ColPrintf(PrintfCol::方法, Lang("7.化简S7列出式子S8 4032=4026+2x=>2x=4032-4026=>x=6/2=>3"));
}
void P56_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P56 Primary School Olympiad Math A - level Course Example Seven : Extended arithmetic sequence","P56小学奥数A级课程 例七拓展 等差数列"},
		{"Title: Ning Ning practices mental arithmetic. He sums natural numbers in the order they are added from the beginning. When he adds a certain number, the sum is 888. However, he finds that he has repeated the addition of another number. What is this number?",
		"题目：宁宁练习口算，他按照自然数的顺序从一开始求和，当加到某个数时，和是888，但他发现重复加了一个数，这个数是多少?"},
		{"1. Let the end and number of items be n, and this number be x",
		"1.设末尾和项数为n 这个数为x"},
		{"2. List the arithmetic sequence 1+2+3+4+...+n",
		"2.列出等差数列 1+2+3+4+……+n"},
		{"3. List the equation S1 n * (n+1)/2=888-x based on the arithmetic sequence and formula",
		"3.根据等差数列和公式列出式子S1 n*(n+1)/2=888-x"},
		{"4. Expand equation S1 to obtain S2 n * (n+1)=(888-x) * 2",
		"4.展开式子S1得到S2 n*(n+1)=(888-x)*2"},
		{"5. Simplify S2 to obtain S3 n * (n+1)=1776-2x",
		"5.化简S2得到S3 n*(n+1)=1776-2x"},
		{"6. Because there are too many calculations, the correct one must be smaller. n * n must be smaller than 1776 because the trial calculation is 40 * 41=1640, 41 * 42=1772, so 1776-1772=4",
		"6.因为算多了所以正确的必须要小 n*n必须比1776小 因为试算 40*41=1640 41*42=1772 所以1776-1772=4"},
		{"7. Simplify S7 by listing equation S8 1772=1776-2x=>2x=1776-1772=>x=4/2=>2",
		"7.化简S7列出式子S8 1772=1776-2x=>2x=1776-1772=>x=4/2=>2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P56小学奥数A级课程 例七拓展 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：宁宁练习口算，他按照自然数的顺序从一开始求和，当加到某个数时，和是888，但他发现重复加了一个数，这个数是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.设末尾和项数为n 这个数为x"));
	ColPrintf(PrintfCol::方法, Lang("2.列出等差数列 1+2+3+4+……+n"));
	ColPrintf(PrintfCol::方法, Lang("3.根据等差数列和公式列出式子S1 n*(n+1)/2=888-x"));
	ColPrintf(PrintfCol::方法, Lang("4.展开式子S1得到S2 n*(n+1)=(888-x)*2"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S2得到S3 n*(n+1)=1776-2x"));
	ColPrintf(PrintfCol::方法, Lang("6.因为算多了所以正确的必须要小 n*n必须比1776小 因为试算 40*41=1640 41*42=1772 所以1776-1772=4"));
	ColPrintf(PrintfCol::方法, Lang("7.化简S7列出式子S8 1772=1776-2x=>2x=1776-1772=>x=4/2=>2"));
}
void P56_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P56 Primary School Olympiad Math A-level Course Example 8: Extended arithmetic sequence","P56小学奥数A级课程 例八拓展 等差数列"},
		{"Title: Several small boxes are placed in a row. Xiao Ming puts 50 chess pieces into a box, and one box has no chess pieces. Xiao Guang takes one chess piece from each box with chess pieces and puts it in the box. Xiao Ming comes back to check the box and doesn't find anyone moving it. How many boxes are there?",
		"题目：若干个小盒子放成一排，小明把50多个棋子放入盒子中，一个盒子没有棋子，小光把有棋子的盒子各拿了一只棋子放入盒子里，并调换位置，小明回来检查了盒子并无发现有人动过，盒子个数有几个?"},
		{"1. According to the question, the number of boxes must be 1. After taking it, the empty box will be swapped, and the number of chess pieces in each box will be reduced by one. After taking the empty box, it must be the number of boxes. Otherwise, the condition cannot be met",
		"1.根据题意，有一个盒子的个数必定是1，拿完后就是那个空盒子调换位置，每一个盒子棋子个数都要减一，空盒子拿完后必定就是盒子的个数，不然条件无法成立"},
		{"According to the condition established in the first step, it is an arithmetic sequence: 1+2+3+4+...+n",
		"2.根据第一步所建立的条件，就是一个等差数列：1+2+3+4+……+n"},
		{"3. List the sequence of n+0+1+2+3+... n-1 after swapping chess pieces",
		"3.列出棋子调换后的数列 n+0+1+2+3+……n-1"},
		{"4. After listing the sequence, the arithmetic sequence must be over 50. Below are the arithmetic sequences from 1 to n",
		"4.列出数列后等差数列必定是50多 下面是枚举1到n等差数列"},
		{"5. There are a total of% d results:% d",
		"5.一共有%d项 结果：%d"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P56小学奥数A级课程 例八拓展 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：若干个小盒子放成一排，小明把50多个棋子放入盒子中，一个盒子没有棋子，小光把有棋子的盒子各拿了一只棋子放入盒子里，并调换位置，小明回来检查了盒子并无发现有人动过，盒子个数有几个?"));
	ColPrintf(PrintfCol::方法, Lang("1.根据题意，有一个盒子的个数必定是1，拿完后就是那个空盒子调换位置，每一个盒子棋子个数都要减一，空盒子拿完后必定就是盒子的个数，不然条件无法成立"));
	ColPrintf(PrintfCol::方法, Lang("2.根据第一步所建立的条件，就是一个等差数列：1+2+3+4+……+n"));
	ColPrintf(PrintfCol::方法, Lang("3.列出棋子调换后的数列 n+0+1+2+3+……n-1"));
	ColPrintf(PrintfCol::方法, Lang("4.列出数列后等差数列必定是50多 下面是枚举1到n等差数列"));
	int i = 0;
	int j = 0;
	int h = 0;
	int k = 0;
	int k1 = 0;
	int u = -1;
	bool bOK=0;
	for (;;)
	{
		for (;i <= h;i++)
		{
			k = k+1;
			k1 = k1 + k;
			ColPrintf(PrintfCol::方法, Lang("5.一共有%d项 结果：%d"), i, k1);
			if (k1 >= 50)
			{
				bOK = 1;
				break;

			}
			
			
			
		}
		if (bOK == 1)
		{
			break;
		}

		h++;
	}
}
void P56()
{
	P56_1();
	ColPrintf(PrintfCol::方法, "");
	P56_1_1();
	ColPrintf(PrintfCol::方法, "");
	P56_2();
	ColPrintf(PrintfCol::方法, "");
}
void P56_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P56();
	Lang.SetCurLanguage(LanguageLib::English);
	P56();
	ColPrintf(PrintfCol::方法, "");

}