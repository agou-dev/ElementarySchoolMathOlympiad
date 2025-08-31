#pragma once
void P27_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P27 case grid point method","P27例一方法一 格点法"},
		{"Title: Calculate the area of AB shape as shown in the figure",
		"题目：如图所示计算AB图形的面积（一小格的面积是1cm^2边长是1cm）"},
		{"1. Calculate the area S of figure A, which is equal to the number of internal grid points m+(the number of boundary grid points n/2) minus the edge length n of the small grid",
		"1.计算A图形的面积S1 A图形的面积S1=A内部的格点数m1+(A边界的格点数n1/半个的面积占整格的倍数mu1)-小格子的面积n3"},
		{"2. Calculate the area S2 of the B shape. The area S2 of the B shape is equal to the number of grid points m2 inside B+(the number of grid points n2/2\nat the B boundary) - the side length n4 of the small grid",
		"2.计算B图形的面积S2 B图形的面积S2=B内部的格点数m2+(B边界的格点数n2/半个的面积占整格的倍数mu1)-小格子的面积n3"},
		{"Answer: The area S1 of figure A is% dcm, and the area S2 of figure B is% dcm",
		"答：A图形的面积S1是%dcm，B图形的面积S2是%dcm"},
		//变量表
		{"TheNumberOfLatticeointsM1InsideA","A内部的格点数m1"},
		{"ThNnumberOfLatticePointsM2InsideB","B内部的格点数m2"},
		{"TheNumberOfLatticePointsN1OnTheBoundaryOfA","A边界的格点数n1"},
		{"TheNumberOfLatticePointsN2OnTheBBoundary","B边界的格点数n2"},
		{"TheSideLengthN3OfTheSmallGrid","小格子的面积n3"},
		{"TheAreaS1OfFigureA","A图形的面积S1"},
		{"TheAreaS2OfTheBShape","B图形的面积S2"},

		{"HalfOfTheAreaIsAMultipleOfTheEntireGrid,Mu1","半个的面积占整格的倍数mu1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(A内部的格点数m1, 2);
	DefineLangVarInt(B内部的格点数m2, 7);
	DefineLangVarInt(A边界的格点数n1, 6);
	DefineLangVarInt(B边界的格点数n2, 8);
	DefineLangVarInt(小格子的面积n3, 1);
	DefineLangVarInt(半个的面积占整格的倍数mu1, 2)
	//13*6 [9*3]
	ScanningLine<13, 6, 9, 3> Screen;
    //ScanningLine<13, 6, 12, 4> Screen;
	//ScanningLine<13, 6, 18, 6> Screen;
	//ScanningLine<13, 6, 3, 1> Screen;
	//三角形A 起始边步进0.11 终止边步进0.33 底边步进1.0
	//第1行
	/*
	Screen.AddScanLine(1.0, 1.0, 1.33);
	Screen.AddScanLine(1.34, 1.11, 1.66);
	Screen.AddScanLine(1.67, 1.22, 1.99);

	//第2行
	Screen.AddScanLine(2.0, 1.33, 2.33);
	Screen.AddScanLine(2.34, 1.44, 2.66);
	Screen.AddScanLine(2.67, 1.55, 2.99);

	//第3行
	Screen.AddScanLine(3.0, 1.66, 3.33);
	Screen.AddScanLine(3.34, 1.77, 3.66);
	Screen.AddScanLine(3.67, 1.88, 3.99);
	
	//第4行
	Screen.AddScanLine(4.0, 2.0, 4.33);
	Screen.AddScanLine(4.34, 3.0, 4.66);
	Screen.AddScanLine(4.67, 4.0, 4.99);
	*/

	Screen.AddScanLineByEdgeGradient(1.0, 3, 1.0, 1.0, 1.0 / 3.0, 1.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(4.0, 1, 2.0, 4.0, 3.0 / 1.0, 1.0 / 1.0);       

	//

	float fBOffsetX = 7;
	//第1行起始边步进-0.33,终止边步进0.66
	/*Screen.AddScanLine(1.0, fBOffsetX + 2.0, fBOffsetX + 2.0);
	Screen.AddScanLine(1.34, fBOffsetX + 2.0 -0.33, fBOffsetX + 2.66);
	Screen.AddScanLine(1.67, fBOffsetX + 2.0 - 0.33-0.33, fBOffsetX + 2.66+0.66);

	//第2行起始边步进-0.33,终止边步进0
	Screen.AddScanLine(2.0, fBOffsetX + 1.0, fBOffsetX + 3.99);
	Screen.AddScanLine(2.34, fBOffsetX + 1.0 - 0.33, fBOffsetX + 3.99);
	Screen.AddScanLine(2.67, fBOffsetX + 1.0 - 0.33 - 0.33, fBOffsetX + 3.99);

	//第2行起始边步进0.33,终止边步进0
	Screen.AddScanLine(3.0, fBOffsetX + 0.0, fBOffsetX + 3.99);
	Screen.AddScanLine(3.34, fBOffsetX + 0.0 + 0.33, fBOffsetX + 3.99);
	Screen.AddScanLine(3.67, fBOffsetX + 0.0 + 0.33 + 0.33, fBOffsetX + 3.99);

	//第4行起始边步进0.33,终止边步进0
	Screen.AddScanLine(4.0, fBOffsetX + 1.0, fBOffsetX + 3.99);
	Screen.AddScanLine(4.34, fBOffsetX + 2.0, fBOffsetX + 3.99);
	Screen.AddScanLine(4.67, fBOffsetX + 3.0, fBOffsetX + 3.99);*/
	//B图形
	Screen.AddScanLineByEdgeGradient(1.0, 1,fBOffsetX+2.0, fBOffsetX+2.0, -(2.0 / 2.0),2.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(2.0, 1, fBOffsetX + 1.0, fBOffsetX + 4.0, -(2.0 / 2.0), 0);
	Screen.AddScanLineByEdgeGradient(3.0, 1, fBOffsetX + 0.0, fBOffsetX + 4.0, 2.0 / 2.0, 0);
	Screen.AddScanLineByEdgeGradient(4.0, 1, fBOffsetX + 1.0, fBOffsetX + 4.0, 3.0 / 1.0, 0);
	Screen.Clear();
	
	const char* pPic =
		"------------------------------------------"
		"----*-------------------------------------"
		"----****----------------------------------"
		"-----*000**-------------------------------"
		"--------*****-----------------------------"
		"------------------------------------------"
	
		;

	ColPrintf(PrintfCol::标题, Lang("P27例一方法一 格点法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算AB图形的面积（一小格的面积是1cm^2边长是1cm）"));
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);

	DefineLangVarInt(A图形的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算A图形的面积S1 A图形的面积S1=A内部的格点数m1+(A边界的格点数n1/半个的面积占整格的倍数mu1)-小格子的面积n3"));
	A图形的面积S1 = A内部的格点数m1 + (A边界的格点数n1 / 半个的面积占整格的倍数mu1) - 小格子的面积n3;
	A图形的面积S1.PrintProcessLog(1);
	DefineLangVarInt(B图形的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算B图形的面积S2 B图形的面积S2=B内部的格点数m2+(B边界的格点数n2/半个的面积占整格的倍数mu1)-小格子的面积n3"));
	B图形的面积S2 = B内部的格点数m2 + (B边界的格点数n2 / 半个的面积占整格的倍数mu1) - 小格子的面积n3;
	B图形的面积S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：A图形的面积S1是%dcm，B图形的面积S2是%dcm"), (int)A图形的面积S1, (int)B图形的面积S2);
}
void P27_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P27 Example 1 Method 2 Whitening Method","P27例一方法二 去白法"},
		{"Title: Calculate the area of the AB shape as shown in the figure (the area of a small grid is 1cm ^ 2 and the side length is 1cm)",
		"题目：如图所示计算AB图形的面积（一小格的面积是1cm^2边长是1cm）"},
		{"1. Calculate the area of A that cannot be removed after whitening, S1. The area of A that cannot be removed after whitening, S1=base B1 * height H1/triangle multiple mu1",
		"1.计算去白后包含现无法去掉的A面积S1 去白后包含现无法去掉的A面积S1=去白后三角形底B1*去白后三角形高H1/三角形倍数mu1"},
		{"2. Calculate the blank area that cannot be removed by A, S2. The blank area that cannot be removed by A, S2=(the bottom of the shape that canno\n be removed from A, B2 * the height of the shape that cannot be removed from A, H2/the triangle multiple mu1)+(the bottom of the shape that cannot be removed from A, B3 *\nthe height of the shape that cannot be removed from A, H3/the triangle multiple mu1)\n+the area of a small grid, S3",
		"2.计算A无法去掉的的空白面积S2 A无法去掉的的空白面积S2=(A图形上面无法去掉图形的底B2*A图形上面无法去掉图形的高H2/三角形倍数mu1)+(A图形下面无法去掉图形的底B3*A图形上面无法去掉图形的高H3/三角形倍数mu1)+一小格的面积S3"},
		{"3. Calculate the area of B that cannot be removed after whitening, S4 that includes the area of A that cannot be removed after whitening, S4=the side length\nof B that cannot be removed after whitening, A1 * the side length of B that cannot be removed after whitening, A1",
		"3.计算去白后包含现无法去掉的B面积S4 去白后包含现无法去掉的B面积S4=去白后包含现无法去掉的B边长A1*去去白后包含现无法去掉的B边长A1"},
		{"4. Calculate the upper blank area that cannot be removed by B, S5. The upper blank area that cannot be removed by B is calculated as follows: S5=(the base of the blank shape on top of B\nis B4 * the height of the blank shape on top of B is H4)/The triangle is multiplied by a square by N1- (the base of the blank shape\non top of B is B5 * the base of the blank shape on top of B is H5)/The triangle is\nmultiplied by a square by N2",
		"4.计算B无法去掉的的上面空白面积S5 B无法去掉的的上面空白面积S5=(B上面空白图形底一B4*B上面空白图形高一H4)/三角形倍数mu1+(B上面空白图形底二B5*B上面空白图形高二H5)/三角形倍数mu1"},
		{"5. Calculate the blank area of the lower surface that cannot be removed by B, S5. The blank area of the lower surface that cannot be removed by B, S5=(the base of the blank shape of the\nlower surface of B is one B6 * the height of the blank shape of the lower surface of B is one H6)/The triangle is multiplied by a\nsquare N1- (the base of the blank shape of the lower surface of B is two B7 * the base\nof the blank shape of the lower surface of B is two H7)/The triangle is multiplied by a square N2",
		"5.计算B无法去掉的的下面面空白面积S5 B无法去掉的的下面空白面积S5=(B下面面空白图形上底一UB1+B下面空白图形下底一XH1)*B下面空白图形下高一H6/三角形倍数mu1+(B下面空白图形底二B7*B下面空白图形高二H7)/三角形倍数mu1"},
		//变量表
		{"RemoveTheTriangleBaseB1AfterWhitening","去白后三角形底B1"},
		{"RemoveTheTriangleHeightH1AfterWhitening","去白后三角形高H1"},
		{"TriangleMultiplierMu1","三角形倍数mu1"},
		{"TheBottomOfTheGraphicCannotBeRemovedFromTheTopOfGraphicB2","A图形上面无法去掉图形的底B2"},
		{"TheHighH2OnTheAGraphicCannotBeRemoved","A图形上面无法去掉图形的高H2"},
		{"ACannotRemoveTheBottomB3OfTheGraphicBelowIt","A图形下面无法去掉图形的底B3"},
		{"TheHeightH3OfTheGraphicCannotBeRemovedFromTheAGraphic","A图形上面无法去掉图形的高H3"},
		{"AfterWhiteningItIncludesTheAreaS1OfAThatCannotBeRemovedAtPresent","去白后包含现无法去掉的A面积S1"},
		{"TheBlankAreaS2ThatCannotBeRemovedByA","A无法去掉的的空白面积S2" },
		{"TheSideLengthS3OfTheSmallGrid","一小格的面积S3"},

		{"AfterRemovingTheWhiteItIncludesTeBSideLengthA1ThatCannotBeRemovedAtPresent","去白后包含现无法去掉的B边长A1"},
		{"BWithABlankGraphicOnTopAndB4AtTheBottom","B上面空白图形底一B4"},
		{"TheBlankGraphicOnTopOfBIsHigherThanH4","B上面空白图形高一H4"},
		{"BBlankGraphicOnTopBottom2B5","B上面空白图形底二B5"},
		{"BHasABlankGraphicOnTopGrade2H5","B上面空白图形高二H5"},
		{"BHasABlankGraphicOnTheBottomAndAUB1OnTheTop","B下面面空白图形上底一UB1"},
		{"BelowBThereIsABlankGraphicWithXH1ItTheBottom","B下面空白图形下底一XH1"},
		{"BBlankGraphicBelowBottom2B7","B下面空白图形底二B7"},
		{"BBlankJraphicBelowGrad2H7","B下面空白图形高二H7"},
		{"UnderTheBlankGraphicBelowBThereIsAHighOneXH6","B下面空白图形下高一H6"},
		{"AfterWhiteningTtIncludesTheBAreaS4ThatCannotBeRemovedAtPresent","去白后包含现无法去掉的B面积S4"},
		{"BCannotRemoveTheBlankAreaAboveS5","B无法去掉的的上面空白面积S5"},
		{"BCannotRemoveTheBlankAreaS5OnTheLowerSurface","B无法去掉的的下面面空白面积S5"},

	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<13, 6, 9, 3> Screen;
	//ScanningLine<13, 6, 12, 4> Screen;
	//ScanningLine<13, 6, 18, 6> Screen;
	
	//三角形A 起始边步进0.11 终止边步进0.33 底边步进1.0


	Screen.AddScanLineByEdgeGradient(1.0, 3, 1.0, 1.0, 1.0 / 3.0, 1.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(4.0, 1, 2.0, 4.0, 3.0 / 1.0, 1.0 / 1.0);
	
	
	//
	float fBOffsetX = 7;
	//B图形
	Screen.AddScanLineByEdgeGradient(1.0, 1, fBOffsetX + 2.0, fBOffsetX + 2.0, -(2.0 / 2.0), 2.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(2.0, 1, fBOffsetX + 1.0, fBOffsetX + 4.0, -(2.0 / 2.0), 0);
	Screen.AddScanLineByEdgeGradient(3.0, 1, fBOffsetX + 0.0, fBOffsetX + 4.0, 2.0 / 2.0, 0);
	Screen.AddScanLineByEdgeGradient(4.0, 1, fBOffsetX + 1.0, fBOffsetX + 4.0, 3.0 / 1.0, 0);
	Screen.Clear();
	DefineLangVarInt(去白后三角形底B1, 4);
	DefineLangVarInt(去白后三角形高H1, 4);
	DefineLangVarInt(三角形倍数mu1, 2);
	DefineLangVarInt(A图形上面无法去掉图形的底B2, 1);
	DefineLangVarInt(A图形上面无法去掉图形的高H2, 3);
	DefineLangVarInt(A图形下面无法去掉图形的底B3, 1);
	DefineLangVarInt(A图形上面无法去掉图形的高H3, 3);
	DefineLangVarInt(一小格的面积S3, 1);

	DefineLangVarInt(去白后包含现无法去掉的B边长A1, 4);
	DefineLangVarInt(B上面空白图形底一B4, 2);
	DefineLangVarInt(B上面空白图形高一H4, 2);
	DefineLangVarInt(B上面空白图形底二B5, 2);
	DefineLangVarInt(B上面空白图形高二H5, 1);
	DefineLangVarInt(B下面面空白图形上底一UB1, 2);
	DefineLangVarInt(B下面空白图形下底一XH1, 1);
	DefineLangVarInt(B下面空白图形底二B7, 3);
	DefineLangVarInt(B下面空白图形高二H7, 1);

	DefineLangVarInt(B下面空白图形下高一H6, 1);

	ColPrintf(PrintfCol::标题, Lang("P27例一方法二 去白法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算AB图形的面积（一小格的面积是1cm^2边长是1cm）"));
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(去白后包含现无法去掉的A面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算去白后包含现无法去掉的A面积S1 去白后包含现无法去掉的A面积S1=去白后三角形底B1*去白后三角形高H1/三角形倍数mu1"));
	去白后包含现无法去掉的A面积S1 = 去白后三角形底B1 * 去白后三角形高H1 / 三角形倍数mu1;
	去白后包含现无法去掉的A面积S1.PrintProcessLog(1);
	DefineLangVarInt(A无法去掉的的空白面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算A无法去掉的的空白面积S2 A无法去掉的的空白面积S2=(A图形上面无法去掉图形的底B2*A图形上面无法去掉图形的高H2/三角形倍数mu1)+(A图形下面无法去掉图形的底B3*A图形上面无法去掉图形的高H3/三角形倍数mu1)+一小格的面积S3"));
	A无法去掉的的空白面积S2 = (A图形上面无法去掉图形的底B2 * A图形上面无法去掉图形的高H2 / 三角形倍数mu1) + (A图形下面无法去掉图形的底B3 * A图形上面无法去掉图形的高H3 / 三角形倍数mu1) + 一小格的面积S3;
	A无法去掉的的空白面积S2.PrintProcessLog(2);
	DefineLangVarInt(去白后包含现无法去掉的B面积S4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算去白后包含现无法去掉的B面积S4 去白后包含现无法去掉的B面积S4=去白后包含现无法去掉的B边长A1*去去白后包含现无法去掉的B边长A1"));
	去白后包含现无法去掉的B面积S4 = 去白后包含现无法去掉的B边长A1 * 去白后包含现无法去掉的B面积S4;
	去白后包含现无法去掉的B面积S4.PrintProcessLog(3);
	DefineLangVarInt(B无法去掉的的上面空白面积S5, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算B无法去掉的的上面空白面积S5 B无法去掉的的上面空白面积S5=(B上面空白图形底一B4*B上面空白图形高一H4)/三角形倍数mu1+(B上面空白图形底二B5*B上面空白图形高二H5)/三角形倍数mu1"));
	B无法去掉的的上面空白面积S5 = (B上面空白图形底一B4 * B上面空白图形高一H4) / 三角形倍数mu1 - (B上面空白图形底二B5 * B上面空白图形高二H5) / 三角形倍数mu1;
	B无法去掉的的上面空白面积S5.PrintProcessLog(4);
	DefineLangVarInt(B无法去掉的的下面面空白面积S5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算B无法去掉的的下面面空白面积S5 B无法去掉的的下面空白面积S5=(B下面面空白图形上底一UB1+B下面空白图形下底一XH1)*B下面空白图形下高一H6/三角形倍数mu1+(B下面空白图形底二B7*B下面空白图形高二H7)/三角形倍数mu1"));
	B无法去掉的的下面面空白面积S5 = (B下面面空白图形上底一UB1 + B下面空白图形下底一XH1) * B下面空白图形下高一H6 / 三角形倍数mu1 + (B下面空白图形底二B7 * B下面空白图形高二H7) / 三角形倍数mu1;
	B无法去掉的的下面面空白面积S5.PrintProcessLog(5);
}
void P27_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P27 case grid point method","P27例一 格点法"},
		{"Title: Calculate the area of AB shape as shown in the figure",
		"题目：如图所示计算AB图形的面积（一小格的面积是1cm）"},
		{"1. Calculate the area S of figure A, which is equal to the number of internal grid points m+(the number of boundary grid points n/Half of the area is a multiple of the entire grid, mu1) minus the edge length n of the small grid",
		"1.计算A图形的面积S1 A图形的面积S1=A内部的格点数m1+(A边界的格点数n1/半个的面积占整格的倍数mu1)-小格子的面积n3"},
		{"2. Calculate the area S2 of the B shape. The area S2 of the B shape is equal to the number of grid points m2 inside B+(the number of grid points n2/Half of the area is a multiple of the entire grid, mu1\nat the B boundary) - the side length n4 of the small grid",
		"2.计算B图形的面积S2 B图形的面积S2=B内部的格点数m2+(B边界的格点数n2/半个的面积占整格的倍数mu1)-小格子的面积n3"},
		{"Answer: The area S1 of figure A is% dcm, and the area S2 of figure B is% dcm",
		"答：A图形的面积S1是%dcm，B图形的面积S2是%dcm"},
		//变量表
		{"TheNumberOfLatticePointsM1InsideA","A内部的格点数m1"},
		{"TheNumberOfLatticePointsM2InsideB","B内部的格点数m2"},
		{"TheNumberOfLatticePointsN1OnTheBoundaryOfA","A边界的格点数n1"},
		{"TheNumberOfLatticePointsN2OnTheBBoundary","B边界的格点数n2"},
		{"TheSideLengthN3OfTheSmallGrid","小格子的面积n3"},
		{"TheAreaS1OfFigureA","A图形的面积S1"},
		{"TheAreaS2OfTheBShape","B图形的面积S2"},
		{"HalfOfTheAreaIsAmultipleOfTheEntireGridMu1","半个的面积占整格的倍数mu1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<13, 6, 9, 3> Screen;
	//ScanningLine<13, 6, 18, 6> Screen;
	//ScanningLine<13, 6, 12, 4> Screen;
	//ScanningLine<13, 6, 18, 6> Screen;
	//第1行 起始边步进-0.5,终止边步进0.13
	//Screen.AddScanLine(0.0, 3.0, 3.0);
	//Screen.AddScanLine(0.34, 3.0-0.5, 3.0+0.13);
	//Screen.AddScanLine(0.67, 3.0-0.5-0.5, 3.0+ 0.13 + 0.13);
	Screen.AddScanLineByEdgeGradient(0.0, 2.0, 3.0, 3.0, -(3.0 / 2.0), 2.0 / 5.0);
	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 0.0, 3.8, 1.0 / 2.0, 2.0 / 5.0);
	Screen.AddScanLineByEdgeGradient(4.0, 1.0, 1.0, 4.6, 4.0 / 1.0, 2.0 / 5.0);
	/*//第2行 起始边步进-0.5,终止边步进0.13
	Screen.AddScanLine(1.0, 1.5, 3.26);
	Screen.AddScanLine(1.34, 1.5 - 0.5, 3.26 + 0.13);
	Screen.AddScanLine(1.67, 1.5 - 0.5 - 0.5, 3.26 + 0.13 + 0.13);

	//第3行 起始边步进0.33,终止边步进0.13
	Screen.AddScanLine(2.0, 0, 3.52);
	Screen.AddScanLine(2.34, 0 + 0.16, 3.52 + 0.13);
	Screen.AddScanLine(2.67, 0 + 0.16 + 0.16, 3.52 + 0.13 + 0.13);

	//第4行 起始边步进0.33,终止边步进0.13
	Screen.AddScanLine(3.0, 0.32, 3.78);
	Screen.AddScanLine(3.34, 0.32 + 0.16, 3.78 + 0.13);
	Screen.AddScanLine(3.67, 0.32 + 0.16 + 0.16, 3.78 + 0.13 + 0.13);

	//第5行 起始边步进0.33,终止边步进0.13
	Screen.AddScanLine(4.0, 0.64, 4.04);
	Screen.AddScanLine(4.34, 0.64 + 1.2, 4.04 + 0.13);
	Screen.AddScanLine(4.67, 0.64 + 1.2 + 1.2, 4.04 + 0.13 + 0.13);*/


	float fBOffsetX = 5;
	//第1行 起始边步进-0.33,终止边步进0.66
	/*Screen.AddScanLine(0.0, fBOffsetX + 1.0, fBOffsetX + 1.0);
	Screen.AddScanLine(0.34, fBOffsetX+1.0 - 0.33, fBOffsetX+1.0 + 0.66);
	Screen.AddScanLine(0.67, fBOffsetX+1.0 - 0.33 - 0.33, fBOffsetX+1.0 + 0.66 + 0.66);

	//第2行 起始边步进0,终止边步进0.66
	Screen.AddScanLine(1.0, fBOffsetX + 0.0, fBOffsetX + 2.32);
	Screen.AddScanLine(1.34, fBOffsetX + 0.0, fBOffsetX + 2.32 + 0.66);
	Screen.AddScanLine(1.67, fBOffsetX + 0.0 , fBOffsetX + 2.32 + 0.66 + 0.66);

	//第3行 起始边步进0,终止边步进0.16
	Screen.AddScanLine(2.0, fBOffsetX + 0.0, fBOffsetX + 3.64);
	Screen.AddScanLine(2.34, fBOffsetX + 0.0, fBOffsetX + 3.64 - 0.16);
	Screen.AddScanLine(2.67, fBOffsetX + 0.0, fBOffsetX + 3.64 - 0.16 - 0.16);

	//第4行 起始边步进0,终止边步进0.16
	Screen.AddScanLine(3.0, fBOffsetX + 0.0, fBOffsetX + 3.32);
	Screen.AddScanLine(3.34, fBOffsetX + 0.0+0.33, fBOffsetX + 3.32 - 0.16);
	Screen.AddScanLine(3.67, fBOffsetX + 0.0 + 0.33+0.33, fBOffsetX + 3.32 - 0.16 - 0.16);

	//第5行 起始边步进0,终止边步进0.16
	Screen.AddScanLine(4.0, fBOffsetX + 0.66, fBOffsetX + 3.0);
	Screen.AddScanLine(4.34, fBOffsetX + 0.66 + 0.33, fBOffsetX + 3.0 - 1.5);
	Screen.AddScanLine(4.67, fBOffsetX + 0.66 + 0.33 + 0.33, fBOffsetX + 3.0 - 1.5 -1.5);*/
	Screen.AddScanLineByEdgeGradient(0.0, 1.0, fBOffsetX+1.0, fBOffsetX+1.0, -(1.0 / 1.0), 2.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(1.0, 1.0, fBOffsetX + 0.0, fBOffsetX + 4.0, 0, 2.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(2.0, 1.0, fBOffsetX + 0.0, fBOffsetX + 6.0, 0, -(1.0 / 2.0));
	Screen.AddScanLineByEdgeGradient(3.0, 1.0, fBOffsetX + 0.0, fBOffsetX + 5.5, 1.0/1.0, -(1.0 / 2.0));
	Screen.AddScanLineByEdgeGradient(4.0, 1.0, fBOffsetX + 1.0, fBOffsetX + 5.0, 1.0 / 1.0, -(3.0 / 1.0));
	Screen.Clear();

	DefineLangVarInt(A内部的格点数m1, 4);
	DefineLangVarInt(B内部的格点数m2, 7);
	DefineLangVarInt(A边界的格点数n1, 12);
	DefineLangVarInt(B边界的格点数n2, 8);
	DefineLangVarInt(小格子的面积n3, 1);
	DefineLangVarInt(半个的面积占整格的倍数mu1,2)
	ColPrintf(PrintfCol::标题, Lang("P27例一 格点法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示计算AB图形的面积（一小格的面积是1cm）"));
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(A图形的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算A图形的面积S1 A图形的面积S1=A内部的格点数m1+(A边界的格点数n1/半个的面积占整格的倍数mu1)-小格子的面积n3"));
	A图形的面积S1 = A内部的格点数m1 + (A边界的格点数n1 / 半个的面积占整格的倍数mu1) - 小格子的面积n3;
	A图形的面积S1.PrintProcessLog(1);DefineLangVarInt(B图形的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算B图形的面积S2 B图形的面积S2=B内部的格点数m2+(B边界的格点数n2/半个的面积占整格的倍数mu1)-小格子的面积n3"));
	B图形的面积S2 = B内部的格点数m2 + (B边界的格点数n2 / 半个的面积占整格的倍数mu1) - 小格子的面积n3;
	B图形的面积S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：A图形的面积S1是%dcm，B图形的面积S2是%dcm"), (int)A图形的面积S1, (int)B图形的面积S2);
}
void P27()
{
	P27_1();
	ColPrintf(PrintfCol::方法, "");
	P27_2();
	ColPrintf(PrintfCol::方法, "");
	P27_3();
	ColPrintf(PrintfCol::方法, "");
}
void P27_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P27();
	Lang.SetCurLanguage(LanguageLib::English);
	P27();
	ColPrintf(PrintfCol::方法, "");

}