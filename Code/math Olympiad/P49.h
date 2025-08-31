#pragma once
void P49_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 calf trial knife graphic counting","P49小牛试刀 图形计数"},
		{"Title: Count, how many line segments are there in the picture?",
		"题目：数一数，图中有几条线段?"},
		{"Analysis: Since we need to count line segments, we can either start counting from the first node and then add nodes, two nodes, or three nodes, based on this. This is the number of line segments in this graph",
		"分析：既然要数线段，我们可以只有一段节点的线段数，或者以第一个节点开始数，然后以此往上添加节点，二个节点，三个节点，这才是这个图中的线段数"},
		{"1. Calculate the total number of graphics N1 in the graph. The total number of graphics N1 in the graph is equal to the total number of nodes N2+(total number of nodes N2- number of nodes added each time N3)+(total number of nodes\nN2- number of nodes added each time N3- number of nodes added each time N3)+(total number of nodes N2- number of nodes added each time N3- number of nodes added each time N3)+(total number of nodes N2- number of nodes added each time\nN3- number of nodes added each time N3- number of nodes added each time N3)",
		"1.计算图中图形总数N1 图中图形总数N1=总共的节点数N2+(总共的节点数N2-每次递增增加节点数N3)+(总共的节点数N2-每次递增增加节点数N3-每次递增增加节点数N3)+(总共的节点数N2-每次递增增加节点数N3-每次递增增加节点数N3-每次递增增加节点数N3)+(总共的节点数N2-每次递增增加节点数N3-每次递增增加节点数N3-每次递增增加节点数N3-每次递增增加节点数N3)"},
		//变量表
		{"TotalnumberofnodesN2","总共的节点数N2"},
		{"IncreasethenumberofnodesN3witheachincrement","每次递增增加节点数N3"},
		{"ThetotalnumberofgraphicsinthefigureisN1","图中图形总数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共的节点数N2, 5);
	DefineLangVarInt(每次递增增加节点数N3, 1);
	ColPrintf(PrintfCol::标题, Lang("P49小牛试刀 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：数一数，图中有几条线段?"));
	const char* pPic =
		"A        B     C      D      E\n"
		"|---------|----|-------|-----|\n"
		;
	ColPrintf(PrintfCol::Green, pPic);
	ColPrintf(PrintfCol::标题, Lang("分析：既然要数线段，我们可以只有一段节点的线段数，或者以第一个节点开始数，然后以此往上添加节点，二个节点，三个节点，这才是这个图中的线段数"));
	DefineLangVarInt(图中图形总数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算图中图形总数N1 图中图形总数N1=总共的节点数N2+(总共的节点数N2-每次递增增加节点数N3)+(总共的节点数N2-每次递增增加节点数N3-每次递增增加节点数N3)+(总共的节点数N2-每次递增增加节点数N3-每次递增增加节点数N3-每次递增增加节点数N3)+(总共的节点数N2-每次递增增加节点数N3-每次递增增加节点数N3-每次递增增加节点数N3-每次递增增加节点数N3)"));
	图中图形总数N1 = 总共的节点数N2 + (总共的节点数N2 - 每次递增增加节点数N3) + (总共的节点数N2 - 每次递增增加节点数N3 - 每次递增增加节点数N3) + (总共的节点数N2 - 每次递增增加节点数N3 - 每次递增增加节点数N3 - 每次递增增加节点数N3) + (总共的节点数N2 - 每次递增增加节点数N3 - 每次递增增加节点数N3 - 每次递增增加节点数N3 - 每次递增增加节点数N3);
	图中图形总数N1.PrintProcessLog(1);
}
void P49_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example 1 Graphic Counting","P49例一 图形计数"},
		{"Question: If the picture is composed of small cubes with the same side length, how many cubes are there in total in the picture?",
		"题目：如图是由一些边长相同的小正方体构成，那么图中的正方体共有多少个?"},
		{"Analysis: This is a transition from 1D to 2D plane, and we can still apply it. However, it should be noted that when counting cubes in the same row, if the cube to be counted is composed of two small cubes with a side length of\n2, the number of columns in each cube can only be increased by one, not two, maximizing the use of space",
		"分析：这是从1维转到了2维平面，我们还是可以套用，但要注意相同行时，如果要数的正方体是边长为2个小正方体组成的，每数一个正方体列数只能加一，不是加二，最大限度利用了空间"},
		{"1. Calculate the number of squares with a side length of one. Because the small squares with a side length of one in the graph are numbers one by one, the number of squares with a side length of one is the smallest number of squares\nin the graph, which is 16",
		"1.计算边长为一小正方形数N1 因为图中边长为一的小正方形就是一个一个的数，所以边长为一小正方形数就是图中最小方格数，就是16个"},
		{"2. To calculate the number N2 of squares with a side length of two, we start with the first number, which is a constant. The number of rows in the second small square remains the same, but the number of columns can be increased\nby only one. It is also an independent small cube, just overlapping with the first one, and the number of rows in the second row is also the same, increasing by only one. Therefore, the number of\nsmall squares with a side length of 2 is 9",
		"2.计算边长为二小正方形数N2 我们从开始第一个数，第一个照常数就行，第二个小正方形行数不变，但列数可以只增加一，它也是一个独立的小正方体，只不过与第一个重合，第二行也是如此，行数只增加一，所以边长为2的小正方形数是9个"},
		{"3. Calculate the number of squares N3 with a side length of three small squares, which is the same as the number of squares N3 with a side length of two small squares. The number of columns and rows still increases by one, so the number of squares N3 with a side length of three small squares is four",
		"3.计算边长为三小正方形数N3 和边长为二小正方形一样，列数还是增加一，行数还是增加一，所以边长为三小正方形数是4个"},
		{"4. Calculate the number N4 of squares with a side length of four small squares because the entire shape is just one square with a side length of four small squares, so there is only one",
		"4.计算边长为四小正方形数N4 因为整个图形就是一个边长为四小正方形，所以只有一个"},
		{"5. Calculate the total number of small squares N5=the number of small squares with a side length of one N1+the number of small squares with a side length of two N2+the number of small squares with a side length of three N3+the\nnumber of small squares with a side length of four N4",
		"5.计算总共的小正方形数N5 总共的小正方形数N5=边长为一小正方形数N1+边长为二小正方形数N2+边长为三小正方形数N3+边长为四小正方形数N4"},
		//变量表
		{"ThenumberN1ofsquareswithasidelengthofonesmallsquare","边长为一小正方形数N1"},
		{"ThesidelengthisthenumberN2oftwosmallsquares","边长为二小正方形数N2"},
		{"ThesidelengthisthenumberN3ofthreesmallsquares","边长为三小正方形数N3"},
		{"ThesidelengthisthenumberN4offoursmallsquares","边长为四小正方形数N4"},
		{"ThetotalnumberofsmallsquaresN5","总共的小正方形数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(边长为一小正方形数N1, 16);
	DefineLangVarInt(边长为二小正方形数N2, 9);
	DefineLangVarInt(边长为三小正方形数N3, 4);
	DefineLangVarInt(边长为四小正方形数N4, 1);
	ColPrintf(PrintfCol::标题, Lang("P49例一 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图是由一些边长相同的小正方体构成，那么图中的正方体共有多少个?"));
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
	ColPrintf(PrintfCol::标题, Lang("分析：这是从1维转到了2维平面，我们还是可以套用，但要注意相同行时，如果要数的正方体是边长为2个小正方体组成的，每数一个正方体列数只能加一，不是加二，最大限度利用了空间"));
	ColPrintf(PrintfCol::方法, Lang("1.计算边长为一小正方形数N1 因为图中边长为一的小正方形就是一个一个的数，所以边长为一小正方形数就是图中最小方格数，就是16个"));
	ColPrintf(PrintfCol::方法, Lang("2.计算边长为二小正方形数N2 我们从开始第一个数，第一个照常数就行，第二个小正方形行数不变，但列数可以只增加一，它也是一个独立的小正方体，只不过与第一个重合，第二行也是如此，行数只增加一，所以边长为2的小正方形数是9个"));
	ColPrintf(PrintfCol::方法, Lang("3.计算边长为三小正方形数N3 和边长为二小正方形一样，列数还是增加一，行数还是增加一，所以边长为三小正方形数是4个"));
	ColPrintf(PrintfCol::方法, Lang("4.计算边长为四小正方形数N4 因为整个图形就是一个边长为四小正方形，所以只有一个"));
	DefineLangVarInt(总共的小正方形数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算总共的小正方形数N5 总共的小正方形数N5=边长为一小正方形数N1+边长为二小正方形数N2+边长为三小正方形数N3+边长为四小正方形数N4"));
	总共的小正方形数N5 = 边长为一小正方形数N1 + 边长为二小正方形数N2 + 边长为三小正方形数N3 + 边长为四小正方形数N4;
	总共的小正方形数N5.PrintProcessLog(5);
}

void P49_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example 2 Graphic Counting","P49例二 图形计数"},
		{"Title: How many squares are there in the picture",
		"题目：图中有多少个正方形"},
		{"1. Calculate the number of positive small squares N1. The number of positive small squares N1=the number of small squares with side length N1+the number of small squares with side length N1",
		"1.计算正的小正方形数量N1 正的小正方形数量N1=边长为一小正方形数N1+边长为二小正方形数N4"},
		{"2. Calculate the number of slanted small squares N2=the number of slanted small squares with a side length of one square N4+the number of slanted small squares with a side length of two squares N4",
		"2.计算斜着的小正方形数量N2 斜着的小正方形数量N2=斜的边长为一小正方形数N4+斜的边长为二小正方形数N4"},
		{"3. Calculate the total number of small squares N5=the number of positive small squares N1+the number of diagonal small squares N2",
		"3.计算总共的小正方形数N5 总共的小正方形数N5=正的小正方形数量N1+斜着的小正方形数量N2"},
		//变量表
		{"ThenumberN1ofsquareswithasidelengthofonesmallsquare","边长为一小正方形数N1"},
		{"ThesidelengthisthenumberN4oftwosmallsquares","边长为二小正方形数N4"},
		{"ThediagonalsidelengthisasmallsquarenumberN4","斜的边长为一小正方形数N4"},
		{"ThediagonalsidelengthisthenumberN4oftwosmallsquares","斜的边长为二小正方形数N4"},
		{"NumberofpositivesmallsquaresN1","正的小正方形数量N1"},
		{"NumberofslantedsmallsquaresN2","斜着的小正方形数量N2"},
		{"ThetotalnumberofsmallsquaresN5","总共的小正方形数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(边长为一小正方形数N1, 8);
	DefineLangVarInt(边长为二小正方形数N4, 3);
	DefineLangVarInt(斜的边长为一小正方形数N4, 4);
	DefineLangVarInt(斜的边长为二小正方形数N4, 1);
	ColPrintf(PrintfCol::标题, Lang("P49例二 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：图中有多少个正方形"));
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
	DefineLangVarInt(正的小正方形数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算正的小正方形数量N1 正的小正方形数量N1=边长为一小正方形数N1+边长为二小正方形数N4"));
	正的小正方形数量N1 = 边长为一小正方形数N1 + 边长为二小正方形数N4;
	正的小正方形数量N1.PrintProcessLog(1);
	DefineLangVarInt(斜着的小正方形数量N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算斜着的小正方形数量N2 斜着的小正方形数量N2=斜的边长为一小正方形数N4+斜的边长为二小正方形数N4"));
	斜着的小正方形数量N2 = 斜的边长为一小正方形数N4 + 斜的边长为二小正方形数N4;
	斜着的小正方形数量N2.PrintProcessLog(2);
	DefineLangVarInt(总共的小正方形数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算总共的小正方形数N5 总共的小正方形数N5=正的小正方形数量N1+斜着的小正方形数量N2"));
	总共的小正方形数N5 = 正的小正方形数量N1 + 斜着的小正方形数量N2;
	总共的小正方形数N5.PrintProcessLog(3);

}

void P49_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example Three Graphic Counting","P49例三 图形计数"},
		{"Title: How many squares are there in the picture",
		"题目：图中有多少个正方形"},
		{"1. Calculate the total number of small squares N5=the number of small squares with a side length of one N1+the number of small squares with a side length of two N4+the number of small squares with a side length of three N3+the number\nof small squares with a side length of four N4",
		"1.计算总共的小正方形数N5=边长为一小正方形数N1+边长为二小正方形数N4+边长为三小正方形数N3+边长为四小正方形数N4"},
		//变量表
		{"ThenumberN1ofsquareswithasidelengthofonesmallsquare","边长为一小正方形数N1"},
		{"ThesidelengthisthenumberN4oftwosmallsquares","边长为二小正方形数N4"},
		{"ThesidelengthisthenumberN3ofthreesmallsquares","边长为三小正方形数N3"},
		{"ThesidelengthisthenumberN4offoursmallsquares","边长为四小正方形数N4"},
		{"ThetotalnumberofsmallsquaresN5","总共的小正方形数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(边长为一小正方形数N1, 8);
	DefineLangVarInt(边长为二小正方形数N4, 6);
	DefineLangVarInt(边长为三小正方形数N3, 0);
	DefineLangVarInt(边长为四小正方形数N4, 1);
	ColPrintf(PrintfCol::标题, Lang("P49例二 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：图中有多少个正方形"));
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
	DefineLangVarInt(总共的小正方形数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算总共的小正方形数N5=边长为一小正方形数N1+边长为二小正方形数N4+边长为三小正方形数N3+边长为四小正方形数N4"));
	总共的小正方形数N5 = 边长为一小正方形数N1 + 边长为二小正方形数N4 + 边长为三小正方形数N3 + 边长为四小正方形数N4;
	总共的小正方形数N5.PrintProcessLog(1);
}
void P49_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example Three Graphic Counting","P49例四 图形计数"},
		{"Title: How many triangles are there in the picture",
		"题目：图中有多少个三角形"},
		{"1. Calculate the total number of small squares N5=the number of triangles in one combination N1+the number of triangles in two combinations N1+the number of triangles in three combinations N1",
		"1.计算总共的小正方形数N5 总共的小正方形数N5=一块组合的三角形数N1+二块组合的三角形数N1+四块组合的三角形数N1"},
		//变量表
		{"ThenumberoftrianglesinacombinationN1","一块组合的三角形数N1"},
		{"ThenumberoftrianglesN1inacombinationoftwoblocks","二块组合的三角形数N1"},
		{"ThenumberoftrianglesN1inacombinationofthreeblocks","四块组合的三角形数N1"},
		{"ThetotalnumberofsmallsquaresN5","总共的小正方形数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一块组合的三角形数N1, 3);
	DefineLangVarInt(二块组合的三角形数N1, 4);
	DefineLangVarInt(四块组合的三角形数N1, 1);
	ColPrintf(PrintfCol::标题, Lang("P49例三 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：图中有多少个三角形"));
	DefineLangVarInt(总共的小正方形数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算总共的小正方形数N5 总共的小正方形数N5=一块组合的三角形数N1+二块组合的三角形数N1+四块组合的三角形数N1"));
	总共的小正方形数N5 = 一块组合的三角形数N1 + 二块组合的三角形数N1 + 四块组合的三角形数N1;
	总共的小正方形数N5.PrintProcessLog(1);
}
void P49_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P49 Example Three Graphic Counting","P49例五 图形计数"},
		{"Title: How many triangles are there in the picture",
		"题目：图中有多少个三角形"},
		{"1. Calculate the side length of a regular triangle as a number N1. The side length of a regular triangle is a number N1=the last row of regular triangles N2+(last row of regular triangles N2- increasing and decreasing the number of triangles N3 each time)+(last row of regular triangles N2- increasing and decreasing the number of triangles N3 each time - increasing and decreasing the number of triangles N3 each time)+(last row of regular triangles N2- increasing and decreasing the number of triangles N3 each time - increasing and decreasing the number of triangles N3 each time)",
		"1.计算正三角边长为一数N1 正三角边长为一数N1=最后行正三角N2+(最后行正三角N2-每次递增减少三角数N3)+(最后行正三角N2-每次递增减少三角数N3-每次递增减少三角数N3)+(最后行正三角N2-每次递增减少三角数N3-每次递增减少三角数N3-每次递增减少三角数N3)"},
		{"2. Calculate the side length of a regular triangle as two numbers N1. The side length of a regular triangle as two numbers N1=the number of squares in the first layer N3+(the number of squares in the first layer N3+the number of triangles that increase and decrease each time N3)+(the number of squares in the first layer N3+the number of triangles that increase and decrease each time N3+the number of triangles that increase and decrease each time N3)",
		"2.计算正三角边长为二数N1 正三角边长为二数N1=第一层正方形数N3+(第一层正方形数N3+每次递增减少三角数N3)+(第一层正方形数N3+每次递增减少三角数N3+每次递增减少三角数N3)"},
		{"3. Calculate that the side length of a regular triangle is three numbers N1. The side length of a regular triangle is three numbers N1=the number of squares in the first layer N3+(the number of squares in the first layer N3+decreases with each increment of N3)",
		"3.计算正三角边长为三数N1 正三角边长为三数N1=第一层正方形数N3+(第一层正方形数N3+每次递增减少三角数N3)"},
		{"4. Calculate the length of a regular triangle as N1=the number of squares in the first layer N3",
		"4.计算正三角边长为四数N1 正三角边长为四数N1=第一层正方形数N3"},
		{"5. Calculate the first layer N3 of the inverse triangle. The first layer N3 of the inverse triangle is equal to the number of squares in the first layer N3+(the number of squares in the first layer N3+the number of triangles that increase and decrease each time N3)+(the number of squares in the first layer N3+the number of triangles that increase and decrease each time N3+the number of triangles that increase and decrease each time N3)",
		"5.计算反三角第一层数N3 反三角第一层数N3=第一层正方形数N3+(第一层正方形数N3+每次递增减少三角数N3)+(第一层正方形数N3+每次递增减少三角数N3+每次递增减少三角数N3)"},
		//变量表
		{"ThelastrowisaregulartriangleN2","最后行正三角N2"},
		{"IncreaseanddecreasethenumberoftrianglesN3eachtime","每次递增减少三角数N3"},
		{"NumberofsquaresinthefirstlayerN3","第一层正方形数N3"},
		{"ThesidelengthofaregulartriangleisonenumberN1","正三角边长为一数N1"},
		{"ThesidelengthofaregulartriangleisatwodigitnumberN1","正三角边长为二数N1"},
		{"ThesidelengthofaregulartriangleisthreenumbersN1","正三角边长为三数N1"},
		{"ThesidelengthofaregulartriangleisfourdigitsN1","正三角边长为四数N1"},
		{"AntitrianglefirstlayerN3","反三角第一层数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(最后行正三角N2, 4);
	DefineLangVarInt(每次递增减少三角数N3, 1);
	DefineLangVarInt(第一层正方形数N3, 1);
	ColPrintf(PrintfCol::标题, Lang("P49例五 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：图中有多少个三角形"));
	DefineLangVarInt(正三角边长为一数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算正三角边长为一数N1 正三角边长为一数N1=最后行正三角N2+(最后行正三角N2-每次递增减少三角数N3)+(最后行正三角N2-每次递增减少三角数N3-每次递增减少三角数N3)+(最后行正三角N2-每次递增减少三角数N3-每次递增减少三角数N3-每次递增减少三角数N3)"));
	正三角边长为一数N1 = 最后行正三角N2 + (最后行正三角N2 - 每次递增减少三角数N3) + (最后行正三角N2 - 每次递增减少三角数N3 - 每次递增减少三角数N3) + (最后行正三角N2 - 每次递增减少三角数N3 - 每次递增减少三角数N3 - 每次递增减少三角数N3);
	正三角边长为一数N1.PrintProcessLog(1);
	DefineLangVarInt(正三角边长为二数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算正三角边长为二数N1 正三角边长为二数N1=第一层正方形数N3+(第一层正方形数N3+每次递增减少三角数N3)+(第一层正方形数N3+每次递增减少三角数N3+每次递增减少三角数N3)"));
	正三角边长为二数N1 = 第一层正方形数N3 + (第一层正方形数N3 + 每次递增减少三角数N3) + (第一层正方形数N3 + 每次递增减少三角数N3 + 每次递增减少三角数N3);
	正三角边长为二数N1.PrintProcessLog(2);
	DefineLangVarInt(正三角边长为三数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算正三角边长为三数N1 正三角边长为三数N1=第一层正方形数N3+(第一层正方形数N3+每次递增减少三角数N3)"));
	正三角边长为三数N1 = 第一层正方形数N3 + (第一层正方形数N3 + 每次递增减少三角数N3);
	正三角边长为三数N1.PrintProcessLog(3);
	DefineLangVarInt(正三角边长为四数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算正三角边长为四数N1 正三角边长为四数N1=第一层正方形数N3"));
	正三角边长为四数N1 = 第一层正方形数N3;
	正三角边长为四数N1.PrintProcessLog(4);
	DefineLangVarInt(反三角第一层数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算反三角第一层数N3 反三角第一层数N3=第一层正方形数N3+(第一层正方形数N3+每次递增减少三角数N3)+(第一层正方形数N3+每次递增减少三角数N3+每次递增减少三角数N3)"));
	反三角第一层数N3 = 第一层正方形数N3 + (第一层正方形数N3 + 每次递增减少三角数N3) + (第一层正方形数N3 + 每次递增减少三角数N3 + 每次递增减少三角数N3);
	反三角第一层数N3.PrintProcessLog(5);
}
void P49()
{
	P49_1();
	ColPrintf(PrintfCol::方法, "");
	P49_2();
	ColPrintf(PrintfCol::方法, "");
	P49_3();
	ColPrintf(PrintfCol::方法, "");
	P49_4();
	ColPrintf(PrintfCol::方法, "");
	P49_5();
	ColPrintf(PrintfCol::方法, "");
	P49_6();
	ColPrintf(PrintfCol::方法, "");
}
void P49_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P49();
	Lang.SetCurLanguage(LanguageLib::English);
	P49();
	ColPrintf(PrintfCol::方法, "");

}