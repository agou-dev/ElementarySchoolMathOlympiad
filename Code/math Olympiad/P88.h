#pragma once
void P88_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case 1 Tree Planting Problem","P88 ��һ ֲ������"},
		{"Title: There are 95 trees planted on the side of the road, both ends are planted, with a distance of 5 meters between each two trees. How long is this section of road?",
		"��Ŀ����·һ������95��������ͷ���ԣ�ÿ���������5�ף���ι�·��������?"},
		{"1. Calculate the total number of segments N1=number of trees planted N2- number of segments that trees cannot correspond to N3",
		"1.����һ���Ķ���N1 һ���Ķ���N1=�ԵĿ���N2-����Ӧ���˵Ķ���N3"},
		{"2. Calculate the length of the highway S1, which is equal to the total number of segments N1 multiplied by the length of each segment N4",
		"2.���㹫·����S1 ��·����S1=һ���Ķ���N1*ÿ�γ���N4"},
		//������
		{"ThetreeplantedN2","�ԵĿ���N2"},
		{"NumberofsegmentsN3thatthetreecannotcorrespondto","����Ӧ���˵Ķ���N3"},
		{"EachsegmentlengthN4","ÿ�γ���N4"},
		{"ThetotalnumberofsegmentsN1","һ���Ķ���N1"},
		{"HighwaylengthS1","��·����S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ԵĿ���N2, 95);
	DefineLangVarInt(����Ӧ���˵Ķ���N3, 1);
	DefineLangVarInt(ÿ�γ���N4, 5);
	const char* pPic =
		"1         2         3         4         5����         95\n"
		"|---5��---|---5��---|---5��---|---5��---|����---5��---|\n"
		;
	ColPrintf(PrintfCol::����, Lang("P88 ��һ ֲ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����·һ������95��������ͷ���ԣ�ÿ���������5�ף���ι�·��������?"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(һ���Ķ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ���Ķ���N1 һ���Ķ���N1=�ԵĿ���N2-����Ӧ���˵Ķ���N3"));
	һ���Ķ���N1 = �ԵĿ���N2 - ����Ӧ���˵Ķ���N3;
	һ���Ķ���N1.PrintProcessLog(1);
	DefineLangVarInt(��·����S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㹫·����S1 ��·����S1=һ���Ķ���N1*ÿ�γ���N4"));
	��·����S1 = һ���Ķ���N1 * ÿ�γ���N4;
	��·����S1.PrintProcessLog(2);
}
void P88_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case 2 Tree Planting Problem","P88 ���� ֲ������"},
		{"Title: Hang 202 lanterns on both sides of an 800 meter bridge, at both ends of the bridge, and find the distance between trees.",
		"��Ŀ����һ��800�׵��������߹�202����������ͷ��β���ң�������ࡣ"},
		{"1. Calculate the number of lanterns hung on one side N1=total number of lanterns hung N2/side N3",
		"1.����һ�߹ҵĵ�����N1 һ�߹ҵĵ�����N1=�ܹ��ҵ�����N2/����N3"},
		{"2. Calculate the number of segments on one side N2=the number of lanterns hanging on one side N1- the number of segments that the tree cannot correspond to N3",
		"2.����һ�ߵĶ���N2 һ�ߵĶ���N2=һ�߹ҵĵ�����N1-����Ӧ���˵Ķ���N3"},
		{"3. Calculate the distance N3, which is equal to the total distance S1 divided by the number of segments N2 on one side",
		"3.������N3 ���N3=��·��S1/һ�ߵĶ���N2"},
		//������
		{"ThetotalnumberoflanternshungisN2","�ܹ��ҵ�����N2"},
		{"EdgeN3","����N3"},
		{"NumberofsegmentsN3thatthetreecaotcorrespondto","����Ӧ���˵Ķ���N3"},
		{"TotaldistanceS1","��·��S1"},
		{"NumberoflanternshangingononesideN1","һ�߹ҵĵ�����N1"},
		{"NumberofsegmentsononesideN2","һ�ߵĶ���N2"},
		{"DistanceN3","���N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ��ҵ�����N2, 202);
	DefineLangVarInt(����N3, 2);
	DefineLangVarInt(����Ӧ���˵Ķ���N3, 1);
	DefineLangVarInt(��·��S1, 800);
	const char* pPic =
		"|---------------------------800��------------------------|\n"
		"1         2         3         4         5����         101\n"
		"|---8��---|---8��---|---8��---|---8��---|����---8��---|\n"
		"\n"
		"\n"
		"\n"
		"|---------------------------800��------------------------|\n"
		"1         2         3         4         5����         101\n"
		"|---8��---|---8��---|---8��---|---8��---|����---8��---|\n"
		;
	ColPrintf(PrintfCol::����, Lang("P88 ���� ֲ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ��800�׵��������߹�202����������ͷ��β���ң�������ࡣ"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(һ�߹ҵĵ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ�߹ҵĵ�����N1 һ�߹ҵĵ�����N1=�ܹ��ҵ�����N2/����N3"));
	һ�߹ҵĵ�����N1 = �ܹ��ҵ�����N2 / ����N3;
	һ�߹ҵĵ�����N1.PrintProcessLog(1);
	DefineLangVarInt(һ�ߵĶ���N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����һ�ߵĶ���N2 һ�ߵĶ���N2=һ�߹ҵĵ�����N1-����Ӧ���˵Ķ���N3"));
	һ�ߵĶ���N2 = һ�߹ҵĵ�����N1 - ����Ӧ���˵Ķ���N3;
	һ�ߵĶ���N2.PrintProcessLog(2);
	DefineLangVarInt(���N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.������N3 ���N3=��·��S1/һ�ߵĶ���N2"));
	���N3 = ��·��S1 / һ�ߵĶ���N2;
	���N3.PrintProcessLog(3);
}
void P88_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case Three Tree Planting Problem","P88 ���� ֲ������"},
		{"Title: There is a 13 meter long piece of wood that has been damaged by 1 meter. After removing it, the rest was cut 5 times. How long is each piece",
		"��Ŀ����һ��13�׳���ľͷ������1�ף�ȥ����ʣ�µĿ���5����ÿ����������"},
		{"1. Calculate the usable wood N1. The usable wood N1 is equal to the total length N2 minus the damaged length N3",
		"1.�������õ�ľͷN1 ���õ�ľͷN1=�ܹ�����N2-���ĳ���N3"},
		{"2. Calculate the number of segments N2 to be cut. The number of segments N2 to be cut is equal to the number of cuts N4 plus the number of excess segments N5",
		"2.���㿳���Ķ���N2 �����Ķ���N2=�����ĵ���N4+����Ķ���N5"},
		{"3. Calculate segment length N3. Segment length N3=usable wood N1/number of segments cut N2",
		"3.����γ���N3 �γ���N3=���õ�ľͷN1/�����Ķ���N2"},
		//������
		{"TotallengthN2","�ܹ�����N2"},
		{"BadlengthN3","���ĳ���N3"},
		{"NumberofcutsN45","�����ĵ���N4"},
		{"ExcesssegmentcountN5","����Ķ���N5"},
		{"UsefulWoodN1","���õ�ľͷN1"},
		{"NumberofsegmentscutN2","�����Ķ���N2"},
		{"SegmentlengthN3","�γ���N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ�����N2, 13);
	DefineLangVarInt(���ĳ���N3, 1);
	DefineLangVarInt(�����ĵ���N4, 5);
	DefineLangVarInt(����Ķ���N5, 1);
	const char* pPic =
		"|���ĳ���|       1       1       2       2        3      3       4       4       5       5     6\n"
		"|--1��---|------2��------|------2��------|------2��------|------2��------|------2��------|-----2��-------\n"
		;
	ColPrintf(PrintfCol::����, Lang("P88 ���� ֲ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ��13�׳���ľͷ������1�ף�ȥ����ʣ�µĿ���5����ÿ����������"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(���õ�ľͷN1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������õ�ľͷN1 ���õ�ľͷN1=�ܹ�����N2-���ĳ���N3"));
	���õ�ľͷN1 = �ܹ�����N2 - ���ĳ���N3;
	���õ�ľͷN1.PrintProcessLog(1);
	DefineLangVarInt(�����Ķ���N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㿳���Ķ���N2 �����Ķ���N2=�����ĵ���N4+����Ķ���N5"));
	�����Ķ���N2 = �����ĵ���N4 + ����Ķ���N5;
	�����Ķ���N2.PrintProcessLog(2);
	DefineLangVarInt(�γ���N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����γ���N3 �γ���N3=���õ�ľͷN1/�����Ķ���N2"));
	�γ���N3 = ���õ�ľͷN1 / �����Ķ���N2;
	�γ���N3.PrintProcessLog(3);
}
void P88_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case Four Tree Planting Problem","P88 ���� ֲ������"},
		{"Title: 200 students lined up in 4 columns. Given that the two rows are 1 meter apart, how many meters are in this column",
		"��Ŀ��200��ѧ���ų�4���ݶӣ���֪�������1m����ֻ���������"},
		{"1. Calculate the number of students per team N1=total number of students N2/team N3",
		"1.����ÿ������N1 ÿ������N1=һ��ѧ������N2/����N3"},
		{"2. Calculate the number of intervals per team N2=number of people per team N1- number of segments that students cannot correspond to N3",
		"2.����ÿ�Ӽ����N2 ÿ�Ӽ����N2=ÿ������N1-ѧ����Ӧ���˵Ķ���N3"},
		{"3. Calculate team length L1. Team length L1=number of intervals between each team N2 * number of intervals between two rows N3",
		"3.������鳤��L1 ���鳤��L1=ÿ�Ӽ����N2*������������N3"},
		//������
		{"TotalnumberofstudentsN2","һ��ѧ������N2"},
		{"NumberofteamsN3","����N3"},
		{"NumberofparagraphsthatstudentscannotcorrespondtoN3","ѧ����Ӧ���˵Ķ���N3"},
		{"TworowsseparatedbyN3","������������N3"},
		{"NumberofpeopleperteamN1","ÿ������N1"},
		{"IntervalperteamN2","ÿ�Ӽ����N2"},
		{"TeamlengthL1","���鳤��L1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ��ѧ������N2, 200);
	DefineLangVarInt(����N3, 4);
	DefineLangVarInt(ѧ����Ӧ���˵Ķ���N3, 1);
	DefineLangVarInt(������������N3, 1);
	const char* pPic =
		"|-1��-|-1��-|-1��-|\n"
		"|-1��-|-1��-|-1��-|\n"
		"|-1��-|-1��-|-1��-|\n"
		"|-1��-|-1��-|-1��-|\n"
		"|-1��-|-1��-|-1��-|\n"
		"|-1��-|-1��-|-1��-|\n"
		"��������������������\n"
		;
	ColPrintf(PrintfCol::����, Lang("P88 ���� ֲ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��200��ѧ���ų�4���ݶӣ���֪�������1m����ֻ���������"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(ÿ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ÿ������N1 ÿ������N1=һ��ѧ������N2/����N3"));
	ÿ������N1 = һ��ѧ������N2 / ����N3;
	ÿ������N1.PrintProcessLog(1);
	DefineLangVarInt(ÿ�Ӽ����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿ�Ӽ����N2 ÿ�Ӽ����N2=ÿ������N1-ѧ����Ӧ���˵Ķ���N3"));
	ÿ�Ӽ����N2 = ÿ������N1 - ѧ����Ӧ���˵Ķ���N3;
	ÿ�Ӽ����N2.PrintProcessLog(2);
	DefineLangVarInt(���鳤��L1, 0);
	ColPrintf(PrintfCol::����, Lang("3.������鳤��L1 ���鳤��L1=ÿ�Ӽ����N2*������������N3"));
	���鳤��L1 = ÿ�Ӽ����N2 * ������������N3;
	���鳤��L1.PrintProcessLog(3);
}
void P88_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Example 5 Tree Planting Problem (The first and last two trees are not counted here, so they are not planted on both sides)","P88 ���� ֲ������(��ǰ����������������ﲻ�����������߲���)"},
		{"Title: Two trees are 115 meters apart, with 22 trees in between. How many meters is the distance between the 16th tree and the 1st tree?",
		"��Ŀ�����������115�ף��м���22��������16�������1�������������?"},
		{"1. Calculate the total number of segments N1=middle tree N2+extra segments N5",
		"1.�����ܹ�����N1 �ܹ�����N1=�м����N2+����Ķ���N5"},
		{"2. Calculate the interval length N2. Interval length N2=total distance S1/ total number of segments N1",
		"2.����������N2 �������N2=�ܾ���S1/�ܹ�����N1"},
		{"3. Calculate the interval length L1 from the 1st to the 16th. The interval length L1 from the 1st to the 16th is equal to (16th N6-1st N7) multiplied by the interval length N2",
		"3.�����1��16�������L1 ��1��16�������L1=(��16��N6-��1��N7)*�������N2"},
		//������
		{"MiddleTreeN2","�м����N2"},
		{"ExcesssegmentcountN5","����Ķ���N5"},
		{"TotaldistanceS1","�ܾ���S1"},
		{"16thN6tree","��16��N6"},
		{"ThefirstN7","��1��N7"},
		{"TotalnumberofsegmentsN1","�ܹ�����N1"},
		{"IntervallengthN2","�������N2"},
		{"IntervallengthL1from1to16","��1��16�������L1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�м����N2, 22);
	DefineLangVarInt(����Ķ���N5, 1);
	DefineLangVarInt(�ܾ���S1, 115);
	DefineLangVarInt(��16��N6, 16);
	DefineLangVarInt(��1��N7, 1);
	const char* pPic =
		"             |------------------------------------22��-----------------------------------------|\n"
		"|-----5m-----|-----5m-----|-----5m-----|-----5m-----|-----5m-----|����-----5m-----|-----5m-----|-----5m-----|\n"
		;
	ColPrintf(PrintfCol::����, Lang("P88 ���� ֲ������(��ǰ����������������ﲻ�����������߲���)"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����������115�ף��м���22��������16�������1�������������?"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(�ܹ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܹ�����N1 �ܹ�����N1=�м����N2+����Ķ���N5"));
	�ܹ�����N1 = �м����N2 + ����Ķ���N5;
	�ܹ�����N1.PrintProcessLog(1);
	DefineLangVarInt(�������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����������N2 �������N2=�ܾ���S1/�ܹ�����N1"));
	�������N2 = �ܾ���S1 / �ܹ�����N1;
	�������N2.PrintProcessLog(2);
	DefineLangVarInt(��1��16�������L1, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����1��16�������L1 ��1��16�������L1=(��16��N6-��1��N7)*�������N2"));
	��1��16�������L1 = (��16��N6 - ��1��N7) * �������N2;
	��1��16�������L1.PrintProcessLog(3);
}
void P88_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case Six Tree Planting Problem","P88 ���� ֲ������"},
		{"Title: A circular flower bed with a circle of 120 meters. If we follow the flower bed, there will be one lilac flower every six meters. There will be two equally spaced roses between the lilacs. How many lilacs, how many roses?",
		"��Ŀ��һ��Բ�λ�̳��һȦ��120�ף�������Ż�̳��ÿ����һ�����㻨�����㻨֮���еȾ���������¼��������궡�㻨�������¼���?"},
		{"1. Calculate the number of lilacs N1. The number of lilacs N1 is equal to the length of one circle N1 divided by one flower every six meters",
		"1.���㶡�㻨����N1 ���㻨����N1=һȦ����N1/ÿ����һ����"},
		{"2. Calculate the number of roses N2=the number of lilacs N1 * the number of roses per segment N3",
		"2.�����¼�������N2 �¼�������N2=���㻨����N1*ÿ���¼�������N3"},
		//������
		{"CirclelengthN1","һȦ����N1"},
		{"Oneflowereverysixmeters","ÿ����һ����"},
		{"NumberofrosespersegmentN3","ÿ���¼�������N3"},
		{"NumberoflilacsN1","���㻨����N1"},
		{"NumberofrosesN2","�¼�������N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һȦ����N1, 120);
	DefineLangVarInt(ÿ����һ����, 6);
	DefineLangVarInt(ÿ���¼�������N3, 2);
	ColPrintf(PrintfCol::����, Lang("P88 ���� ֲ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ��Բ�λ�̳��һȦ��120�ף�������Ż�̳��ÿ����һ�����㻨�����㻨֮���еȾ���������¼��������궡�㻨�������¼���?"));
	DefineLangVarInt(���㻨����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㶡�㻨����N1 ���㻨����N1=һȦ����N1/ÿ����һ����"));
	���㻨����N1 = һȦ����N1 / ÿ����һ����;
	���㻨����N1.PrintProcessLog(1);
	DefineLangVarInt(�¼�������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����¼�������N2 �¼�������N2=���㻨����N1*ÿ���¼�������N3"));
	�¼�������N2 = ���㻨����N1 * ÿ���¼�������N3;
	�¼�������N2.PrintProcessLog(2);
}
void P88()
{
	P88_1();
	ColPrintf(PrintfCol::����, "");
	P88_2();
	ColPrintf(PrintfCol::����, "");
	P88_3();
	ColPrintf(PrintfCol::����, "");
	P88_4();
	ColPrintf(PrintfCol::����, "");
	P88_5();
	ColPrintf(PrintfCol::����, "");
	P88_6();
	ColPrintf(PrintfCol::����, "");
}
void P88_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P88();
	Lang.SetCurLanguage(LanguageLib::English);
	P88();
	ColPrintf(PrintfCol::����, "");

}