#pragma once

void P30_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P30 cases of first-class area method","P30��һ �������"},
		{"Title: As shown in the figure, there are two identical right angled triangles overlapping. Calculate the shadow area",
		"��Ŀ����ͼ��ʾ��������ȫ��ͬ��ֱ���������غϣ�������Ӱ���"},
		{"1. Calculate the upper base A1 of the lower trapezoid, which is equal to the lower base B1 of the lower trapezoid minus the height H1 of the upper trapezoid",
		"1.�������������ϵ�A1 ���������ϵ�A1=���������µ�B1-�������θ�H1"},
		{"2. Calculate the trapezoidal area S1=(upper base A1 of the lower trapezoid+lower base B1 of the lower trapezoid) * height H2 of the lower trapezoid/multiple N1 of the rectangular area",
		"2.�����������S1 �������S1=(���������ϵ�A1+���������µ�B1)*�������θ�H2/���ڳ������������N1"},
		{"Answer: The shaded area is% dcm ^ 2",
		"����Ӱ���������%dcm^2"},
		//������
		{"BottomOfTrapezoidB1","���������µ�B1"},
		{"AboveTrapezoidalHeightH1","�������θ�H1"},
		{"LowerTrapezoidalHeightH2","�������θ�H2"},
		{"ForTheAreaMultipleN1OfARectangle","���ڳ������������N1"},
		{"BottomTrapezoidalTopA1","���������ϵ�A1"},
		{"TrapezoidalAreaS1","�������S1"},
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

	Screen.AddText(PrintfCol::�����ע, 3.7, 2.3, "D");
	Screen.AddText(PrintfCol::�����ע, 4.3, 1.5, "40");
	Screen.AddText(PrintfCol::�����ע, 4.7, 1.7, "30");
	Screen.AddText(PrintfCol::�����ע, 4.3, 4.3, "C");
	Screen.AddText(PrintfCol::�����ע, 5.5, 1.8, "A");
	Screen.AddText(PrintfCol::�����ע, 5.3, 5.3, "B");
	//Screen.AddScanLineByEdgeGradient(4.0, 1.0, 0.0, 4.0, 4.0 / 0.1, -(4.0 / 0.1), '*');


	DefineLangVarInt(���������µ�B1, 120);
	DefineLangVarInt(�������θ�H1, 40);
	DefineLangVarInt(�������θ�H2, 30);
	DefineLangVarInt(���ڳ������������N1, 2);
	ColPrintf(PrintfCol::����, Lang("P30��һ �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ��������ȫ��ͬ��ֱ���������غϣ�������Ӱ���"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(���������ϵ�A1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������������ϵ�A1 ���������ϵ�A1=���������µ�B1-�������θ�H1"));
	���������ϵ�A1 = ���������µ�B1 - �������θ�H1;
	���������ϵ�A1.PrintProcessLog(1);
	DefineLangVarInt(�������S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����������S1 �������S1=(���������ϵ�A1+���������µ�B1)*�������θ�H2/���ڳ������������N1"));
	�������S1 = (���������ϵ�A1 + ���������µ�B1) * �������θ�H2 / ���ڳ������������N1;
	�������S1.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("����Ӱ���������%dcm^2"), (int)�������S1);
}
void P30_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P30 cases of second-class area method","P30���� �������"},
		{"Question: The side length of the left square is 5cm, and the area of the upper triangle is 5cm ^ 2 larger than that of the right triangle. Find the area of the larger triangle below",
		"��Ŀ����������εı߳���5cm�����������ε�������ұ������δ�5cm^2����������Ӱ���"},
		{"1. Calculate the area of the left square S1. The area of the left square S1 is equal to the side length A1 of the left square multiplied by the side length A1 of the left square",
		"1.����������������S1 ������������S1=��������α߳�A1*��������α߳�A1"},
		{"2. Calculate the area of the large triangle S2. The area of the large triangle S2 is equal to the area of the left square S1 plus the area S3 larger than the area on the right",
		"2.��������������S2 �����������S2=������������S1+������ұߴ�����S3"},
		{"Answer: The area of the large triangle below is% dcm ^ 2",
		"������������������%dcm^2"},
		//������
		{"LeftSquareWithSideLengthA1","��������α߳�A1"},
		{"TheLargerAreaS3AboveThanOnTheRight","������ұߴ�����S3"},
		{"LeftSquareAreaS1","������������S1"},
		{"LargeTriangleAreaS2","�����������S2"},
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

	Screen.AddText(PrintfCol::�����ע, 0.7, 0.7, "A");
	Screen.AddText(PrintfCol::�����ע, 4.7, 0.7, "B");
	Screen.AddText(PrintfCol::�����ע, 5.3, 5.3, "C");
	Screen.AddText(PrintfCol::�����ע, 0.7, 5.3, "D");
	Screen.AddText(PrintfCol::�����ע, 2.7, 5.3, "F");
	Screen.AddText(PrintfCol::�����ע, 5.3, 8.7, "E");
	DefineLangVarInt(��������α߳�A1, 5);
	DefineLangVarInt(������ұߴ�����S3, 5);
	ColPrintf(PrintfCol::����, Lang("P30���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����������εı߳���5cm�����������ε�������ұ������δ�5cm^2����������Ӱ���"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(������������S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����������������S1 ������������S1=��������α߳�A1*��������α߳�A1"));
	������������S1 = ��������α߳�A1 * ��������α߳�A1;
	������������S1.PrintProcessLog(1);
	DefineLangVarInt(�����������S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������������S2 �����������S2=������������S1+������ұߴ�����S3"));
	�����������S2 = ������������S1 + ������ұߴ�����S3;
	�����������S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("������������������%dcm^2"), (int)�����������S2);
}
void P30_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P30 cases of third class area method","P30���� �������"},
		{"Question: The length of the base of a parallelogram is 10cm, the side length of the right angled triangle in\nthe middle is 8cm, and the shaded area is 10cm larger than the triangle above. Find the area of the parallelogram",
		"��Ŀ��ƽ���ı��εױ߳���10cm���м�ֱ�������ε�ֱ�Ǳ߳�8cm����Ӱ�������������������δ�10cm����ƽ���ı������"},
		{"1. Calculate the area S1 of a right angled triangle. The area S1 of a right angled triangle is equal to the length A1\nof the base of the parallelogram multiplied by the right angled side A2 of the middle right angled\ntriangle divided by the area multiple N1 of the square",
		"1.����ֱ�����������S1 ֱ�����������S1=ƽ���ı��εױ߳�A1*�м�ֱ�������ε�ֱ�Ǳ�A2/���������ε��������N1"},
		{"2. Calculate the area of the parallelogram S2. The area of the parallelogram S2 is equal to the area of the right triangle S1 plus the area of the shaded area S3",
		"2.����ƽ���ı������S2 ƽ���ı������S2=ֱ�����������S1+��Ӱ���ִ�����S3"},
		{"Answer: The area of a parallelogram is% dcm ^ 2",
		"��ƽ���ı��������%dcm^2"},
		//������
		{"ParallelogramBaseLengthA1","ƽ���ı��εױ߳�A1"},
		{"TheRightAngledSideA2OfTheMiddleRightAngledTriangle","�м�ֱ�������ε�ֱ�Ǳ�A2"},
		{"ForTheAreaMultipleN1OfASquare","���������ε��������N1"},
		{"LargeShadedAreaS3","��Ӱ���ִ�����S3"},
		{"SquareTriangleAreaS1","ֱ�����������S1"},
		{"AreaOfParallelogramS2","ƽ���ı������S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<7, 6, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 1.0, 5, 5, -(1.0 / 1.0), 0, ' ');
	
	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 2, 6, -(1.0 / 2.0), -(1.0/2.0), '0');

	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 4, 5, -(3.0/3.0), 0, ' ');

	Screen.AddText(PrintfCol::�����ע, 1.7, 1.7, "A");
	Screen.AddText(PrintfCol::�����ע, 4.3, 0.7, "B");
	Screen.AddText(PrintfCol::�����ע,4.3, 5.3, "C");
	Screen.AddText(PrintfCol::�����ע, 1.7, 6.3, "D");
	Screen.AddText(PrintfCol::�����ע, 0.7, 5.3, "E");
	Screen.AddText(PrintfCol::�����ע, 1.7, 4.3, "F");
	Screen.AddText(PrintfCol::�����ע, 1.7, 5.3, "G");
	ScanLenHorizontalLine(Screen, 2.0, 4.0, 1.0, 0.3);
	ScanLenHorizontalLine(Screen, 4.0, 1.0, 4.0, 0.3);
	DefineLangVarInt(ƽ���ı��εױ߳�A1, 10);
	DefineLangVarInt(�м�ֱ�������ε�ֱ�Ǳ�A2, 8);
	DefineLangVarInt(���������ε��������N1, 2);
	DefineLangVarInt(��Ӱ���ִ�����S3, 10);
	ColPrintf(PrintfCol::����, Lang("P30���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ƽ���ı��εױ߳���10cm���м�ֱ�������ε�ֱ�Ǳ߳�8cm����Ӱ�������������������δ�10cm����ƽ���ı������"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(ֱ�����������S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ֱ�����������S1 ֱ�����������S1=ƽ���ı��εױ߳�A1*�м�ֱ�������ε�ֱ�Ǳ�A2/���������ε��������N1"));
	ֱ�����������S1=ƽ���ı��εױ߳�A1* �м�ֱ�������ε�ֱ�Ǳ�A2 / ���������ε��������N1;
	ֱ�����������S1.PrintProcessLog(1);
	DefineLangVarInt(ƽ���ı������S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ƽ���ı������S2 ƽ���ı������S2=ֱ�����������S1+��Ӱ���ִ�����S3"));
	ƽ���ı������S2 = ֱ�����������S1 + ��Ӱ���ִ�����S3;
	ƽ���ı������S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("��ƽ���ı��������%dcm^2"), (int)ƽ���ı������S2);
}
void P30()
{
	P30_1();
	ColPrintf(PrintfCol::����, "");
	P30_2();
	ColPrintf(PrintfCol::����, "");
	P30_3();
	ColPrintf(PrintfCol::����, "");
}
void P30_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P30();
	Lang.SetCurLanguage(LanguageLib::English);
	P30();
	ColPrintf(PrintfCol::����, "");

}