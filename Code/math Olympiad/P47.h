#pragma once
void P47_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 Example 1: The first small question is about tolerance and rejection","P47��һ��һС�� �ݳ�����"},
		{"Example 1: There are 50 students in the class, of which 34 can sing and 29 can dance",
		"��һ����Ŀ��������50��ͬѧ������34��ͬѧ�ᳪ�裬29��ͬѧ������"},
		{"(1) How many people can sing and dance at the most?",
		"(1)���ᳪ���ֻ����������ж�����?"},
		{"Analysis: This question does not require calculation because there are fewer students who can dance than those who can sing, so those who can sing can include those who can dance. Conversely, students who can dance can both sing and dance.",
		"���������ⲻ����㣬��Ϊ�������ͬѧ�Ȼᳪ���ͬѧ�٣����Իᳪ��Ŀ��԰���������ģ�������˵���������ͬѧ���ᳪ��Ҳ�����衣���ᳪ���ֻ�����������29��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P47��һ��һС�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��һ����Ŀ��������50��ͬѧ������34��ͬѧ�ᳪ�裬29��ͬѧ������"));
	ColPrintf(PrintfCol::����, Lang("(1)���ᳪ���ֻ����������ж�����?"));
	ColPrintf(PrintfCol::����, Lang("���������ⲻ����㣬��Ϊ�������ͬѧ�Ȼᳪ���ͬѧ�٣����Իᳪ��Ŀ��԰���������ģ�������˵���������ͬѧ���ᳪ��Ҳ�����衣���ᳪ���ֻ�����������29��"));
	typedef ScanningLine<9, 6, 18, 8> ScanningLineT;
	ScanningLineT test;
	unsigned int nSectorIndexA = test.AddSector(3, 3, 2.0, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(3),float(2.9)},{float(4.9),float(2.9)},{float(4.9),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, ' ');

	unsigned int nSectorIndexB = test.AddSector(3, 3, 1.5, 0, 359, ScanningLineT::FillMode::EdgeMode, '*', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(3),float(2.9)},{float(4.4),float(2.9)},{float(4.5),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(3), float(3)), Vex7, ScanningLineT::FillMode::EdgeMode, ' ');
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
	test.AddText(PrintfCol::�����ע, 4.6, 3.0, "�ᳪ��");
	test.AddText(PrintfCol::�����ע, 2.9, 3.0, "���ᳪ���ֻ�����");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
}
void P47_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 Example 1: The first small question is about tolerance and rejection","P47��һ�ڶ�С�� �ݳ�����"},
		{"(2) How many people can sing and dance at least?",
		"(2)���ᳪ���ֻ�����������ж�����?"},
		{"1. Calculate the minimum number of people who can sing and dance N1=(number of people who can sing N2- number of people who can dance N3) - total number of people N4",
		"1.����ᳪ��������������N1 �ᳪ��������������N1=(�ᳪ������N2-����������N3)-�ܹ�����N4"},
		//������
		{"NumberofSingersN2","�ᳪ������N2"},
		{"NumberofdancersN3","����������N3"},
		{"TotalnumberofpeopleN4","�ܹ�����N4"},
		{"MinimumnumberofpeoplewhocansinganddanceN1","�ᳪ��������������N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ᳪ������N2, 34);
	DefineLangVarInt(����������N3, 29);
	DefineLangVarInt(�ܹ�����N4, 50);
	ColPrintf(PrintfCol::����, Lang("P47��һ�ڶ�С�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("(2)���ᳪ���ֻ�����������ж�����?"));
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
	test.AddText(PrintfCol::�����ע, 4.9, 2.0, "�ᳪ������N2");
	test.AddText(PrintfCol::�����ע, 4.9, 6.0, "����������N3");
	test.AddText(PrintfCol::�����ע, 2.9, 4.0, "�������趼���(����)");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, 'g');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(�ᳪ��������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ᳪ��������������N1 �ᳪ��������������N1=(�ᳪ������N2-����������N3)-�ܹ�����N4"));
	�ᳪ��������������N1 = (�ᳪ������N2 - ����������N3) - �ܹ�����N4;
	�ᳪ��������������N1.PrintProcessLog(1);
}
void P47_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 Case Two: Exclusion Problem","P47���� �ݳ�����"},
		{"Title: Students from Class 3 of the fifth year participate in interest groups, with each person participating in at least one activity. Among them, 24 students participate in the science group, 37 students participate in the\nart group, and 26 students participate in the Chinese group. There are 10 students who participate in both art and Chinese, 10 students who participate in both science and art, 8 students who participate in both science and Chinese,\nand 4 students who participate in both Chinese, art, and science. Calculate the total number of students in the class",
		"��Ŀ����������ѧ���μ���ȤС�飬ÿ�����ٲμ�һ�����24�˲μӿ�ѧС�飬37�˲μ�����С�飬26�˲μ�����С�飬�μ������ֲμ�������10�ˣ��μӿ�ѧ�ֲμ���������10�ˣ��μӿ�ѧ�ֲμ����ĵ���8�ˣ�����������ѧ���μӵ���4�ˣ���༶������"},
		{"1. Calculate without removing the number of duplicates N1=number of scientific group members N2+number of art group members N3+number of Chinese group members N4",
		"1.���㲻ȥ���ظ�����N1 ��ȥ���ظ�����N1=��ѧС������N2+����С������N3+����С������N4"},
		{"2. Calculate the number of repetitions N2=Number of participants in art and science N5+Number of participants in art and language N6+Number of participants in science and language N7+Number of participants in science, language and art N8",
		"2.�����ظ�����N2 �ظ�����N2=������ѧ�μ�����N5+�������Ĳμ�����N6+��ѧ���Ĳμ�����N7+��ѧ���������μ�����N8"},
		{"3. Calculate the number of students in class N3. The number of students in class N3 is equal to the number of repeated students N1 minus the number of repeated students N2",
		"3.����༶����N3 �༶����N3=��ȥ���ظ�����N1-�ظ�����N2"},
		//������
		{"NumberofmembersinthescientificgroupN2","��ѧС������N2"},
		{"ArtgroupsizeN3","����С������N3"},
		{"NumberofChinesegroupmembersN4","����С������N4"},
		{"NumberofparticipantsinartandscienceN5","������ѧ�μ�����N5"},
		{"NumberofparticipantsinartandChineseN6","�������Ĳμ�����N6"},
		{"NumberofparticipantsinScienceChinese:N7","��ѧ���Ĳμ�����N7"},
		{"NumberofparticipantsinScience,Chinese,andArtN8","��ѧ���������μ�����N8"},
		{"DonotremoveduplicatenumberN1","��ȥ���ظ�����N1"},
		{"NumberofrepetitionsN2","�ظ�����N2"},
		{"ClasssizeN3","�༶����N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ѧС������N2, 24);
	DefineLangVarInt(����С������N3, 37);
	DefineLangVarInt(����С������N4, 26);
	DefineLangVarInt(������ѧ�μ�����N5, 10);
	DefineLangVarInt(�������Ĳμ�����N6, 10);
	DefineLangVarInt(��ѧ���Ĳμ�����N7, 8);
	DefineLangVarInt(��ѧ���������μ�����N8, 4);
	ColPrintf(PrintfCol::����, Lang("P47���� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����������ѧ���μ���ȤС�飬ÿ�����ٲμ�һ�����24�˲μӿ�ѧС�飬37�˲μ�����С�飬26�˲μ�����С�飬�μ������ֲμ�������10�ˣ��μӿ�ѧ�ֲμ���������10�ˣ��μӿ�ѧ�ֲμ����ĵ���8�ˣ�����������ѧ���μӵ���4�ˣ���༶������"));
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p) ;
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB| InAC| InBC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p)& test.SectorN(nSectorIndexC)->Hit(p);
		return InAB;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition2 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition3 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InBC;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexC)->AddBox(Box);
	test.AddText(PrintfCol::�����ע, 4.0, 4.0, "4��");
	test.AddText(PrintfCol::�����ע, 4.0, 5.0, "10��");
	test.AddText(PrintfCol::�����ע, 3.7 ,3.0, "8��");
	test.AddText(PrintfCol::�����ע, 5.5, 4.0, "9��");
	test.AddText(PrintfCol::�����ע, 2.5, 4.0, "����");
	test.AddText(PrintfCol::�����ע, 5.5, 2.5, "��ѧ");
	test.AddText(PrintfCol::�����ע, 5.5, 5.5, "����");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '+');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition3, '-');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition2, '*');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, '/');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(��ȥ���ظ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㲻ȥ���ظ�����N1 ��ȥ���ظ�����N1=��ѧС������N2+����С������N3+����С������N4"));
	��ȥ���ظ�����N1 = ��ѧС������N2 + ����С������N3 + ����С������N4;
	��ȥ���ظ�����N1.PrintProcessLog(1);
	DefineLangVarInt(�ظ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ظ�����N2 �ظ�����N2=������ѧ�μ�����N5+�������Ĳμ�����N6+��ѧ���Ĳμ�����N7+��ѧ���������μ�����N8"));
	�ظ�����N2 = ������ѧ�μ�����N5 + �������Ĳμ�����N6 + ��ѧ���Ĳμ�����N7 + ��ѧ���������μ�����N8;
	�ظ�����N2.PrintProcessLog(2);
	DefineLangVarInt(�༶����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����༶����N3 �༶����N3=��ȥ���ظ�����N1-�ظ�����N2"));
	�༶����N3 = ��ȥ���ظ�����N1 - �ظ�����N2;
	�༶����N3.PrintProcessLog(3);
}
void P47_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 cases of four tolerance rejection problem","P47���� �ݳ�����"},
		{"Question: 223 Online School held a grand finale challenge with a total of 3 questions. Among them, 33 people answered the first question correctly, 31 people answered the second question correctly,\n44 people answered the third question correctly, 43 people answered only one question correctly, 25 people answered two questions correctly, and how many people answered all three questions correctly?",
		"��Ŀ��223��У�ٰ���һ��ѹ�������ս��һ����3���⣬����33�˴���˵�һ����31�˴���˵ڶ�������44�˴���˵������⣬ֻ���һ�������43�ˣ�������������25�ˣ��м���������ȫ���?"},
		{"1. Calculate the number of people with duplicate parts N1=the number of people who answered the first question correctly N2+the number of people who answered the second question correctly N3+the number of people who answered the third question correctly N4",
		"1.�������ظ���������N1 ���ظ���������N1=��һ���������N2+�ڶ����������N3+�������������N4"},
		{"2. Calculate the number of repeated parts N2=the number of correct answers for one question N5+(the number of correct answers for two questions N6 * the number of repeated parts for two questions N7)",
		"2.�����ظ�����N2 �ظ�����N2=һ���������N5+(�����������N6*�����ظ���������N7)"},
		{"3. Calculate the number of correct answers for three questions N3=the number of repeated parts N1- the number of repeated parts N2",
		"3.����������������N3 ������������N3=���ظ���������N1-�ظ�����N2"},
		//������
		{"NumberofcorrectanswersforthefirstquestionN2","��һ���������N2"},
		{"NumberofcorrectanswersforthethirdquestionN4","�������������N4"},
		{"NumberofcorrectanswersforthesecondquestionN3","�ڶ����������N3"},
		{"NumberofonecorrectanswersN5","һ���������N5"},
		{"NumberoftwecorrectanswersN6","�����������N6"},
		{"NumberofduplicatepartsN7","�����ظ���������N7"},
		{"ThereareduplicatenumbersN1","���ظ���������N1"},
		{"RepeatpartN2","�ظ�����N2"},
		{"NumberofcorrectanswerstothreequestionsN3","������������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��һ���������N2, 33);
	DefineLangVarInt(�������������N4, 44);
	DefineLangVarInt(�ڶ����������N3, 31);
	DefineLangVarInt(һ���������N5, 43);
	DefineLangVarInt(�����������N6, 25);
	DefineLangVarInt(�����ظ���������N7, 2);
	ColPrintf(PrintfCol::����, Lang("P47���� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��223��У�ٰ���һ��ѹ�������ս��һ����3���⣬����33�˴���˵�һ����31�˴���˵ڶ�������44�˴���˵������⣬ֻ���һ�������43�ˣ�������������25�ˣ��м���������ȫ���?"));
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB | InAC | InBC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition2 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition3 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InBC;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	//׷��B�İ�Χ��
	test.AddText(PrintfCol::�����ע, 4.0, 3.5, "��������������15��");
	test.AddText(PrintfCol::�����ע, 2.5, 4.0, "������44��");
	test.AddText(PrintfCol::�����ע, 5.5, 2.5, "��һ��33��");
	test.AddText(PrintfCol::�����ע, 5.5, 5.5, "�ڶ���31��");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '+');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition3, '-');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition2, '*');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, '/');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(���ظ���������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ظ���������N1 ���ظ���������N1=��һ���������N2+�ڶ����������N3+�������������N4"));
	���ظ���������N1 = ��һ���������N2 + �ڶ����������N3 + �������������N4;
	���ظ���������N1.PrintProcessLog(1);
	DefineLangVarInt(�ظ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ظ�����N2 �ظ�����N2=һ���������N5+(�����������N6*�����ظ���������N7)"));
	�ظ�����N2 = һ���������N5 + (�����������N6 * �����ظ���������N7);
	�ظ�����N2.PrintProcessLog(2);
	DefineLangVarInt(������������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����������������N3 ������������N3=���ظ���������N1-�ظ�����N2"));
	������������N3 = ���ظ���������N1 - �ظ�����N2;
	������������N3.PrintProcessLog(3);
}
void P47_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P47 cases of five tolerance rejection problem","P47���� �ݳ�����"},
		{"Title: There are natural numbers from 1 to 100. First, cross out all multiples of 3, all multiples of 5, and finally, cross out multiples of 7. So, how many numbers are left?",
		"��Ŀ������1-100����Ȼ�����Ȱ�����3����������������5��������������7������������ô��ʣ������?"},
		{"1. Calculate the three divisible number N1. The three divisible number N1=the common number N2/the triple N3",
		"1.���㱻��������N1 ����������N1=���е���N2/������N3"},
		{"2. Calculate the number N2 divided by five, which is equal to the common number N2 divided by a multiple of five N5",
		"2.���㱻��������N2 ����������N2=���е���N2/�屶��N5"},
		{"3. Calculate the seven divisible number N3 divided by seven N3=common number N2/seven fold N6",
		"3.���㱻��������N3 ����������N3=���е���N2/�߱���N6"},
		{"4. Calculate the number of repetitions N4, which is equal to the common number N2 divided by the least common multiple N7",
		"4.���������ظ���N4 �����ظ���N4=���е���N2/������С������N7"},
		{"5. Calculate the number of repetitions of Panax notoginseng N5=the common number N2/the least common multiple of Panax notoginseng N8",
		"5.���������ظ���N5 �����ظ���N5=���е���N2/������С������N8"},
		{"6. Calculate the number of repetitions N6=the common number N2/the least common multiple N9",
		"6.���������ظ���N6 �����ظ���N6=���е���N2/������С������N9"},
		{"7. Calculate the remaining number N7. The remaining number N7 is (divided by three N1+divided by five N2+divided by seven N3) - (repeated by three or five N4+repeated by three or seven N5+repeated by five or seven N6)",
		"7.����ʣ�µ���N7 ʣ�µ���N7=(����������N1+����������N2+����������N3)-(�����ظ���N4+�����ظ���N5+�����ظ���N6)"},
		//������
		{"CommonNumberN2","���е���N2"},
		{"TripleN3","������N3"},
		{"FivetimesN5","�屶��N5"},
		{"SeventimesN6","�߱���N6"},
		{"ThreetofiveleastcommonmultipleN7","������С������N7"},
		{"Sanqi'sleastcommonmultipleN8","������С������N8"},
		{"MinimumcommonmultipleN9of57","������С������N9"},
		{"DividedbythreeN1","����������N1"},
		{"Dividedbyfive,N2","����������N2"},
		{"DividedbysevenN3","����������N3"},
		{"ThreetofiverepetitionsN4","�����ظ���N4"},
		{"SanqirepetitionnumberN5","�����ظ���N5"},
		{"NumberofrepetitionsN6","�����ظ���N6"},
		{"TheremainingnumberN7","ʣ�µ���N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���е���N2, 100);
	DefineLangVarInt(������N3, 3);
	DefineLangVarInt(�屶��N5, 5);
	DefineLangVarInt(�߱���N6, 7);
	ColPrintf(PrintfCol::����, Lang("P47���� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������1-100����Ȼ�����Ȱ�����3����������������5��������������7������������ô��ʣ������?"));
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
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p);
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB | InAC | InBC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition1 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InAB = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAB;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition2 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InAC = test.SectorN(nSectorIndexA)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InAC;
		};
	std::function<bool(ScanningLineT::Point&, char nFillMode)> SetTheoryCondition3 = [&](ScanningLineT::Point& p, char nFillMode)->bool {
		//AB������nSectorIndexA
		bool InBC = test.SectorN(nSectorIndexB)->Hit(p) & test.SectorN(nSectorIndexC)->Hit(p);
		return InBC;
		};
	ScanningLineT::IncludeBox Box;
	//�õ�A�İ�Χ��
	test.SectorN(nSectorIndexA)->GetBox(Box);
	//׷��B�İ�Χ��
	test.SectorN(nSectorIndexB)->AddBox(Box);
	//׷��B�İ�Χ��
	test.AddText(PrintfCol::�����ע, 4.0, 3.5, "3��5��7����������0");
	test.AddText(PrintfCol::�����ע, 4.0, 5.0, "7��5����������2");
	test.AddText(PrintfCol::�����ע, 3.7, 2.5, "3��7����������4");
	test.AddText(PrintfCol::�����ע, 5.5, 4.0, "3��5����������6");
	test.AddText(PrintfCol::�����ע, 2.5, 4.0, "7�ı�����14");
	test.AddText(PrintfCol::�����ע, 5.5, 2.5, "3�ı�����33");
	test.AddText(PrintfCol::�����ע, 5.5, 5.5, "5�ı�����20");
	test.Clear(' ');
	test.Draw();
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition, '+');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition3, '-');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition2, '*');
	test.FillShapeBySetTheoryCondition(Box, ScanningLineT::FillMode::RealMode, SetTheoryCondition1, '/');
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㱻��������N1 ����������N1=���е���N2/������N3"));
	����������N1 = ���е���N2 / ������N3;
	����������N1.PrintProcessLog(1);
	DefineLangVarInt(����������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㱻��������N2 ����������N2=���е���N2/�屶��N5"));
	����������N2 = ���е���N2 / �屶��N5;
	����������N2.PrintProcessLog(2);
	DefineLangVarInt(����������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㱻��������N3 ����������N3=���е���N2/�߱���N6"));
	����������N3 = ���е���N2 / �߱���N6;
	����������N3.PrintProcessLog(3);
	DefineLangVarInt(������С������N7, MinCommonMultiple(������N3, �屶��N5));
	DefineLangVarInt(�����ظ���N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.���������ظ���N4 �����ظ���N4=���е���N2/������С������N7"));
	�����ظ���N4 = ���е���N2 / ������С������N7;
	�����ظ���N4.PrintProcessLog(4);
	DefineLangVarInt(������С������N8, MinCommonMultiple(������N3, �߱���N6));
	DefineLangVarInt(�����ظ���N5, 0);
	ColPrintf(PrintfCol::����, Lang("5.���������ظ���N5 �����ظ���N5=���е���N2/������С������N8"));
	�����ظ���N5 = ���е���N2 / ������С������N8;
	�����ظ���N5.PrintProcessLog(5);
	DefineLangVarInt(������С������N9, MinCommonMultiple(�屶��N5, �߱���N6));
	DefineLangVarInt(�����ظ���N6, 0);
	ColPrintf(PrintfCol::����, Lang("6.���������ظ���N6 �����ظ���N6=���е���N2/������С������N9"));
	�����ظ���N6 = ���е���N2 / ������С������N9;
	�����ظ���N6.PrintProcessLog(6);
	DefineLangVarInt(ʣ�µ���N7, 0);
	ColPrintf(PrintfCol::����, Lang("7.����ʣ�µ���N7 ʣ�µ���N7=(����������N1+����������N2+����������N3)-(�����ظ���N4+�����ظ���N5+�����ظ���N6)"));
	ʣ�µ���N7 = (����������N1 + ����������N2 + ����������N3) - (�����ظ���N4 + �����ظ���N5 + �����ظ���N6);
	ʣ�µ���N7.PrintProcessLog(7);
}
void P47()
{
	P47_1_1();
	ColPrintf(PrintfCol::����, "");
	P47_1_2();
	ColPrintf(PrintfCol::����, "");
	P47_2();
	ColPrintf(PrintfCol::����, "");
	P47_3();
	ColPrintf(PrintfCol::����, "");
	P47_4();
	ColPrintf(PrintfCol::����, "");
}
void P47_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P47();
	Lang.SetCurLanguage(LanguageLib::English);
	P47();
	ColPrintf(PrintfCol::����, "");

}