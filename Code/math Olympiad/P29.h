#pragma once
void P29_1()
{
	LanguageLib::LanguageTableT Language = {
		{"Example of P29: Numerical Method","P29的例一 份数法"},
		{"Title: As shown in the figure, in ABC, BC=4BD，AE=ED, The shaded area is 250.75cm. What is the area of ABC?",
		"题目：如图所示在ABC中，BC=4BD，AE=ED,阴影部分面积是250.75cm，ABC的面积是多少？"},
		{"1. Calculate the area S1 of the segment after segmentation. The area S1 of the segment after segmentation is equal to the area of\nthe shaded area multiplied by the shaded area multiplied by a multiple of the shaded area",
		"1.计算分段后一份的面积S1 分段后一份的面积S1=阴影部分的面积S2*阴影部分面积对于一份的倍数N1"},
		{"2. Calculate the area S3 of triangle ABC. The area S3 of triangle ABC is equal to the area of the next segment S1 multiplied by the number of segments N2",
		"2.计算三角形ABC的面积S3 三角形ABC的面积S3=分段后一份的面积S1*分段的份数N2"},
		{"Answer: The area of ABC is%fcm",
		"答：ABC的面积是%fcm"},
		//变量表
		{"TheAreaOfTheShadedAreaS2","阴影部分的面积S2"},
		{"TheAreaOfTheShadedAreaIsAMultipleOfN1","阴影部分面积对于一份的倍数N1"},
		{"NumberOfSegmentsN2","分段的份数N2"},
		{"TheAreaS1OfTheNextSectionAfterSegmentation","分段后一份的面积S1"},
		{"TheAreaS3OfTriangleABC","三角形ABC的面积S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<6, 7, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 2.0, 3.0, 3.0, -(1.0 / 2.0), -(0.5 / 2.0),' ');
	Screen.AddScanLineByEdgeGradient(3.0, 2.0, 2.0, 2.5, -(1.0 / 2.0), -(1.5 / 2.0), ' ');
	Screen.AddScanLineByEdgeGradient(3.0, 2.0, 2.5, 2.5, -(1.5 / 2.0), -(0.5 / 2.0));
	Screen.AddScanLineByEdgeGradient(1.0, 4.0, 3.0, 3.0, -(1.0 / 4.0), 2.0 / 4.0,' ');
	//底边
	Screen.AddScanLineByEdgeGradient(5.0, 1.0, 1.0, 5.0, 4.0 / 0.1, -(4.0 / 0.1), '*');

	Screen.AddText(PrintfCol::顶点标注, 0.7, 3.3, "A");
	Screen.AddText(PrintfCol::顶点标注, 5.3, 0.7, "B");
	Screen.AddText(PrintfCol::顶点标注, 5.3, 5.3, "C");
	Screen.AddText(PrintfCol::顶点标注, 5.5, 1.7, "D");
	Screen.AddText(PrintfCol::顶点标注, 3.5, 2.7, "E");
	DefineLangVar(float, 阴影部分的面积S2, 250.75);
	DefineLangVar(float, 阴影部分面积对于一份的倍数N1, 2);
	DefineLangVar(float, 分段的份数N2, 4);
	ColPrintf(PrintfCol::标题, Lang("P29的例一 份数法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示在ABC中，BC=4BD，AE=ED,阴影部分面积是250.75cm，ABC的面积是多少？"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVar(float, 分段后一份的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算分段后一份的面积S1 分段后一份的面积S1=阴影部分的面积S2*阴影部分面积对于一份的倍数N1"));
	分段后一份的面积S1 = 阴影部分的面积S2 * 阴影部分面积对于一份的倍数N1;
	分段后一份的面积S1.PrintProcessLog(1);
	DefineLangVar(float, 三角形ABC的面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算三角形ABC的面积S3 三角形ABC的面积S3=分段后一份的面积S1*分段的份数N2"));
	三角形ABC的面积S3 = 分段后一份的面积S1 * 分段的份数N2;
	三角形ABC的面积S3.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：ABC的面积是%fcm"), (float)三角形ABC的面积S3);
}
void P29_2()
{ 
	LanguageLib::LanguageTableT Language = {
		{"Example of P29: Two part Number Method","P29的例二 份数法"},
		{"Title: As shown in the figure, DB=3AB, 2AB=CD. Given that the area of ABC is 3cm, what is the area of ADE?",
		"题目：如图所示DB=3AB，2AB=CD，已知ABC的面积是3cm，ADE的面积是多少?"},
		{"1. Calculate the area S1 of ABE. The area S1 of ABE is equal to the area S2 of ABE multiplied by the number of parts N1 divided by the triangle",
		"1.计算ABC的面积S1 ABC的面积S1=ABE的面积S2*ABE分成的份数N1"},
		{"2. Calculate the area S3 of ADE=the area S1 of ABE * the number of parts N2 that the entire graph is divided into",
		"2.计算ADE的面积S3 ADE的面积S3=ABC的面积S1*整个图形分成的份数N2"},
		{"Answer: The area of ADE is%dcm",
		"答：ADE的面积是%dcm"},
		//变量表
		{"ABEAreaS2","ABE的面积S2"},
		{"NumberOfABESharesN1","ABE分成的份数N1"},
		{"ABCAreaS3","ABC的面积S1"},
		{"TheEntireGraphicIsDividedIntoN2Parts","整个图形分成的份数N2"},
		{"ADEAreaS3","ADE的面积S3"},
	};
	Lang.AddLanguageTable(
		Language
	);

	ScanningLine<4, 4, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(0.0, 2.0, 3.0, 3.0, -(2.0 / 2.0), 1.0 / 3.0, ' ');
	Screen.AddScanLineByEdgeGradient(2.0, 1.0, 1, 3.7, 1.0 / 1.0, 1.0 / 3.0, ' ');

	Screen.AddScanLineByEdgeGradient(2.0, 1.0, 1.0, 1.0, -(1.0 / 1.0), 1.0 / 1.0, '0');

	Screen.AddScanLineByEdgeGradient(3.0, 1.0, 0.0, 4.0, 4.0 / 0.1, -(4.0 / 0.1), '*');
	DefineLangVarInt(ABE的面积S2, 3);
	DefineLangVarInt(ABE分成的份数N1, 3);
	DefineLangVarInt(整个图形分成的份数N2, 4);
	ColPrintf(PrintfCol::标题, Lang("P29的例二 份数法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示在ABC中，BC=4BD，AE=ED,阴影部分面积是250.75cm，ABC的面积是多少？"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(ABC的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算ABC的面积S1 ABC的面积S1=ABE的面积S2*ABE分成的份数N1"));
	ABC的面积S1 = ABE的面积S2 * ABE分成的份数N1;
	ABC的面积S1.PrintProcessLog(1);
	DefineLangVarInt(ADE的面积S3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算ADE的面积S3 ADE的面积S3=ABC的面积S1*整个图形分成的份数N2"));
	ADE的面积S3 = ABC的面积S1 * 整个图形分成的份数N2;
	ADE的面积S3.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：ADE的面积是%dcm"), (int)ADE的面积S3);
}
void P29()
{
	P29_1();
	ColPrintf(PrintfCol::方法, "");
	P29_2();
	ColPrintf(PrintfCol::方法, "");
}
void P29_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P29();
	Lang.SetCurLanguage(LanguageLib::English);
	P29();
	ColPrintf(PrintfCol::方法, "");

}