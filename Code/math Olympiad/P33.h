#pragma once
void P33_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P33 Example 1 Area Calculation","P33��һ �����"},
		{"Question: Calculate the shadow area as shown in the figure?",
		"��Ŀ����ͼ��ʾ������Ӱ�����"},
		{"1. Calculating the radius of a circle is also the base R1 of a right angled triangle\nThe radius of a circle is also the base R1 of a right angled triangle. R1=the base A1 of an isosceles\ntriangle/the multiple N1 of the base of an isosceles triangle by a right angled triangle",
		"1.����Բ�İ뾶Ҳ��ֱ�������εĵ�R1 Բ�İ뾶Ҳ��ֱ�������εĵ�R1=���������εĵ�A1/ֱ�������ζ��ڵ��������εĵ׵ı���N1"},
		{"2. Calculate the area S1 of a quarter circle. The area S1 of a quarter circle is equal to the radius of the circle, which is also the base of a right angled triangle. The radius of the circle is also the base of a right angled triangle/Difference from the original circle by multiple N1",
		"2.�����ķ�֮һԲ�����S1 �ķ�֮һԲ�����S1=(Բ�İ뾶Ҳ��ֱ�������εĵ�R1*Բ�İ뾶Ҳ��ֱ�������εĵ�R1*Բ����PI)/��ԭ��Բ����N1"},
		{"3. Calculate the height H1 of a right triangle. The height H1 of a right triangle is equal to the radius of the circle, which is also the base R1 of the right triangle divided by the base of the right triangle multiplied by the height N1",
		"3.����ֱ�������εĸ�H1 ֱ�������εĸ�H1=Բ�İ뾶Ҳ��ֱ�������εĵ�R1/ֱ�������εĵ׶��ڸߵı���N1"},
		{"4. Calculate the area S1 of two right angled triangles. The area S1 of two right angled triangles is equal to\n(the height H1 of the right angled triangle is also the radius of the circle at the base R1 of the right angled triangle/the multiplier N1) multiplied by\nthe number of right angled triangles N2",
		"4.��������ֱ�������ε����S2 ����ֱ�������ε����S2=(ֱ�������εĸ�H1*Բ�İ뾶Ҳ��ֱ�������εĵ�R1/����N1)*ֱ�������θ���N2"},
		{"5. Calculate the shadow area S3. Shadow area S3=(area of quarter circle S1+area of quarter circle S1) - area of two right angled triangles S2",
		"5.������Ӱ���S3 ��Ӱ���S3=(�ķ�֮һԲ�����S1+�ķ�֮һԲ�����S1)-����ֱ�������ε����S2"},
		//������
		{"BaseA1OfAnIsoscelesTriangle","���������εĵ�A1"},
		{"TheMultipleN1OfARightAngledTriangleToTheBaseOfAnIsoscelesTriangle","ֱ�������ζ��ڵ��������εĵ׵ı���N1"},
		{"PI","Բ����PI"},
		{"DifferenceFromTheOriginalCircleByMultipleN1","��ԭ��Բ����N1"},
		{"TheBaseOfARightAngledTriangleIsAMultipleN1OfItsHeight","ֱ�������εĵ׶��ڸߵı���N1"},
		{"MagnificationN1","����N1"},
		{"NumberOfRightAngledTrianglesN2","ֱ�������θ���N2"},
		{"TheRadiusOfACircleIsAlsoTheBaseR1OfARightAngledTriangle","Բ�İ뾶Ҳ��ֱ�������εĵ�R1"},
		{"TheAreaOfAQuarterCircleS1","�ķ�֮һԲ�����S1"},
		{"TheHeightH1OfArightAngledTriangle","ֱ�������εĸ�H1"},
		{"TheAreaS2OfTwoRightAngledTriangles","����ֱ�������ε����S2"},
		{"ShadowAreaS3","��Ӱ���S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<14, 5, 18, 8> test;
	
	test.AddSector(1.0, 4.0, 3.0, 0, 90.0, ScanningLine<18, 10>::FillMode::RealMode, '*',1);
	test.AddSector(7.0, 4.0, 3.0, 90, 180.0, ScanningLine<18, 10>::FillMode::RealMode, '*',1);
	test.AddScanLineByEdgeGradient(1.0, 3.0, 4.0, 4.0, -(3.0 / 3.0), 3.0 / 3.0, ' ',0);
	test.AddScanLineByEdgeGradient(1.8, 2.2, 4.8, 4.8, 0, 3.0 / 3.0, ' ', 2);
	test.AddScanLineByEdgeGradient(1.8, 2.2, 3.2, 3.2, -(3.0 / 3.0), 0, ' ', 2);
	test.AddText(PrintfCol::�����ע, 1.7, 3.7, "45");
	test.AddText(PrintfCol::�����ע, 1.7, 4.3, "45");
	test.AddText(PrintfCol::�����ע, 4.3, 4.3, "20");
	DefineLangVar(float,���������εĵ�A1, 20);
	DefineLangVar(float,ֱ�������ζ��ڵ��������εĵ׵ı���N1, 2);
	DefineLangVar(float, Բ����PI, 3.14);
	DefineLangVar(float, ��ԭ��Բ����N1, 4);
	DefineLangVar(float, ֱ�������εĵ׶��ڸߵı���N1, 2);
	DefineLangVar(float, ����N1, 2);
	DefineLangVar(float, ֱ�������θ���N2, 2);
	ColPrintf(PrintfCol::����, Lang("P33��һ �����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ������Ӱ�����"));
	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVar(float,Բ�İ뾶Ҳ��ֱ�������εĵ�R1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����Բ�İ뾶Ҳ��ֱ�������εĵ�R1 Բ�İ뾶Ҳ��ֱ�������εĵ�R1=���������εĵ�A1/ֱ�������ζ��ڵ��������εĵ׵ı���N1"));
	Բ�İ뾶Ҳ��ֱ�������εĵ�R1 = ���������εĵ�A1 / ֱ�������ζ��ڵ��������εĵ׵ı���N1;
	Բ�İ뾶Ҳ��ֱ�������εĵ�R1.PrintProcessLog(1);
	DefineLangVar(float, �ķ�֮һԲ�����S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ķ�֮һԲ�����S1 �ķ�֮һԲ�����S1=(Բ�İ뾶Ҳ��ֱ�������εĵ�R1*Բ�İ뾶Ҳ��ֱ�������εĵ�R1*Բ����PI)/��ԭ��Բ����N1"));
	�ķ�֮һԲ�����S1 = (Բ�İ뾶Ҳ��ֱ�������εĵ�R1 * Բ�İ뾶Ҳ��ֱ�������εĵ�R1 * Բ����PI) / ��ԭ��Բ����N1;
	�ķ�֮һԲ�����S1.PrintProcessLog(2);
	DefineLangVar(float, ֱ�������εĸ�H1, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ֱ�������εĸ�H1 ֱ�������εĸ�H1=Բ�İ뾶Ҳ��ֱ�������εĵ�R1/ֱ�������εĵ׶��ڸߵı���N1"));
	ֱ�������εĸ�H1 = Բ�İ뾶Ҳ��ֱ�������εĵ�R1 / ֱ�������εĵ׶��ڸߵı���N1;
	ֱ�������εĸ�H1.PrintProcessLog(3);
	DefineLangVar(float, ����ֱ�������ε����S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������ֱ�������ε����S2 ����ֱ�������ε����S2=(ֱ�������εĸ�H1*Բ�İ뾶Ҳ��ֱ�������εĵ�R1/����N1)*ֱ�������θ���N2"));
	����ֱ�������ε����S2 = (ֱ�������εĸ�H1 * Բ�İ뾶Ҳ��ֱ�������εĵ�R1 / ����N1) * ֱ�������θ���N2;
	����ֱ�������ε����S2.PrintProcessLog(4);
	DefineLangVar(float, ��Ӱ���S3, 0);
	ColPrintf(PrintfCol::����, Lang("5.������Ӱ���S3 ��Ӱ���S3=(�ķ�֮һԲ�����S1+�ķ�֮һԲ�����S1)-����ֱ�������ε����S2"));
	��Ӱ���S3 = (�ķ�֮һԲ�����S1 + �ķ�֮һԲ�����S1) - ����ֱ�������ε����S2;
	��Ӱ���S3.PrintProcessLog(5);

}
void P33_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P33 Variant Practice Finding Area","P33��ʽ��ϰ �����"},
		{"Question: Calculate the shadow area as shown in the figure?",
		"��Ŀ����ͼ��ʾ������Ӱ�����"},
		{"1. Calculate ABC sector area S1 ABC sector area S1=side A1 of a right triangle * side A1 of a right triangle * pi/difference from the original circle N1",
		"1.����ABC�������S1 ABC�������S1=ֱ�������εı�A1*ֱ�������εı�A1*Բ����PI/��ԭ��Բ����N1"},
		{"2. Calculate the height H1 of CDB. The height H1 of CDB is equal to the side A1 of a right triangle divided by the magnification N1",
		"2.����CDB�ĸ�H1 CDB�ĸ�H1=ֱ�������εı�A1/����N1"},
		{"3. Calculate the area of CDB. The area of CDB is equal to the height H1 of CDB multiplied by the side A1 of a right angled triangle divided by the magnification N1",
		"3.����CDB�����S2 CDB�����S2=CDB�ĸ�H1*ֱ�������εı�A1/����N1"},
		{"4. Calculate the area of the shaded area S2=ABC sector area S1-CDB area S2",
		"4.������Ӱ���ֵ����S2 ��Ӱ���ֵ����S2=ABC�������S1-CDB�����S2"},
		//������
		{"SideA1OfARightAngledTriangle","ֱ�������εı�A1"},
		{"PI","Բ����PI"},
		{"DifferenceFromTheOriginalCircleByMultipleN1","��ԭ��Բ����N1"},
		{"MagnificationN1","����N1"},
		{"ABCSectorAreaS1","ABC�������S1"},
		{"CDB'sHighH1","CDB�ĸ�H1"},
		{"CDBAreaS2","CDB�����S2"},
		{"TheAreaOfTheShadedAreaS2","��Ӱ���ֵ����S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<10, 5, 18, 8> test;
	typedef ScanningLine<10, 5, 18, 8>  ScanningLineT;
	

	
	unsigned int nShapeIndexA=test.AddTriangle(ScanningLineT::Point(1.0, 4 ), ScanningLineT::Point(1, 1.0 ), ScanningLineT::Point(4.0, 4 ), ScanningLineT::FillMode::EdgeMode, '*');
	unsigned int nShapeIndexB=test.AddSector(4.0, 4.0,3, 135, 180.0, ScanningLine<18, 10>::FillMode::EdgeMode, '*', 1);
	unsigned int nShapeIndexC = test.AddTriangle(ScanningLineT::Point(1.88, 4.0),//d
		ScanningLineT::Point(1.85, 1.9),//c
		ScanningLineT::Point(4.0, 4),//b
		ScanningLineT::FillMode::EdgeMode, '*');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InBAndNotC = test.SectorN(nShapeIndexB)->Hit(p) & (!test.TriangleN(nShapeIndexC)->Hit(p));
		//bool InAAndInBNotC = test.SectorN(nShapeIndexB)->Hit(p)&(!test.TriangleN(nShapeIndexC)->Hit(p));
		return InBAndNotC;
		};
	ScanningLineT::IncludeBox Box;
	test.TriangleN(nShapeIndexA)->GetBox(Box);
	test.SectorN(nShapeIndexB)->AddBox(Box);
	test.TriangleN(nShapeIndexC)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 4.3, 4.3, "20");
	DefineLangVar(float, ֱ�������εı�A1, 6);
	DefineLangVar(float, ��ԭ��Բ����N1, 8);
	DefineLangVar(float, Բ����PI, 3.14);
	DefineLangVar(float, ����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P33��ʽ��ϰ �����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ������Ӱ�����"));
	test.Clear();
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '*');
	test.Printf(PrintfCol::Green);
	DefineLangVar(float, ABC�������S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ABC�������S1 ABC�������S1=ֱ�������εı�A1*ֱ�������εı�A1*Բ����PI/��ԭ��Բ����N1"));
	ABC�������S1 = ֱ�������εı�A1 * ֱ�������εı�A1 * Բ����PI / ��ԭ��Բ����N1;
	ABC�������S1.PrintProcessLog(1);
	DefineLangVar(float, CDB�ĸ�H1, 0);
	ColPrintf(PrintfCol::����, Lang("2.����CDB�ĸ�H1 CDB�ĸ�H1=ֱ�������εı�A1/����N1"));
	CDB�ĸ�H1 = ֱ�������εı�A1 / ����N1;
	CDB�ĸ�H1.PrintProcessLog(2);
	DefineLangVar(float, CDB�����S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����CDB�����S2 CDB�����S2=CDB�ĸ�H1*ֱ�������εı�A1/����N1"));
	CDB�����S2 = CDB�ĸ�H1 * ֱ�������εı�A1 / ����N1;
	CDB�����S2.PrintProcessLog(3);
	DefineLangVar(float, ��Ӱ���ֵ����S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.������Ӱ���ֵ����S2 ��Ӱ���ֵ����S2=ABC�������S1-CDB�����S2"));
	��Ӱ���ֵ����S2 = ABC�������S1 - CDB�����S2;
	��Ӱ���ֵ����S2.PrintProcessLog(4);
}
void P33_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P33 Example 2 Area Calculation","P33���� �����"},
		{"Question: Calculate the shadow area as shown in the figure?",
		"��Ŀ����ͼ��ʾ������Ӱ�����"},
		{"1. Calculate the rectangular area S1. The rectangular area S1 is equal to the rectangular length A1 multiplied by the rectangular length B1",
		"1.���㳤�������S1 ���������S1=�����γ�A1*�����ο�B1"},
		{"2. Calculate the sector area S2. Sector area S2=rectangle width B1 * rectangle width B1 * pi PI",
		"2.�����������S2 �������S2=�����ο�B1*�����ο�B1*Բ����PI/��ԭ��Բ����N1"},
		{"3. Calculate a area S3 a area S3=rectangular area S1- fan-shaped area S2",
		"3.����a���S3 a���S3=���������S1-�������S2"},
		{"4. Calculate the large sector area S3, which is equal to (rectangular length A1 * rectangular length A1 * pi) divided by the difference from the original circle multiplied by N1",
		"4.������������S4 ���������S4=(�����γ�A1*�����γ�A1*Բ����PI)/��ԭ��Բ����N1"},
		{"5. Calculate the shaded area S5, which is equal to the large sector area S4-a and S3",
		"5.������Ӱ�������S5 ��Ӱ�������S5=���������S4-a���S3"},
		//������
		{"RectangularLengthA1","�����γ�A1"},
		{"RectangularWidthB1","�����ο�B1"},
		{"PI","Բ����PI"},
		{"DifferenceFromTheOriginalCircleByMultipleN1","��ԭ��Բ����N1"},
		{"RectangularAreaS1","���������S1"},
		{"FanShapedAreaS2","�������S2"},
		{"AreaS3","a���S3"},
		{"LargeFan-shapedAreaS4","���������S4"},
		{"ShadowAreaS5","��Ӱ�������S5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<12, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1 ),float(3 )},{float(7 ),float(3.0 )},{float(7 ),float(7 )}, };
	//������
	unsigned int nSectorIndexC=test.AddPolygon(ScanningLineT::Point(float(1.0 ), float(7.0 )), Vex1, ScanningLineT::FillMode::RealMode, ' ');
	unsigned int nSectorIndexA = test.AddSector(1, 7, 6, 0, 90.0, ScanningLineT::FillMode::EdgeMode, '*', 1);
	unsigned int nSectorIndexB = test.AddSector(7, 3, 4, 180, 270.0, ScanningLineT::FillMode::EdgeMode, '*', 1);
	ScanLenHorizontalLine(test, 3.0, 1.0, 6.0, 0.1);

	//�������������SetTheoryCondition nFillMode
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InAB=test.SectorN(nSectorIndexA)->Hit(p)& test.SectorN(nSectorIndexB)->Hit(p);
		bool InBAndNotInC = test.SectorN(nSectorIndexA)->Hit(p) & (!test.PolygonN(nSectorIndexC)->Hit(p));
		return InAB| InBAndNotInC;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	//׷��C�İ�Χ��
	//test.PolygonN(nSectorIndexC)->AddBox(Box);

	DefineLangVar(float, �����γ�A1, 6);
	DefineLangVar(float, �����ο�B1, 4);
	DefineLangVar(float, Բ����PI, 3.14);
	DefineLangVar(float, ��ԭ��Բ����N1, 4);
	ColPrintf(PrintfCol::����, Lang("P33���� �����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ������Ӱ�����"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);

	DefineLangVar(float, ���������S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳤�������S1 ���������S1=�����γ�A1*�����ο�B1"));
	���������S1 = �����γ�A1 * �����ο�B1;
	���������S1.PrintProcessLog(1);
	DefineLangVar(float, �������S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����������S2 �������S2=�����ο�B1*�����ο�B1*Բ����PI/��ԭ��Բ����N1"));
	�������S2 = �����ο�B1 * �����ο�B1 * Բ����PI/ ��ԭ��Բ����N1;
	�������S2.PrintProcessLog(2);
	DefineLangVar(float, a���S3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����a���S3 a���S3=���������S1-�������S2"));
	a���S3 = ���������S1 - �������S2;
	a���S3.PrintProcessLog(3);
	DefineLangVar(float, ���������S4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������������S4 ���������S4=(�����γ�A1*�����γ�A1*Բ����PI)/��ԭ��Բ����N1"));
	���������S4 = (�����γ�A1 * �����γ�A1 * Բ����PI) / ��ԭ��Բ����N1;
	���������S4.PrintProcessLog(4);
	DefineLangVar(float, ��Ӱ�������S5, 0);
	ColPrintf(PrintfCol::����, Lang("5.������Ӱ�������S5 ��Ӱ�������S5=���������S4-a���S3"));
	��Ӱ�������S5 = ���������S4 - a���S3;
	��Ӱ�������S5.PrintProcessLog(5);
}
void P33()
{
	P33_1();
	ColPrintf(PrintfCol::����, "");
	P33_2();
	ColPrintf(PrintfCol::����, "");
	P33_3();
	ColPrintf(PrintfCol::����, "");
}
void P33_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P33();
	Lang.SetCurLanguage(LanguageLib::English);
	P33();
	ColPrintf(PrintfCol::����, "");

}