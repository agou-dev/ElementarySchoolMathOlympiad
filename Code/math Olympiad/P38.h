#pragma once
void P38_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 Case One Cut and Supplement Method","P38例一 割补法"},
		{"Title: Calculate the shaded area as shown in the figure, where the side length of the large square is 5 and the side length of the small square is 3",
		"题目：如图所示计算阴影部分面积3"},
		{"1. Calculate the shaded area S1. The shaded area S1 is equal to the length A1 of the rectangle without blank spaces multiplied by the width B1 of the rectangle",
		"1.计算阴影部分面积S1 阴影部分面积S1=长方形不加空白的长A1*长方形宽B1"},
		
		//变量表
		{"Arectanglewithoutblankspace,lengthA1","长方形不加空白的长A1"},
		{"RectangularwidthB1","长方形宽B1"},
		{"ShadowareaS1","阴影部分面积S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddTriangle(ScanningLineT::Point(1, 5), ScanningLineT::Point(1, 1), ScanningLineT::Point(2.5, 1), ScanningLineT::FillMode::RealMode, '*');
	test.AddTriangle(ScanningLineT::Point(1.5, 5), ScanningLineT::Point(3, 1), ScanningLineT::Point(4.5, 5), ScanningLineT::FillMode::RealMode, '*');
	test.AddTriangle(ScanningLineT::Point(5, 5), ScanningLineT::Point(3.5, 1), ScanningLineT::Point(5, 1), ScanningLineT::FillMode::RealMode, '*');
	test.AddText(PrintfCol::顶点标注, 5.2, 3.0, "28");
	test.AddText(PrintfCol::顶点标注, 5.4, 3.0, "28+6+6=40");
	test.AddText(PrintfCol::顶点标注, 2.5, 5.3, "20");
	DefineLangVar(float, 长方形不加空白的长A1, 28);
	DefineLangVar(float, 长方形宽B1, 20);
	ColPrintf(PrintfCol::标题, Lang("P38例一 割补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算阴影部分面积3"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, 阴影部分面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算阴影部分面积S1 阴影部分面积S1=长方形不加空白的长A1*长方形宽B1"));
	阴影部分面积S1 = 长方形不加空白的长A1 * 长方形宽B1;
	阴影部分面积S1.PrintProcessLog(1);
}
void P38_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 Example One Variation Practice Cutting and Supplementing Method","P38例一变式练习 割补法"},
		{"Title: As shown in the picture, there is a lawn below with two 1cm wide roads in the middle. Find the area of lawn planted",
		"题目：如图所示下面一块草坪，中间有两边宽为1cm的道路，求种植草坪面积."},
		{"1. Calculate the length A1 of a rectangle without blank spaces. The length A1 of a rectangle without blank spaces equals the length A1 of the rectangle minus the width B1 of the road",
		"1.计算长方形不加空白的长A1 长方形不加空白的长A1=长方形长A1-道路宽度B1"},
		{"2. Calculate the width A3 of the rectangle without blank space. The width A3 of the rectangle without blank space is equal to the width A2 of the rectangle minus the width B1 of the road",
		"2.计算长方形不加空白的宽B2 长方形不加空白的宽B2=长方形宽A2-道路宽度B1"},
		{"3. Calculate the shaded area S1. The shaded area S1 is equal to the length A1 of the rectangle without blank space multiplied by the width B2 of the rectangle without blank space",
		"3.计算阴影部分面积S1 阴影部分面积S1=长方形不加空白的长A1*长方形不加空白的宽B2"},

		//变量表
		{"RectangularlengthA1","长方形长A1"},
		{"RoadwidthB1","道路宽度B1"},
		{"RectangularwidthA2","长方形宽A2"},
		{"Arectanglewithoutblankspace,lengthA1","长方形不加空白的长A1"},
		{"WidthB2ofrectanglewithoutblankspace","长方形不加空白的宽B2"},
		{"ShadowareaS1","阴影部分面积S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex6 = { {float(1),float(1)},{float(2),float(1)},{float(2),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(1.0), float(3.0)), Vex6, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex5 = { {float(1),float(4)},{float(2),float(4)},{float(2),float(6)} };
	test.AddPolygon(ScanningLineT::Point(float(1.0), float(6.0)), Vex5, ScanningLineT::FillMode::EdgeMode, '+');

	std::vector<ScanningLineT::Point> Vex7 = { {float(3),float(1)},{float(6),float(1)},{float(6),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3.0), float(3.0)), Vex7, ScanningLineT::FillMode::EdgeMode, '+');

	std::vector<ScanningLineT::Point> Vex8 = { {float(3),float(4)},{float(6),float(4)},{float(6),float(6)} };
	test.AddPolygon(ScanningLineT::Point(float(3.0), float(6.0)), Vex8, ScanningLineT::FillMode::EdgeMode, '+');

	test.AddText(PrintfCol::顶点标注, 6.2, 4.5, "80米");
	
	test.AddText(PrintfCol::顶点标注, 5.1, 6.1, "50米");
	DefineLangVar(float, 长方形长A1, 80);
	DefineLangVar(float, 道路宽度B1, 1);
	DefineLangVar(float, 长方形宽A2, 50);
	ColPrintf(PrintfCol::标题, Lang("P38例一变式练习 割补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示下面一块草坪，中间有两边宽为1cm的道路，求种植草坪面积."));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, 长方形不加空白的长A1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算长方形不加空白的长A1 长方形不加空白的长A1=长方形长A1-道路宽度B1"));
	长方形不加空白的长A1 = 长方形长A1 - 道路宽度B1;
	长方形不加空白的长A1.PrintProcessLog(1);
	DefineLangVar(float, 长方形不加空白的宽B2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算长方形不加空白的宽B2 长方形不加空白的宽B2=长方形宽A2-道路宽度B1"));
	长方形不加空白的宽B2 = 长方形宽A2 - 道路宽度B1;
	长方形不加空白的宽B2.PrintProcessLog(2);
	DefineLangVar(float, 阴影部分面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算阴影部分面积S1 阴影部分面积S1=长方形不加空白的长A1*长方形不加空白的宽B2"));
	阴影部分面积S1 = 长方形不加空白的长A1 * 长方形不加空白的宽B2;
	阴影部分面积S1.PrintProcessLog(3);
}
void P38_1_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 cases of double cutting and patching method","P38例二 割补法"},
		{"Title: Calculate the shaded area as shown in the figure, where the side length of the large square is 5 and the side length of the small square is 3",
		"题目：如图所示计算阴影部分面积，大正方形ABFG的边长是5，小正方形的边长是3"},
		{"1. Calculate the length A1 of AE. The length A1 of AE is equal to the side length A2 of the large rectangle minus the side length A3 of the small rectangle",
		"1.计算AE的长A1 AE的长A1=大长方形边长A2-小长方形边长A3"},
		{"2. Calculate the area of AED S1. AED area S1=length of AE A1 * side length of small rectangle A3/magnification N1",
		"2.计算AED的面积S1 AED的面积S1=AE的长A1*小长方形边长A3/倍率N1"},
		{"3. Calculate the area S2 of AFE, which is equal to the length A1 of AE multiplied by the side length A2 of the large rectangle and multiplied by N1",
		"3.计算AFE的面积S2 AFE的面积S2=AE的长A1*大长方形边长A2/倍率N1"},
		{"4. Calculate the area of EDF S3. The area of EDF S3=the side length of the small rectangle A3 * the side length of the small rectangle A3/the magnification N1",
		"4.计算EDF的面积S3 EDF的面积S3=小长方形边长A3*小长方形边长A3/倍率N1"},
		{"5. Calculate the shadow area S4. Shadow area S4=AED area S1+AEE area S2+EDF area S3",
		"5.计算阴影面积S4 阴影面积S4=AED的面积S1+AFE的面积S2+EDF的面积S3"},
		//变量表
		{"ThesidelengthofthelargerectangleisA2","大长方形边长A2"},
		{"SmallrectanglewithsidelengthA3","小长方形边长A3"},
		{"MagnificationN1","倍率N1"},
		{"AE'slongA1","AE的长A1"},
		{"AEDareaS1","AED的面积S1"},
		{"AFEareaS2","AFE的面积S2"},
		{"EDF'sareaS3","EDF的面积S3"},
		{"ShadowareaS4","阴影面积S4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexC=test.AddTriangle(ScanningLineT::Point(1, 6 ), ScanningLineT::Point(6, 1 ), ScanningLineT::Point(9, 3 ), ScanningLineT::FillMode::RealMode, '+',0);
	//std::vector<ScanningLineT::Point> Vex1 = { {float(1 ),float(1 )},{float(6  ),float(1)},{float(9 ),float(3 )},{float(9),float(6)} };
	//test.AddPolygon(ScanningLineT::Point(float(1), float(6 )), Vex1, ScanningLineT::FillMode::EdgeMode, '+',0);
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(6),float(1)},{float(6),float(6)} };
	unsigned int nSectorIndexA=test.AddPolygon(ScanningLineT::Point(float(1), float(6)), Vex1, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex5 = { {float(6),float(3)},{float(9),float(3)},{float(9),float(6)} };
	unsigned int nSectorIndexB=test.AddPolygon(ScanningLineT::Point(float(6), float(6)), Vex5, ScanningLineT::FillMode::EdgeMode, '-', 0);

	unsigned int nSectorIndexD = test.AddTriangle(ScanningLineT::Point(1, 6), ScanningLineT::Point(6, 3), ScanningLineT::Point(9, 3), ScanningLineT::FillMode::RealMode, '+', 0);
	//集合论条件填充SetTheoryCondition nFillMode
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		
		bool InCndNotInAB = test.TriangleN(nSectorIndexC)->Hit(p) & (!test.PolygonN(nSectorIndexA)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p));

		//bool InCndNotInAB = test.TriangleN(nSectorIndexC)->Hit(p) & (!test.PolygonN(nSectorIndexA)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p));
		return  InCndNotInAB;
		};
	
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition2 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA

		bool InAD1 = test.TriangleN(nSectorIndexA)->Hit(p) & test.TriangleN(nSectorIndexD)->Hit(p);

		//bool InCndNotInAB = test.TriangleN(nSectorIndexC)->Hit(p) & (!test.PolygonN(nSectorIndexA)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p));
		return  InAD1;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition3 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA

		bool InAAndNotInD = test.PolygonN(nSectorIndexA)->Hit(p) & (!test.TriangleN(nSectorIndexD)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p)) & (test.TriangleN(nSectorIndexC)->Hit(p));

		//bool InCndNotInAB = test.TriangleN(nSectorIndexC)->Hit(p) & (!test.PolygonN(nSectorIndexA)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p));
		return  InAAndNotInD;
		};
	//
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.TriangleN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.PolygonN(nSectorIndexB)->AddBox(Box);
	//追加C的包围盒
	test.PolygonN(nSectorIndexC)->AddBox(Box);
	//追加D的包围盒
	test.PolygonN(nSectorIndexD)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 0.7, 5.7, "A");
	test.AddText(PrintfCol::顶点标注, 6.3, 5.7, "B");
	test.AddText(PrintfCol::顶点标注, 6.3, 9, "C");
	test.AddText(PrintfCol::顶点标注, 2.7, 9, "D");
	test.AddText(PrintfCol::顶点标注, 2.7, 5.7, "E");
	test.AddText(PrintfCol::顶点标注, 6, 1, "F");
	test.AddText(PrintfCol::顶点标注, 0.9, 0.9, "G");
	DefineLangVar(float, 大长方形边长A2, 5);
	DefineLangVar(float, 小长方形边长A3, 3);
	DefineLangVar(float, 倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P38例二 割补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算阴影部分面积，大正方形ABFG的边长是5，小正方形的边长是3"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '1');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition2, '3');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition3, '2');
	test.Printf(PrintfCol::Green);
	DefineLangVar(float,AE的长A1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算AE的长A1 AE的长A1=大长方形边长A2-小长方形边长A3"));
	AE的长A1 = 大长方形边长A2 - 小长方形边长A3;
	AE的长A1.PrintProcessLog(1);
	DefineLangVar(float, AED的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算AED的面积S1 AED的面积S1=AE的长A1*小长方形边长A3/倍率N1"));
	AED的面积S1 = AE的长A1 * 小长方形边长A3 / 倍率N1;
	AED的面积S1.PrintProcessLog(2);
	DefineLangVar(float, AFE的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算AFE的面积S2 AFE的面积S2=AE的长A1*大长方形边长A2/倍率N1"));
	AFE的面积S2 = AE的长A1 * 大长方形边长A2 / 倍率N1;
	AFE的面积S2.PrintProcessLog(3);
	DefineLangVar(float, EDF的面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算EDF的面积S3 EDF的面积S3=小长方形边长A3*小长方形边长A3/倍率N1"));
	EDF的面积S3 = 小长方形边长A3 * 小长方形边长A3 / 倍率N1;
	EDF的面积S3.PrintProcessLog(4);
}
void P38_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 Example of Two Variant Practice Cut and Supplement Method","P38例二变式练习 割补法"},
		{"Title: Calculate the shaded area as shown in the figure, where the side length of the large square is 4 and the side length of the small square is 3",
		"题目：如图所示计算阴影部分面积，大正方形的边长是4，小正方形的边长是3"},
		{"1. Calculate the area of BGE S1. BGE area S1=small rectangle side length A1 * large rectangle side length A2/multiplier N1",
		"1.计算BGE的面积S1 BGE的面积S1=小长方形边长A1*大长方形边长A2/倍率N1"},
		{"2. Calculate the area S2 of BED. The area S2 of BED is equal to the side length A1 of the small rectangle multiplied by the side length A1 of the small rectangle divided by the multiplier N1",
		"2.计算BED的面积S2 BED的面积S2=小长方形边长A1*小长方形边长A1/倍率N1"},
		{"3. Calculate the area of the shaded area S3=the area of BGE S1+the area of FED S2",
		"3.计算阴影部分面积S3 阴影部分面积S3=BGE的面积S1+BED的面积S2"},
		//变量表
		{"SmallrectanglewithsidelengthA1","小长方形边长A1"},
		{"LargerectangularsidelengthA2","大长方形边长A2"},
		{"MagnificationN1","倍率N1"},
		{"BGEareaS1","BGE的面积S1"},
		{"BEDareaS2","BED的面积S2"},
		{"ShadowareaS3","阴影部分面积S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(5),float(1)},{float(5),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = { {float(5),float(1)},{float(9),float(1)},{float(9),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(4)), Vex2, ScanningLineT::FillMode::EdgeMode, '+', 0);
	test.AddTriangle(ScanningLineT::Point(1, 5), ScanningLineT::Point(5, 1), ScanningLineT::Point(5, 4), ScanningLineT::FillMode::RealMode, '+', 1);
	test.AddTriangle(ScanningLineT::Point(5, 4), ScanningLineT::Point(5, 1), ScanningLineT::Point(9, 4), ScanningLineT::FillMode::RealMode, '+', 1);
	test.AddText(PrintfCol::顶点标注, 0.7, 0.7, "A");
	test.AddText(PrintfCol::顶点标注, 0.7, 4.7, "B");
	test.AddText(PrintfCol::顶点标注, 0.7, 8.7, "C");
	test.AddText(PrintfCol::顶点标注, 4, 9.3, "D");
	test.AddText(PrintfCol::顶点标注, 4, 5.3, "E");
	test.AddText(PrintfCol::顶点标注, 5, 5.3, "F");
	test.AddText(PrintfCol::顶点标注, 5, 0.7, "G");
	DefineLangVar(float, 大长方形边长A2, 4);
	DefineLangVar(float, 小长方形边长A1, 3);
	DefineLangVar(float, 倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P38例二变式练习 割补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算阴影部分面积，大正方形的边长是4，小正方形的边长是3"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, BGE的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算BGE的面积S1 BGE的面积S1=小长方形边长A1*大长方形边长A2/倍率N1"));
	BGE的面积S1 = 小长方形边长A1 * 大长方形边长A2 / 倍率N1;
	BGE的面积S1.PrintProcessLog(1);
	DefineLangVar(float, BED的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算BED的面积S2 BED的面积S2=小长方形边长A1*小长方形边长A1/倍率N1"));
	BED的面积S2 = 小长方形边长A1 * 小长方形边长A1 / 倍率N1;
	BED的面积S2.PrintProcessLog(2);
	DefineLangVar(float, 阴影部分面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算阴影部分面积S3 阴影部分面积S3=BGE的面积S1+BED的面积S2"));
	阴影部分面积S3 = BGE的面积S1 + BED的面积S2;
	阴影部分面积S3.PrintProcessLog(3);
}
void P38_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 cases of triple cutting and patching method","P38例三 割补法"},
		{"Title: As shown in the figure, the shaded area is 48cm ^ 2 and the width is 2cm. What is the circumference of the rectangle plus the shaded area in cm",
		"题目：如图所示阴影部分面积是48cm^2，宽是2cm，长方形加上阴影部分的周长是多少cm"},
		{"1. Calculate the length A1 of the shadow. The length A1 of the shadow is equal to the area S1 of the shadow divided by the width B1 of the shadow",
		"1.计算阴影的长A1 阴影的长A1=阴影部分面积S1/阴影部分宽B1"},
		{"2. Calculate the length and width N1 of the shadow. The length and width N1 of the shadow=the length A1 of the shadow+the width B1 of the shadow area",
		"2.计算阴影的长宽N1 阴影的长宽N1=阴影的长A1+阴影部分宽B1"},
		{"3. Calculate the perimeter L1 of the rectangle. The perimeter L1 of the rectangle is equal to the length and width N1 of the shadow multiplied by the magnification N1",
		"3.计算长方形周长L1 长方形周长L1=阴影的长宽N1*倍率N1"},
		//变量表
		{"ShadowareaS1","阴影部分面积S1"},
		{"ShadowareawidthB1","阴影部分宽B1"},
		{"ShadowlengthandwidthN1","阴影的长宽N1"},
		{"MagnificationN1","倍率N1"},
		{"ShadowlengthA1","阴影的长A1"},
		{"RectangularperimeterL1","长方形周长L1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(2),float(1)},{float(6),float(1)},{float(6),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(2), float(4)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = { {float(1),float(1)},{float(2),float(1)},{float(2),float(4)} ,{float(6),float(4)},{float(6),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex2, ScanningLineT::FillMode::RealMode, '+', 0);
	DefineLangVar(float, 阴影部分面积S1, 48);
	DefineLangVar(float, 阴影部分宽B1, 2);
	DefineLangVar(float, 倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P38例三 割补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示阴影部分面积是48cm^2，宽是2cm，长方形加上阴影部分的周长是多少cm"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, 阴影的长A1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算阴影的长A1 阴影的长A1=阴影部分面积S1/阴影部分宽B1"));
	阴影的长A1 = 阴影部分面积S1 / 阴影部分宽B1;
	阴影的长A1.PrintProcessLog(1);
	DefineLangVar(float, 阴影的长宽N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算阴影的长宽N1 阴影的长宽N1=阴影的长A1+阴影部分宽B1"));
	阴影的长宽N1 = 阴影的长A1 + 阴影部分宽B1;
	阴影的长宽N1.PrintProcessLog(2);
	DefineLangVar(float, 长方形周长L1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算长方形周长L1 长方形周长L1=阴影的长宽N1*倍率N1"));
	长方形周长L1 = 阴影的长宽N1 * 倍率N1;
	长方形周长L1.PrintProcessLog(3);
}
void P38_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 Three Variations Practice Cutting and Supplementing Method","P38例三变式练习 割补法"},
		{"Title: Here are two squares, A and B. The side length of A is 3 centimeters longer than that of B, and the area of A is 45 centimeters larger than that of B. Calculate the sum of the areas of A and B",
		"题目：下面是甲乙两个正方形，甲的边长比乙的边长长3厘米，甲的面积比乙的面积大45cm，求甲乙的面积之和"},
		{"1. Calculate the length A1 of the rectangle before cutting and patching, which is equal to the area S1 of multiple points divided by the additional width A2",
		"1.计算长方形割补前的长A1 长方形割补前的长A1=多处的面积S1/多出的宽A2"},
		{"2. Calculate the length A2 after cutting and patching=(length A1 before rectangle cutting and patching+extra width A2)/length N1 of rectangles",
		"2.计算割补后的长A2 割补后的长A2=(长方形割补前的长A1+多出的宽A2)/长方形长数N1"},
		{"3. Calculate the area of A, S1. The area of A is equal to the length after cutting, A2 * the length after cutting, A2",
		"3.计算甲的面积S1 甲的面积S1=割补后的长A2*割补后的长A2"},
		{"4. Calculate the area S2 of B, which is equal to (length A2 after trimming - excess width A2) multiplied by (length A2 after trimming - excess width A2)",
		"4.计算乙的面积S2 乙的面积S2=(割补后的长A2-多出的宽A2)*(割补后的长A2-多出的宽A2)"},
		{"5. Calculate the sum of the areas of A and B, S3. The sum of the areas of A and B is S3=the area of A, S1+the area of B, S2",
		"5.计算甲乙面积之和S3 甲乙面积之和S3=甲的面积S1+乙的面积S2"},
		//变量表
		{"MultipleareasS1","多处的面积S1"},
		{"ExtrawidthA2","多出的宽A2"},
		{"LengthofrectangleN1","长方形长数N1"},
		{"LengthA1beforerectangularcuttingandpatching","长方形割补前的长A1"},
		{"CutandrepairedlengthA2","割补后的长A2"},
		{"AreaofAS1","甲的面积S1"},
		{"AreaofBS2","乙的面积S2"},
		{"SumofAreaAandBS3","甲乙面积之和S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<14, 8, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(10),float(1)},{float(14),float(1)},{float(14),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(10), float(5)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = { {float(10),float(2)},{float(13),float(2)},{float(13),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(10), float(5)), Vex2, ScanningLineT::FillMode::RealMode, '*', 0);


	std::vector<ScanningLineT::Point> Vex3 = { {float(1),float(1)},{float(5),float(1)},{float(5),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex3, ScanningLineT::FillMode::RealMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex4 = {{float(5),float(2)},{float(8),float(2)},{float(8),float(5)}};
	test.AddPolygon(ScanningLineT::Point(float(5), float(5)), Vex4, ScanningLineT::FillMode::RealMode, '*', 0);
	test.AddText(PrintfCol::顶点标注, 4.0, 3.5, "甲");
	test.AddText(PrintfCol::顶点标注, 4.0, 5.5, "乙");
	test.AddText(PrintfCol::顶点标注, 4.0, 11.5, "甲");
	test.AddText(PrintfCol::顶点标注, 4.0, 13.5, "乙");
	DefineLangVar(float, 多处的面积S1, 45);
	DefineLangVar(float, 多出的宽A2, 3);
	DefineLangVar(float, 长方形长数N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P38例三变式练习 割补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：下面是甲乙两个正方形，甲的边长比乙的边长长3厘米，甲的面积比乙的面积大45cm，求甲乙的面积之和"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, 长方形割补前的长A1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算长方形割补前的长A1 长方形割补前的长A1=多处的面积S1/多出的宽A2"));
	长方形割补前的长A1 = 多处的面积S1 / 多出的宽A2;
	长方形割补前的长A1.PrintProcessLog(1);
	DefineLangVar(float, 割补后的长A2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算割补后的长A2 割补后的长A2=(长方形割补前的长A1+多出的宽A2)/长方形长数N1"));
	割补后的长A2 = (长方形割补前的长A1 + 多出的宽A2) / 长方形长数N1;
	割补后的长A2.PrintProcessLog(2);
	DefineLangVar(float, 甲的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲的面积S1 甲的面积S1=割补后的长A2*割补后的长A2"));
	甲的面积S1 = 割补后的长A2 * 割补后的长A2;
	甲的面积S1.PrintProcessLog(3);
	DefineLangVar(float, 乙的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算乙的面积S2 乙的面积S2=(割补后的长A2-多出的宽A2)*(割补后的长A2-多出的宽A2)"));
	乙的面积S2 = (割补后的长A2 - 多出的宽A2) * (割补后的长A2 - 多出的宽A2);
	乙的面积S2.PrintProcessLog(4);
	DefineLangVar(float, 甲乙面积之和S3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算甲乙面积之和S3 甲乙面积之和S3=甲的面积S1+乙的面积S2"));
	甲乙面积之和S3 = 甲的面积S1 + 乙的面积S2;
	甲乙面积之和S3.PrintProcessLog(5);
}
void P38_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 cases of four cutting and patching method","P38例四 割补法"},
		{"Question: There are two squares, one large and one small, with a distance of 1cm between them. If the part sandwiched between the two squares is 12cm ^ 2, what is the area of the large square?",
		"题目：有一大一小两个正方形，对应之间的距离都是1cm，如果夹在两个正方形之间的部分是12cm^2,那么大正方形的面积是多少?"},
		{"1. Calculate the area of each segment divided into four sections S1 divided into four sections S1=total area S2/number of segments divided N1",
		"1.计算分成四段每段面积S1 分成四段每段面积S1=总面积S2/分成的段数N1"},
		{"2. List the formula S1: trapezoidal area=(upper base+lower base) * height/2",
		"2.列出式子S1 梯形面积=（上底+下底）*高/2"},
		{"3. Substitute the value into S1 to obtain S2 3 * 2=(upper base+lower base) * 1",
		"3.把数值带入S1得到S2 3*2=（上底+下底）*1"},
		{"4. Simplify S2 to obtain S3 3 * 2=(top bottom+bottom bottom)",
		"4.化简S2得到S3 3*2=（上底+下底）"},
		{"5. Calculate the side length N1 of the square. The side length N1 of the square is equal to (divided into four segments, each segment area S1+corresponding distance L1+corresponding distance L1) divided by the number of upper and lower bases N2",
		"5.计算正方形边长N1 正方形边长N1=(分成四段每段面积S1+对应距离L1+对应距离L1)/上下底数量N2"},
		{"6. Calculate the area of a large square S1. The area of a large square S1 is equal to the side length N1 of the square multiplied by the side length N1 of the square",
		"6.计算大正方形面积S1 大正方形面积S1=正方形边长N1*正方形边长N1"},
		//变量表
		{"TotalareaS2","总面积S2"},
		{"NumberofsegmentsdividedN1","分成的段数N1"},
		{"CorrespondingdistanceL1","对应距离L1"},
		{"NumberofupperandlowerbasesN2","上下底数量N2"},
		{"Dividedintofoursections,eachwithanareaofS1","分成四段每段面积S1"},
		{"SquaresidelengthN1","正方形边长N1"},
		{"LargesquareareaS1","大正方形面积S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<8, 8, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(5),float(1)},{float(5),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = {{float(2),float(2)},{float(4),float(2)},{float(4),float(4)}};
	test.AddPolygon(ScanningLineT::Point(float(2), float(4)), Vex2, ScanningLineT::FillMode::RealMode, ' ', 0);
	DefineLangVar(float, 总面积S2, 12);
	DefineLangVar(float, 分成的段数N1, 4);
	DefineLangVar(float, 对应距离L1, 1);
	DefineLangVar(float, 上下底数量N2, 2);
	ColPrintf(PrintfCol::标题, Lang("P38例四 割补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一大一小两个正方形，对应之间的距离都是1cm，如果夹在两个正方形之间的部分是12cm^2,那么大正方形的面积是多少?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, 分成四段每段面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算分成四段每段面积S1 分成四段每段面积S1=总面积S2/分成的段数N1"));
	分成四段每段面积S1 = 总面积S2 / 分成的段数N1;
	分成四段每段面积S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::方法, Lang("2.列出式子S1 梯形面积=（上底+下底）*高/2"));
	ColPrintf(PrintfCol::方法, Lang("3.把数值带入S1得到S2 3*2=（上底+下底）*1"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S2得到S3 3*2=（上底+下底）"));
	DefineLangVar(float, 正方形边长N1, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算正方形边长N1 正方形边长N1=(分成四段每段面积S1+对应距离L1+对应距离L1)/上下底数量N2"));
	正方形边长N1 = (分成四段每段面积S1 + 对应距离L1 + 对应距离L1) / 上下底数量N2;
	正方形边长N1.PrintProcessLog(5);
	DefineLangVar(float, 大正方形面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算大正方形面积S1 大正方形面积S1=正方形边长N1*正方形边长N1"));
	大正方形面积S1 = 正方形边长N1 * 正方形边长N1;
	大正方形面积S1.PrintProcessLog(6);
}

void P38()
{
	//共七道题
	P38_1();
	ColPrintf(PrintfCol::方法, "");
	P38_1_1();
	ColPrintf(PrintfCol::方法, "");
	P38_1_1_1();
	ColPrintf(PrintfCol::方法, "");
	P38_2();
	ColPrintf(PrintfCol::方法, "");
	P38_3();
	ColPrintf(PrintfCol::方法, "");
	P38_3_1();
	ColPrintf(PrintfCol::方法, "");
	P38_4();
	ColPrintf(PrintfCol::方法, "");
}
void P38_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P38();
	Lang.SetCurLanguage(LanguageLib::English);
	P38();
	ColPrintf(PrintfCol::方法, "");

}