#pragma once
void P33_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P33 Example 1 Area Calculation","P33例一 求面积"},
		{"Question: Calculate the shadow area as shown in the figure?",
		"题目：如图所示计算阴影面积？"},
		{"1. Calculating the radius of a circle is also the base R1 of a right angled triangle\nThe radius of a circle is also the base R1 of a right angled triangle. R1=the base A1 of an isosceles\ntriangle/the multiple N1 of the base of an isosceles triangle by a right angled triangle",
		"1.计算圆的半径也是直角三角形的底R1 圆的半径也是直角三角形的底R1=等腰三角形的底A1/直角三角形对于等腰三角形的底的倍数N1"},
		{"2. Calculate the area S1 of a quarter circle. The area S1 of a quarter circle is equal to the radius of the circle, which is also the base of a right angled triangle. The radius of the circle is also the base of a right angled triangle/Difference from the original circle by multiple N1",
		"2.计算四分之一圆的面积S1 四分之一圆的面积S1=(圆的半径也是直角三角形的底R1*圆的半径也是直角三角形的底R1*圆周率PI)/与原来圆相差倍数N1"},
		{"3. Calculate the height H1 of a right triangle. The height H1 of a right triangle is equal to the radius of the circle, which is also the base R1 of the right triangle divided by the base of the right triangle multiplied by the height N1",
		"3.计算直角三角形的高H1 直角三角形的高H1=圆的半径也是直角三角形的底R1/直角三角形的底对于高的倍数N1"},
		{"4. Calculate the area S1 of two right angled triangles. The area S1 of two right angled triangles is equal to\n(the height H1 of the right angled triangle is also the radius of the circle at the base R1 of the right angled triangle/the multiplier N1) multiplied by\nthe number of right angled triangles N2",
		"4.计算两个直角三角形的面积S2 两个直角三角形的面积S2=(直角三角形的高H1*圆的半径也是直角三角形的底R1/倍率N1)*直角三角形个数N2"},
		{"5. Calculate the shadow area S3. Shadow area S3=(area of quarter circle S1+area of quarter circle S1) - area of two right angled triangles S2",
		"5.计算阴影面积S3 阴影面积S3=(四分之一圆的面积S1+四分之一圆的面积S1)-两个直角三角形的面积S2"},
		//变量表
		{"BaseA1OfAnIsoscelesTriangle","等腰三角形的底A1"},
		{"TheMultipleN1OfARightAngledTriangleToTheBaseOfAnIsoscelesTriangle","直角三角形对于等腰三角形的底的倍数N1"},
		{"PI","圆周率PI"},
		{"DifferenceFromTheOriginalCircleByMultipleN1","与原来圆相差倍数N1"},
		{"TheBaseOfARightAngledTriangleIsAMultipleN1OfItsHeight","直角三角形的底对于高的倍数N1"},
		{"MagnificationN1","倍率N1"},
		{"NumberOfRightAngledTrianglesN2","直角三角形个数N2"},
		{"TheRadiusOfACircleIsAlsoTheBaseR1OfARightAngledTriangle","圆的半径也是直角三角形的底R1"},
		{"TheAreaOfAQuarterCircleS1","四分之一圆的面积S1"},
		{"TheHeightH1OfArightAngledTriangle","直角三角形的高H1"},
		{"TheAreaS2OfTwoRightAngledTriangles","两个直角三角形的面积S2"},
		{"ShadowAreaS3","阴影面积S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<14, 5, 18, 8> test;
	
	test.AddSector(1.0, 4.0, 3.0, 0, 90.0, ScanningLine<18, 10>::FillMode::RealMode, '*',1);
	test.AddSector(7.0, 4.0, 3.0, 90, 180.0, ScanningLine<18, 10>::FillMode::RealMode, '*',1);
	test.AddScanLineByEdgeGradient(1.0, 3.0, 4.0, 4.0, -(3.0 / 3.0), 3.0 / 3.0, ' ',0);
	test.AddScanLineByEdgeGradient(1.8, 2.2, 4.8, 4.8, 0, 3.0 / 3.0, ' ', 2);
	test.AddScanLineByEdgeGradient(1.8, 2.2, 3.2, 3.2, -(3.0 / 3.0), 0, ' ', 2);
	test.AddText(PrintfCol::顶点标注, 1.7, 3.7, "45");
	test.AddText(PrintfCol::顶点标注, 1.7, 4.3, "45");
	test.AddText(PrintfCol::顶点标注, 4.3, 4.3, "20");
	DefineLangVar(float,等腰三角形的底A1, 20);
	DefineLangVar(float,直角三角形对于等腰三角形的底的倍数N1, 2);
	DefineLangVar(float, 圆周率PI, 3.14);
	DefineLangVar(float, 与原来圆相差倍数N1, 4);
	DefineLangVar(float, 直角三角形的底对于高的倍数N1, 2);
	DefineLangVar(float, 倍率N1, 2);
	DefineLangVar(float, 直角三角形个数N2, 2);
	ColPrintf(PrintfCol::标题, Lang("P33例一 求面积"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算阴影面积？"));
	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float,圆的半径也是直角三角形的底R1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算圆的半径也是直角三角形的底R1 圆的半径也是直角三角形的底R1=等腰三角形的底A1/直角三角形对于等腰三角形的底的倍数N1"));
	圆的半径也是直角三角形的底R1 = 等腰三角形的底A1 / 直角三角形对于等腰三角形的底的倍数N1;
	圆的半径也是直角三角形的底R1.PrintProcessLog(1);
	DefineLangVar(float, 四分之一圆的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算四分之一圆的面积S1 四分之一圆的面积S1=(圆的半径也是直角三角形的底R1*圆的半径也是直角三角形的底R1*圆周率PI)/与原来圆相差倍数N1"));
	四分之一圆的面积S1 = (圆的半径也是直角三角形的底R1 * 圆的半径也是直角三角形的底R1 * 圆周率PI) / 与原来圆相差倍数N1;
	四分之一圆的面积S1.PrintProcessLog(2);
	DefineLangVar(float, 直角三角形的高H1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算直角三角形的高H1 直角三角形的高H1=圆的半径也是直角三角形的底R1/直角三角形的底对于高的倍数N1"));
	直角三角形的高H1 = 圆的半径也是直角三角形的底R1 / 直角三角形的底对于高的倍数N1;
	直角三角形的高H1.PrintProcessLog(3);
	DefineLangVar(float, 两个直角三角形的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算两个直角三角形的面积S2 两个直角三角形的面积S2=(直角三角形的高H1*圆的半径也是直角三角形的底R1/倍率N1)*直角三角形个数N2"));
	两个直角三角形的面积S2 = (直角三角形的高H1 * 圆的半径也是直角三角形的底R1 / 倍率N1) * 直角三角形个数N2;
	两个直角三角形的面积S2.PrintProcessLog(4);
	DefineLangVar(float, 阴影面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算阴影面积S3 阴影面积S3=(四分之一圆的面积S1+四分之一圆的面积S1)-两个直角三角形的面积S2"));
	阴影面积S3 = (四分之一圆的面积S1 + 四分之一圆的面积S1) - 两个直角三角形的面积S2;
	阴影面积S3.PrintProcessLog(5);

}
void P33_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P33 Variant Practice Finding Area","P33变式练习 求面积"},
		{"Question: Calculate the shadow area as shown in the figure?",
		"题目：如图所示计算阴影面积？"},
		{"1. Calculate ABC sector area S1 ABC sector area S1=side A1 of a right triangle * side A1 of a right triangle * pi/difference from the original circle N1",
		"1.计算ABC扇形面积S1 ABC扇形面积S1=直角三角形的边A1*直角三角形的边A1*圆周率PI/与原来圆相差倍数N1"},
		{"2. Calculate the height H1 of CDB. The height H1 of CDB is equal to the side A1 of a right triangle divided by the magnification N1",
		"2.计算CDB的高H1 CDB的高H1=直角三角形的边A1/倍率N1"},
		{"3. Calculate the area of CDB. The area of CDB is equal to the height H1 of CDB multiplied by the side A1 of a right angled triangle divided by the magnification N1",
		"3.计算CDB的面积S2 CDB的面积S2=CDB的高H1*直角三角形的边A1/倍率N1"},
		{"4. Calculate the area of the shaded area S2=ABC sector area S1-CDB area S2",
		"4.计算阴影部分的面积S2 阴影部分的面积S2=ABC扇形面积S1-CDB的面积S2"},
		//变量表
		{"SideA1OfARightAngledTriangle","直角三角形的边A1"},
		{"PI","圆周率PI"},
		{"DifferenceFromTheOriginalCircleByMultipleN1","与原来圆相差倍数N1"},
		{"MagnificationN1","倍率N1"},
		{"ABCSectorAreaS1","ABC扇形面积S1"},
		{"CDB'sHighH1","CDB的高H1"},
		{"CDBAreaS2","CDB的面积S2"},
		{"TheAreaOfTheShadedAreaS2","阴影部分的面积S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<10, 5, 18, 8> test;
	typedef ScanningLine<10, 5, 18, 8>  ScanningLineT;
	

	
	unsigned int nShapeIndexA=test.AddTriangle(ScanningLineT::Point(1.0, 4 ), ScanningLineT::Point(1, 1.0 ), ScanningLineT::Point(4.0, 4 ), ScanningLineT::FillMode::EdgeMode, '*');
	unsigned int nShapeIndexB=test.AddSector(4.0, 4.0,3, 135, 180.0, ScanningLine<18, 10>::FillMode::EdgeMode, '*', 1);
	unsigned int nShapeIndexC = test.AddTriangle(ScanningLineT::Point(1.88, 4.0),//d
		ScanningLineT::Point(1.85, 1.9),//c
		ScanningLineT::Point(4.0, 4),//b
		ScanningLineT::FillMode::EdgeMode, '*');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InBAndNotC = test.SectorN(nShapeIndexB)->Hit(p) & (!test.TriangleN(nShapeIndexC)->Hit(p));
		//bool InAAndInBNotC = test.SectorN(nShapeIndexB)->Hit(p)&(!test.TriangleN(nShapeIndexC)->Hit(p));
		return InBAndNotC;
		};
	ScanningLineT::IncludeBox Box;
	test.TriangleN(nShapeIndexA)->GetBox(Box);
	test.SectorN(nShapeIndexB)->AddBox(Box);
	test.TriangleN(nShapeIndexC)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 4.3, 4.3, "20");
	DefineLangVar(float, 直角三角形的边A1, 6);
	DefineLangVar(float, 与原来圆相差倍数N1, 8);
	DefineLangVar(float, 圆周率PI, 3.14);
	DefineLangVar(float, 倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P33变式练习 求面积"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算阴影面积？"));
	test.Clear();
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '*');
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, ABC扇形面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算ABC扇形面积S1 ABC扇形面积S1=直角三角形的边A1*直角三角形的边A1*圆周率PI/与原来圆相差倍数N1"));
	ABC扇形面积S1 = 直角三角形的边A1 * 直角三角形的边A1 * 圆周率PI / 与原来圆相差倍数N1;
	ABC扇形面积S1.PrintProcessLog(1);
	DefineLangVar(float, CDB的高H1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算CDB的高H1 CDB的高H1=直角三角形的边A1/倍率N1"));
	CDB的高H1 = 直角三角形的边A1 / 倍率N1;
	CDB的高H1.PrintProcessLog(2);
	DefineLangVar(float, CDB的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算CDB的面积S2 CDB的面积S2=CDB的高H1*直角三角形的边A1/倍率N1"));
	CDB的面积S2 = CDB的高H1 * 直角三角形的边A1 / 倍率N1;
	CDB的面积S2.PrintProcessLog(3);
	DefineLangVar(float, 阴影部分的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算阴影部分的面积S2 阴影部分的面积S2=ABC扇形面积S1-CDB的面积S2"));
	阴影部分的面积S2 = ABC扇形面积S1 - CDB的面积S2;
	阴影部分的面积S2.PrintProcessLog(4);
}
void P33_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P33 Example 2 Area Calculation","P33例二 求面积"},
		{"Question: Calculate the shadow area as shown in the figure?",
		"题目：如图所示计算阴影面积？"},
		{"1. Calculate the rectangular area S1. The rectangular area S1 is equal to the rectangular length A1 multiplied by the rectangular length B1",
		"1.计算长方形面积S1 长方形面积S1=长方形长A1*长方形宽B1"},
		{"2. Calculate the sector area S2. Sector area S2=rectangle width B1 * rectangle width B1 * pi PI",
		"2.计算扇形面积S2 扇形面积S2=长方形宽B1*长方形宽B1*圆周率PI/与原来圆相差倍数N1"},
		{"3. Calculate a area S3 a area S3=rectangular area S1- fan-shaped area S2",
		"3.计算a面积S3 a面积S3=长方形面积S1-扇形面积S2"},
		{"4. Calculate the large sector area S3, which is equal to (rectangular length A1 * rectangular length A1 * pi) divided by the difference from the original circle multiplied by N1",
		"4.计算大扇形面积S4 大扇形面积S4=(长方形长A1*长方形长A1*圆周率PI)/与原来圆相差倍数N1"},
		{"5. Calculate the shaded area S5, which is equal to the large sector area S4-a and S3",
		"5.计算阴影部分面积S5 阴影部分面积S5=大扇形面积S4-a面积S3"},
		//变量表
		{"RectangularLengthA1","长方形长A1"},
		{"RectangularWidthB1","长方形宽B1"},
		{"PI","圆周率PI"},
		{"DifferenceFromTheOriginalCircleByMultipleN1","与原来圆相差倍数N1"},
		{"RectangularAreaS1","长方形面积S1"},
		{"FanShapedAreaS2","扇形面积S2"},
		{"AreaS3","a面积S3"},
		{"LargeFan-shapedAreaS4","大扇形面积S4"},
		{"ShadowAreaS5","阴影部分面积S5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<12, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1 ),float(3 )},{float(7 ),float(3.0 )},{float(7 ),float(7 )}, };
	//正方形
	unsigned int nSectorIndexC=test.AddPolygon(ScanningLineT::Point(float(1.0 ), float(7.0 )), Vex1, ScanningLineT::FillMode::RealMode, ' ');
	unsigned int nSectorIndexA = test.AddSector(1, 7, 6, 0, 90.0, ScanningLineT::FillMode::EdgeMode, '*', 1);
	unsigned int nSectorIndexB = test.AddSector(7, 3, 4, 180, 270.0, ScanningLineT::FillMode::EdgeMode, '*', 1);
	ScanLenHorizontalLine(test, 3.0, 1.0, 6.0, 0.1);

	//集合论条件填充SetTheoryCondition nFillMode
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB=test.SectorN(nSectorIndexA)->Hit(p)& test.SectorN(nSectorIndexB)->Hit(p);
		bool InBAndNotInC = test.SectorN(nSectorIndexA)->Hit(p) & (!test.PolygonN(nSectorIndexC)->Hit(p));
		return InAB| InBAndNotInC;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	//追加C的包围盒
	//test.PolygonN(nSectorIndexC)->AddBox(Box);

	DefineLangVar(float, 长方形长A1, 6);
	DefineLangVar(float, 长方形宽B1, 4);
	DefineLangVar(float, 圆周率PI, 3.14);
	DefineLangVar(float, 与原来圆相差倍数N1, 4);
	ColPrintf(PrintfCol::标题, Lang("P33例二 求面积"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算阴影面积？"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);

	DefineLangVar(float, 长方形面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算长方形面积S1 长方形面积S1=长方形长A1*长方形宽B1"));
	长方形面积S1 = 长方形长A1 * 长方形宽B1;
	长方形面积S1.PrintProcessLog(1);
	DefineLangVar(float, 扇形面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算扇形面积S2 扇形面积S2=长方形宽B1*长方形宽B1*圆周率PI/与原来圆相差倍数N1"));
	扇形面积S2 = 长方形宽B1 * 长方形宽B1 * 圆周率PI/ 与原来圆相差倍数N1;
	扇形面积S2.PrintProcessLog(2);
	DefineLangVar(float, a面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算a面积S3 a面积S3=长方形面积S1-扇形面积S2"));
	a面积S3 = 长方形面积S1 - 扇形面积S2;
	a面积S3.PrintProcessLog(3);
	DefineLangVar(float, 大扇形面积S4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算大扇形面积S4 大扇形面积S4=(长方形长A1*长方形长A1*圆周率PI)/与原来圆相差倍数N1"));
	大扇形面积S4 = (长方形长A1 * 长方形长A1 * 圆周率PI) / 与原来圆相差倍数N1;
	大扇形面积S4.PrintProcessLog(4);
	DefineLangVar(float, 阴影部分面积S5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算阴影部分面积S5 阴影部分面积S5=大扇形面积S4-a面积S3"));
	阴影部分面积S5 = 大扇形面积S4 - a面积S3;
	阴影部分面积S5.PrintProcessLog(5);
}
void P33()
{
	P33_1();
	ColPrintf(PrintfCol::方法, "");
	P33_2();
	ColPrintf(PrintfCol::方法, "");
	P33_3();
	ColPrintf(PrintfCol::方法, "");
}
void P33_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P33();
	Lang.SetCurLanguage(LanguageLib::English);
	P33();
	ColPrintf(PrintfCol::方法, "");

}