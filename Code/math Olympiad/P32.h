#pragma once
void P32_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P32 Example 1 Graphic Splicing","P32例一 图形拼接"},
		{"Title: Combine 5 squares with the same area into a concave shape, where the circumference of\nthe concave shape is 5 times less than that of the small square by 16cm. Calculate the area of the concave shape",
		"题目：把5个面积相同的正方形拼成一个凹字形，凹字形的周长是小正方形的5倍少16cm，求凹字形面积"},
		{"1. Calculate the side length A1 of a square. The side length A1 of a square is equal to the circumference\nloss length L1 of a concave shape divided by (the number of missing sides N1 when five squares are joined\ntogether multiplied by the number of missing sides N1 at each point)",
		"1.计算正方形边长A1 正方形边长A1=凹字形周长损失长度L1/(五个正方形拼接损失边数量N1*损失每处边数N1)"},
		{"2. Calculate the square area S1. Square area S1=square side length A1 * square side length A1",
		"2.计算正方形面积S1 正方形面积S1=正方形边长A1*正方形边长A1"},
		{"3. Calculate the concave area S2. Concave area S1=square area S1 * total number of squares N1",
		"3.计算凹字形面积S2 凹字形面积S2=正方形面积S1*共有正方形数N1"},
		{"Answer: The concave area is% dcm ^ 2",
		"答：凹字形面积是%dcm^2"},
		//变量表
		{"ConcaveShapedPerimeterLossLengthL1","凹字形周长损失长度L1"},
		{"TheNumberOfMissingEdgesN1InTheSplicingOfFiveSquares","五个正方形拼接损失边数量N1"},
		{"LossOfN1EdgesPerLocation","损失每处边数N1"},
		{"ThereAreATotalOfN1Squares","共有正方形数N1"},
		{"SquareSideLengthA1","正方形边长A1"},
		{"SquareAreaS1","正方形面积S1"},
		{"ConcaveAreaS2","凹字形面积S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<10, 7, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 4, 1, 3, 0, 0, '0');// 
	Screen.AddScanLineByEdgeGradient(3.0, 2, 3, 5, 0, 0, '0');
	Screen.AddScanLineByEdgeGradient(1.0, 4, 5, 7, 0, 0, '0');//
	ScanLenHorizontalLine(Screen, 3, 5.0, 2.0, 0.3);
	ScanLenHorizontalLine(Screen, 3, 1.0, 2.0, 0.3);

	ScanLenHorizontalLine(Screen, 1, 5.0, 2.0, 0.3);
	ScanLenHorizontalLine(Screen, 1, 1.0, 2.0, 0.3);
	ScanLenHorizontalLine(Screen, 5, 1.0, 6.0, 0.3);
	DefineLangVarInt(凹字形周长损失长度L1, 16);
	DefineLangVarInt(五个正方形拼接损失边数量N1, 4);
	DefineLangVarInt(损失每处边数N1, 2);
	DefineLangVarInt(共有正方形数N1, 4);
	ColPrintf(PrintfCol::标题, Lang("P32例一 图形拼接"));
	ColPrintf(PrintfCol::标题, Lang("题目：把5个面积相同的正方形拼成一个凹字形，凹字形的周长是小正方形的5倍少16cm，求凹字形面积"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(正方形边长A1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算正方形边长A1 正方形边长A1=凹字形周长损失长度L1/(五个正方形拼接损失边数量N1*损失每处边数N1)"));
	正方形边长A1 = 凹字形周长损失长度L1 / (五个正方形拼接损失边数量N1 * 损失每处边数N1);
	正方形边长A1.PrintProcessLog(1);
	DefineLangVarInt(正方形面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算正方形面积S1 正方形面积S1=正方形边长A1*正方形边长A1"));
	正方形面积S1 = 正方形边长A1 * 正方形边长A1;
	正方形面积S1.PrintProcessLog(2);
	DefineLangVarInt(凹字形面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算凹字形面积S2 凹字形面积S2=正方形面积S1*共有正方形数N1"));
	凹字形面积S2 = 正方形面积S1 * 共有正方形数N1;
	凹字形面积S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：凹字形面积是%dcm^2"), (int)凹字形面积S2);
}
void P32_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P32 Example 2 Graphic Splicing","P32例二 图形拼接"},
		{"Question: Place a rectangle with a width of 2cm and a length of 3cm as shown in the picture. What is the circumference when reaching the 5th layer?",
		"题目:将宽是2cm，长是3cm的长方形如图摆放，到第5层时周长是多少？"},
		{"1. Calculate the perimeter L1 of a rectangle. The perimeter L1 of a rectangle is equal to (rectangle length A1+rectangle width B1) multiplied by the logarithm of its length and width N1",
		"1.计算长方形周长L1 长方形周长L1=(长方形长A1+长方形宽B1)*长宽对数N1"},
		{"2. Calculate the perimeter L2 of the second layer. The perimeter L2 of the second layer is equal to the perimeter L1 of the rectangle (the number of rectangles in the two layers N1 minus the number of rectangles in the second layer N1)",
		"2.计算第二层时周长L2 第二层时周长L2=长方形周长L1*(两层长方形数N1-第二层时舍去长方形数N2)"},
		{"3. Calculate the perimeter L3 of the third layer. The perimeter L3 of the third layer is equal to the perimeter L1 of the rectangle (the number of rectangles in the third layer N3 minus the number of rectangles in the third layer N4)",
		"3.计算第三层时周长L3 第三层时周长L3=长方形周长L1*(三层长方形数N3-第三层时舍去长方形数N4)"},
		{"4. Calculate the circumference L4 of the fifth layer based on the pattern of the first two layers. The circumference L4 of the fifth layer is calculated as (L2 of the second layer - L3 of the third layer) * N5 of the fifth layer",
		"4.通过前两层的规律计算第五层时的周长L4 第五层时的周长L4 = (第三层时周长L3 - 第二层时周长L2) * 第五层层数N5;"},
		{"Answer: The circumference of the 5th layer is% dcm",
		"答：第5层时周长是%dcm"},
		//变量表
		{"RectangularLength A1","长方形长A1"},
		{"RectangularWidthB1","长方形宽B1"},
		{"LogarithmsOfLengthAndWidthN1","长宽对数N1"},
		{"NumberOfRectanglesInTwoLayersN1","两层长方形数N1"},
		{"OnTheSecondLevelDiscardTheNumberN2OfRectangles","第二层时舍去长方形数N2"},
		{"ThreeLayerRectangleNumberN3","三层长方形数N3"},
		{"OnTheThirdLayerDiscardTheNumberN4OfRectangles","第三层时舍去长方形数N4"},
		{"TheFifthLayerHasN5Layers","第五层层数N5"},
		{"RectangularPerimeterL1","长方形周长L1"},
		{"SecondLayerPerimeterL2","第二层时周长L2"},
		{"ThirdLayerPerimeterL3","第三层时周长L3"},
		{"PerimeterL4AtTheFifthLevel","第五层时的周长L4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<17, 7, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 2, 1, 3, 0, 0, '0');// 
	ScanLenHorizontalLine(Screen, 1.0, 1.0, 2.0, 0.3);
	ScanLenHorizontalLine(Screen, 3.0, 1.0, 2.0, 0.3);
	int off = 4;
	Screen.AddScanLineByEdgeGradient(1.0, 2, off+1, off+3, 0, 0, '0');
	Screen.AddScanLineByEdgeGradient(3.0, 2, off + 0, off + 2, 0, 0, '0');
	Screen.AddScanLineByEdgeGradient(3.0, 2, off + 2, off + 4, 0, 0, '0');
	ScanLenHorizontalLine(Screen, 1.0, off + 1, 2.0, 0.3);
	ScanLenHorizontalLine(Screen, 3.0, off + 0, 4.0, 0.3);
	ScanLenHorizontalLine(Screen, 5.0, off + 0, 4.0, 0.3);
	off = 9;
	Screen.AddScanLineByEdgeGradient(1.0, 2, off + 1, off + 3, 0, 0, '0');
	Screen.AddScanLineByEdgeGradient(3.0, 2, off + 0, off + 2, 0, 0, '0');
	Screen.AddScanLineByEdgeGradient(3.0, 2, off + 2, off + 4, 0, 0, '0');
	ScanLenHorizontalLine(Screen, 1.0, off + 1, 2.0, 0.3);
	ScanLenHorizontalLine(Screen, 3.0, off + 0, 4.0, 0.3);
	ScanLenHorizontalLine(Screen, 5.0, off + 0, 4.0, 0.3);

	Screen.AddScanLineByEdgeGradient(5.0, 2, off + 1, off + 3, 0, 0, '0');
	Screen.AddScanLineByEdgeGradient(5.0, 2, off -1, off + 1, 0, 0, '0');
	Screen.AddScanLineByEdgeGradient(5.0, 2, off + 3, off + 5, 0, 0, '0');
	ScanLenHorizontalLine(Screen, 6.7, off - 1, 6.0, 0.3);
	ScanLenHorizontalLine(Screen, 5.0, off - 1, 6.0, 0.3);
	DefineLangVarInt(长方形长A1, 3);
	DefineLangVarInt(长方形宽B1, 2);
	DefineLangVarInt(长宽对数N1, 2);
	DefineLangVarInt(两层长方形数N1, 3);
	DefineLangVarInt(第二层时舍去长方形数N2, 1);
	DefineLangVarInt(三层长方形数N3, 6);
	DefineLangVarInt(第三层时舍去长方形数N4, 3);
	DefineLangVarInt(第五层层数N5, 5);
	ColPrintf(PrintfCol::标题, Lang("P32例二 图形拼接"));
	ColPrintf(PrintfCol::标题, Lang("题目:将宽是2cm，长是3cm的长方形如图摆放，到第5层时周长是多少？"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(长方形周长L1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算长方形周长L1 长方形周长L1=(长方形长A1+长方形宽B1)*长宽对数N1"));
	长方形周长L1 = (长方形长A1 + 长方形宽B1) * 长宽对数N1;
	长方形周长L1.PrintProcessLog(1);
	DefineLangVarInt(第二层时周长L2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第二层时周长L2 第二层时周长L2=长方形周长L1*(两层长方形数N1-第二层时舍去长方形数N2)"));
	第二层时周长L2 = 长方形周长L1 * (两层长方形数N1 - 第二层时舍去长方形数N2);
	第二层时周长L2.PrintProcessLog(2);
	DefineLangVarInt(第三层时周长L3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算第三层时周长L3 第三层时周长L3=长方形周长L1*(三层长方形数N3-第三层时舍去长方形数N4)"));
	第三层时周长L3 = 长方形周长L1 * (三层长方形数N3 - 第三层时舍去长方形数N4);
	第三层时周长L3.PrintProcessLog(3);
	DefineLangVarInt(第五层时的周长L4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.通过前两层的规律计算第五层时的周长L4 第五层时的周长L4 = (第三层时周长L3 - 第二层时周长L2) * 第五层层数N5"));
	第五层时的周长L4 = (第三层时周长L3 - 第二层时周长L2) * 第五层层数N5;
	第五层时的周长L4.PrintProcessLog(4);
	ColPrintf(PrintfCol::结果, Lang("答：第5层时周长是%dcm"), (int)第五层时的周长L4);
}
void P32()
{
	P32_1();
	ColPrintf(PrintfCol::方法, "");
	P32_2();
	ColPrintf(PrintfCol::方法, "");
}
void P32_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P32();
	Lang.SetCurLanguage(LanguageLib::English);
	P32();
	ColPrintf(PrintfCol::方法, "");

}