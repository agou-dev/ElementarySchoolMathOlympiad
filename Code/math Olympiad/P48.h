#pragma once

void P48_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 1 Tree enumeration","P48例一 树状枚举"},
		{"Title: As shown in the figure, how many different ways can you walk from point A to point F by following the arrow?",
		"题目：如图，从A沿线段走到F点，要求只能按箭头走，共有多少种不同的走法?"},
		{"Analysis: It is possible to enumerate the number of lines from point A to the next point, and then deduce the next point from the enumerated points, and so on. At the end, the final point can be counted to obtain the result",
		"分析：可以枚举A到下一点直线的种数，再通过枚举出来的点推出下一点以此类推，到最后时把枚举出来最后的点数出就可得出"},
		{"1. List the route from A to C: A ->C ->E ->F C ->F C ->D ->F",
		"1.枚举从A到C这条路线 A->C->E->F C->F C->D->F"},
		{"2. List the route A to D, A ->D ->F",
		"2.枚举A到D这条路线 A->D->F"},
		{"3. List the route from A to B: A ->B ->D ->F",
		"3.枚举A到B这条路线 A->B->D->F"},
		{"There are a total of 5 routes available",
		"4.一共有5种路线"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(5),float(1.0)},{float(5),float(5.0)} };
	test.AddPolygon(ScanningLineT::Point(float(1.0), float(5.0)), Vex1, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex2 = { {float(5),float(1)},{float(9),float(1.0)},{float(9),float(5.0)} };
	test.AddPolygon(ScanningLineT::Point(float(5.0), float(5.0)), Vex2, ScanningLineT::FillMode::EdgeMode, '*');
	test.AddScanLineByEdgeGradient(1.0, 4.0, 1.0, 1.0, 1, 1, '*');
	test.AddScanLineByEdgeGradient(1.0, 4.0, 5.0, 5.0, 1, 1, '*');
	test.AddScanLineByEdgeGradient(0.7, 0.3, 2.5, 2.5, 1, 1, '*');
	test.AddScanLineByEdgeGradient(2.3, 0.3, 2.5, 2.5, 0, 0, '*');
	test.AddScanLineByEdgeGradient(2.5, 0.3, 0.7, 0.7, 1, 1, '*');
	test.AddScanLineByEdgeGradient(4.7, 0.3, 2.5, 2.5, 1, 1, '*');
	test.AddScanLineByEdgeGradient(2.5, 0.3, 4.7, 4.7, 1, 1, '*');
	test.AddScanLineByEdgeGradient(2.3, 0.3, 6.5, 6.5, 0, 0, '*');
	ColPrintf(PrintfCol::标题, Lang("P48例一 树状枚举"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图，从A沿线段走到F点，要求只能按箭头走，共有多少种不同的走法?"));
	ColPrintf(PrintfCol::标题, Lang("分析：可以枚举A到下一点直线的种数，再通过枚举出来的点推出下一点以此类推，到最后时把枚举出来最后的点数出就可得出"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	ColPrintf(PrintfCol::方法, Lang("1.枚举从A到C这条路线 A->C->E->F C->F C->D->F"));
	ColPrintf(PrintfCol::方法, Lang("2.枚举A到D这条路线 A->D->F"));
	ColPrintf(PrintfCol::方法, Lang("3.枚举A到B这条路线 A->B->D->F"));
	ColPrintf(PrintfCol::方法, Lang("4.一共有5种路线"));
}


struct KVPair
{
	const char* pszExp;
	const char* pszName;
};

void P48_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 2 Tree enumeration","P48例二 树状枚举"},
		{"Question: A, B, and C practice passing the ball. At the beginning, the ball is in A's hands. After three passes, how many ways can they pass the ball without A's hands?",
		"题目：A，B，C三人练习传球，开始球在A手里，经过三次传球后，求不在A手里的传球方法有几种?"},
		{"Analysis: The question he asked is not in A's hands, which means that after enumeration, only BC can be obtained, so the final result needs to subtract A. (| represents or)",
		"分析：这一题他问的是不在A手里，这说明枚举出来后只能有BC，所以最终结果要减去A.(|表示或)"},
		{"1. List all types of routes from A to B A ->B ->A ->B|C A ->B ->C ->A|B",
		"1.枚举从A到B的所有路线种数 A->B->A->B|C A->B->C->A|B"},
		{"2. List all route types from A to C A ->C ->A ->B|C A ->C ->B ->A|C",
		"2.枚举从A到C的所有路线种数 A->C->A->B|C A->C->B->A|C"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P48例二 树状枚举"));
	ColPrintf(PrintfCol::标题, Lang("题目：A，B，C三人练习传球，开始球在A手里，经过三次传球后，求不在A手里的传球方法有几种?"));
	ColPrintf(PrintfCol::标题, Lang("分析：这一题他问的是不在A手里，这说明枚举出来后只能有BC，所以最终结果要减去A.(|表示或)"));
	typedef ScanningLine<10, 10, 18, 8> ScanningLineT;
	
	ScanningLineT test;
	TreeContext TNode;
	TNode.Init(4);
	TNode.CreateTree();
	TNode.VexMake(1.0, 0.8);
	/*
	char szIndex[128];
	sprintf(szIndex, "Root%d[%d-%d]", 0, TNode.m_nRootNodeIndex,-1);
	test.AddText(PrintfCol::标题, TNode.VexArray[TNode.m_nRootNodeIndex].Vex.fY, TNode.VexArray[TNode.m_nRootNodeIndex].Vex.fX, szIndex);
	TNode.EnumTree(TNode.m_nRootNodeIndex, 0, [&](int nNodeIndex, int nLevel) {

		int nLeftVexIndex = TNode.NodeArray[nNodeIndex].nchildVexIndex[0];
		int nRightVexIndex = TNode.NodeArray[nNodeIndex].nchildVexIndex[1];
		sprintf(szIndex,"L%d[%d-%d]", nLevel, nLeftVexIndex, TNode.NodeArray[nNodeIndex].nParentVexIndex);
		ColPrintf(PrintfCol::标题, "%s",szIndex);
		test.AddText(PrintfCol::标题, TNode.VexArray[nLeftVexIndex].Vex.fY, TNode.VexArray[nLeftVexIndex].Vex.fX, szIndex);
		sprintf(szIndex, "R%d[%d-%d]", nLevel, nRightVexIndex, TNode.NodeArray[nNodeIndex].nParentVexIndex);
		ColPrintf(PrintfCol::标题, "%s\n", szIndex);
		test.AddText(PrintfCol::标题, TNode.VexArray[nRightVexIndex].Vex.fY, TNode.VexArray[nRightVexIndex].Vex.fX, szIndex);
		});
	TNode.EnumTree(TNode.m_nRootNodeIndex, 0, [&](int nNodeIndex, int nLevel) {
		int nLeftVexIndex = TNode.NodeArray[nNodeIndex].nchildVexIndex[0];
		int nRightVexIndex = TNode.NodeArray[nNodeIndex].nchildVexIndex[1];
		ScanningLineT::Point Bingin;
		ScanningLineT::Point End;
		ScanningLineT::Point End1;
		//if (TNode.NodeArray[nNodeIndex].nParentVexIndex !=  - 1)
		{
			Bingin.fX = TNode.VexArray[TNode.NodeArray[nNodeIndex].nSelfVexIndex].Vex.fX;
			Bingin.fY = TNode.VexArray[TNode.NodeArray[nNodeIndex].nSelfVexIndex].Vex.fY;
			End.fX = TNode.VexArray[nRightVexIndex].Vex.fX;
			End.fY = TNode.VexArray[nRightVexIndex].Vex.fY;
			End1.fX = TNode.VexArray[nLeftVexIndex].Vex.fX;
			End1.fY = TNode.VexArray[nLeftVexIndex].Vex.fY;
			test.AddLine(Bingin, End, 0.07, PrintfCol::标题);
			test.AddLine(Bingin, End1, 0.07, PrintfCol::标题);
		}
		
		});
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	*/
	
	
	//test.ClearOp();
	KVPair NameTab[] =
	{
		{"","A"},
		{"L","B"},
		{"R","C"},
		{"LL","A"},
		{"LR","C"},
		{"RL","A"},
		{"RR","B"},
		{"LLL","B"},
		{"LLR","C"},
		{"LRL","A"},
		{"LRR","B"},
		{"RRR","C"},
		{"RRL","A"},
		{"RLL","B"},
		{"RLR","C"},
	};
	for (int i = 0;i < sizeof(NameTab) / sizeof(KVPair);i++)
	{
		TNode.SetVex(NameTab[i].pszExp, [&](int nFindVexInde) {
			test.AddText(PrintfCol::标题, TNode.VexArray[nFindVexInde].Vex.fY, TNode.VexArray[nFindVexInde].Vex.fX, NameTab[i].pszName);
			});
	}
	
	//sprintf(szIndex, "Root%d[%d-%d]", 0, TNode.m_nRootNodeIndex, -1);
	//test.AddText(PrintfCol::标题, TNode.VexArray[TNode.m_nRootNodeIndex].Vex.fY, TNode.VexArray[TNode.m_nRootNodeIndex].Vex.fX, szIndex);
	
	TNode.EnumTree(TNode.m_nRootNodeIndex, 0, [&](int nNodeIndex, int nLevel) {
		int nLeftVexIndex = TNode.NodeArray[nNodeIndex].nchildVexIndex[0];
		int nRightVexIndex = TNode.NodeArray[nNodeIndex].nchildVexIndex[1];
		ScanningLineT::Point Bingin;
		ScanningLineT::Point End;
		ScanningLineT::Point End1;
		//if (TNode.NodeArray[nNodeIndex].nParentVexIndex !=  - 1)
		{
			Bingin.fX = TNode.VexArray[TNode.NodeArray[nNodeIndex].nSelfVexIndex].Vex.fX;
			Bingin.fY = TNode.VexArray[TNode.NodeArray[nNodeIndex].nSelfVexIndex].Vex.fY;
			End.fX = TNode.VexArray[nRightVexIndex].Vex.fX;
			End.fY = TNode.VexArray[nRightVexIndex].Vex.fY;
			End1.fX = TNode.VexArray[nLeftVexIndex].Vex.fX;
			End1.fY = TNode.VexArray[nLeftVexIndex].Vex.fY;
			test.AddLine(Bingin, End, 0.07, PrintfCol::标题);
			test.AddLine(Bingin, End1, 0.07, PrintfCol::标题);
		}

		});
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	/*
	typedef ScanningLine<10, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	//int k = 1;
	float BeginoffsetX = 0;
	float BeginoffsetY = 4;
	float BeginoffsetX1 = 0;
	float BeginoffsetY1 = 4;
	float off = 0.5;
	float offXY = 0.5;
	int k = 0;
	int k1 = 1;
	int l = 0.5;
	int o = 1;
	char* kkk = new char[255];
	
	
	int g = 2;
	int p = 0;
	int h1 = 0;
	for (int a = 1;a <= 3;a++)
	{
		p = 0;
		h1 = 0;
		sprintf(kkk, "%d", o);
		//test.AddText(PrintfCol::顶点标注, a, 8 / 2 +1, kkk);
		//test.AddScanLineByEdgeGradient(a, 1,8 / 2 + 1, 8 / 2 + 1, 0, 0, '*', 0);
		//初始化中轴数组

		VexArray[o].nLevel = a;
		VexArray[o].Vex.fX = 8 / 2 + 1;
		VexArray[o].Vex.fY = 8 / 2;
		//枚举右边的顶点，并初始化顶点数组
		
		h1 = 0;
		p = 0;
		//枚举左边的顶点，并初始化顶点数组
		
		o = o + g;
		g = g + 2;
	}
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
	}
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	ColPrintf(PrintfCol::方法, Lang("1.枚举从A到B的所有路线种数 A->B->A->B|C A->B->C->A|B"));
	ColPrintf(PrintfCol::方法, Lang("2.枚举从A到C的所有路线种数 A->C->A->B|C A->C->B->A|C"));
	*/
}
void P48_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 1: Integer Decomposition","P48例一第一小题 整数分解"},
		{"(1) How many different ways are there to divide 10 pieces of candy into Xiaohong and Xiaoli, with each person receiving at least one piece?",
		"(1)把10块糖全部分给小红和小李，每人至少分一块，共有几种不同的分法?"},
		{"Analysis: Since the total quantity is 10 and there are 2 people, 10 can be converted into the form of the sum of two integers",
		"分析：总数量既然是10，且有2人，可以把10化为两个整数和的形式"},
		{"%d=%d+%d",
		"%d=%d+%d"},
		{"There are a total of %d different classification methods",
		"一共有%d种不同的分法"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P48例一第一小题 整数分解"));
	ColPrintf(PrintfCol::标题, Lang("(1)把10块糖全部分给小红和小李，每人至少分一块，共有几种不同的分法?"));
	ColPrintf(PrintfCol::标题, Lang("分析：总数量既然是10，且有2人，可以把10化为两个整数和的形式"));
	int h = 0;
	for (int i = 1;i <= 9;i++)
	{
		for (int j = 1;j <= 9;j++)
		{
			if (i + j == 10)
			{
				h++;
				ColPrintf(PrintfCol::方法, Lang("%d=%d+%d"),i+j,i,j);
			}
		}
	}
	ColPrintf(PrintfCol::方法, Lang("一共有%d种不同的分法"), h);
}
void P48_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 1 Second Question: Integer Decomposition","P48例一第二小题 整数分解"},
		{"(1) How many different ways are there to divide 10 pieces of candy into Xiaohong and Xiaoli, with each person receiving at least one piece?",
		"(2)小红分到4块糖，她想每天至少吃一颗，最多3天吃完，共有多少种不同吃法"},
		{"Analysis: Since the total quantity is 10 and there are 2 people, 10 can be converted into the form of the sum of two integers",
		"分析：这里变为了天数，不过我们还可以用上一道题的方法，可以把天数想象成人，一天就是一个人。"},
		{"The number of types of sugar consumed in a day:% d=% d",
		"一天吃这些糖种数：%d=%d"},
		{"The number of sugar types to eat in two days:% d=% d+%d",
		"二天吃这些糖种数：%d=%d+%d"},
		{"The number of sugar types to eat in two days:% d=% d+%d",
		"三天吃这些糖种数：%d=%d+%d+%d"},
		{"There are a total of% d different ways of eating",
		"一共有%d种不同吃法"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P48例一第一小题 整数分解"));
	ColPrintf(PrintfCol::标题, Lang("(1)把10块糖全部分给小红和小李，每人至少分一块，共有几种不同的分法?"));
	ColPrintf(PrintfCol::标题, Lang("分析：这里变为了天数，不过我们还可以用上一道题的方法，可以把天数想象成人，一天就是一个人。"));
	int h = 0;
	for (int i = 1;i <= 4;i++)
	{
		if (i  == 4)
		{
			h++;
			ColPrintf(PrintfCol::方法, Lang("一天吃这些糖种数：%d=%d"), i ,i);
		}
	}
	for (int i = 1;i <= 4;i++)
	{
		for (int j = 1;j <= 4;j++)
		{
			if (i + j == 4)
			{
				h++;
				ColPrintf(PrintfCol::方法, Lang("二天吃这些糖种数：%d=%d+%d"), i + j, i, j);
			}
		}
	}
	for (int i = 1;i <= 4;i++)
	{
		for (int j = 1;j <= 4;j++)
		{
			for (int k = 1;k <= 4;k++)
			{
				if (i + j+k == 4)
				{
					h++;
					ColPrintf(PrintfCol::方法, Lang("三天吃这些糖种数：%d=%d+%d+%d"), i + j+k, i, j,k);
				}
			}
			
		}
	}
	ColPrintf(PrintfCol::方法, Lang("一共有%d种不同吃法"), h);
}
void P48_3_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 1 Second Question: Integer Decomposition","P48例一第二小题 整数分解"},
		{"(2) Xiao Li was given 6 pieces of candy, and he wanted to eat at least two of them every day until he finished. How many different ways are there to eat them",
		"(2)小李分到6块糖，他想每天至少吃两颗，直到吃完，共有多少种不同吃法"},
		{"Analysis: He did not give a specific number of days here, so we will analyze it ourselves. He eats at least 2 pills every day, a total of 6 pills, which is 6/2 pills.",
		"分析：这里他没有给具体的天数所以我们自己来分析，他每天至少吃2颗，共有6颗，就是6/2颗。"},
		{"The number of types of sugar consumed in a day:% d=% d",
		"一天吃这些糖种数：%d=%d"},
		{"The number of sugar types to eat in two days:% d=% d+%d",
		"二天吃这些糖种数：%d=%d+%d"},
		{"The number of sugar types to eat in two days:% d=% d+%d",
		"三天吃这些糖种数：%d=%d+%d+%d"},
		{"There are a total of% d different ways of eating",
		"一共有%d种不同吃法"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P48例一第二小题 整数分解"));
	ColPrintf(PrintfCol::标题, Lang("(1)把10块糖全部分给小红和小李，每人至少分一块，共有几种不同的分法?"));
	ColPrintf(PrintfCol::标题, Lang("分析：这里他没有给具体的天数所以我们自己来分析，他每天至少吃2颗，共有6颗，就是6/2颗。"));
	int h = 0;
	for (int i = 2;i <= 6;i++)
	{
		if (i == 6)
		{
			h++;
			ColPrintf(PrintfCol::方法, Lang("一天吃这些糖种数：%d=%d"), i, i);
		}
	}
	for (int i = 2;i <= 6;i++)
	{
		for (int j = 2;j <= 6;j++)
		{
			if (i + j == 6)
			{
				h++;
				ColPrintf(PrintfCol::方法, Lang("二天吃这些糖种数：%d=%d+%d"), i + j, i, j);
			}
		}
	}
	for (int i = 2;i <= 6;i++)
	{
		for (int j = 2;j <= 6;j++)
		{
			for (int k = 2;k <= 6;k++)
			{
				if (i + j + k == 6)
				{
					h++;
					ColPrintf(PrintfCol::方法, Lang("三天吃这些糖种数：%d=%d+%d+%d"), i + j + k, i, j, k);
				}
			}

		}
	}
	ColPrintf(PrintfCol::方法, Lang("一共有%d种不同吃法"), h);
}
void P48_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example Two Integer Decomposition","P48例二 整数分解"},
		{"Question: There are one line segment of length 1, 2, 3, 4, 5, 6, 7, 8, and 9, and several line segments are selected to form a square. How many different selection methods are there",
		"题目：有长度为1，2，3，4，5，6，7，8，9的线段各一条，从中选出若干条线段来组成正方形，共有多少种不同的选法"},
		{"Analysis: Since the length of line segments is regular and traceable, we can ignore them. However, the total length of line segments needs to be calculated and then divided by 4 to obtain the length of an edge, which can be enumerated",
		"分析：因为线段长度都是有规律可寻的，所以我们可以忽略，但线段的总长度是要算出的最后除以4得到一条边的长度，枚举出来就可以."},
		{"1. Calculate the length N1 of all line segments. The length N1 of all line segments is equal to the length L1 of the first line segment, the length L2 of the second line segment, the length L3 of the third line segment, the length\nL4 of the fourth line segment, the length L5 of the fifth line segment, the length L6 of the sixth line segment, the length L7 of the seventh line segment, the length L8 of the eighth line segment, and the length L9 of the ninth line segment",
		"1.计算所有线段的长度N1 所有线段的长度N1=第1条线段长度L1+第2条线段长度L2+第3条线段长度L3+第4条线段长度L4+第5条线段长度L5+第6条线段长度L6+第7条线段长度L7+第8条线段长度L8+第9条线段长度L9"},
		{"2. Calculate the length L10 of each edge. The length L10 of each edge is equal to the length N1 of all line segments divided by the number of sides N2 of the square",
		"2.计算每条边的长度L10 每条边的长度L10=所有线段的长度N1/正方形边数N2"},
		{"3. List% d=% d+% d with side length of% d",
		"3.枚举边长为%d的 %d=%d+%d"},
		{"There are a total of% d selection methods",
		"一共有%d种选法"},
		//变量表
		{"ThefirstlinesegmentlengthL1","第1条线段长度L1"},
		{"ThelengthL2ofthesecondlinesegment","第2条线段长度L2"},
		{"ThelengthofthethirdlinesegmentL3","第3条线段长度L3"},
		{"ThelengthL4ofthefourthlinesegment","第4条线段长度L4"},
		{"Article5:LengthL5ofLineSegment","第5条线段长度L5"},
		{"Section6LengthL6","第6条线段长度L6"},
		{"Article7:LengthofLineSegmentL7","第7条线段长度L7"},
		{"Thelengthofthe8thlinesegmentisL8","第8条线段长度L8"},
		{"Article9:LengthofLineSegmentL9","第9条线段长度L9"},
		{"SquaresidecountN2","正方形边数N2"},
		{"ThelengthN1ofalllinesegments","所有线段的长度N1"},
		{"LengthL10ofeachedge","每条边的长度L10"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第1条线段长度L1, 1);
	DefineLangVarInt(第2条线段长度L2, 2);
	DefineLangVarInt(第3条线段长度L3, 3);
	DefineLangVarInt(第4条线段长度L4, 4);
	DefineLangVarInt(第5条线段长度L5, 5);
	DefineLangVarInt(第6条线段长度L6, 6);
	DefineLangVarInt(第7条线段长度L7, 7);
	DefineLangVarInt(第8条线段长度L8, 8);
	DefineLangVarInt(第9条线段长度L9, 9);
	DefineLangVarInt(正方形边数N2, 4);
	ColPrintf(PrintfCol::标题, Lang("P48例二 整数分解"));
	ColPrintf(PrintfCol::标题, Lang("题目：有长度为1，2，3，4，5，6，7，8，9的线段各一条，从中选出若干条线段来组成正方形，共有多少种不同的选法"));
	ColPrintf(PrintfCol::标题, Lang("分析：因为线段长度都是有规律可寻的，所以我们可以忽略，但线段的总长度是要算出的最后除以4得到一条边的长度，枚举出来就可以."));
	DefineLangVarInt(所有线段的长度N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算所有线段的长度N1 所有线段的长度N1=第1条线段长度L1+第2条线段长度L2+第3条线段长度L3+第4条线段长度L4+第5条线段长度L5+第6条线段长度L6+第7条线段长度L7+第8条线段长度L8+第9条线段长度L9"));
	所有线段的长度N1 = 第1条线段长度L1 + 第2条线段长度L2 + 第3条线段长度L3 + 第4条线段长度L4 + 第5条线段长度L5 + 第6条线段长度L6 + 第7条线段长度L7 + 第8条线段长度L8 + 第9条线段长度L9;
	所有线段的长度N1.PrintProcessLog(1);
	DefineLangVarInt(每条边的长度L10, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每条边的长度L10 每条边的长度L10=所有线段的长度N1/正方形边数N2"));
	每条边的长度L10 = 所有线段的长度N1 / 正方形边数N2;
	每条边的长度L10.PrintProcessLog(2);
	int h = 0;
	int h1 = 0;
	int g = 0;
	for (int i = 2;i <= 11;i++)
	{
		for (int j = 2;j <= 11;j++)
		{
			if (i + j == 11)
			{
				h++;
				ColPrintf(PrintfCol::方法, Lang("3.枚举边长为%d的 %d=%d+%d"), i + j, i+j, i,j);
				if (h == 4)
				{
					h = 0;
					h1++;

				}
			}
		}
	}
	h1 = h1 / 2;
	g = g + h1;
	for (int i = 1;i <= 10;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			if (i + j == 10)
			{
				h++;
				ColPrintf(PrintfCol::方法, Lang("3.枚举边长为%d的 %d=%d+%d"), i + j, i + j, i, j);
				if (h == 4)
				{
					h = 0;
					h1++;
				}
			}
		}
	}
	h1 = h1 / 2;
	g = g + h1;
	h = 0;
	for (int i = 0;i <= 9;i++)
	{
		for (int j = 0;j <= 9;j++)
		{
			if (i + j == 9)
			{
				h++;
				ColPrintf(PrintfCol::方法, Lang("3.枚举边长为%d的 %d=%d+%d"), i + j, i + j, i, j);
				
			}
		}
	}
	h = h / 2;
	g = g + h;
	for (int i = 1;i <= 8;i++)
	{
		for (int j = 1;j <= 8;j++)
		{
			if (i + j == 8)
			{
				h++;
				ColPrintf(PrintfCol::方法, Lang("3.枚举边长为%d的 %d=%d+%d"), i + j, i + j, i, j);
				if (h == 4)
				{
					h = 0;
					h1++;
				}
			}
		}
	}
	h1 = h1 / 2;
	g = g + h1;
	for (int i = 1;i <= 7;i++)
	{
		for (int j = 1;j <= 7;j++)
		{
			if (i + j == 7)
			{
				h++;
				ColPrintf(PrintfCol::方法, Lang("3.枚举边长为%d的 %d=%d+%d"), i + j, i + j, i, j);
				if (h == 4)
				{
					h = 0;
					h1++;
				}
			}
		}
		
	}
	h1 = h1 / 2;
	g = g + h1;
	ColPrintf(PrintfCol::方法, Lang("一共有%d种不同吃法"), g);
}
void P48()
{
	P48_1();
	ColPrintf(PrintfCol::方法, "");
	P48_2();
	ColPrintf(PrintfCol::方法, "");
	P48_3_1();
	ColPrintf(PrintfCol::方法, "");
	P48_3_2();
	ColPrintf(PrintfCol::方法, "");
	P48_3_3();
	ColPrintf(PrintfCol::方法, "");
	P48_4();
	ColPrintf(PrintfCol::方法, "");
}
void P48_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P48();
	Lang.SetCurLanguage(LanguageLib::English);
	P48();
	ColPrintf(PrintfCol::方法, "");

}