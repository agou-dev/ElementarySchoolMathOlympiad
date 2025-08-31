#pragma once
void P25_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P25 Case One Cut and Supplement Method","P25��һ ���"},
		{"Title: As shown in the figure, calculate the shadow area",
		"��Ŀ����ͼ��ʾ��������Ӱ���"},
		{"1. Calculate the area S of the entire circle. The area S of the entire circle is equal to (radius R * radius R) * pi",
		"1.��������Բ�����S1 ����Բ�����S1=(�뾶R1*�뾶R1)*Բ����PI1"},
		{"2. Calculate the shaded area S2, which is equal to the area of the entire circle S1 divided by the number of shaded areas N1",
		"2.������Ӱ�������S2 ��Ӱ�������S2=����Բ�����S1/�м�����Ӱ�������N1"},
		{"Answer: The shaded area is%fcm",
		"����Ӱ���������%fcm"},
		//������
		{"Radius R1","�뾶R1"},                  //Ҳ�������εı߳�
		{"Pi (pi)","Բ����PI1"},
		{"There are several shaded areas with an area of N1","�м�����Ӱ�������N1"},
		{"The area of the entire circle S1","����Բ�����S1"},
		{"Shadow area S2","��Ӱ�������S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,�뾶R1, 6);
	DefineLangVar(float,Բ����PI1, 3.14);
	DefineLangVar(float,�м�����Ӱ�������N1, 4);

	/*
	��λ��cm 
	 
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
		"��λ:cm\n"
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

	
	ColPrintf(PrintfCol::����, Lang("P25��һ ���"));
	ScanningLine<10, 5, 18, 8> test;

	typedef ScanningLine<10, 5, 18, 8>  ScanningLineT;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(4),float(1)},{float(4),float(4)}, };
	//������
	test.AddPolygon(ScanningLineT::Point(float(1), float(4)), Vex1, ScanningLineT::FillMode::EdgeMode, '*');
	unsigned int nSectorIndexA1 = test.AddTriangle(ScanningLineT::Point(1, 1), ScanningLineT::Point(4, 1), ScanningLineT::Point(4, 2.5), ScanningLineT::FillMode::EdgeMode, '*');
	unsigned int nSectorIndexB1=test.AddSector(	4, 1.0, 3.0, 180,270, ScanningLineT::FillMode::EdgeMode, '+');
	test.AddTriangle(ScanningLineT::Point(4, 4), ScanningLineT::Point(4, 2.5), ScanningLineT::Point(7, 4), ScanningLineT::FillMode::RealMode, '*');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//A����B��һ������nSectorIndexA
		bool InB1NotInA1 = test.SectorN(nSectorIndexB1)->Hit(p) & (!test.TriangleN(nSectorIndexA1)->Hit(p));
		return InB1NotInA1;
		};
	ScanningLineT::IncludeBox Box1;
	test.PolygonN(nSectorIndexA1)->GetBox(Box1);
	test.SectorN(nSectorIndexB1)->AddBox(Box1);
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ��������Ӱ���"));
	
	test.Clear();
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box1, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, 's');
	test.Printf(PrintfCol::Green);
	DefineLangVar(float,����Բ�����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������Բ�����S1 ����Բ�����S1=(�뾶R1*�뾶R1)*Բ����PI1"));
	����Բ�����S1 = (�뾶R1 * �뾶R1) * Բ����PI1;
	����Բ�����S1.PrintProcessLog(1);
	DefineLangVar(float,��Ӱ�������S2, 0);;
	ColPrintf(PrintfCol::����, Lang("2.������Ӱ�������S2 ��Ӱ�������S2=����Բ�����S1/�м�����Ӱ�������N1"));
	��Ӱ�������S2 = ����Բ�����S1 / �м�����Ӱ�������N1;
	��Ӱ�������S2.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("����Ӱ���������%fcm"),(float)��Ӱ�������S2.Var);
}
void P25_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P25 Case two Cut and Supplement Method","P25���� ���"},
		{"Title: As shown in the figure, calculate the shadow area",
		"��Ŀ����ͼ��ʾ��������Ӱ���"},
		{"1. Calculate the shadow area S1. Shadow area S1=side length A1 * side length A1/shadow area multiplied by the square N1",
		"1.������Ӱ���S1 ��Ӱ���S1=�߳�A1*�߳�A1/��Ӱ���ռ�����εı���N1"},
		{"Answer: The shadow area S1 is %d cm",
		"����Ӱ���S1��%dcm"},
		//������
		{"Side length A1","�߳�A1"},
		{"Shadow area multiplied by square N1","��Ӱ���ռ�����εı���N1"},
		{"Shadow area S1","��Ӱ���S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�߳�A1, 6);
	DefineLangVarInt(��Ӱ���ռ�����εı���N1, 2);
	const char* pPic =
		"��λ:cm\n"
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
	ColPrintf(PrintfCol::����, Lang("P25���� ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ��������Ӱ���"));
	//ColPrintf(PrintfCol::����, pPic);
	ScanningLine<10,5, 18, 8> test;
	typedef ScanningLine<10, 5, 18, 8>  ScanningLineT;
	unsigned int nSectorIndexA1 = test.AddSector(4, 4, 3, 0, 180.0, ScanningLine<18, 10>::FillMode::EdgeMode, '*', 0);
	unsigned int nTriIndexB1=test.AddTriangle(ScanningLineT::Point(1.0, 4.0 ), ScanningLineT::Point(4.0, 1.0 ), ScanningLineT::Point(4.0, 4.0 ), ScanningLineT::FillMode::EdgeMode, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(4.0 ),float(1.0 )},{float(7.0 ),float(1.0 )},{float(7.0 ),float(4.0 )}, };
	unsigned int nPolygonIndexC1=test.AddPolygon(ScanningLineT::Point(float(4.0 ), float(4.0 )), Vex1, ScanningLineT::FillMode::EdgeMode, '*');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//A����B��һ������nSectorIndexA
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
	test.AddText(PrintfCol::�����ע, 1.5, 2.9, "6");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::EdgeMode, SetTheoryCondition1, '*');
	test.Printf(PrintfCol::Yellow);
	DefineLangVarInt(��Ӱ���S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������Ӱ���S1 ��Ӱ���S1=�߳�A1*�߳�A1/��Ӱ���ռ�����εı���N1"));
	��Ӱ���S1 = �߳�A1 * �߳�A1 / ��Ӱ���ռ�����εı���N1;
	��Ӱ���S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::���, Lang("����Ӱ���S1��%dcm"), (int)��Ӱ���S1);
}
void P25()
{
	P25_1();
	ColPrintf(PrintfCol::����, "");
	P25_2();
	ColPrintf(PrintfCol::����, "");
}
void P25_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P25();
	Lang.SetCurLanguage(LanguageLib::English);
	P25();
	ColPrintf(PrintfCol::����, "");
}