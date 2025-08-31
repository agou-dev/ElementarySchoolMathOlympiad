#pragma once

void P30_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P30 cases of first-class area method","P30例一 等面积法"},
		{"Title: As shown in the figure, there are two identical right angled triangles overlapping. Calculate the shadow area",
		"题目：如图所示有两个完全相同的直角三角形重合，计算阴影面积"},
		{"1. Calculate the upper base A1 of the lower trapezoid, which is equal to the lower base B1 of the lower trapezoid minus the height H1 of the upper trapezoid",
		"1.计算下面梯形上底A1 下面梯形上底A1=下面梯形下底B1-上面梯形高H1"},
		{"2. Calculate the trapezoidal area S1=(upper base A1 of the lower trapezoid+lower base B1 of the lower trapezoid) * height H2 of the lower trapezoid/multiple N1 of the rectangular area",
		"2.计算梯形面积S1 梯形面积S1=(下面梯形上底A1+下面梯形下底B1)*下面梯形高H2/对于长方形面积倍数N1"},
		{"Answer: The shaded area is% dcm ^ 2",
		"答：阴影部分面积是%dcm^2"},
		//变量表
		{"BottomOfTrapezoidB1","下面梯形下底B1"},
		{"AboveTrapezoidalHeightH1","上面梯形高H1"},
		{"LowerTrapezoidalHeightH2","下面梯形高H2"},
		{"ForTheAreaMultipleN1OfARectangle","对于长方形面积倍数N1"},
		{"BottomTrapezoidalTopA1","下面梯形上底A1"},
		{"TrapezoidalAreaS1","梯形面积S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<6, 6, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 1.0, 1, 1, 0, 1.0/1.0, '0');
	Screen.AddScanLineByEdgeGradient(2.0, 1.0, 1, 2, 0, 0, '0');
	Screen.AddScanLineByEdgeGradient(3.0, 1.0, 1, 2, 0, 0, '0');


	Screen.AddScanLineByEdgeGradient(2.0, 3.0, 2, 2, 0, 1.0 / 1.0, ' ');

	

	Screen.AddScanLineByEdgeGradient(4.0, 1.0, 2, 4, 0, 1.0 / 1.0, ' ');



	ScanLenHorizontalLine(Screen, 5.0, 2.0, 3.0,0.3);
	ScanLenHorizontalLine(Screen, 4.0, 2.0, 2.0,0.3);

	Screen.AddText(PrintfCol::顶点标注, 3.7, 2.3, "D");
	Screen.AddText(PrintfCol::顶点标注, 4.3, 1.5, "40");
	Screen.AddText(PrintfCol::顶点标注, 4.7, 1.7, "30");
	Screen.AddText(PrintfCol::顶点标注, 4.3, 4.3, "C");
	Screen.AddText(PrintfCol::顶点标注, 5.5, 1.8, "A");
	Screen.AddText(PrintfCol::顶点标注, 5.3, 5.3, "B");
	//Screen.AddScanLineByEdgeGradient(4.0, 1.0, 0.0, 4.0, 4.0 / 0.1, -(4.0 / 0.1), '*');


	DefineLangVarInt(下面梯形下底B1, 120);
	DefineLangVarInt(上面梯形高H1, 40);
	DefineLangVarInt(下面梯形高H2, 30);
	DefineLangVarInt(对于长方形面积倍数N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P30例一 等面积法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示有两个完全相同的直角三角形重合，计算阴影面积"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(下面梯形上底A1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算下面梯形上底A1 下面梯形上底A1=下面梯形下底B1-上面梯形高H1"));
	下面梯形上底A1 = 下面梯形下底B1 - 上面梯形高H1;
	下面梯形上底A1.PrintProcessLog(1);
	DefineLangVarInt(梯形面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算梯形面积S1 梯形面积S1=(下面梯形上底A1+下面梯形下底B1)*下面梯形高H2/对于长方形面积倍数N1"));
	梯形面积S1 = (下面梯形上底A1 + 下面梯形下底B1) * 下面梯形高H2 / 对于长方形面积倍数N1;
	梯形面积S1.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：阴影部分面积是%dcm^2"), (int)梯形面积S1);
}
void P30_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P30 cases of second-class area method","P30例二 等面积法"},
		{"Question: The side length of the left square is 5cm, and the area of the upper triangle is 5cm ^ 2 larger than that of the right triangle. Find the area of the larger triangle below",
		"题目：左边正方形的边长是5cm，上面三角形的面积比右边三角形大5cm^2，求下面阴影面积"},
		{"1. Calculate the area of the left square S1. The area of the left square S1 is equal to the side length A1 of the left square multiplied by the side length A1 of the left square",
		"1.计算左边正方形面积S1 左边正方形面积S1=左边正方形边长A1*左边正方形边长A1"},
		{"2. Calculate the area of the large triangle S2. The area of the large triangle S2 is equal to the area of the left square S1 plus the area S3 larger than the area on the right",
		"2.计算大三角形面积S2 大三角形面积S2=左边正方形面积S1+上面比右边大的面积S3"},
		{"Answer: The area of the large triangle below is% dcm ^ 2",
		"答：下面大三角形面积是%dcm^2"},
		//变量表
		{"LeftSquareWithSideLengthA1","左边正方形边长A1"},
		{"TheLargerAreaS3AboveThanOnTheRight","上面比右边大的面积S3"},
		{"LeftSquareAreaS1","左边正方形面积S1"},
		{"LargeTriangleAreaS2","大三角形面积S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<9, 6, 9, 3> Screen;
	
	Screen.AddScanLineByEdgeGradient(1.0, 2.0, 1, 5, 8.0/4.0, 0, ' ');
	ScanLenHorizontalLine(Screen, 1.0, 1.0, 4.0,0.3);
	Screen.AddScanLineByEdgeGradient(1.0, 2.0, 1, 1, 0,8.0 / 4.0, '+');
	Screen.AddScanLineByEdgeGradient(3.0, 2.0, 1, 5, 0, 0, '+');
	Screen.AddScanLineByEdgeGradient(3.0, 2.0, 5, 5, 0, 8.0 / 4.0, '#');

	Screen.AddText(PrintfCol::顶点标注, 0.7, 0.7, "A");
	Screen.AddText(PrintfCol::顶点标注, 4.7, 0.7, "B");
	Screen.AddText(PrintfCol::顶点标注, 5.3, 5.3, "C");
	Screen.AddText(PrintfCol::顶点标注, 0.7, 5.3, "D");
	Screen.AddText(PrintfCol::顶点标注, 2.7, 5.3, "F");
	Screen.AddText(PrintfCol::顶点标注, 5.3, 8.7, "E");
	DefineLangVarInt(左边正方形边长A1, 5);
	DefineLangVarInt(上面比右边大的面积S3, 5);
	ColPrintf(PrintfCol::标题, Lang("P30例二 等面积法"));
	ColPrintf(PrintfCol::标题, Lang("题目：左边正方形的边长是5cm，上面三角形的面积比右边三角形大5cm^2，求下面阴影面积"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(左边正方形面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算左边正方形面积S1 左边正方形面积S1=左边正方形边长A1*左边正方形边长A1"));
	左边正方形面积S1 = 左边正方形边长A1 * 左边正方形边长A1;
	左边正方形面积S1.PrintProcessLog(1);
	DefineLangVarInt(大三角形面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算大三角形面积S2 大三角形面积S2=左边正方形面积S1+上面比右边大的面积S3"));
	大三角形面积S2 = 左边正方形面积S1 + 上面比右边大的面积S3;
	大三角形面积S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：下面大三角形面积是%dcm^2"), (int)大三角形面积S2);
}
void P30_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P30 cases of third class area method","P30例三 等面积法"},
		{"Question: The length of the base of a parallelogram is 10cm, the side length of the right angled triangle in\nthe middle is 8cm, and the shaded area is 10cm larger than the triangle above. Find the area of the parallelogram",
		"题目：平行四边形底边长是10cm，中间直角三角形的直角边长8cm，阴影部分面积比上面的三角形大10cm，求平行四边形面积"},
		{"1. Calculate the area S1 of a right angled triangle. The area S1 of a right angled triangle is equal to the length A1\nof the base of the parallelogram multiplied by the right angled side A2 of the middle right angled\ntriangle divided by the area multiple N1 of the square",
		"1.计算直角三角形面积S1 直角三角形面积S1=平行四边形底边长A1*中间直角三角形的直角边A2/对于正方形的面积倍数N1"},
		{"2. Calculate the area of the parallelogram S2. The area of the parallelogram S2 is equal to the area of the right triangle S1 plus the area of the shaded area S3",
		"2.计算平行四边形面积S2 平行四边形面积S2=直角三角形面积S1+阴影部分大的面积S3"},
		{"Answer: The area of a parallelogram is% dcm ^ 2",
		"答：平行四边形面积是%dcm^2"},
		//变量表
		{"ParallelogramBaseLengthA1","平行四边形底边长A1"},
		{"TheRightAngledSideA2OfTheMiddleRightAngledTriangle","中间直角三角形的直角边A2"},
		{"ForTheAreaMultipleN1OfASquare","对于正方形的面积倍数N1"},
		{"LargeShadedAreaS3","阴影部分大的面积S3"},
		{"SquareTriangleAreaS1","直角三角形面积S1"},
		{"AreaOfParallelogramS2","平行四边形面积S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<7, 6, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 1.0, 5, 5, -(1.0 / 1.0), 0, ' ');
	
	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 2, 6, -(1.0 / 2.0), -(1.0/2.0), '0');

	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 4, 5, -(3.0/3.0), 0, ' ');

	Screen.AddText(PrintfCol::顶点标注, 1.7, 1.7, "A");
	Screen.AddText(PrintfCol::顶点标注, 4.3, 0.7, "B");
	Screen.AddText(PrintfCol::顶点标注,4.3, 5.3, "C");
	Screen.AddText(PrintfCol::顶点标注, 1.7, 6.3, "D");
	Screen.AddText(PrintfCol::顶点标注, 0.7, 5.3, "E");
	Screen.AddText(PrintfCol::顶点标注, 1.7, 4.3, "F");
	Screen.AddText(PrintfCol::顶点标注, 1.7, 5.3, "G");
	ScanLenHorizontalLine(Screen, 2.0, 4.0, 1.0, 0.3);
	ScanLenHorizontalLine(Screen, 4.0, 1.0, 4.0, 0.3);
	DefineLangVarInt(平行四边形底边长A1, 10);
	DefineLangVarInt(中间直角三角形的直角边A2, 8);
	DefineLangVarInt(对于正方形的面积倍数N1, 2);
	DefineLangVarInt(阴影部分大的面积S3, 10);
	ColPrintf(PrintfCol::标题, Lang("P30例三 等面积法"));
	ColPrintf(PrintfCol::标题, Lang("题目：平行四边形底边长是10cm，中间直角三角形的直角边长8cm，阴影部分面积比上面的三角形大10cm，求平行四边形面积"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(直角三角形面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算直角三角形面积S1 直角三角形面积S1=平行四边形底边长A1*中间直角三角形的直角边A2/对于正方形的面积倍数N1"));
	直角三角形面积S1=平行四边形底边长A1* 中间直角三角形的直角边A2 / 对于正方形的面积倍数N1;
	直角三角形面积S1.PrintProcessLog(1);
	DefineLangVarInt(平行四边形面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算平行四边形面积S2 平行四边形面积S2=直角三角形面积S1+阴影部分大的面积S3"));
	平行四边形面积S2 = 直角三角形面积S1 + 阴影部分大的面积S3;
	平行四边形面积S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：平行四边形面积是%dcm^2"), (int)平行四边形面积S2);
}
void P30()
{
	P30_1();
	ColPrintf(PrintfCol::方法, "");
	P30_2();
	ColPrintf(PrintfCol::方法, "");
	P30_3();
	ColPrintf(PrintfCol::方法, "");
}
void P30_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P30();
	Lang.SetCurLanguage(LanguageLib::English);
	P30();
	ColPrintf(PrintfCol::方法, "");

}