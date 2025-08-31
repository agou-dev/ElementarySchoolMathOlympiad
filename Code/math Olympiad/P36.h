#pragma once
void P36_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P36 Example 1 Surface Area","P36��һ �����"},
		{"Title: Dig out a small square with a length of 10cm, a width of 2cm, and a height of 2cm from the top right corner of the shape, and calculate its surface area.",
		"��Ŀ����һ���ⳤΪ10cm��С�������У���ͼ�����Ͻ���ȥһ������10cm����Ϊ2cm����Ϊ2cm���������ı������"},
		{"1. Calculate the original square surface area S1. The original square surface area S1=square edge length L1 * square edge length L1 * number of square faces N1",
		"1.����ԭ�������α����S1 ԭ�������α����S1=�������ⳤL1*�������ⳤL1*����������N1"},
		{"2. Calculate and remove the surface area of the small rectangle S2. Removing the surface area of the small rectangle S2=rectangle height H1 * rectangle width B1",
		"2.����ȥ��С�����α����S2 ȥ��С�����α����S2=�����θ�H1*�����ο�B1*����N1"},
		{"3. Calculate the remaining small square surface area S3. The remaining small square surface area S3=the original square surface area S1 minus the small rectangular surface area S2",
		"3.����ʣ��С�����α����S3 ʣ��С�����α����S3=ԭ�������α����S1-ȥ��С�����α����S2"},
		//������
		{"SquareEdgeLengthL1","�������ⳤL1"},
		{"NumberOfSquareFacesN1","����������N1"},
		{"RectangularHeightH1","�����θ�H1"},
		{"RectangularWidthB1","�����ο�B1"},
		{"MagnificationN1","����N1"},
		{"OriginalSquareSurfaceAreaS1","ԭ�������α����S1"},
		{"RemoveTheSurfaceAreaS2OfTheAmallRectangle","ȥ��С�����α����S2"},
		{"RemainingSmallSquareSurfaceAreaS3","ʣ��С�����α����S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�������ⳤL1, 10);
	DefineLangVarInt(����������N1, 6);
	DefineLangVarInt(�����θ�H1, 2);
	DefineLangVarInt(�����ο�B1, 2);
	DefineLangVarInt(����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P36��һ �����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ���ⳤΪ10cm��С�������У���ͼ�����Ͻ���ȥһ������10cm����Ϊ2cm����Ϊ2cm���������ı������"));
	DefineLangVarInt(ԭ�������α����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ԭ�������α����S1 ԭ�������α����S1=�������ⳤL1*�������ⳤL1*����������N1"));
	ԭ�������α����S1 = �������ⳤL1 * �������ⳤL1 * ����������N1;
	ԭ�������α����S1.PrintProcessLog(1);
	DefineLangVarInt(ȥ��С�����α����S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ȥ��С�����α����S2 ȥ��С�����α����S2=�����θ�H1*�����ο�B1*����N1"));
	ȥ��С�����α����S2 = �����θ�H1 * �����ο�B1 * ����N1;
	ȥ��С�����α����S2.PrintProcessLog(2);
	DefineLangVarInt(ʣ��С�����α����S3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ʣ��С�����α����S3 ʣ��С�����α����S3=ԭ�������α����S1-ȥ��С�����α����S2"));
	ʣ��С�����α����S3 = ԭ�������α����S1 - ȥ��С�����α����S2;
	ʣ��С�����α����S3.PrintProcessLog(3);
}
void P36_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P36 Example 2 Surface Area","P36���� �����"},
		{"Question: What is the surface area of a cube with a length of 10cm, a width of 6cm, and a height of 5cm, with an edge length of 2cm removed from the bottom left corner?",
		"��Ŀ����һ����Ϊ10cm����Ϊ6cm����Ϊ5cm�д�����ȥ��һ���ⳤΪ2cm�������壬���ı�����Ƕ���?"},
		{"1. Calculate the reduced surface area. The reduced surface area is equal to (cube edge length L1 * cube edge length L1) * the number of reduced faces",
		"1.������ٵı����S1 ���ٵı����S1=(�������ⳤL1*�������ⳤL1)*���ٵ�����N1"},
		{"2. Calculate the increased surface area S2. The increased surface area S2=(cube edge length L1 * cube edge length L1) * the number of increased faces N1",
		"2.�������ӵı����S2 ���ӵı����S2=(�������ⳤL1*�������ⳤL1)*���ӵ�����N1"},
		{"3. Calculate the surface area of the rectangle S3. The surface area of the rectangle S3=(length A1 * width B1+length A1 * height H1+width B1 * height H1) * magnification N1",
		"3.���㳤���εı����S3 �����εı����S3=(��A1*��B1+��A1*��H1+��B1*��H1)*����N1"},
		{"4. Calculate the reduced surface area of the rectangle S4=the surface area of the rectangle S3+the increased surface area S2- the reduced surface area S1",
		"4.������ٺ󳤷��εı����S4 ���ٺ󳤷��εı����S4=�����εı����S3+���ӵı����S2-���ٵı����S1"},
		//������
		{"CubeEdgeLengthL1","�������ⳤL1"},
		{"ReducedNumberOfFacesN1","���ٵ�����N1"},
		{"IncreasedNumberOfFacesN1","���ӵ�����N1"},
		{"LongA1","��A1"},
		{"WidthB1","��B1"},
		{"HighH1","��H1"},
		{"MagnificationN1","����N1"},
		{"ReducedSurfaceAreaS1","���ٵı����S1"},
		{"IncreasedSurfaceAreaS2","���ӵı����S2"},
		{"RectangularAurfaceAreaS3","�����εı����S3"},
		{"ReduceTheSurfaceAreaOfTheRectangleS4","���ٺ󳤷��εı����S4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�������ⳤL1, 2);
	DefineLangVarInt(���ٵ�����N1, 3);
	DefineLangVarInt(���ӵ�����N1, 3);
	DefineLangVarInt(��A1, 10);
	DefineLangVarInt(��B1, 6);
	DefineLangVarInt(��H1, 5);
	DefineLangVarInt(����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P36���� �����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ���ⳤΪ10cm��С�������У���ͼ�����Ͻ���ȥһ������10cm����Ϊ2cm����Ϊ2cm���������ı������"));
	DefineLangVarInt(���ٵı����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ٵı����S1 ���ٵı����S1=(�������ⳤL1*�������ⳤL1)*���ٵ�����N1"));
	���ٵı����S1 = (�������ⳤL1 * �������ⳤL1) * ���ٵ�����N1;
	���ٵı����S1.PrintProcessLog(1);
	DefineLangVarInt(���ӵı����S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������ӵı����S2 ���ӵı����S2=(�������ⳤL1*�������ⳤL1)*���ӵ�����N1"));
	���ӵı����S2 = (�������ⳤL1 * �������ⳤL1) * ���ӵ�����N1;
	���ӵı����S2.PrintProcessLog(2);
	DefineLangVarInt(�����εı����S3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳤���εı����S3 �����εı����S3=(��A1*��B1+��A1*��H1+��B1*��H1)*����N1"));
	�����εı����S3 = (��A1 * ��B1 + ��A1 * ��H1 + ��B1 * ��H1) * ����N1;
	�����εı����S3.PrintProcessLog(3);
	DefineLangVarInt(���ٺ󳤷��εı����S4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ٺ󳤷��εı����S4 ���ٺ󳤷��εı����S4=�����εı����S3+���ӵı����S2-���ٵı����S1"));
	���ٺ󳤷��εı����S4 = �����εı����S3 + ���ӵı����S2 - ���ٵı����S1;
	���ٺ󳤷��εı����S4.PrintProcessLog(4);
}
void P36_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P36 Example 2 Surface Area","P36���� �����"},
		{"Title: Stack 19 small cubes with 3cm long edges (as shown in the top left figure below) and calculate their surface area",
		"��Ŀ����19���ⳤΪ3cm��С�����壬�ѵ���������ǰ����ͼ�ο���ͼ���������ı����"},
		{"1. Calculate the surface area S1 of the small cube above, where S1=the edge length L1 of the cube * the edge length L1 of the cube * the number of faces N1 of the cube when viewed from above",
		"1.��������С����������S1 ����С����������S1=��������ⳤL1*��������ⳤL1*�����濴�����������N1"},
		{"2. Calculate the surface area S2 of the left small cube. The surface area S2 of the left small cube is\nequal to the edge length L1 of the cube multiplied by the edge length L1 of the cube multiplied by\nthe number of faces N2 of the cube when viewed from the left",
		"2.��������С����������S2 ����С����������S2=��������ⳤL1*��������ⳤL1*�����濴�����������N2"},
		{"3. Calculate the surface area of the small cube in front S3=the edge length L1 of the cube * the edge length L1 of the cube * the number of faces N3 of the cube when viewed from the front",
		"3.����ǰ��С����������S3 ǰ��С����������S3=��������ⳤL1*��������ⳤL1*��ǰ�濴�����������N3"},
		{"4. Calculate the surface area S4. Surface area S4=surface area of the upper small cube S1+surface area of the left small cube S2+surface area of the front small cube S3",
		"4.��������S4 �����S4=����С����������S1+����С����������S2+ǰ��С����������S3"},
		//������
		{"TheEdgeLengthL1OfACube","��������ⳤL1"},
		{"TheNumberOfFacesN1OfACubeWhenViewedFromAbove","�����濴�����������N1"},
		{"TheNumberOfFacesN2OfACubeWhenViewedFromTheLeft","�����濴�����������N2"},
		{"TheNumberOfFacesN30fACubeWhenViewedFromTheFront","��ǰ�濴�����������N3"},
		{"TheSurfaceAreaS1OfTheSmallCube Above","����С����������S1"},
		{"LeftSmallCubeSurfaceAreaS2","����С����������S2"},
		{"FrontSmallCubeSurfaceAreaS3","ǰ��С����������S3"},
		{"SurfaceAreaS4","�����S4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��������ⳤL1, 3);
	DefineLangVarInt(�����濴�����������N1, 9);
	DefineLangVarInt(�����濴�����������N2, 8);
	DefineLangVarInt(��ǰ�濴�����������N3, 10);
	typedef ScanningLine<5, 5, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(1),float(1.5 )},{float(1.5 ),float(1.5 )}, };
	test.AddPolygon(ScanningLineT::Point(float(1.5), float(1)), Vex1, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex2 = { {float(1.5),float(1)},{float(1.5),float(1.5)},{float(2),float(1.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(2), float(1)), Vex2, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex3 = { {float(2),float(1)},{float(2),float(1.5)},{float(2.5),float(1.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(2.5), float(1)), Vex3, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex4 = { {float(1),float(1.5)},{float(1),float(2)},{float(1.5),float(2)}, };
	test.AddPolygon(ScanningLineT::Point(float(1.5), float(1.5)), Vex4, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex5 = { {float(1),float(2)},{float(1),float(2.5)},{float(1.5),float(2.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(1.5), float(2)), Vex5, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex6 = { {float(1.5),float(1.5)},{float(1.5),float(2)},{float(2),float(2)}, };
	test.AddPolygon(ScanningLineT::Point(float(2), float(1.5)), Vex6, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex7 = { {float(2),float(1.5)},{float(2),float(2.0)},{float(2.5),float(2)}, };
	test.AddPolygon(ScanningLineT::Point(float(2.5), float(1.5)), Vex7, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex8 = { {float(1.5),float(2)},{float(1.5),float(2.5)},{float(2),float(2.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(2), float(2)), Vex8, ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex9 = { {float(2),float(2)},{float(2),float(2.5)},{float(2.5),float(2.5)}, };
	test.AddPolygon(ScanningLineT::Point(float(2.5), float(2)), Vex9, ScanningLineT::FillMode::EdgeMode, '*');



	ColPrintf(PrintfCol::����, Lang("P36���� �����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����19���ⳤΪ3cm��С�����壬�ѵ���������ǰ����ͼ�ο���ͼ���������ı����"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Yellow);
	DefineLangVarInt(����С����������S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������С����������S1 ����С����������S1=��������ⳤL1*��������ⳤL1*�����濴�����������N1"));
	����С����������S1 = ��������ⳤL1 * ��������ⳤL1 * �����濴�����������N1;
	����С����������S1.PrintProcessLog(1);
	DefineLangVarInt(����С����������S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������С����������S2 ����С����������S2=��������ⳤL1*��������ⳤL1*�����濴�����������N2"));
	����С����������S2 = ��������ⳤL1 * ��������ⳤL1 * �����濴�����������N2;
	����С����������S2.PrintProcessLog(2);
	DefineLangVarInt(ǰ��С����������S3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ǰ��С����������S3 ǰ��С����������S3=��������ⳤL1*��������ⳤL1*��ǰ�濴�����������N3"));
	ǰ��С����������S3 = ��������ⳤL1 * ��������ⳤL1 * ��ǰ�濴�����������N3;
	ǰ��С����������S3.PrintProcessLog(3);
	DefineLangVarInt(�����S4, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������S4 �����S4=����С����������S1+����С����������S2+ǰ��С����������S3"));
	�����S4 = ����С����������S1 + ����С����������S2 + ǰ��С����������S3;
	�����S4.PrintProcessLog(4);
}
void P36()
{
	P36_1();
	ColPrintf(PrintfCol::����, "");
	P36_2();
	ColPrintf(PrintfCol::����, "");
	P36_3();
	ColPrintf(PrintfCol::����, "");
}
void P36_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P36();
	Lang.SetCurLanguage(LanguageLib::English);
	P36();
	ColPrintf(PrintfCol::����, "");

}