#pragma once

void P48_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 1 Tree enumeration","P48��һ ��״ö��"},
		{"Title: As shown in the figure, how many different ways can you walk from point A to point F by following the arrow?",
		"��Ŀ����ͼ����A���߶��ߵ�F�㣬Ҫ��ֻ�ܰ���ͷ�ߣ����ж����ֲ�ͬ���߷�?"},
		{"Analysis: It is possible to enumerate the number of lines from point A to the next point, and then deduce the next point from the enumerated points, and so on. At the end, the final point can be counted to obtain the result",
		"����������ö��A����һ��ֱ�ߵ���������ͨ��ö�ٳ����ĵ��Ƴ���һ���Դ����ƣ������ʱ��ö�ٳ������ĵ������Ϳɵó�"},
		{"1. List the route from A to C: A ->C ->E ->F C ->F C ->D ->F",
		"1.ö�ٴ�A��C����·�� A->C->E->F C->F C->D->F"},
		{"2. List the route A to D, A ->D ->F",
		"2.ö��A��D����·�� A->D->F"},
		{"3. List the route from A to B: A ->B ->D ->F",
		"3.ö��A��B����·�� A->B->D->F"},
		{"There are a total of 5 routes available",
		"4.һ����5��·��"},
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
	ColPrintf(PrintfCol::����, Lang("P48��һ ��״ö��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ����A���߶��ߵ�F�㣬Ҫ��ֻ�ܰ���ͷ�ߣ����ж����ֲ�ͬ���߷�?"));
	ColPrintf(PrintfCol::����, Lang("����������ö��A����һ��ֱ�ߵ���������ͨ��ö�ٳ����ĵ��Ƴ���һ���Դ����ƣ������ʱ��ö�ٳ������ĵ������Ϳɵó�"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	ColPrintf(PrintfCol::����, Lang("1.ö�ٴ�A��C����·�� A->C->E->F C->F C->D->F"));
	ColPrintf(PrintfCol::����, Lang("2.ö��A��D����·�� A->D->F"));
	ColPrintf(PrintfCol::����, Lang("3.ö��A��B����·�� A->B->D->F"));
	ColPrintf(PrintfCol::����, Lang("4.һ����5��·��"));
}


struct KVPair
{
	const char* pszExp;
	const char* pszName;
};

void P48_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 2 Tree enumeration","P48���� ��״ö��"},
		{"Question: A, B, and C practice passing the ball. At the beginning, the ball is in A's hands. After three passes, how many ways can they pass the ball without A's hands?",
		"��Ŀ��A��B��C������ϰ���򣬿�ʼ����A����������δ��������A����Ĵ��򷽷��м���?"},
		{"Analysis: The question he asked is not in A's hands, which means that after enumeration, only BC can be obtained, so the final result needs to subtract A. (| represents or)",
		"��������һ�����ʵ��ǲ���A�����˵��ö�ٳ�����ֻ����BC���������ս��Ҫ��ȥA.(|��ʾ��)"},
		{"1. List all types of routes from A to B A ->B ->A ->B|C A ->B ->C ->A|B",
		"1.ö�ٴ�A��B������·������ A->B->A->B|C A->B->C->A|B"},
		{"2. List all route types from A to C A ->C ->A ->B|C A ->C ->B ->A|C",
		"2.ö�ٴ�A��C������·������ A->C->A->B|C A->C->B->A|C"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P48���� ��״ö��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��A��B��C������ϰ���򣬿�ʼ����A����������δ��������A����Ĵ��򷽷��м���?"));
	ColPrintf(PrintfCol::����, Lang("��������һ�����ʵ��ǲ���A�����˵��ö�ٳ�����ֻ����BC���������ս��Ҫ��ȥA.(|��ʾ��)"));
	typedef ScanningLine<10, 10, 18, 8> ScanningLineT;
	
	ScanningLineT test;
	TreeContext TNode;
	TNode.Init(4);
	TNode.CreateTree();
	TNode.VexMake(1.0, 0.8);
	/*
	char szIndex[128];
	sprintf(szIndex, "Root%d[%d-%d]", 0, TNode.m_nRootNodeIndex,-1);
	test.AddText(PrintfCol::����, TNode.VexArray[TNode.m_nRootNodeIndex].Vex.fY, TNode.VexArray[TNode.m_nRootNodeIndex].Vex.fX, szIndex);
	TNode.EnumTree(TNode.m_nRootNodeIndex, 0, [&](int nNodeIndex, int nLevel) {

		int nLeftVexIndex = TNode.NodeArray[nNodeIndex].nchildVexIndex[0];
		int nRightVexIndex = TNode.NodeArray[nNodeIndex].nchildVexIndex[1];
		sprintf(szIndex,"L%d[%d-%d]", nLevel, nLeftVexIndex, TNode.NodeArray[nNodeIndex].nParentVexIndex);
		ColPrintf(PrintfCol::����, "%s",szIndex);
		test.AddText(PrintfCol::����, TNode.VexArray[nLeftVexIndex].Vex.fY, TNode.VexArray[nLeftVexIndex].Vex.fX, szIndex);
		sprintf(szIndex, "R%d[%d-%d]", nLevel, nRightVexIndex, TNode.NodeArray[nNodeIndex].nParentVexIndex);
		ColPrintf(PrintfCol::����, "%s\n", szIndex);
		test.AddText(PrintfCol::����, TNode.VexArray[nRightVexIndex].Vex.fY, TNode.VexArray[nRightVexIndex].Vex.fX, szIndex);
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
			test.AddLine(Bingin, End, 0.07, PrintfCol::����);
			test.AddLine(Bingin, End1, 0.07, PrintfCol::����);
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
			test.AddText(PrintfCol::����, TNode.VexArray[nFindVexInde].Vex.fY, TNode.VexArray[nFindVexInde].Vex.fX, NameTab[i].pszName);
			});
	}
	
	//sprintf(szIndex, "Root%d[%d-%d]", 0, TNode.m_nRootNodeIndex, -1);
	//test.AddText(PrintfCol::����, TNode.VexArray[TNode.m_nRootNodeIndex].Vex.fY, TNode.VexArray[TNode.m_nRootNodeIndex].Vex.fX, szIndex);
	
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
			test.AddLine(Bingin, End, 0.07, PrintfCol::����);
			test.AddLine(Bingin, End1, 0.07, PrintfCol::����);
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
		//test.AddText(PrintfCol::�����ע, a, 8 / 2 +1, kkk);
		//test.AddScanLineByEdgeGradient(a, 1,8 / 2 + 1, 8 / 2 + 1, 0, 0, '*', 0);
		//��ʼ����������

		VexArray[o].nLevel = a;
		VexArray[o].Vex.fX = 8 / 2 + 1;
		VexArray[o].Vex.fY = 8 / 2;
		//ö���ұߵĶ��㣬����ʼ����������
		
		h1 = 0;
		p = 0;
		//ö����ߵĶ��㣬����ʼ����������
		
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
				test.AddText(PrintfCol::�����ע, k1, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, kkk);
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, -0.5, -0.5, '*', 0);


			}
			else
			{
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5, 8 / 2 + 1 - offXY + a * 0.5, 0.5, 0.5, '*', 0);
				sprintf(kkk, "%d", o);
				test.AddText(PrintfCol::�����ע, k1, 8 / 2 + 1 - offXY + a * 0.5, kkk);
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
	ColPrintf(PrintfCol::����, Lang("1.ö�ٴ�A��B������·������ A->B->A->B|C A->B->C->A|B"));
	ColPrintf(PrintfCol::����, Lang("2.ö�ٴ�A��C������·������ A->C->A->B|C A->C->B->A|C"));
	*/
}
void P48_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 1: Integer Decomposition","P48��һ��һС�� �����ֽ�"},
		{"(1) How many different ways are there to divide 10 pieces of candy into Xiaohong and Xiaoli, with each person receiving at least one piece?",
		"(1)��10����ȫ���ָ�С���С�ÿ�����ٷ�һ�飬���м��ֲ�ͬ�ķַ�?"},
		{"Analysis: Since the total quantity is 10 and there are 2 people, 10 can be converted into the form of the sum of two integers",
		"��������������Ȼ��10������2�ˣ����԰�10��Ϊ���������͵���ʽ"},
		{"%d=%d+%d",
		"%d=%d+%d"},
		{"There are a total of %d different classification methods",
		"һ����%d�ֲ�ͬ�ķַ�"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P48��һ��һС�� �����ֽ�"));
	ColPrintf(PrintfCol::����, Lang("(1)��10����ȫ���ָ�С���С�ÿ�����ٷ�һ�飬���м��ֲ�ͬ�ķַ�?"));
	ColPrintf(PrintfCol::����, Lang("��������������Ȼ��10������2�ˣ����԰�10��Ϊ���������͵���ʽ"));
	int h = 0;
	for (int i = 1;i <= 9;i++)
	{
		for (int j = 1;j <= 9;j++)
		{
			if (i + j == 10)
			{
				h++;
				ColPrintf(PrintfCol::����, Lang("%d=%d+%d"),i+j,i,j);
			}
		}
	}
	ColPrintf(PrintfCol::����, Lang("һ����%d�ֲ�ͬ�ķַ�"), h);
}
void P48_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 1 Second Question: Integer Decomposition","P48��һ�ڶ�С�� �����ֽ�"},
		{"(1) How many different ways are there to divide 10 pieces of candy into Xiaohong and Xiaoli, with each person receiving at least one piece?",
		"(2)С��ֵ�4���ǣ�����ÿ�����ٳ�һ�ţ����3����꣬���ж����ֲ�ͬ�Է�"},
		{"Analysis: Since the total quantity is 10 and there are 2 people, 10 can be converted into the form of the sum of two integers",
		"�����������Ϊ���������������ǻ���������һ����ķ��������԰�����������ˣ�һ�����һ���ˡ�"},
		{"The number of types of sugar consumed in a day:% d=% d",
		"һ�����Щ��������%d=%d"},
		{"The number of sugar types to eat in two days:% d=% d+%d",
		"�������Щ��������%d=%d+%d"},
		{"The number of sugar types to eat in two days:% d=% d+%d",
		"�������Щ��������%d=%d+%d+%d"},
		{"There are a total of% d different ways of eating",
		"һ����%d�ֲ�ͬ�Է�"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P48��һ��һС�� �����ֽ�"));
	ColPrintf(PrintfCol::����, Lang("(1)��10����ȫ���ָ�С���С�ÿ�����ٷ�һ�飬���м��ֲ�ͬ�ķַ�?"));
	ColPrintf(PrintfCol::����, Lang("�����������Ϊ���������������ǻ���������һ����ķ��������԰�����������ˣ�һ�����һ���ˡ�"));
	int h = 0;
	for (int i = 1;i <= 4;i++)
	{
		if (i  == 4)
		{
			h++;
			ColPrintf(PrintfCol::����, Lang("һ�����Щ��������%d=%d"), i ,i);
		}
	}
	for (int i = 1;i <= 4;i++)
	{
		for (int j = 1;j <= 4;j++)
		{
			if (i + j == 4)
			{
				h++;
				ColPrintf(PrintfCol::����, Lang("�������Щ��������%d=%d+%d"), i + j, i, j);
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
					ColPrintf(PrintfCol::����, Lang("�������Щ��������%d=%d+%d+%d"), i + j+k, i, j,k);
				}
			}
			
		}
	}
	ColPrintf(PrintfCol::����, Lang("һ����%d�ֲ�ͬ�Է�"), h);
}
void P48_3_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example 1 Second Question: Integer Decomposition","P48��һ�ڶ�С�� �����ֽ�"},
		{"(2) Xiao Li was given 6 pieces of candy, and he wanted to eat at least two of them every day until he finished. How many different ways are there to eat them",
		"(2)С��ֵ�6���ǣ�����ÿ�����ٳ����ţ�ֱ�����꣬���ж����ֲ�ͬ�Է�"},
		{"Analysis: He did not give a specific number of days here, so we will analyze it ourselves. He eats at least 2 pills every day, a total of 6 pills, which is 6/2 pills.",
		"������������û�и�������������������Լ�����������ÿ�����ٳ�2�ţ�����6�ţ�����6/2�š�"},
		{"The number of types of sugar consumed in a day:% d=% d",
		"һ�����Щ��������%d=%d"},
		{"The number of sugar types to eat in two days:% d=% d+%d",
		"�������Щ��������%d=%d+%d"},
		{"The number of sugar types to eat in two days:% d=% d+%d",
		"�������Щ��������%d=%d+%d+%d"},
		{"There are a total of% d different ways of eating",
		"һ����%d�ֲ�ͬ�Է�"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P48��һ�ڶ�С�� �����ֽ�"));
	ColPrintf(PrintfCol::����, Lang("(1)��10����ȫ���ָ�С���С�ÿ�����ٷ�һ�飬���м��ֲ�ͬ�ķַ�?"));
	ColPrintf(PrintfCol::����, Lang("������������û�и�������������������Լ�����������ÿ�����ٳ�2�ţ�����6�ţ�����6/2�š�"));
	int h = 0;
	for (int i = 2;i <= 6;i++)
	{
		if (i == 6)
		{
			h++;
			ColPrintf(PrintfCol::����, Lang("һ�����Щ��������%d=%d"), i, i);
		}
	}
	for (int i = 2;i <= 6;i++)
	{
		for (int j = 2;j <= 6;j++)
		{
			if (i + j == 6)
			{
				h++;
				ColPrintf(PrintfCol::����, Lang("�������Щ��������%d=%d+%d"), i + j, i, j);
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
					ColPrintf(PrintfCol::����, Lang("�������Щ��������%d=%d+%d+%d"), i + j + k, i, j, k);
				}
			}

		}
	}
	ColPrintf(PrintfCol::����, Lang("һ����%d�ֲ�ͬ�Է�"), h);
}
void P48_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P48 Example Two Integer Decomposition","P48���� �����ֽ�"},
		{"Question: There are one line segment of length 1, 2, 3, 4, 5, 6, 7, 8, and 9, and several line segments are selected to form a square. How many different selection methods are there",
		"��Ŀ���г���Ϊ1��2��3��4��5��6��7��8��9���߶θ�һ��������ѡ���������߶�����������Σ����ж����ֲ�ͬ��ѡ��"},
		{"Analysis: Since the length of line segments is regular and traceable, we can ignore them. However, the total length of line segments needs to be calculated and then divided by 4 to obtain the length of an edge, which can be enumerated",
		"��������Ϊ�߶γ��ȶ����й��ɿ�Ѱ�ģ��������ǿ��Ժ��ԣ����߶ε��ܳ�����Ҫ�����������4�õ�һ���ߵĳ��ȣ�ö�ٳ����Ϳ���."},
		{"1. Calculate the length N1 of all line segments. The length N1 of all line segments is equal to the length L1 of the first line segment, the length L2 of the second line segment, the length L3 of the third line segment, the length\nL4 of the fourth line segment, the length L5 of the fifth line segment, the length L6 of the sixth line segment, the length L7 of the seventh line segment, the length L8 of the eighth line segment, and the length L9 of the ninth line segment",
		"1.���������߶εĳ���N1 �����߶εĳ���N1=��1���߶γ���L1+��2���߶γ���L2+��3���߶γ���L3+��4���߶γ���L4+��5���߶γ���L5+��6���߶γ���L6+��7���߶γ���L7+��8���߶γ���L8+��9���߶γ���L9"},
		{"2. Calculate the length L10 of each edge. The length L10 of each edge is equal to the length N1 of all line segments divided by the number of sides N2 of the square",
		"2.����ÿ���ߵĳ���L10 ÿ���ߵĳ���L10=�����߶εĳ���N1/�����α���N2"},
		{"3. List% d=% d+% d with side length of% d",
		"3.ö�ٱ߳�Ϊ%d�� %d=%d+%d"},
		{"There are a total of% d selection methods",
		"һ����%d��ѡ��"},
		//������
		{"ThefirstlinesegmentlengthL1","��1���߶γ���L1"},
		{"ThelengthL2ofthesecondlinesegment","��2���߶γ���L2"},
		{"ThelengthofthethirdlinesegmentL3","��3���߶γ���L3"},
		{"ThelengthL4ofthefourthlinesegment","��4���߶γ���L4"},
		{"Article5:LengthL5ofLineSegment","��5���߶γ���L5"},
		{"Section6LengthL6","��6���߶γ���L6"},
		{"Article7:LengthofLineSegmentL7","��7���߶γ���L7"},
		{"Thelengthofthe8thlinesegmentisL8","��8���߶γ���L8"},
		{"Article9:LengthofLineSegmentL9","��9���߶γ���L9"},
		{"SquaresidecountN2","�����α���N2"},
		{"ThelengthN1ofalllinesegments","�����߶εĳ���N1"},
		{"LengthL10ofeachedge","ÿ���ߵĳ���L10"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��1���߶γ���L1, 1);
	DefineLangVarInt(��2���߶γ���L2, 2);
	DefineLangVarInt(��3���߶γ���L3, 3);
	DefineLangVarInt(��4���߶γ���L4, 4);
	DefineLangVarInt(��5���߶γ���L5, 5);
	DefineLangVarInt(��6���߶γ���L6, 6);
	DefineLangVarInt(��7���߶γ���L7, 7);
	DefineLangVarInt(��8���߶γ���L8, 8);
	DefineLangVarInt(��9���߶γ���L9, 9);
	DefineLangVarInt(�����α���N2, 4);
	ColPrintf(PrintfCol::����, Lang("P48���� �����ֽ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���г���Ϊ1��2��3��4��5��6��7��8��9���߶θ�һ��������ѡ���������߶�����������Σ����ж����ֲ�ͬ��ѡ��"));
	ColPrintf(PrintfCol::����, Lang("��������Ϊ�߶γ��ȶ����й��ɿ�Ѱ�ģ��������ǿ��Ժ��ԣ����߶ε��ܳ�����Ҫ�����������4�õ�һ���ߵĳ��ȣ�ö�ٳ����Ϳ���."));
	DefineLangVarInt(�����߶εĳ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���������߶εĳ���N1 �����߶εĳ���N1=��1���߶γ���L1+��2���߶γ���L2+��3���߶γ���L3+��4���߶γ���L4+��5���߶γ���L5+��6���߶γ���L6+��7���߶γ���L7+��8���߶γ���L8+��9���߶γ���L9"));
	�����߶εĳ���N1 = ��1���߶γ���L1 + ��2���߶γ���L2 + ��3���߶γ���L3 + ��4���߶γ���L4 + ��5���߶γ���L5 + ��6���߶γ���L6 + ��7���߶γ���L7 + ��8���߶γ���L8 + ��9���߶γ���L9;
	�����߶εĳ���N1.PrintProcessLog(1);
	DefineLangVarInt(ÿ���ߵĳ���L10, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿ���ߵĳ���L10 ÿ���ߵĳ���L10=�����߶εĳ���N1/�����α���N2"));
	ÿ���ߵĳ���L10 = �����߶εĳ���N1 / �����α���N2;
	ÿ���ߵĳ���L10.PrintProcessLog(2);
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
				ColPrintf(PrintfCol::����, Lang("3.ö�ٱ߳�Ϊ%d�� %d=%d+%d"), i + j, i+j, i,j);
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
				ColPrintf(PrintfCol::����, Lang("3.ö�ٱ߳�Ϊ%d�� %d=%d+%d"), i + j, i + j, i, j);
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
				ColPrintf(PrintfCol::����, Lang("3.ö�ٱ߳�Ϊ%d�� %d=%d+%d"), i + j, i + j, i, j);
				
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
				ColPrintf(PrintfCol::����, Lang("3.ö�ٱ߳�Ϊ%d�� %d=%d+%d"), i + j, i + j, i, j);
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
				ColPrintf(PrintfCol::����, Lang("3.ö�ٱ߳�Ϊ%d�� %d=%d+%d"), i + j, i + j, i, j);
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
	ColPrintf(PrintfCol::����, Lang("һ����%d�ֲ�ͬ�Է�"), g);
}
void P48()
{
	P48_1();
	ColPrintf(PrintfCol::����, "");
	P48_2();
	ColPrintf(PrintfCol::����, "");
	P48_3_1();
	ColPrintf(PrintfCol::����, "");
	P48_3_2();
	ColPrintf(PrintfCol::����, "");
	P48_3_3();
	ColPrintf(PrintfCol::����, "");
	P48_4();
	ColPrintf(PrintfCol::����, "");
}
void P48_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P48();
	Lang.SetCurLanguage(LanguageLib::English);
	P48();
	ColPrintf(PrintfCol::����, "");

}