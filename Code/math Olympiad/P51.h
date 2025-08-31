#pragma once
void P51_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 Example 1 Graphic Count","P51��һ ͼ�μ���"},
		{"Title: As shown in the figure, if a line segment has 6 vertices, how many line segments are there in the figure",
		"��Ŀ����ͼ���߶���6�����㣬��ôͼ���м����߶�"},
		{"1. Calculate the number of repeated types N1=total number of vertices N1 * (total number of vertices N1- number of vertices selected each time N2)",
		"1.��������ظ�����������N1 �����ظ�����������N1=һ���Ķ�����N1*(һ���Ķ�����N1-ÿ��ѡ�Ķ�����N2)"},
		{"2. Calculate the number of repetitions N2. The number of repetitions N2=the number of vertices of each selected line segment N3 * (the number of vertices of each selected line segment N3- the number of vertices N2 selected each time)",
		"2.�����ظ�������N2 �ظ�������N2=ÿ��ѡ���߶ζ�����N3*(ÿ��ѡ���߶ζ�����N3-ÿ��ѡ�Ķ�����N2)"},
		{"3. Calculate the number of non duplicated species N3=the number of duplicated species N1/the number of duplicated species N2",
		"3.���㲻���ظ�����N3 �����ظ�����N3=�����ظ�����������N1/�ظ�������N2"},
		//������
		{"ThetotalnumberofverticesN1","һ���Ķ�����N1"},
		{"NumberofverticesselectedeachtimeN2","ÿ��ѡ�Ķ�����N2"},
		{"ThenumberofverticesN3selectedforeachlinesegment","ÿ��ѡ���߶ζ�����N3"},
		{"NumberofduplicatespeciesN1","�����ظ�����������N1"},
		{"NumberofrepeatedspeciesN2","�ظ�������N2"},
		{"WithoutduplicatespeciesN3","�����ظ�����N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ���Ķ�����N1, 6);
	DefineLangVarInt(ÿ��ѡ�Ķ�����N2, 1);
	DefineLangVarInt(ÿ��ѡ���߶ζ�����N3, 2);
	ColPrintf(PrintfCol::����, Lang("P51��һ ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ���߶���6�����㣬��ôͼ���м����߶�"));
	const char* pPic =
		"|---------|----|-------|-----|-------|\n"
		;
	ColPrintf(PrintfCol::Green, pPic);
	DefineLangVarInt(�����ظ�����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������ظ�����������N1 �����ظ�����������N1=һ���Ķ�����N1*(һ���Ķ�����N1-ÿ��ѡ�Ķ�����N2)"));
	�����ظ�����������N1 = һ���Ķ�����N1 * (һ���Ķ�����N1 - ÿ��ѡ�Ķ�����N2);
	�����ظ�����������N1.PrintProcessLog(1);
	DefineLangVarInt(�ظ�������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ظ�������N2 �ظ�������N2=ÿ��ѡ���߶ζ�����N3*(ÿ��ѡ���߶ζ�����N3-ÿ��ѡ�Ķ�����N2)"));
	�ظ�������N2 = ÿ��ѡ���߶ζ�����N3 * (ÿ��ѡ���߶ζ�����N3 - ÿ��ѡ�Ķ�����N2);
	�ظ�������N2.PrintProcessLog(2);
	DefineLangVarInt(�����ظ�����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㲻���ظ�����N3 �����ظ�����N3=�����ظ�����������N1/�ظ�������N2"));
	�����ظ�����N3 = �����ظ�����������N1 / �ظ�������N2;
	�����ظ�����N3.PrintProcessLog(3);
	
}
void P51_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 Example 2 Graphic Counting","P51���� ͼ�μ���"},
		{"Question: As shown in the figure, how many triangles are there in the figure when 6 line segments intersect with each other?",
		"��Ŀ����ͼ��6���߶λ��ཻ�棬��ôͼ���ж��ٸ�������?"},
		{"1. Calculate the number of triangles with duplicates N1=total number of line segments N2 * (total number of line segments N2- number of line segments selected each time N3) * (total number of line segments N2- number of line segments selected each time N3-\nnumber of line segments selected each time N3)",
		"1.������ظ�����������N1 ���ظ�����������N1=�ܹ����߶�����N2*(�ܹ����߶�����N2-ÿ��ѡ���߶���N3)*(�ܹ����߶�����N2-ÿ��ѡ���߶���N3-ÿ��ѡ���߶���N3)"},
		{"2. Calculate the number of repeated triangles N2=number of triangle sides N4 * (number of triangle sides N4- number of selected line segments N3 each time) * (number of triangle sides N4- number of selected line segments N3 each time - number of selected\nline segments N3 each time)",
		"2.�����ظ�����������N2 �ظ�����������N2=�����α���N4*(�����α���N4-ÿ��ѡ���߶���N3)*(�����α���N4-ÿ��ѡ���߶���N3-ÿ��ѡ���߶���N3)"},
		{"3. Calculate the number of triangles without duplicates N3=the number of triangles with duplicates N1/the number of triangles with duplicates N2",
		"3.���㲻���ظ�����������N3 �����ظ�����������N3=���ظ�����������N1/�ظ�����������N2"},
		//������
		{"ThetotalnumberoflinesegmentsN2","�ܹ����߶�����N2"},
		{"NumberofselectedlinesegmentsN3eachtime","ÿ��ѡ���߶���N3"},
		{"TrianglesidenumberN4","�����α���N4"},
		{"NumberofrepeatedtrianglesN1","���ظ�����������N1"},
		{"NumberofrepeatedtrianglesN2","�ظ�����������N2"},
		{"NumberoftriangleswithoutrepetitionN3","�����ظ�����������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ����߶�����N2, 6);
	DefineLangVarInt(ÿ��ѡ���߶���N3, 1);
	DefineLangVarInt(�����α���N4, 3);
	ColPrintf(PrintfCol::����, Lang("P51���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��6���߶λ��ཻ�棬��ôͼ���ж��ٸ�������?"));
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
	DefineLangVarInt(���ظ�����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ظ�����������N1 ���ظ�����������N1=�ܹ����߶�����N2*(�ܹ����߶�����N2-ÿ��ѡ���߶���N3)*(�ܹ����߶�����N2-ÿ��ѡ���߶���N3-ÿ��ѡ���߶���N3)"));
	���ظ�����������N1 = �ܹ����߶�����N2 * (�ܹ����߶�����N2 - ÿ��ѡ���߶���N3) * (�ܹ����߶�����N2 - ÿ��ѡ���߶���N3 - ÿ��ѡ���߶���N3);
	���ظ�����������N1.PrintProcessLog(1);
	DefineLangVarInt(�ظ�����������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ظ�����������N2 �ظ�����������N2=�����α���N4*(�����α���N4-ÿ��ѡ���߶���N3)*(�����α���N4-ÿ��ѡ���߶���N3-ÿ��ѡ���߶���N3)"));
	�ظ�����������N2 = �����α���N4 * (�����α���N4 - ÿ��ѡ���߶���N3) * (�����α���N4 - ÿ��ѡ���߶���N3 - ÿ��ѡ���߶���N3);
	�ظ�����������N2.PrintProcessLog(2);
	DefineLangVarInt(�����ظ�����������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㲻���ظ�����������N3 �����ظ�����������N3=���ظ�����������N1/�ظ�����������N2"));
	�����ظ�����������N3  = ���ظ�����������N1 / �ظ�����������N2;
	�����ظ�����������N3.PrintProcessLog(3);
}
void P51_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 Example Three Graphic Counting","P51���� ͼ�μ���"},
		{"Title: As shown in the figure, there are 6 points on a circle, and every two points must be connected into a line segment. How many intersection points are generated inside",
		"��Ŀ����ͼ��һ��Բ����6���㣬ÿ������֮�䶼Ҫ����һ���߶Σ���ô���ڲ������˶��ٽ���"},
		{"1. Calculate the number of vertices with duplicates N1=shared vertices N1 * (shared vertices N1- number of selected points per time N2) * (shared vertices N1- number of selected points per time N2- number of selected points per time N2) * (shared vertices\nN1- number of selected points per time N2- number of selected points per time N2)",
		"1.������ظ���������������N1 ���ظ���������������N1=���ж���N1*(���ж���N1-ÿ��ѡ����N2)*(���ж���N1-ÿ��ѡ����N2-ÿ��ѡ����N2)*(���ж���N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"},
		{"2. Calculate the number of repeated vertices N2=minimum number of intersecting vertices N3 * (minimum number of intersecting vertices N3- number of selected points N2 per time) * (minimum number of intersecting vertices N3- number of selected points N2 per\ntime) * (minimum number of intersecting vertices N3- number of selected points N2 per time)",
		"2.�����ظ��Ķ�����N2 �ظ��Ķ�����N2=���ٽ��涥����N3*(���ٽ��涥����N3-ÿ��ѡ����N2)*(���ٽ��涥����N3-ÿ��ѡ����N2-ÿ��ѡ����N2)*(���ٽ��涥����N3-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"},
		{"3. Calculate the number of vertices without duplicates N1=the number of vertices with duplicates N1/the number of vertices with duplicates N2",
		"3.���㲻���ظ���������������N1 �����ظ���������������N1=���ظ���������������N1/�ظ��Ķ�����N2"},
		//������
		{"SharedvertexN1","���ж���N1"},
		{"NumberofpointsselectedeachtimeN2","ÿ��ѡ����N2"},
		{"MinimumnumberofintersectingverticesN3","���ٽ��涥����N3"},
		{"NumberofrepeatedverticesN1","���ظ���������������N1"},
		{"NumberofrepeatedverticesN2","�ظ��Ķ�����N2"},
		{"NumberofverticeswithoutrepetitionN1","�����ظ���������������N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ж���N1, 6);
	DefineLangVarInt(ÿ��ѡ����N2, 1);
	DefineLangVarInt(���ٽ��涥����N3, 4);
	ColPrintf(PrintfCol::����, Lang("P51���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��һ��Բ����6���㣬ÿ������֮�䶼Ҫ����һ���߶Σ���ô���ڲ������˶��ٽ���"));
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
	//6������ѡ2�������
	test1.CEnum(6, 2,
		ChipFunc,
		EnumFunc, (void*)NULL);
	printf("��%d����", nMatchTotal[nLogIndex]);
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
	DefineLangVarInt(���ظ���������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ظ���������������N1 ���ظ���������������N1=���ж���N1*(���ж���N1-ÿ��ѡ����N2)*(���ж���N1-ÿ��ѡ����N2-ÿ��ѡ����N2)*(���ж���N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"));
	���ظ���������������N1 = ���ж���N1 * (���ж���N1 - ÿ��ѡ����N2) * (���ж���N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2) * (���ж���N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2 - ÿ��ѡ����N2);
	���ظ���������������N1.PrintProcessLog(1);
	DefineLangVarInt(�ظ��Ķ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ظ��Ķ�����N2 �ظ��Ķ�����N2=���ٽ��涥����N3*(���ٽ��涥����N3-ÿ��ѡ����N2)*(���ٽ��涥����N3-ÿ��ѡ����N2-ÿ��ѡ����N2)*(���ٽ��涥����N3-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"));
	�ظ��Ķ�����N2 = ���ٽ��涥����N3 * (���ٽ��涥����N3 - ÿ��ѡ����N2) * (���ٽ��涥����N3 - ÿ��ѡ����N2 - ÿ��ѡ����N2) * (���ٽ��涥����N3 - ÿ��ѡ����N2 - ÿ��ѡ����N2 - ÿ��ѡ����N2);
	�ظ��Ķ�����N2.PrintProcessLog(2);
	DefineLangVarInt(�����ظ���������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㲻���ظ���������������N1 �����ظ���������������N1=���ظ���������������N1/�ظ��Ķ�����N2"));
	�����ظ���������������N1 = ���ظ���������������N1 / �ظ��Ķ�����N2;
	�����ظ���������������N1.PrintProcessLog(3);
}
void P51_4()
{
	LanguageLib::LanguageTableT Language = { 
		{"P51 Example Four Graphic Counting","P51���� ͼ�μ���"},
		{"Title: How many squares are there in the picture",
		"��Ŀ����ͼ�ж��ٸ�������"},
		{"1. Calculate the number of rectangular grids N1. The number of rectangular grids N1=the number of rectangular grids N2+(the number of rectangular grids N2- the number of rectangular grids used each time N3)+(the number of rectangular grids N2- the\nnumber of rectangular grids used each time N3- the number of rectangular grids used each time N3)+(the number of rectangular grids N2- the number of rectangular grids used each time N3- the number of rectangular grids used each time N3)+(the number of\nrectangular grids N2- the number of rectangular grids used each time N3- the number of rectangular grids used each time N3- the number of rectangular grids used each time N3- the number of rectangular grids used each time N3)",
		"1.���㳤���γ�����N1 �����γ�����N1=�����γ�����N2+(�����γ�����N2-ÿ����ȥ�����θ���N3)+(�����γ�����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)+(�����γ�����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)+(�����γ�����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)"},
		{"2. Calculate the number of rectangular width patterns N2. The number of rectangular width patterns N2=the number of rectangular width patterns N2+(the number of rectangular width patterns N2 minus the number of rectangular pattern patterns N3 used\neach time)+(the number of rectangular width patterns N2 minus the number of rectangular pattern patterns N3 used each time)+(the number of rectangular width patterns N2 minus the number of rectangular pattern patterns N3 used each time minus the number of rectangular pattern patterns N3 used each time)",
		"2.���㳤���ο�����N2 �����ο�����N2=�����ο����N2+(�����ο����N2-ÿ����ȥ�����θ���N3)+(�����ο����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)+(�����ο����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)"},
		{"3. Calculate the combination to form a rectangular type N3. The combination to form a rectangular type N3=the number of rectangular long types N1 * the number of rectangular wide types N2",
		"3.������ϳɳ���������N3 ��ϳɳ���������N3=�����γ�����N1*�����ο�����N2"},
		//������
		{"NumberofrectangulargridsN2","�����γ�����N2"},
		{"UsethenumberN3ofrectangulargridseverytime","ÿ����ȥ�����θ���N3"},
		{"RectangularwidthgridN2","�����ο����N2"},
		{"NumberofrectangularlongvarietiesN1","�����γ�����N1"},
		{"NumberofrectangularwidthsN2","�����ο�����N2"},
		{"CombineintorectangulartypeN3","��ϳɳ���������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�����γ�����N2, 5);
	DefineLangVarInt(ÿ����ȥ�����θ���N3, 1);
	DefineLangVarInt(�����ο����N2, 4);
	ColPrintf(PrintfCol::����, Lang("P51���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ�ж��ٸ�������"));
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
	DefineLangVarInt(�����γ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳤���γ�����N1 �����γ�����N1=�����γ�����N2+(�����γ�����N2-ÿ����ȥ�����θ���N3)+(�����γ�����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)+(�����γ�����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)+(�����γ�����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)"));
	�����γ�����N1 = �����γ�����N2 + (�����γ�����N2 - ÿ����ȥ�����θ���N3) + (�����γ�����N2 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3) + (�����γ�����N2 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3) + (�����γ�����N2 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3);
	�����γ�����N1.PrintProcessLog(1);
	DefineLangVarInt(�����ο�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㳤���ο�����N2 �����ο�����N2=�����ο����N2+(�����ο����N2-ÿ����ȥ�����θ���N3)+(�����ο����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)+(�����ο����N2-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3-ÿ����ȥ�����θ���N3)"));
	�����ο�����N2 = �����ο����N2 + (�����ο����N2 - ÿ����ȥ�����θ���N3) + (�����ο����N2 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3) + (�����ο����N2 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3 - ÿ����ȥ�����θ���N3);
	�����ο�����N2.PrintProcessLog(2);
	DefineLangVarInt(��ϳɳ���������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.������ϳɳ���������N3 ��ϳɳ���������N3=�����γ�����N1*�����ο�����N2"));
	��ϳɳ���������N3 = �����γ�����N1 * �����ο�����N2;
	��ϳɳ���������N3.PrintProcessLog(3);
}
void P51_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 case five graphic counting","P51���� ͼ�μ���"},
		{"Title: As shown in the picture, how many rectangles contain pentagrams?",
		"��Ŀ����ͼ���м�����������ǵĳ�����?"},
		{"1. Calculate the included length N1. The included length N1 is equal to a side length of 1 square, a side length of 2 square, a side length of 3 square, a side length of 4 square, a side length of 5 square, and a side length of 6 square",
		"1.��������ĳ�N1 �����ĳ�N1=��1������N1+��2������N1+��3������N1+��4������N1+��5������N1+��6������N1"},
		{"2. Calculate the included width N2. The included width N2 is equal to width 1 square N2+width 2 square N2+width 3 square N3+width 4 square N3",
		"2.��������Ŀ�N2 �����Ŀ�N2=��1������N2+��2������N2+��3������N3+��4������N3"},
		{"3. Calculate the included rectangle N3. The included rectangle N3=the included length N1 * the included width N2",
		"3.��������ĳ�����N3 �����ĳ�����N3=�����ĳ�N1*�����Ŀ�N2"},
		//������
		{"Length1squareN1","��1������N1"},
		{"Length2squareN1","��2������N1"},
		{"Length3squareN1","��3������N1"},
		{"Length4squareN1","��4������N1"},
		{"Length5squareN1","��5������N1"},
		{"Length6squareN1","��6������N1"},
		{"Width1squareN2","��1������N2"},
		{"Width2squareN2","��2������N2"},
		{"Width3SquareN3","��3������N3"},
		{"Width4squareN3","��4������N3"},
		{"IncludinglongN1","�����ĳ�N1"},
		{"IncludeswidthN2","�����Ŀ�N2"},
		{"TheincludedrectangleN3","�����ĳ�����N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��1������N1, 1);
	DefineLangVarInt(��2������N1, 2);
	DefineLangVarInt(��3������N1, 3);
	DefineLangVarInt(��4������N1, 3);
	DefineLangVarInt(��5������N1, 2);
	DefineLangVarInt(��6������N1, 1);
	DefineLangVarInt(��1������N2, 1);
	DefineLangVarInt(��2������N2, 2);
	DefineLangVarInt(��3������N3, 2);
	DefineLangVarInt(��4������N3, 1);
	ColPrintf(PrintfCol::����, Lang("P51���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ���м�����������ǵĳ�����?"));
	typedef ScanningLine<14, 10, 18, 8> ScanningLineT;
	ScanningLineT test;

	test.AddText(PrintfCol::�����ע, 4, 6.0, "��");
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
	DefineLangVarInt(�����ĳ�N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������ĳ�N1 �����ĳ�N1=��1������N1+��2������N1+��3������N1+��4������N1+��5������N1+��6������N1"));
	�����ĳ�N1 = ��1������N1 + ��2������N1 + ��3������N1 + ��4������N1 + ��5������N1 + ��6������N1;
	�����ĳ�N1.PrintProcessLog(1);
	DefineLangVarInt(�����Ŀ�N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������Ŀ�N2 �����Ŀ�N2=��1������N2+��2������N2+��3������N3+��4������N3"));
	�����Ŀ�N2 = ��1������N2 + ��2������N2 + ��3������N3 + ��4������N3;
	�����Ŀ�N2.PrintProcessLog(2);
	DefineLangVarInt(�����ĳ�����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.��������ĳ�����N3 �����ĳ�����N3=�����ĳ�N1*�����Ŀ�N2"));
	�����ĳ�����N3 = �����ĳ�N1 * �����Ŀ�N2;
	�����ĳ�����N3.PrintProcessLog(3);
}
void P51_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P51 case six graphic counting","P51���� ͼ�μ���"},
		{"Title: As shown in the figure, two line segments have 4 points and 5 points respectively, and they are connected to each other. Any three line segments will not intersect at the same point in the middle area. How many intersection points can be\ngenerated in total",
		"��Ŀ����ͼ�������߶ηֱ���4���㣬5���㣬֮�以�����ߣ��κ������߶β������м����򽻳�ͬһ�㣬�ܹ����Բ������ٸ�����"},
		{"1. Do not repeat the calculation. The minimum number of vertices selected above is N1. The minimum number of vertices selected above is N1=the maximum number of vertices N1 * (the maximum number of vertices N1- selecting vertices N2 each time)/(the\nminimum number of vertices selected above is N3 * (the minimum number of vertices selected above is N3- selecting vertices N2 each time)",
		"1.���㲻�ظ���������ѡ������N1 ���ظ���������ѡ������N1=���涥����N1*(���涥����N1-ÿ��ѡ����N2)/(��������ѡ������N3*(��������ѡ������N3-ÿ��ѡ����N2))"},
		{"2. Do not repeat the calculation. At least select the number of vertices below N1. Do not repeat. At least select the number of vertices below N1=Number of vertices below N1 * (Number of vertices below N1- Select vertex N2 each time)/(At least\nselect the number of vertices below N3 * (Number of vertices below N3- Select vertex N2 each time))",
		"2.���㲻�ظ���������ѡ������N1 ���ظ���������ѡ������N1=���涥����N1*(���涥����N1-ÿ��ѡ����N2)/(��������ѡ������N3*(��������ѡ������N3-ÿ��ѡ����N2))"},
		{"3. Calculate the number of intermediate crossings N3. The number of intermediate crossings N3 is equal to the number of at least the top selection points N1 without repetition, multiplied by the number of at least the top selection points N1 without repetition",
		"3.�����м佻����N3 �м佻����N3=���ظ���������ѡ������N1*���ظ���������ѡ������N1"},
		//������
		{"NumberofverticesontopN1","���涥����N1"},
		{"SelectvertexN2everytime","ÿ��ѡ����N2"},
		{"AtleastselectthetoppointN3above","��������ѡ������N3"},
		{"NumberofverticesbelowN1","���涥����N1"},
		{"SelectatleastthetoppointN3below","��������ѡ������N3"},
		{"AtleastselectthetoppointN1withoutrepeatingtheabove","���ظ���������ѡ������N1"},
		{"AtleastselectthetoppointN1belowwithoutrepeating","���ظ���������ѡ������N1"},
		{"IntermediateintersectionnumberN3","�м佻����N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���涥����N1, 4);
	DefineLangVarInt(ÿ��ѡ����N2, 1);
	DefineLangVarInt(��������ѡ������N3, 2);
	DefineLangVarInt(���涥����N1, 5);
	DefineLangVarInt(��������ѡ������N3, 2);
	ColPrintf(PrintfCol::����, Lang("P51���� ͼ�μ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ�������߶ηֱ���4���㣬5���㣬֮�以�����ߣ��κ������߶β������м����򽻳�ͬһ�㣬�ܹ����Բ������ٸ�����"));
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
	//9������ѡ2�������
	test1.CEnum(9, 2,
		ChipFunc,
		EnumFunc, (void*)NULL);
	printf("��%d����", nMatchTotal[nLogIndex]);
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
	DefineLangVarInt(���ظ���������ѡ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㲻�ظ���������ѡ������N1 ���ظ���������ѡ������N1=���涥����N1*(���涥����N1-ÿ��ѡ����N2)/(��������ѡ������N3*(��������ѡ������N3-ÿ��ѡ����N2))"));
	���ظ���������ѡ������N1 = ���涥����N1 * (���涥����N1 - ÿ��ѡ����N2) / (��������ѡ������N3 * (��������ѡ������N3 - ÿ��ѡ����N2));
	���ظ���������ѡ������N1.PrintProcessLog(1);
	DefineLangVarInt(���ظ���������ѡ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㲻�ظ���������ѡ������N1 ���ظ���������ѡ������N1=���涥����N1*(���涥����N1-ÿ��ѡ����N2)/(��������ѡ������N3*(��������ѡ������N3-ÿ��ѡ����N2))"));
	���ظ���������ѡ������N1 = ���涥����N1 * (���涥����N1 - ÿ��ѡ����N2) / (��������ѡ������N3 * (��������ѡ������N3 - ÿ��ѡ����N2));
	���ظ���������ѡ������N1.PrintProcessLog(2);
	DefineLangVarInt(�м佻����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����м佻����N3 �м佻����N3=���ظ���������ѡ������N1*���ظ���������ѡ������N1"));
	�м佻����N3 = ���ظ���������ѡ������N1 * ���ظ���������ѡ������N1;
	�м佻����N3.PrintProcessLog(3);
}
void P51()
{
	P51_1();
	ColPrintf(PrintfCol::����, "");
	P51_2();
	ColPrintf(PrintfCol::����, "");
	P51_3();
	ColPrintf(PrintfCol::����, "");
	P51_4();
	ColPrintf(PrintfCol::����, "");
	P51_5();
	ColPrintf(PrintfCol::����, "");
	P51_6();
	ColPrintf(PrintfCol::����, "");
}
void P51_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P51();
	Lang.SetCurLanguage(LanguageLib::English);
	P51();
	ColPrintf(PrintfCol::����, "");
}