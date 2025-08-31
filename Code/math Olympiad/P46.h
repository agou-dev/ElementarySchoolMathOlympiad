#pragma once
//本篇共6道题，例一包括三个小题，第二小题包括2个方法，例二包括2个小题
void P46_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Little Cow Test Knife Tolerance Issue","P46小牛试刀 容斥问题"},
		{"Title: How many students are there in Class One of Four when standing in a row and reporting numbers from left to right, Xiaohua reports 18, and from right to left, Xiaohua reports 13?",
		"题目：四年一班同学站成一排，从左往右报数时，小华报18，从右往左报数时，小华报13，这个班有多少名学生?"},
		{"1. Calculate the number of students in this class N1=number of reports from right to left N2+number of reports from left to right N3- number of students in Xiaohua N4",
		"1.计算这个班的人数N1 这个班的人数N1=从右往左报数数量N2+从左往右报数数量N3-小华人数N4"},
		//变量表
		{"ReportquantityN2fromrighttoleft","从右往左报数数量N2"},
		{"NumberN3reportedfromlefttoright","从左往右报数数量N3"},
		{"NumberofXiaohuaN4","小华人数N4"},
		{"ThenumberofstudentsinthisclassisN1","这个班的人数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(从右往左报数数量N2, 13);
	DefineLangVarInt(从左往右报数数量N3, 18);
	DefineLangVarInt(小华人数N4, 1);
	ColPrintf(PrintfCol::标题, Lang("P46小牛试刀 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：四年一班同学站成一排，从左往右报数时，小华报18，从右往左报数时，小华报13，这个班有多少名学生?"));
	DefineLangVarInt(这个班的人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算这个班的人数N1 这个班的人数N1=从右往左报数数量N2+从左往右报数数量N3-小华人数N4"));
	这个班的人数N1 = 从右往左报数数量N2 + 从左往右报数数量N3 - 小华人数N4;
	这个班的人数N1.PrintProcessLog(1);
}
void P46_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 1: The first small question is about tolerance and rejection","P46例一第一小题 容斥问题"},
		{"Title: In the “Endless Chess Fun” club, there are 18 people who can play chess, 10 people who can play Go, and 7 people who can play both Go and Chess. How many people in this club like Go or Chess?",
		"题目：在“棋乐无穷”社团里，其中会下象棋的有18人，会下围棋的有10人，围棋和象棋都会下的有7人，这个社团里有多少个人喜欢围棋或象棋?"},
		{"1. Calculate the number of people who can play Go or Chess N1=the number of people who can play Chess N2+the number of people who can play Go N3- the number of people who can play Go and Chess N4",
		"1.计算会下围棋或象棋的人数N1 会下围棋或象棋的人数N1=会下象棋的人数N2+会下围棋的人数N3-围棋和象棋会下的人数N4"},
		//变量表
		{"NumberofpeoplewhocanplayGoorChessN1","会下围棋或象棋的人数N1"},
		{"NumberofpeoplewhocanplaychessN2","会下象棋的人数N2"},
		{"NumberofpeoplewhocanplayGoN3","会下围棋的人数N3"},
		{"NumberofpeoplewhocanplayGoandChessN4","围棋和象棋会下的人数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<9, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexA=test.AddSector(3, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(2.9)},{float(4.9),float(2.9)},{float(4.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB=test.AddSector(5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(2.9)},{float(6.9),float(2.9)},{float(6.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(3)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB ;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 4.9, 2.0, "会下象棋");
	test.AddText(PrintfCol::顶点标注, 4.9, 6.0, "会下围棋");
	test.AddText(PrintfCol::顶点标注, 2.9, 4.0, "象棋围棋都会下");
	DefineLangVarInt(会下象棋的人数N2, 18);
	DefineLangVarInt(会下围棋的人数N3, 10);
	DefineLangVarInt(围棋和象棋会下的人数N4, 7);
	ColPrintf(PrintfCol::标题, Lang("P46例一第一小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：在“棋乐无穷”社团里，其中会下象棋的有18人，会下围棋的有10人，围棋和象棋都会下的有7人，这个社团里有多少个人喜欢围棋或象棋?"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(会下围棋或象棋的人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算会下围棋或象棋的人数N1 会下围棋或象棋的人数N1=会下象棋的人数N2+会下围棋的人数N3-围棋和象棋会下的人数N4"));
	会下围棋或象棋的人数N1 = 会下象棋的人数N2 + 会下围棋的人数N3 - 围棋和象棋会下的人数N4;
	会下围棋或象棋的人数N1.PrintProcessLog(1);
}
void P46_2_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 1: The first small question is about tolerance and rejection","P46例一第二小题方法一 容斥问题"},
		{"Title: In the “Endless Chess Fun” club, there are 18 people who can play chess, 10 people who can play Go, and 7 people who can play both Go and Chess. How many people in this club like Go or Chess?",
		"题目：在“棋乐无穷”社团里，会下象棋或会下围棋的一共有48人，其中会下象棋的有42人，会下围棋的有37人，这个社团里有多少个人喜欢围棋和象棋?"},
		{"1. Calculate the number of people who can play Go or Chess N1=the number of people who can play Chess N2+the number of people who can play Go N3- the number of people who can play Go and Chess N4",
		"1.计算会下围棋和象棋的人数N1 会下围棋和象棋的人数N1=会下象棋的人数N2+会下围棋的人数N3-一共的人数N4"},
		//变量表
		{"NumberofpeoplewhocanplayGoandChessN1","会下围棋和象棋的人数N1"},
		{"NumberofpeoplewhocanplaychessN2","会下象棋的人数N2"},
		{"NumberofpeoplewhocanplayGoN3","会下围棋的人数N3"},
		{"ThetotalnumberofpeopleN4","一共的人数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<9, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexA = test.AddSector(3, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(2.9)},{float(4.9),float(2.9)},{float(4.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(2.9)},{float(6.9),float(2.9)},{float(6.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(3)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 4.9, 2.0, "会下象棋");
	test.AddText(PrintfCol::顶点标注, 4.9, 6.0, "会下围棋");
	test.AddText(PrintfCol::顶点标注, 2.9, 4.0, "象棋围棋都会下");
	DefineLangVarInt(会下象棋的人数N2, 42);
	DefineLangVarInt(会下围棋的人数N3, 37);
	DefineLangVarInt(一共的人数N4, 48);
	ColPrintf(PrintfCol::标题, Lang("P46例一第二小题方法一 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：在“棋乐无穷”社团里，会下象棋或会下围棋的一共有48人，其中会下象棋的有42人，会下围棋的有37人，这个社团里有多少个人喜欢围棋和象棋?"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(会下围棋和象棋的人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算会下围棋和象棋的人数N1 会下围棋和象棋的人数N1=会下象棋的人数N2+会下围棋的人数N3-一共的人数N4"));
	会下围棋和象棋的人数N1 = 会下象棋的人数N2 + 会下围棋的人数N3 - 一共的人数N4;
	会下围棋和象棋的人数N1.PrintProcessLog(1);
}
void P46_2_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 1 Second Question Method 2 Refutation Problem","P46例一第二小题方法二 容斥问题"},
		{"Title: In the “Endless Chess Fun” club, there are a total of 48 people who can play chess or go, including 42 people who can play chess and 37 people who can play Go. How many people in this club like go and chess?",
		"题目：在“棋乐无穷”社团里，会下象棋或会下围棋的一共有48人，其中会下象棋的有42人，会下围棋的有37人，这个社团里有多少个人喜欢围棋和象棋?"},
		{"1. Calculate the number of people who can play Go and Chess. N1 includes the number of people who can play Go and Chess. N1=the total number of people N4- the number of people who can play Go",
		"1.计算包含会下围棋和象棋象棋人数N1 包含会下围棋和象棋象棋人数N1=一共的人数N4-会下围棋的人数N3"},
		{"2. Calculate the number of people who can play Go and Chess N1=the number of people who can play Chess N2- including the number of people who can play Go and Chess N1",
		"2.计算会下围棋和象棋的人数N1 会下围棋和象棋的人数N1=会下象棋的人数N2-包含会下围棋和象棋象棋人数N1"},
		
		//变量表
		{"NumberofpeoplewhocanplayGoandChessN1","会下围棋和象棋的人数N1"},
		{"NumberofpeoplewhocanplaychessN2","会下象棋的人数N2"},
		{"NumberofpeoplewhocanplayGoN3","会下围棋的人数N3"},
		{"ThetotalnumberofpeopleN4","一共的人数N4"},
		{"IncludingthenumberofplayerswhocanplayGoandChessN1","包含会下围棋和象棋象棋人数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<9, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexA = test.AddSector(3, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(2.9)},{float(4.9),float(2.9)},{float(4.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(2.9)},{float(6.9),float(2.9)},{float(6.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(3)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 4.9, 2.0, "会下象棋");
	test.AddText(PrintfCol::顶点标注, 4.9, 6.0, "会下围棋");
	test.AddText(PrintfCol::顶点标注, 2.9, 4.0, "象棋围棋都会下");
	DefineLangVarInt(会下象棋的人数N2, 42);
	DefineLangVarInt(会下围棋的人数N3, 37);
	DefineLangVarInt(一共的人数N4, 48);
	ColPrintf(PrintfCol::标题, Lang("P46例一第二小题方法一 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：在“棋乐无穷”社团里，会下象棋或会下围棋的一共有48人，其中会下象棋的有42人，会下围棋的有37人，这个社团里有多少个人喜欢围棋和象棋?"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(包含会下围棋和象棋象棋人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算包含会下围棋和象棋象棋人数N1 包含会下围棋和象棋象棋人数N1=一共的人数N4-会下围棋的人数N3"));
	包含会下围棋和象棋象棋人数N1 = 一共的人数N4 - 会下围棋的人数N3;
	包含会下围棋和象棋象棋人数N1.PrintProcessLog(1);
	DefineLangVarInt(会下围棋和象棋的人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算会下围棋和象棋的人数N1 会下围棋和象棋的人数N1=会下象棋的人数N2-包含会下围棋和象棋象棋人数N1"));
	会下围棋和象棋的人数N1 = 会下象棋的人数N2 - 包含会下围棋和象棋象棋人数N1;
	会下围棋和象棋的人数N1.PrintProcessLog(2);
}
void P46_2_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 1 Third sub question: Refutation problem","P46例一第三小题 容斥问题"},
		{"Title: In the “Infinite Chess” club, there are a total of 48 people who can play chess or go, of which 37 people can play chess, 9 people\ncan play both chess and go, and how many people can only play Go and how many can only play chess",
		"题目：在“棋乐无穷”社团里，会下象棋或会下围棋的一共有48人，其中会下象棋的有37人，象棋和围棋都会下的有9人，只会下围棋和只会下象棋的人分别有多少人"},
		{"1. Calculate the number of people who can only play chess N1=the number of people who can play chess N1- the number of people who can play both chess and Go N2",
		"1.计算只会下象棋的人数N1 只会下象棋的人数N1=会下象棋的人数N1-象棋围棋都会下的人N2"},
		{"2. Calculate the number of people who only know how to play Go N1=the total number of people N4- the number of people who know how to play chess N1",
		"2.计算只会下围棋的人数N1 只会下围棋的人数N1=一共的人数N4-会下象棋的人数N1"},
		//变量表
		{"NumberofpeoplewhocanplaychessN1","会下象棋的人数N1"},
		{"PeoplewhocanplaybothchessandGoN2","象棋围棋都会下的人N2"},
		{"ThetotalnumberofpeopleN4","一共的人数N4"},
		{"NumberofpeoplewhoonlyknowhowtoplaychessN1","只会下象棋的人数N1"},
		{"NumberofpeoplewhoonlyknowhowtoplayGoN1","只会下围棋的人数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<9, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexA = test.AddSector(3, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(2.9)},{float(4.9),float(2.9)},{float(4.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(2.9)},{float(6.9),float(2.9)},{float(6.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(3)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 4.9, 2.0, "会下象棋");
	test.AddText(PrintfCol::顶点标注, 4.9, 6.0, "会下围棋");
	test.AddText(PrintfCol::顶点标注, 2.9, 4.0, "象棋围棋都会下");
	DefineLangVarInt(会下象棋的人数N1, 37);
	DefineLangVarInt(象棋围棋都会下的人N2, 9);
	DefineLangVarInt(一共的人数N4, 48);
	ColPrintf(PrintfCol::标题, Lang("P46例一第二小题方法一 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：在“棋乐无穷”社团里，会下象棋或会下围棋的一共有48人，其中会下象棋的有42人，会下围棋的有37人，这个社团里有多少个人喜欢围棋和象棋?"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(只会下象棋的人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算只会下象棋的人数N1 只会下象棋的人数N1=会下象棋的人数N1-象棋围棋都会下的人N2"));
	只会下象棋的人数N1 = 会下象棋的人数N1 - 象棋围棋都会下的人N2;
	只会下象棋的人数N1.PrintProcessLog(1);
	DefineLangVarInt(只会下围棋的人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算只会下围棋的人数N1 只会下围棋的人数N1=一共的人数N4-会下象棋的人数N1"));
	只会下围棋的人数N1 = 一共的人数N4 - 会下象棋的人数N1;
	只会下围棋的人数N1.PrintProcessLog(2);
}
void P46_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 2: The first question is about tolerance and rejection","P46例二第一小题 容斥问题"},
		{"Overall question: There are 38 students in Class One of Five Years. In a final exam, 15 students scored 100 in Chinese, 17 students scored 100 in Mathematics, and 7 students scored 100 in both Chinese and Mathematics.",
		"总题目：五年一班共有38人，在一次期末考试中，语文100分的有15人，数学100分的有17人，语文数学都是100分的有7人。"},
		{"(1) How many people are there in Class Five with at least one course worth 100?",
		"(1)五年一班至少有1门是100的有几人？"},
		{"1. Calculate the number of people for at least one hundred subjects N1=the number of people for one hundred subjects\nin Chinese language N2+the number of people for one hundred subjects in mathematics N3- the number of people for one hundred subjects in Chinese language and\nmathematics N4",
		"1.计算至少一门一百的人数N1 至少一门一百的人数N1=语文一百人数N2+数学一百人数N3-语文数学一百人数N4"},
		//变量表
		{"OnehundredChinesespeakersN2","语文一百人数N2"},
		{"100studentsinChineseandMathematicsN4","语文数学一百人数N4"},
		{"Mathematics100peopleN3","数学一百人数N3"},
		{"Atleastonecoursewithapopulationofonehundred,N1","至少一门一百的人数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<9, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexA = test.AddSector(3, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(2.9)},{float(4.9),float(2.9)},{float(4.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(2.9)},{float(6.9),float(2.9)},{float(6.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(3)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 4.9, 2.0, "语文一百分人数");
	test.AddText(PrintfCol::顶点标注, 4.9, 6.0, "数学一百分人数");
	test.AddText(PrintfCol::顶点标注, 2.9, 4.0, "语文数学一百分人数");
	DefineLangVarInt(语文一百人数N2, 15);
	DefineLangVarInt(语文数学一百人数N4, 7);
	DefineLangVarInt(数学一百人数N3, 17);
	ColPrintf(PrintfCol::标题, Lang("P46例二第一小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("总题目：五年一班共有38人，在一次期末考试中，语文100分的有15人，数学100分的有17人，语文数学都是100分的有7人。"));
	ColPrintf(PrintfCol::标题, Lang("(1)五年一班至少有1门是100的有几人？"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(至少一门一百的人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算至少一门一百的人数N1 至少一门一百的人数N1=语文一百人数N2+数学一百人数N3-语文数学一百人数N4"));
	至少一门一百的人数N1 = 语文一百人数N2 + 数学一百人数N3 - 语文数学一百人数N4;
	至少一门一百的人数N1.PrintProcessLog(1);
}
void P46_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 2 Second sub question: The problem of tolerance and rejection","P46例二第二小题 容斥问题"},
		{"(2) How many students in this class don't get a hundred?",
		"(2)这个班级里面有多少个没得一百的?(引用例二第一小题的计算结果)"},
		{"1. Calculate the number of people who did not receive a hundred N1=the total number of people N4 minus the number of people who received at least one hundred N1",
		"1.计算没有得一百人数N1 没有得一百人数N1=一共的人数N4-至少一门一百的人数N1"},
		//变量表
		{"ThetotalnumberofpeopleN4","一共的人数N4"},
		{"Atleastonecoursewithapopulationofonehundred,N1","至少一门一百的人数N1"},
		{"ThereisnoonehundredpeopleN1","没有得一百人数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<9, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexA = test.AddSector(3, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);


	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(2.9)},{float(4.9),float(2.9)},{float(4.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(2.9)},{float(6.9),float(2.9)},{float(6.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(3)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 4.9, 2.0, "语文一百分人数");
	test.AddText(PrintfCol::顶点标注, 4.9, 6.0, "数学一百分人数");
	test.AddText(PrintfCol::顶点标注, 2.9, 4.0, "语文数学一百分人数");
	DefineLangVarInt(一共的人数N4, 38);
	DefineLangVarInt(至少一门一百的人数N1, 25);
	ColPrintf(PrintfCol::标题, Lang("P46例二第二小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("(2)这个班级里面有多少个没得一百的?(引用例二第一小题的计算结果)"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(没有得一百人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算没有得一百人数N1 没有得一百人数N1=一共的人数N4-至少一门一百的人数N1"));
	没有得一百人数N1 = 一共的人数N4 - 至少一门一百的人数N1;
	没有得一百人数N1.PrintProcessLog(1);
}
void P46()
{
	P46_1();
	ColPrintf(PrintfCol::方法, "");
	P46_2_1();
	ColPrintf(PrintfCol::方法, "");
	P46_2_2_1();
	ColPrintf(PrintfCol::方法, "");
	P46_2_2_2();
	ColPrintf(PrintfCol::方法, "");
	P46_2_3();
	ColPrintf(PrintfCol::方法, "");
	P46_3_1();
	ColPrintf(PrintfCol::方法, "");
}
void P46_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P46();
	Lang.SetCurLanguage(LanguageLib::English);
	P46();
	ColPrintf(PrintfCol::方法, "");

}