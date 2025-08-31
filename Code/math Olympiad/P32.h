#pragma once
void P32_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P32 Example 1 Graphic Splicing","P32��һ ͼ��ƴ��"},
		{"Title: Combine 5 squares with the same area into a concave shape, where the circumference of\nthe concave shape is 5 times less than that of the small square by 16cm. Calculate the area of the concave shape",
		"��Ŀ����5�������ͬ��������ƴ��һ�������Σ������ε��ܳ���С�����ε�5����16cm�����������"},
		{"1. Calculate the side length A1 of a square. The side length A1 of a square is equal to the circumference\nloss length L1 of a concave shape divided by (the number of missing sides N1 when five squares are joined\ntogether multiplied by the number of missing sides N1 at each point)",
		"1.���������α߳�A1 �����α߳�A1=�������ܳ���ʧ����L1/(���������ƴ����ʧ������N1*��ʧÿ������N1)"},
		{"2. Calculate the square area S1. Square area S1=square side length A1 * square side length A1",
		"2.�������������S1 ���������S1=�����α߳�A1*�����α߳�A1"},
		{"3. Calculate the concave area S2. Concave area S1=square area S1 * total number of squares N1",
		"3.���㰼�������S2 ���������S2=���������S1*������������N1"},
		{"Answer: The concave area is% dcm ^ 2",
		"�𣺰����������%dcm^2"},
		//������
		{"ConcaveShapedPerimeterLossLengthL1","�������ܳ���ʧ����L1"},
		{"TheNumberOfMissingEdgesN1InTheSplicingOfFiveSquares","���������ƴ����ʧ������N1"},
		{"LossOfN1EdgesPerLocation","��ʧÿ������N1"},
		{"ThereAreATotalOfN1Squares","������������N1"},
		{"SquareSideLengthA1","�����α߳�A1"},
		{"SquareAreaS1","���������S1"},
		{"ConcaveAreaS2","���������S2"},
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
	DefineLangVarInt(�������ܳ���ʧ����L1, 16);
	DefineLangVarInt(���������ƴ����ʧ������N1, 4);
	DefineLangVarInt(��ʧÿ������N1, 2);
	DefineLangVarInt(������������N1, 4);
	ColPrintf(PrintfCol::����, Lang("P32��һ ͼ��ƴ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����5�������ͬ��������ƴ��һ�������Σ������ε��ܳ���С�����ε�5����16cm�����������"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(�����α߳�A1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���������α߳�A1 �����α߳�A1=�������ܳ���ʧ����L1/(���������ƴ����ʧ������N1*��ʧÿ������N1)"));
	�����α߳�A1 = �������ܳ���ʧ����L1 / (���������ƴ����ʧ������N1 * ��ʧÿ������N1);
	�����α߳�A1.PrintProcessLog(1);
	DefineLangVarInt(���������S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������������S1 ���������S1=�����α߳�A1*�����α߳�A1"));
	���������S1 = �����α߳�A1 * �����α߳�A1;
	���������S1.PrintProcessLog(2);
	DefineLangVarInt(���������S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㰼�������S2 ���������S2=���������S1*������������N1"));
	���������S2 = ���������S1 * ������������N1;
	���������S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("�𣺰����������%dcm^2"), (int)���������S2);
}
void P32_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P32 Example 2 Graphic Splicing","P32���� ͼ��ƴ��"},
		{"Question: Place a rectangle with a width of 2cm and a length of 3cm as shown in the picture. What is the circumference when reaching the 5th layer?",
		"��Ŀ:������2cm������3cm�ĳ�������ͼ�ڷţ�����5��ʱ�ܳ��Ƕ��٣�"},
		{"1. Calculate the perimeter L1 of a rectangle. The perimeter L1 of a rectangle is equal to (rectangle length A1+rectangle width B1) multiplied by the logarithm of its length and width N1",
		"1.���㳤�����ܳ�L1 �������ܳ�L1=(�����γ�A1+�����ο�B1)*�������N1"},
		{"2. Calculate the perimeter L2 of the second layer. The perimeter L2 of the second layer is equal to the perimeter L1 of the rectangle (the number of rectangles in the two layers N1 minus the number of rectangles in the second layer N1)",
		"2.����ڶ���ʱ�ܳ�L2 �ڶ���ʱ�ܳ�L2=�������ܳ�L1*(���㳤������N1-�ڶ���ʱ��ȥ��������N2)"},
		{"3. Calculate the perimeter L3 of the third layer. The perimeter L3 of the third layer is equal to the perimeter L1 of the rectangle (the number of rectangles in the third layer N3 minus the number of rectangles in the third layer N4)",
		"3.���������ʱ�ܳ�L3 ������ʱ�ܳ�L3=�������ܳ�L1*(���㳤������N3-������ʱ��ȥ��������N4)"},
		{"4. Calculate the circumference L4 of the fifth layer based on the pattern of the first two layers. The circumference L4 of the fifth layer is calculated as (L2 of the second layer - L3 of the third layer) * N5 of the fifth layer",
		"4.ͨ��ǰ����Ĺ��ɼ�������ʱ���ܳ�L4 �����ʱ���ܳ�L4 = (������ʱ�ܳ�L3 - �ڶ���ʱ�ܳ�L2) * ��������N5;"},
		{"Answer: The circumference of the 5th layer is% dcm",
		"�𣺵�5��ʱ�ܳ���%dcm"},
		//������
		{"RectangularLength A1","�����γ�A1"},
		{"RectangularWidthB1","�����ο�B1"},
		{"LogarithmsOfLengthAndWidthN1","�������N1"},
		{"NumberOfRectanglesInTwoLayersN1","���㳤������N1"},
		{"OnTheSecondLevelDiscardTheNumberN2OfRectangles","�ڶ���ʱ��ȥ��������N2"},
		{"ThreeLayerRectangleNumberN3","���㳤������N3"},
		{"OnTheThirdLayerDiscardTheNumberN4OfRectangles","������ʱ��ȥ��������N4"},
		{"TheFifthLayerHasN5Layers","��������N5"},
		{"RectangularPerimeterL1","�������ܳ�L1"},
		{"SecondLayerPerimeterL2","�ڶ���ʱ�ܳ�L2"},
		{"ThirdLayerPerimeterL3","������ʱ�ܳ�L3"},
		{"PerimeterL4AtTheFifthLevel","�����ʱ���ܳ�L4"},
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
	DefineLangVarInt(�����γ�A1, 3);
	DefineLangVarInt(�����ο�B1, 2);
	DefineLangVarInt(�������N1, 2);
	DefineLangVarInt(���㳤������N1, 3);
	DefineLangVarInt(�ڶ���ʱ��ȥ��������N2, 1);
	DefineLangVarInt(���㳤������N3, 6);
	DefineLangVarInt(������ʱ��ȥ��������N4, 3);
	DefineLangVarInt(��������N5, 5);
	ColPrintf(PrintfCol::����, Lang("P32���� ͼ��ƴ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:������2cm������3cm�ĳ�������ͼ�ڷţ�����5��ʱ�ܳ��Ƕ��٣�"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(�������ܳ�L1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳤�����ܳ�L1 �������ܳ�L1=(�����γ�A1+�����ο�B1)*�������N1"));
	�������ܳ�L1 = (�����γ�A1 + �����ο�B1) * �������N1;
	�������ܳ�L1.PrintProcessLog(1);
	DefineLangVarInt(�ڶ���ʱ�ܳ�L2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ڶ���ʱ�ܳ�L2 �ڶ���ʱ�ܳ�L2=�������ܳ�L1*(���㳤������N1-�ڶ���ʱ��ȥ��������N2)"));
	�ڶ���ʱ�ܳ�L2 = �������ܳ�L1 * (���㳤������N1 - �ڶ���ʱ��ȥ��������N2);
	�ڶ���ʱ�ܳ�L2.PrintProcessLog(2);
	DefineLangVarInt(������ʱ�ܳ�L3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������ʱ�ܳ�L3 ������ʱ�ܳ�L3=�������ܳ�L1*(���㳤������N3-������ʱ��ȥ��������N4)"));
	������ʱ�ܳ�L3 = �������ܳ�L1 * (���㳤������N3 - ������ʱ��ȥ��������N4);
	������ʱ�ܳ�L3.PrintProcessLog(3);
	DefineLangVarInt(�����ʱ���ܳ�L4, 0);
	ColPrintf(PrintfCol::����, Lang("4.ͨ��ǰ����Ĺ��ɼ�������ʱ���ܳ�L4 �����ʱ���ܳ�L4 = (������ʱ�ܳ�L3 - �ڶ���ʱ�ܳ�L2) * ��������N5"));
	�����ʱ���ܳ�L4 = (������ʱ�ܳ�L3 - �ڶ���ʱ�ܳ�L2) * ��������N5;
	�����ʱ���ܳ�L4.PrintProcessLog(4);
	ColPrintf(PrintfCol::���, Lang("�𣺵�5��ʱ�ܳ���%dcm"), (int)�����ʱ���ܳ�L4);
}
void P32()
{
	P32_1();
	ColPrintf(PrintfCol::����, "");
	P32_2();
	ColPrintf(PrintfCol::����, "");
}
void P32_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P32();
	Lang.SetCurLanguage(LanguageLib::English);
	P32();
	ColPrintf(PrintfCol::����, "");

}