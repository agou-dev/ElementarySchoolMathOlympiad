#pragma once
void P35_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P35 Example 1 Graphic Segmentation","P35例一 图形分割"},
		{"Title: A small square with a side length of 3cm and a red surface. Each face is cut equally with two cuts, and the cut surface is white. How many cubes can be cut in total? How many faces are three red, two red, and one red?",
		"题目：边长为3cm小正方形，表面是红色，每个面等距离的切两刀，切面为白色，一共可切多少个1cm的正方体，三红，二红，一红的面一共有多少个?"},
		{"1. Calculate the total number of squares N1=the number of small cubes on each edge N2 * the number of small cubes on each edge N2 * the number of small cubes on each edge N2",
		"1.计算一共的正方形N1 一共的正方形N1=每条棱上小正方体数N2*每条棱上小正方体数N2*每条棱上小正方体数N2"},
		{"2. Calculate the number of red faces N3. The number of red faces N3 is equal to the number of small cubes at the vertex, which is 8",
		"2.计算三面红数N3 三面红数N3=在顶点上小正方体数=8"},
		{"3. Calculate the number of dihedra N4=the number of square edges N5 * (the number of small cubes N2 on each edge minus the number of vertices N6 on each edge)",
		"3.计算二面红数N4 二面红数N4=正方形棱数N5*(每条棱上小正方体数N2-每条棱上顶点数N6)"},
		{"4. Calculate the number of red squares on one side N7=the number of square faces N8 * (the number of\nsmall cubes on each edge N2- the number of vertices on each edge N6) * (the number of small cubes on\neach edge N2- the number of vertices on each edge N6)",
		"4.计算一面红数N7 一面红数N7=正方形面数N8*(每条棱上小正方体数N2-每条棱上顶点数N6)*(每条棱上小正方体数N2-每条棱上顶点数N6)"},
		//变量表
		{"NumberOfSmallCubesOnEachEdgeN2","每条棱上小正方体数N2"},
		{"SquareEdgeCountN5","正方形棱数N5"},
		{"NumberOfVerticesOnEachEdgeN6","每条棱上顶点数N6"},
		{"NumberOfSquareFacesN8","正方形面数N8"},
		{"ATotalOfSquaresN1","一共的正方形N1"},
		{"ThreeSidedRednessN3","三面红数N3"},
		{"TwoSidedRedNumberN4","二面红数N4"},
		{"RedNumberN7OnOneSide","一面红数N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(每条棱上小正方体数N2, 3);
	DefineLangVarInt(正方形棱数N5, 12);
	DefineLangVarInt(每条棱上顶点数N6, 2);
	DefineLangVarInt(正方形面数N8, 6);
	ColPrintf(PrintfCol::标题, Lang("P35例一 图形分割"));
	ColPrintf(PrintfCol::标题, Lang("题目：边长为3cm小正方形，表面是红色，每个面等距离的切两刀，切面为白色，一共可切多少个1cm的正方体，三红，二红，一红的面一共有多少个?"));
	DefineLangVarInt(一共的正方形N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共的正方形N1 一共的正方形N1=每条棱上小正方体数N2*每条棱上小正方体数N2*每条棱上小正方体数N2"));
	一共的正方形N1 = 每条棱上小正方体数N2 * 每条棱上小正方体数N2 * 每条棱上小正方体数N2;
	一共的正方形N1.PrintProcessLog(1);
	DefineLangVarInt(三面红数N3, 8);
	ColPrintf(PrintfCol::方法, Lang("2.计算三面红数N3 三面红数N3=在顶点上小正方体数=8"));
	三面红数N3 = 三面红数N3;
	三面红数N3.PrintProcessLog(2);
	DefineLangVarInt(二面红数N4, 8);
	ColPrintf(PrintfCol::方法, Lang("3.计算二面红数N4 二面红数N4=正方形棱数N5*(每条棱上小正方体数N2-每条棱上顶点数N6)"));
	二面红数N4 = 正方形棱数N5 * (每条棱上小正方体数N2 - 每条棱上顶点数N6);
	二面红数N4.PrintProcessLog(3);
	DefineLangVarInt(一面红数N7, 8);
	ColPrintf(PrintfCol::方法, Lang("4.计算一面红数N7 一面红数N7=正方形面数N8*(每条棱上小正方体数N2-每条棱上顶点数N6)*(每条棱上小正方体数N2-每条棱上顶点数N6)"));
	一面红数N7 = 正方形面数N8 * (每条棱上小正方体数N2 - 每条棱上顶点数N6) * (每条棱上小正方体数N2 - 每条棱上顶点数N6);
	一面红数N7.PrintProcessLog(4);
}
void P35_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P35 Example 2 Graphic Segmentation","P35例二 图形分割"},
		{"Title: A square coated with red paint, cut into equidistant small cubes. Among them, there are 60 cubes painted on two sides, and how many cubes painted on one side?",
		"题目：一个涂满红色油漆的正方形，切成等距离的小正方体后，其中二面涂色的有60块，一面涂色的有多少块？"},
		{"Cut an edge into n pieces",
		"设一条棱切成n块"},
		{"1. According to the previous question, calculate the method of coloring two sides and bring it in to obtain S1 12 * (n-1)=60",
		"1.根据上一题计算二面涂色的方法带入得到S1 12*(n-1)=60"},
		{"2. Simplify S1 to obtain S2 (n-1)=60/12=>n-1=5",
		"2.化简S1得到S2 (n-2)=60/12=>n-2=5"},
		{"3. Simplify S2 to obtain S3 n=7",
		"3.化简S2得到S3 n=7"},
		{"4. Calculate the number of squares N1 on a face. The number of squares N1 on a face is equal to the number of\nsquare faces N2 * (the number of small cubes N3 on each edge minus the number of vertices N6 on each edge) *\n(the number of small cubes N3 on each edge minus the number of vertices N6 on each edge)",
		"4.计算一个面的正方形数N1 一个面的正方形数N1=正方形面数N2*(每条棱上小正方体数N3-每条棱上顶点数N6)*(每条棱上小正方体数N3-每条棱上顶点数N6)"},
		//变量表
		{"SquareFacesN2","正方形面数N2"},
		{"NumberOfSmallCubesN3OnEachEdge","每条棱上小正方体数N3"},
		{"NumberOfVerticesOnEachEdgeN6","每条棱上顶点数N6"},
		{"NumberOfSquaresOnOneFaceN1","一个面的正方形数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(正方形面数N2,6);
	DefineLangVarInt(每条棱上小正方体数N3, 7);
	DefineLangVarInt(每条棱上顶点数N6, 2);
	ColPrintf(PrintfCol::标题, Lang("P35例二 图形分割"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个涂满红色油漆的正方形，切成等距离的小正方体后，其中二面涂色的有60块，一面涂色的有多少块？"));
	ColPrintf(PrintfCol::方法, Lang("设一条棱切成n块"));
	ColPrintf(PrintfCol::方法, Lang("1.根据上一题计算二面涂色的方法带入得到S1 12*(n-1)=60"));
	ColPrintf(PrintfCol::方法, Lang("2.化简S1得到S2 (n-2)=60/12=>n-2=5"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 n=7"));
	DefineLangVarInt(一个面的正方形数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算一个面的正方形数N1 一个面的正方形数N1=正方形面数N2*(每条棱上小正方体数N3-每条棱上顶点数N6)*(每条棱上小正方体数N3-每条棱上顶点数N6)"));
	一个面的正方形数N1 = 正方形面数N2 * (每条棱上小正方体数N3 - 每条棱上顶点数N6) * (每条棱上小正方体数N3 - 每条棱上顶点数N6);
	一个面的正方形数N1.PrintProcessLog(4);
}
void P35_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P35 Example 3 Graphic Segmentation","P35例三 图形分割"},
		{"Question: After a rectangular prism is painted red and cut into equidistant small cubes, how many faces are there in three red, two red, and one red?",
		"题目：一个长方体涂上红色，切成等距离的小正方体后（长宽高分别为5，3，4），三红，二红，一红的面一共有多少个?"},
		{"1. Calculate the number of red faces N1. The number of red faces N1 is equal to the number of small cubes at the vertex, which is 8",
		"1.计算三面红数N1 三面红数N1=在顶点上小正方体数=8"},
		{"2. Calculate the number of square faces N2. The number of square faces N2=(((the number of long squares N3- the number of vertices on each edge N6)+(the\nnumber of wide squares N4- the number of vertices on each edge N6)+(the number of high squares N5- the number of vertices on each edge N6)\n* the number of edges in each group of rectangular prisms N7",
		"2.计算二面红数N2 二面红数N2=((长的正方形数N3-每条棱上顶点数N6)+(宽的正方形数N4-每条棱上顶点数N6)+(高的正方形数N5-每条棱上顶点数N6))*长方体每组棱数N7"},
		{"3. Calculate the number of red dots on both sides N3=((the number of long squares N3- the number of vertices N6 on each edge) * (the number of tall squares N5- the number of vertices N6 on each edge) * multiplier N1",
		"3.计算正反一面红数N3 正反一面红数N3=((长的正方形数N3-每条棱上顶点数N6)*(高的正方形数N5-每条棱上顶点数N6))*倍率N1"},
		{"4. Calculate the number of red dots on the upper and lower sides N3. The number of red dots on one side N3=((the number of long squares N3- the number of vertices N6 on each edge) * (the number of wide squares N4- the number of vertices N6 on each edge) * multiplier N1",
		"4.计算上下一面红数N4 上下一面红数N4=((长的正方形数N3-每条棱上顶点数N6)*(宽的正方形数N4-每条棱上顶点数N6))*倍率N1"},
		{"5. Calculate the number of red dots on the left and right sides N5. The number of red dots on the left and right sides N5=((the number of high squares N5- the number of vertices N6 on each edge) * (the number of wide squares N4- the number of vertices N6 on each edge) * multiplier N1",
		"5.计算左右一面红数N5 左右一面红数N5=((高的正方形数N5-每条棱上顶点数N6)*(宽的正方形数N4-每条棱上顶点数N6))*倍率N1"},
		{"6. Calculate the number of sides N9, where N9 is equal to the red number of the positive and negative sides N3+the red number of the upper and lower sides N4+the red number of the left and right sides N5",
		"6.计算一面数N9 一面数N9=正反一面红数N3+上下一面红数N4+左右一面红数N5"},
		//变量表
		{"TheNumberOfLongSquaresN3","长的正方形数N3"},
		{"TheNumberOfWideSquaresN4","宽的正方形数N4"},
		{"HighNumberOfSquaresN5","高的正方形数N5"},
		{"NumberOfVrticesOnEachEdgeN6","每条棱上顶点数N6"},
		{"TheNumberOfEdgesPerGroupOfRectangularPrismIsN7","长方体每组棱数N7"},
		{"MagnificationN1","倍率N1"},
		{"ThreeSidedRednessN1","三面红数N1"},
		{"TwoSidedRedNumberN2","二面红数N2"},
		{"PositiveAndNegativeSideRedNumberN3","正反一面红数N3"},
		{"RedNumberN4OnTheUpperAndLowerSides","上下一面红数N4"},
		{"TheRedNumberOnTheLeftAndRightSidesIsN5","左右一面红数N5"},
		{"NumberN9OnOneSide","一面数N9"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(长的正方形数N3,5);
	DefineLangVarInt(宽的正方形数N4, 3);
	DefineLangVarInt(高的正方形数N5, 4);
	DefineLangVarInt(每条棱上顶点数N6, 2);
	DefineLangVarInt(长方体每组棱数N7,4)
	DefineLangVarInt(倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P35例三 图形分割"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个长方体涂上红色，切成等距离的小正方体后（长宽高分别为5，3，4），三红，二红，一红的面一共有多少个?"));
	DefineLangVarInt(三面红数N1, 8);
	ColPrintf(PrintfCol::方法, Lang("1.计算三面红数N1 三面红数N1=在顶点上小正方体数=8"));
	三面红数N1 = 三面红数N1;
	三面红数N1.PrintProcessLog(1);
	DefineLangVarInt(二面红数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算二面红数N2 二面红数N2=((长的正方形数N3-每条棱上顶点数N6)+(宽的正方形数N4-每条棱上顶点数N6)+(高的正方形数N5-每条棱上顶点数N6))*长方体每组棱数N7"));
	二面红数N2 = ((长的正方形数N3 - 每条棱上顶点数N6) + (宽的正方形数N4 - 每条棱上顶点数N6) + (高的正方形数N5 - 每条棱上顶点数N6)) * 长方体每组棱数N7;
	二面红数N2.PrintProcessLog(2);
	DefineLangVarInt(正反一面红数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算正反一面红数N3 正反一面红数N3=((长的正方形数N3-每条棱上顶点数N6)*(高的正方形数N5-每条棱上顶点数N6))*倍率N1"));
	正反一面红数N3 = ((长的正方形数N3 - 每条棱上顶点数N6) * (高的正方形数N5 - 每条棱上顶点数N6)) * 倍率N1;
	正反一面红数N3.PrintProcessLog(3);
	DefineLangVarInt(上下一面红数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算上下一面红数N4 上下一面红数N4=((长的正方形数N3-每条棱上顶点数N6)*(宽的正方形数N4-每条棱上顶点数N6))*倍率N1"));
	上下一面红数N4 = ((长的正方形数N3 - 每条棱上顶点数N6) * (宽的正方形数N4 - 每条棱上顶点数N6)) * 倍率N1;
	上下一面红数N4.PrintProcessLog(4);
	DefineLangVarInt(左右一面红数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算左右一面红数N5 左右一面红数N5=((高的正方形数N5-每条棱上顶点数N6)*(宽的正方形数N4-每条棱上顶点数N6))*倍率N1"));
	左右一面红数N5 = ((高的正方形数N5 - 每条棱上顶点数N6) * (宽的正方形数N4 - 每条棱上顶点数N6)) * 倍率N1;
	左右一面红数N5.PrintProcessLog(5);
	DefineLangVarInt(一面数N9, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算一面数N9 一面数N9=正反一面红数N3+上下一面红数N4+左右一面红数N5"));
	一面数N9 = 正反一面红数N3 + 上下一面红数N4 + 左右一面红数N5;
	一面数N9.PrintProcessLog(6);
}
void P35()
{
	P35_1();
	ColPrintf(PrintfCol::方法, "");
	P35_2();
	ColPrintf(PrintfCol::方法, "");
	P35_3();
	ColPrintf(PrintfCol::方法, "");
}
void P35_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P35();
	Lang.SetCurLanguage(LanguageLib::English);
	P35();
	ColPrintf(PrintfCol::方法, "");

}