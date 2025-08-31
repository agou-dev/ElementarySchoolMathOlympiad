#pragma once


//��ƪ��7���ֱ���P45_1_1,P45_1_2,P45_1_3,P45_1_4,P45_1_5,P45_2,P45_3.
//��һ����5��С�⣬����������
void P45_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1: The first question is about tolerance and rejection","P45��һ��һС�� �ݳ�����"},
		{"What are the numbers from 1 to 100 that can be divided by 2?",
		"��һ��Ŀ����1��100��Щ��Ȼ����"},
		{"(1) Question: How many can be divided by 2?",
		"(1)��Ŀ���ܱ�2�������м�����"},
		{"1. Calculate the number N1 that can be divided by two. The number N1 that can be divided by two is equal to the number N2 of these numbers divided by N3 among them",
		"1.�����ܱ�������������N1 �ܱ�������������N1=��Щ���ĸ���N2/����Щ���б�������N3"},
		//������
		{"ThequantityN1thatcanbedividedbytwo","�ܱ�������������N1"},
		{"ThenumberofthesenumbersN2","��Щ���ĸ���N2"},
		{"DividedbytwoamongthesenumbersN3","����Щ���б�������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��Щ���ĸ���N2, 100);
	DefineLangVarInt(����Щ���б�������N3, 2);
	ColPrintf(PrintfCol::����, Lang("P45��һ��һС�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��һ��Ŀ����1��100��Щ��Ȼ����"));
	ColPrintf(PrintfCol::����, Lang("(1)��Ŀ���ܱ�2�������м�����"));
	DefineLangVarInt(�ܱ�������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܱ�������������N1 �ܱ�������������N1=��Щ���ĸ���N2/����Щ���б�������N3"));
	�ܱ�������������N1 = ��Щ���ĸ���N2 / ����Щ���б�������N3;
	�ܱ�������������N1.PrintProcessLog(1);
}
void P45_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1 Second sub question: Refutation problem","P45��һ�ڶ�С�� �ݳ�����"},
		{"(2) Question: How many can be divided by 3?",
		"(2)��Ŀ���ܱ�3�������м�����"},
		{"1. Calculate the number N1 that can be divided by three and the number N1 that can be divided by two=the number of these numbers N2/the number N3 that can be divided by three among these numbers",
		"1.�����ܱ�������������N1 �ܱ�������������N1=��Щ���ĸ���N2/����Щ���б�������N3"},
		//������
		{"ThequantityN1thatcanbedividedbytwo","�ܱ�������������N1"},
		{"ThenumberofthesenumbersN2","��Щ���ĸ���N2"},
		{"DividedByThreeAmongTheseNumbersN3","����Щ���б�������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��Щ���ĸ���N2, 100);
	DefineLangVarInt(����Щ���б�������N3, 3);
	ColPrintf(PrintfCol::����, Lang("P45��һ�ڶ�С�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("(2)��Ŀ���ܱ�3�������м�����"));
	DefineLangVarInt(�ܱ�������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܱ�������������N1 �ܱ�������������N1=��Щ���ĸ���N2/����Щ���б�������N3"));
	�ܱ�������������N1 = ��Щ���ĸ���N2 / ����Щ���б�������N3;
	�ܱ�������������N1.PrintProcessLog(1);
}
void P45_1_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1 Third sub question: Refutation problem","P45��һ����С�� �ݳ�����"},
		{"(3) Question: How many can be divided by 2 and 3?",
		"(3)��Ŀ���ܱ�2��3�������м�����"},
		{"1. Find the least common multiple of 2 and 3",
		"1.��2��3����С������"},
		{"2. Calculate the number N1 that can be divided by three and two, which is equal to the number of these numbers N2 divided by the least common multiple N3",
		"2.�����ܱ����Ͷ�����������N1 �ܱ����Ͷ�����������N1=��Щ���ĸ���N2/��С������N3"},
		//������
		{"The quantity N1 that can be divided by three and two","�ܱ����Ͷ�����������N1"},
		{"The number of these numbers N2","��Щ���ĸ���N2"},
		{"Divided by three among these numbers N3","����Щ���б�������N3"},
		{"Divided by two among these numbers N3","����Щ���б�������N3"},
		{"Minimum common multiple N3","��С������N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��Щ���ĸ���N2, 100);
	DefineLangVarInt(����Щ���б�������N3, 3);
	DefineLangVarInt(����Щ���б�������N3, 2);
	ColPrintf(PrintfCol::����, Lang("P45��һ����С�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("(3)��Ŀ���ܱ�2��3�������м�����"));
	DefineLangVarInt(��С������N3, MinCommonMultiple(����Щ���б�������N3, ����Щ���б�������N3));
	ColPrintf(PrintfCol::����, Lang("1.��2��3����С������"));
	DefineLangVarInt(�ܱ����Ͷ�����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ܱ����Ͷ�����������N1 �ܱ����Ͷ�����������N1=��Щ���ĸ���N2/��С������N3"));
	�ܱ����Ͷ�����������N1 = ��Щ���ĸ���N2 / ��С������N3;
	�ܱ����Ͷ�����������N1.PrintProcessLog(2);
}
void P45_1_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1 Third sub question: Refutation problem","P45��һ����С�� �ݳ�����"},
		{"(4) Question: How many can be divided by 2 or 3?",
		"(4)��Ŀ���ܱ�2��3�������м�����"},
		{"1. Calculate the number N1 that can be divided by two. The number N1 that can be divided by two is equal to the number N2 of these numbers divided by N3 among them",
		"1.�����ܱ�������������N1 �ܱ�������������N1=��Щ���ĸ���N2/����Щ���б�������N3"},
		{"2. Calculate the number of numbers that can be divided by three N4=the number of these numbers N2/the number of numbers that can be divided by three N5",
		"2.�����ܱ�������������N4 �ܱ�������������N4=��Щ���ĸ���N2/����Щ���б�������N5"},
		{"3. Calculate the number of repetitions that can be divided by three or two N6=the number of repetitions that can be divided by three or two N1+the number of repetitions that can be divided by three N4",
		"3.�����ܱ���������������ظ�������N6 �ܱ���������������ظ�������N6=�ܱ�������������N1+�ܱ�������������N4"},
		{"4. Find the least common multiple of 2 and 3",
		"4.��2��3����С������"},
		{"5. Calculate the number of numbers that can be divided by three and two N8=the number of these numbers N2/the least common multiple N7",
		"5.�����ܱ����Ͷ�����������N8 �ܱ����Ͷ�����������N8=��Щ���ĸ���N2/��С������N7"},
		{"6. Calculate the number N10 that can be divided by three or two, which is equal to the number N6 that can be divided by three or two, and the number N8 that can be divided by three or two",
		"6.�����ܱ����������������N10 �ܱ����������������N10=�ܱ���������������ظ�������N6-�ܱ����Ͷ�����������N8"},
		//������
		{"ThenumberofthesenumbersN2","��Щ���ĸ���N2"},
		{"DividedbytwoamongthesenumbersN3","����Щ���б�������N3"},
		{"Dividedbythreeamongthesenumbers,N5","����Щ���б�������N5"},
		{"ThequantityN1thatcanbedividedbytwo","�ܱ�������������N1"},
		{"ThequantitythatcanbedividedbythreeN4","�ܱ�������������N4"},
		{"ThequantitythatcanbedividedbythreeortwoN10","�ܱ����������������N10"},
		{"TherearerepeatedquantitiesN6thatcanbedividedbythreeortwo","�ܱ���������������ظ�������N6"},
		{"MinimumcommonmultipleN7","��С������N7"},
		{"ThequantitythatcanbedividedbythreeandtwoN8","�ܱ����Ͷ�����������N8"},

	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��Щ���ĸ���N2, 100);
	DefineLangVarInt(����Щ���б�������N5, 3);
	DefineLangVarInt(����Щ���б�������N3, 2);
	ColPrintf(PrintfCol::����, Lang("P45��һ����С�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("(4)��Ŀ���ܱ�2��3�������м�����"));
	DefineLangVarInt(�ܱ�������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܱ�������������N1 �ܱ�������������N1=��Щ���ĸ���N2/����Щ���б�������N3"));
	�ܱ�������������N1 = ��Щ���ĸ���N2 / ����Щ���б�������N3;
	�ܱ�������������N1.PrintProcessLog(1);
	DefineLangVarInt(�ܱ�������������N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ܱ�������������N4 �ܱ�������������N4=��Щ���ĸ���N2/����Щ���б�������N5"));
	�ܱ�������������N4 = ��Щ���ĸ���N2 / ����Щ���б�������N5;
	�ܱ�������������N4.PrintProcessLog(2);
	DefineLangVarInt(�ܱ���������������ظ�������N6, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ܱ���������������ظ�������N6 �ܱ���������������ظ�������N6=�ܱ�������������N1+�ܱ�������������N4"));
	�ܱ���������������ظ�������N6 = �ܱ�������������N1 + �ܱ�������������N4;
	�ܱ���������������ظ�������N6.PrintProcessLog(3);
	DefineLangVarInt(��С������N7, MinCommonMultiple(����Щ���б�������N5, ����Щ���б�������N3));
	ColPrintf(PrintfCol::����, Lang("4.��2��3����С������"));
	DefineLangVarInt(�ܱ����Ͷ�����������N8, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����ܱ����Ͷ�����������N8 �ܱ����Ͷ�����������N8=��Щ���ĸ���N2/��С������N7"));
	�ܱ����Ͷ�����������N8 = ��Щ���ĸ���N2 / ��С������N7;
	�ܱ����Ͷ�����������N8.PrintProcessLog(5);
	DefineLangVarInt(�ܱ����������������N10, 0);
	ColPrintf(PrintfCol::����, Lang("6.�����ܱ����������������N10 �ܱ����������������N10=�ܱ���������������ظ�������N6-�ܱ����Ͷ�����������N8"));
	�ܱ����������������N10 = �ܱ���������������ظ�������N6 - �ܱ����Ͷ�����������N8;
	�ܱ����������������N10.PrintProcessLog(6);
}
void P45_1_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 1, Question 5: Content and Rejection","P45��һ����С�� �ݳ�����"},
		{"(5) Question: How many cannot be divided by 2 and 3?",
		"(5)��Ŀ�����ܱ�2��3�������м�����"},
		{"1. Calculate the number N1 that can be divided by two. The number N1 that can be divided by two is equal to the number N2 of these numbers divided by N3 among them",
		"1.�����ܱ�������������N1 �ܱ�������������N1=��Щ���ĸ���N2/����Щ���б�������N3"},
		{"2. Calculate the number of numbers that can be divided by three N4=the number of these numbers N2/the number of numbers that can be divided by three N5",
		"2.�����ܱ�������������N4 �ܱ�������������N4=��Щ���ĸ���N2/����Щ���б�������N5"},
		{"3. Calculate the number of repetitions that can be divided by three or two N6=the number of repetitions that can be divided by three or two N1+the number of repetitions that can be divided by three N4",
		"3.�����ܱ���������������ظ�������N6 �ܱ���������������ظ�������N6=�ܱ�������������N1+�ܱ�������������N4"},
		{"4. Find the least common multiple of 2 and 3",
		"4.��2��3����С������"},
		{"5. Calculate the number of numbers that can be divided by three and two N8=the number of these numbers N2/the least common multiple N7",
		"5.�����ܱ����Ͷ�����������N8 �ܱ����Ͷ�����������N8=��Щ���ĸ���N2/��С������N7"},
		{"6. Calculate the number N10 that can be divided by three or two, which is equal to the number N6 that can be divided by three or two, and the number N8 that can be divided by three or two",
		"6.�����ܱ����������������N10 �ܱ����������������N10=�ܱ���������������ظ�������N6-�ܱ����Ͷ�����������N8"},
		{"7. Calculate the number N11 that cannot be divisible. The number N11 that cannot be divisible=the number of these numbers N2- the number N10 that can be divided by three or two",
		"7.���㲻����������N11 ������������N11=��Щ���ĸ���N2-�ܱ����������������N10"},
		//������
		{"ThenumberofthesenumbersN2","��Щ���ĸ���N2"},
		{"DividedbytwoamongthesenumbersN3","����Щ���б�������N3"},
		{"Dividedbythreeamongthesenumbers,N5","����Щ���б�������N5"},
		{"ThequantityN1thatcanbedividedbytwo","�ܱ�������������N1"},
		{"ThequantitythatcanbedividedbythreeN4","�ܱ�������������N4"},
		{"ThequantitythatcanbedividedbythreeortwoN10","�ܱ����������������N10"},
		{"TherearerepeatedquantitiesN6thatcanbedividedbythreeortwo","�ܱ���������������ظ�������N6"},
		{"MinimumcommonmultipleN7","��С������N7"},
		{"ThequantitythatcanbedividedbythreeandtwoN8","�ܱ����Ͷ�����������N8"},
		{"NumberN11thatcannotbedivisible","������������N11"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��Щ���ĸ���N2, 100);
	DefineLangVarInt(����Щ���б�������N5, 3);
	DefineLangVarInt(����Щ���б�������N3, 2);
	ColPrintf(PrintfCol::����, Lang("P45��һ����С�� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("(5)��Ŀ�����ܱ�2��3�������м�����"));
	DefineLangVarInt(�ܱ�������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܱ�������������N1 �ܱ�������������N1=��Щ���ĸ���N2/����Щ���б�������N3"));
	�ܱ�������������N1 = ��Щ���ĸ���N2 / ����Щ���б�������N3;
	�ܱ�������������N1.PrintProcessLog(1);
	DefineLangVarInt(�ܱ�������������N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ܱ�������������N4 �ܱ�������������N4=��Щ���ĸ���N2/����Щ���б�������N5"));
	�ܱ�������������N4 = ��Щ���ĸ���N2 / ����Щ���б�������N5;
	�ܱ�������������N4.PrintProcessLog(2);
	DefineLangVarInt(�ܱ���������������ظ�������N6, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ܱ���������������ظ�������N6 �ܱ���������������ظ�������N6=�ܱ�������������N1+�ܱ�������������N4"));
	�ܱ���������������ظ�������N6 = �ܱ�������������N1 + �ܱ�������������N4;
	�ܱ���������������ظ�������N6.PrintProcessLog(3);
	DefineLangVarInt(��С������N7, MinCommonMultiple(����Щ���б�������N5, ����Щ���б�������N3));
	ColPrintf(PrintfCol::����, Lang("4.��2��3����С������"));
	DefineLangVarInt(�ܱ����Ͷ�����������N8, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����ܱ����Ͷ�����������N8 �ܱ����Ͷ�����������N8=��Щ���ĸ���N2/��С������N7"));
	�ܱ����Ͷ�����������N8 = ��Щ���ĸ���N2 / ��С������N7;
	�ܱ����Ͷ�����������N8.PrintProcessLog(5);
	DefineLangVarInt(�ܱ����������������N10, 0);
	ColPrintf(PrintfCol::����, Lang("6.�����ܱ����������������N10 �ܱ����������������N10=�ܱ���������������ظ�������N6-�ܱ����Ͷ�����������N8"));
	�ܱ����������������N10 = �ܱ���������������ظ�������N6 - �ܱ����Ͷ�����������N8;
	�ܱ����������������N10.PrintProcessLog(6);
	DefineLangVarInt(������������N11, 0);
	ColPrintf(PrintfCol::����, Lang("7.���㲻����������N11 ������������N11=��Щ���ĸ���N2-�ܱ����������������N10"));
	������������N11 = ��Щ���ĸ���N2 - �ܱ����������������N10;
	������������N11.PrintProcessLog(7);
}
void P45_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 Example 2: Exclusion Problem","P45���� �ݳ�����"},
		{"Title: Arrange 100 lights numbered 1-100 in a row, turn on the lights numbered 3 multiples once, turn on the lights numbered 5 multiples once, and how many lights are on",
		"��Ŀ��д��1-100��ŵ�100յ���ų�һ�ţ��ѱ��Ϊ3�ı����ĵƿ�һ�Σ��ѱ��Ϊ5�ı����ĵƿ�һ�Σ����ĵ��ж���յ"},
		{"1. Calculate the number of lights N1 that can be divided by three. The number of lights N1 that can be divided by three is equal to the number of these lights N2 divided by the number of lights N3 divided by three",
		"1.�����ܱ��������ı�ŵƱ��N1 �ܱ��������ı�ŵƱ��N1=��Щ�Ƶĸ���N2/����Щ�Ʊ���б�������N3"},
		{"2. Calculate the number of lights that can be divided by five, N4. The number of lights that can be divided by five, N4=the number of these lights, N2/the number of lights that can be divided by five, N5",
		"2.�����ܱ��������ı�ŵƱ��N4 �ܱ��������ı�ŵƱ��N4=��Щ�Ƶĸ���N2/����Щ�Ʊ���б�������N5"},
		{"3. Calculate the number of repeated lights that can be divided by three or five, N6. The number of repeated lights that can be divided by three or five, N6=the number of lights that can be divided by three, N1+the number of lights that can be divided by five, N4",
		"3.����Ʊ���ܱ����������������ظ�������N6 �Ʊ���ܱ����������������ظ�������N6=�ܱ��������ı�ŵƱ��N1+�ܱ��������ı�ŵƱ��N4"},
		{"4. Find the least common multiple of 3 and 5",
		"4.��3��5����С������"},
		{"5. Calculate the number of lights that can be divided by three and five, N8. The number of lights that can be divided by three and five, N8, is equal to the number of these lights, N2, divided by the least common multiple, N7",
		"5.�����ܱ������������ĵƱ��N8 �ܱ������������ĵƱ��N8=��Щ�Ƶĸ���N2/��С������N7"},
		{"6. Calculate the number of lights that can be divided by three or five, N10. The number of lights that can be divided by three or five, N10=the number of repeated lights that can be divided by three or\nfive, N6- the number of lights that can be divided by three or five, N8",
		"6.�����ܱ������������ĵƱ��N10 �ܱ������������ĵƱ��N10=�Ʊ���ܱ����������������ظ�������N6-�ܱ������������ĵƱ��N8"},
		//������
		{"ThenumberoftheselightsN2","��Щ�Ƶĸ���N2"},
		{"DividedbythreeN3intheselampnumbers","����Щ�Ʊ���б�������N3"},
		{"Dividedbyfiveintheselampnumbers,N5","����Щ�Ʊ���б�������N5"},
		{"MinimumcommonmultipleN7","��С������N7"},
		{"NumberlightN1thatcanbedividedbythree","�ܱ��������ı�ŵƱ��N1"},
		{"NumberlightN4dividedbyfive","���������ı�ŵƱ��N4"},
		{"LampnumbersthatcanbedividedbythreeorfivehaveduplicatequantitiesN6","�Ʊ���ܱ����������������ظ�������N6"},
		{"LampnumberN8thatcanbedividedbythreeandfive","�ܱ������������ĵƱ��N8"},
		{"LampnumberN10thatcanbedividedbythreeorfive","�ܱ������������ĵƱ��N10"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��Щ�Ƶĸ���N2, 100);
	DefineLangVarInt(����Щ�Ʊ���б�������N3, 3);
	DefineLangVarInt(����Щ�Ʊ���б�������N5, 5);
	ColPrintf(PrintfCol::����, Lang("P45���� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��д��1-100��ŵ�100յ���ų�һ�ţ��ѱ��Ϊ3�ı����ĵƿ�һ�Σ��ѱ��Ϊ5�ı����ĵƿ�һ�Σ����ĵ��ж���յ"));
	DefineLangVarInt(�ܱ��������ı�ŵƱ��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܱ��������ı�ŵƱ��N1 �ܱ��������ı�ŵƱ��N1=��Щ�Ƶĸ���N2/����Щ�Ʊ���б�������N3"));
	�ܱ��������ı�ŵƱ��N1 = ��Щ�Ƶĸ���N2 / ����Щ�Ʊ���б�������N3;
	�ܱ��������ı�ŵƱ��N1.PrintProcessLog(1);
	DefineLangVarInt(�ܱ��������ı�ŵƱ��N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ܱ��������ı�ŵƱ��N4 �ܱ��������ı�ŵƱ��N4=��Щ�Ƶĸ���N2/����Щ�Ʊ���б�������N5"));
	�ܱ��������ı�ŵƱ��N4 = ��Щ�Ƶĸ���N2 / ����Щ�Ʊ���б�������N5;
	�ܱ��������ı�ŵƱ��N4.PrintProcessLog(2);
	DefineLangVarInt(�Ʊ���ܱ����������������ظ�������N6, 0);
	ColPrintf(PrintfCol::����, Lang("3.����Ʊ���ܱ����������������ظ�������N6 �Ʊ���ܱ����������������ظ�������N6=�ܱ��������ı�ŵƱ��N1+�ܱ��������ı�ŵƱ��N4"));
	�Ʊ���ܱ����������������ظ�������N6 = �ܱ��������ı�ŵƱ��N1 + �ܱ��������ı�ŵƱ��N4;
	�Ʊ���ܱ����������������ظ�������N6.PrintProcessLog(3);
	DefineLangVarInt(��С������N7, MinCommonMultiple(����Щ�Ʊ���б�������N3, ����Щ�Ʊ���б�������N5));
	ColPrintf(PrintfCol::����, Lang("4.��3��5����С������"));
	DefineLangVarInt(�ܱ������������ĵƱ��N8, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����ܱ������������ĵƱ��N8 �ܱ������������ĵƱ��N8=��Щ�Ƶĸ���N2/��С������N7"));
	�ܱ������������ĵƱ��N8 = ��Щ�Ƶĸ���N2 / ��С������N7;
	�ܱ������������ĵƱ��N8.PrintProcessLog(5);
	DefineLangVarInt(�ܱ������������ĵƱ��N10, 0);
	ColPrintf(PrintfCol::����, Lang("6.�����ܱ������������ĵƱ��N10 �ܱ������������ĵƱ��N10=�Ʊ���ܱ����������������ظ�������N6-�ܱ������������ĵƱ��N8"));
	�ܱ������������ĵƱ��N10 = �Ʊ���ܱ����������������ظ�������N6 - �ܱ������������ĵƱ��N8;
	�ܱ������������ĵƱ��N10.PrintProcessLog(5);
}
void P45_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P45 cases of three tolerance rejection problem","P45���� �ݳ�����"},
		{"Title: A 101cm long wooden stick, starting from the same end, draw a scale every 4cm for the first time and every 6cm for the second time. If the stick is divided into sections according to the scale, how many sections can be cut?",
		"��Ŀ��һ����101cm��ľ������ͬһ�˿�ʼ����һ��ÿ��4cm��һ���̶ȣ��ڶ���ÿ��6cm��һ���̶ȣ�������̶Ȱ�ľ���ָ�Σ����Խض��ٶ�?"},
		{"1. Calculate the truncation number N1 every four centimeters, which is equal to the total number of centimeters N2 divided by the truncation number N3 every four centimeters",
		"1.����ÿ�������׽ض���N1 ÿ�������׽ض���N1=�ܹ���������N2/ÿ��������N3"},
		{"2. Calculate the truncation number N4 every six centimeters, which is equal to the total number of centimeters N2 divided by the truncation number N5 every six centimeters",
		"2.����ÿ�������׽ض���N4 ÿ�������׽ض���N4=�ܹ���������N2/ÿ��������N5"},
		{"3. Calculate the least common multiple of 4 and 6",
		"3.����4��6����С������"},
		{"4. Calculate the repeated truncation number N7, which is equal to the total number of centimeters N2 divided by the least common multiple N6",
		"4.�����ظ��Ľض���N7 �ظ��Ľض���N7=�ܹ���������N2/��С������N6"},
		{"5. Calculate the total number of segments N8. The total number of segments N8 is equal to the number of segments N1 every four centimeters plus the number of segments N4 every six centimeters minus the number of repeated segments N7",
		"5.�����ܹ��ɽض���N8 �ܹ��ɽض���N8=ÿ�������׽ض���N1+ÿ�������׽ض���N4-�ظ��Ľض���N7"},
		//������
		{"TotalcentimetersN2","�ܹ���������N2"},
		{"EveryfourcentimetersN3","ÿ��������N3"},
		{"N5everysixcentimeters","ÿ��������N5"},
		{"MinimumcommonmultipleN6","��С������N6"},
		{"CutoffN1everyfourcentimeters","ÿ�������׽ض���N1"},
		{"CutoffN4everysixcentimeters","ÿ�������׽ض���N4"},
		{"RepetitivetruncationnumberN7","�ظ��Ľض���N7"},
		{"TotalnumberofsegmentsN8","�ܹ��ɽض���N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ���������N2, 101);
	DefineLangVarInt(ÿ��������N3, 4);
	DefineLangVarInt(ÿ��������N5, 6);
	ColPrintf(PrintfCol::����, Lang("P45���� �ݳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ����101cm��ľ������ͬһ�˿�ʼ����һ��ÿ��4cm��һ���̶ȣ��ڶ���ÿ��6cm��һ���̶ȣ�������̶Ȱ�ľ���ָ�Σ����Խض��ٶ�?"));
	DefineLangVarInt(ÿ�������׽ض���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ÿ�������׽ض���N1 ÿ�������׽ض���N1=�ܹ���������N2/ÿ��������N3"));
	ÿ�������׽ض���N1 = �ܹ���������N2 / ÿ��������N3;
	ÿ�������׽ض���N1.PrintProcessLog(1);
	DefineLangVarInt(ÿ�������׽ض���N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿ�������׽ض���N4 ÿ�������׽ض���N4=�ܹ���������N2/ÿ��������N5"));
	ÿ�������׽ض���N4 = �ܹ���������N2 / ÿ��������N5;
	ÿ�������׽ض���N4.PrintProcessLog(2);
	DefineLangVarInt(��С������N6, MinCommonMultiple(ÿ��������N3, ÿ��������N5));
	ColPrintf(PrintfCol::����, Lang("3.����4��6����С������"));
	DefineLangVarInt(�ظ��Ľض���N7, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����ظ��Ľض���N7 �ظ��Ľض���N7=�ܹ���������N2/��С������N6"));
	�ظ��Ľض���N7 = �ܹ���������N2 / ��С������N6;
	�ظ��Ľض���N7.PrintProcessLog(4);
	DefineLangVarInt(�ܹ��ɽض���N8, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����ܹ��ɽض���N8 �ܹ��ɽض���N8=ÿ�������׽ض���N1+ÿ�������׽ض���N4-�ظ��Ľض���N7"));
	�ܹ��ɽض���N8 = ÿ�������׽ض���N1 + ÿ�������׽ض���N4 - �ظ��Ľض���N7;
	�ܹ��ɽض���N8.PrintProcessLog(5);
}
void P45()
{
	P45_1_1();
	ColPrintf(PrintfCol::����, "");
	P45_1_2();
	ColPrintf(PrintfCol::����, "");
	P45_1_3();
	ColPrintf(PrintfCol::����, "");
	P45_1_4();
	ColPrintf(PrintfCol::����, "");
	P45_1_5();
	ColPrintf(PrintfCol::����, "");
	P45_2();
	ColPrintf(PrintfCol::����, "");
	P45_3();
	ColPrintf(PrintfCol::����, "");
}
void P45_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P45();
	Lang.SetCurLanguage(LanguageLib::English);
	P45();
	ColPrintf(PrintfCol::����, "");

}