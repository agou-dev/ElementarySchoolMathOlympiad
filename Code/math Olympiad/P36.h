#pragma once
void P36_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P36 Example 1 Surface Area","P36例一 表面积"},
		{"Title: Dig out a small square with a length of 10cm, a width of 2cm, and a height of 2cm from the top right corner of the shape, and calculate its surface area.",
		"题目：从一个棱长为10cm的小正方形中，从图形右上角挖去一个长是10cm，宽为2cm，高为2cm，计算它的表面积。"},
		{"1. Calculate the original square surface area S1. The original square surface area S1=square edge length L1 * square edge length L1 * number of square faces N1",
		"1.计算原来正方形表面积S1 原来正方形表面积S1=正方形棱长L1*正方形棱长L1*正方形面数N1"},
		{"2. Calculate and remove the surface area of the small rectangle S2. Removing the surface area of the small rectangle S2=rectangle height H1 * rectangle width B1",
		"2.计算去除小长方形表面积S2 去除小长方形表面积S2=长方形高H1*长方形宽B1*倍率N1"},
		{"3. Calculate the remaining small square surface area S3. The remaining small square surface area S3=the original square surface area S1 minus the small rectangular surface area S2",
		"3.计算剩下小正方形表面积S3 剩下小正方形表面积S3=原来正方形表面积S1-去除小长方形表面积S2"},
		//变量表
		{"SquareEdgeLengthL1","正方形棱长L1"},
		{"NumberOfSquareFacesN1","正方形面数N1"},
		{"RectangularHeightH1","长方形高H1"},
		{"RectangularWidthB1","长方形宽B1"},
		{"MagnificationN1","倍率N1"},
		{"OriginalSquareSurfaceAreaS1","原来正方形表面积S1"},
		{"RemoveTheSurfaceAreaS2OfTheAmallRectangle","去除小长方形表面积S2"},
		{"RemainingSmallSquareSurfaceAreaS3","剩下小正方形表面积S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(正方形棱长L1, 10);
	DefineLangVarInt(正方形面数N1, 6);
	DefineLangVarInt(长方形高H1, 2);
	DefineLangVarInt(长方形宽B1, 2);
	DefineLangVarInt(倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P36例一 表面积"));
	ColPrintf(PrintfCol::标题, Lang("题目：从一个棱长为10cm的小正方形中，从图形右上角挖去一个长是10cm，宽为2cm，高为2cm，计算它的表面积。"));
	DefineLangVarInt(原来正方形表面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算原来正方形表面积S1 原来正方形表面积S1=正方形棱长L1*正方形棱长L1*正方形面数N1"));
	原来正方形表面积S1 = 正方形棱长L1 * 正方形棱长L1 * 正方形面数N1;
	原来正方形表面积S1.PrintProcessLog(1);
	DefineLangVarInt(去除小长方形表面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算去除小长方形表面积S2 去除小长方形表面积S2=长方形高H1*长方形宽B1*倍率N1"));
	去除小长方形表面积S2 = 长方形高H1 * 长方形宽B1 * 倍率N1;
	去除小长方形表面积S2.PrintProcessLog(2);
	DefineLangVarInt(剩下小正方形表面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算剩下小正方形表面积S3 剩下小正方形表面积S3=原来正方形表面积S1-去除小长方形表面积S2"));
	剩下小正方形表面积S3 = 原来正方形表面积S1 - 去除小长方形表面积S2;
	剩下小正方形表面积S3.PrintProcessLog(3);
}
void P36_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P36 Example 2 Surface Area","P36例二 表面积"},
		{"Question: What is the surface area of a cube with a length of 10cm, a width of 6cm, and a height of 5cm, with an edge length of 2cm removed from the bottom left corner?",
		"题目：从一个长为10cm，宽为6cm，高为5cm中从左下去掉一个棱长为2cm的正方体，它的表面积是多少?"},
		{"1. Calculate the reduced surface area. The reduced surface area is equal to (cube edge length L1 * cube edge length L1) * the number of reduced faces",
		"1.计算减少的表面积S1 减少的表面积S1=(正方体棱长L1*正方体棱长L1)*减少的面数N1"},
		{"2. Calculate the increased surface area S2. The increased surface area S2=(cube edge length L1 * cube edge length L1) * the number of increased faces N1",
		"2.计算增加的表面积S2 增加的表面积S2=(正方体棱长L1*正方体棱长L1)*增加的面数N1"},
		{"3. Calculate the surface area of the rectangle S3. The surface area of the rectangle S3=(length A1 * width B1+length A1 * height H1+width B1 * height H1) * magnification N1",
		"3.计算长方形的表面积S3 长方形的表面积S3=(长A1*宽B1+长A1*高H1+宽B1*高H1)*倍率N1"},
		{"4. Calculate the reduced surface area of the rectangle S4=the surface area of the rectangle S3+the increased surface area S2- the reduced surface area S1",
		"4.计算减少后长方形的表面积S4 减少后长方形的表面积S4=长方形的表面积S3+增加的表面积S2-减少的表面积S1"},
		//变量表
		{"CubeEdgeLengthL1","正方体棱长L1"},
		{"ReducedNumberOfFacesN1","减少的面数N1"},
		{"IncreasedNumberOfFacesN1","增加的面数N1"},
		{"LongA1","长A1"},
		{"WidthB1","宽B1"},
		{"HighH1","高H1"},
		{"MagnificationN1","倍率N1"},
		{"ReducedSurfaceAreaS1","减少的表面积S1"},
		{"IncreasedSurfaceAreaS2","增加的表面积S2"},
		{"RectangularAurfaceAreaS3","长方形的表面积S3"},
		{"ReduceTheSurfaceAreaOfTheRectangleS4","减少后长方形的表面积S4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(正方体棱长L1, 2);
	DefineLangVarInt(减少的面数N1, 3);
	DefineLangVarInt(增加的面数N1, 3);
	DefineLangVarInt(长A1, 10);
	DefineLangVarInt(宽B1, 6);
	DefineLangVarInt(高H1, 5);
	DefineLangVarInt(倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P36例二 表面积"));
	ColPrintf(PrintfCol::标题, Lang("题目：从一个棱长为10cm的小正方形中，从图形右上角挖去一个长是10cm，宽为2cm，高为2cm，计算它的表面积。"));
	DefineLangVarInt(减少的表面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算减少的表面积S1 减少的表面积S1=(正方体棱长L1*正方体棱长L1)*减少的面数N1"));
	减少的表面积S1 = (正方体棱长L1 * 正方体棱长L1) * 减少的面数N1;
	减少的表面积S1.PrintProcessLog(1);
	DefineLangVarInt(增加的表面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算增加的表面积S2 增加的表面积S2=(正方体棱长L1*正方体棱长L1)*增加的面数N1"));
	增加的表面积S2 = (正方体棱长L1 * 正方体棱长L1) * 增加的面数N1;
	增加的表面积S2.PrintProcessLog(2);
	DefineLangVarInt(长方形的表面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算长方形的表面积S3 长方形的表面积S3=(长A1*宽B1+长A1*高H1+宽B1*高H1)*倍率N1"));
	长方形的表面积S3 = (长A1 * 宽B1 + 长A1 * 高H1 + 宽B1 * 高H1) * 倍率N1;
	长方形的表面积S3.PrintProcessLog(3);
	DefineLangVarInt(减少后长方形的表面积S4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算减少后长方形的表面积S4 减少后长方形的表面积S4=长方形的表面积S3+增加的表面积S2-减少的表面积S1"));
	减少后长方形的表面积S4 = 长方形的表面积S3 + 增加的表面积S2 - 减少的表面积S1;
	减少后长方形的表面积S4.PrintProcessLog(4);
}
void P36_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P36 Example 2 Surface Area","P36例三 表面积"},
		{"Title: Stack 19 small cubes with 3cm long edges (as shown in the top left figure below) and calculate their surface area",
		"题目：把19个棱长为3cm的小正方体，堆叠起来（从前左上图形看下图）计算它的表面积"},
		{"1. Calculate the surface area S1 of the small cube above, where S1=the edge length L1 of the cube * the edge length L1 of the cube * the number of faces N1 of the cube when viewed from above",
		"1.计算上面小正方体表面积S1 上面小正方体表面积S1=正方体的棱长L1*正方体的棱长L1*从上面看正方体的面数N1"},
		{"2. Calculate the surface area S2 of the left small cube. The surface area S2 of the left small cube is\nequal to the edge length L1 of the cube multiplied by the edge length L1 of the cube multiplied by\nthe number of faces N2 of the cube when viewed from the left",
		"2.计算左面小正方体表面积S2 左面小正方体表面积S2=正方体的棱长L1*正方体的棱长L1*从左面看正方体的面数N2"},
		{"3. Calculate the surface area of the small cube in front S3=the edge length L1 of the cube * the edge length L1 of the cube * the number of faces N3 of the cube when viewed from the front",
		"3.计算前面小正方体表面积S3 前面小正方体表面积S3=正方体的棱长L1*正方体的棱长L1*从前面看正方体的面数N3"},
		{"4. Calculate the surface area S4. Surface area S4=surface area of the upper small cube S1+surface area of the left small cube S2+surface area of the front small cube S3",
		"4.计算表面积S4 表面积S4=上面小正方体表面积S1+左面小正方体表面积S2+前面小正方体表面积S3"},
		//变量表
		{"TheEdgeLengthL1OfACube","正方体的棱长L1"},
		{"TheNumberOfFacesN1OfACubeWhenViewedFromAbove","从上面看正方体的面数N1"},
		{"TheNumberOfFacesN2OfACubeWhenViewedFromTheLeft","从左面看正方体的面数N2"},
		{"TheNumberOfFacesN30fACubeWhenViewedFromTheFront","从前面看正方体的面数N3"},
		{"TheSurfaceAreaS1OfTheSmallCube Above","上面小正方体表面积S1"},
		{"LeftSmallCubeSurfaceAreaS2","左面小正方体表面积S2"},
		{"FrontSmallCubeSurfaceAreaS3","前面小正方体表面积S3"},
		{"SurfaceAreaS4","表面积S4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(正方体的棱长L1, 3);
	DefineLangVarInt(从上面看正方体的面数N1, 9);
	DefineLangVarInt(从左面看正方体的面数N2, 8);
	DefineLangVarInt(从前面看正方体的面数N3, 10);
	typedef ScanningLine<5, 5, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(1),float(1.5 )},{float(1.5 ),float(1.5 )}, };
	test.AddPolygon(ScanningLineT::Point(float(1.5), float(1)), Vex1, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex2 = { {float(1.5),float(1)},{float(1.5),float(1.5)},{float(2),float(1.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(2), float(1)), Vex2, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex3 = { {float(2),float(1)},{float(2),float(1.5)},{float(2.5),float(1.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(2.5), float(1)), Vex3, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex4 = { {float(1),float(1.5)},{float(1),float(2)},{float(1.5),float(2)}, };
	test.AddPolygon(ScanningLineT::Point(float(1.5), float(1.5)), Vex4, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex5 = { {float(1),float(2)},{float(1),float(2.5)},{float(1.5),float(2.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(1.5), float(2)), Vex5, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex6 = { {float(1.5),float(1.5)},{float(1.5),float(2)},{float(2),float(2)}, };
	test.AddPolygon(ScanningLineT::Point(float(2), float(1.5)), Vex6, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex7 = { {float(2),float(1.5)},{float(2),float(2.0)},{float(2.5),float(2)}, };
	test.AddPolygon(ScanningLineT::Point(float(2.5), float(1.5)), Vex7, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex8 = { {float(1.5),float(2)},{float(1.5),float(2.5)},{float(2),float(2.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(2), float(2)), Vex8, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex9 = { {float(2),float(2)},{float(2),float(2.5)},{float(2.5),float(2.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(2.5), float(2)), Vex9, ScanningLineT::FillMode::EdgeMode, '*');



	ColPrintf(PrintfCol::标题, Lang("P36例三 表面积"));
	ColPrintf(PrintfCol::标题, Lang("题目：把19个棱长为3cm的小正方体，堆叠起来（从前左上图形看下图）计算它的表面积"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Yellow);
	DefineLangVarInt(上面小正方体表面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算上面小正方体表面积S1 上面小正方体表面积S1=正方体的棱长L1*正方体的棱长L1*从上面看正方体的面数N1"));
	上面小正方体表面积S1 = 正方体的棱长L1 * 正方体的棱长L1 * 从上面看正方体的面数N1;
	上面小正方体表面积S1.PrintProcessLog(1);
	DefineLangVarInt(左面小正方体表面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算左面小正方体表面积S2 左面小正方体表面积S2=正方体的棱长L1*正方体的棱长L1*从左面看正方体的面数N2"));
	左面小正方体表面积S2 = 正方体的棱长L1 * 正方体的棱长L1 * 从左面看正方体的面数N2;
	左面小正方体表面积S2.PrintProcessLog(2);
	DefineLangVarInt(前面小正方体表面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算前面小正方体表面积S3 前面小正方体表面积S3=正方体的棱长L1*正方体的棱长L1*从前面看正方体的面数N3"));
	前面小正方体表面积S3 = 正方体的棱长L1 * 正方体的棱长L1 * 从前面看正方体的面数N3;
	前面小正方体表面积S3.PrintProcessLog(3);
	DefineLangVarInt(表面积S4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算表面积S4 表面积S4=上面小正方体表面积S1+左面小正方体表面积S2+前面小正方体表面积S3"));
	表面积S4 = 上面小正方体表面积S1 + 左面小正方体表面积S2 + 前面小正方体表面积S3;
	表面积S4.PrintProcessLog(4);
}
void P36()
{
	P36_1();
	ColPrintf(PrintfCol::方法, "");
	P36_2();
	ColPrintf(PrintfCol::方法, "");
	P36_3();
	ColPrintf(PrintfCol::方法, "");
}
void P36_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P36();
	Lang.SetCurLanguage(LanguageLib::English);
	P36();
	ColPrintf(PrintfCol::方法, "");

}