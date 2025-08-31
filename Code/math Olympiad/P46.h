#pragma once
//��ƪ��6���⣬��һ��������С�⣬�ڶ�С�����2����������������2��С��
void P46_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Little Cow Test Knife Tolerance Issue","P46Сţ�Ե� �ݳ�����"},
		{"Title: How many students are there in Class One of Four when standing in a row and reporting numbers from left to right, Xiaohua reports 18, and from right to left, Xiaohua reports 13?",
		"��Ŀ������һ��ͬѧվ��һ�ţ��������ұ���ʱ��С����18������������ʱ��С����13��������ж�����ѧ��?"},
		{"1. Calculate the number of students in this class N1=number of reports from right to left N2+number of reports from left to right N3- number of students in Xiaohua N4",
		"1.��������������N1 ����������N1=��������������N2+�������ұ�������N3-С������N4"},
		//������
		{"ReportquantityN2fromrighttoleft","��������������N2"},
		{"NumberN3reportedfromlefttoright","�������ұ�������N3"},
		{"NumberofXiaohuaN4","С������N4"},
		{"ThenumberofstudentsinthisclassisN1","����������N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��������������N2, 13);
	DefineLangVarInt(�������ұ�������N3, 18);
	DefineLangVarInt(С������N4, 1);
	ColPrintf(PrintfCol::����, Lang("P46Сţ�Ե� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������һ��ͬѧվ��һ�ţ��������ұ���ʱ��С����18������������ʱ��С����13��������ж�����ѧ��?"));
	DefineLangVarInt(����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������������N1 ����������N1=��������������N2+�������ұ�������N3-С������N4"));
	����������N1 = ��������������N2 + �������ұ�������N3 - С������N4;
	����������N1.PrintProcessLog(1);
}
void P46_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 1: The first small question is about tolerance and rejection","P46��һ��һС�� �ݳ�����"},
		{"Title: In the ��Endless Chess Fun�� club, there are 18 people who can play chess, 10 people who can play Go, and 7 people who can play both Go and Chess. How many people in this club like Go or Chess?",
		"��Ŀ���ڡ����������������л����������18�ˣ�����Χ�����10�ˣ�Χ������嶼���µ���7�ˣ�����������ж��ٸ���ϲ��Χ�������?"},
		{"1. Calculate the number of people who can play Go or Chess N1=the number of people who can play Chess N2+the number of people who can play Go N3- the number of people who can play Go and Chess N4",
		"1.�������Χ������������N1 ����Χ������������N1=�������������N2+����Χ�������N3-Χ���������µ�����N4"},
		//������
		{"NumberofpeoplewhocanplayGoorChessN1","����Χ������������N1"},
		{"NumberofpeoplewhocanplaychessN2","�������������N2"},
		{"NumberofpeoplewhocanplayGoN3","����Χ�������N3"},
		{"NumberofpeoplewhocanplayGoandChessN4","Χ���������µ�����N4"},
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB ;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 4.9, 2.0, "��������");
	test.AddText(PrintfCol::�����ע, 4.9, 6.0, "����Χ��");
	test.AddText(PrintfCol::�����ע, 2.9, 4.0, "����Χ�嶼����");
	DefineLangVarInt(�������������N2, 18);
	DefineLangVarInt(����Χ�������N3, 10);
	DefineLangVarInt(Χ���������µ�����N4, 7);
	ColPrintf(PrintfCol::����, Lang("P46��һ��һС�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ڡ����������������л����������18�ˣ�����Χ�����10�ˣ�Χ������嶼���µ���7�ˣ�����������ж��ٸ���ϲ��Χ�������?"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(����Χ������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������Χ������������N1 ����Χ������������N1=�������������N2+����Χ�������N3-Χ���������µ�����N4"));
	����Χ������������N1 = �������������N2 + ����Χ�������N3 - Χ���������µ�����N4;
	����Χ������������N1.PrintProcessLog(1);
}
void P46_2_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 1: The first small question is about tolerance and rejection","P46��һ�ڶ�С�ⷽ��һ �ݳ�����"},
		{"Title: In the ��Endless Chess Fun�� club, there are 18 people who can play chess, 10 people who can play Go, and 7 people who can play both Go and Chess. How many people in this club like Go or Chess?",
		"��Ŀ���ڡ�������������������������Χ���һ����48�ˣ����л����������42�ˣ�����Χ�����37�ˣ�����������ж��ٸ���ϲ��Χ�������?"},
		{"1. Calculate the number of people who can play Go or Chess N1=the number of people who can play Chess N2+the number of people who can play Go N3- the number of people who can play Go and Chess N4",
		"1.�������Χ������������N1 ����Χ������������N1=�������������N2+����Χ�������N3-һ��������N4"},
		//������
		{"NumberofpeoplewhocanplayGoandChessN1","����Χ������������N1"},
		{"NumberofpeoplewhocanplaychessN2","�������������N2"},
		{"NumberofpeoplewhocanplayGoN3","����Χ�������N3"},
		{"ThetotalnumberofpeopleN4","һ��������N4"},
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 4.9, 2.0, "��������");
	test.AddText(PrintfCol::�����ע, 4.9, 6.0, "����Χ��");
	test.AddText(PrintfCol::�����ע, 2.9, 4.0, "����Χ�嶼����");
	DefineLangVarInt(�������������N2, 42);
	DefineLangVarInt(����Χ�������N3, 37);
	DefineLangVarInt(һ��������N4, 48);
	ColPrintf(PrintfCol::����, Lang("P46��һ�ڶ�С�ⷽ��һ �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ڡ�������������������������Χ���һ����48�ˣ����л����������42�ˣ�����Χ�����37�ˣ�����������ж��ٸ���ϲ��Χ�������?"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(����Χ������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������Χ������������N1 ����Χ������������N1=�������������N2+����Χ�������N3-һ��������N4"));
	����Χ������������N1 = �������������N2 + ����Χ�������N3 - һ��������N4;
	����Χ������������N1.PrintProcessLog(1);
}
void P46_2_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 1 Second Question Method 2 Refutation Problem","P46��һ�ڶ�С�ⷽ���� �ݳ�����"},
		{"Title: In the ��Endless Chess Fun�� club, there are a total of 48 people who can play chess or go, including 42 people who can play chess and 37 people who can play Go. How many people in this club like go and chess?",
		"��Ŀ���ڡ�������������������������Χ���һ����48�ˣ����л����������42�ˣ�����Χ�����37�ˣ�����������ж��ٸ���ϲ��Χ�������?"},
		{"1. Calculate the number of people who can play Go and Chess. N1 includes the number of people who can play Go and Chess. N1=the total number of people N4- the number of people who can play Go",
		"1.�����������Χ���������������N1 ��������Χ���������������N1=һ��������N4-����Χ�������N3"},
		{"2. Calculate the number of people who can play Go and Chess N1=the number of people who can play Chess N2- including the number of people who can play Go and Chess N1",
		"2.�������Χ������������N1 ����Χ������������N1=�������������N2-��������Χ���������������N1"},
		
		//������
		{"NumberofpeoplewhocanplayGoandChessN1","����Χ������������N1"},
		{"NumberofpeoplewhocanplaychessN2","�������������N2"},
		{"NumberofpeoplewhocanplayGoN3","����Χ�������N3"},
		{"ThetotalnumberofpeopleN4","һ��������N4"},
		{"IncludingthenumberofplayerswhocanplayGoandChessN1","��������Χ���������������N1"},
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 4.9, 2.0, "��������");
	test.AddText(PrintfCol::�����ע, 4.9, 6.0, "����Χ��");
	test.AddText(PrintfCol::�����ע, 2.9, 4.0, "����Χ�嶼����");
	DefineLangVarInt(�������������N2, 42);
	DefineLangVarInt(����Χ�������N3, 37);
	DefineLangVarInt(һ��������N4, 48);
	ColPrintf(PrintfCol::����, Lang("P46��һ�ڶ�С�ⷽ��һ �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ڡ�������������������������Χ���һ����48�ˣ����л����������42�ˣ�����Χ�����37�ˣ�����������ж��ٸ���ϲ��Χ�������?"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(��������Χ���������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����������Χ���������������N1 ��������Χ���������������N1=һ��������N4-����Χ�������N3"));
	��������Χ���������������N1 = һ��������N4 - ����Χ�������N3;
	��������Χ���������������N1.PrintProcessLog(1);
	DefineLangVarInt(����Χ������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������Χ������������N1 ����Χ������������N1=�������������N2-��������Χ���������������N1"));
	����Χ������������N1 = �������������N2 - ��������Χ���������������N1;
	����Χ������������N1.PrintProcessLog(2);
}
void P46_2_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 1 Third sub question: Refutation problem","P46��һ����С�� �ݳ�����"},
		{"Title: In the ��Infinite Chess�� club, there are a total of 48 people who can play chess or go, of which 37 people can play chess, 9 people\ncan play both chess and go, and how many people can only play Go and how many can only play chess",
		"��Ŀ���ڡ�������������������������Χ���һ����48�ˣ����л����������37�ˣ������Χ�嶼���µ���9�ˣ�ֻ����Χ���ֻ����������˷ֱ��ж�����"},
		{"1. Calculate the number of people who can only play chess N1=the number of people who can play chess N1- the number of people who can play both chess and Go N2",
		"1.����ֻ�������������N1 ֻ�������������N1=�������������N1-����Χ�嶼���µ���N2"},
		{"2. Calculate the number of people who only know how to play Go N1=the total number of people N4- the number of people who know how to play chess N1",
		"2.����ֻ����Χ�������N1 ֻ����Χ�������N1=һ��������N4-�������������N1"},
		//������
		{"NumberofpeoplewhocanplaychessN1","�������������N1"},
		{"PeoplewhocanplaybothchessandGoN2","����Χ�嶼���µ���N2"},
		{"ThetotalnumberofpeopleN4","һ��������N4"},
		{"NumberofpeoplewhoonlyknowhowtoplaychessN1","ֻ�������������N1"},
		{"NumberofpeoplewhoonlyknowhowtoplayGoN1","ֻ����Χ�������N1"},
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 4.9, 2.0, "��������");
	test.AddText(PrintfCol::�����ע, 4.9, 6.0, "����Χ��");
	test.AddText(PrintfCol::�����ע, 2.9, 4.0, "����Χ�嶼����");
	DefineLangVarInt(�������������N1, 37);
	DefineLangVarInt(����Χ�嶼���µ���N2, 9);
	DefineLangVarInt(һ��������N4, 48);
	ColPrintf(PrintfCol::����, Lang("P46��һ�ڶ�С�ⷽ��һ �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ڡ�������������������������Χ���һ����48�ˣ����л����������42�ˣ�����Χ�����37�ˣ�����������ж��ٸ���ϲ��Χ�������?"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(ֻ�������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ֻ�������������N1 ֻ�������������N1=�������������N1-����Χ�嶼���µ���N2"));
	ֻ�������������N1 = �������������N1 - ����Χ�嶼���µ���N2;
	ֻ�������������N1.PrintProcessLog(1);
	DefineLangVarInt(ֻ����Χ�������N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ֻ����Χ�������N1 ֻ����Χ�������N1=һ��������N4-�������������N1"));
	ֻ����Χ�������N1 = һ��������N4 - �������������N1;
	ֻ����Χ�������N1.PrintProcessLog(2);
}
void P46_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 2: The first question is about tolerance and rejection","P46������һС�� �ݳ�����"},
		{"Overall question: There are 38 students in Class One of Five Years. In a final exam, 15 students scored 100 in Chinese, 17 students scored 100 in Mathematics, and 7 students scored 100 in both Chinese and Mathematics.",
		"����Ŀ������һ�๲��38�ˣ���һ����ĩ�����У�����100�ֵ���15�ˣ���ѧ100�ֵ���17�ˣ�������ѧ����100�ֵ���7�ˡ�"},
		{"(1) How many people are there in Class Five with at least one course worth 100?",
		"(1)����һ��������1����100���м��ˣ�"},
		{"1. Calculate the number of people for at least one hundred subjects N1=the number of people for one hundred subjects\nin Chinese language N2+the number of people for one hundred subjects in mathematics N3- the number of people for one hundred subjects in Chinese language and\nmathematics N4",
		"1.��������һ��һ�ٵ�����N1 ����һ��һ�ٵ�����N1=����һ������N2+��ѧһ������N3-������ѧһ������N4"},
		//������
		{"OnehundredChinesespeakersN2","����һ������N2"},
		{"100studentsinChineseandMathematicsN4","������ѧһ������N4"},
		{"Mathematics100peopleN3","��ѧһ������N3"},
		{"Atleastonecoursewithapopulationofonehundred,N1","����һ��һ�ٵ�����N1"},
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 4.9, 2.0, "����һ�ٷ�����");
	test.AddText(PrintfCol::�����ע, 4.9, 6.0, "��ѧһ�ٷ�����");
	test.AddText(PrintfCol::�����ע, 2.9, 4.0, "������ѧһ�ٷ�����");
	DefineLangVarInt(����һ������N2, 15);
	DefineLangVarInt(������ѧһ������N4, 7);
	DefineLangVarInt(��ѧһ������N3, 17);
	ColPrintf(PrintfCol::����, Lang("P46������һС�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("����Ŀ������һ�๲��38�ˣ���һ����ĩ�����У�����100�ֵ���15�ˣ���ѧ100�ֵ���17�ˣ�������ѧ����100�ֵ���7�ˡ�"));
	ColPrintf(PrintfCol::����, Lang("(1)����һ��������1����100���м��ˣ�"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(����һ��һ�ٵ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������һ��һ�ٵ�����N1 ����һ��һ�ٵ�����N1=����һ������N2+��ѧһ������N3-������ѧһ������N4"));
	����һ��һ�ٵ�����N1 = ����һ������N2 + ��ѧһ������N3 - ������ѧһ������N4;
	����һ��һ�ٵ�����N1.PrintProcessLog(1);
}
void P46_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P46 Example 2 Second sub question: The problem of tolerance and rejection","P46�����ڶ�С�� �ݳ�����"},
		{"(2) How many students in this class don't get a hundred?",
		"(2)����༶�����ж��ٸ�û��һ�ٵ�?(����������һС��ļ�����)"},
		{"1. Calculate the number of people who did not receive a hundred N1=the total number of people N4 minus the number of people who received at least one hundred N1",
		"1.����û�е�һ������N1 û�е�һ������N1=һ��������N4-����һ��һ�ٵ�����N1"},
		//������
		{"ThetotalnumberofpeopleN4","һ��������N4"},
		{"Atleastonecoursewithapopulationofonehundred,N1","����һ��һ�ٵ�����N1"},
		{"ThereisnoonehundredpeopleN1","û�е�һ������N1"},
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		return InAB;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 4.9, 2.0, "����һ�ٷ�����");
	test.AddText(PrintfCol::�����ע, 4.9, 6.0, "��ѧһ�ٷ�����");
	test.AddText(PrintfCol::�����ע, 2.9, 4.0, "������ѧһ�ٷ�����");
	DefineLangVarInt(һ��������N4, 38);
	DefineLangVarInt(����һ��һ�ٵ�����N1, 25);
	ColPrintf(PrintfCol::����, Lang("P46�����ڶ�С�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("(2)����༶�����ж��ٸ�û��һ�ٵ�?(����������һС��ļ�����)"));
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(û�е�һ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����û�е�һ������N1 û�е�һ������N1=һ��������N4-����һ��һ�ٵ�����N1"));
	û�е�һ������N1 = һ��������N4 - ����һ��һ�ٵ�����N1;
	û�е�һ������N1.PrintProcessLog(1);
}
void P46()
{
	P46_1();
	ColPrintf(PrintfCol::����, "");
	P46_2_1();
	ColPrintf(PrintfCol::����, "");
	P46_2_2_1();
	ColPrintf(PrintfCol::����, "");
	P46_2_2_2();
	ColPrintf(PrintfCol::����, "");
	P46_2_3();
	ColPrintf(PrintfCol::����, "");
	P46_3_1();
	ColPrintf(PrintfCol::����, "");
}
void P46_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P46();
	Lang.SetCurLanguage(LanguageLib::English);
	P46();
	ColPrintf(PrintfCol::����, "");

}