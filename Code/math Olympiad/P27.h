#pragma once
void P27_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P27 case grid point method","P27��һ����һ ��㷨"},
		{"Title: Calculate the area of AB shape as shown in the figure",
		"��Ŀ����ͼ��ʾ����ABͼ�ε������һС��������1cm^2�߳���1cm��"},
		{"1. Calculate the area S of figure A, which is equal to the number of internal grid points m+(the number of boundary grid points n/2) minus the edge length n of the small grid",
		"1.����Aͼ�ε����S1 Aͼ�ε����S1=A�ڲ��ĸ����m1+(A�߽�ĸ����n1/��������ռ����ı���mu1)-С���ӵ����n3"},
		{"2. Calculate the area S2 of the B shape. The area S2 of the B shape is equal to the number of grid points m2 inside B+(the number of grid points n2/2\nat the B boundary) - the side length n4 of the small grid",
		"2.����Bͼ�ε����S2 Bͼ�ε����S2=B�ڲ��ĸ����m2+(B�߽�ĸ����n2/��������ռ����ı���mu1)-С���ӵ����n3"},
		{"Answer: The area S1 of figure A is% dcm, and the area S2 of figure B is% dcm",
		"��Aͼ�ε����S1��%dcm��Bͼ�ε����S2��%dcm"},
		//������
		{"TheNumberOfLatticeointsM1InsideA","A�ڲ��ĸ����m1"},
		{"ThNnumberOfLatticePointsM2InsideB","B�ڲ��ĸ����m2"},
		{"TheNumberOfLatticePointsN1OnTheBoundaryOfA","A�߽�ĸ����n1"},
		{"TheNumberOfLatticePointsN2OnTheBBoundary","B�߽�ĸ����n2"},
		{"TheSideLengthN3OfTheSmallGrid","С���ӵ����n3"},
		{"TheAreaS1OfFigureA","Aͼ�ε����S1"},
		{"TheAreaS2OfTheBShape","Bͼ�ε����S2"},

		{"HalfOfTheAreaIsAMultipleOfTheEntireGrid,Mu1","��������ռ����ı���mu1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(A�ڲ��ĸ����m1, 2);
	DefineLangVarInt(B�ڲ��ĸ����m2, 7);
	DefineLangVarInt(A�߽�ĸ����n1, 6);
	DefineLangVarInt(B�߽�ĸ����n2, 8);
	DefineLangVarInt(С���ӵ����n3, 1);
	DefineLangVarInt(��������ռ����ı���mu1, 2)
	//13*6 [9*3]
	ScanningLine<13, 6, 9, 3> Screen;
    //ScanningLine<13, 6, 12, 4> Screen;
	//ScanningLine<13, 6, 18, 6> Screen;
	//ScanningLine<13, 6, 3, 1> Screen;
	//������A ��ʼ�߲���0.11 ��ֹ�߲���0.33 �ױ߲���1.0
	//��1��
	/*
	Screen.AddScanLine(1.0, 1.0, 1.33);
	Screen.AddScanLine(1.34, 1.11, 1.66);
	Screen.AddScanLine(1.67, 1.22, 1.99);

	//��2��
	Screen.AddScanLine(2.0, 1.33, 2.33);
	Screen.AddScanLine(2.34, 1.44, 2.66);
	Screen.AddScanLine(2.67, 1.55, 2.99);

	//��3��
	Screen.AddScanLine(3.0, 1.66, 3.33);
	Screen.AddScanLine(3.34, 1.77, 3.66);
	Screen.AddScanLine(3.67, 1.88, 3.99);
	
	//��4��
	Screen.AddScanLine(4.0, 2.0, 4.33);
	Screen.AddScanLine(4.34, 3.0, 4.66);
	Screen.AddScanLine(4.67, 4.0, 4.99);
	*/

	Screen.AddScanLineByEdgeGradient(1.0, 3, 1.0, 1.0, 1.0 / 3.0, 1.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(4.0, 1, 2.0, 4.0, 3.0 / 1.0, 1.0 / 1.0);       

	//

	float fBOffsetX = 7;
	//��1����ʼ�߲���-0.33,��ֹ�߲���0.66
	/*Screen.AddScanLine(1.0, fBOffsetX + 2.0, fBOffsetX + 2.0);
	Screen.AddScanLine(1.34, fBOffsetX + 2.0 -0.33, fBOffsetX + 2.66);
	Screen.AddScanLine(1.67, fBOffsetX + 2.0 - 0.33-0.33, fBOffsetX + 2.66+0.66);

	//��2����ʼ�߲���-0.33,��ֹ�߲���0
	Screen.AddScanLine(2.0, fBOffsetX + 1.0, fBOffsetX + 3.99);
	Screen.AddScanLine(2.34, fBOffsetX + 1.0 - 0.33, fBOffsetX + 3.99);
	Screen.AddScanLine(2.67, fBOffsetX + 1.0 - 0.33 - 0.33, fBOffsetX + 3.99);

	//��2����ʼ�߲���0.33,��ֹ�߲���0
	Screen.AddScanLine(3.0, fBOffsetX + 0.0, fBOffsetX + 3.99);
	Screen.AddScanLine(3.34, fBOffsetX + 0.0 + 0.33, fBOffsetX + 3.99);
	Screen.AddScanLine(3.67, fBOffsetX + 0.0 + 0.33 + 0.33, fBOffsetX + 3.99);

	//��4����ʼ�߲���0.33,��ֹ�߲���0
	Screen.AddScanLine(4.0, fBOffsetX + 1.0, fBOffsetX + 3.99);
	Screen.AddScanLine(4.34, fBOffsetX + 2.0, fBOffsetX + 3.99);
	Screen.AddScanLine(4.67, fBOffsetX + 3.0, fBOffsetX + 3.99);*/
	//Bͼ��
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

	ColPrintf(PrintfCol::����, Lang("P27��һ����һ ��㷨"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ����ABͼ�ε������һС��������1cm^2�߳���1cm��"));
	Screen.Draw();
	Screen.Printf(PrintfCol::����);

	DefineLangVarInt(Aͼ�ε����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����Aͼ�ε����S1 Aͼ�ε����S1=A�ڲ��ĸ����m1+(A�߽�ĸ����n1/��������ռ����ı���mu1)-С���ӵ����n3"));
	Aͼ�ε����S1 = A�ڲ��ĸ����m1 + (A�߽�ĸ����n1 / ��������ռ����ı���mu1) - С���ӵ����n3;
	Aͼ�ε����S1.PrintProcessLog(1);
	DefineLangVarInt(Bͼ�ε����S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����Bͼ�ε����S2 Bͼ�ε����S2=B�ڲ��ĸ����m2+(B�߽�ĸ����n2/��������ռ����ı���mu1)-С���ӵ����n3"));
	Bͼ�ε����S2 = B�ڲ��ĸ����m2 + (B�߽�ĸ����n2 / ��������ռ����ı���mu1) - С���ӵ����n3;
	Bͼ�ε����S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("��Aͼ�ε����S1��%dcm��Bͼ�ε����S2��%dcm"), (int)Aͼ�ε����S1, (int)Bͼ�ε����S2);
}
void P27_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P27 Example 1 Method 2 Whitening Method","P27��һ������ ȥ�׷�"},
		{"Title: Calculate the area of the AB shape as shown in the figure (the area of a small grid is 1cm ^ 2 and the side length is 1cm)",
		"��Ŀ����ͼ��ʾ����ABͼ�ε������һС��������1cm^2�߳���1cm��"},
		{"1. Calculate the area of A that cannot be removed after whitening, S1. The area of A that cannot be removed after whitening, S1=base B1 * height H1/triangle multiple mu1",
		"1.����ȥ�׺�������޷�ȥ����A���S1 ȥ�׺�������޷�ȥ����A���S1=ȥ�׺������ε�B1*ȥ�׺������θ�H1/�����α���mu1"},
		{"2. Calculate the blank area that cannot be removed by A, S2. The blank area that cannot be removed by A, S2=(the bottom of the shape that canno\n be removed from A, B2 * the height of the shape that cannot be removed from A, H2/the triangle multiple mu1)+(the bottom of the shape that cannot be removed from A, B3 *\nthe height of the shape that cannot be removed from A, H3/the triangle multiple mu1)\n+the area of a small grid, S3",
		"2.����A�޷�ȥ���ĵĿհ����S2 A�޷�ȥ���ĵĿհ����S2=(Aͼ�������޷�ȥ��ͼ�εĵ�B2*Aͼ�������޷�ȥ��ͼ�εĸ�H2/�����α���mu1)+(Aͼ�������޷�ȥ��ͼ�εĵ�B3*Aͼ�������޷�ȥ��ͼ�εĸ�H3/�����α���mu1)+һС������S3"},
		{"3. Calculate the area of B that cannot be removed after whitening, S4 that includes the area of A that cannot be removed after whitening, S4=the side length\nof B that cannot be removed after whitening, A1 * the side length of B that cannot be removed after whitening, A1",
		"3.����ȥ�׺�������޷�ȥ����B���S4 ȥ�׺�������޷�ȥ����B���S4=ȥ�׺�������޷�ȥ����B�߳�A1*ȥȥ�׺�������޷�ȥ����B�߳�A1"},
		{"4. Calculate the upper blank area that cannot be removed by B, S5. The upper blank area that cannot be removed by B is calculated as follows: S5=(the base of the blank shape on top of B\nis B4 * the height of the blank shape on top of B is H4)/The triangle is multiplied by a square by N1- (the base of the blank shape\non top of B is B5 * the base of the blank shape on top of B is H5)/The triangle is\nmultiplied by a square by N2",
		"4.����B�޷�ȥ���ĵ�����հ����S5 B�޷�ȥ���ĵ�����հ����S5=(B����հ�ͼ�ε�һB4*B����հ�ͼ�θ�һH4)/�����α���mu1+(B����հ�ͼ�ε׶�B5*B����հ�ͼ�θ߶�H5)/�����α���mu1"},
		{"5. Calculate the blank area of the lower surface that cannot be removed by B, S5. The blank area of the lower surface that cannot be removed by B, S5=(the base of the blank shape of the\nlower surface of B is one B6 * the height of the blank shape of the lower surface of B is one H6)/The triangle is multiplied by a\nsquare N1- (the base of the blank shape of the lower surface of B is two B7 * the base\nof the blank shape of the lower surface of B is two H7)/The triangle is multiplied by a square N2",
		"5.����B�޷�ȥ���ĵ�������հ����S5 B�޷�ȥ���ĵ�����հ����S5=(B������հ�ͼ���ϵ�һUB1+B����հ�ͼ���µ�һXH1)*B����հ�ͼ���¸�һH6/�����α���mu1+(B����հ�ͼ�ε׶�B7*B����հ�ͼ�θ߶�H7)/�����α���mu1"},
		//������
		{"RemoveTheTriangleBaseB1AfterWhitening","ȥ�׺������ε�B1"},
		{"RemoveTheTriangleHeightH1AfterWhitening","ȥ�׺������θ�H1"},
		{"TriangleMultiplierMu1","�����α���mu1"},
		{"TheBottomOfTheGraphicCannotBeRemovedFromTheTopOfGraphicB2","Aͼ�������޷�ȥ��ͼ�εĵ�B2"},
		{"TheHighH2OnTheAGraphicCannotBeRemoved","Aͼ�������޷�ȥ��ͼ�εĸ�H2"},
		{"ACannotRemoveTheBottomB3OfTheGraphicBelowIt","Aͼ�������޷�ȥ��ͼ�εĵ�B3"},
		{"TheHeightH3OfTheGraphicCannotBeRemovedFromTheAGraphic","Aͼ�������޷�ȥ��ͼ�εĸ�H3"},
		{"AfterWhiteningItIncludesTheAreaS1OfAThatCannotBeRemovedAtPresent","ȥ�׺�������޷�ȥ����A���S1"},
		{"TheBlankAreaS2ThatCannotBeRemovedByA","A�޷�ȥ���ĵĿհ����S2" },
		{"TheSideLengthS3OfTheSmallGrid","һС������S3"},

		{"AfterRemovingTheWhiteItIncludesTeBSideLengthA1ThatCannotBeRemovedAtPresent","ȥ�׺�������޷�ȥ����B�߳�A1"},
		{"BWithABlankGraphicOnTopAndB4AtTheBottom","B����հ�ͼ�ε�һB4"},
		{"TheBlankGraphicOnTopOfBIsHigherThanH4","B����հ�ͼ�θ�һH4"},
		{"BBlankGraphicOnTopBottom2B5","B����հ�ͼ�ε׶�B5"},
		{"BHasABlankGraphicOnTopGrade2H5","B����հ�ͼ�θ߶�H5"},
		{"BHasABlankGraphicOnTheBottomAndAUB1OnTheTop","B������հ�ͼ���ϵ�һUB1"},
		{"BelowBThereIsABlankGraphicWithXH1ItTheBottom","B����հ�ͼ���µ�һXH1"},
		{"BBlankGraphicBelowBottom2B7","B����հ�ͼ�ε׶�B7"},
		{"BBlankJraphicBelowGrad2H7","B����հ�ͼ�θ߶�H7"},
		{"UnderTheBlankGraphicBelowBThereIsAHighOneXH6","B����հ�ͼ���¸�һH6"},
		{"AfterWhiteningTtIncludesTheBAreaS4ThatCannotBeRemovedAtPresent","ȥ�׺�������޷�ȥ����B���S4"},
		{"BCannotRemoveTheBlankAreaAboveS5","B�޷�ȥ���ĵ�����հ����S5"},
		{"BCannotRemoveTheBlankAreaS5OnTheLowerSurface","B�޷�ȥ���ĵ�������հ����S5"},

	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<13, 6, 9, 3> Screen;
	//ScanningLine<13, 6, 12, 4> Screen;
	//ScanningLine<13, 6, 18, 6> Screen;
	
	//������A ��ʼ�߲���0.11 ��ֹ�߲���0.33 �ױ߲���1.0


	Screen.AddScanLineByEdgeGradient(1.0, 3, 1.0, 1.0, 1.0 / 3.0, 1.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(4.0, 1, 2.0, 4.0, 3.0 / 1.0, 1.0 / 1.0);
	
	
	//
	float fBOffsetX = 7;
	//Bͼ��
	Screen.AddScanLineByEdgeGradient(1.0, 1, fBOffsetX + 2.0, fBOffsetX + 2.0, -(2.0 / 2.0), 2.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(2.0, 1, fBOffsetX + 1.0, fBOffsetX + 4.0, -(2.0 / 2.0), 0);
	Screen.AddScanLineByEdgeGradient(3.0, 1, fBOffsetX + 0.0, fBOffsetX + 4.0, 2.0 / 2.0, 0);
	Screen.AddScanLineByEdgeGradient(4.0, 1, fBOffsetX + 1.0, fBOffsetX + 4.0, 3.0 / 1.0, 0);
	Screen.Clear();
	DefineLangVarInt(ȥ�׺������ε�B1, 4);
	DefineLangVarInt(ȥ�׺������θ�H1, 4);
	DefineLangVarInt(�����α���mu1, 2);
	DefineLangVarInt(Aͼ�������޷�ȥ��ͼ�εĵ�B2, 1);
	DefineLangVarInt(Aͼ�������޷�ȥ��ͼ�εĸ�H2, 3);
	DefineLangVarInt(Aͼ�������޷�ȥ��ͼ�εĵ�B3, 1);
	DefineLangVarInt(Aͼ�������޷�ȥ��ͼ�εĸ�H3, 3);
	DefineLangVarInt(һС������S3, 1);

	DefineLangVarInt(ȥ�׺�������޷�ȥ����B�߳�A1, 4);
	DefineLangVarInt(B����հ�ͼ�ε�һB4, 2);
	DefineLangVarInt(B����հ�ͼ�θ�һH4, 2);
	DefineLangVarInt(B����հ�ͼ�ε׶�B5, 2);
	DefineLangVarInt(B����հ�ͼ�θ߶�H5, 1);
	DefineLangVarInt(B������հ�ͼ���ϵ�һUB1, 2);
	DefineLangVarInt(B����հ�ͼ���µ�һXH1, 1);
	DefineLangVarInt(B����հ�ͼ�ε׶�B7, 3);
	DefineLangVarInt(B����հ�ͼ�θ߶�H7, 1);

	DefineLangVarInt(B����հ�ͼ���¸�һH6, 1);

	ColPrintf(PrintfCol::����, Lang("P27��һ������ ȥ�׷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ����ABͼ�ε������һС��������1cm^2�߳���1cm��"));
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(ȥ�׺�������޷�ȥ����A���S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ȥ�׺�������޷�ȥ����A���S1 ȥ�׺�������޷�ȥ����A���S1=ȥ�׺������ε�B1*ȥ�׺������θ�H1/�����α���mu1"));
	ȥ�׺�������޷�ȥ����A���S1 = ȥ�׺������ε�B1 * ȥ�׺������θ�H1 / �����α���mu1;
	ȥ�׺�������޷�ȥ����A���S1.PrintProcessLog(1);
	DefineLangVarInt(A�޷�ȥ���ĵĿհ����S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����A�޷�ȥ���ĵĿհ����S2 A�޷�ȥ���ĵĿհ����S2=(Aͼ�������޷�ȥ��ͼ�εĵ�B2*Aͼ�������޷�ȥ��ͼ�εĸ�H2/�����α���mu1)+(Aͼ�������޷�ȥ��ͼ�εĵ�B3*Aͼ�������޷�ȥ��ͼ�εĸ�H3/�����α���mu1)+һС������S3"));
	A�޷�ȥ���ĵĿհ����S2 = (Aͼ�������޷�ȥ��ͼ�εĵ�B2 * Aͼ�������޷�ȥ��ͼ�εĸ�H2 / �����α���mu1) + (Aͼ�������޷�ȥ��ͼ�εĵ�B3 * Aͼ�������޷�ȥ��ͼ�εĸ�H3 / �����α���mu1) + һС������S3;
	A�޷�ȥ���ĵĿհ����S2.PrintProcessLog(2);
	DefineLangVarInt(ȥ�׺�������޷�ȥ����B���S4, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ȥ�׺�������޷�ȥ����B���S4 ȥ�׺�������޷�ȥ����B���S4=ȥ�׺�������޷�ȥ����B�߳�A1*ȥȥ�׺�������޷�ȥ����B�߳�A1"));
	ȥ�׺�������޷�ȥ����B���S4 = ȥ�׺�������޷�ȥ����B�߳�A1 * ȥ�׺�������޷�ȥ����B���S4;
	ȥ�׺�������޷�ȥ����B���S4.PrintProcessLog(3);
	DefineLangVarInt(B�޷�ȥ���ĵ�����հ����S5, 0);
	ColPrintf(PrintfCol::����, Lang("4.����B�޷�ȥ���ĵ�����հ����S5 B�޷�ȥ���ĵ�����հ����S5=(B����հ�ͼ�ε�һB4*B����հ�ͼ�θ�һH4)/�����α���mu1+(B����հ�ͼ�ε׶�B5*B����հ�ͼ�θ߶�H5)/�����α���mu1"));
	B�޷�ȥ���ĵ�����հ����S5 = (B����հ�ͼ�ε�һB4 * B����հ�ͼ�θ�һH4) / �����α���mu1 - (B����հ�ͼ�ε׶�B5 * B����հ�ͼ�θ߶�H5) / �����α���mu1;
	B�޷�ȥ���ĵ�����հ����S5.PrintProcessLog(4);
	DefineLangVarInt(B�޷�ȥ���ĵ�������հ����S5, 0);
	ColPrintf(PrintfCol::����, Lang("5.����B�޷�ȥ���ĵ�������հ����S5 B�޷�ȥ���ĵ�����հ����S5=(B������հ�ͼ���ϵ�һUB1+B����հ�ͼ���µ�һXH1)*B����հ�ͼ���¸�һH6/�����α���mu1+(B����հ�ͼ�ε׶�B7*B����հ�ͼ�θ߶�H7)/�����α���mu1"));
	B�޷�ȥ���ĵ�������հ����S5 = (B������հ�ͼ���ϵ�һUB1 + B����հ�ͼ���µ�һXH1) * B����հ�ͼ���¸�һH6 / �����α���mu1 + (B����հ�ͼ�ε׶�B7 * B����հ�ͼ�θ߶�H7) / �����α���mu1;
	B�޷�ȥ���ĵ�������հ����S5.PrintProcessLog(5);
}
void P27_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P27 case grid point method","P27��һ ��㷨"},
		{"Title: Calculate the area of AB shape as shown in the figure",
		"��Ŀ����ͼ��ʾ����ABͼ�ε������һС��������1cm��"},
		{"1. Calculate the area S of figure A, which is equal to the number of internal grid points m+(the number of boundary grid points n/Half of the area is a multiple of the entire grid, mu1) minus the edge length n of the small grid",
		"1.����Aͼ�ε����S1 Aͼ�ε����S1=A�ڲ��ĸ����m1+(A�߽�ĸ����n1/��������ռ����ı���mu1)-С���ӵ����n3"},
		{"2. Calculate the area S2 of the B shape. The area S2 of the B shape is equal to the number of grid points m2 inside B+(the number of grid points n2/Half of the area is a multiple of the entire grid, mu1\nat the B boundary) - the side length n4 of the small grid",
		"2.����Bͼ�ε����S2 Bͼ�ε����S2=B�ڲ��ĸ����m2+(B�߽�ĸ����n2/��������ռ����ı���mu1)-С���ӵ����n3"},
		{"Answer: The area S1 of figure A is% dcm, and the area S2 of figure B is% dcm",
		"��Aͼ�ε����S1��%dcm��Bͼ�ε����S2��%dcm"},
		//������
		{"TheNumberOfLatticePointsM1InsideA","A�ڲ��ĸ����m1"},
		{"TheNumberOfLatticePointsM2InsideB","B�ڲ��ĸ����m2"},
		{"TheNumberOfLatticePointsN1OnTheBoundaryOfA","A�߽�ĸ����n1"},
		{"TheNumberOfLatticePointsN2OnTheBBoundary","B�߽�ĸ����n2"},
		{"TheSideLengthN3OfTheSmallGrid","С���ӵ����n3"},
		{"TheAreaS1OfFigureA","Aͼ�ε����S1"},
		{"TheAreaS2OfTheBShape","Bͼ�ε����S2"},
		{"HalfOfTheAreaIsAmultipleOfTheEntireGridMu1","��������ռ����ı���mu1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<13, 6, 9, 3> Screen;
	//ScanningLine<13, 6, 18, 6> Screen;
	//ScanningLine<13, 6, 12, 4> Screen;
	//ScanningLine<13, 6, 18, 6> Screen;
	//��1�� ��ʼ�߲���-0.5,��ֹ�߲���0.13
	//Screen.AddScanLine(0.0, 3.0, 3.0);
	//Screen.AddScanLine(0.34, 3.0-0.5, 3.0+0.13);
	//Screen.AddScanLine(0.67, 3.0-0.5-0.5, 3.0+ 0.13 + 0.13);
	Screen.AddScanLineByEdgeGradient(0.0, 2.0, 3.0, 3.0, -(3.0 / 2.0), 2.0 / 5.0);
	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 0.0, 3.8, 1.0 / 2.0, 2.0 / 5.0);
	Screen.AddScanLineByEdgeGradient(4.0, 1.0, 1.0, 4.6, 4.0 / 1.0, 2.0 / 5.0);
	/*//��2�� ��ʼ�߲���-0.5,��ֹ�߲���0.13
	Screen.AddScanLine(1.0, 1.5, 3.26);
	Screen.AddScanLine(1.34, 1.5 - 0.5, 3.26 + 0.13);
	Screen.AddScanLine(1.67, 1.5 - 0.5 - 0.5, 3.26 + 0.13 + 0.13);

	//��3�� ��ʼ�߲���0.33,��ֹ�߲���0.13
	Screen.AddScanLine(2.0, 0, 3.52);
	Screen.AddScanLine(2.34, 0 + 0.16, 3.52 + 0.13);
	Screen.AddScanLine(2.67, 0 + 0.16 + 0.16, 3.52 + 0.13 + 0.13);

	//��4�� ��ʼ�߲���0.33,��ֹ�߲���0.13
	Screen.AddScanLine(3.0, 0.32, 3.78);
	Screen.AddScanLine(3.34, 0.32 + 0.16, 3.78 + 0.13);
	Screen.AddScanLine(3.67, 0.32 + 0.16 + 0.16, 3.78 + 0.13 + 0.13);

	//��5�� ��ʼ�߲���0.33,��ֹ�߲���0.13
	Screen.AddScanLine(4.0, 0.64, 4.04);
	Screen.AddScanLine(4.34, 0.64 + 1.2, 4.04 + 0.13);
	Screen.AddScanLine(4.67, 0.64 + 1.2 + 1.2, 4.04 + 0.13 + 0.13);*/


	float fBOffsetX = 5;
	//��1�� ��ʼ�߲���-0.33,��ֹ�߲���0.66
	/*Screen.AddScanLine(0.0, fBOffsetX + 1.0, fBOffsetX + 1.0);
	Screen.AddScanLine(0.34, fBOffsetX+1.0 - 0.33, fBOffsetX+1.0 + 0.66);
	Screen.AddScanLine(0.67, fBOffsetX+1.0 - 0.33 - 0.33, fBOffsetX+1.0 + 0.66 + 0.66);

	//��2�� ��ʼ�߲���0,��ֹ�߲���0.66
	Screen.AddScanLine(1.0, fBOffsetX + 0.0, fBOffsetX + 2.32);
	Screen.AddScanLine(1.34, fBOffsetX + 0.0, fBOffsetX + 2.32 + 0.66);
	Screen.AddScanLine(1.67, fBOffsetX + 0.0 , fBOffsetX + 2.32 + 0.66 + 0.66);

	//��3�� ��ʼ�߲���0,��ֹ�߲���0.16
	Screen.AddScanLine(2.0, fBOffsetX + 0.0, fBOffsetX + 3.64);
	Screen.AddScanLine(2.34, fBOffsetX + 0.0, fBOffsetX + 3.64 - 0.16);
	Screen.AddScanLine(2.67, fBOffsetX + 0.0, fBOffsetX + 3.64 - 0.16 - 0.16);

	//��4�� ��ʼ�߲���0,��ֹ�߲���0.16
	Screen.AddScanLine(3.0, fBOffsetX + 0.0, fBOffsetX + 3.32);
	Screen.AddScanLine(3.34, fBOffsetX + 0.0+0.33, fBOffsetX + 3.32 - 0.16);
	Screen.AddScanLine(3.67, fBOffsetX + 0.0 + 0.33+0.33, fBOffsetX + 3.32 - 0.16 - 0.16);

	//��5�� ��ʼ�߲���0,��ֹ�߲���0.16
	Screen.AddScanLine(4.0, fBOffsetX + 0.66, fBOffsetX + 3.0);
	Screen.AddScanLine(4.34, fBOffsetX + 0.66 + 0.33, fBOffsetX + 3.0 - 1.5);
	Screen.AddScanLine(4.67, fBOffsetX + 0.66 + 0.33 + 0.33, fBOffsetX + 3.0 - 1.5 -1.5);*/
	Screen.AddScanLineByEdgeGradient(0.0, 1.0, fBOffsetX+1.0, fBOffsetX+1.0, -(1.0 / 1.0), 2.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(1.0, 1.0, fBOffsetX + 0.0, fBOffsetX + 4.0, 0, 2.0 / 1.0);
	Screen.AddScanLineByEdgeGradient(2.0, 1.0, fBOffsetX + 0.0, fBOffsetX + 6.0, 0, -(1.0 / 2.0));
	Screen.AddScanLineByEdgeGradient(3.0, 1.0, fBOffsetX + 0.0, fBOffsetX + 5.5, 1.0/1.0, -(1.0 / 2.0));
	Screen.AddScanLineByEdgeGradient(4.0, 1.0, fBOffsetX + 1.0, fBOffsetX + 5.0, 1.0 / 1.0, -(3.0 / 1.0));
	Screen.Clear();

	DefineLangVarInt(A�ڲ��ĸ����m1, 4);
	DefineLangVarInt(B�ڲ��ĸ����m2, 7);
	DefineLangVarInt(A�߽�ĸ����n1, 12);
	DefineLangVarInt(B�߽�ĸ����n2, 8);
	DefineLangVarInt(С���ӵ����n3, 1);
	DefineLangVarInt(��������ռ����ı���mu1,2)
	ColPrintf(PrintfCol::����, Lang("P27��һ ��㷨"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ����ABͼ�ε������һС��������1cm��"));
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(Aͼ�ε����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����Aͼ�ε����S1 Aͼ�ε����S1=A�ڲ��ĸ����m1+(A�߽�ĸ����n1/��������ռ����ı���mu1)-С���ӵ����n3"));
	Aͼ�ε����S1 = A�ڲ��ĸ����m1 + (A�߽�ĸ����n1 / ��������ռ����ı���mu1) - С���ӵ����n3;
	Aͼ�ε����S1.PrintProcessLog(1);DefineLangVarInt(Bͼ�ε����S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����Bͼ�ε����S2 Bͼ�ε����S2=B�ڲ��ĸ����m2+(B�߽�ĸ����n2/��������ռ����ı���mu1)-С���ӵ����n3"));
	Bͼ�ε����S2 = B�ڲ��ĸ����m2 + (B�߽�ĸ����n2 / ��������ռ����ı���mu1) - С���ӵ����n3;
	Bͼ�ε����S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("��Aͼ�ε����S1��%dcm��Bͼ�ε����S2��%dcm"), (int)Aͼ�ε����S1, (int)Bͼ�ε����S2);
}
void P27()
{
	P27_1();
	ColPrintf(PrintfCol::����, "");
	P27_2();
	ColPrintf(PrintfCol::����, "");
	P27_3();
	ColPrintf(PrintfCol::����, "");
}
void P27_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P27();
	Lang.SetCurLanguage(LanguageLib::English);
	P27();
	ColPrintf(PrintfCol::����, "");

}