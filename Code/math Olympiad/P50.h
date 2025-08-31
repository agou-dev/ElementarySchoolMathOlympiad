#pragma once
void P50_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P50 Example 1 Graphic Count","P50例一 图形计数"},
		{"Title: Count, how many rectangles are there in the picture?",
		"题目：数一数，图中共有多少个长方形?"},
		{"1. Calculate the number of combinations of rectangular line segments N1=the number of long line segments N2+(the number of long line segments N2- the number of increased line segments N3)+(the number of long line segments N2- the\nnumber of increased line segments N3- the number of increased line segments N3)+(the number of long line segments N2- the number of increased line segments N3- the number of increased line segments N3)+(the number of long line segments N2- the number of increased line segments N3- the number of increased line segments\nN3- the number of increased line segments N3)+(the number of long line segments N2- the number of increased line segments N3- the number of increased line segments N3- the number of increased line segments N3)",
		"1.计算长方形长的线段组合数N1 长方形长的线段组合数N1=长的线段数N2+(长的线段数N2-增加线段数N3)+(长的线段数N2-增加线段数N3-增加线段数N3)+(长的线段数N2-增加线段数N3-增加线段数N3-增加线段数N3)+(长的线段数N2-增加线段数N3-增加线段数N3-增加线段数N3-增加线段数N3)+(长的线段数N2-增加线段数N3-增加线段数N3-增加线段数N3-增加线段数N3-增加线段数N3)"},
		{"2. Calculate the number of combinations of rectangular wide line segments N2=the number of wide line segments N3+(the number of wide line segments N3- the number of increased line segments N3)+(the number of wide line segments N3-\nthe number of increased line segments N3- the number of increased line segments N3)",
		"2.计算长方形宽线段组合数N2 长方形宽线段组合数N2=宽的线段数N3+(宽的线段数N3-增加线段数N3)+(宽的线段数N3-增加线段数N3-增加线段数N3)"},
		{"3. Calculate the number of rectangular types N3=the number of combinations of rectangular long line segments N1 * the number of combinations of rectangular wide line segments N2",
		"3.计算长方形种数N3 长方形种数N3=长方形长的线段组合数N1*长方形宽线段组合数N2"},
		//变量表
		{"NumberoflonglinesegmentsN2","长的线段数N2"},
		{"IncreasethenumberoflinesegmentsN3","增加线段数N3"},
		{"ThenumberofwidelinesegmentsN3","宽的线段数N3"},
		{"NumberofcombinationsofrectangularlinesegmentsN1","长方形长的线段组合数N1"},
		{"CombinationnumberofrectangularwidelinesegmentsN2","长方形宽线段组合数N2"},
		{"NumberofrectangularshapesN3","长方形种数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(长的线段数N2, 6);
	DefineLangVarInt(增加线段数N3, 1);
	DefineLangVarInt(宽的线段数N3, 3);
	ColPrintf(PrintfCol::标题, Lang("P50例一 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：数一数，图中共有多少个长方形?"));
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
	
	DefineLangVarInt(长方形长的线段组合数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算长方形长的线段组合数N1 长方形长的线段组合数N1=长的线段数N2+(长的线段数N2-增加线段数N3)+(长的线段数N2-增加线段数N3-增加线段数N3)+(长的线段数N2-增加线段数N3-增加线段数N3-增加线段数N3)+(长的线段数N2-增加线段数N3-增加线段数N3-增加线段数N3-增加线段数N3)+(长的线段数N2-增加线段数N3-增加线段数N3-增加线段数N3-增加线段数N3-增加线段数N3)"));
	长方形长的线段组合数N1 = 长的线段数N2 + (长的线段数N2 - 增加线段数N3) + (长的线段数N2 - 增加线段数N3 - 增加线段数N3) + (长的线段数N2 - 增加线段数N3 - 增加线段数N3 - 增加线段数N3) + (长的线段数N2 - 增加线段数N3 - 增加线段数N3 - 增加线段数N3 - 增加线段数N3) + (长的线段数N2 - 增加线段数N3 - 增加线段数N3 - 增加线段数N3 - 增加线段数N3 - 增加线段数N3);
	长方形长的线段组合数N1.PrintProcessLog(1);
	DefineLangVarInt(长方形宽线段组合数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算长方形宽线段组合数N2 长方形宽线段组合数N2=宽的线段数N3+(宽的线段数N3-增加线段数N3)+(宽的线段数N3-增加线段数N3-增加线段数N3)"));
	长方形宽线段组合数N2 = 宽的线段数N3 + (宽的线段数N3 - 增加线段数N3) + (宽的线段数N3 - 增加线段数N3 - 增加线段数N3);
	长方形宽线段组合数N2.PrintProcessLog(2);
	DefineLangVarInt(长方形种数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算长方形种数N3 长方形种数N3=长方形长的线段组合数N1*长方形宽线段组合数N2"));
	长方形种数N3 = 长方形长的线段组合数N1 * 长方形宽线段组合数N2;
	长方形种数N3.PrintProcessLog(3);
}
void P50_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P50 Example 2 Graphic Count","P50例二 图形计数"},
		{"Title: Count, how many rectangles are there in the picture?",
		"题目:数一数，图中共有多少个长方形?"},
		{"1. Calculate the length N1 of the horizontal rectangle. The length N1 of the horizontal rectangle is equal to the number of horizontal lines N1+(number of horizontal lines N1- number of added lines N2)+(number of horizontal lines\nN1- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2- number of added lines N2)+(number of horizontal lines N1-\nnumber of added lines N2- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2- number of added lines N2) N2- Number of additional lines N2- Number of additional\nlines N2- Number of additional lines N2)",
		"1.计算横的长方形长数N1 横的长方形长数N1=横长线数N1+(横长线数N1-增线数N2)+(横长线数N1-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2-增线数N2-增线数N2-增线数N2)"},
		{"2. Calculate the number of horizontal rectangles N2=the length of the horizontal rectangle N1 * the width of the horizontal rectangle N2“",
		"2.计算横长方形数N2 横长方形数N2=横的长方形长数N1*横的长方形宽数N2"},
		{"3. Calculate the number of vertical rectangles N3=(number of vertical lines N3+(number of vertical lines N3- number of additional lines N2)+(number of vertical lines N3- number of additional lines N2)) * (number of vertical lines\nN3+(number of vertical lines N3- number of additional lines N2)+(number of vertical lines N3- number of additional lines N2)",
		"3.计算竖的长方形数N3 竖的长方形数N3=(竖长线数N3+(竖长线数N3-增线数N2)+(竖长线数N3-增线数N2-增线数N2))*(竖长线数N3+(竖长线数N3-增线数N2)+(竖长线数N3-增线数N2-增线数N2))"},
		{"4. Calculate the number of rectangles with middle repeats N4=the number of horizontal rectangles N2+the number of vertical rectangles N3",
		"4.计算带中间重复的长方形数N4 带中间重复的长方形数N4=横长方形数N2+竖的长方形数N3"},
		{"5. Calculate the number of repeated rectangles N5=(length of repeated part N1+(length of repeated part N1- number of added lines N2)+(length of repeated part N1- number of added lines N2- number of added lines N2)",
		"5.计算重复部分长方形数N5 重复部分长方形数N5=(重复部分长N1+(重复部分长N1-增线数N2)+(重复部分长N1-增线数N2-增线数N2)"},
		{"6. Calculate the number of rectangles N4. The number of rectangles N4 is equal to the number of rectangles with middle repeats N4 minus the number of repeating rectangles N5",
		"6.计算长方形数N4 长方形数N4=带中间重复的长方形数N4-重复部分长方形数N5"},
		//变量表
		{"NumberofhorizontallinesN1","横长线数N1"},
		{"NumberofadditionallinesN2","增线数N2"},
		{"HorizontalrectanglewidthN2","横的长方形宽数N2"},
		{"NumberofverticallinesN3","竖长线数N3"},
		{"RepetitivepartlengthN1","重复部分长N1"},
		{"HorizontalrectanglelengthN1","横的长方形长数N1"},
		{"NumberofhorizontalrectanglesN2","横长方形数N2"},
		{"NumberofverticalrectanglesN3","竖的长方形数N3"},
		{"NumberofrectangleswithrepeatedmiddleN4","带中间重复的长方形数N4"},
		{"NumberofrepeatedrectanglesN5","重复部分长方形数N5"},
		{"NumberofrectanglesN4","长方形数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(横长线数N1, 7);
	DefineLangVarInt(增线数N2, 1);
	DefineLangVarInt(横的长方形宽数N2, 1);
	DefineLangVarInt(竖长线数N3, 3);
	DefineLangVarInt(重复部分长N1, 3);
	ColPrintf(PrintfCol::标题, Lang("P50例二 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目:数一数，图中共有多少个长方形?"));
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
	DefineLangVarInt(横的长方形长数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算横的长方形长数N1 横的长方形长数N1=横长线数N1+(横长线数N1-增线数N2)+(横长线数N1-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2-增线数N2-增线数N2-增线数N2)"));
	横的长方形长数N1 = 横长线数N1 + (横长线数N1 - 增线数N2) + (横长线数N1 - 增线数N2 - 增线数N2) + (横长线数N1 - 增线数N2 - 增线数N2 - 增线数N2) + (横长线数N1 - 增线数N2 - 增线数N2 - 增线数N2 - 增线数N2) + (横长线数N1 - 增线数N2 - 增线数N2 - 增线数N2 - 增线数N2 - 增线数N2) + (横长线数N1 - 增线数N2 - 增线数N2 - 增线数N2 - 增线数N2 - 增线数N2 - 增线数N2);
	横的长方形长数N1.PrintProcessLog(1);
	DefineLangVarInt(横长方形数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算横长方形数N2 横长方形数N2=横的长方形长数N1*横的长方形宽数N2"));
	横长方形数N2 = 横的长方形长数N1 * 横的长方形宽数N2;
	横长方形数N2.PrintProcessLog(2);
	DefineLangVarInt(竖的长方形数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算竖的长方形数N3 竖的长方形数N3=(竖长线数N3+(竖长线数N3-增线数N2)+(竖长线数N3-增线数N2-增线数N2))*(竖长线数N3+(竖长线数N3-增线数N2)+(竖长线数N3-增线数N2-增线数N2))"));
	竖的长方形数N3 = (竖长线数N3 + (竖长线数N3 - 增线数N2) + (竖长线数N3 - 增线数N2 - 增线数N2)) * (竖长线数N3 + (竖长线数N3 - 增线数N2) + (竖长线数N3 - 增线数N2 - 增线数N2));
	竖的长方形数N3.PrintProcessLog(3);
	DefineLangVarInt(带中间重复的长方形数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算带中间重复的长方形数N4 带中间重复的长方形数N4=横长方形数N2+竖的长方形数N3"));
	带中间重复的长方形数N4 = 横长方形数N2 + 竖的长方形数N3;
	带中间重复的长方形数N4.PrintProcessLog(4);
	DefineLangVarInt(重复部分长方形数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算重复部分长方形数N5 重复部分长方形数N5=(重复部分长N1+(重复部分长N1-增线数N2)+(重复部分长N1-增线数N2-增线数N2)"));
	重复部分长方形数N5 = (重复部分长N1 + (重复部分长N1 - 增线数N2) + (重复部分长N1 - 增线数N2 - 增线数N2));
	重复部分长方形数N5.PrintProcessLog(5);
	DefineLangVarInt(长方形数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算长方形数N4 长方形数N4=带中间重复的长方形数N4-重复部分长方形数N5"));
	长方形数N4 = 带中间重复的长方形数N4 - 重复部分长方形数N5;
	长方形数N4.PrintProcessLog(6);
}
void P50_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P50 Example Three Graphic Counting","P50例三 图形计数"},
		{"Title: Count, how many rectangles are there in the picture?",
		"题目:数一数，图中共有多少个长方形?"},
		{"1. Calculate the length N1 of the horizontal rectangle. The length N1 of the horizontal rectangle is equal to the number of horizontal lines N1+(number of horizontal lines N1- number of added lines N2)+(number of horizontal lines\nN1- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2- number of added lines N2)+(number of horizontal lines N1-\nnumber of added lines N2- number of added lines N2- number of added lines N2)+(number of horizontal lines N1- number of added lines N2- number of added lines N2- number of added lines N2) N2- Number of additional lines N2- Number of additional\nlines N2- Number of additional lines N2)",
		"1.计算横的长方形长数N1 横的长方形长数N1=横长线数N1+(横长线数N1-增线数N2)+(横长线数N1-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2)"},
		{"2. Calculate the number of horizontal rectangles N2=the length of the horizontal rectangle N1 * the width of the horizontal rectangle N2“",
		"2.计算横长方形数N2 横长方形数N2=横的长方形长数N1*横的长方形宽数N2"},
		{"3. Calculate the number of vertical rectangles N3=(number of vertical lines N3+(number of vertical lines N3- number of additional lines N2)+(number of vertical lines N3- number of additional lines N2)) * (number of vertical lines\nN3+(number of vertical lines N3- number of additional lines N2)+(number of vertical lines N3- number of additional lines N2)",
		"3.计算竖的长方形数N3 竖的长方形数N3=(竖长线数N3+(竖长线数N3-增线数N2)+(竖长线数N3-增线数N2-增线数N2)+(竖长线数N3-增线数N2-增线数N2-增线数N2))*(竖宽线数N3+(竖宽线数N3-增线数N2))"},
		{"4. Calculate the number of rectangles with middle repeats N4=the number of horizontal rectangles N2+the number of vertical rectangles N3",
		"4.计算带中间重复的长方形数N4 带中间重复的长方形数N4=横长方形数N2+竖的长方形数N3"},
		{"5. Calculate the number of repeated rectangles N5=(length of repeated part N1+(length of repeated part N1- number of added lines N2)+(length of repeated part N1- number of added lines N2- number of added lines N2)",
		"5.计算重复部分长方形数N5 重复部分长方形数N5=(重复部分长N1+(重复部分长N1-增线数N2))*(重复部分长N1+(重复部分长N1-增线数N2))"},
		{"6. Calculate the number of rectangles N4. The number of rectangles N4 is equal to the number of rectangles with middle repeats N4 minus the number of repeating rectangles N5",
		"6.计算长方形数N4 长方形数N4=带中间重复的长方形数N4-重复部分长方形数N5"},
		//变量表
		{"NumberofhorizontallinesN1","横长线数N1"},
		{"NumberofadditionallinesN2","增线数N2"},
		{"HorizontalrectanglewidthN2","横的长方形宽数N2"},
		{"NumberofverticallinesN3","竖长线数N3"},
		{"NumberofverticalwidthlinesN3","竖宽线数N3"},
		{"RepetitivepartlengthN1","重复部分长N1"},
		{"RepetitivepartwidthN1","重复部分宽N1"},
		{"HorizontalrectanglelengthN1","横的长方形长数N1"},
		{"NumberofhorizontalrectanglesN2","横长方形数N2"},
		{"NumberofverticalrectanglesN3","竖的长方形数N3"},
		{"NumberofrectangleswithrepeatedmiddleN4","带中间重复的长方形数N4"},
		{"NumberofrepeatedrectanglesN5","重复部分长方形数N5"},
		{"NumberofrectanglesN4","长方形数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(横长线数N1, 4);
	DefineLangVarInt(增线数N2, 1);
	DefineLangVarInt(横的长方形宽数N2, 3);
	DefineLangVarInt(竖长线数N3, 4);
	DefineLangVarInt(竖宽线数N3, 2);
	DefineLangVarInt(重复部分长N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P50例三 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目:数一数，图中共有多少个长方形?"));
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
	DefineLangVarInt(横的长方形长数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算横的长方形长数N1 横的长方形长数N1=横长线数N1+(横长线数N1-增线数N2)+(横长线数N1-增线数N2-增线数N2)+(横长线数N1-增线数N2-增线数N2-增线数N2)"));
	横的长方形长数N1 = 横长线数N1 + (横长线数N1 - 增线数N2) + (横长线数N1 - 增线数N2 - 增线数N2) + (横长线数N1 - 增线数N2 - 增线数N2 - 增线数N2);
	横的长方形长数N1.PrintProcessLog(1);
	DefineLangVarInt(横长方形数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算横长方形数N2 横长方形数N2=横的长方形长数N1*横的长方形宽数N2"));
	横长方形数N2 = 横的长方形长数N1 * 横的长方形宽数N2;
	横长方形数N2.PrintProcessLog(2);
	DefineLangVarInt(竖的长方形数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算竖的长方形数N3 竖的长方形数N3=(竖长线数N3+(竖长线数N3-增线数N2)+(竖长线数N3-增线数N2-增线数N2)+(竖长线数N3-增线数N2-增线数N2-增线数N2))*(竖宽线数N3+(竖宽线数N3-增线数N2))"));
	竖的长方形数N3 = (竖长线数N3 + (竖长线数N3 - 增线数N2) + (竖长线数N3 - 增线数N2 - 增线数N2) + (竖长线数N3 - 增线数N2 - 增线数N2 - 增线数N2)) * (竖宽线数N3 + (竖宽线数N3 - 增线数N2));
	竖的长方形数N3.PrintProcessLog(3);
	DefineLangVarInt(带中间重复的长方形数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算带中间重复的长方形数N4 带中间重复的长方形数N4=横长方形数N2+竖的长方形数N3"));
	带中间重复的长方形数N4 = 横长方形数N2 + 竖的长方形数N3;
	带中间重复的长方形数N4.PrintProcessLog(4);
	DefineLangVarInt(重复部分长方形数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算重复部分长方形数N5 重复部分长方形数N5=(重复部分长N1+(重复部分长N1-增线数N2))*(重复部分长N1+(重复部分长N1-增线数N2))"));
	重复部分长方形数N5 = (重复部分长N1 + (重复部分长N1 - 增线数N2)) * (重复部分长N1 + (重复部分长N1 - 增线数N2));
	重复部分长方形数N5.PrintProcessLog(5);
	DefineLangVarInt(长方形数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算长方形数N4 长方形数N4=带中间重复的长方形数N4-重复部分长方形数N5"));
	长方形数N4 = 带中间重复的长方形数N4 - 重复部分长方形数N5;
	长方形数N4.PrintProcessLog(6);
}
void P50_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P50 Example 4 Graphic Counting","P50例四 图形计数"},
		{"Title: Combine 20 small squares with a side length of 1 to form a 4 * 5 large square with a pentagram in the middle. Find a square containing a pentagon",
		"题目：由20个边长为1的小正方形拼成一个4*5的大正方形中间有五角星，求出含5角形的正方形"},
		{"1. Calculate the length of N1, which is equal to N1 with a side length of one, N2 with a side length of two, N2 with a side length of two, N2 with a side length of two, and N1 with a side length of one",
		"1.计算含的长N1 含的长N1=边长为一的N1+边长为二数量N2+边长为二数量N2+边长为二数量N2+边长为一的N1"},
		{"2. Calculate N2 with width=N1 with side length of one+N2 with side length of two+N2 with side length of two+N1 with side length of one",
		"2.计算含宽的N2 含宽的N2=边长为一的N1+边长为二数量N2+边长为二数量N2+边长为一的N1"},
		{"3. Calculate the number of rectangles N3=length N1 * width N2",
		"3.计算长方形数N3 长方形数N3=含的长N1*含宽的N2"},
		//变量表
		{"N1withasidelengthofone","边长为一的N1"},
		{"Sidelengthistwo,quantityN2","边长为二数量N2"},
		{"ContainingalengthofN1","含的长N1"},
		{"N2withwidthincluded","含宽的N2"},
		{"NumberofrectanglesN3","长方形数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(边长为一的N1, 1);
	DefineLangVarInt(边长为二数量N2, 2);
	ColPrintf(PrintfCol::标题, Lang("P50例三 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：由20个边长为1的小正方形拼成一个4*5的大正方形中间有五角星，求出含5角形的正方形"));
	DefineLangVarInt(含的长N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算含的长N1 含的长N1=边长为一的N1+边长为二数量N2+边长为二数量N2+边长为二数量N2+边长为一的N1"));
	含的长N1 = 边长为一的N1 + 边长为二数量N2 + 边长为二数量N2 + 边长为二数量N2 + 边长为一的N1;
	含的长N1.PrintProcessLog(1);
	DefineLangVarInt(含宽的N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算含宽的N2 含宽的N2=边长为一的N1+边长为二数量N2+边长为二数量N2+边长为一的N1"));
	含宽的N2 = 边长为一的N1 + 边长为二数量N2 + 边长为二数量N2 + 边长为一的N1;
	含宽的N2.PrintProcessLog(2);
	DefineLangVarInt(长方形数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算长方形数N3 长方形数N3=含的长N1*含宽的N2"));
	长方形数N3 = 含的长N1 * 含宽的N2;
	长方形数N3.PrintProcessLog(3);
}
void P50()
{
	P50_1();
	ColPrintf(PrintfCol::方法, "");
	P50_2();
	ColPrintf(PrintfCol::方法, "");
	P50_3();
	ColPrintf(PrintfCol::方法, "");
	P50_4();
	ColPrintf(PrintfCol::方法, "");
}
void P50_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P50();
	Lang.SetCurLanguage(LanguageLib::English);
	P50();
	ColPrintf(PrintfCol::方法, "");

}