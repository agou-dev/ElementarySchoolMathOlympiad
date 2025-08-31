#pragma once
void P47_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 Example 1: The first small question is about tolerance and rejection","P47例一第一小题 容斥问题"},
		{"Example 1: There are 50 students in the class, of which 34 can sing and 29 can dance",
		"例一总题目：班上有50名同学，其中34名同学会唱歌，29名同学会跳舞"},
		{"(1) How many people can sing and dance at the most?",
		"(1)即会唱歌又会跳舞的最多有多少人?"},
		{"Analysis: This question does not require calculation because there are fewer students who can dance than those who can sing, so those who can sing can include those who can dance. Conversely, students who can dance can both sing and dance.",
		"分析：此题不需计算，因为会跳舞的同学比会唱歌的同学少，所以会唱歌的可以包含会跳舞的，反过来说，会跳舞的同学即会唱歌也会跳舞。即会唱歌又会跳舞的最多有29人"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P47例一第一小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("例一总题目：班上有50名同学，其中34名同学会唱歌，29名同学会跳舞"));
	ColPrintf(PrintfCol::标题, Lang("(1)即会唱歌又会跳舞的最多有多少人?"));
	ColPrintf(PrintfCol::标题, Lang("分析：此题不需计算，因为会跳舞的同学比会唱歌的同学少，所以会唱歌的可以包含会跳舞的，反过来说，会跳舞的同学即会唱歌也会跳舞。即会唱歌又会跳舞的最多有29人"));
	typedef ScanningLine<9, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexA = test.AddSector(3, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(2.9)},{float(4.9),float(2.9)},{float(4.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(3, 3, 1.5, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(3),float(2.9)},{float(4.4),float(2.9)},{float(4.5),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');
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
	test.AddText(PrintfCol::顶点标注, 4.6, 3.0, "会唱歌");
	test.AddText(PrintfCol::顶点标注, 2.9, 3.0, "即会唱歌又会跳舞");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
}
void P47_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 Example 1: The first small question is about tolerance and rejection","P47例一第二小题 容斥问题"},
		{"(2) How many people can sing and dance at least?",
		"(2)即会唱歌又会跳舞的最少有多少人?"},
		{"1. Calculate the minimum number of people who can sing and dance N1=(number of people who can sing N2- number of people who can dance N3) - total number of people N4",
		"1.计算会唱歌跳舞最少人数N1 会唱歌跳舞最少人数N1=(会唱歌人数N2-会跳舞人数N3)-总共人数N4"},
		//变量表
		{"NumberofSingersN2","会唱歌人数N2"},
		{"NumberofdancersN3","会跳舞人数N3"},
		{"TotalnumberofpeopleN4","总共人数N4"},
		{"MinimumnumberofpeoplewhocansinganddanceN1","会唱歌跳舞最少人数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(会唱歌人数N2, 34);
	DefineLangVarInt(会跳舞人数N3, 29);
	DefineLangVarInt(总共人数N4, 50);
	ColPrintf(PrintfCol::标题, Lang("P47例一第二小题 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("(2)即会唱歌又会跳舞的最少有多少人?"));
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
	test.AddText(PrintfCol::顶点标注, 4.9, 2.0, "会唱歌人数N2");
	test.AddText(PrintfCol::顶点标注, 4.9, 6.0, "会跳舞人数N3");
	test.AddText(PrintfCol::顶点标注, 2.9, 4.0, "唱歌跳舞都会的(最少)");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(会唱歌跳舞最少人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算会唱歌跳舞最少人数N1 会唱歌跳舞最少人数N1=(会唱歌人数N2-会跳舞人数N3)-总共人数N4"));
	会唱歌跳舞最少人数N1 = (会唱歌人数N2 - 会跳舞人数N3) - 总共人数N4;
	会唱歌跳舞最少人数N1.PrintProcessLog(1);
}
void P47_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 Case Two: Exclusion Problem","P47例二 容斥问题"},
		{"Title: Students from Class 3 of the fifth year participate in interest groups, with each person participating in at least one activity. Among them, 24 students participate in the science group, 37 students participate in the\nart group, and 26 students participate in the Chinese group. There are 10 students who participate in both art and Chinese, 10 students who participate in both science and art, 8 students who participate in both science and Chinese,\nand 4 students who participate in both Chinese, art, and science. Calculate the total number of students in the class",
		"题目：五年三班学生参加兴趣小组，每人至少参加一项，其中24人参加科学小组，37人参加美术小组，26人参加语文小组，参加美术又参加语文有10人，参加科学又参加美术的有10人，参加科学又参加语文的有8人，语文美术科学都参加的有4人，求班级总人数"},
		{"1. Calculate without removing the number of duplicates N1=number of scientific group members N2+number of art group members N3+number of Chinese group members N4",
		"1.计算不去掉重复人数N1 不去掉重复人数N1=科学小组人数N2+美术小组人数N3+语文小组人数N4"},
		{"2. Calculate the number of repetitions N2=Number of participants in art and science N5+Number of participants in art and language N6+Number of participants in science and language N7+Number of participants in science, language and art N8",
		"2.计算重复人数N2 重复人数N2=美术科学参加人数N5+美术语文参加人数N6+科学语文参加人数N7+科学语文美术参加人数N8"},
		{"3. Calculate the number of students in class N3. The number of students in class N3 is equal to the number of repeated students N1 minus the number of repeated students N2",
		"3.计算班级人数N3 班级人数N3=不去掉重复人数N1-重复人数N2"},
		//变量表
		{"NumberofmembersinthescientificgroupN2","科学小组人数N2"},
		{"ArtgroupsizeN3","美术小组人数N3"},
		{"NumberofChinesegroupmembersN4","语文小组人数N4"},
		{"NumberofparticipantsinartandscienceN5","美术科学参加人数N5"},
		{"NumberofparticipantsinartandChineseN6","美术语文参加人数N6"},
		{"NumberofparticipantsinScienceChinese:N7","科学语文参加人数N7"},
		{"NumberofparticipantsinScience,Chinese,andArtN8","科学语文美术参加人数N8"},
		{"DonotremoveduplicatenumberN1","不去掉重复人数N1"},
		{"NumberofrepetitionsN2","重复人数N2"},
		{"ClasssizeN3","班级人数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(科学小组人数N2, 24);
	DefineLangVarInt(美术小组人数N3, 37);
	DefineLangVarInt(语文小组人数N4, 26);
	DefineLangVarInt(美术科学参加人数N5, 10);
	DefineLangVarInt(美术语文参加人数N6, 10);
	DefineLangVarInt(科学语文参加人数N7, 8);
	DefineLangVarInt(科学语文美术参加人数N8, 4);
	ColPrintf(PrintfCol::标题, Lang("P47例二 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：五年三班学生参加兴趣小组，每人至少参加一项，其中24人参加科学小组，37人参加美术小组，26人参加语文小组，参加美术又参加语文有10人，参加科学又参加美术的有10人，参加科学又参加语文的有8人，语文美术科学都参加的有4人，求班级总人数"));
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;

	unsigned int nSectorIndexA = test.AddSector(3, 5, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(4.9)},{float(4.9),float(4.9)},{float(4.9),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(5)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(5, 5, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(4.9)},{float(6.9),float(4.9)},{float(6.9),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(5)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexC = test.AddSector(4.5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex8 = { {float(4.5),float(2.9)},{float(6.4),float(2.9)},{float(6.4),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(4.5), float(3)), Vex8, ScanningLineT::FillMode::EdgeMode, ' ');


	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p) ;
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB| InAC| InBC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p)& test.SectorN(nSectorIndexC)->Hit(p);
		return InAB;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition2 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition3 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InBC;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexC)->AddBox(Box);
	test.AddText(PrintfCol::顶点标注, 4.0, 4.0, "4人");
	test.AddText(PrintfCol::顶点标注, 4.0, 5.0, "10人");
	test.AddText(PrintfCol::顶点标注, 3.7 ,3.0, "8人");
	test.AddText(PrintfCol::顶点标注, 5.5, 4.0, "9人");
	test.AddText(PrintfCol::顶点标注, 2.5, 4.0, "语文");
	test.AddText(PrintfCol::顶点标注, 5.5, 2.5, "科学");
	test.AddText(PrintfCol::顶点标注, 5.5, 5.5, "美术");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '+');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition3, '-');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition2, '*');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, '/');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(不去掉重复人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算不去掉重复人数N1 不去掉重复人数N1=科学小组人数N2+美术小组人数N3+语文小组人数N4"));
	不去掉重复人数N1 = 科学小组人数N2 + 美术小组人数N3 + 语文小组人数N4;
	不去掉重复人数N1.PrintProcessLog(1);
	DefineLangVarInt(重复人数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算重复人数N2 重复人数N2=美术科学参加人数N5+美术语文参加人数N6+科学语文参加人数N7+科学语文美术参加人数N8"));
	重复人数N2 = 美术科学参加人数N5 + 美术语文参加人数N6 + 科学语文参加人数N7 + 科学语文美术参加人数N8;
	重复人数N2.PrintProcessLog(2);
	DefineLangVarInt(班级人数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算班级人数N3 班级人数N3=不去掉重复人数N1-重复人数N2"));
	班级人数N3 = 不去掉重复人数N1 - 重复人数N2;
	班级人数N3.PrintProcessLog(3);
}
void P47_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 cases of four tolerance rejection problem","P47例四 容斥问题"},
		{"Question: 223 Online School held a grand finale challenge with a total of 3 questions. Among them, 33 people answered the first question correctly, 31 people answered the second question correctly,\n44 people answered the third question correctly, 43 people answered only one question correctly, 25 people answered two questions correctly, and how many people answered all three questions correctly?",
		"题目：223网校举办了一次压轴题大挑战，一共有3道题，其中33人答对了第一道，31人答对了第二道，有44人答对了第三道题，只答对一道题的有43人，答对两道题的有25人，有几人三道题全打对?"},
		{"1. Calculate the number of people with duplicate parts N1=the number of people who answered the first question correctly N2+the number of people who answered the second question correctly N3+the number of people who answered the third question correctly N4",
		"1.计算有重复部分人数N1 有重复部分人数N1=第一道答对人数N2+第二道答对人数N3+第三道答对人数N4"},
		{"2. Calculate the number of repeated parts N2=the number of correct answers for one question N5+(the number of correct answers for two questions N6 * the number of repeated parts for two questions N7)",
		"2.计算重复部分N2 重复部分N2=一道答对人数N5+(二道答对人数N6*二道重复部分数量N7)"},
		{"3. Calculate the number of correct answers for three questions N3=the number of repeated parts N1- the number of repeated parts N2",
		"3.计算三道题答对人数N3 三道题答对人数N3=有重复部分人数N1-重复部分N2"},
		//变量表
		{"NumberofcorrectanswersforthefirstquestionN2","第一道答对人数N2"},
		{"NumberofcorrectanswersforthethirdquestionN4","第三道答对人数N4"},
		{"NumberofcorrectanswersforthesecondquestionN3","第二道答对人数N3"},
		{"NumberofonecorrectanswersN5","一道答对人数N5"},
		{"NumberoftwecorrectanswersN6","二道答对人数N6"},
		{"NumberofduplicatepartsN7","二道重复部分数量N7"},
		{"ThereareduplicatenumbersN1","有重复部分人数N1"},
		{"RepeatpartN2","重复部分N2"},
		{"NumberofcorrectanswerstothreequestionsN3","三道题答对人数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第一道答对人数N2, 33);
	DefineLangVarInt(第三道答对人数N4, 44);
	DefineLangVarInt(第二道答对人数N3, 31);
	DefineLangVarInt(一道答对人数N5, 43);
	DefineLangVarInt(二道答对人数N6, 25);
	DefineLangVarInt(二道重复部分数量N7, 2);
	ColPrintf(PrintfCol::标题, Lang("P47例四 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：223网校举办了一次压轴题大挑战，一共有3道题，其中33人答对了第一道，31人答对了第二道，有44人答对了第三道题，只答对一道题的有43人，答对两道题的有25人，有几人三道题全打对?"));
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;

	unsigned int nSectorIndexA = test.AddSector(3, 5, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(4.9)},{float(4.9),float(4.9)},{float(4.9),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(5)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(5, 5, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(4.9)},{float(6.9),float(4.9)},{float(6.9),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(5)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexC = test.AddSector(4.5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex8 = { {float(4.5),float(2.9)},{float(6.4),float(2.9)},{float(6.4),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(4.5), float(3)), Vex8, ScanningLineT::FillMode::EdgeMode, ' ');


	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB | InAC | InBC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition2 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition3 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InBC;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	//追加B的包围盒
	test.AddText(PrintfCol::顶点标注, 4.0, 3.5, "三道题答对人数：15人");
	test.AddText(PrintfCol::顶点标注, 2.5, 4.0, "第三题44人");
	test.AddText(PrintfCol::顶点标注, 5.5, 2.5, "第一题33人");
	test.AddText(PrintfCol::顶点标注, 5.5, 5.5, "第二题31人");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '+');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition3, '-');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition2, '*');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, '/');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(有重复部分人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算有重复部分人数N1 有重复部分人数N1=第一道答对人数N2+第二道答对人数N3+第三道答对人数N4"));
	有重复部分人数N1 = 第一道答对人数N2 + 第二道答对人数N3 + 第三道答对人数N4;
	有重复部分人数N1.PrintProcessLog(1);
	DefineLangVarInt(重复部分N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算重复部分N2 重复部分N2=一道答对人数N5+(二道答对人数N6*二道重复部分数量N7)"));
	重复部分N2 = 一道答对人数N5 + (二道答对人数N6 * 二道重复部分数量N7);
	重复部分N2.PrintProcessLog(2);
	DefineLangVarInt(三道题答对人数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算三道题答对人数N3 三道题答对人数N3=有重复部分人数N1-重复部分N2"));
	三道题答对人数N3 = 有重复部分人数N1 - 重复部分N2;
	三道题答对人数N3.PrintProcessLog(3);
}
void P47_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 cases of five tolerance rejection problem","P47例五 容斥问题"},
		{"Title: There are natural numbers from 1 to 100. First, cross out all multiples of 3, all multiples of 5, and finally, cross out multiples of 7. So, how many numbers are left?",
		"题目：现有1-100的自然数，先把所有3倍数划掉，把所有5倍数划掉，最后把7倍数划掉，那么还剩几个数?"},
		{"1. Calculate the three divisible number N1. The three divisible number N1=the common number N2/the triple N3",
		"1.计算被三整除数N1 被三整除数N1=共有的数N2/三倍数N3"},
		{"2. Calculate the number N2 divided by five, which is equal to the common number N2 divided by a multiple of five N5",
		"2.计算被五整除数N2 被五整除数N2=共有的数N2/五倍数N5"},
		{"3. Calculate the seven divisible number N3 divided by seven N3=common number N2/seven fold N6",
		"3.计算被七整除数N3 被七整除数N3=共有的数N2/七倍数N6"},
		{"4. Calculate the number of repetitions N4, which is equal to the common number N2 divided by the least common multiple N7",
		"4.计算三五重复数N4 三五重复数N4=共有的数N2/三五最小公倍数N7"},
		{"5. Calculate the number of repetitions of Panax notoginseng N5=the common number N2/the least common multiple of Panax notoginseng N8",
		"5.计算三七重复数N5 三七重复数N5=共有的数N2/三七最小公倍数N8"},
		{"6. Calculate the number of repetitions N6=the common number N2/the least common multiple N9",
		"6.计算五七重复数N6 五七重复数N6=共有的数N2/五七最小公倍数N9"},
		{"7. Calculate the remaining number N7. The remaining number N7 is (divided by three N1+divided by five N2+divided by seven N3) - (repeated by three or five N4+repeated by three or seven N5+repeated by five or seven N6)",
		"7.计算剩下的数N7 剩下的数N7=(被三整除数N1+被五整除数N2+被七整除数N3)-(三五重复数N4+三七重复数N5+五七重复数N6)"},
		//变量表
		{"CommonNumberN2","共有的数N2"},
		{"TripleN3","三倍数N3"},
		{"FivetimesN5","五倍数N5"},
		{"SeventimesN6","七倍数N6"},
		{"ThreetofiveleastcommonmultipleN7","三五最小公倍数N7"},
		{"Sanqi'sleastcommonmultipleN8","三七最小公倍数N8"},
		{"MinimumcommonmultipleN9of57","五七最小公倍数N9"},
		{"DividedbythreeN1","被三整除数N1"},
		{"Dividedbyfive,N2","被五整除数N2"},
		{"DividedbysevenN3","被七整除数N3"},
		{"ThreetofiverepetitionsN4","三五重复数N4"},
		{"SanqirepetitionnumberN5","三七重复数N5"},
		{"NumberofrepetitionsN6","五七重复数N6"},
		{"TheremainingnumberN7","剩下的数N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(共有的数N2, 100);
	DefineLangVarInt(三倍数N3, 3);
	DefineLangVarInt(五倍数N5, 5);
	DefineLangVarInt(七倍数N6, 7);
	ColPrintf(PrintfCol::标题, Lang("P47例五 容斥问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：现有1-100的自然数，先把所有3倍数划掉，把所有5倍数划掉，最后把7倍数划掉，那么还剩几个数?"));
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;

	unsigned int nSectorIndexA = test.AddSector(3, 5, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(4.9)},{float(4.9),float(4.9)},{float(4.9),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(5)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(5, 5, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex7 = { {float(5),float(4.9)},{float(6.9),float(4.9)},{float(6.9),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(5), float(5)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexC = test.AddSector(4.5, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);
	std::vector<ScanningLineT::Point> Vex8 = { {float(4.5),float(2.9)},{float(6.4),float(2.9)},{float(6.4),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(4.5), float(3)), Vex8, ScanningLineT::FillMode::EdgeMode, ' ');


	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB | InAC | InBC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition2 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition3 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB都命中nSectorIndexA
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InBC;
		};
	ScanningLineT::IncludeBox Box;
	//得到A的包围盒
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//追加B的包围盒
	test.SectorN(nSectorIndexB)->AddBox(Box);
	//追加B的包围盒
	test.AddText(PrintfCol::顶点标注, 4.0, 3.5, "3，5，7倍数数量：0");
	test.AddText(PrintfCol::顶点标注, 4.0, 5.0, "7，5倍数数量：2");
	test.AddText(PrintfCol::顶点标注, 3.7, 2.5, "3和7倍数数量：4");
	test.AddText(PrintfCol::顶点标注, 5.5, 4.0, "3，5倍数数量：6");
	test.AddText(PrintfCol::顶点标注, 2.5, 4.0, "7的倍数：14");
	test.AddText(PrintfCol::顶点标注, 5.5, 2.5, "3的倍数：33");
	test.AddText(PrintfCol::顶点标注, 5.5, 5.5, "5的倍数：20");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '+');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition3, '-');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition2, '*');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, '/');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(被三整除数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算被三整除数N1 被三整除数N1=共有的数N2/三倍数N3"));
	被三整除数N1 = 共有的数N2 / 三倍数N3;
	被三整除数N1.PrintProcessLog(1);
	DefineLangVarInt(被五整除数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算被五整除数N2 被五整除数N2=共有的数N2/五倍数N5"));
	被五整除数N2 = 共有的数N2 / 五倍数N5;
	被五整除数N2.PrintProcessLog(2);
	DefineLangVarInt(被七整除数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算被七整除数N3 被七整除数N3=共有的数N2/七倍数N6"));
	被七整除数N3 = 共有的数N2 / 七倍数N6;
	被七整除数N3.PrintProcessLog(3);
	DefineLangVarInt(三五最小公倍数N7, MinCommonMultiple(三倍数N3, 五倍数N5));
	DefineLangVarInt(三五重复数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算三五重复数N4 三五重复数N4=共有的数N2/三五最小公倍数N7"));
	三五重复数N4 = 共有的数N2 / 三五最小公倍数N7;
	三五重复数N4.PrintProcessLog(4);
	DefineLangVarInt(三七最小公倍数N8, MinCommonMultiple(三倍数N3, 七倍数N6));
	DefineLangVarInt(三七重复数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算三七重复数N5 三七重复数N5=共有的数N2/三七最小公倍数N8"));
	三七重复数N5 = 共有的数N2 / 三七最小公倍数N8;
	三七重复数N5.PrintProcessLog(5);
	DefineLangVarInt(五七最小公倍数N9, MinCommonMultiple(五倍数N5, 七倍数N6));
	DefineLangVarInt(五七重复数N6, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算五七重复数N6 五七重复数N6=共有的数N2/五七最小公倍数N9"));
	五七重复数N6 = 共有的数N2 / 五七最小公倍数N9;
	五七重复数N6.PrintProcessLog(6);
	DefineLangVarInt(剩下的数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算剩下的数N7 剩下的数N7=(被三整除数N1+被五整除数N2+被七整除数N3)-(三五重复数N4+三七重复数N5+五七重复数N6)"));
	剩下的数N7 = (被三整除数N1 + 被五整除数N2 + 被七整除数N3) - (三五重复数N4 + 三七重复数N5 + 五七重复数N6);
	剩下的数N7.PrintProcessLog(7);
}
void P47()
{
	P47_1_1();
	ColPrintf(PrintfCol::方法, "");
	P47_1_2();
	ColPrintf(PrintfCol::方法, "");
	P47_2();
	ColPrintf(PrintfCol::方法, "");
	P47_3();
	ColPrintf(PrintfCol::方法, "");
	P47_4();
	ColPrintf(PrintfCol::方法, "");
}
void P47_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P47();
	Lang.SetCurLanguage(LanguageLib::English);
	P47();
	ColPrintf(PrintfCol::方法, "");

}