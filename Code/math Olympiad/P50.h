#pragma once
void P50_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P50 Example 1 Graphic Count","P50��һ ͼ�μ���"},
		{"Title: Count, how many rectangles are there in the picture?",
		"��Ŀ����һ����ͼ�й��ж��ٸ�������?"},
		{"1. Calculate the number of combinations of rectangular line segments N1=the number of long line segments N2+(the number of long line segments N2- the number of increased line segments N3)+(the number of long line segments N2- the\nnumber of increased line segments N3- the number of increased line segments N3)+(the number of long line segments N2- the number of increased line segments N3- the number of increased line segments N3)+(the number of long line segments N2- the number of increased line segments N3- the number of increased line segments\nN3- the number of increased line segments N3)+(the number of long line segments N2- the number of increased line segments N3- the number of increased line segments N3- the number of increased line segments N3)",
		"1.���㳤���γ����߶������N1 �����γ����߶������N1=�����߶���N2+(�����߶���N2-�����߶���N3)+(�����߶���N2-�����߶���N3-�����߶���N3)+(�����߶���N2-�����߶���N3-�����߶���N3-�����߶���N3)+(�����߶���N2-�����߶���N3-�����߶���N3-�����߶���N3-�����߶���N3)+(�����߶���N2-�����߶���N3-�����߶���N3-�����߶���N3-�����߶���N3-�����߶���N3)"},
		{"2. Calculate the number of combinations of rectangular wide line segments N2=the number of wide line segments N3+(the number of wide line segments N3- the number of increased line segments N3)+(the number of wide line segments N3-\nthe number of increased line segments N3- the number of increased line segments N3)",
		"2.���㳤���ο��߶������N2 �����ο��߶������N2=����߶���N3+(����߶���N3-�����߶���N3)+(����߶���N3-�����߶���N3-�����߶���N3)"},
		{"3. Calculate the number of rectangular types N3=the number of combinations of rectangular long line segments N1 * the number of combinations of rectangular wide line segments N2",
		"3.���㳤��������N3 ����������N3=�����γ����߶������N1*�����ο��߶������N2"},
		//������
		{"NumberoflonglinesegmentsN2","�����߶���N2"},
		{"IncreasethenumberoflinesegmentsN3","�����߶���N3"},
		{"ThenumberofwidelinesegmentsN3","����߶���N3"},
		{"NumberofcombinationsofrectangularlinesegmentsN1","�����γ����߶������N1"},
		{"CombinationnumberofrectangularwidelinesegmentsN2","�����ο��߶������N2"},
		{"NumberofrectangularshapesN3","����������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�����߶���N2, 6);
	DefineLangVarInt(�����߶���N3, 1);
	DefineLangVarInt(����߶���N3, 3);
	ColPrintf(PrintfCol::����, Lang("P50��һ ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ����ͼ�й��ж��ٸ�������?"));
	typedef ScanningLine<14, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	int offX = 0;
	int offY = 0;
	
	
	for (int j = 0;j <= 5;j++)
	{
		std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(1 + offY)},{float(3 + offX),float(1 + offY)},{float(3 + offX),float(1.5 + offY)} };
		test.AddPolygon(ScanningLineT::Point(float(1 + offX), float(1.5 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
		offX = offX + 2;
	};
	offX = 0;
	 offY = 0;
	for (int i = 0;i <= 1;i++)
	{
		for (int j = 0;j <= 5;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(1.5 + offY)},{float(3 + offX),float(1.5 + offY)},{float(3 + offX),float(4.5 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(1 + offX), float(4.5 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 3;
	}
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	
	DefineLangVarInt(�����γ����߶������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳤���γ����߶������N1 �����γ����߶������N1=�����߶���N2+(�����߶���N2-�����߶���N3)+(�����߶���N2-�����߶���N3-�����߶���N3)+(�����߶���N2-�����߶���N3-�����߶���N3-�����߶���N3)+(�����߶���N2-�����߶���N3-�����߶���N3-�����߶���N3-�����߶���N3)+(�����߶���N2-�����߶���N3-�����߶���N3-�����߶���N3-�����߶���N3-�����߶���N3)"));
	�����γ����߶������N1 = �����߶���N2 + (�����߶���N2 - �����߶���N3) + (�����߶���N2 - �����߶���N3 - �����߶���N3) + (�����߶���N2 - �����߶���N3 - �����߶���N3 - �����߶���N3) + (�����߶���N2 - �����߶���N3 - �����߶���N3 - �����߶���N3 - �����߶���N3) + (�����߶���N2 - �����߶���N3 - �����߶���N3 - �����߶���N3 - �����߶���N3 - �����߶���N3);
	�����γ����߶������N1.PrintProcessLog(1);
	DefineLangVarInt(�����ο��߶������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㳤���ο��߶������N2 �����ο��߶������N2=����߶���N3+(����߶���N3-�����߶���N3)+(����߶���N3-�����߶���N3-�����߶���N3)"));
	�����ο��߶������N2 = ����߶���N3 + (����߶���N3 - �����߶���N3) + (����߶���N3 - �����߶���N3 - �����߶���N3);
	�����ο��߶������N2.PrintProcessLog(2);
	DefineLangVarInt(����������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳤��������N3 ����������N3=�����γ����߶������N1*�����ο��߶������N2"));
	����������N3 = �����γ����߶������N1 * �����ο��߶������N2;
	����������N3.PrintProcessLog(3);
}
void P50_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P50 Example 2 Graphic Count","P50���� ͼ�μ���"},
		{"Title: Count, how many rectangles are there in the picture?",
		"��Ŀ:��һ����ͼ�й��ж��ٸ�������?"},
		{"1. Calculate the length N1 of the horizontal rectangle. The length N1 of the horizontal rectangle is equal to the number of horizontal lines N1+(number of horizontal lines N1- number of added lines N2)+(number of horizontal lines\nN1- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2- number of added lines N2)+(number of horizontal lines N1-\nnumber of added lines N2- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2- number of added lines N2) N2- Number of additional lines N2- Number of additional\nlines N2- Number of additional lines N2)",
		"1.�����ĳ����γ���N1 ��ĳ����γ���N1=�᳤����N1+(�᳤����N1-������N2)+(�᳤����N1-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2-������N2-������N2-������N2)"},
		{"2. Calculate the number of horizontal rectangles N2=the length of the horizontal rectangle N1 * the width of the horizontal rectangle N2��",
		"2.����᳤������N2 �᳤������N2=��ĳ����γ���N1*��ĳ����ο���N2"},
		{"3. Calculate the number of vertical rectangles N3=(number of vertical lines N3+(number of vertical lines N3- number of additional lines N2)+(number of vertical lines N3- number of additional lines N2)) * (number of vertical lines\nN3+(number of vertical lines N3- number of additional lines N2)+(number of vertical lines N3- number of additional lines N2)",
		"3.�������ĳ�������N3 ���ĳ�������N3=(��������N3+(��������N3-������N2)+(��������N3-������N2-������N2))*(��������N3+(��������N3-������N2)+(��������N3-������N2-������N2))"},
		{"4. Calculate the number of rectangles with middle repeats N4=the number of horizontal rectangles N2+the number of vertical rectangles N3",
		"4.������м��ظ��ĳ�������N4 ���м��ظ��ĳ�������N4=�᳤������N2+���ĳ�������N3"},
		{"5. Calculate the number of repeated rectangles N5=(length of repeated part N1+(length of repeated part N1- number of added lines N2)+(length of repeated part N1- number of added lines N2- number of added lines N2)",
		"5.�����ظ����ֳ�������N5 �ظ����ֳ�������N5=(�ظ����ֳ�N1+(�ظ����ֳ�N1-������N2)+(�ظ����ֳ�N1-������N2-������N2)"},
		{"6. Calculate the number of rectangles N4. The number of rectangles N4 is equal to the number of rectangles with middle repeats N4 minus the number of repeating rectangles N5",
		"6.���㳤������N4 ��������N4=���м��ظ��ĳ�������N4-�ظ����ֳ�������N5"},
		//������
		{"NumberofhorizontallinesN1","�᳤����N1"},
		{"NumberofadditionallinesN2","������N2"},
		{"HorizontalrectanglewidthN2","��ĳ����ο���N2"},
		{"NumberofverticallinesN3","��������N3"},
		{"RepetitivepartlengthN1","�ظ����ֳ�N1"},
		{"HorizontalrectanglelengthN1","��ĳ����γ���N1"},
		{"NumberofhorizontalrectanglesN2","�᳤������N2"},
		{"NumberofverticalrectanglesN3","���ĳ�������N3"},
		{"NumberofrectangleswithrepeatedmiddleN4","���м��ظ��ĳ�������N4"},
		{"NumberofrepeatedrectanglesN5","�ظ����ֳ�������N5"},
		{"NumberofrectanglesN4","��������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�᳤����N1, 7);
	DefineLangVarInt(������N2, 1);
	DefineLangVarInt(��ĳ����ο���N2, 1);
	DefineLangVarInt(��������N3, 3);
	DefineLangVarInt(�ظ����ֳ�N1, 3);
	ColPrintf(PrintfCol::����, Lang("P50���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:��һ����ͼ�й��ж��ٸ�������?"));
	typedef ScanningLine<14, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	float offX = 0;
	float offY = 0;
	for (int j = 0;j <= 5;j++)
	{
		std::vector<ScanningLineT::Point> Vex1 = { {float(2 + offX),float(3.5 + offY)},{float(3 + offX),float(3.5 + offY)},{float(3 + offX),float(4.5 + offY)} };
		test.AddPolygon(ScanningLineT::Point(float(2 + offX), float(4.5 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
		offX = offX + 1;
	};
	offX = 0;
	for (int i = 0;i <= 1;i++)
	{
		for (int j = 0;j <= 2;j++)
		{
			std::vector<ScanningLineT::Point> Vex2 = { {float(3 + offX),float(2 + offY)},{float(4 + offX),float(2 + offY)},{float(4 + offX),float(4.5 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(3 + offX), float(4.5 + offY)), Vex2, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 1;
		}
		offX = 0;
		offY = offY + 1.5;
	}
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(��ĳ����γ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ĳ����γ���N1 ��ĳ����γ���N1=�᳤����N1+(�᳤����N1-������N2)+(�᳤����N1-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2-������N2-������N2-������N2)"));
	��ĳ����γ���N1 = �᳤����N1 + (�᳤����N1 - ������N2) + (�᳤����N1 - ������N2 - ������N2) + (�᳤����N1 - ������N2 - ������N2 - ������N2) + (�᳤����N1 - ������N2 - ������N2 - ������N2 - ������N2) + (�᳤����N1 - ������N2 - ������N2 - ������N2 - ������N2 - ������N2) + (�᳤����N1 - ������N2 - ������N2 - ������N2 - ������N2 - ������N2 - ������N2);
	��ĳ����γ���N1.PrintProcessLog(1);
	DefineLangVarInt(�᳤������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����᳤������N2 �᳤������N2=��ĳ����γ���N1*��ĳ����ο���N2"));
	�᳤������N2 = ��ĳ����γ���N1 * ��ĳ����ο���N2;
	�᳤������N2.PrintProcessLog(2);
	DefineLangVarInt(���ĳ�������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�������ĳ�������N3 ���ĳ�������N3=(��������N3+(��������N3-������N2)+(��������N3-������N2-������N2))*(��������N3+(��������N3-������N2)+(��������N3-������N2-������N2))"));
	���ĳ�������N3 = (��������N3 + (��������N3 - ������N2) + (��������N3 - ������N2 - ������N2)) * (��������N3 + (��������N3 - ������N2) + (��������N3 - ������N2 - ������N2));
	���ĳ�������N3.PrintProcessLog(3);
	DefineLangVarInt(���м��ظ��ĳ�������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������м��ظ��ĳ�������N4 ���м��ظ��ĳ�������N4=�᳤������N2+���ĳ�������N3"));
	���м��ظ��ĳ�������N4 = �᳤������N2 + ���ĳ�������N3;
	���м��ظ��ĳ�������N4.PrintProcessLog(4);
	DefineLangVarInt(�ظ����ֳ�������N5, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����ظ����ֳ�������N5 �ظ����ֳ�������N5=(�ظ����ֳ�N1+(�ظ����ֳ�N1-������N2)+(�ظ����ֳ�N1-������N2-������N2)"));
	�ظ����ֳ�������N5 = (�ظ����ֳ�N1 + (�ظ����ֳ�N1 - ������N2) + (�ظ����ֳ�N1 - ������N2 - ������N2));
	�ظ����ֳ�������N5.PrintProcessLog(5);
	DefineLangVarInt(��������N4, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㳤������N4 ��������N4=���м��ظ��ĳ�������N4-�ظ����ֳ�������N5"));
	��������N4 = ���м��ظ��ĳ�������N4 - �ظ����ֳ�������N5;
	��������N4.PrintProcessLog(6);
}
void P50_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P50 Example Three Graphic Counting","P50���� ͼ�μ���"},
		{"Title: Count, how many rectangles are there in the picture?",
		"��Ŀ:��һ����ͼ�й��ж��ٸ�������?"},
		{"1. Calculate the length N1 of the horizontal rectangle. The length N1 of the horizontal rectangle is equal to the number of horizontal lines N1+(number of horizontal lines N1- number of added lines N2)+(number of horizontal lines\nN1- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2- number of added lines N2)+(number of horizontal lines N1-\nnumber of added lines N2- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2- number of added lines N2) N2- Number of additional lines N2- Number of additional\nlines N2- Number of additional lines N2)",
		"1.�����ĳ����γ���N1 ��ĳ����γ���N1=�᳤����N1+(�᳤����N1-������N2)+(�᳤����N1-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2)"},
		{"2. Calculate the number of horizontal rectangles N2=the length of the horizontal rectangle N1 * the width of the horizontal rectangle N2��",
		"2.����᳤������N2 �᳤������N2=��ĳ����γ���N1*��ĳ����ο���N2"},
		{"3. Calculate the number of vertical rectangles N3=(number of vertical lines N3+(number of vertical lines N3- number of additional lines N2)+(number of vertical lines N3- number of additional lines N2)) * (number of vertical lines\nN3+(number of vertical lines N3- number of additional lines N2)+(number of vertical lines N3- number of additional lines N2)",
		"3.�������ĳ�������N3 ���ĳ�������N3=(��������N3+(��������N3-������N2)+(��������N3-������N2-������N2)+(��������N3-������N2-������N2-������N2))*(��������N3+(��������N3-������N2))"},
		{"4. Calculate the number of rectangles with middle repeats N4=the number of horizontal rectangles N2+the number of vertical rectangles N3",
		"4.������м��ظ��ĳ�������N4 ���м��ظ��ĳ�������N4=�᳤������N2+���ĳ�������N3"},
		{"5. Calculate the number of repeated rectangles N5=(length of repeated part N1+(length of repeated part N1- number of added lines N2)+(length of repeated part N1- number of added lines N2- number of added lines N2)",
		"5.�����ظ����ֳ�������N5 �ظ����ֳ�������N5=(�ظ����ֳ�N1+(�ظ����ֳ�N1-������N2))*(�ظ����ֳ�N1+(�ظ����ֳ�N1-������N2))"},
		{"6. Calculate the number of rectangles N4. The number of rectangles N4 is equal to the number of rectangles with middle repeats N4 minus the number of repeating rectangles N5",
		"6.���㳤������N4 ��������N4=���м��ظ��ĳ�������N4-�ظ����ֳ�������N5"},
		//������
		{"NumberofhorizontallinesN1","�᳤����N1"},
		{"NumberofadditionallinesN2","������N2"},
		{"HorizontalrectanglewidthN2","��ĳ����ο���N2"},
		{"NumberofverticallinesN3","��������N3"},
		{"NumberofverticalwidthlinesN3","��������N3"},
		{"RepetitivepartlengthN1","�ظ����ֳ�N1"},
		{"RepetitivepartwidthN1","�ظ����ֿ�N1"},
		{"HorizontalrectanglelengthN1","��ĳ����γ���N1"},
		{"NumberofhorizontalrectanglesN2","�᳤������N2"},
		{"NumberofverticalrectanglesN3","���ĳ�������N3"},
		{"NumberofrectangleswithrepeatedmiddleN4","���м��ظ��ĳ�������N4"},
		{"NumberofrepeatedrectanglesN5","�ظ����ֳ�������N5"},
		{"NumberofrectanglesN4","��������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�᳤����N1, 4);
	DefineLangVarInt(������N2, 1);
	DefineLangVarInt(��ĳ����ο���N2, 3);
	DefineLangVarInt(��������N3, 4);
	DefineLangVarInt(��������N3, 2);
	DefineLangVarInt(�ظ����ֳ�N1, 2);
	ColPrintf(PrintfCol::����, Lang("P50���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:��һ����ͼ�й��ж��ٸ�������?"));
	typedef ScanningLine<12, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	int offX = 0;
	int offY = 0;
	for (int i = 0;i <= 3;i++)
	{
		for (int j = 0;j <= 1;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(2 + offX),float(1 + offY)},{float(4 + offX),float(1 + offY)},{float(4 + offX),float(3 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(2 + offX), float(3 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	};
	offX = 0;
	offY = 0;
	for (int i = 0;i <= 1;i++)
	{
		for (int j = 0;j <= 3;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(0 + offX),float(3 + offY)},{float(2 + offX),float(3 + offY)},{float(2 + offX),float(5 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(0 + offX), float(5 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	};
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(��ĳ����γ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ĳ����γ���N1 ��ĳ����γ���N1=�᳤����N1+(�᳤����N1-������N2)+(�᳤����N1-������N2-������N2)+(�᳤����N1-������N2-������N2-������N2)"));
	��ĳ����γ���N1 = �᳤����N1 + (�᳤����N1 - ������N2) + (�᳤����N1 - ������N2 - ������N2) + (�᳤����N1 - ������N2 - ������N2 - ������N2);
	��ĳ����γ���N1.PrintProcessLog(1);
	DefineLangVarInt(�᳤������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����᳤������N2 �᳤������N2=��ĳ����γ���N1*��ĳ����ο���N2"));
	�᳤������N2 = ��ĳ����γ���N1 * ��ĳ����ο���N2;
	�᳤������N2.PrintProcessLog(2);
	DefineLangVarInt(���ĳ�������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�������ĳ�������N3 ���ĳ�������N3=(��������N3+(��������N3-������N2)+(��������N3-������N2-������N2)+(��������N3-������N2-������N2-������N2))*(��������N3+(��������N3-������N2))"));
	���ĳ�������N3 = (��������N3 + (��������N3 - ������N2) + (��������N3 - ������N2 - ������N2) + (��������N3 - ������N2 - ������N2 - ������N2)) * (��������N3 + (��������N3 - ������N2));
	���ĳ�������N3.PrintProcessLog(3);
	DefineLangVarInt(���м��ظ��ĳ�������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������м��ظ��ĳ�������N4 ���м��ظ��ĳ�������N4=�᳤������N2+���ĳ�������N3"));
	���м��ظ��ĳ�������N4 = �᳤������N2 + ���ĳ�������N3;
	���м��ظ��ĳ�������N4.PrintProcessLog(4);
	DefineLangVarInt(�ظ����ֳ�������N5, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����ظ����ֳ�������N5 �ظ����ֳ�������N5=(�ظ����ֳ�N1+(�ظ����ֳ�N1-������N2))*(�ظ����ֳ�N1+(�ظ����ֳ�N1-������N2))"));
	�ظ����ֳ�������N5 = (�ظ����ֳ�N1 + (�ظ����ֳ�N1 - ������N2)) * (�ظ����ֳ�N1 + (�ظ����ֳ�N1 - ������N2));
	�ظ����ֳ�������N5.PrintProcessLog(5);
	DefineLangVarInt(��������N4, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㳤������N4 ��������N4=���м��ظ��ĳ�������N4-�ظ����ֳ�������N5"));
	��������N4 = ���м��ظ��ĳ�������N4 - �ظ����ֳ�������N5;
	��������N4.PrintProcessLog(6);
}
void P50_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P50 Example 4 Graphic Counting","P50���� ͼ�μ���"},
		{"Title: Combine 20 small squares with a side length of 1 to form a 4 * 5 large square with a pentagram in the middle. Find a square containing a pentagon",
		"��Ŀ����20���߳�Ϊ1��С������ƴ��һ��4*5�Ĵ��������м�������ǣ������5���ε�������"},
		{"1. Calculate the length of N1, which is equal to N1 with a side length of one, N2 with a side length of two, N2 with a side length of two, N2 with a side length of two, and N1 with a side length of one",
		"1.���㺬�ĳ�N1 ���ĳ�N1=�߳�Ϊһ��N1+�߳�Ϊ������N2+�߳�Ϊ������N2+�߳�Ϊ������N2+�߳�Ϊһ��N1"},
		{"2. Calculate N2 with width=N1 with side length of one+N2 with side length of two+N2 with side length of two+N1 with side length of one",
		"2.���㺬���N2 �����N2=�߳�Ϊһ��N1+�߳�Ϊ������N2+�߳�Ϊ������N2+�߳�Ϊһ��N1"},
		{"3. Calculate the number of rectangles N3=length N1 * width N2",
		"3.���㳤������N3 ��������N3=���ĳ�N1*�����N2"},
		//������
		{"N1withasidelengthofone","�߳�Ϊһ��N1"},
		{"Sidelengthistwo,quantityN2","�߳�Ϊ������N2"},
		{"ContainingalengthofN1","���ĳ�N1"},
		{"N2withwidthincluded","�����N2"},
		{"NumberofrectanglesN3","��������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�߳�Ϊһ��N1, 1);
	DefineLangVarInt(�߳�Ϊ������N2, 2);
	ColPrintf(PrintfCol::����, Lang("P50���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����20���߳�Ϊ1��С������ƴ��һ��4*5�Ĵ��������м�������ǣ������5���ε�������"));
	DefineLangVarInt(���ĳ�N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㺬�ĳ�N1 ���ĳ�N1=�߳�Ϊһ��N1+�߳�Ϊ������N2+�߳�Ϊ������N2+�߳�Ϊ������N2+�߳�Ϊһ��N1"));
	���ĳ�N1 = �߳�Ϊһ��N1 + �߳�Ϊ������N2 + �߳�Ϊ������N2 + �߳�Ϊ������N2 + �߳�Ϊһ��N1;
	���ĳ�N1.PrintProcessLog(1);
	DefineLangVarInt(�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㺬���N2 �����N2=�߳�Ϊһ��N1+�߳�Ϊ������N2+�߳�Ϊ������N2+�߳�Ϊһ��N1"));
	�����N2 = �߳�Ϊһ��N1 + �߳�Ϊ������N2 + �߳�Ϊ������N2 + �߳�Ϊһ��N1;
	�����N2.PrintProcessLog(2);
	DefineLangVarInt(��������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳤������N3 ��������N3=���ĳ�N1*�����N2"));
	��������N3 = ���ĳ�N1 * �����N2;
	��������N3.PrintProcessLog(3);
}
void P50()
{
	P50_1();
	ColPrintf(PrintfCol::����, "");
	P50_2();
	ColPrintf(PrintfCol::����, "");
	P50_3();
	ColPrintf(PrintfCol::����, "");
	P50_4();
	ColPrintf(PrintfCol::����, "");
}
void P50_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P50();
	Lang.SetCurLanguage(LanguageLib::English);
	P50();
	ColPrintf(PrintfCol::����, "");

}