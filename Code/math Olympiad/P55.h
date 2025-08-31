#pragma once
/*struct TreeVex
{
	int nLevel; //层号
	int nNodeIndex;
	ScanningLine<10, 10, 18, 8>::Point Vex;//顶点坐标
};*/
void P55_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Special A-level Course Question 4: Isometric Sequence","P55计算专题A级课程第四题 等差数列"},
		{"Question: Observe the number matrix below. What is the leftmost number in line 20, and what is the sum of all the numbers in line 20?",
		"题目：观察下面的数阵，第20行最左边的数是几，第二十行所有的数的和是多少?"},
		{"1. List the arithmetic sequence 1+(1+3+5+7+...)",
		"1.列出等差数列 1+(1+3+5+7+……)"},
		{"2. Calculate the last number N1. The last number N1 is equal to the first item sequence N1+((N1- the number of items N2) multiplied by N3- the number of items N2",
		"2.计算最后一个数N1 最后一个数N1=(首项数列N1+((项数N1-多的项数N2)))*倍率N3-多的项数N2"},
		{"3. Calculate the total number and N2 total number and N2=first number N1+((first term N2+last number N1) * number of terms N4/multiplier N3)",
		"3.计算总共数和N2 总共数和N2=第一个数N1+((第一项N2+最后一个数N1)*(项数N1 - 多的项数N2)/倍率N3)"},
		//变量表
		{"ThefirstsequenceN1","首项数列N1"},
		{"NumberofitemsN1","项数N1"},
		{"MultipleitemsN2","多的项数N2"},
		{"MagnificationN3","倍率N3"},
		{"ThefirstitemN2","第一项N2"},
		{"ThelastnumberN1","最后一个数N1"},
		{"TotalnumberandN2","总共数和N2"},
	};
	Lang.AddLanguageTable(
		Language
	);

	DefineLangVarInt(首项数列N1, 1);
	DefineLangVarInt(项数N1, 20);
	DefineLangVarInt(多的项数N2, 1);
	DefineLangVarInt(第一项N2, 1);
	DefineLangVarInt(倍率N3, 2);

	ColPrintf(PrintfCol::标题, Lang("P55计算专题A级课程第四题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：观察下面的数阵，第20行最左边的数是几，第二十行所有的数的和是多少?"));
	typedef ScanningLine<10, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	
	/*float off = 0.5;
	float offXY = 0.5;
	int k = 0;
	int k1 = 1;
	int l = 0.5;
	int o = 1;
	char* kkk = new char[255];
	for (int a = 1;a <= 5;a++)
	{
		for (int a1 = 0;a1 <= k;a1++)
		{
			if (a == 1)
			{
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, 0.5, 0.5, '*', 0);
				sprintf(kkk, "%d", o);
				test.AddText(PrintfCol::顶点标注, k1, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, kkk);
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, -0.5, -0.5, '*', 0);


			}
			else
			{
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5, 8 / 2 + 1 - offXY + a * 0.5, 0.5, 0.5, '*', 0);
				sprintf(kkk, "%d", o);
				test.AddText(PrintfCol::顶点标注, k1, 8 / 2 + 1 - offXY + a * 0.5, kkk);
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5, 8 / 2 + 1 - offXY + a * 0.5, -0.5, -0.5, '*', 0);
			}
			o++;


			offXY = offXY + 1;
		}
		l = l + 0.5;
		offXY = 0;
		k1++;
		k++;
	}*/
	
	int jjj[26];
	for (int i = 1;i <= 25;i++)
	{
		jjj[i] = i;
	}
	float off = 0.5;
	float offXY = 0.5;
	int k = 1;
	int k1 = 1;
	int l = 1;
	int o = 1;
	int g = 2;
	int p = 0;
	int h1 = 0;
	char* kkk = new char[255];
	TreeVex VexArray[100];
	unsigned nMaxVexIndex=0;
	//第一遍枚举所有层的顶点，并初始化顶点数组
	for (int a = 1;a <= 5;a++)
	{
		p = 0;
		h1 = 0;
		sprintf(kkk, "%d", o);
		//test.AddText(PrintfCol::顶点标注, a, 8 / 2 +1, kkk);
		//test.AddScanLineByEdgeGradient(a, 1,8 / 2 + 1, 8 / 2 + 1, 0, 0, '*', 0);
		//初始化中轴数组
		VexArray[o].nLevel = a;
		VexArray[o].Vex.fX = 8 / 2 + 1;
		VexArray[o].Vex.fY = a;
		//枚举右边的顶点，并初始化顶点数组
		for (int a1 = 1;a1 <= a;a1++)
		{
			ScanningLineT::Point Begin = { (float)8 / (float)2 + (float)1 + (float)h1,(float)a };
			ScanningLineT::Point End = { (float)8 / (float)2 + (float)1 + (float)h1 + (float)1,(float)a };
			sprintf(kkk, "%d", o+p);
			//test.AddText(PrintfCol::顶点标注, a, 8 / 2 + 1+h1, kkk);
			//test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');
			
			VexArray[o + p].nLevel = a;
			VexArray[o + p].Vex.fX = Begin.fX;
			VexArray[o + p].Vex.fY = Begin.fY;

			h1++;
			p++;
			nMaxVexIndex = max((o + p), nMaxVexIndex);
		}
		h1 = 0;
		p = 0;
		//枚举左边的顶点，并初始化顶点数组
		for (int a2 = 1;a2 <= a;a2++)
		{
			ScanningLineT::Point Begin = { (float)8 / (float)2 + (float)1 - (float)h1,(float)a };
			ScanningLineT::Point End = { (float)8 / (float)2 + (float)1 - (float)h1 + (float)1,(float)a };
			sprintf(kkk, "%d", o - p);
			//test.AddText(PrintfCol::顶点标注, a, 8 / 2 + 1 - h1, kkk);
			//test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');
			VexArray[o - p].nLevel = a;
			VexArray[o - p].Vex.fX = Begin.fX;
			VexArray[o - p].Vex.fY = Begin.fY;
			nMaxVexIndex = max((o - p), nMaxVexIndex);

			h1++;
			p++;
		}
		o = o + g;
		g=g+2;
	}
	//输入参数：要找的目标顶点索引 返回参数：这个顶点的上一层的最近的父亲节点
	std::function<int(int)> FindNearestVexIndex = [&](int nVexIndex)->int {
			float fMinDiss = 10;
			int nFindIndex = -1;
			for (int nIndex=1;nIndex<nMaxVexIndex;nIndex++)
			{
				float fL = sqrt(
					((VexArray[nVexIndex].Vex.fX- VexArray[nIndex].Vex.fX)* (VexArray[nVexIndex].Vex.fX - VexArray[nIndex].Vex.fX))+
					((VexArray[nVexIndex].Vex.fY - VexArray[nIndex].Vex.fY) * (VexArray[nVexIndex].Vex.fY - VexArray[nIndex].Vex.fY))
				);
				if ((fL > 0.1)&& VexArray[nVexIndex].nLevel> VexArray[nIndex].nLevel)
				{
					if (fMinDiss > fL)
					{
						//上层的最短距离索引
						fMinDiss = fL;
						nFindIndex = nIndex;
					}
				}
			}
			return nFindIndex;
		};

	k = 1;
	k1 = 1;
	l = 1;
	o = 1;
	g = 2;
	p = 0;
	h1 = 0;
	//枚举所有层的顶点数组，查找上一层最近的父亲节点，生成连接线，用线连接点和父亲节点
	for (int a = 1;a <= 5;a++)
	{
		p = 0;
		h1 = 0;
		sprintf(kkk, "%d", o);
		test.AddText(PrintfCol::顶点标注, a, 8 / 2 +1, kkk);
		//test.AddScanLineByEdgeGradient(a, 1,8 / 2 + 1, 8 / 2 + 1, 0, 0, '*', 0);
		int nNearestVexIndex = FindNearestVexIndex(o);
		if (nNearestVexIndex > 0)
		{
			test.AddLine(VexArray[o].Vex, VexArray[nNearestVexIndex].Vex, 0.07, ScanningLineT::FillMode::RealMode, '*');
		}
		for (int a1 = 1;a1 <= a;a1++)
		{
			ScanningLineT::Point Begin = { (float)8 / (float)2 + (float)1 + (float)h1,(float)a };
			ScanningLineT::Point End = { (float)8 / (float)2 + (float)1 + (float)h1 + (float)1,(float)a };
			sprintf(kkk, "%d", o + p);
			test.AddText(PrintfCol::顶点标注, a, 8 / 2 + 1+h1, kkk);
			nNearestVexIndex = FindNearestVexIndex(o + p);
			if (nNearestVexIndex > 0)
			{
				test.AddLine(VexArray[o + p].Vex, VexArray[nNearestVexIndex].Vex, 0.07, ScanningLineT::FillMode::RealMode, '-');
			}
			

			h1++;
			p++;

		}
		h1 = 0;
		p = 0;
		for (int a2 = 1;a2 <= a;a2++)
		{
			ScanningLineT::Point Begin = { (float)8 / (float)2 + (float)1 - (float)h1,(float)a };
			ScanningLineT::Point End = { (float)8 / (float)2 + (float)1 - (float)h1 + (float)1,(float)a };
			sprintf(kkk, "%d", o - p);
			test.AddText(PrintfCol::顶点标注, a, 8 / 2 + 1 - h1, kkk);
			//test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');
			nNearestVexIndex = FindNearestVexIndex(o - p);
			if (nNearestVexIndex > 0)
			{
				test.AddLine(VexArray[o - p].Vex, VexArray[nNearestVexIndex].Vex, 0.07, ScanningLineT::FillMode::RealMode, '+');
			}

			h1++;
			p++;
		}
		o = o + g;
		g = g + 2;
	}
	
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	ColPrintf(PrintfCol::方法, Lang("1.列出等差数列 1+(1+3+5+7+……)"));
	DefineLangVarInt(最后一个数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算最后一个数N1 最后一个数N1=(首项数列N1+((项数N1-多的项数N2)))*倍率N3-多的项数N2"));
	最后一个数N1 = ( (项数N1 - 多的项数N2)) * 倍率N3 - 多的项数N2;
	最后一个数N1.PrintProcessLog(2);
	DefineLangVarInt(总共数和N2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算总共数和N2 总共数和N2=第一个数N1+((第一项N2+最后一个数N1)*(项数N1 - 多的项数N2)/倍率N3)"));
	总共数和N2 = 第一项N2 + ((第一项N2 + 最后一个数N1) * (项数N1 - 多的项数N2) / 倍率N3);
	总共数和N2.PrintProcessLog(3);
}
void P55_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Special A-level Course Question 5, Question 1, Equal Difference Sequence","P55计算专题A级课程第五题第一小题 等差数列"},
		{"Title: Given a sequence of numbers: 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3,..., may I ask:",
		"总题目：已知有一个数列：1，1，2，2，2，2，3，3，3，3，3，3，……，试问："},
		{"(1) What is the position of 15 in this sequence?",
		"(1)15是这个数列的第几个到第几个？"},
		{"1. Calculate the quantity N1 shared by fifteen, which is equal to the quantity N2 multiplied by the number of increases N3 each time",
		"1.计算十五共有的数量N1 十五共有的数量N1=十五数量N2*每次增加次数N3"},
		{"2. Calculate the total number N2 of the first fourteen numbers. The total number N2 of the first fourteen numbers is equal to (the number N4 of the first item+(the number N5 of fourteen multiplied by the number N3 of each increase) multiplied by the total number N6 of the previous items/multiplier ratio",
		"2.计算前十四数共有数量N2 前十四数共有数量N2=(第一项次数N4+(十四数量N5*每次增加次数N3))*前面一共项数N6/倍率"},
		{"3. Calculate the number of times starting from the 15th, N3. The number of times starting from the 15th is N3=the total number of the first fourteen, N2+the number of times starting from the 15th, N3",
		"3.计算十五开始次数N3 十五开始次数N3=前十四数共有数量N2+十五开始增加数量N3"},
		{"4. Calculate the number of ending times N4 for fifteen, which is equal to the number of starting times N3 and the total number N1 shared by fifteen",
		"4.计算十五结束次数N4 十五结束次数N4=十五开始次数N3+十五共有的数量N1"},
		//变量表
		{"FifteenQuantityN2","十五数量N2"},
		{"IncreasethefrequencyN3eachtime","每次增加次数N3"},
		{"NumberN4forthefirstitem","第一项次数N4"},
		{"FourteenQuantityN5","十四数量N5"},
		{"ThetotalnumberofitemsinthefrontisN6","前面一共项数N6"},
		{"Startingfromthe15th,increasethequantityN3","十五开始增加数量N3"},
		{"Magnification","倍率"},
		{"FifteensharedquantitiesN1","十五共有的数量N1"},
		{"ThefirstfourteennumbershaveatotalquantityofN2","前十四数共有数量N2"},
		{"Startingfromthe15th,thenumberoftimesN3","十五开始次数N3"},
		{"FifteenEndingTimesN4","十五结束次数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(十五数量N2, 15);
	DefineLangVarInt(每次增加次数N3, 2);
	DefineLangVarInt(第一项次数N4, 2);
	DefineLangVarInt(十四数量N5, 14);
	DefineLangVarInt(前面一共项数N6, 14);
	DefineLangVarInt(十五开始增加数量N3, 1);
	DefineLangVarInt(倍率, 2);
	ColPrintf(PrintfCol::标题, Lang("P55计算专题A级课程第五题第一小题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("总题目：已知有一个数列：1，1，2，2，2，2，3，3，3，3，3，3，……，试问："));
	DefineLangVarInt(十五共有的数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算十五共有的数量N1 十五共有的数量N1=十五数量N2*每次增加次数N3"));
	十五共有的数量N1 = 十五数量N2 * 每次增加次数N3;
	十五共有的数量N1.PrintProcessLog(1);
	DefineLangVarInt(前十四数共有数量N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算前十四数共有数量N2 前十四数共有数量N2=(第一项次数N4+(十四数量N5*每次增加次数N3))*前面一共项数N6/倍率"));
	前十四数共有数量N2 = (第一项次数N4 + (十四数量N5 * 每次增加次数N3)) * 前面一共项数N6 / 倍率;
	前十四数共有数量N2.PrintProcessLog(2);
	DefineLangVarInt(十五开始次数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算十五开始次数N3 十五开始次数N3=前十四数共有数量N2+十五开始增加数量N3"));
	十五开始次数N3 = 前十四数共有数量N2 + 十五开始增加数量N3;
	十五开始次数N3.PrintProcessLog(3);
	DefineLangVarInt(十五结束次数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算十五结束次数N4 十五结束次数N4=十五开始次数N3+十五共有的数量N1"));
	十五结束次数N4 = 十五开始次数N3 + 十五共有的数量N1;
	十五结束次数N4.PrintProcessLog(3);
}
void P55_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Special A-level Course Question 5, Question 2, Equal Difference Sequence","P55计算专题A级课程第五题第二小题 等差数列"},
		{"Question: What is the 100th number in this sequence",
		"题目：这个数列中的第一百个数是多少"},
		{"1. Calculate the hundredth arithmetic sequence because in the previous question, if there are 28 items, it will reach 210. Therefore, we can halve it. If there are too many, we can remove them, and if there are too few, we can add more items",
		"1.计算第一百个数等差数列 因为上一题到28个项就到210，所以我们可以对它折半如果多了，就用去除，如果少了继续加项"},
		{"2. If there are% d sequences, the sum is% d",
		"2.如果有%d项 数列和就是%d"},
		{"3. Because the maximum number of enumeration is% d, the first term of the 100th number is% d",
		"3.因为枚举出来最大是%d个，所以第一百这个数的一项是%d"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P55计算专题A级课程第五题第二小题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：这个数列中的第一百个数是多少"));
	int nFormula = 9;
	int k = 7;
	int h = 2;
	int j = 0;
	int h1 = 0;
	
		for (j = 0;j < 11;j++)
		{
			
			ColPrintf(PrintfCol::方法, Lang("2.如果有%d项 数列和就是%d"),j,h1);
			h1 = h1 + h;
			h = h + 2;
			
		}
		//h = 0;
	
	ColPrintf(PrintfCol::方法, Lang("3.因为枚举出来最大是%d个，所以第一百这个数的一项是%d"), j-1, (j-1-1));
}
void P55_2_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Topic A-level Course Question 5, Question 3, Equal Difference Sequence","P55计算专题A级课程第五题第三小题 等差数列"},
		{"Question: What is the sum of the first 100 numbers in this sequence?",
		"题目：这个数列的前一百个数的和是多少?"},
		{"1. List the arithmetic sequence, where each number is twice as large as the number itself. Based on the previous question, where the 100th digit is preceded by 90 digits, this is 18 and followed by a 10. Therefore, the previous question is 1 * 2+2 * 4+3 * 6+4 * 8...+9 * 18+10 * 10",
		"1.列出等差数列S1 每个数的个数都比数大2倍 又根据上一题第100个数字的前一项是90个数字这是18，并且后面加了一个10 所以联系上一题是1*2+2*4+3*6+4*8……+9*18+10*10"},
		{"2. Simplify equation S1 to obtain S2. Propose 2 * (1+4+9...+81)+100",
		"2.化简式子S1得到S2 把2提出 2*(1+4+9……+81)+100"},
		{"3. Transform S2 into Sum of Squares Problem 2 * (1 ^ 2+2 ^ 2+3 ^ 2+4 ^ 2...+9 ^ 2)+100",
		"3.变换S2成平方和问题 2*(1^2+2^2+3^2+4^2……+9^2)+100"},
		{"4. Calculate the sum of the top 100 items N1=(total number of items N2 * (total number of items N2+missing items N3) * (multiplier N4 * total number of items N2+missing items N3)/Square multiplier N2",
		"4.计算前一百数的和N1 前一百数的和N1=(总共的项数N2*(总共的项数N2+少的项数N3))*(倍率N4*总共的项数N2+少的项数N3)/平方倍率N2"},
		//变量表
		{"ThetotalnumberofitemsN2","总共的项数N2"},
		{"FewitemsN3","少的项数N3"},
		{"MagnificationN4","倍率N4"},
		{"ThesumofthefirsthundrednumbersN1","前一百数的和N1"},
		{"Square multiplier N2","平方倍率N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共的项数N2, 9);
	DefineLangVarInt(少的项数N3, 1);
	DefineLangVarInt(倍率N4, 2);
	DefineLangVarInt(平方倍率N2, 6);
	ColPrintf(PrintfCol::标题, Lang("P55计算专题A级课程第五题第三小题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：这个数列的前一百个数的和是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.列出等差数列S1 每个数的个数都比数大2倍 又根据上一题第100个数字的前一项是90个数字这是18，并且后面加了一个10 所以联系上一题是1*2+2*4+3*6+4*8……+9*18+10*10"));
	ColPrintf(PrintfCol::方法, Lang("2.化简式子S1得到S2 把2提出 2*(1+4+9……+81)+100"));
	ColPrintf(PrintfCol::方法, Lang("3.变换S2成平方和问题 2*(1^2+2^2+3^2+4^2……+9^2)+100"));
	DefineLangVarInt(前一百数的和N1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算前一百数的和N1 前一百数的和N1=(总共的项数N2*(总共的项数N2+少的项数N3))*(倍率N4*总共的项数N2+少的项数N3)/平方倍率N2"));
	前一百数的和N1 = ((总共的项数N2 * (总共的项数N2 + 少的项数N3)) * (倍率N4 * 总共的项数N2 + 少的项数N3)/ 平方倍率N2)* 倍率N4;
	前一百数的和N1.PrintProcessLog(4);
}
void P55_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Special A-level Course Question 6: Isometric Sequence","P55计算专题A级课程第六题 等差数列"},
		{"Question: Given sequences 2, 3, 4, 6, 6, 9, 8, 12..., what is the 2000th number in this sequence? What is the number 2013? Calculate the sum of the first 100 items?",
		"题目：已知数列2，3，4，6，6，9，8，12……，问这个数列的第2000个数是多少？第2013个数是多少？求出前100项的和?"},
		{"1. Calculate the number of two thousand, N1. The number of two thousand is equal to the number of even digits at the beginning of the column, N2+((two thousand N3/magnification N4) - the number with more digits at the beginning, N5) * even digit tolerance, N6",
		"1.计算两千的个数N1 两千的个数N1=偶数位数列开头N2+((两千N3/倍率N4)-开头多的数N5)*偶数位公差N6"},
		{"2. Calculate two thousand and thirteen numbers N2. Two thousand and thirteen numbers N2=odd digit column beginning N2+((two thousand and thirteen N3/multiplier N4) - number with more beginning N5+remaining error N6) * odd digit tolerance N6",
		"2.计算两千零十三个数N2 两千零十三个数N2=奇数位数列开头N2+((两千零十三N3/倍率N4)-开头多的数N5+余下误差N6)*奇数位公差N6"},
		{"3. Calculate the first 100 even numbers N3. The first 100 even numbers N3=(the beginning of the even number column N2+(the beginning of the odd number column N2+the number of odd and even occupancy items M8) * the number of odd and even occupancy items M8/multiplier N4",
		"3.计算前一百项偶数N3 前一百项偶数N3=(偶数位数列开头N2+(奇数位数列开头N2+奇偶各占项数M8))*奇偶各占项数M8/倍率N4"},
		{"4. Calculate the first 100 odd numbered items N3=(the beginning of the odd numbered column N2+the first 100 N7) * the number of odd and even occupying items M8/multiplier N4",
		"4.计算前一百项奇数N3 前一百项奇数N3=(奇数位数列开头N2+前一百N7)*奇偶各占项数M8/倍率N4"},
		{"5. Calculate the first 100 items N4. The first 100 items N4=the first 100 even items N3+the first 100 odd items N3",
		"5.计算前一百项N4 前一百项N4=前一百项偶数N3+前一百项奇数N3"},
		//变量表
		{"StartingwithanevendigitcolumnN2","偶数位数列开头N2"},
		{"TwothousandN3","两千N3"},
		{"MagnificationN4","倍率N4"},
		{"NumberN5withmoreatthebeginning","开头多的数N5"},
		{"EvenbittoleranceN6","偶数位公差N6"},
		{"StartingwithanodddigitcolumnN2","奇数位数列开头N2"},
		{"TwothousandthirteenN3","两千零十三N3"},
		{"RemainingerrorN6","余下误差N6"},
		{"OdddigittoleranceN6","奇数位公差N6"},
		{"Top100N7","前一百N7"},
		{"NumberofoddandevenitemsM8","奇偶各占项数M8"},
		{"ThenumberoftwothousandN1","两千的个数N1"},
		{"TwothousandandthirteennumbersN2","两千零十三个数N2"},
		{"Thefirst100evennumbersN3","前一百项偶数N3"},
		{"Thefirst100oddnumbereditemsN3","前一百项奇数N3"},
		{"Top100itemsN4","前一百项N4"},

	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(偶数位数列开头N2, 3);
	DefineLangVarInt(两千N3, 2000);
	DefineLangVarInt(倍率N4, 2);
	DefineLangVarInt(开头多的数N5, 1);
	DefineLangVarInt(偶数位公差N6, 3);
	DefineLangVarInt(奇数位数列开头N2, 2);
	DefineLangVarInt(两千零十三N3, 2013);
	DefineLangVarInt(余下误差N6, 1);
	DefineLangVarInt(奇数位公差N6, 2);
	DefineLangVarInt(前一百N7, 100);
	DefineLangVarInt(奇偶各占项数M8, 50);
	ColPrintf(PrintfCol::标题, Lang("P55计算专题A级课程第六题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：已知数列2，3，4，6，6，9，8，12……，问这个数列的第2000个数是多少？第2013个数是多少？求出前100项的和?"));
	DefineLangVarInt(两千的个数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算两千的个数N1 两千的个数N1=偶数位数列开头N2+((两千N3/倍率N4)-开头多的数N5)*偶数位公差N6"));
	两千的个数N1 = 偶数位数列开头N2 + ((两千N3 / 倍率N4) - 开头多的数N5) * 偶数位公差N6;
	两千的个数N1.PrintProcessLog(1);
	DefineLangVarInt(两千零十三个数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算两千零十三个数N2 两千零十三个数N2=奇数位数列开头N2+((两千零十三N3/倍率N4)-开头多的数N5+余下误差N6)*奇数位公差N6"));
	两千零十三个数N2 = 奇数位数列开头N2 + ((两千零十三N3 / 倍率N4) - 开头多的数N5 + 余下误差N6) * 奇数位公差N6;
	两千零十三个数N2.PrintProcessLog(2);
	DefineLangVarInt(前一百项偶数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算前一百项偶数N3 前一百项偶数N3=(偶数位数列开头N2+(奇数位数列开头N2+奇偶各占项数M8))*奇偶各占项数M8/倍率N4"));
	前一百项偶数N3 = (偶数位数列开头N2 + (奇数位数列开头N2 + 奇偶各占项数M8)) * 奇偶各占项数M8 / 倍率N4;
	前一百项偶数N3.PrintProcessLog(3);
	DefineLangVarInt(前一百项奇数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算前一百项奇数N3 前一百项奇数N3=(奇数位数列开头N2+前一百N7)*奇偶各占项数M8/倍率N4"));
	前一百项奇数N3 = (奇数位数列开头N2 + 前一百N7) * 奇偶各占项数M8 / 倍率N4;
	前一百项奇数N3.PrintProcessLog(4);
	DefineLangVarInt(前一百项N4, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算前一百项N4 前一百项N4=前一百项偶数N3+前一百项奇数N3"));
	前一百项N4 = 前一百项偶数N3 + 前一百项奇数N3;
	前一百项N4.PrintProcessLog(5);
}
void P55()
{
	P55_1();
	ColPrintf(PrintfCol::方法, "");
	P55_2_1();
	ColPrintf(PrintfCol::方法, "");
	P55_2_2();
	ColPrintf(PrintfCol::方法, "");
	P55_2_3();
	ColPrintf(PrintfCol::方法, "");
	P55_3();
	ColPrintf(PrintfCol::方法, "");
}
void P55_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P55();
	Lang.SetCurLanguage(LanguageLib::English);
	P55();
	ColPrintf(PrintfCol::方法, "");

}