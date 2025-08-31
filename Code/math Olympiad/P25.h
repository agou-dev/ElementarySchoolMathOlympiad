#pragma once
void P25_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P25 Case One Cut and Supplement Method","P25例一 割补法"},
		{"Title: As shown in the figure, calculate the shadow area",
		"题目：如图所示，计算阴影面积"},
		{"1. Calculate the area S of the entire circle. The area S of the entire circle is equal to (radius R * radius R) * pi",
		"1.计算整个圆的面积S1 整个圆的面积S1=(半径R1*半径R1)*圆周率PI1"},
		{"2. Calculate the shaded area S2, which is equal to the area of the entire circle S1 divided by the number of shaded areas N1",
		"2.计算阴影部分面积S2 阴影部分面积S2=整个圆的面积S1/有几份阴影部分面积N1"},
		{"Answer: The shaded area is%fcm",
		"答：阴影部分面积是%fcm"},
		//变量表
		{"Radius R1","半径R1"},                  //也是正方形的边长
		{"Pi (pi)","圆周率PI1"},
		{"There are several shaded areas with an area of N1","有几份阴影部分面积N1"},
		{"The area of the entire circle S1","整个圆的面积S1"},
		{"Shadow area S2","阴影部分面积S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,半径R1, 6);
	DefineLangVar(float,圆周率PI1, 3.14);
	DefineLangVar(float,有几份阴影部分面积N1, 4);

	/*
	单位：cm 
	 
					 6
		|---------------------------+
		|0--\						|			
		| 0		-\			        |	    
		|  00		 -\	            |			
		|   00    		  -\		|		
		|	 00      		   -\	|			
	   6|	   00	  				+6			
		|	    000				    |   \-
		|	      000			    |	    \-
		|		    000  		    |		   \-
		|		      000	  	    |			   \-
		|		         000	    |				   \-	
		|			        0000  	|		               \-
		|------------------------000+--------------------------\-
					 6				             6

	*/ 
	//
	const char* pPic =
		"单位:cm\n"
		"              6\n"
		" +--------------------------+\n"
		" |0--                       |\n"
		" | 0    --                  |\n"
		" |  00       --             |\n"
		" |   00           --        |\n"
		" |     00              --   |\n"
		"6+      00                  +6\n"
		" |       000                |   --\n"
		" |         000      00000000|        --\n"
		" |           000            |             --\n"
		" |             000          | 0000000000        --\n"
		" |                000       |                       --\n"
		" |                   0000   |                            --\n"
		" +-----------------------000+----------------------------------\n"
		"              6                               6\n";

	
	ColPrintf(PrintfCol::标题, Lang("P25例一 割补法"));
	ScanningLine<10, 5, 18, 8> test;

	typedef ScanningLine<10, 5, 18, 8>  ScanningLineT;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(4),float(1)},{float(4),float(4)}, };
	//正方形
	test.AddPolygon(ScanningLineT::Point(float(1), float(4)), Vex1, ScanningLineT::FillMode::EdgeMode, '*');
	unsigned int nSectorIndexA1 = test.AddTriangle(ScanningLineT::Point(1, 1), ScanningLineT::Point(4, 1), ScanningLineT::Point(4, 2.5), ScanningLineT::FillMode::EdgeMode, '*');
	unsigned int nSectorIndexB1=test.AddSector(	4, 1.0, 3.0, 180,270, ScanningLineT::FillMode::EdgeMode, '+');
	test.AddTriangle(ScanningLineT::Point(4, 4), ScanningLineT::Point(4, 2.5), ScanningLineT::Point(7, 4), ScanningLineT::FillMode::RealMode, '*');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//A或者B有一个命中nSectorIndexA
		bool InB1NotInA1 = test.SectorN(nSectorIndexB1)->Hit(p) & (!test.TriangleN(nSectorIndexA1)->Hit(p));
		return InB1NotInA1;
		};
	ScanningLineT::IncludeBox Box1;
	test.PolygonN(nSectorIndexA1)->GetBox(Box1);
	test.SectorN(nSectorIndexB1)->AddBox(Box1);
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示，计算阴影面积"));
	
	test.Clear();
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box1, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, 's');
	test.Printf(PrintfCol::Green);
	DefineLangVar(float,整个圆的面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算整个圆的面积S1 整个圆的面积S1=(半径R1*半径R1)*圆周率PI1"));
	整个圆的面积S1 = (半径R1 * 半径R1) * 圆周率PI1;
	整个圆的面积S1.PrintProcessLog(1);
	DefineLangVar(float,阴影部分面积S2, 0);;
	ColPrintf(PrintfCol::方法, Lang("2.计算阴影部分面积S2 阴影部分面积S2=整个圆的面积S1/有几份阴影部分面积N1"));
	阴影部分面积S2 = 整个圆的面积S1 / 有几份阴影部分面积N1;
	阴影部分面积S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：阴影部分面积是%fcm"),(float)阴影部分面积S2.Var);
}
void P25_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P25 Case two Cut and Supplement Method","P25例二 割补法"},
		{"Title: As shown in the figure, calculate the shadow area",
		"题目：如图所示，计算阴影面积"},
		{"1. Calculate the shadow area S1. Shadow area S1=side length A1 * side length A1/shadow area multiplied by the square N1",
		"1.计算阴影面积S1 阴影面积S1=边长A1*边长A1/阴影面积占正方形的倍数N1"},
		{"Answer: The shadow area S1 is %d cm",
		"答：阴影面积S1是%dcm"},
		//变量表
		{"Side length A1","边长A1"},
		{"Shadow area multiplied by square N1","阴影面积占正方形的倍数N1"},
		{"Shadow area S1","阴影面积S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(边长A1, 6);
	DefineLangVarInt(阴影面积占正方形的倍数N1, 2);
	const char* pPic =
		"单位:cm\n"
		"                                  +-------------------------------+\n"
		"                               000|000                            |\n"
		"                        0000     -|      0000                     |\n"
		"                   0000       -   |           0000                |\n"
		"                000        -      |               000             |\n"
		"            000         -         |                   000         |\n"
		"          00         -            |                      00       |\n"
		"       00         -              6+                        00     +\n"
		"     00        -                  |                          00   |\n"
		"    00      -                     |                           00  |\n"
		"   0     -                        |                             0 |\n"
		"  00  -                           |                             00|\n"
		"  0-                              |                              0|\n"
		" ---------------------------------+-------------------------------+\n"
;
	ColPrintf(PrintfCol::标题, Lang("P25例二 割补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示，计算阴影面积"));
	//ColPrintf(PrintfCol::标题, pPic);
	ScanningLine<10,5, 18, 8> test;
	typedef ScanningLine<10, 5, 18, 8>  ScanningLineT;
	unsigned int nSectorIndexA1 = test.AddSector(4, 4, 3, 0, 180.0, ScanningLine<18, 10>::FillMode::EdgeMode, '*', 0);
	unsigned int nTriIndexB1=test.AddTriangle(ScanningLineT::Point(1.0, 4.0 ), ScanningLineT::Point(4.0, 1.0 ), ScanningLineT::Point(4.0, 4.0 ), ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4.0 ),float(1.0 )},{float(7.0 ),float(1.0 )},{float(7.0 ),float(4.0 )}, };
	unsigned int nPolygonIndexC1=test.AddPolygon(ScanningLineT::Point(float(4.0 ), float(4.0 )), Vex1, ScanningLineT::FillMode::EdgeMode, '*');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//A或者B有一个命中nSectorIndexA
		bool InC1NotInA1 = test.PolygonN(nPolygonIndexC1)->Hit(p)& ( ! test.SectorN(nSectorIndexA1)->Hit(p));
		bool InA1AndNotInB1AndNotInC1 = test.SectorN(nSectorIndexA1)->Hit(p) & (!test.TriangleN(nTriIndexB1)->Hit(p) & (!test.PolygonN(nPolygonIndexC1)->Hit(p)));
		return InC1NotInA1 | InA1AndNotInB1AndNotInC1;
		};
	ScanningLineT::IncludeBox Box;
	test.SectorN(nSectorIndexA1)->GetBox(Box);
	test.TriangleN(nTriIndexB1)->AddBox(Box);
	test.PolygonN(nPolygonIndexC1)->AddBox(Box);
	ScanLenHorizontalLine(test, 1, 4.0, 3.0, 0.1);
	ScanLenHorizontalLine(test, 4, 4.0, 3.0, 0.1);
	test.AddText(PrintfCol::顶点标注, 1.5, 2.9, "6");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::EdgeMode, SetTheoryCondition1, '*');
	test.Printf(PrintfCol::Yellow);
	DefineLangVarInt(阴影面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算阴影面积S1 阴影面积S1=边长A1*边长A1/阴影面积占正方形的倍数N1"));
	阴影面积S1 = 边长A1 * 边长A1 / 阴影面积占正方形的倍数N1;
	阴影面积S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::结果, Lang("答：阴影面积S1是%dcm"), (int)阴影面积S1);
}
void P25()
{
	P25_1();
	ColPrintf(PrintfCol::方法, "");
	P25_2();
	ColPrintf(PrintfCol::方法, "");
}
void P25_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P25();
	Lang.SetCurLanguage(LanguageLib::English);
	P25();
	ColPrintf(PrintfCol::方法, "");
}