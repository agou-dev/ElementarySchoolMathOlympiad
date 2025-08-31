#pragma once
void P51_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 Example 1 Graphic Count","P51例一 图形计数"},
		{"Title: As shown in the figure, if a line segment has 6 vertices, how many line segments are there in the figure",
		"题目：如图，线段有6个顶点，那么图中有几条线段"},
		{"1. Calculate the number of repeated types N1=total number of vertices N1 * (total number of vertices N1- number of vertices selected each time N2)",
		"1.计算带有重复种数的种数N1 带有重复种数的种数N1=一共的顶点数N1*(一共的顶点数N1-每次选的顶点数N2)"},
		{"2. Calculate the number of repetitions N2. The number of repetitions N2=the number of vertices of each selected line segment N3 * (the number of vertices of each selected line segment N3- the number of vertices N2 selected each time)",
		"2.计算重复的种数N2 重复的种数N2=每次选的线段顶点数N3*(每次选的线段顶点数N3-每次选的顶点数N2)"},
		{"3. Calculate the number of non duplicated species N3=the number of duplicated species N1/the number of duplicated species N2",
		"3.计算不带重复种数N3 不带重复种数N3=带有重复种数的种数N1/重复的种数N2"},
		//变量表
		{"ThetotalnumberofverticesN1","一共的顶点数N1"},
		{"NumberofverticesselectedeachtimeN2","每次选的顶点数N2"},
		{"ThenumberofverticesN3selectedforeachlinesegment","每次选的线段顶点数N3"},
		{"NumberofduplicatespeciesN1","带有重复种数的种数N1"},
		{"NumberofrepeatedspeciesN2","重复的种数N2"},
		{"WithoutduplicatespeciesN3","不带重复种数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一共的顶点数N1, 6);
	DefineLangVarInt(每次选的顶点数N2, 1);
	DefineLangVarInt(每次选的线段顶点数N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P51例一 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图，线段有6个顶点，那么图中有几条线段"));
	const char* pPic =
		"|---------|----|-------|-----|-------|\n"
		;
	ColPrintf(PrintfCol::Green, pPic);
	DefineLangVarInt(带有重复种数的种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算带有重复种数的种数N1 带有重复种数的种数N1=一共的顶点数N1*(一共的顶点数N1-每次选的顶点数N2)"));
	带有重复种数的种数N1 = 一共的顶点数N1 * (一共的顶点数N1 - 每次选的顶点数N2);
	带有重复种数的种数N1.PrintProcessLog(1);
	DefineLangVarInt(重复的种数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算重复的种数N2 重复的种数N2=每次选的线段顶点数N3*(每次选的线段顶点数N3-每次选的顶点数N2)"));
	重复的种数N2 = 每次选的线段顶点数N3 * (每次选的线段顶点数N3 - 每次选的顶点数N2);
	重复的种数N2.PrintProcessLog(2);
	DefineLangVarInt(不带重复种数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算不带重复种数N3 不带重复种数N3=带有重复种数的种数N1/重复的种数N2"));
	不带重复种数N3 = 带有重复种数的种数N1 / 重复的种数N2;
	不带重复种数N3.PrintProcessLog(3);
	
}
void P51_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 Example 2 Graphic Counting","P51例二 图形计数"},
		{"Question: As shown in the figure, how many triangles are there in the figure when 6 line segments intersect with each other?",
		"题目：如图，6条线段互相交叉，那么图中有多少个三角形?"},
		{"1. Calculate the number of triangles with duplicates N1=total number of line segments N2 * (total number of line segments N2- number of line segments selected each time N3) * (total number of line segments N2- number of line segments selected each time N3-\nnumber of line segments selected each time N3)",
		"1.计算带重复的三角形数N1 带重复的三角形数N1=总共的线段总数N2*(总共的线段总数N2-每次选的线段数N3)*(总共的线段总数N2-每次选的线段数N3-每次选的线段数N3)"},
		{"2. Calculate the number of repeated triangles N2=number of triangle sides N4 * (number of triangle sides N4- number of selected line segments N3 each time) * (number of triangle sides N4- number of selected line segments N3 each time - number of selected\nline segments N3 each time)",
		"2.计算重复的三角形数N2 重复的三角形数N2=三角形边数N4*(三角形边数N4-每次选的线段数N3)*(三角形边数N4-每次选的线段数N3-每次选的线段数N3)"},
		{"3. Calculate the number of triangles without duplicates N3=the number of triangles with duplicates N1/the number of triangles with duplicates N2",
		"3.计算不带重复的三角形数N3 不带重复的三角形数N3=带重复的三角形数N1/重复的三角形数N2"},
		//变量表
		{"ThetotalnumberoflinesegmentsN2","总共的线段总数N2"},
		{"NumberofselectedlinesegmentsN3eachtime","每次选的线段数N3"},
		{"TrianglesidenumberN4","三角形边数N4"},
		{"NumberofrepeatedtrianglesN1","带重复的三角形数N1"},
		{"NumberofrepeatedtrianglesN2","重复的三角形数N2"},
		{"NumberoftriangleswithoutrepetitionN3","不带重复的三角形数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共的线段总数N2, 6);
	DefineLangVarInt(每次选的线段数N3, 1);
	DefineLangVarInt(三角形边数N4, 3);
	ColPrintf(PrintfCol::标题, Lang("P51例二 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图，6条线段互相交叉，那么图中有多少个三角形?"));
	typedef ScanningLine<12, 10, 22, 10> ScanningLineT;
	ScanningLineT test;
	
	float offX = 0;
	float offY = 0;
	float offX1 = 0;
	float offY1 = 0;
	ScanningLineT::Point BeginArray[8];
	ScanningLineT::Point Begin = ScanningLineT::Point(1.0 , 5.0 );
	ScanningLineT::Point End = ScanningLineT::Point(3.0 , 1.0 );
	float fStepX = (End.fX - Begin.fX)/4;
	float fStepY = (End.fY - Begin.fY) / 4;
	BeginArray[0] = Begin;
	for (int i = 1;i <= 4; i++)
	{

		BeginArray[i].fX = BeginArray[i - 1].fX + fStepX;
		BeginArray[i].fY = BeginArray[i - 1].fY + fStepY;
	}
	test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');

	ScanningLineT::Point EndArray[8];
	Begin = ScanningLineT::Point(3.0, 1.0);
	End = ScanningLineT::Point(7.0, 6.0);
	float fStepX1 = (End.fX - Begin.fX) / 4;
	float fStepY1 = (End.fY - Begin.fY) / 4;
	EndArray[0] = Begin;
	for (int i = 1;i <= 4; i++)
	{

		EndArray[i].fX = EndArray[i - 1].fX + fStepX1;
		EndArray[i].fY = EndArray[i - 1].fY + fStepY1;
	}
	test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');
	
	
	
	
	int h = 3;
	for (int i=0;i <= 3;i++)
	{
		Begin = ScanningLineT::Point(BeginArray[i].fX, BeginArray[i].fY);
		End = ScanningLineT::Point(EndArray[i].fX, EndArray[i].fY);
		test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');
	}
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(带重复的三角形数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算带重复的三角形数N1 带重复的三角形数N1=总共的线段总数N2*(总共的线段总数N2-每次选的线段数N3)*(总共的线段总数N2-每次选的线段数N3-每次选的线段数N3)"));
	带重复的三角形数N1 = 总共的线段总数N2 * (总共的线段总数N2 - 每次选的线段数N3) * (总共的线段总数N2 - 每次选的线段数N3 - 每次选的线段数N3);
	带重复的三角形数N1.PrintProcessLog(1);
	DefineLangVarInt(重复的三角形数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算重复的三角形数N2 重复的三角形数N2=三角形边数N4*(三角形边数N4-每次选的线段数N3)*(三角形边数N4-每次选的线段数N3-每次选的线段数N3)"));
	重复的三角形数N2 = 三角形边数N4 * (三角形边数N4 - 每次选的线段数N3) * (三角形边数N4 - 每次选的线段数N3 - 每次选的线段数N3);
	重复的三角形数N2.PrintProcessLog(2);
	DefineLangVarInt(不带重复的三角形数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算不带重复的三角形数N3 不带重复的三角形数N3=带重复的三角形数N1/重复的三角形数N2"));
	不带重复的三角形数N3  = 带重复的三角形数N1 / 重复的三角形数N2;
	不带重复的三角形数N3.PrintProcessLog(3);
}
void P51_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 Example Three Graphic Counting","P51例三 图形计数"},
		{"Title: As shown in the figure, there are 6 points on a circle, and every two points must be connected into a line segment. How many intersection points are generated inside",
		"题目：如图，一个圆上有6个点，每两个点之间都要连成一条线段，那么在内部产生了多少交点"},
		{"1. Calculate the number of vertices with duplicates N1=shared vertices N1 * (shared vertices N1- number of selected points per time N2) * (shared vertices N1- number of selected points per time N2- number of selected points per time N2) * (shared vertices\nN1- number of selected points per time N2- number of selected points per time N2)",
		"1.计算带重复的四条顶点种数N1 带重复的四条顶点种数N1=共有顶点N1*(共有顶点N1-每次选点数N2)*(共有顶点N1-每次选点数N2-每次选点数N2)*(共有顶点N1-每次选点数N2-每次选点数N2-每次选点数N2)"},
		{"2. Calculate the number of repeated vertices N2=minimum number of intersecting vertices N3 * (minimum number of intersecting vertices N3- number of selected points N2 per time) * (minimum number of intersecting vertices N3- number of selected points N2 per\ntime) * (minimum number of intersecting vertices N3- number of selected points N2 per time)",
		"2.计算重复的顶点数N2 重复的顶点数N2=最少交叉顶点数N3*(最少交叉顶点数N3-每次选点数N2)*(最少交叉顶点数N3-每次选点数N2-每次选点数N2)*(最少交叉顶点数N3-每次选点数N2-每次选点数N2-每次选点数N2)"},
		{"3. Calculate the number of vertices without duplicates N1=the number of vertices with duplicates N1/the number of vertices with duplicates N2",
		"3.计算不带重复的四条顶点种数N1 不带重复的四条顶点种数N1=带重复的四条顶点种数N1/重复的顶点数N2"},
		//变量表
		{"SharedvertexN1","共有顶点N1"},
		{"NumberofpointsselectedeachtimeN2","每次选点数N2"},
		{"MinimumnumberofintersectingverticesN3","最少交叉顶点数N3"},
		{"NumberofrepeatedverticesN1","带重复的四条顶点种数N1"},
		{"NumberofrepeatedverticesN2","重复的顶点数N2"},
		{"NumberofverticeswithoutrepetitionN1","不带重复的四条顶点种数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(共有顶点N1, 6);
	DefineLangVarInt(每次选点数N2, 1);
	DefineLangVarInt(最少交叉顶点数N3, 4);
	ColPrintf(PrintfCol::标题, Lang("P51例三 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图，一个圆上有6个点，每两个点之间都要连成一条线段，那么在内部产生了多少交点"));
	typedef ScanningLine<12, 10, 22, 10> ScanningLineT;
	ScanningLineT test;
	ScanningLineT::Point CircleVex[6];
	ScanningLineT::Point O = ScanningLineT::Point(5.0, 5.0);
	float fCircleR = 3.0;
	float CircleAngle[6] = { 
		10.0 * 2 * PI / 360.0,
		75.0 * 2 * PI / 360.0,
		125.0 * 2 * PI / 360.0, 
		180.0 * 2 * PI / 360.0, 
		280.0 * 2 * PI / 360.0, 
		310.0 * 2 * PI / 360.0
	};
	for (int i = 0;i < 6;i++)
	{
		CircleVex[i].fX = cos(CircleAngle[i]) * fCircleR;
		CircleVex[i].fY = -sin(CircleAngle[i]) * fCircleR;
		CircleVex[i]+=O;
	}
	ScanningLineT::Point Begin;
	ScanningLineT::Point End;
	NPLib::CPEnum test1;
	std::string szLog[8];
	unsigned int nTotal[8] = { 0 };
	unsigned int nMatchTotal[8] = { 0 };
	unsigned int nLogIndex = 0;
	unsigned int nNumArrayID = 0;
	function<void(vector<unsigned int>&, unsigned int, void*) > EnumFunc = [&](vector<unsigned int>& vec, unsigned int nStack, void* pContext) {
		char szVec[128];
		nTotal[nLogIndex]++;
		//if (Num[nNumArrayID][vec[0]] < Num[nNumArrayID][vec[1]]) return;

		sprintf(szVec, "%03d:(", nMatchTotal[nLogIndex]);
		szLog[nLogIndex] += szVec;
		nMatchTotal[nLogIndex]++;
		
			
			
		test.AddLine(CircleVex[vec[0]], CircleVex[vec[1]], 0.07, ScanningLineT::FillMode::RealMode, '+');
		
		szLog[nLogIndex] += ")\t";
		if (nMatchTotal[nLogIndex] % 4 == 0)
		{
			szLog[nLogIndex] += "\n";
		}
		};
	//P[4,2]
	std::function<bool(vector<unsigned int>&, unsigned int, void*)> ChipFunc = [&](vector<unsigned int>& vec, unsigned int nStack, void* pContext)->bool {
		return false;
		};
	//6个顶点选2个的组合
	test1.CEnum(6, 2,
		ChipFunc,
		EnumFunc, (void*)NULL);
	printf("有%d个边", nMatchTotal[nLogIndex]);
	/*for (int i = 0;i < 6;i++)
	{
		for (int j = 0;j < 6;j++)
		{
			if (i != j )
			{
				test.AddLine(CircleVex[i], CircleVex[j], 0.07, ScanningLineT::FillMode::RealMode, '+');
			}
			
		}
	}*/
	test.AddSector(5.0, 5.0, 3.0, 0, 359.9, ScanningLineT::FillMode::EdgeMode, '*');
	ScanningLineT::Point LineBingin;
	ScanningLineT::Point LineEnd;
	LineBingin.fX = 5;
	LineBingin.fY = 5;
	LineEnd.fX = 7.87;
	LineEnd.fY = 5;
	test.AddLine(LineBingin, LineEnd,0.07, ScanningLineT::FillMode::RealMode,' ');
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(带重复的四条顶点种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算带重复的四条顶点种数N1 带重复的四条顶点种数N1=共有顶点N1*(共有顶点N1-每次选点数N2)*(共有顶点N1-每次选点数N2-每次选点数N2)*(共有顶点N1-每次选点数N2-每次选点数N2-每次选点数N2)"));
	带重复的四条顶点种数N1 = 共有顶点N1 * (共有顶点N1 - 每次选点数N2) * (共有顶点N1 - 每次选点数N2 - 每次选点数N2) * (共有顶点N1 - 每次选点数N2 - 每次选点数N2 - 每次选点数N2);
	带重复的四条顶点种数N1.PrintProcessLog(1);
	DefineLangVarInt(重复的顶点数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算重复的顶点数N2 重复的顶点数N2=最少交叉顶点数N3*(最少交叉顶点数N3-每次选点数N2)*(最少交叉顶点数N3-每次选点数N2-每次选点数N2)*(最少交叉顶点数N3-每次选点数N2-每次选点数N2-每次选点数N2)"));
	重复的顶点数N2 = 最少交叉顶点数N3 * (最少交叉顶点数N3 - 每次选点数N2) * (最少交叉顶点数N3 - 每次选点数N2 - 每次选点数N2) * (最少交叉顶点数N3 - 每次选点数N2 - 每次选点数N2 - 每次选点数N2);
	重复的顶点数N2.PrintProcessLog(2);
	DefineLangVarInt(不带重复的四条顶点种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算不带重复的四条顶点种数N1 不带重复的四条顶点种数N1=带重复的四条顶点种数N1/重复的顶点数N2"));
	不带重复的四条顶点种数N1 = 带重复的四条顶点种数N1 / 重复的顶点数N2;
	不带重复的四条顶点种数N1.PrintProcessLog(3);
}
void P51_4()
{
	LanguageLib::LanguageTableT Language = { 
		{"P51 Example Four Graphic Counting","P51例四 图形计数"},
		{"Title: How many squares are there in the picture",
		"题目：如图有多少个正方形"},
		{"1. Calculate the number of rectangular grids N1. The number of rectangular grids N1=the number of rectangular grids N2+(the number of rectangular grids N2- the number of rectangular grids used each time N3)+(the number of rectangular grids N2- the\nnumber of rectangular grids used each time N3- the number of rectangular grids used each time N3)+(the number of rectangular grids N2- the number of rectangular grids used each time N3- the number of rectangular grids used each time N3)+(the number of\nrectangular grids N2- the number of rectangular grids used each time N3- the number of rectangular grids used each time N3- the number of rectangular grids used each time N3- the number of rectangular grids used each time N3)",
		"1.计算长方形长种数N1 长方形长种数N1=长方形长格数N2+(长方形长格数N2-每次用去长方形格数N3)+(长方形长格数N2-每次用去长方形格数N3-每次用去长方形格数N3)+(长方形长格数N2-每次用去长方形格数N3-每次用去长方形格数N3-每次用去长方形格数N3)+(长方形长格数N2-每次用去长方形格数N3-每次用去长方形格数N3-每次用去长方形格数N3-每次用去长方形格数N3)"},
		{"2. Calculate the number of rectangular width patterns N2. The number of rectangular width patterns N2=the number of rectangular width patterns N2+(the number of rectangular width patterns N2 minus the number of rectangular pattern patterns N3 used\neach time)+(the number of rectangular width patterns N2 minus the number of rectangular pattern patterns N3 used each time)+(the number of rectangular width patterns N2 minus the number of rectangular pattern patterns N3 used each time minus the number of rectangular pattern patterns N3 used each time)",
		"2.计算长方形宽种数N2 长方形宽种数N2=长方形宽格数N2+(长方形宽格数N2-每次用去长方形格数N3)+(长方形宽格数N2-每次用去长方形格数N3-每次用去长方形格数N3)+(长方形宽格数N2-每次用去长方形格数N3-每次用去长方形格数N3-每次用去长方形格数N3)"},
		{"3. Calculate the combination to form a rectangular type N3. The combination to form a rectangular type N3=the number of rectangular long types N1 * the number of rectangular wide types N2",
		"3.计算组合成长方形种类N3 组合成长方形种类N3=长方形长种数N1*长方形宽种数N2"},
		//变量表
		{"NumberofrectangulargridsN2","长方形长格数N2"},
		{"UsethenumberN3ofrectangulargridseverytime","每次用去长方形格数N3"},
		{"RectangularwidthgridN2","长方形宽格数N2"},
		{"NumberofrectangularlongvarietiesN1","长方形长种数N1"},
		{"NumberofrectangularwidthsN2","长方形宽种数N2"},
		{"CombineintorectangulartypeN3","组合成长方形种类N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(长方形长格数N2, 5);
	DefineLangVarInt(每次用去长方形格数N3, 1);
	DefineLangVarInt(长方形宽格数N2, 4);
	ColPrintf(PrintfCol::标题, Lang("P51例四 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图有多少个正方形"));
	typedef ScanningLine<12, 10, 18, 8> ScanningLineT;
	ScanningLineT test;


	int offX = 0;
	int offY = 0;
	for (int i = 0;i <= 3;i++)
	{
		for (int j = 0;j <= 4;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(1 + offY)},{float(3 + offX),float(1 + offY)},{float(3 + offX),float(3 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(1 + offX), float(3 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	}
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(长方形长种数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算长方形长种数N1 长方形长种数N1=长方形长格数N2+(长方形长格数N2-每次用去长方形格数N3)+(长方形长格数N2-每次用去长方形格数N3-每次用去长方形格数N3)+(长方形长格数N2-每次用去长方形格数N3-每次用去长方形格数N3-每次用去长方形格数N3)+(长方形长格数N2-每次用去长方形格数N3-每次用去长方形格数N3-每次用去长方形格数N3-每次用去长方形格数N3)"));
	长方形长种数N1 = 长方形长格数N2 + (长方形长格数N2 - 每次用去长方形格数N3) + (长方形长格数N2 - 每次用去长方形格数N3 - 每次用去长方形格数N3) + (长方形长格数N2 - 每次用去长方形格数N3 - 每次用去长方形格数N3 - 每次用去长方形格数N3) + (长方形长格数N2 - 每次用去长方形格数N3 - 每次用去长方形格数N3 - 每次用去长方形格数N3 - 每次用去长方形格数N3);
	长方形长种数N1.PrintProcessLog(1);
	DefineLangVarInt(长方形宽种数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算长方形宽种数N2 长方形宽种数N2=长方形宽格数N2+(长方形宽格数N2-每次用去长方形格数N3)+(长方形宽格数N2-每次用去长方形格数N3-每次用去长方形格数N3)+(长方形宽格数N2-每次用去长方形格数N3-每次用去长方形格数N3-每次用去长方形格数N3)"));
	长方形宽种数N2 = 长方形宽格数N2 + (长方形宽格数N2 - 每次用去长方形格数N3) + (长方形宽格数N2 - 每次用去长方形格数N3 - 每次用去长方形格数N3) + (长方形宽格数N2 - 每次用去长方形格数N3 - 每次用去长方形格数N3 - 每次用去长方形格数N3);
	长方形宽种数N2.PrintProcessLog(2);
	DefineLangVarInt(组合成长方形种类N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算组合成长方形种类N3 组合成长方形种类N3=长方形长种数N1*长方形宽种数N2"));
	组合成长方形种类N3 = 长方形长种数N1 * 长方形宽种数N2;
	组合成长方形种类N3.PrintProcessLog(3);
}
void P51_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 case five graphic counting","P51例五 图形计数"},
		{"Title: As shown in the picture, how many rectangles contain pentagrams?",
		"题目：如图，有几个包含五角星的长方形?"},
		{"1. Calculate the included length N1. The included length N1 is equal to a side length of 1 square, a side length of 2 square, a side length of 3 square, a side length of 4 square, a side length of 5 square, and a side length of 6 square",
		"1.计算包含的长N1 包含的长N1=长1正方形N1+长2正方形N1+长3正方形N1+长4正方形N1+长5正方形N1+长6正方形N1"},
		{"2. Calculate the included width N2. The included width N2 is equal to width 1 square N2+width 2 square N2+width 3 square N3+width 4 square N3",
		"2.计算包含的宽N2 包含的宽N2=宽1正方形N2+宽2正方形N2+宽3正方形N3+宽4正方形N3"},
		{"3. Calculate the included rectangle N3. The included rectangle N3=the included length N1 * the included width N2",
		"3.计算包含的长方形N3 包含的长方形N3=包含的长N1*包含的宽N2"},
		//变量表
		{"Length1squareN1","长1正方形N1"},
		{"Length2squareN1","长2正方形N1"},
		{"Length3squareN1","长3正方形N1"},
		{"Length4squareN1","长4正方形N1"},
		{"Length5squareN1","长5正方形N1"},
		{"Length6squareN1","长6正方形N1"},
		{"Width1squareN2","宽1正方形N2"},
		{"Width2squareN2","宽2正方形N2"},
		{"Width3SquareN3","宽3正方形N3"},
		{"Width4squareN3","宽4正方形N3"},
		{"IncludinglongN1","包含的长N1"},
		{"IncludeswidthN2","包含的宽N2"},
		{"TheincludedrectangleN3","包含的长方形N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(长1正方形N1, 1);
	DefineLangVarInt(长2正方形N1, 2);
	DefineLangVarInt(长3正方形N1, 3);
	DefineLangVarInt(长4正方形N1, 3);
	DefineLangVarInt(长5正方形N1, 2);
	DefineLangVarInt(长6正方形N1, 1);
	DefineLangVarInt(宽1正方形N2, 1);
	DefineLangVarInt(宽2正方形N2, 2);
	DefineLangVarInt(宽3正方形N3, 2);
	DefineLangVarInt(宽4正方形N3, 1);
	ColPrintf(PrintfCol::标题, Lang("P51例五 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图，有几个包含五角星的长方形?"));
	typedef ScanningLine<14, 10, 18, 8> ScanningLineT;
	ScanningLineT test;

	test.AddText(PrintfCol::顶点标注, 4, 6.0, "★");
	int offX = 0;
	int offY = 0;
	for (int i = 0;i <= 3;i++)
	{
		for (int j = 0;j <= 5;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(1 + offY)},{float(3 + offX),float(1 + offY)},{float(3 + offX),float(3 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(1 + offX), float(3 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	}
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(包含的长N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算包含的长N1 包含的长N1=长1正方形N1+长2正方形N1+长3正方形N1+长4正方形N1+长5正方形N1+长6正方形N1"));
	包含的长N1 = 长1正方形N1 + 长2正方形N1 + 长3正方形N1 + 长4正方形N1 + 长5正方形N1 + 长6正方形N1;
	包含的长N1.PrintProcessLog(1);
	DefineLangVarInt(包含的宽N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算包含的宽N2 包含的宽N2=宽1正方形N2+宽2正方形N2+宽3正方形N3+宽4正方形N3"));
	包含的宽N2 = 宽1正方形N2 + 宽2正方形N2 + 宽3正方形N3 + 宽4正方形N3;
	包含的宽N2.PrintProcessLog(2);
	DefineLangVarInt(包含的长方形N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算包含的长方形N3 包含的长方形N3=包含的长N1*包含的宽N2"));
	包含的长方形N3 = 包含的长N1 * 包含的宽N2;
	包含的长方形N3.PrintProcessLog(3);
}
void P51_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 case six graphic counting","P51例六 图形计数"},
		{"Title: As shown in the figure, two line segments have 4 points and 5 points respectively, and they are connected to each other. Any three line segments will not intersect at the same point in the middle area. How many intersection points can be\ngenerated in total",
		"题目：如图，两条线段分别有4个点，5个点，之间互相连线，任何三条线段不会在中间区域交成同一点，总共可以产生多少个交点"},
		{"1. Do not repeat the calculation. The minimum number of vertices selected above is N1. The minimum number of vertices selected above is N1=the maximum number of vertices N1 * (the maximum number of vertices N1- selecting vertices N2 each time)/(the\nminimum number of vertices selected above is N3 * (the minimum number of vertices selected above is N3- selecting vertices N2 each time)",
		"1.计算不重复上面至少选顶点数N1 不重复上面至少选顶点数N1=上面顶点数N1*(上面顶点数N1-每次选顶点N2)/(上面至少选顶点数N3*(上面至少选顶点数N3-每次选顶点N2))"},
		{"2. Do not repeat the calculation. At least select the number of vertices below N1. Do not repeat. At least select the number of vertices below N1=Number of vertices below N1 * (Number of vertices below N1- Select vertex N2 each time)/(At least\nselect the number of vertices below N3 * (Number of vertices below N3- Select vertex N2 each time))",
		"2.计算不重复下面至少选顶点数N1 不重复下面至少选顶点数N1=下面顶点数N1*(下面顶点数N1-每次选顶点N2)/(下面至少选顶点数N3*(下面至少选顶点数N3-每次选顶点N2))"},
		{"3. Calculate the number of intermediate crossings N3. The number of intermediate crossings N3 is equal to the number of at least the top selection points N1 without repetition, multiplied by the number of at least the top selection points N1 without repetition",
		"3.计算中间交叉数N3 中间交叉数N3=不重复上面至少选顶点数N1*不重复下面至少选顶点数N1"},
		//变量表
		{"NumberofverticesontopN1","上面顶点数N1"},
		{"SelectvertexN2everytime","每次选顶点N2"},
		{"AtleastselectthetoppointN3above","上面至少选顶点数N3"},
		{"NumberofverticesbelowN1","下面顶点数N1"},
		{"SelectatleastthetoppointN3below","下面至少选顶点数N3"},
		{"AtleastselectthetoppointN1withoutrepeatingtheabove","不重复上面至少选顶点数N1"},
		{"AtleastselectthetoppointN1belowwithoutrepeating","不重复下面至少选顶点数N1"},
		{"IntermediateintersectionnumberN3","中间交叉数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(上面顶点数N1, 4);
	DefineLangVarInt(每次选顶点N2, 1);
	DefineLangVarInt(上面至少选顶点数N3, 2);
	DefineLangVarInt(下面顶点数N1, 5);
	DefineLangVarInt(下面至少选顶点数N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P51例六 图形计数"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图，两条线段分别有4个点，5个点，之间互相连线，任何三条线段不会在中间区域交成同一点，总共可以产生多少个交点"));
	typedef ScanningLine<12, 10, 22, 10> ScanningLineT;
	ScanningLineT test;
	float fOffsetX = 0.7;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1.0+ fOffsetX),float(2 )},{float(7+ fOffsetX),float(1 )},{float(9+ fOffsetX),float(7 )} };
	ScanningLineT::Point Begin = Vex1[0];
	ScanningLineT::Point End = Vex1[1];
	ScanningLineT::Point BeginArray[8];
	float fStepX = (End.fX - Begin.fX) / 4;
	float fStepY = (End.fY - Begin.fY) / 4;
	BeginArray[0] = Begin;
	for (int i = 1;i <= 4; i++)
	{
		BeginArray[i].fX = BeginArray[i - 1].fX + fStepX;
		BeginArray[i].fY = BeginArray[i - 1].fY + fStepY;
	}
	ScanningLineT::Point O = ScanningLineT::Point(float(1.0 + fOffsetX), float(7.0));
	//test.AddPolygon(O, Vex1, ScanningLineT::FillMode::EdgeMode, '+');
	Begin = O;
	End = Vex1[2];
	ScanningLineT::Point EndArray[8];
	float fStepX1 = (End.fX - Begin.fX) / 4;
	float fStepY1 = (End.fY - Begin.fY) / 4;
	EndArray[0] = Begin;
	for (int i = 1;i <= 4; i++)
	{

		EndArray[i].fX = EndArray[i - 1].fX + fStepX1;
		EndArray[i].fY = EndArray[i - 1].fY + fStepY1;
	}
	/*
	ScanningLineT::Point zongArray[20];
	for (int i = 0;i <= 4;i++)
	{
		zongArray[i] = BeginArray[i];
	}
	int j = 0;
	for (int i = 5;i <= 8;i++)
	{
		
		zongArray[i] = EndArray[j];
		j++;
	}*/
	NPLib::CPEnum test1;
	std::string szLog[8];
	unsigned int nTotal[8] = { 0 };
	unsigned int nMatchTotal[8] = { 0 };
	unsigned int nLogIndex = 0;
	unsigned int nNumArrayID = 0;
	function<void(vector<unsigned int>&, unsigned int, void*) > EnumFunc = [&](vector<unsigned int>& vec, unsigned int nStack, void* pContext) {
		char szVec[128];
		nTotal[nLogIndex]++;
		//if (Num[nNumArrayID][vec[0]] < Num[nNumArrayID][vec[1]]) return;

		sprintf(szVec, "%03d:(", nMatchTotal[nLogIndex]);
		szLog[nLogIndex] += szVec;
		nMatchTotal[nLogIndex]++;

		//test.AddLine(zongArray[vec[0]], zongArray[vec[1]], 0.07, ScanningLineT::FillMode::RealMode, '+');
		ScanningLineT::Point A =vec[0]<4? BeginArray[vec[0]]: EndArray[vec[0]-4];
		ScanningLineT::Point B = vec[1] < 4 ? BeginArray[vec[1]] : EndArray[vec[1] - 4];
		//test.AddLine(zongArray[vec[0]], zongArray[vec[1]], 0.07, ScanningLineT::FillMode::RealMode, '+');
		test.AddLine(A, B, 0.07, ScanningLineT::FillMode::RealMode, '+');

		};
	//P[4,2]
	std::function<bool(vector<unsigned int>&, unsigned int, void*)> ChipFunc = [&](vector<unsigned int>& vec, unsigned int nStack, void* pContext)->bool {
		return false;
		};
	//9个顶点选2个的组合
	test1.CEnum(9, 2,
		ChipFunc,
		EnumFunc, (void*)NULL);
	printf("有%d个边", nMatchTotal[nLogIndex]);
	/*for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (i != j)
			{
				test.AddLine(BeginArray[i], EndArray[j], 0.07, ScanningLineT::FillMode::RealMode, '+');
			}

		}
	}*/
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(不重复上面至少选顶点数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算不重复上面至少选顶点数N1 不重复上面至少选顶点数N1=上面顶点数N1*(上面顶点数N1-每次选顶点N2)/(上面至少选顶点数N3*(上面至少选顶点数N3-每次选顶点N2))"));
	不重复上面至少选顶点数N1 = 上面顶点数N1 * (上面顶点数N1 - 每次选顶点N2) / (上面至少选顶点数N3 * (上面至少选顶点数N3 - 每次选顶点N2));
	不重复上面至少选顶点数N1.PrintProcessLog(1);
	DefineLangVarInt(不重复下面至少选顶点数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算不重复下面至少选顶点数N1 不重复下面至少选顶点数N1=下面顶点数N1*(下面顶点数N1-每次选顶点N2)/(下面至少选顶点数N3*(下面至少选顶点数N3-每次选顶点N2))"));
	不重复下面至少选顶点数N1 = 下面顶点数N1 * (下面顶点数N1 - 每次选顶点N2) / (下面至少选顶点数N3 * (下面至少选顶点数N3 - 每次选顶点N2));
	不重复下面至少选顶点数N1.PrintProcessLog(2);
	DefineLangVarInt(中间交叉数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算中间交叉数N3 中间交叉数N3=不重复上面至少选顶点数N1*不重复下面至少选顶点数N1"));
	中间交叉数N3 = 不重复上面至少选顶点数N1 * 不重复下面至少选顶点数N1;
	中间交叉数N3.PrintProcessLog(3);
}
void P51()
{
	P51_1();
	ColPrintf(PrintfCol::方法, "");
	P51_2();
	ColPrintf(PrintfCol::方法, "");
	P51_3();
	ColPrintf(PrintfCol::方法, "");
	P51_4();
	ColPrintf(PrintfCol::方法, "");
	P51_5();
	ColPrintf(PrintfCol::方法, "");
	P51_6();
	ColPrintf(PrintfCol::方法, "");
}
void P51_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P51();
	Lang.SetCurLanguage(LanguageLib::English);
	P51();
	ColPrintf(PrintfCol::方法, "");
}