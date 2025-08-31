#pragma once
void P49_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 calf trial knife graphic counting","P49Сţ�Ե� ͼ�μ���"},
		{"Title: Count, how many line segments are there in the picture?",
		"��Ŀ����һ����ͼ���м����߶�?"},
		{"Analysis: Since we need to count line segments, we can either start counting from the first node and then add nodes, two nodes, or three nodes, based on this. This is the number of line segments in this graph",
		"��������ȻҪ���߶Σ����ǿ���ֻ��һ�νڵ���߶����������Ե�һ���ڵ㿪ʼ����Ȼ���Դ�������ӽڵ㣬�����ڵ㣬�����ڵ㣬��������ͼ�е��߶���"},
		{"1. Calculate the total number of graphics N1 in the graph. The total number of graphics N1 in the graph is equal to the total number of nodes N2+(total number of nodes N2- number of nodes added each time N3)+(total number of nodes\nN2- number of nodes added each time N3- number of nodes added each time N3)+(total number of nodes N2- number of nodes added each time N3- number of nodes added each time N3)+(total number of nodes N2- number of nodes added each time\nN3- number of nodes added each time N3- number of nodes added each time N3)",
		"1.����ͼ��ͼ������N1 ͼ��ͼ������N1=�ܹ��Ľڵ���N2+(�ܹ��Ľڵ���N2-ÿ�ε������ӽڵ���N3)+(�ܹ��Ľڵ���N2-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3)+(�ܹ��Ľڵ���N2-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3)+(�ܹ��Ľڵ���N2-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3)"},
		//������
		{"TotalnumberofnodesN2","�ܹ��Ľڵ���N2"},
		{"IncreasethenumberofnodesN3witheachincrement","ÿ�ε������ӽڵ���N3"},
		{"ThetotalnumberofgraphicsinthefigureisN1","ͼ��ͼ������N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ��Ľڵ���N2, 5);
	DefineLangVarInt(ÿ�ε������ӽڵ���N3, 1);
	ColPrintf(PrintfCol::����, Lang("P49Сţ�Ե� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ����ͼ���м����߶�?"));
	const char* pPic =
		"A        B     C      D      E\n"
		"|---------|----|-------|-----|\n"
		;
	ColPrintf(PrintfCol::Green, pPic);
	ColPrintf(PrintfCol::����, Lang("��������ȻҪ���߶Σ����ǿ���ֻ��һ�νڵ���߶����������Ե�һ���ڵ㿪ʼ����Ȼ���Դ�������ӽڵ㣬�����ڵ㣬�����ڵ㣬��������ͼ�е��߶���"));
	DefineLangVarInt(ͼ��ͼ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ͼ��ͼ������N1 ͼ��ͼ������N1=�ܹ��Ľڵ���N2+(�ܹ��Ľڵ���N2-ÿ�ε������ӽڵ���N3)+(�ܹ��Ľڵ���N2-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3)+(�ܹ��Ľڵ���N2-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3)+(�ܹ��Ľڵ���N2-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3-ÿ�ε������ӽڵ���N3)"));
	ͼ��ͼ������N1 = �ܹ��Ľڵ���N2 + (�ܹ��Ľڵ���N2 - ÿ�ε������ӽڵ���N3) + (�ܹ��Ľڵ���N2 - ÿ�ε������ӽڵ���N3 - ÿ�ε������ӽڵ���N3) + (�ܹ��Ľڵ���N2 - ÿ�ε������ӽڵ���N3 - ÿ�ε������ӽڵ���N3 - ÿ�ε������ӽڵ���N3) + (�ܹ��Ľڵ���N2 - ÿ�ε������ӽڵ���N3 - ÿ�ε������ӽڵ���N3 - ÿ�ε������ӽڵ���N3 - ÿ�ε������ӽڵ���N3);
	ͼ��ͼ������N1.PrintProcessLog(1);
}
void P49_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example 1 Graphic Counting","P49��һ ͼ�μ���"},
		{"Question: If the picture is composed of small cubes with the same side length, how many cubes are there in total in the picture?",
		"��Ŀ����ͼ����һЩ�߳���ͬ��С�����幹�ɣ���ôͼ�е������干�ж��ٸ�?"},
		{"Analysis: This is a transition from 1D to 2D plane, and we can still apply it. However, it should be noted that when counting cubes in the same row, if the cube to be counted is composed of two small cubes with a side length of\n2, the number of columns in each cube can only be increased by one, not two, maximizing the use of space",
		"���������Ǵ�1άת����2άƽ�棬���ǻ��ǿ������ã���Ҫע����ͬ��ʱ�����Ҫ�����������Ǳ߳�Ϊ2��С��������ɵģ�ÿ��һ������������ֻ�ܼ�һ�����ǼӶ�������޶������˿ռ�"},
		{"1. Calculate the number of squares with a side length of one. Because the small squares with a side length of one in the graph are numbers one by one, the number of squares with a side length of one is the smallest number of squares\nin the graph, which is 16",
		"1.����߳�ΪһС��������N1 ��Ϊͼ�б߳�Ϊһ��С�����ξ���һ��һ�����������Ա߳�ΪһС������������ͼ����С������������16��"},
		{"2. To calculate the number N2 of squares with a side length of two, we start with the first number, which is a constant. The number of rows in the second small square remains the same, but the number of columns can be increased\nby only one. It is also an independent small cube, just overlapping with the first one, and the number of rows in the second row is also the same, increasing by only one. Therefore, the number of\nsmall squares with a side length of 2 is 9",
		"2.����߳�Ϊ��С��������N2 ���Ǵӿ�ʼ��һ��������һ���ճ������У��ڶ���С�������������䣬����������ֻ����һ����Ҳ��һ��������С�����壬ֻ�������һ���غϣ��ڶ���Ҳ����ˣ�����ֻ����һ�����Ա߳�Ϊ2��С����������9��"},
		{"3. Calculate the number of squares N3 with a side length of three small squares, which is the same as the number of squares N3 with a side length of two small squares. The number of columns and rows still increases by one, so the number of squares N3 with a side length of three small squares is four",
		"3.����߳�Ϊ��С��������N3 �ͱ߳�Ϊ��С������һ����������������һ��������������һ�����Ա߳�Ϊ��С����������4��"},
		{"4. Calculate the number N4 of squares with a side length of four small squares because the entire shape is just one square with a side length of four small squares, so there is only one",
		"4.����߳�Ϊ��С��������N4 ��Ϊ����ͼ�ξ���һ���߳�Ϊ��С�����Σ�����ֻ��һ��"},
		{"5. Calculate the total number of small squares N5=the number of small squares with a side length of one N1+the number of small squares with a side length of two N2+the number of small squares with a side length of three N3+the\nnumber of small squares with a side length of four N4",
		"5.�����ܹ���С��������N5 �ܹ���С��������N5=�߳�ΪһС��������N1+�߳�Ϊ��С��������N2+�߳�Ϊ��С��������N3+�߳�Ϊ��С��������N4"},
		//������
		{"ThenumberN1ofsquareswithasidelengthofonesmallsquare","�߳�ΪһС��������N1"},
		{"ThesidelengthisthenumberN2oftwosmallsquares","�߳�Ϊ��С��������N2"},
		{"ThesidelengthisthenumberN3ofthreesmallsquares","�߳�Ϊ��С��������N3"},
		{"ThesidelengthisthenumberN4offoursmallsquares","�߳�Ϊ��С��������N4"},
		{"ThetotalnumberofsmallsquaresN5","�ܹ���С��������N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�߳�ΪһС��������N1, 16);
	DefineLangVarInt(�߳�Ϊ��С��������N2, 9);
	DefineLangVarInt(�߳�Ϊ��С��������N3, 4);
	DefineLangVarInt(�߳�Ϊ��С��������N4, 1);
	ColPrintf(PrintfCol::����, Lang("P49��һ ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ����һЩ�߳���ͬ��С�����幹�ɣ���ôͼ�е������干�ж��ٸ�?"));
	typedef ScanningLine<12, 10, 18, 8> ScanningLineT;
	ScanningLineT test;


	int offX = 0;
	int offY = 0;
	for (int i = 0;i <= 3;i++)
	{
		for (int j = 0;j <= 3;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(1 + offY)},{float(3 + offX),float(1 + offY)},{float(3 + offX),float(3 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(1 + offX), float(3 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	}
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	ColPrintf(PrintfCol::����, Lang("���������Ǵ�1άת����2άƽ�棬���ǻ��ǿ������ã���Ҫע����ͬ��ʱ�����Ҫ�����������Ǳ߳�Ϊ2��С��������ɵģ�ÿ��һ������������ֻ�ܼ�һ�����ǼӶ�������޶������˿ռ�"));
	ColPrintf(PrintfCol::����, Lang("1.����߳�ΪһС��������N1 ��Ϊͼ�б߳�Ϊһ��С�����ξ���һ��һ�����������Ա߳�ΪһС������������ͼ����С������������16��"));
	ColPrintf(PrintfCol::����, Lang("2.����߳�Ϊ��С��������N2 ���Ǵӿ�ʼ��һ��������һ���ճ������У��ڶ���С�������������䣬����������ֻ����һ����Ҳ��һ��������С�����壬ֻ�������һ���غϣ��ڶ���Ҳ����ˣ�����ֻ����һ�����Ա߳�Ϊ2��С����������9��"));
	ColPrintf(PrintfCol::����, Lang("3.����߳�Ϊ��С��������N3 �ͱ߳�Ϊ��С������һ����������������һ��������������һ�����Ա߳�Ϊ��С����������4��"));
	ColPrintf(PrintfCol::����, Lang("4.����߳�Ϊ��С��������N4 ��Ϊ����ͼ�ξ���һ���߳�Ϊ��С�����Σ�����ֻ��һ��"));
	DefineLangVarInt(�ܹ���С��������N5, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����ܹ���С��������N5 �ܹ���С��������N5=�߳�ΪһС��������N1+�߳�Ϊ��С��������N2+�߳�Ϊ��С��������N3+�߳�Ϊ��С��������N4"));
	�ܹ���С��������N5 = �߳�ΪһС��������N1 + �߳�Ϊ��С��������N2 + �߳�Ϊ��С��������N3 + �߳�Ϊ��С��������N4;
	�ܹ���С��������N5.PrintProcessLog(5);
}

void P49_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example 2 Graphic Counting","P49���� ͼ�μ���"},
		{"Title: How many squares are there in the picture",
		"��Ŀ��ͼ���ж��ٸ�������"},
		{"1. Calculate the number of positive small squares N1. The number of positive small squares N1=the number of small squares with side length N1+the number of small squares with side length N1",
		"1.��������С����������N1 ����С����������N1=�߳�ΪһС��������N1+�߳�Ϊ��С��������N4"},
		{"2. Calculate the number of slanted small squares N2=the number of slanted small squares with a side length of one square N4+the number of slanted small squares with a side length of two squares N4",
		"2.����б�ŵ�С����������N2 б�ŵ�С����������N2=б�ı߳�ΪһС��������N4+б�ı߳�Ϊ��С��������N4"},
		{"3. Calculate the total number of small squares N5=the number of positive small squares N1+the number of diagonal small squares N2",
		"3.�����ܹ���С��������N5 �ܹ���С��������N5=����С����������N1+б�ŵ�С����������N2"},
		//������
		{"ThenumberN1ofsquareswithasidelengthofonesmallsquare","�߳�ΪһС��������N1"},
		{"ThesidelengthisthenumberN4oftwosmallsquares","�߳�Ϊ��С��������N4"},
		{"ThediagonalsidelengthisasmallsquarenumberN4","б�ı߳�ΪһС��������N4"},
		{"ThediagonalsidelengthisthenumberN4oftwosmallsquares","б�ı߳�Ϊ��С��������N4"},
		{"NumberofpositivesmallsquaresN1","����С����������N1"},
		{"NumberofslantedsmallsquaresN2","б�ŵ�С����������N2"},
		{"ThetotalnumberofsmallsquaresN5","�ܹ���С��������N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�߳�ΪһС��������N1, 8);
	DefineLangVarInt(�߳�Ϊ��С��������N4, 3);
	DefineLangVarInt(б�ı߳�ΪһС��������N4, 4);
	DefineLangVarInt(б�ı߳�Ϊ��С��������N4, 1);
	ColPrintf(PrintfCol::����, Lang("P49���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ͼ���ж��ٸ�������"));
	typedef ScanningLine<12, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	int offX = 0;
	int offY = 0;
	for (int i = 0;i <= 1;i++)
	{
		for (int j = 0;j <= 3;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(3 + offY)},{float(3 + offX),float(3 + offY)},{float(3 + offX),float(5 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(1 + offX), float(5 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	}
	std::vector<ScanningLineT::Point> Vex1 = { {float(1 ),float(5 )},{float(5 ),float(1 )},{float(9 ),float(5 )} };
	test.AddPolygon(ScanningLineT::Point(float(5 ), float(9 )), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
	test.AddScanLineByEdgeGradient(3.0, 4.0, 3, 3.0, 1, 1, '*');
	test.AddScanLineByEdgeGradient(3.0, 4.0, 7, 7.0, -1, -1, '*');
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(����С����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������С����������N1 ����С����������N1=�߳�ΪһС��������N1+�߳�Ϊ��С��������N4"));
	����С����������N1 = �߳�ΪһС��������N1 + �߳�Ϊ��С��������N4;
	����С����������N1.PrintProcessLog(1);
	DefineLangVarInt(б�ŵ�С����������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����б�ŵ�С����������N2 б�ŵ�С����������N2=б�ı߳�ΪһС��������N4+б�ı߳�Ϊ��С��������N4"));
	б�ŵ�С����������N2 = б�ı߳�ΪһС��������N4 + б�ı߳�Ϊ��С��������N4;
	б�ŵ�С����������N2.PrintProcessLog(2);
	DefineLangVarInt(�ܹ���С��������N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ܹ���С��������N5 �ܹ���С��������N5=����С����������N1+б�ŵ�С����������N2"));
	�ܹ���С��������N5 = ����С����������N1 + б�ŵ�С����������N2;
	�ܹ���С��������N5.PrintProcessLog(3);

}

void P49_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example Three Graphic Counting","P49���� ͼ�μ���"},
		{"Title: How many squares are there in the picture",
		"��Ŀ��ͼ���ж��ٸ�������"},
		{"1. Calculate the total number of small squares N5=the number of small squares with a side length of one N1+the number of small squares with a side length of two N4+the number of small squares with a side length of three N3+the number\nof small squares with a side length of four N4",
		"1.�����ܹ���С��������N5=�߳�ΪһС��������N1+�߳�Ϊ��С��������N4+�߳�Ϊ��С��������N3+�߳�Ϊ��С��������N4"},
		//������
		{"ThenumberN1ofsquareswithasidelengthofonesmallsquare","�߳�ΪһС��������N1"},
		{"ThesidelengthisthenumberN4oftwosmallsquares","�߳�Ϊ��С��������N4"},
		{"ThesidelengthisthenumberN3ofthreesmallsquares","�߳�Ϊ��С��������N3"},
		{"ThesidelengthisthenumberN4offoursmallsquares","�߳�Ϊ��С��������N4"},
		{"ThetotalnumberofsmallsquaresN5","�ܹ���С��������N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�߳�ΪһС��������N1, 8);
	DefineLangVarInt(�߳�Ϊ��С��������N4, 6);
	DefineLangVarInt(�߳�Ϊ��С��������N3, 0);
	DefineLangVarInt(�߳�Ϊ��С��������N4, 1);
	ColPrintf(PrintfCol::����, Lang("P49���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ͼ���ж��ٸ�������"));
	typedef ScanningLine<8, 7, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(2),float(1)},{float(2),float(2)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(2)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex2 = { {float(1),float(2)},{float(2),float(2)},{float(2),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(3)), Vex2, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex3 = { {float(1),float(3)},{float(2),float(3)},{float(2),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(4)), Vex3, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex4 = { {float(1),float(4)},{float(2),float(4)},{float(2),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex4, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex5 = { {float(2),float(1)},{float(3),float(1)},{float(3),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(2), float(3)), Vex5, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex8 = { {float(2),float(3)},{float(3),float(3)},{float(3),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(2), float(5)), Vex8, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(1)},{float(4),float(1)},{float(4),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(3),float(3)},{float(4),float(3)},{float(4),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(5)), Vex7, ScanningLineT::FillMode::EdgeMode, '+', 0);



	std::vector<ScanningLineT::Point> Vex9 = { {float(4),float(1)},{float(5),float(1)},{float(5),float(2)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(2)), Vex9, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex10 = { {float(4),float(2)},{float(5),float(2)},{float(5),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(3)), Vex10, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex11 = { {float(4),float(3)},{float(5),float(3)},{float(5),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(4)), Vex11, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex12 = { {float(4),float(4)},{float(5),float(4)},{float(5),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(5)), Vex12, ScanningLineT::FillMode::EdgeMode, '+', 0);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(�ܹ���С��������N5, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܹ���С��������N5=�߳�ΪһС��������N1+�߳�Ϊ��С��������N4+�߳�Ϊ��С��������N3+�߳�Ϊ��С��������N4"));
	�ܹ���С��������N5 = �߳�ΪһС��������N1 + �߳�Ϊ��С��������N4 + �߳�Ϊ��С��������N3 + �߳�Ϊ��С��������N4;
	�ܹ���С��������N5.PrintProcessLog(1);
}
void P49_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example Three Graphic Counting","P49���� ͼ�μ���"},
		{"Title: How many triangles are there in the picture",
		"��Ŀ��ͼ���ж��ٸ�������"},
		{"1. Calculate the total number of small squares N5=the number of triangles in one combination N1+the number of triangles in two combinations N1+the number of triangles in three combinations N1",
		"1.�����ܹ���С��������N5 �ܹ���С��������N5=һ����ϵ���������N1+������ϵ���������N1+�Ŀ���ϵ���������N1"},
		//������
		{"ThenumberoftrianglesinacombinationN1","һ����ϵ���������N1"},
		{"ThenumberoftrianglesN1inacombinationoftwoblocks","������ϵ���������N1"},
		{"ThenumberoftrianglesN1inacombinationofthreeblocks","�Ŀ���ϵ���������N1"},
		{"ThetotalnumberofsmallsquaresN5","�ܹ���С��������N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ����ϵ���������N1, 3);
	DefineLangVarInt(������ϵ���������N1, 4);
	DefineLangVarInt(�Ŀ���ϵ���������N1, 1);
	ColPrintf(PrintfCol::����, Lang("P49���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ͼ���ж��ٸ�������"));
	DefineLangVarInt(�ܹ���С��������N5, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܹ���С��������N5 �ܹ���С��������N5=һ����ϵ���������N1+������ϵ���������N1+�Ŀ���ϵ���������N1"));
	�ܹ���С��������N5 = һ����ϵ���������N1 + ������ϵ���������N1 + �Ŀ���ϵ���������N1;
	�ܹ���С��������N5.PrintProcessLog(1);
}
void P49_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example Three Graphic Counting","P49���� ͼ�μ���"},
		{"Title: How many triangles are there in the picture",
		"��Ŀ��ͼ���ж��ٸ�������"},
		{"1. Calculate the side length of a regular triangle as a number N1. The side length of a regular triangle is a number N1=the last row of regular triangles N2+(last row of regular triangles N2- increasing and decreasing the number of triangles N3 each time)+(last row of regular triangles N2- increasing and decreasing the number of triangles N3 each time - increasing and decreasing the number of triangles N3 each time)+(last row of regular triangles N2- increasing and decreasing the number of triangles N3 each time - increasing and decreasing the number of triangles N3 each time)",
		"1.���������Ǳ߳�Ϊһ��N1 �����Ǳ߳�Ϊһ��N1=�����������N2+(�����������N2-ÿ�ε�������������N3)+(�����������N2-ÿ�ε�������������N3-ÿ�ε�������������N3)+(�����������N2-ÿ�ε�������������N3-ÿ�ε�������������N3-ÿ�ε�������������N3)"},
		{"2. Calculate the side length of a regular triangle as two numbers N1. The side length of a regular triangle as two numbers N1=the number of squares in the first layer N3+(the number of squares in the first layer N3+the number of triangles that increase and decrease each time N3)+(the number of squares in the first layer N3+the number of triangles that increase and decrease each time N3+the number of triangles that increase and decrease each time N3)",
		"2.���������Ǳ߳�Ϊ����N1 �����Ǳ߳�Ϊ����N1=��һ����������N3+(��һ����������N3+ÿ�ε�������������N3)+(��һ����������N3+ÿ�ε�������������N3+ÿ�ε�������������N3)"},
		{"3. Calculate that the side length of a regular triangle is three numbers N1. The side length of a regular triangle is three numbers N1=the number of squares in the first layer N3+(the number of squares in the first layer N3+decreases with each increment of N3)",
		"3.���������Ǳ߳�Ϊ����N1 �����Ǳ߳�Ϊ����N1=��һ����������N3+(��һ����������N3+ÿ�ε�������������N3)"},
		{"4. Calculate the length of a regular triangle as N1=the number of squares in the first layer N3",
		"4.���������Ǳ߳�Ϊ����N1 �����Ǳ߳�Ϊ����N1=��һ����������N3"},
		{"5. Calculate the first layer N3 of the inverse triangle. The first layer N3 of the inverse triangle is equal to the number of squares in the first layer N3+(the number of squares in the first layer N3+the number of triangles that increase and decrease each time N3)+(the number of squares in the first layer N3+the number of triangles that increase and decrease each time N3+the number of triangles that increase and decrease each time N3)",
		"5.���㷴���ǵ�һ����N3 �����ǵ�һ����N3=��һ����������N3+(��һ����������N3+ÿ�ε�������������N3)+(��һ����������N3+ÿ�ε�������������N3+ÿ�ε�������������N3)"},
		//������
		{"ThelastrowisaregulartriangleN2","�����������N2"},
		{"IncreaseanddecreasethenumberoftrianglesN3eachtime","ÿ�ε�������������N3"},
		{"NumberofsquaresinthefirstlayerN3","��һ����������N3"},
		{"ThesidelengthofaregulartriangleisonenumberN1","�����Ǳ߳�Ϊһ��N1"},
		{"ThesidelengthofaregulartriangleisatwodigitnumberN1","�����Ǳ߳�Ϊ����N1"},
		{"ThesidelengthofaregulartriangleisthreenumbersN1","�����Ǳ߳�Ϊ����N1"},
		{"ThesidelengthofaregulartriangleisfourdigitsN1","�����Ǳ߳�Ϊ����N1"},
		{"AntitrianglefirstlayerN3","�����ǵ�һ����N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�����������N2, 4);
	DefineLangVarInt(ÿ�ε�������������N3, 1);
	DefineLangVarInt(��һ����������N3, 1);
	ColPrintf(PrintfCol::����, Lang("P49���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ͼ���ж��ٸ�������"));
	DefineLangVarInt(�����Ǳ߳�Ϊһ��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���������Ǳ߳�Ϊһ��N1 �����Ǳ߳�Ϊһ��N1=�����������N2+(�����������N2-ÿ�ε�������������N3)+(�����������N2-ÿ�ε�������������N3-ÿ�ε�������������N3)+(�����������N2-ÿ�ε�������������N3-ÿ�ε�������������N3-ÿ�ε�������������N3)"));
	�����Ǳ߳�Ϊһ��N1 = �����������N2 + (�����������N2 - ÿ�ε�������������N3) + (�����������N2 - ÿ�ε�������������N3 - ÿ�ε�������������N3) + (�����������N2 - ÿ�ε�������������N3 - ÿ�ε�������������N3 - ÿ�ε�������������N3);
	�����Ǳ߳�Ϊһ��N1.PrintProcessLog(1);
	DefineLangVarInt(�����Ǳ߳�Ϊ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.���������Ǳ߳�Ϊ����N1 �����Ǳ߳�Ϊ����N1=��һ����������N3+(��һ����������N3+ÿ�ε�������������N3)+(��һ����������N3+ÿ�ε�������������N3+ÿ�ε�������������N3)"));
	�����Ǳ߳�Ϊ����N1 = ��һ����������N3 + (��һ����������N3 + ÿ�ε�������������N3) + (��һ����������N3 + ÿ�ε�������������N3 + ÿ�ε�������������N3);
	�����Ǳ߳�Ϊ����N1.PrintProcessLog(2);
	DefineLangVarInt(�����Ǳ߳�Ϊ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������Ǳ߳�Ϊ����N1 �����Ǳ߳�Ϊ����N1=��һ����������N3+(��һ����������N3+ÿ�ε�������������N3)"));
	�����Ǳ߳�Ϊ����N1 = ��һ����������N3 + (��һ����������N3 + ÿ�ε�������������N3);
	�����Ǳ߳�Ϊ����N1.PrintProcessLog(3);
	DefineLangVarInt(�����Ǳ߳�Ϊ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("4.���������Ǳ߳�Ϊ����N1 �����Ǳ߳�Ϊ����N1=��һ����������N3"));
	�����Ǳ߳�Ϊ����N1 = ��һ����������N3;
	�����Ǳ߳�Ϊ����N1.PrintProcessLog(4);
	DefineLangVarInt(�����ǵ�һ����N3, 0);
	ColPrintf(PrintfCol::����, Lang("5.���㷴���ǵ�һ����N3 �����ǵ�һ����N3=��һ����������N3+(��һ����������N3+ÿ�ε�������������N3)+(��һ����������N3+ÿ�ε�������������N3+ÿ�ε�������������N3)"));
	�����ǵ�һ����N3 = ��һ����������N3 + (��һ����������N3 + ÿ�ε�������������N3) + (��һ����������N3 + ÿ�ε�������������N3 + ÿ�ε�������������N3);
	�����ǵ�һ����N3.PrintProcessLog(5);
}
void P49()
{
	P49_1();
	ColPrintf(PrintfCol::����, "");
	P49_2();
	ColPrintf(PrintfCol::����, "");
	P49_3();
	ColPrintf(PrintfCol::����, "");
	P49_4();
	ColPrintf(PrintfCol::����, "");
	P49_5();
	ColPrintf(PrintfCol::����, "");
	P49_6();
	ColPrintf(PrintfCol::����, "");
}
void P49_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P49();
	Lang.SetCurLanguage(LanguageLib::English);
	P49();
	ColPrintf(PrintfCol::����, "");

}