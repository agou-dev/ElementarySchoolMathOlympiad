#pragma once
void P34_1()
{
	LanguageLib::LanguageTableT Language = {
		{"Example 1 of P34: Graph segmentation and line segment segmentation","P34的例一 图形分割线段分割"},
		{"Title: How many segments are there in the following picture?",
		"题目:下图一共有多少段?"},
		{"Solution idea: This line segment appears to have only four small segments when viewed with the naked eye, but we can divide it into small segments every other segment. For example, if we divide the line segment into A, B, C, D, E, F, we can combine different segments together, such as AC, AD",
		"解题思路：这条线段肉眼望去只有五条小段，但我们可以把隔一个线段成一小段，比如我们把线段分为A，B，C，D，E，我们可以把不同的段组合起来，比如AC，AD"},
		{"1. Calculate the total number of line segments N1. The total number of line segments N1=number of individual segments N1+(number of individual segments N2- number of segments\nN3 in each group)+(number of individual segments N2- number of segments N3 in each group - number of segments N3 in each group)+(number of individual segments N2- number\nof segments N3 in each group - number of segments N3 in each group)+(number of individual segments N2- number of segments N3 in each group - number of\nsegments N3 in each group - number of segments N3 in each group)",
		"1.计算一共的线段数N1 一共的线段数N1=单个小段数N1+(单个小段数N1-每组少的段数N3)+(单个小段数N1-每组少的段数N3-\n每组少的段数N3)+(单个小段数N1-每组少的段数N3-每组少的段数N3-每组少的段数N3)+(单个小段数N1-每组少的段数N3-每组少的段数N3-每组少的段数N3-每组少的段数N3)"},
		//变量表
		{"NumberOfIndividualSegmentsN1","单个小段数N1"},
		{"NumberOfSegmentsInEachGroupN3","每组少的段数N3"},
		{"TheTotalNumberOfLineSegmentsN1","一共的线段数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(单个小段数N1, 5);
	DefineLangVarInt(每组少的段数N3, 1);
	ColPrintf(PrintfCol::标题, Lang("P34的例一 图形分割线段分割"));
	ColPrintf(PrintfCol::标题, Lang("题目:下图一共有多少段?"));
	const char* pPic =
		"         A        B     C      D      E\n"
		"---------|---------|----|-------|-----|----------\n"
		;
	ColPrintf(PrintfCol::标题, pPic);
	ColPrintf(PrintfCol::标题, Lang("解题思路：这条线段肉眼望去只有五条小段，但我们可以把隔一个线段成一小段，比如我们把线段分为A，B，C，D，E，我们可以把不同的段组合起来，比如AC，AD"));
	DefineLangVarInt(一共的线段数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共的线段数N1 一共的线段数N1=单个小段数N1+(单个小段数N1-每组少的段数N3)+(单个小段数N1-每组少的段数N3-\n每组少的段数N3)+(单个小段数N1-每组少的段数N3-每组少的段数N3-每组少的段数N3)+(单个小段数N1-每组少的段数N3-每组少的段数N3-每组少的段数N3-每组少的段数N3)"));
	一共的线段数N1 = 单个小段数N1 + (单个小段数N1 - 每组少的段数N3) + (单个小段数N1 - 每组少的段数N3 - 每组少的段数N3) + (单个小段数N1 - 每组少的段数N3 - 每组少的段数N3 - 每组少的段数N3) + (单个小段数N1 - 每组少的段数N3 - 每组少的段数N3 - 每组少的段数N3 - 每组少的段数N3);
	一共的线段数N1.PrintProcessLog(1);
}
void P34_2()
{
	LanguageLib::LanguageTableT Language = {
		{"Example 2 of P34: Graph segmentation and line segment segmentation","P34的例二 图形分割线段分割"},
		{"Title: How many segments are there in the following picture?",
		"题目:下图一共有多少段?"},
		{"Solution idea: These line segments are interspersed together. We can separate the two line segments and calculate their addition",
		"解题思路：这些线段穿插一起，我们可以把两条线段拆出来，算出相加"},
		{"1. Calculate the number of first line segments N1=the number of first individual segments N1+(the number of first individual segments N1 minus the number of segments N3 in each group)",
		"1.计算第一条线段数N1 第一条线段数N1=第一条单个小段数N1+(第一条单个小段数N1-每组少的段数N3)"},
		{"2. Calculate the number of second line segments N4. The number of second line segments N4 is equal to the number of individual segments N5 in the second line plus (the number of individual segments N5 in the second line minus the number of segments N3 in each group) plus (the number of individual segments N5 in the second line minus the number of segments N3 in each group minus the number of segments N3 in each group)",
		"2.计算第二条线段数N4 第二条线段数N4=第二条单个小段数N5+(第二条单个小段数N5-每组少的段数N3)+(第二条单个小段数N5-每组少的段数N3-\n每组少的段数N3)"},
		{"3. Calculate the total number of line segments N5=the first line segment N1+the second line segment N4",
		"3.计算一共的线段数N5 一共的线段数N5=第一条线段数N1+第二条线段数N4"},
		//变量表
		{"TheFirstIndividualSegmentNumberN1","第一条单个小段数N1"},
		{"NumberOfSegmentsInEachGroupN3","每组少的段数N3"},
		{"Article2NumberOfIndividualSegmentsN5","第二条单个小段数N5"},
		{"NumberOfFirstLineSegmentsN1","第一条线段数N1"},
		{"TheSecondLineSegmentMumberN4","第二条线段数N4"},
		{"TheTotalNumberOfLineSegmentsN5","一共的线段数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第一条单个小段数N1, 2);
	DefineLangVarInt(每组少的段数N3, 1);
	DefineLangVarInt(第二条单个小段数N5, 3);
	ColPrintf(PrintfCol::标题, Lang("P34的例一 图形分割线段分割"));
	ColPrintf(PrintfCol::标题, Lang("题目:下图一共有多少段?"));
	ScanningLine<6, 6,18,8> test;
	test.AddScanLineByEdgeGradient(2, 4.0, 2, 2, 4.0/4.0, 4.0 / 4.0, ' ', 0);
	test.AddScanLineByEdgeGradient(1, 5.0, 5, 5, -(5.0 / 5.0), -(5.0 / 5.0), ' ', 0);
	test.AddScanLineByEdgeGradient(2.35, 0.3, 2.5, 2.5, -(5.0 / 5.0), -(5.0 / 5.0), ' ', 0);
	test.AddScanLineByEdgeGradient(2.35, 0.3, 3.5, 3.5, 5.0 / 5.0, 5.0 / 5.0, ' ', 0);
	test.AddScanLineByEdgeGradient(3.35, 0.3, 3.5, 3.5, -(5.0 / 5.0), -(5.0 / 5.0), ' ', 0);
	test.AddScanLineByEdgeGradient(4.35, 0.3, 4.5, 4.5, -(5.0 / 5.0), -(5.0 / 5.0), ' ', 0);
	test.AddScanLineByEdgeGradient(5.35, 0.3, 0.5, 0.5, 5.0 / 5.0, 5.0 / 5.0, ' ', 0);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Yellow);
	ColPrintf(PrintfCol::标题, Lang("解题思路：这些线段穿插一起，我们可以把两条线段拆出来，算出相加"));
	DefineLangVarInt(第一条线段数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算第一条线段数N1 第一条线段数N1=第一条单个小段数N1+(第一条单个小段数N1-每组少的段数N3)"));
	第一条线段数N1 = 第一条单个小段数N1 + (第一条单个小段数N1 - 每组少的段数N3);
	第一条线段数N1.PrintProcessLog(1);
	DefineLangVarInt(第二条线段数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第二条线段数N4 第二条线段数N4=第二条单个小段数N5+(第二条单个小段数N5-每组少的段数N3)+(第二条单个小段数N5-每组少的段数N3-\n每组少的段数N3)"));
	第二条线段数N4 = 第二条单个小段数N5 + (第二条单个小段数N5 - 每组少的段数N3) + (第二条单个小段数N5 - 每组少的段数N3 - 每组少的段数N3);
	第二条线段数N4.PrintProcessLog(2);
	DefineLangVarInt(一共的线段数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共的线段数N5 一共的线段数N5=第一条线段数N1+第二条线段数N4"));
	一共的线段数N5 = 第一条线段数N1 + 第二条线段数N4;
	一共的线段数N5.PrintProcessLog(3);
}
void P34_3()
{
	LanguageLib::LanguageTableT Language = {
		{"Example 3 of P34: Graph segmentation and line segment segmentation","P34的例三 图形分割线段分割"},
		{"Question: How many segments of graphics are there in the following picture?",
		"题目:下图一共有多少段图形?"},
		{"1. Calculate the number of first line segments N1=the number of first individual segments N1+(the number of first individual segments N1- the number of segments in each group N3)+(the number of first individual segments N1- the number of segments in each group N3- the number of segments in each group N3)",
		"解题思路：这可以根据线段的思想，一段一段的求最后相加"},
		{"1. Calculate the total number of line segments N1. The total number of line segments N1=number of individual segments N1+(number of individual segments N2- number of segments\nN3 in each group)+(number of individual segments N2- number of segments N3 in each group - number of segments N3 in each group)+(number of individual segments N2- number\nof segments N3 in each group - number of segments N3 in each group)+(number of individual segments N2- number of segments N3 in each group - number of\nsegments N3 in each group - number of segments N3 in each group)",
		"1.计算第一层图形数数N1 第一层图形数数N1=第一条单个小图形数N1+(第一条单个小图形数N1-每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3-每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3-每组少的图形数N3-每组少的图形数N3)"},
		{"2. Calculate the number of second layer graphics N2. The number of second layer graphics N2 is equal to the first single small graphics N1+(first single small graphics N1- number of fewer graphics N3 in each group)+(first single small graphics N1- number of fewer graphics N3 in each group - number of fewer graphics N3 in each group)+(first single small graphics N1- number of fewer graphics N3 in each group - number of fewer graphics N3 in each group)+(first single small graphics N1- number of fewer graphics N3 in each group - number of fewer graphics N3 in each group - number of fewer graphics N3 in each group)",
		"2.计算第二层图形数数N2 第二层图形数数N2=第一条单个小图形数N1+(第一条单个小图形数N1-每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3-每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3-每组少的图形数N3-每组少的图形数N3)"},
		{"3. Calculate the total number of segments N3=the number of first layer graphics N1 * the number of rows in minutes N4",
		"3.计算总共段数N3 总共段数N3=第一层图形数数N1*分的行数N4"},
		//变量表
		{"TheFirstSmallFigureNumberN1","第一条单个小图形数N1"},
		{"NumberOfRowsN4","分的行数N4"},
		{"NumberOfGraphicsInEachGroupN3","每组少的图形数N3"},
		{"NumberN1InTheFirstLayerOfGraphics","第一层图形数数N1"},
		{"NumberN2InTheSecondLayerOfGraphics","第二层图形数数N2"},
		{"TotalNumberOfSegmentsN3","总共段数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第一条单个小图形数N1, 5);
	DefineLangVarInt(每组少的图形数N3, 1);
	DefineLangVarInt(第二条单个小段数N5, 3);
	DefineLangVarInt(分的行数N4, 3);
	ColPrintf(PrintfCol::标题, Lang("P34的例三 图形分割线段分割"));
	ColPrintf(PrintfCol::标题, Lang("题目:下图一共有多少段图形?"));
	ScanningLine<10, 10> test;
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, -(5.0 / 9.0), 4.0 / 9.0, ' ', 0);
	ScanLenHorizontalLine(test, 3.0, 3.5, 2.8, 0.3);
	ScanLenHorizontalLine(test, 6.0, 1.6, 6.0, 0.3);
	ScanLenHorizontalLine(test, 9, 0, 8.9, 0.3);
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, -(2.0 / 9.0), -(2.0 / 9.0), ' ', 0);
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, 0, 0, ' ', 0);
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, -(1.0 / 9.0), -(1.0 / 9.0), ' ', 0);
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, -(-1.0 / 9.0), -(-1.0 / 9.0), ' ', 0);
	test.AddText(PrintfCol::顶点标注, 0.3, 4.7, "A");
	test.AddText(PrintfCol::顶点标注, 9.5, 0.3, "B");
	test.AddText(PrintfCol::顶点标注, 9.5, 3, "C");
	test.AddText(PrintfCol::顶点标注, 9.5, 4, "D");
	test.AddText(PrintfCol::顶点标注, 9.5, 5, "E");
	test.AddText(PrintfCol::顶点标注, 9.5, 6, "F");
	test.AddText(PrintfCol::顶点标注, 9.5, 9, "G");
	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(第一层图形数数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算第一层图形数数N1 第一层图形数数N1=第一条单个小图形数N1+(第一条单个小图形数N1-每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3-每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3-每组少的图形数N3-每组少的图形数N3)"));
	第一层图形数数N1 = 第一条单个小图形数N1 + (第一条单个小图形数N1 - 每组少的图形数N3) + (第一条单个小图形数N1 - 每组少的图形数N3 - 每组少的图形数N3) + (第一条单个小图形数N1 - 每组少的图形数N3 - 每组少的图形数N3 - 每组少的图形数N3) + (第一条单个小图形数N1 - 每组少的图形数N3 - 每组少的图形数N3 - 每组少的图形数N3 - 每组少的图形数N3);
	第一层图形数数N1.PrintProcessLog(1);
	DefineLangVarInt(第二层图形数数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第二层图形数数N2 第二层图形数数N2=第一条单个小图形数N1+(第一条单个小图形数N1-每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3-每组少的图形数N3)+(第一条单个小图形数N1-每组少的图形数N3-\n每组少的图形数N3-每组少的图形数N3-每组少的图形数N3)"));
	第二层图形数数N2 = 第一条单个小图形数N1 + (第一条单个小图形数N1 - 每组少的图形数N3) + (第一条单个小图形数N1 - 每组少的图形数N3 - 每组少的图形数N3) + (第一条单个小图形数N1 - 每组少的图形数N3 - 每组少的图形数N3 - 每组少的图形数N3) + (第一条单个小图形数N1 - 每组少的图形数N3 - 每组少的图形数N3 - 每组少的图形数N3 - 每组少的图形数N3);
	第二层图形数数N2.PrintProcessLog(2);
	DefineLangVarInt(总共段数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算总共段数N3 总共段数N3=第一层图形数数N1*分的行数N4"));
	总共段数N3 = 第一层图形数数N1 * 分的行数N4;
	总共段数N3.PrintProcessLog(3);
}
void P34()
{
	P34_1();
	ColPrintf(PrintfCol::方法, "");
	P34_2();
	ColPrintf(PrintfCol::方法, "");
	P34_3();
	ColPrintf(PrintfCol::方法, "");
}
void P34_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P34();
	Lang.SetCurLanguage(LanguageLib::English);
	P34();
	ColPrintf(PrintfCol::方法, "");

}