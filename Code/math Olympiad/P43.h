#pragma once
void P43_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 1 permutation combination","P43��һ �������"},
		{"Question: How many combinations are there for three stations in a row selected by five students ABCDE?",
		"��Ŀ������ͬѧABCDE����ѡ����վһ���ж��������?"},
		{"Analysis: Since there are five ways to choose the first student among the five students, only four can be chosen because the first student has already chosen one, and so on",
		"��������Ȼ������ͬѧ���ǵ�һ��ͬѧѡ������5�֣���Ϊ��һ���Ѿ�ѡ��һ������ֻ���ĸ�����ѡ���Դ����ƣ������ݳ˷�ԭ�����"},
		{"1. Calculate the first possible number N1=the total number of classmates N2",
		"1.�����һ��λ������N1 ��һ��λ������N1=һ����ͬѧ��N2"},
		{"2. Calculate the second possible number N3. The second possible number N3=the first possible number N1- the number of candidates selected each time N4",
		"2.����ڶ���λ������N3 �ڶ���λ������N3=��һ��λ������N1-ÿ��ѡ����N4"},
		{"3. Calculate the third possible number N5. The third possible number N5=the second possible number N3- the number of people selected each time N4",
		"3.���������λ������N5 ������λ������N5=�ڶ���λ������N3-ÿ��ѡ����N4"},
		{"4. Calculate the total number of possible candidates N6=the first possible candidate N1 * the second possible candidate N3 * the third possible candidate N5",
		"4.�����ܹ���ѡ��N6 �ܹ���ѡ��N6=��һ��λ������N1*�ڶ���λ������N3*������λ������N5"},
		//������
		{"TotalnumberofclassmatesN2","һ����ͬѧ��N2"},
		{"NumberofcandidatesselectedeachtimeN4","ÿ��ѡ����N4"},
		{"ThefirstpossiblenumberisN1","��һ��λ������N1"},
		{"ThesecondpossiblenumberisN3","�ڶ���λ������N3"},
		{"ThethirdpossiblenumberisN5","������λ������N5"},
		{"AtotalofN6canbeselected","�ܹ���ѡ��N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ����ͬѧ��N2, 5);
	DefineLangVarInt(ÿ��ѡ����N4, 1);
	ColPrintf(PrintfCol::����, Lang("P43��һ �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������ͬѧABCDE����ѡ����վһ���ж��������?"));
	ColPrintf(PrintfCol::����, Lang("��������Ȼ������ͬѧ���ǵ�һ��ͬѧѡ������5�֣���Ϊ��һ���Ѿ�ѡ��һ������ֻ���ĸ�����ѡ���Դ����ƣ������ݳ˷�ԭ�����"));
	DefineLangVarInt(��һ��λ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����һ��λ������N1 ��һ��λ������N1=һ����ͬѧ��N2"));
	��һ��λ������N1 = һ����ͬѧ��N2;
	��һ��λ������N1.PrintProcessLog(1);
	DefineLangVarInt(�ڶ���λ������N3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ڶ���λ������N3 �ڶ���λ������N3=��һ��λ������N1-ÿ��ѡ����N4"));
	�ڶ���λ������N3 = ��һ��λ������N1 - ÿ��ѡ����N4;
	�ڶ���λ������N3.PrintProcessLog(2);
	DefineLangVarInt(������λ������N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������λ������N5 ������λ������N5=�ڶ���λ������N3-ÿ��ѡ����N4"));
	������λ������N5 = �ڶ���λ������N3 - ÿ��ѡ����N4;
	������λ������N5.PrintProcessLog(3);
	DefineLangVarInt(�ܹ���ѡ��N6, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����ܹ���ѡ��N6 �ܹ���ѡ��N6=��һ��λ������N1*�ڶ���λ������N3*������λ������N5"));
	�ܹ���ѡ��N6 = ��һ��λ������N1 * �ڶ���λ������N3 * ������λ������N5;
	�ܹ���ѡ��N6.PrintProcessLog(4);
}
void P43_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 2 permutation combination","P43���� �������"},
		{"Question: How many combinations are there for three stations in a row selected by five students ABCDE?",
		"��Ŀ������ͬѧABCDE����ѡ���վһ���ж��������?"},
		{"Analysis: Since there are five ways to choose the first student among the five students, only four can be chosen because the first student has already chosen one, and so on",
		"��������Ȼ������ͬѧ���ǵ�һ��ͬѧѡ������5�֣���Ϊ��һ���Ѿ�ѡ��һ������ֻ���ĸ�����ѡ���Դ����ƣ������ݳ˷�ԭ����ˣ������5������ѡ��3���˿���д��A_5^3"},
		{"1. Calculate the first possible number N1=the total number of classmates N2",
		"1.�����һ��λ������N1 ��һ��λ������N1=һ����ͬѧ��N2"},
		{"2. Calculate the second possible number N3. The second possible number N3=the first possible number N1- the number of candidates selected each time N4",
		"2.����ڶ���λ������N3 �ڶ���λ������N3=��һ��λ������N1-ÿ��ѡ����N4"},
		{"3. Calculate the third possible number N5. The third possible number N5=the second possible number N3- the number of people selected each time N4",
		"3.���������λ������N5 ������λ������N5=�ڶ���λ������N3-ÿ��ѡ����N4"},
		
		{"6. Calculate the total number of candidates N6 and N6=the first possible number N1 * the second possible number N3 * the third possible number N5 ",
		"6.�����ܹ���ѡ��N6 �ܹ���ѡ��N6=��һ��λ������N1*�ڶ���λ������N3*������λ������N5"},
		//������
		{"TotalnumberofclassmatesN2","һ����ͬѧ��N2"},
		{"NumberofcandidatesselectedeachtimeN4","ÿ��ѡ����N4"},
		{"ThefirstpossiblenumberisN1","��һ��λ������N1"},
		{"ThesecondpossiblenumberisN3","�ڶ���λ������N3"},
		{"ThethirdpossiblenumberisN5","������λ������N5"},
		{"ThefourthpossiblenumberisN6","���ĸ�λ������N6"},
		{"ThefifthpossiblenumberisN7","�����λ������N7"},
		{"AtotalofN6canbeselected","�ܹ���ѡ��N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ����ͬѧ��N2, 5);
	DefineLangVarInt(ÿ��ѡ����N4, 1);
	ColPrintf(PrintfCol::����, Lang("P43��һ �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������ͬѧABCDE����ѡ����վһ���ж��������?"));
	ColPrintf(PrintfCol::����, Lang("��������Ȼ������ͬѧ���ǵ�һ��ͬѧѡ������5�֣���Ϊ��һ���Ѿ�ѡ��һ������ֻ���ĸ�����ѡ���Դ����ƣ������ݳ˷�ԭ�����"));
	DefineLangVarInt(��һ��λ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����һ��λ������N1 ��һ��λ������N1=һ����ͬѧ��N2"));
	��һ��λ������N1 = һ����ͬѧ��N2;
	��һ��λ������N1.PrintProcessLog(1);
	DefineLangVarInt(�ڶ���λ������N3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ڶ���λ������N3 �ڶ���λ������N3=��һ��λ������N1-ÿ��ѡ����N4"));
	�ڶ���λ������N3 = ��һ��λ������N1 - ÿ��ѡ����N4;
	�ڶ���λ������N3.PrintProcessLog(2);
	DefineLangVarInt(������λ������N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������λ������N5 ������λ������N5=�ڶ���λ������N3-ÿ��ѡ����N4"));
	������λ������N5 = �ڶ���λ������N3 - ÿ��ѡ����N4;
	������λ������N5.PrintProcessLog(3);
	
	DefineLangVarInt(�ܹ���ѡ��N6, 0);
	ColPrintf(PrintfCol::����, Lang("6.�����ܹ���ѡ��N6 �ܹ���ѡ��N6=��һ��λ������N1*�ڶ���λ������N3"));
	�ܹ���ѡ��N6 = ��һ��λ������N1 * �ڶ���λ������N3 * ������λ������N5 ;
	�ܹ���ѡ��N6.PrintProcessLog(6);
}
void P43_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example Four Arrangement Combination","P43���� �������"},
		{"Title: How many methods are there to choose 3 out of 10 students to clean up",
		"��Ŀ:��10��ͬѧ��ѡ��3������ɨ������һ���м���ѡ��"},
		{"Analysis: We can calculate the total number of options like the previous question, but the arrangement of the three people in the middle is also included. We only need one option, so we have to divide it by A3 ^ 3",
		"���������ǿ������ϵ���һ�����ܹ���ѡ��������������м�������˵�����Ҳ���ڣ�����ֻҪһ�֣��������ǵó���A_3^3"},
		{"1. Calculate the total number of permutations N1=total number of people N2 * (total\nnumber of people N2- number of people selected each time N4) * (total number of people N2- number of people selected each time N4- number of\npeople selected each time N4)",
		"1.�����ܹ�����������N1 �ܹ�����������N1=һ��������N2*(һ��������N2-ÿ��ѡ����N4)*(һ��������N2-ÿ��ѡ����N4-ÿ��ѡ����N4)"},
		{"2. Calculate the number of three person arrangements N3. The number of three person arrangements N3=the number of people selected N5 * (the number of people selected N5- the\nnumber of people selected each time N4) * (the number of people selected N5- the number of people selected each time N4- the number of people selected each time\nN4)",
		"2.����������������N3 ������������N3=ѡ������N5*(ѡ������N5-ÿ��ѡ����N4)*(ѡ������N5-ÿ��ѡ����N4-ÿ��ѡ����N4)"},
		{"3. Calculate the total number of choices N6=the total number of permutations N1/the number of permutations N3 for three people",
		"3.����һ����ѡ��N6 һ����ѡ��N6=�ܹ�����������N1/������������N3"},
		//������
		{"TotalnumberofpeopleN2","һ��������N2"},
		{"NumberofcandidatesselectedeachtimeN4","ÿ��ѡ����N4"},
		{"NumberofpeopleselectedN5","ѡ������N5"},
		{"ThetotalnumberofpermutationsN1","�ܹ�����������N1"},
		{"Threepersonarrangement,numberN3","������������N3"},
		{"ThetotalselectionmethodN6","һ����ѡ��N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ��������N2, 10);
	DefineLangVarInt(ÿ��ѡ����N4, 1);
	DefineLangVarInt(ѡ������N5, 3);

	ColPrintf(PrintfCol::����, Lang("P43���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:��10��ͬѧ��ѡ��3������ɨ������һ���м���ѡ��"));
	ColPrintf(PrintfCol::����, Lang("���������ǿ������ϵ���һ�����ܹ���ѡ��������������м�������˵�����Ҳ���ڣ�����ֻҪһ�֣��������ǵó���A_3^3"));
	DefineLangVarInt(�ܹ�����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܹ�����������N1 �ܹ�����������N1=һ��������N2*(һ��������N2-ÿ��ѡ����N4)*(һ��������N2-ÿ��ѡ����N4-ÿ��ѡ����N4)"));
	�ܹ�����������N1 = һ��������N2 * (һ��������N2 - ÿ��ѡ����N4) * (һ��������N2 - ÿ��ѡ����N4 - ÿ��ѡ����N4);
	�ܹ�����������N1.PrintProcessLog(1);
	DefineLangVarInt(������������N3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����������������N3 ������������N3=ѡ������N5*(ѡ������N5-ÿ��ѡ����N4)*(ѡ������N5-ÿ��ѡ����N4-ÿ��ѡ����N4)"));
	������������N3 = ѡ������N5 * (ѡ������N5 - ÿ��ѡ����N4) * (ѡ������N5 - ÿ��ѡ����N4 - ÿ��ѡ����N4);
	������������N3.PrintProcessLog(2);
	DefineLangVarInt(һ����ѡ��N6, 0);
	ColPrintf(PrintfCol::����, Lang("3.����һ����ѡ��N6 һ����ѡ��N6=�ܹ�����������N1/������������N3"));
	һ����ѡ��N6 = �ܹ�����������N1 / ������������N3;
	һ����ѡ��N6.PrintProcessLog(3);
}
void P43_4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 4 First question arrangement and combination","P43���ĵ�һС�� �������"},
		{"Question: How many matches do 6 teams need to play in a single round robin match, with each team playing one match?",
		"��Ŀ��6֧������е�ѭ������ÿ���Ӿ�Ҫ����һ��������Ҫ�������ٳ�����?"},
		{"1. Calculate the number of repeated team matches N1=total number of teams N1 * (total number of teams N1- number of teams selected each time N4)",
		"1.�������ظ������������N1 ���ظ������������N1=�ܹ��Ķ�����N1*(�ܹ��Ķ�����N1-ÿ��ѡ������N4)"},
		{"2. Calculate duplicate teams N2 duplicate teams N2=two teams participate once N3 * (two teams participate once N3- the number of teams selected each time N4)",
		"2.�����ظ��Ķ���N2 �ظ��Ķ���N2=���Ӳμ�һ��N3*(���Ӳμ�һ��N3-ÿ��ѡ������N4)"},
		{"3. Calculate the number of matches without duplicate teams N3=the number of matches with duplicate teams N1/the number of matches with duplicate teams N2",
		"3.����û���ظ������������N3 û���ظ������������N3=���ظ������������N1/�ظ��Ķ���N2"},
		//������
		{"ThetotalnumberofteamsN1","�ܹ��Ķ�����N1"},
		{"NumberofteamsselectedeachtimeN4","ÿ��ѡ������N4"},
		{"TwoteamsparticipateinN3once","���Ӳμ�һ��N3"},
		{"NumberofrepeatedteammatchesN1","���ظ������������N1"},
		{"RepeatedTeamN2","�ظ��Ķ���N2"},
		{"NorepeatedteammatchesN3","û���ظ������������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ��Ķ�����N1, 6);
	DefineLangVarInt(ÿ��ѡ������N4, 1);
	DefineLangVarInt(���Ӳμ�һ��N3, 2);
	ColPrintf(PrintfCol::����, Lang("P43���ĵ�һС�� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��6֧������е�ѭ������ÿ���Ӿ�Ҫ����һ��������Ҫ�������ٳ�����?"));
	DefineLangVarInt(���ظ������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ظ������������N1 ���ظ������������N1=�ܹ��Ķ�����N1*(�ܹ��Ķ�����N1-ÿ��ѡ������N4)"));
	���ظ������������N1 = �ܹ��Ķ�����N1 * (�ܹ��Ķ�����N1 - ÿ��ѡ������N4);
	���ظ������������N1.PrintProcessLog(1);
	DefineLangVarInt(�ظ��Ķ���N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ظ��Ķ���N2 �ظ��Ķ���N2=���Ӳμ�һ��N3*(���Ӳμ�һ��N3-ÿ��ѡ������N4)"));
	�ظ��Ķ���N2 = ���Ӳμ�һ��N3 * (���Ӳμ�һ��N3 - ÿ��ѡ������N4);
	�ظ��Ķ���N2.PrintProcessLog(2);
	DefineLangVarInt(û���ظ������������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����û���ظ������������N3 û���ظ������������N3=���ظ������������N1/�ظ��Ķ���N2"));
	û���ظ������������N3 = ���ظ������������N1 / �ظ��Ķ���N2;
	û���ظ������������N3.PrintProcessLog(3);
}
void P43_4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 4 Second question arrangement and combination","P43���ĵڶ�С�� �������"},
		{"Question: As shown in the figure, how many triangles can be formed with five points on the circumference as vertices?",
		"��Ŀ����Բ�ܵ������Ϊ�����ܹ��ɶ��ٸ�������?"},
		{"1. Calculate the number of vertices with repeating energy N1=total number of vertices N2 * (total number of vertices N2- number of vertices selected each time N3) * (total number of vertices N2- number of vertices selected each time\nN3- number of vertices selected each time N3)",
		"1.�������ظ��ܹ��ɵĶ�����N1 ���ظ��ܹ��ɵĶ�����N1=�ܹ�������N2*(�ܹ�������N2-ÿ��ѡ�Ķ�����N3)*(�ܹ�������N2-ÿ��ѡ�Ķ�����N3-ÿ��ѡ�Ķ�����N3)"},
		{"2. Calculate the number of repeated vertices N4. The number of repeated vertices N4 is equal to the number of triangle vertices N5 * (the number of triangle vertices N5- the number of vertices selected each time N3) * (the number of\ntriangle vertices N5- the number of vertices selected each time N3- the number of vertices selected each time N3)",
		"2.�����ظ�������N4 �ظ�������N4=�����ζ�����N5*(�����ζ�����N5-ÿ��ѡ�Ķ�����N3)*(�����ζ�����N5-ÿ��ѡ�Ķ�����N3-ÿ��ѡ�Ķ�����N3)"},
		{"3. Calculate the number of vertices without duplicates N5=the number of vertices with duplicates N1/the number of vertices with duplicates N4",
		"3.����û���ظ����ɵĶ�����N5 û���ظ����ɵĶ�����N5=���ظ��ܹ��ɵĶ�����N1/�ظ�������N4"},
		//������
		{"TotalnumberofverticesN2","�ܹ�������N2"},
		{"ThenumberofverticesselectedeachtimeN3","ÿ��ѡ�Ķ�����N3"},
		{"NumberofverticesoftriangleN5","�����ζ�����N5"},
		{"ThenumberofverticesN1thatcanbeformedbyrepetition","���ظ��ܹ��ɵĶ�����N1"},
		{"NumberofrepeatedverticesN4","�ظ�������N4"},
		{"NumberofverticeswithoutrepeatedcompositionN5","û���ظ����ɵĶ�����N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ�������N2, 5);
	DefineLangVarInt(ÿ��ѡ�Ķ�����N3, 1);
	DefineLangVarInt(�����ζ�����N5, 3);
	ColPrintf(PrintfCol::����, Lang("P43���ĵ�һС�� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��6֧������е�ѭ������ÿ���Ӿ�Ҫ����һ��������Ҫ�������ٳ�����?"));
	DefineLangVarInt(���ظ��ܹ��ɵĶ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ظ��ܹ��ɵĶ�����N1 ���ظ��ܹ��ɵĶ�����N1=�ܹ�������N2*(�ܹ�������N2-ÿ��ѡ�Ķ�����N3)*(�ܹ�������N2-ÿ��ѡ�Ķ�����N3-ÿ��ѡ�Ķ�����N3)"));
	���ظ��ܹ��ɵĶ�����N1 = �ܹ�������N2 * (�ܹ�������N2 - ÿ��ѡ�Ķ�����N3) * (�ܹ�������N2 - ÿ��ѡ�Ķ�����N3 - ÿ��ѡ�Ķ�����N3);
	���ظ��ܹ��ɵĶ�����N1.PrintProcessLog(1);
	DefineLangVarInt(�ظ�������N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ظ�������N4 �ظ�������N4=�����ζ�����N5*(�����ζ�����N5-ÿ��ѡ�Ķ�����N3)*(�����ζ�����N5-ÿ��ѡ�Ķ�����N3-ÿ��ѡ�Ķ�����N3)"));
	�ظ�������N4 = �����ζ�����N5 * (�����ζ�����N5 - ÿ��ѡ�Ķ�����N3) * (�����ζ�����N5 - ÿ��ѡ�Ķ�����N3 - ÿ��ѡ�Ķ�����N3);
	�ظ�������N4.PrintProcessLog(2);
	DefineLangVarInt(û���ظ����ɵĶ�����N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.����û���ظ����ɵĶ�����N5 û���ظ����ɵĶ�����N5=���ظ��ܹ��ɵĶ�����N1/�ظ�������N4"));
	û���ظ����ɵĶ�����N5 = ���ظ��ܹ��ɵĶ�����N1 / �ظ�������N4;
	û���ظ����ɵĶ�����N5.PrintProcessLog(3);
}
void P43_5_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 5 First question arrangement and combination","P43�����һС�� �������"},
		{"Title: Select five people from ten to sing together. Two people can stand in the first row, and three people can stand in the second row. How many different standing styles are there in total?",
		"��Ŀ����ʮ������ѡ������˺ϳ�����һ�ſ�վ2���ˣ��ڶ��ſ�վ3�ˣ�һ���ж����ֲ�ͬ��վ����"},
		{"1. Calculate the total number of station methods N1=total number of people N1 * (total number of people N1- number of people selected each time) * (total number of people N1- number of people selected each time - number of people\nselected each time) (total number of people N1- number of people selected each time - number of people selected each time - number of people selected each time) (total number of people N1- number of people selected each time -\nnumber of people selected each time - number of people selected each time - number of people selected each time)",
		"1.����һ����վ����N1 һ����վ����N1=�ܹ�������N1*(�ܹ�������N1-ÿ��ѡ������N2)*(�ܹ�������N1-ÿ��ѡ������-ÿ��ѡ������)(�ܹ�������N1-ÿ��ѡ������-ÿ��ѡ������-ÿ��ѡ������)(�ܹ�������N1-ÿ��ѡ������-ÿ��ѡ������-ÿ��ѡ������-ÿ��ѡ������)"},
		//������
		{"ThetotalnumberofpeopleN1","�ܹ�������N1"},
		{"ThenumberofpeopleselectedeachtimeN2","ÿ��ѡ������N2"},
		{"ThetotalnumberofstationmethodsN1","һ����վ����N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ�������N1, 10);
	DefineLangVarInt(ÿ��ѡ������N2, 1);
	ColPrintf(PrintfCol::����, Lang("P43�����һС�� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ʮ������ѡ������˺ϳ�����һ�ſ�վ2���ˣ��ڶ��ſ�վ3�ˣ�һ���ж����ֲ�ͬ��վ����"));
	DefineLangVarInt(һ����վ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ����վ����N1 һ����վ����N1=�ܹ�������N1*(�ܹ�������N1-ÿ��ѡ������N2)*(�ܹ�������N1-ÿ��ѡ������N2-ÿ��ѡ������N2)*(�ܹ�������N1-ÿ��ѡ������N2-ÿ��ѡ������N2-ÿ��ѡ������N2)*(�ܹ�������N1-ÿ��ѡ������N2-ÿ��ѡ������N2-ÿ��ѡ������N2-ÿ��ѡ������N2)"));
	һ����վ����N1 = �ܹ�������N1 * (�ܹ�������N1 - ÿ��ѡ������N2) * (�ܹ�������N1 - ÿ��ѡ������N2 - ÿ��ѡ������N2)*(�ܹ�������N1 - ÿ��ѡ������N2 - ÿ��ѡ������N2 - ÿ��ѡ������N2)*(�ܹ�������N1 - ÿ��ѡ������N2 - ÿ��ѡ������N2 - ÿ��ѡ������N2 - ÿ��ѡ������N2);
	һ����վ����N1.PrintProcessLog(1);
}
void P43_5_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P43 Example 5 Second question arrangement and combination","P43����ڶ�С�� �������"},
		{"Question: How many different methods are there for selecting 2 people from ten to sweep the floor and 3 people to mop the floor?",
		"��Ŀ����ʮ������ѡ��2����ɨ�أ�3���ϵأ�һ���ж����ֲ�ͬ��ѡ����"},
		{"1. Calculate the number of non repeating sweeping types N1. The number of non repeating sweeping types N1=(total number of people N1 * (total number of people N1- number of people selected each time N2))/(number of sweeping people N3 * (number of sweeping people N3- number of people selected each time N2))",
		"1.���㲻�ظ�ɨ������N1 ���ظ�ɨ������N1=(һ��������N1*(һ��������N1-ÿ��ѡ������N2))/(ɨ������N3*(ɨ������N3-ÿ��ѡ������N2))"},
		{"2. Calculate the number of non duplicated mopping types N1=(total number of people N1 * (total number of people N1- number of people selected each time N2))/(number of mopping people N3 * (number of mopping people N3- number of\npeople selected each time N2- number of people selected each time N2))",
		"2.���㲻�ظ��ϵ�����N1 ���ظ��ϵ�����N1=(һ��������N1*(һ��������N1-ÿ��ѡ������N2))/(�ϵ�����N3*(�ϵ�����N3-ÿ��ѡ������N2-ÿ��ѡ������N2))"},
		{"3. Calculate the total number of options N3=number of non repeating sweeping methods N1 * number of non repeating mopping methods N1",
		"3.����һ����ѡ��N3 һ����ѡ��N3=���ظ�ɨ������N1*���ظ��ϵ�����N1"},
		//������
		{"ThetotalnumberofpeopleisN1","һ��������N1"},
		{"NumberofpeopleselectedeachtimeN2","ÿ��ѡ������N2"},
		{"NumberofsweepersN3","ɨ������N3"},
		{"NumberofmoppingpersonnelN3","�ϵ�����N3"},
		{"NumberofnonrepetitivesweepingmethodsN1","���ظ�ɨ������N1"},
		{"NumberofnonrepetitivemoppingmethodsN1","���ظ��ϵ�����N1"},
		{"ThetotalselectionmethodN3","һ����ѡ��N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ��������N1, 10);
	DefineLangVarInt(ÿ��ѡ������N2, 1);
	DefineLangVarInt(ɨ������N3, 2);
	DefineLangVarInt(�ϵ�����N3, 3);
	ColPrintf(PrintfCol::����, Lang("P43����ڶ�С�� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ʮ������ѡ��2����ɨ�أ�3���ϵأ�һ���ж����ֲ�ͬ��ѡ����"));
	DefineLangVarInt(���ظ�ɨ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㲻�ظ�ɨ������N1 ���ظ�ɨ������N1=(һ��������N1*(һ��������N1-ÿ��ѡ������N2))/(ɨ������N3*(ɨ������N3-ÿ��ѡ������N2))"));
	���ظ�ɨ������N1 = (һ��������N1 * (һ��������N1 - ÿ��ѡ������N2)) / (ɨ������N3 * (ɨ������N3 - ÿ��ѡ������N2 ));
	���ظ�ɨ������N1.PrintProcessLog(1);
	DefineLangVarInt(���ظ��ϵ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㲻�ظ��ϵ�����N1 ���ظ��ϵ�����N1=(һ��������N1*(һ��������N1-ÿ��ѡ������N2))/(�ϵ�����N3*(�ϵ�����N3-ÿ��ѡ������N2-ÿ��ѡ������N2))"));
	���ظ��ϵ�����N1 = (һ��������N1 * (һ��������N1 - ÿ��ѡ������N2)) / (�ϵ�����N3 * (�ϵ�����N3 - ÿ��ѡ������N2 - ÿ��ѡ������N2));
	���ظ��ϵ�����N1.PrintProcessLog(2);
	DefineLangVarInt(һ����ѡ��N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����һ����ѡ��N3 һ����ѡ��N3=���ظ�ɨ������N1*���ظ��ϵ�����N1"));
	һ����ѡ��N3 = ���ظ�ɨ������N1 * ���ظ��ϵ�����N1;
	һ����ѡ��N3.PrintProcessLog(3);
}
void P43()
{
	P43_1();
	ColPrintf(PrintfCol::����, "");
	P43_2();
	ColPrintf(PrintfCol::����, "");
	P43_3();
	ColPrintf(PrintfCol::����, "");
	P43_4_1();
	ColPrintf(PrintfCol::����, "");
	P43_4_2();
	ColPrintf(PrintfCol::����, "");
	P43_5_1();
	ColPrintf(PrintfCol::����, "");
	P43_5_2();
	ColPrintf(PrintfCol::����, "");
}
void P43_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P43();
	Lang.SetCurLanguage(LanguageLib::English);
	P43();
	ColPrintf(PrintfCol::����, "");

}