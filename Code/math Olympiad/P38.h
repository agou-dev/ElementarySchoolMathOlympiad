#pragma once
void P38_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 Case One Cut and Supplement Method","P38��һ ���"},
		{"Title: Calculate the shaded area as shown in the figure, where the side length of the large square is 5 and the side length of the small square is 3",
		"��Ŀ����ͼ��ʾ������Ӱ�������3"},
		{"1. Calculate the shaded area S1. The shaded area S1 is equal to the length A1 of the rectangle without blank spaces multiplied by the width B1 of the rectangle",
		"1.������Ӱ�������S1 ��Ӱ�������S1=�����β��ӿհ׵ĳ�A1*�����ο�B1"},
		
		//������
		{"Arectanglewithoutblankspace,lengthA1","�����β��ӿհ׵ĳ�A1"},
		{"RectangularwidthB1","�����ο�B1"},
		{"ShadowareaS1","��Ӱ�������S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddTriangle(ScanningLineT::Point(1, 5), ScanningLineT::Point(1, 1), ScanningLineT::Point(2.5, 1), ScanningLineT::FillMode::RealMode, '*');
	test.AddTriangle(ScanningLineT::Point(1.5, 5), ScanningLineT::Point(3, 1), ScanningLineT::Point(4.5, 5), ScanningLineT::FillMode::RealMode, '*');
	test.AddTriangle(ScanningLineT::Point(5, 5), ScanningLineT::Point(3.5, 1), ScanningLineT::Point(5, 1), ScanningLineT::FillMode::RealMode, '*');
	test.AddText(PrintfCol::�����ע, 5.2, 3.0, "28");
	test.AddText(PrintfCol::�����ע, 5.4, 3.0, "28+6+6=40");
	test.AddText(PrintfCol::�����ע, 2.5, 5.3, "20");
	DefineLangVar(float, �����β��ӿհ׵ĳ�A1, 28);
	DefineLangVar(float, �����ο�B1, 20);
	ColPrintf(PrintfCol::����, Lang("P38��һ ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ������Ӱ�������3"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, ��Ӱ�������S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������Ӱ�������S1 ��Ӱ�������S1=�����β��ӿհ׵ĳ�A1*�����ο�B1"));
	��Ӱ�������S1 = �����β��ӿհ׵ĳ�A1 * �����ο�B1;
	��Ӱ�������S1.PrintProcessLog(1);
}
void P38_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 Example One Variation Practice Cutting and Supplementing Method","P38��һ��ʽ��ϰ ���"},
		{"Title: As shown in the picture, there is a lawn below with two 1cm wide roads in the middle. Find the area of lawn planted",
		"��Ŀ����ͼ��ʾ����һ���ƺ���м������߿�Ϊ1cm�ĵ�·������ֲ��ƺ���."},
		{"1. Calculate the length A1 of a rectangle without blank spaces. The length A1 of a rectangle without blank spaces equals the length A1 of the rectangle minus the width B1 of the road",
		"1.���㳤���β��ӿհ׵ĳ�A1 �����β��ӿհ׵ĳ�A1=�����γ�A1-��·���B1"},
		{"2. Calculate the width A3 of the rectangle without blank space. The width A3 of the rectangle without blank space is equal to the width A2 of the rectangle minus the width B1 of the road",
		"2.���㳤���β��ӿհ׵Ŀ�B2 �����β��ӿհ׵Ŀ�B2=�����ο�A2-��·���B1"},
		{"3. Calculate the shaded area S1. The shaded area S1 is equal to the length A1 of the rectangle without blank space multiplied by the width B2 of the rectangle without blank space",
		"3.������Ӱ�������S1 ��Ӱ�������S1=�����β��ӿհ׵ĳ�A1*�����β��ӿհ׵Ŀ�B2"},

		//������
		{"RectangularlengthA1","�����γ�A1"},
		{"RoadwidthB1","��·���B1"},
		{"RectangularwidthA2","�����ο�A2"},
		{"Arectanglewithoutblankspace,lengthA1","�����β��ӿհ׵ĳ�A1"},
		{"WidthB2ofrectanglewithoutblankspace","�����β��ӿհ׵Ŀ�B2"},
		{"ShadowareaS1","��Ӱ�������S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex6 = { {float(1),float(1)},{float(2),float(1)},{float(2),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(1.0), float(3.0)), Vex6, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex5 = { {float(1),float(4)},{float(2),float(4)},{float(2),float(6)} };
	test.AddPolygon(ScanningLineT::Point(float(1.0), float(6.0)), Vex5, ScanningLineT::FillMode::EdgeMode, '+');

	std::vector<ScanningLineT::Point> Vex7 = { {float(3),float(1)},{float(6),float(1)},{float(6),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3.0), float(3.0)), Vex7, ScanningLineT::FillMode::EdgeMode, '+');

	std::vector<ScanningLineT::Point> Vex8 = { {float(3),float(4)},{float(6),float(4)},{float(6),float(6)} };
	test.AddPolygon(ScanningLineT::Point(float(3.0), float(6.0)), Vex8, ScanningLineT::FillMode::EdgeMode, '+');

	test.AddText(PrintfCol::�����ע, 6.2, 4.5, "80��");
	
	test.AddText(PrintfCol::�����ע, 5.1, 6.1, "50��");
	DefineLangVar(float, �����γ�A1, 80);
	DefineLangVar(float, ��·���B1, 1);
	DefineLangVar(float, �����ο�A2, 50);
	ColPrintf(PrintfCol::����, Lang("P38��һ��ʽ��ϰ ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ����һ���ƺ���м������߿�Ϊ1cm�ĵ�·������ֲ��ƺ���."));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, �����β��ӿհ׵ĳ�A1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳤���β��ӿհ׵ĳ�A1 �����β��ӿհ׵ĳ�A1=�����γ�A1-��·���B1"));
	�����β��ӿհ׵ĳ�A1 = �����γ�A1 - ��·���B1;
	�����β��ӿհ׵ĳ�A1.PrintProcessLog(1);
	DefineLangVar(float, �����β��ӿհ׵Ŀ�B2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㳤���β��ӿհ׵Ŀ�B2 �����β��ӿհ׵Ŀ�B2=�����ο�A2-��·���B1"));
	�����β��ӿհ׵Ŀ�B2 = �����ο�A2 - ��·���B1;
	�����β��ӿհ׵Ŀ�B2.PrintProcessLog(2);
	DefineLangVar(float, ��Ӱ�������S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.������Ӱ�������S1 ��Ӱ�������S1=�����β��ӿհ׵ĳ�A1*�����β��ӿհ׵Ŀ�B2"));
	��Ӱ�������S1 = �����β��ӿհ׵ĳ�A1 * �����β��ӿհ׵Ŀ�B2;
	��Ӱ�������S1.PrintProcessLog(3);
}
void P38_1_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 cases of double cutting and patching method","P38���� ���"},
		{"Title: Calculate the shaded area as shown in the figure, where the side length of the large square is 5 and the side length of the small square is 3",
		"��Ŀ����ͼ��ʾ������Ӱ�����������������ABFG�ı߳���5��С�����εı߳���3"},
		{"1. Calculate the length A1 of AE. The length A1 of AE is equal to the side length A2 of the large rectangle minus the side length A3 of the small rectangle",
		"1.����AE�ĳ�A1 AE�ĳ�A1=�󳤷��α߳�A2-С�����α߳�A3"},
		{"2. Calculate the area of AED S1. AED area S1=length of AE A1 * side length of small rectangle A3/magnification N1",
		"2.����AED�����S1 AED�����S1=AE�ĳ�A1*С�����α߳�A3/����N1"},
		{"3. Calculate the area S2 of AFE, which is equal to the length A1 of AE multiplied by the side length A2 of the large rectangle and multiplied by N1",
		"3.����AFE�����S2 AFE�����S2=AE�ĳ�A1*�󳤷��α߳�A2/����N1"},
		{"4. Calculate the area of EDF S3. The area of EDF S3=the side length of the small rectangle A3 * the side length of the small rectangle A3/the magnification N1",
		"4.����EDF�����S3 EDF�����S3=С�����α߳�A3*С�����α߳�A3/����N1"},
		{"5. Calculate the shadow area S4. Shadow area S4=AED area S1+AEE area S2+EDF area S3",
		"5.������Ӱ���S4 ��Ӱ���S4=AED�����S1+AFE�����S2+EDF�����S3"},
		//������
		{"ThesidelengthofthelargerectangleisA2","�󳤷��α߳�A2"},
		{"SmallrectanglewithsidelengthA3","С�����α߳�A3"},
		{"MagnificationN1","����N1"},
		{"AE'slongA1","AE�ĳ�A1"},
		{"AEDareaS1","AED�����S1"},
		{"AFEareaS2","AFE�����S2"},
		{"EDF'sareaS3","EDF�����S3"},
		{"ShadowareaS4","��Ӱ���S4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexC=test.AddTriangle(ScanningLineT::Point(1, 6 ), ScanningLineT::Point(6, 1 ), ScanningLineT::Point(9, 3 ), ScanningLineT::FillMode::RealMode, '+',0);
	//std::vector<ScanningLineT::Point> Vex1 = { {float(1 ),float(1 )},{float(6  ),float(1)},{float(9 ),float(3 )},{float(9),float(6)} };
	//test.AddPolygon(ScanningLineT::Point(float(1), float(6 )), Vex1, ScanningLineT::FillMode::EdgeMode, '+',0);
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(6),float(1)},{float(6),float(6)} };
	unsigned int nSectorIndexA=test.AddPolygon(ScanningLineT::Point(float(1), float(6)), Vex1, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex5 = { {float(6),float(3)},{float(9),float(3)},{float(9),float(6)} };
	unsigned int nSectorIndexB=test.AddPolygon(ScanningLineT::Point(float(6), float(6)), Vex5, ScanningLineT::FillMode::EdgeMode, '-', 0);

	unsigned int nSectorIndexD = test.AddTriangle(ScanningLineT::Point(1, 6), ScanningLineT::Point(6, 3), ScanningLineT::Point(9, 3), ScanningLineT::FillMode::RealMode, '+', 0);
	//�������������SetTheoryCondition nFillMode
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		
		bool InCndNotInAB = test.TriangleN(nSectorIndexC)->Hit(p) & (!test.PolygonN(nSectorIndexA)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p));

		//bool InCndNotInAB = test.TriangleN(nSectorIndexC)->Hit(p) & (!test.PolygonN(nSectorIndexA)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p));
		return  InCndNotInAB;
		};
	
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition2 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA

		bool InAD1 = test.TriangleN(nSectorIndexA)->Hit(p) & test.TriangleN(nSectorIndexD)->Hit(p);

		//bool InCndNotInAB = test.TriangleN(nSectorIndexC)->Hit(p) & (!test.PolygonN(nSectorIndexA)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p));
		return  InAD1;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition3 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA

		bool InAAndNotInD = test.PolygonN(nSectorIndexA)->Hit(p) & (!test.TriangleN(nSectorIndexD)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p)) & (test.TriangleN(nSectorIndexC)->Hit(p));

		//bool InCndNotInAB = test.TriangleN(nSectorIndexC)->Hit(p) & (!test.PolygonN(nSectorIndexA)->Hit(p)) & (!test.PolygonN(nSectorIndexB)->Hit(p));
		return  InAAndNotInD;
		};
	//
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.TriangleN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.PolygonN(nSectorIndexB)->AddBox(Box);
	//׷��C�İ�Χ��
	test.PolygonN(nSectorIndexC)->AddBox(Box);
	//׷��D�İ�Χ��
	test.PolygonN(nSectorIndexD)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 0.7, 5.7, "A");
	test.AddText(PrintfCol::�����ע, 6.3, 5.7, "B");
	test.AddText(PrintfCol::�����ע, 6.3, 9, "C");
	test.AddText(PrintfCol::�����ע, 2.7, 9, "D");
	test.AddText(PrintfCol::�����ע, 2.7, 5.7, "E");
	test.AddText(PrintfCol::�����ע, 6, 1, "F");
	test.AddText(PrintfCol::�����ע, 0.9, 0.9, "G");
	DefineLangVar(float, �󳤷��α߳�A2, 5);
	DefineLangVar(float, С�����α߳�A3, 3);
	DefineLangVar(float, ����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P38���� ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ������Ӱ�����������������ABFG�ı߳���5��С�����εı߳���3"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '1');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition2, '3');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition3, '2');
	test.Printf(PrintfCol::Green);
	DefineLangVar(float,AE�ĳ�A1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����AE�ĳ�A1 AE�ĳ�A1=�󳤷��α߳�A2-С�����α߳�A3"));
	AE�ĳ�A1 = �󳤷��α߳�A2 - С�����α߳�A3;
	AE�ĳ�A1.PrintProcessLog(1);
	DefineLangVar(float, AED�����S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.����AED�����S1 AED�����S1=AE�ĳ�A1*С�����α߳�A3/����N1"));
	AED�����S1 = AE�ĳ�A1 * С�����α߳�A3 / ����N1;
	AED�����S1.PrintProcessLog(2);
	DefineLangVar(float, AFE�����S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����AFE�����S2 AFE�����S2=AE�ĳ�A1*�󳤷��α߳�A2/����N1"));
	AFE�����S2 = AE�ĳ�A1 * �󳤷��α߳�A2 / ����N1;
	AFE�����S2.PrintProcessLog(3);
	DefineLangVar(float, EDF�����S3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����EDF�����S3 EDF�����S3=С�����α߳�A3*С�����α߳�A3/����N1"));
	EDF�����S3 = С�����α߳�A3 * С�����α߳�A3 / ����N1;
	EDF�����S3.PrintProcessLog(4);
}
void P38_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 Example of Two Variant Practice Cut and Supplement Method","P38������ʽ��ϰ ���"},
		{"Title: Calculate the shaded area as shown in the figure, where the side length of the large square is 4 and the side length of the small square is 3",
		"��Ŀ����ͼ��ʾ������Ӱ����������������εı߳���4��С�����εı߳���3"},
		{"1. Calculate the area of BGE S1. BGE area S1=small rectangle side length A1 * large rectangle side length A2/multiplier N1",
		"1.����BGE�����S1 BGE�����S1=С�����α߳�A1*�󳤷��α߳�A2/����N1"},
		{"2. Calculate the area S2 of BED. The area S2 of BED is equal to the side length A1 of the small rectangle multiplied by the side length A1 of the small rectangle divided by the multiplier N1",
		"2.����BED�����S2 BED�����S2=С�����α߳�A1*С�����α߳�A1/����N1"},
		{"3. Calculate the area of the shaded area S3=the area of BGE S1+the area of FED S2",
		"3.������Ӱ�������S3 ��Ӱ�������S3=BGE�����S1+BED�����S2"},
		//������
		{"SmallrectanglewithsidelengthA1","С�����α߳�A1"},
		{"LargerectangularsidelengthA2","�󳤷��α߳�A2"},
		{"MagnificationN1","����N1"},
		{"BGEareaS1","BGE�����S1"},
		{"BEDareaS2","BED�����S2"},
		{"ShadowareaS3","��Ӱ�������S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(5),float(1)},{float(5),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = { {float(5),float(1)},{float(9),float(1)},{float(9),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(4)), Vex2, ScanningLineT::FillMode::EdgeMode, '+', 0);
	test.AddTriangle(ScanningLineT::Point(1, 5), ScanningLineT::Point(5, 1), ScanningLineT::Point(5, 4), ScanningLineT::FillMode::RealMode, '+', 1);
	test.AddTriangle(ScanningLineT::Point(5, 4), ScanningLineT::Point(5, 1), ScanningLineT::Point(9, 4), ScanningLineT::FillMode::RealMode, '+', 1);
	test.AddText(PrintfCol::�����ע, 0.7, 0.7, "A");
	test.AddText(PrintfCol::�����ע, 0.7, 4.7, "B");
	test.AddText(PrintfCol::�����ע, 0.7, 8.7, "C");
	test.AddText(PrintfCol::�����ע, 4, 9.3, "D");
	test.AddText(PrintfCol::�����ע, 4, 5.3, "E");
	test.AddText(PrintfCol::�����ע, 5, 5.3, "F");
	test.AddText(PrintfCol::�����ע, 5, 0.7, "G");
	DefineLangVar(float, �󳤷��α߳�A2, 4);
	DefineLangVar(float, С�����α߳�A1, 3);
	DefineLangVar(float, ����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P38������ʽ��ϰ ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ������Ӱ����������������εı߳���4��С�����εı߳���3"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, BGE�����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����BGE�����S1 BGE�����S1=С�����α߳�A1*�󳤷��α߳�A2/����N1"));
	BGE�����S1 = С�����α߳�A1 * �󳤷��α߳�A2 / ����N1;
	BGE�����S1.PrintProcessLog(1);
	DefineLangVar(float, BED�����S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����BED�����S2 BED�����S2=С�����α߳�A1*С�����α߳�A1/����N1"));
	BED�����S2 = С�����α߳�A1 * С�����α߳�A1 / ����N1;
	BED�����S2.PrintProcessLog(2);
	DefineLangVar(float, ��Ӱ�������S3, 0);
	ColPrintf(PrintfCol::����, Lang("3.������Ӱ�������S3 ��Ӱ�������S3=BGE�����S1+BED�����S2"));
	��Ӱ�������S3 = BGE�����S1 + BED�����S2;
	��Ӱ�������S3.PrintProcessLog(3);
}
void P38_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 cases of triple cutting and patching method","P38���� ���"},
		{"Title: As shown in the figure, the shaded area is 48cm ^ 2 and the width is 2cm. What is the circumference of the rectangle plus the shaded area in cm",
		"��Ŀ����ͼ��ʾ��Ӱ���������48cm^2������2cm�������μ�����Ӱ���ֵ��ܳ��Ƕ���cm"},
		{"1. Calculate the length A1 of the shadow. The length A1 of the shadow is equal to the area S1 of the shadow divided by the width B1 of the shadow",
		"1.������Ӱ�ĳ�A1 ��Ӱ�ĳ�A1=��Ӱ�������S1/��Ӱ���ֿ�B1"},
		{"2. Calculate the length and width N1 of the shadow. The length and width N1 of the shadow=the length A1 of the shadow+the width B1 of the shadow area",
		"2.������Ӱ�ĳ���N1 ��Ӱ�ĳ���N1=��Ӱ�ĳ�A1+��Ӱ���ֿ�B1"},
		{"3. Calculate the perimeter L1 of the rectangle. The perimeter L1 of the rectangle is equal to the length and width N1 of the shadow multiplied by the magnification N1",
		"3.���㳤�����ܳ�L1 �������ܳ�L1=��Ӱ�ĳ���N1*����N1"},
		//������
		{"ShadowareaS1","��Ӱ�������S1"},
		{"ShadowareawidthB1","��Ӱ���ֿ�B1"},
		{"ShadowlengthandwidthN1","��Ӱ�ĳ���N1"},
		{"MagnificationN1","����N1"},
		{"ShadowlengthA1","��Ӱ�ĳ�A1"},
		{"RectangularperimeterL1","�������ܳ�L1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<10, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(2),float(1)},{float(6),float(1)},{float(6),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(2), float(4)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = { {float(1),float(1)},{float(2),float(1)},{float(2),float(4)} ,{float(6),float(4)},{float(6),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex2, ScanningLineT::FillMode::RealMode, '+', 0);
	DefineLangVar(float, ��Ӱ�������S1, 48);
	DefineLangVar(float, ��Ӱ���ֿ�B1, 2);
	DefineLangVar(float, ����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P38���� ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ��Ӱ���������48cm^2������2cm�������μ�����Ӱ���ֵ��ܳ��Ƕ���cm"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, ��Ӱ�ĳ�A1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������Ӱ�ĳ�A1 ��Ӱ�ĳ�A1=��Ӱ�������S1/��Ӱ���ֿ�B1"));
	��Ӱ�ĳ�A1 = ��Ӱ�������S1 / ��Ӱ���ֿ�B1;
	��Ӱ�ĳ�A1.PrintProcessLog(1);
	DefineLangVar(float, ��Ӱ�ĳ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.������Ӱ�ĳ���N1 ��Ӱ�ĳ���N1=��Ӱ�ĳ�A1+��Ӱ���ֿ�B1"));
	��Ӱ�ĳ���N1 = ��Ӱ�ĳ�A1 + ��Ӱ���ֿ�B1;
	��Ӱ�ĳ���N1.PrintProcessLog(2);
	DefineLangVar(float, �������ܳ�L1, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳤�����ܳ�L1 �������ܳ�L1=��Ӱ�ĳ���N1*����N1"));
	�������ܳ�L1 = ��Ӱ�ĳ���N1 * ����N1;
	�������ܳ�L1.PrintProcessLog(3);
}
void P38_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 Three Variations Practice Cutting and Supplementing Method","P38������ʽ��ϰ ���"},
		{"Title: Here are two squares, A and B. The side length of A is 3 centimeters longer than that of B, and the area of A is 45 centimeters larger than that of B. Calculate the sum of the areas of A and B",
		"��Ŀ�������Ǽ������������Σ��׵ı߳����ҵı߳���3���ף��׵�������ҵ������45cm������ҵ����֮��"},
		{"1. Calculate the length A1 of the rectangle before cutting and patching, which is equal to the area S1 of multiple points divided by the additional width A2",
		"1.���㳤���θǰ�ĳ�A1 �����θǰ�ĳ�A1=�ദ�����S1/����Ŀ�A2"},
		{"2. Calculate the length A2 after cutting and patching=(length A1 before rectangle cutting and patching+extra width A2)/length N1 of rectangles",
		"2.������ĳ�A2 ���ĳ�A2=(�����θǰ�ĳ�A1+����Ŀ�A2)/�����γ���N1"},
		{"3. Calculate the area of A, S1. The area of A is equal to the length after cutting, A2 * the length after cutting, A2",
		"3.����׵����S1 �׵����S1=���ĳ�A2*���ĳ�A2"},
		{"4. Calculate the area S2 of B, which is equal to (length A2 after trimming - excess width A2) multiplied by (length A2 after trimming - excess width A2)",
		"4.�����ҵ����S2 �ҵ����S2=(���ĳ�A2-����Ŀ�A2)*(���ĳ�A2-����Ŀ�A2)"},
		{"5. Calculate the sum of the areas of A and B, S3. The sum of the areas of A and B is S3=the area of A, S1+the area of B, S2",
		"5.����������֮��S3 �������֮��S3=�׵����S1+�ҵ����S2"},
		//������
		{"MultipleareasS1","�ദ�����S1"},
		{"ExtrawidthA2","����Ŀ�A2"},
		{"LengthofrectangleN1","�����γ���N1"},
		{"LengthA1beforerectangularcuttingandpatching","�����θǰ�ĳ�A1"},
		{"CutandrepairedlengthA2","���ĳ�A2"},
		{"AreaofAS1","�׵����S1"},
		{"AreaofBS2","�ҵ����S2"},
		{"SumofAreaAandBS3","�������֮��S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<14, 8, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(10),float(1)},{float(14),float(1)},{float(14),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(10), float(5)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = { {float(10),float(2)},{float(13),float(2)},{float(13),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(10), float(5)), Vex2, ScanningLineT::FillMode::RealMode, '*', 0);


	std::vector<ScanningLineT::Point> Vex3 = { {float(1),float(1)},{float(5),float(1)},{float(5),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex3, ScanningLineT::FillMode::RealMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex4 = {{float(5),float(2)},{float(8),float(2)},{float(8),float(5)}};
	test.AddPolygon(ScanningLineT::Point(float(5), float(5)), Vex4, ScanningLineT::FillMode::RealMode, '*', 0);
	test.AddText(PrintfCol::�����ע, 4.0, 3.5, "��");
	test.AddText(PrintfCol::�����ע, 4.0, 5.5, "��");
	test.AddText(PrintfCol::�����ע, 4.0, 11.5, "��");
	test.AddText(PrintfCol::�����ע, 4.0, 13.5, "��");
	DefineLangVar(float, �ദ�����S1, 45);
	DefineLangVar(float, ����Ŀ�A2, 3);
	DefineLangVar(float, �����γ���N1, 2);
	ColPrintf(PrintfCol::����, Lang("P38������ʽ��ϰ ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������Ǽ������������Σ��׵ı߳����ҵı߳���3���ף��׵�������ҵ������45cm������ҵ����֮��"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, �����θǰ�ĳ�A1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳤���θǰ�ĳ�A1 �����θǰ�ĳ�A1=�ദ�����S1/����Ŀ�A2"));
	�����θǰ�ĳ�A1 = �ദ�����S1 / ����Ŀ�A2;
	�����θǰ�ĳ�A1.PrintProcessLog(1);
	DefineLangVar(float, ���ĳ�A2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ĳ�A2 ���ĳ�A2=(�����θǰ�ĳ�A1+����Ŀ�A2)/�����γ���N1"));
	���ĳ�A2 = (�����θǰ�ĳ�A1 + ����Ŀ�A2) / �����γ���N1;
	���ĳ�A2.PrintProcessLog(2);
	DefineLangVar(float, �׵����S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.����׵����S1 �׵����S1=���ĳ�A2*���ĳ�A2"));
	�׵����S1 = ���ĳ�A2 * ���ĳ�A2;
	�׵����S1.PrintProcessLog(3);
	DefineLangVar(float, �ҵ����S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����ҵ����S2 �ҵ����S2=(���ĳ�A2-����Ŀ�A2)*(���ĳ�A2-����Ŀ�A2)"));
	�ҵ����S2 = (���ĳ�A2 - ����Ŀ�A2) * (���ĳ�A2 - ����Ŀ�A2);
	�ҵ����S2.PrintProcessLog(4);
	DefineLangVar(float, �������֮��S3, 0);
	ColPrintf(PrintfCol::����, Lang("5.����������֮��S3 �������֮��S3=�׵����S1+�ҵ����S2"));
	�������֮��S3 = �׵����S1 + �ҵ����S2;
	�������֮��S3.PrintProcessLog(5);
}
void P38_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P38 cases of four cutting and patching method","P38���� ���"},
		{"Question: There are two squares, one large and one small, with a distance of 1cm between them. If the part sandwiched between the two squares is 12cm ^ 2, what is the area of the large square?",
		"��Ŀ����һ��һС���������Σ���Ӧ֮��ľ��붼��1cm�������������������֮��Ĳ�����12cm^2,��ô�������ε�����Ƕ���?"},
		{"1. Calculate the area of each segment divided into four sections S1 divided into four sections S1=total area S2/number of segments divided N1",
		"1.����ֳ��Ķ�ÿ�����S1 �ֳ��Ķ�ÿ�����S1=�����S2/�ֳɵĶ���N1"},
		{"2. List the formula S1: trapezoidal area=(upper base+lower base) * height/2",
		"2.�г�ʽ��S1 �������=���ϵ�+�µף�*��/2"},
		{"3. Substitute the value into S1 to obtain S2 3 * 2=(upper base+lower base) * 1",
		"3.����ֵ����S1�õ�S2 3*2=���ϵ�+�µף�*1"},
		{"4. Simplify S2 to obtain S3 3 * 2=(top bottom+bottom bottom)",
		"4.����S2�õ�S3 3*2=���ϵ�+�µף�"},
		{"5. Calculate the side length N1 of the square. The side length N1 of the square is equal to (divided into four segments, each segment area S1+corresponding distance L1+corresponding distance L1) divided by the number of upper and lower bases N2",
		"5.���������α߳�N1 �����α߳�N1=(�ֳ��Ķ�ÿ�����S1+��Ӧ����L1+��Ӧ����L1)/���µ�����N2"},
		{"6. Calculate the area of a large square S1. The area of a large square S1 is equal to the side length N1 of the square multiplied by the side length N1 of the square",
		"6.��������������S1 �����������S1=�����α߳�N1*�����α߳�N1"},
		//������
		{"TotalareaS2","�����S2"},
		{"NumberofsegmentsdividedN1","�ֳɵĶ���N1"},
		{"CorrespondingdistanceL1","��Ӧ����L1"},
		{"NumberofupperandlowerbasesN2","���µ�����N2"},
		{"Dividedintofoursections,eachwithanareaofS1","�ֳ��Ķ�ÿ�����S1"},
		{"SquaresidelengthN1","�����α߳�N1"},
		{"LargesquareareaS1","�����������S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<8, 8, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(5),float(1)},{float(5),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex1, ScanningLineT::FillMode::RealMode, '+', 0);
	std::vector<ScanningLineT::Point> Vex2 = {{float(2),float(2)},{float(4),float(2)},{float(4),float(4)}};
	test.AddPolygon(ScanningLineT::Point(float(2), float(4)), Vex2, ScanningLineT::FillMode::RealMode, ' ', 0);
	DefineLangVar(float, �����S2, 12);
	DefineLangVar(float, �ֳɵĶ���N1, 4);
	DefineLangVar(float, ��Ӧ����L1, 1);
	DefineLangVar(float, ���µ�����N2, 2);
	ColPrintf(PrintfCol::����, Lang("P38���� ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ��һС���������Σ���Ӧ֮��ľ��붼��1cm�������������������֮��Ĳ�����12cm^2,��ô�������ε�����Ƕ���?"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, �ֳ��Ķ�ÿ�����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ֳ��Ķ�ÿ�����S1 �ֳ��Ķ�ÿ�����S1=�����S2/�ֳɵĶ���N1"));
	�ֳ��Ķ�ÿ�����S1 = �����S2 / �ֳɵĶ���N1;
	�ֳ��Ķ�ÿ�����S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::����, Lang("2.�г�ʽ��S1 �������=���ϵ�+�µף�*��/2"));
	ColPrintf(PrintfCol::����, Lang("3.����ֵ����S1�õ�S2 3*2=���ϵ�+�µף�*1"));
	ColPrintf(PrintfCol::����, Lang("4.����S2�õ�S3 3*2=���ϵ�+�µף�"));
	DefineLangVar(float, �����α߳�N1, 0);
	ColPrintf(PrintfCol::����, Lang("5.���������α߳�N1 �����α߳�N1=(�ֳ��Ķ�ÿ�����S1+��Ӧ����L1+��Ӧ����L1)/���µ�����N2"));
	�����α߳�N1 = (�ֳ��Ķ�ÿ�����S1 + ��Ӧ����L1 + ��Ӧ����L1) / ���µ�����N2;
	�����α߳�N1.PrintProcessLog(5);
	DefineLangVar(float, �����������S1, 0);
	ColPrintf(PrintfCol::����, Lang("6.��������������S1 �����������S1=�����α߳�N1*�����α߳�N1"));
	�����������S1 = �����α߳�N1 * �����α߳�N1;
	�����������S1.PrintProcessLog(6);
}

void P38()
{
	//���ߵ���
	P38_1();
	ColPrintf(PrintfCol::����, "");
	P38_1_1();
	ColPrintf(PrintfCol::����, "");
	P38_1_1_1();
	ColPrintf(PrintfCol::����, "");
	P38_2();
	ColPrintf(PrintfCol::����, "");
	P38_3();
	ColPrintf(PrintfCol::����, "");
	P38_3_1();
	ColPrintf(PrintfCol::����, "");
	P38_4();
	ColPrintf(PrintfCol::����, "");
}
void P38_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P38();
	Lang.SetCurLanguage(LanguageLib::English);
	P38();
	ColPrintf(PrintfCol::����, "");

}