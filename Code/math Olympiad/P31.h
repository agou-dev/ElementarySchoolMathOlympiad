#pragma once
void P31_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P31 Case 1 Auxiliary Line Method",
		"P31例一 辅助线法"},
		{"Title: AC=10cm BC=40cm, find the area of a square",
		"题目:AC=10cm BC=40cm，求正方形面积"},
		{"1. Calculate ABC area S1 ABC area S1=(AC length L1 * BC length L2)/triangle's multiple of square N1",
		"1.计算ABC面积S1 ABC面积S1=(AC长度L1*BC长度L2)/三角形对于正方形的倍数N1"},
		{"1. List the equations and establish equation S1. ACD=Square edge length * AC/2. DCB=Square edge length * CB/2. Square edge length * AC/2+Square edge length * CB/2=ABC. Area S1",
		"1.列出等式建立方程S1 ACD面积=正方形边长*AC/2 DCB面积=正方形边长*CB/2 ACD面积+DCB面积=正方形边长*AC/2+正方形边长*CB/2=ABC面积S1"},
		{"2. Simplify equation S1 to obtain S2 square edge length * AC+square edge length * CB=ABC area S1 * 2",
		"2.化简式子S1得到S2 正方形边长*AC+正方形边长*CB=ABC面积S1*2"},
		{"3. Simplify equation S2 to obtain S3 square edge length * (CB+AC)=ABC area S1 * 2",
		"3.化简式子S2得到S3 正方形边长*(CB+AC)=ABC面积S1*2"},
		{"4. Simplify equation S2 to obtain S3 square edge length=ABC area S1 * 2/(CB+AC)",
		"4.化简式子S3得到S4 正方形边长=ABC面积S1*2/(CB+AC)"},
		{"2. Calculate the side length L3 of a square. The side length L3 of a square is equal to the ABC area S1 multiplied by the triangle's multiple N1 of the square, divided by (AC length L1+BC length L2)",
		"2.计算正方形边长L3 正方形边长L3=ABC面积S1*三角形对于正方形的倍数N1/(AC长度L1+BC长度L2)"},
		{"3. Calculate the square area S1. Square area S1=Square side length L3 * Square side length L3",
		"3.计算正方形面积S1 正方形面积S1=正方形边长L3*正方形边长L3"},
		{"Answer: The area of a square is% dcm",
		"答：正方形面积是%dcm"},
		//变量表
		{"NACLengthL1","AC长度L1"},
		{"NBCLengthL2","BC长度L2"},
		{"NTheMultipleN1OfATriangleOverASquare","三角形对于正方形的倍数N1"},
		{"NABCAreaS1","ABC面积S1"},
		{"NSquareSideLengthL3","正方形边长L3"},
		{"NSquareAreaS1","正方形面积S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<8, 5, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 1.0, 1, 1, 0, 2.0 / 1.0, ' ');//上三角
	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 1, 3, 0, 0, '0');//正方形
	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 3, 3, 0, 2.0 / 1.0, ' ');//下三角

	Screen.AddText(PrintfCol::顶点标注, 1.3, 0.7, "A");
	Screen.AddText(PrintfCol::顶点标注, 3.7, 6.5, "B");
	Screen.AddText(PrintfCol::顶点标注, 3.7, 0.7, "C");
	Screen.AddText(PrintfCol::顶点标注, 1.7, 3.0, "D");
	ScanLenHorizontalLine(Screen, 3.9, 3.24, 3, 0.3);
	DefineLangVarInt(AC长度L1, 10);
	DefineLangVarInt(BC长度L2, 40);
	DefineLangVarInt(三角形对于正方形的倍数N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P31例一 辅助线法"));
	ColPrintf(PrintfCol::标题, Lang("题目:AC=10cm BC=40cm，求正方形面积"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVarInt(ABC面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算ABC面积S1 ABC面积S1=(AC长度L1*BC长度L2)/三角形对于正方形的倍数N1"));
	ABC面积S1 = AC长度L1 * BC长度L2 / 三角形对于正方形的倍数N1;
	ABC面积S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::方法, Lang("1.列出等式建立方程S1 ACD面积=正方形边长*AC/2 DCB面积=正方形边长*CB/2 ACD面积+DCB面积=正方形边长*AC/2+正方形边长*CB/2=ABC面积S1"));
	ColPrintf(PrintfCol::方法, Lang("2.化简式子S1得到S2 正方形边长*AC+正方形边长*CB=ABC面积S1*2"));
	ColPrintf(PrintfCol::方法, Lang("3.化简式子S2得到S3 正方形边长*(CB+AC)=ABC面积S1*2"));
	ColPrintf(PrintfCol::方法, Lang("4.化简式子S3得到S4 正方形边长=ABC面积S1*2/(CB+AC)"));
	DefineLangVarInt(正方形边长L3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算正方形边长L3 正方形边长L3=ABC面积S1*三角形对于正方形的倍数N1/(AC长度L1+BC长度L2)"));
	正方形边长L3 = ABC面积S1 * 三角形对于正方形的倍数N1 / (AC长度L1 + BC长度L2);
	正方形边长L3.PrintProcessLog(2);
	DefineLangVarInt(正方形面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算正方形面积S1 正方形面积S1=正方形边长L3*正方形边长L3"));
	正方形面积S1 = 正方形边长L3 * 正方形边长L3;
	正方形面积S1.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：正方形面积是%dcm"), (int)正方形面积S1);
}
void P31_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P31 Case 2 Auxiliary Line Method",
		"P31例一 辅助线法"},
		{"Title: The side length of ABCD is 4cm, CG=3cm, DG=5cm, find the length of DE",
		"题目：ABCD的边长是4cm，CG=3cm，DG=5cm，求DE长度"},
		{"1. Calculate the AGD area S1. AGD area S1=side length L1 of ABCD * side length L1 of ABCD/triangle multiple N1 of square",
		"1.计算AGD面积S1 AGD面积S1=ABCD的边长L1*ABCD的边长L1/三角形对于正方形的倍数N1"},
		{"2. Calculate the area of DEFG S2. The area of DEFG S2=the area of DEFG S2 * AGD multiplied by DEFG N1",
		"2.计算DEFG的面积S2 DEFG的面积S2=AGD面积S1*AGD对于DEFG的倍数N1"},
		{"3. Calculate DE length S2, DE length S2=DEFG area S2/DG length L2",
		"3.计算DE长度S2 DE长度S2=DEFG的面积S2/DG长度L2"},
		{"Answer: The length of DE is%fcm",
		"答：DE长度是%fcm"},
		//变量表
		{"FTheSideLengthL1OfABCD","ABCD的边长L1"},
		{"FTheMultipleN1OfATriangleOverASquare","三角形对于正方形的倍数N1"},
		{"FAGDIsAMultipleN1Of DEFG","AGD对于DEFG的倍数N1"},
		{"FDGLengthL2","DG长度L2"},
		{"FAGDAreaS1","AGD面积S1"},
		{"FDEFGAreaS2","DEFG的面积S2"},
		{"FDELengthS2","DE长度S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<8, 8, 9, 3> Screen;
	//F(1.44,1.08+4) E(4.44，1.08)
	Screen.AddScanLineByEdgeGradient(1.08, 1.92, 4.44, 4.44, -(1.44/2.0), 2.56 / 2.0, ' ');//EAD三角形       
	Screen.AddScanLineByEdgeGradient(3.0, 2.0,3.0, 3.0, -(1.44 / 2.0), 0.5/2.0, ' ');//AF上面直角三角形
	
	Screen.AddScanLineByEdgeGradient(5.08, 1.92, 1.44, 3.5,2.56 / 1.92, 0.5 / 2.0, ' ');//FG下面面直角三角形
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 7, 7, -(3.0/4.0), 0, ' ');//DGC三角形
	//Screen.AddScanLineByEdgeGradient(3.0, 3.0, 3.0, 3.0, 0, 1.0/4.0, ' ');

	//Screen.AddScanLineByEdgeGradient(6.5, 1.0, 3.0, 6.0, 0, 1.0 / 0.5, ' ');
	//Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 7, 0, 0, ' ');
	Screen.AddScanLineByEdgeGradient(3.0, 4.0,3.0, 7, 1.0 / 4.0, -(3.0 / 4.0), '0');//ADG三角形
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 3.0, -(0), 0, '*');//AB竖线
	ScanLenHorizontalLine(Screen, 1.0, 4.44, 2.56, 0.3);
	Screen.AddScanLineByEdgeGradient(1.0, 1.92, 7, 7, 0, 0, ' ');//xy边
	//Screen.AddScanLineByEdgeGradient(5.0, 2.0, 1.44, 3.0, 1.44 / 2.0, 0, ' ');
	//ScanLenHorizontalLine(Screen, 3.0, 2.7, 4.3, 0.3);
	ScanLenHorizontalLine(Screen, 7.0, 3.0, 4.0, 0.3);
	Screen.AddText(PrintfCol::顶点标注,2.7,2.7, "A");
	Screen.AddText(PrintfCol::顶点标注, 7.5, 2.7, "B");
	Screen.AddText(PrintfCol::顶点标注, 7.6, 4.0, "G");
	Screen.AddText(PrintfCol::顶点标注, 0.7, 4.44, "E");
	Screen.AddText(PrintfCol::顶点标注, 3.3, 7.3, "D");
	Screen.AddText(PrintfCol::顶点标注, 4.7, 1.0, "F");
	Screen.AddText(PrintfCol::顶点标注, 7.3, 7.3, "C");
	Screen.AddText(PrintfCol::顶点标注, 2.3, 7.3, "x");
	Screen.AddText(PrintfCol::顶点标注, 0.7, 6.3, "y");
	/*                        
	* 不规则点推导过程(利用勾股定理和相似三角形比例相同)
	* 计算E点坐标
	*1.y/x三角形与4/3三角形比例形同得到S1 y/x=4/3 
	* 2.化简式子S1得到S2(求y) y= （4/3）x
	* 3.S2利用勾股定理得到S3 x^2+y^2=DE^2=3.2^2=10.24
	* 4.化简式子S3得到S4 x^2+(4/3x)^2=10.24
	* 5.S4通分4/3得到S5 (16/9)x^2+x^2=10.24
	* 6.化简式子S5得到S6 (16+9/9)+x^2=10.24
	* 7.对S6求倒数展开得到S7 10.24*9/25=x^2*25/9*9/25=x^2=y=2.56
	* 8.S7对x^2求平方根得到S8 x=1.92
	* E(4+(3-2.56),1+(2-1.92))
	* A(3,3)
	* F(1+(3-2.56),5+(2-1.92))
	* */
	
	DefineLangVar(float,ABCD的边长L1, 4);
	DefineLangVar(float, 三角形对于正方形的倍数N1, 2);
	DefineLangVar(float, AGD对于DEFG的倍数N1, 2);
	DefineLangVar(float, DG长度L2, 5);
	ColPrintf(PrintfCol::标题, Lang("P31例一 辅助线法"));
	ColPrintf(PrintfCol::标题, Lang("题目：ABCD的边长是4cm，CG=3cm，DG=5cm，求DE长度"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	DefineLangVar(float, AGD面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算AGD面积S1 AGD面积S1=ABCD的边长L1*ABCD的边长L1/三角形对于正方形的倍数N1"));
	AGD面积S1 = ABCD的边长L1 * ABCD的边长L1 / 三角形对于正方形的倍数N1;
	AGD面积S1.PrintProcessLog(1);
	DefineLangVar(float, DEFG的面积S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算DEFG的面积S2 DEFG的面积S2=AGD面积S1*AGD对于DEFG的倍数N1"));
	DEFG的面积S2 = AGD面积S1 * AGD对于DEFG的倍数N1;
	DEFG的面积S2.PrintProcessLog(2);
	DefineLangVar(float, DE长度S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算DE长度S2 DE长度S2=DEFG的面积S2/DG长度L2"));
	DE长度S2 = DEFG的面积S2 / DG长度L2;
	DE长度S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：DE长度是%fcm"), DE长度S2.Var);
}
void P31_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P31 Case 2 Auxiliary Line Method",
		"P31例二 辅助线法(方程法)"},
		{"Title: The side length of ABCD is 4cm, CG=3cm, DG=5cm, find the length of DE",
		"题目：ABCD的边长是4cm，CG=3cm，DG=5cm，求DE长度"},
		{"According to the graph AGD, where AD and DG are equal, two area equations are derived to obtain S1. The unknown variable is ED (ED * DG)/2=(AD * DC)/2",
		"1.根据图形AGD其中的AD，DG引出两个面积式子相等得到S1（建方程）未知数是ED (ED*DG)/2=(AD*DC)/2"},
		{"2. Simplify equation S1 to obtain S2 ED * DG=AD * DC",
		"2.化简式子S1得到S2 ED*DG=AD*DC"},
		{"3. Expand equation S2 to obtain S3 ED=(AD * DC)/DG",
		"3.展开式子S2得到S3 ED=(AD*DC)/DG"},
		{"4. Substitute numerical values to solve equation S3 and obtain S4 ED=(4 * 4)/5",
		"4.带入数值解出方程S3得到S4 ED=(4*4)/5"},
		{"Answer: The length of DE is%fcm",
		"答：DE长度是%fcm"},
		//变量表
		{"FTheSideLengthL1OfABCD","ABCD的边长L1"},
		{"FDGLengthL2","DG长度L2"},
		{"FDELengthS2","DE长度S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<8, 8, 9, 3> Screen;
	//F(1.44,1.08+4) E(4.44，1.08)
	Screen.AddScanLineByEdgeGradient(1.08, 1.92, 4.44, 4.44, -(1.44 / 2.0), 2.56 / 2.0, ' ');//EAD三角形       
	Screen.AddScanLineByEdgeGradient(3.0, 2.0, 3.0, 3.0, -(1.44 / 2.0), 0.5 / 2.0, ' ');//AF上面直角三角形

	Screen.AddScanLineByEdgeGradient(5.08, 1.92, 1.44, 3.5, 2.56 / 1.92, 0.5 / 2.0, ' ');//FG下面面直角三角形
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 7, 7, -(3.0 / 4.0), 0, ' ');//DGC三角形
	//Screen.AddScanLineByEdgeGradient(3.0, 3.0, 3.0, 3.0, 0, 1.0/4.0, ' ');

	//Screen.AddScanLineByEdgeGradient(6.5, 1.0, 3.0, 6.0, 0, 1.0 / 0.5, ' ');
	//Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 7, 0, 0, ' ');
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 7, 1.0 / 4.0, -(3.0 / 4.0), '0');//ADG三角形
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 3.0, -(0), 0, '*');//AB竖线
	ScanLenHorizontalLine(Screen, 1.0, 4.44, 2.56, 0.3);
	Screen.AddScanLineByEdgeGradient(1.0, 1.92, 7, 7, 0, 0, ' ');//xy边
	//Screen.AddScanLineByEdgeGradient(5.0, 2.0, 1.44, 3.0, 1.44 / 2.0, 0, ' ');
	//ScanLenHorizontalLine(Screen, 3.0, 2.7, 4.3, 0.3);
	ScanLenHorizontalLine(Screen, 7.0, 3.0, 4.0, 0.3);
	Screen.AddText(PrintfCol::顶点标注, 2.7, 2.7, "A");
	Screen.AddText(PrintfCol::顶点标注, 7.5, 2.7, "B");
	Screen.AddText(PrintfCol::顶点标注, 7.6, 4.0, "G");
	Screen.AddText(PrintfCol::顶点标注, 0.7, 4.44, "E");
	Screen.AddText(PrintfCol::顶点标注, 3.3, 7.3, "D");
	Screen.AddText(PrintfCol::顶点标注, 4.7, 1.0, "F");
	Screen.AddText(PrintfCol::顶点标注, 7.3, 7.3, "C");
	Screen.AddText(PrintfCol::顶点标注, 2.3, 7.3, "x");
	Screen.AddText(PrintfCol::顶点标注, 0.7, 6.3, "y");
	/*
	* 不规则点推导过程(利用勾股定理和相似三角形比例相同)
	* 计算E点坐标
	*1.y/x三角形与4/3三角形比例形同得到S1 y/x=4/3
	* 2.化简式子S1得到S2(求y) y= （4/3）x
	* 3.S2利用勾股定理得到S3 x^2+y^2=DE^2=3.2^2=10.24
	* 4.化简式子S3得到S4 x^2+(4/3x)^2=10.24
	* 5.S4通分4/3得到S5 (16/9)x^2+x^2=10.24
	* 6.化简式子S5得到S6 (16+9/9)+x^2=10.24
	* 7.对S6求倒数展开得到S7 10.24*9/25=x^2*25/9*9/25=x^2=y=2.56
	* 8.S7对x^2求平方根得到S8 x=1.92
	* E(4+(3-2.56),1+(2-1.92))
	* A(3,3)
	* F(1+(3-2.56),5+(2-1.92))
	* */

	DefineLangVar(float, ABCD的边长L1, 4);
	DefineLangVar(float, DG长度L2, 5);
	ColPrintf(PrintfCol::标题, Lang("P31例二 辅助线法(方程法)"));
	ColPrintf(PrintfCol::标题, Lang("题目：ABCD的边长是4cm，CG=3cm，DG=5cm，求DE长度"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::方法);
	ColPrintf(PrintfCol::方法, Lang("1.根据图形AGD其中的AD，DG引出两个面积式子相等得到S1（建方程）未知数是ED (ED*DG)/2=(AD*DC)/2"));
	
	ColPrintf(PrintfCol::方法, Lang("2.化简式子S1得到S2 ED*DG=AD*DC"));
	
	DefineLangVar(float, DE长度S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.展开式子S2得到S3 ED=(AD*DC)/DG"));
	ColPrintf(PrintfCol::方法, Lang("4.带入数值解出方程S3得到S4 ED=(4*4)/5"));
	DE长度S2 = (ABCD的边长L1* ABCD的边长L1) / DG长度L2;
	DE长度S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：DE长度是%fcm"), DE长度S2.Var);
}
void P31()
{
	P31_1();
	ColPrintf(PrintfCol::方法, "");
	P31_2_1();
	ColPrintf(PrintfCol::方法, "");
	P31_2_2();
	ColPrintf(PrintfCol::方法, "");
}
void P31_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P31();
	Lang.SetCurLanguage(LanguageLib::English);
	P31();
	ColPrintf(PrintfCol::方法, "");

}