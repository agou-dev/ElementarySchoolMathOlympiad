#pragma once
void P89_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 case one cycle problem","P89 ��һ ��������"},
		{"Title: May 5th, 2016 is Thursday, what day is May 25th?",
		"��Ŀ��2016���5��5���������ģ�5��25�������ڼ�?"},
		{"1. Calculate the total number of days passed N1=the number of days ended N2- the number of days started N3",
		"1.�����ܹ�������N1 �ܹ�������N1=����������N2-��ʼ������N3"},
		{"2. Calculate the last day N2 of the cycle, which is equal to the total number of days N1% and the number of days N2 in a week",
		"2.�������ѭ��������N2 ���ѭ��������N2=�ܹ�������N1%һ�����ڵ�����N2"},
		{"3. Since the remainder is% d, it should be the previous number in the next loop, which is Wednesday",
		"3.��Ϊ������%d��������Ӧ����һ��ѭ����ǰһ����������������"},
		//������
		{"EnddaysN2","����������N2"},
		{"StartingdaysN3","��ʼ������N3"},
		{"DaysofaweekN2","һ�����ڵ�����N2"},
		{"TotalnumberofdayspassedN1","�ܹ�������N1"},
		{"ThelastdaytocycletoN2","���ѭ��������N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(����������N2, 25);
	DefineLangVarInt(��ʼ������N3, 5);
	DefineLangVarInt(һ�����ڵ�����N2, 7);
	ColPrintf(PrintfCol::����, Lang("P89 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��2016���5��5���������ģ�5��25�������ڼ�?"));
	DefineLangVarInt(�ܹ�������N1, 1);
	ColPrintf(PrintfCol::����, Lang("1.�����ܹ�������N1 �ܹ�������N1=����������N2-��ʼ������N3"));
	�ܹ�������N1 = ����������N2 - ��ʼ������N3;
	�ܹ�������N1.PrintProcessLog(1);
	DefineLangVarInt(���ѭ��������N2, 1);
	ColPrintf(PrintfCol::����, Lang("2.�������ѭ��������N2 ���ѭ��������N2=�ܹ�������N1%һ�����ڵ�����N2"));
	���ѭ��������N2 = �ܹ�������N1 % һ�����ڵ�����N2;
	���ѭ��������N2.PrintProcessLog(2);
	ColPrintf(PrintfCol::����, Lang("3.��Ϊ������%d��������Ӧ����һ��ѭ����ǰһ����������������"), ���ѭ��������N2.Var);
}
void P89_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 Case Two Cycle Problem","P89 ���� ��������"},
		{"Title: Each column in the table has three layers, top, middle, and bottom, combined from top to bottom. For example, the first column M starts from A, the third column M loves C, and what is the 78th column?",
		"��Ŀ���±�ÿ�ж������������㣬����������ϣ������һ��M��A��������M��C����78����ʲô?"},
		{"1. Calculate the 78th column N1 in the upper layer, where N1 equals the 78th column N2 divided by the number of cycles per cycle N3 in the upper layer",
		"1.�����ϲ��78��N1 �ϲ��78��N1=��78��N2/�ϲ�ÿѭ����������N3"},
		{"2. Calculate the number of cycles per cycle N3 for the 78th column N2 in the middle layer, where N2=% of N2 in the 78th column",
		"2.�����в��78��N2 �в��78��N2=��78��N2%�в�ÿѭ����������N3"},
		{"3. Calculate the number of cycles per cycle N3 for the 78th column N2 in the lower layer, where N2 in the 78th column is equal to N2% in the 78th column",
		"3.�����²��78��N2 �²��78��N2=��78��N2%�²�ÿѭ����������N3"},
		{"4. Because the upper layer (loop number% d) has no remainder, it is M, the middle layer% d is love according to the loop, and the lower layer% d is B according to the loop. Connecting them together is M love B",
		"4.��Ϊ�ϲ�(ѭ����%d)û������������M���в�%d����ѭ���ǰ�,�²�%d����ѭ����B����������M��B"},
		//������
		{"Column78N2","��78��N2"},
		{"NumberofcyclesperupperlayerN3","�ϲ�ÿѭ����������N3"},
		{"ThenumberofcyclespermiddlelayerN3","�в�ÿѭ����������N3"},
		{"NumberofcyclesperlowerlayerN3","�²�ÿѭ����������N3"},
		{"Upper78thcolumnN1","�ϲ��78��N1"},
		{"Middlecolumn78N2","�в��78��N2"},
		{"Lowercolumn78N2","�²��78��N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��78��N2, 78);
	DefineLangVarInt(�ϲ�ÿѭ����������N3, 2);
	DefineLangVarInt(�в�ÿѭ����������N3, 5);
	DefineLangVarInt(�²�ÿѭ����������N3, 4);
	ColPrintf(PrintfCol::����, Lang("P89 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���±�ÿ�ж������������㣬����������ϣ������һ��M��A��������M��C����78����ʲô?"));
	const char* pPic =
		"\n"
		"\n"
		"\n"
		"\n"
		"       M   N   M   N   M   N   M   N   M   N   M   N����\n"
		"\n"
		"       ��  С  ��  ��  ѧ  ��  С  ��  ��  ѧ  ��  С����\n"
		"\n"
		"       A   B   C   D   A   B   C   D   A   B   C   D����\n"
		"\n"
		"\n"
		;
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(�ϲ��78��N1, 1);
	ColPrintf(PrintfCol::����, Lang("1.�����ϲ��78��N1 �ϲ��78��N1=��78��N2/�ϲ�ÿѭ����������N3"));
	�ϲ��78��N1 = ��78��N2 / �ϲ�ÿѭ����������N3;
	�ϲ��78��N1.PrintProcessLog(1);
	DefineLangVarInt(�в��78��N2, 1);
	ColPrintf(PrintfCol::����, Lang("2.�����в��78��N2 �в��78��N2=��78��N2%�в�ÿѭ����������N3"));
	�в��78��N2 = ��78��N2 % �в�ÿѭ����������N3;
	�в��78��N2.PrintProcessLog(2);
	DefineLangVarInt(�²��78��N2, 1);
	ColPrintf(PrintfCol::����, Lang("3.�����²��78��N2 �²��78��N2=��78��N2%�²�ÿѭ����������N3"));
	�²��78��N2 = ��78��N2 % �²�ÿѭ����������N3;
	�²��78��N2.PrintProcessLog(3);
	ColPrintf(PrintfCol::����, Lang("4.��Ϊ�ϲ�(ѭ����%d)û������������M���в�%d����ѭ���ǰ�,�²�%d����ѭ����B����������M��B"), �ϲ��78��N1.Var, �в��78��N2.Var, �²��78��N2.Var);
}
void P89_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 Case Three Cycle Problem","P89 ���� ��������"},
		{"Title: What is the 300th digit in the sequence of 1/1, 1/2, 2/2, 1/3, 2/3, 3/3, 1/4... and what is the position of 5/12 in this sequence?",
		"��Ŀ����1/1��1/2��2/2��1/3��2/3��3/3��1/4������������е�300�������Ƕ��٣�5/12������������еĵڼ���?"},
		{"Here, the denominators increase sequentially, but when increasing, the numerator must be written from 1 to the denominator. Therefore, there are 1 denominator for 1, and 2 denominators for 2",
		"1.�������ĸ���������ӣ�������ʱ�����ӱ����1����ĸ��Щ��д���������Է�ĸΪ1�ģ���1������ĸΪ2����2������"},
		{"2. Estimate what the denominator will be after three hundred fractions, as this involves two arithmetic sequences, so we can only estimate. Since it is three hundred, the denominator must be within 30, so (1+20) * 20/2=210, (1+24) * 24/2=300",
		"2.���������ٸ������󣬷�ĸ�Ƕ��٣���Ϊ�����漰�����Ȳ����У���������ֻ�ܹ��㣬��Ϊ�������٣����Է�ĸ�ض���30���ڣ�����(1+20)*20/2=210,(1+24)*24/2=300"},
		{"3. We did not calculate a value that can only be approximated to it, so it has no remainder. The numerator happens to be the denominator, which is 24/24",
		"3.����û�����ֻ���������Ƶ�ֵ��������û�����������������Ƿ�ĸ������24/24"},
		{"4.5/12, first calculate how many fractions are there before the denominator, (1+11) * 11/2=66",
		"4.5/12�������ĸ֮ǰ�ж��ٸ�������(1+11)*11/2=66��"},
		{"5.Starting from 11/11, there are 5 denominators with 12, so 5/12 is at the 66th+5th=71st in this sequence",
		"5.��11/11��ʼ������5����ĸ��12�ģ�����5/12��������еĵ�66+5=71��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P89 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����1/1��1/2��2/2��1/3��2/3��3/3��1/4������������е�300�������Ƕ��٣�5/12������������еĵڼ���?"));
	ColPrintf(PrintfCol::����, Lang("1.�������ĸ���������ӣ�������ʱ�����ӱ����1����ĸ��Щ��д���������Է�ĸΪ1�ģ���1������ĸΪ2����2������"));
	ColPrintf(PrintfCol::����, Lang("2.���������ٸ������󣬷�ĸ�Ƕ��٣���Ϊ�����漰�����Ȳ����У���������ֻ�ܹ��㣬��Ϊ�������٣����Է�ĸ�ض���30���ڣ�����(1+20)*20/2=210,(1+24)*24/2=300"));
	ColPrintf(PrintfCol::����, Lang("3.����û�����ֻ���������Ƶ�ֵ��������û�����������������Ƿ�ĸ������24/24"));
	ColPrintf(PrintfCol::����, Lang("4.5/12�������ĸ֮ǰ�ж��ٸ�������(1+11)*11/2=66��"));
	ColPrintf(PrintfCol::����, Lang("5.��11/11��ʼ������5����ĸ��12�ģ�����5/12��������еĵ�66+5=71��"));
}
void P89_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 Case Four Cycle Problem","P89 ���� ��������"},
		{"Question: There is a sequence of 4, 5, 9, 14, 23... What is the remainder of dividing the 2015th number in this sequence by three?",
		"��Ŀ����һ����4��5��9��14��23������������еĵ�2015�����������������Ƕ���?"},
		{"1. Through observation, we found that this sequence has no discernible pattern, but we require the remainder of the 2015th number. We don't need to calculate the 2015th number, we just need to calculate the remainder of this sequence",
		"1.����ͨ���۲췢���������û�й��ɿ��ԣ���Ҫ�����ǵ�2015�����������ǲ������2015��������ֻ��Ҫ��������е������������"},
		{"2. Calculate the remainder of all numbers, starting from 4 as 1, 2, 0, 2, 2, 1, 0, 1, 1, 2, 0, 2, 2, 1, 0, 1, 1, 1. 2, 0, 2, 2, 1, 0, 1 is one cycle, there are a total of 8 cycles. The remainder can be calculated directly below",
		"2.��������������������4��ʼ��1��2��0��2��2��1��0��1��1��2��0��2��2��1��0��1��1��2��0��2��2��1��0��1��һ�����ڣ�����8��������ֱ����������Ϳ���"},
		{"3. Calculate the remainder N1 from the loop of the number 2015th. The remainder N1 from the loop of the number 2015th=2015N2/trin3",
		"3.�����2015�����ѭ����������N1 ��2015�����ѭ����������N1=��2015N2/��N3"},
		//������
		{"The2015N2","��2015N2"},
		{"ThreeN3","��N3"},
		{"TheremainderN1ofthe2015cycleofthisnumber","��2015�����ѭ����������N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��2015N2, 2015);
	DefineLangVarInt(��N3, 3);
	ColPrintf(PrintfCol::����, Lang("P89 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ����4��5��9��14��23������������еĵ�2015�����������������Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.����ͨ���۲췢���������û�й��ɿ��ԣ���Ҫ�����ǵ�2015�����������ǲ������2015��������ֻ��Ҫ��������е������������"));
	ColPrintf(PrintfCol::����, Lang("2.��������������������4��ʼ��1��2��0��2��2��1��0��1��1��2��0��2��2��1��0��1��1��2��0��2��2��1��0��1��һ�����ڣ�����8��������ֱ����������Ϳ���"));
	DefineLangVarInt(��2015�����ѭ����������N1, 1);
	ColPrintf(PrintfCol::����, Lang("3.�����2015�����ѭ����������N1 ��2015�����ѭ����������N1=��2015N2/��N3"));
	��2015�����ѭ����������N1 = ��2015N2 / ��N3;
	��2015�����ѭ����������N1.PrintProcessLog(3);
}
void P89_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 Case Five Cycle Problem","P89 ���� ��������"},
		{"Title: Arrange natural numbers in the following order, so that 60 is in which row and column",
		"��Ŀ������Ȼ�����������У�����60�ڵڼ��еڼ���"},
		{"1. Since it increases diagonally, we can first calculate how many diagonal lines there are, but we cannot make this number greater than 60. If n is the number of rows, then 60>=(1+n) * n/2.",
		"1.��Ϊ��б�����ӵ����ǿ����ȼ����м���б�ߣ�������ʹ���������60��n����������ô60>=(1+n)*n/2��"},
		{"2. Estimation, because the latter is divided by 2, (1+n) * n must reach 100 to 120 to be closest, so we start from a maximum of 12 * 11=132, which is not possible. If it is 10, 11 * 10=110, and finally it is 55",
		"2.���㣬��Ϊ�������2������(1+n)*n����ﵽ100��120����ӽ����������Ǵ����12*11=132,���У������10��11*10=110�������55"},
		{"3. The above calculation is equivalent to the group in the periodic problem, because there is a remainder, the remainder is 60-55=5, so 5 numbers must be added to reach the next diagonal line 11",
		"3.������ľ��൱�����������е��飬��Ϊ��������������60-55=5�����Ա����ϼ���5�������͵���һ��б��11"},
		{"4. Because it is only a diagonal line, the coordinates of the diagonal line are offset from those of the vertical line. Adding one more diagonal line results in an offset of one. Therefore, subtracting 5 from 11 yields the previous row and column, which are 5. However, since the row is the previous one, 1 needs to be added, resulting in the 7th row and 5th column",
		"4.��Ϊ��ֻ��б�ߣ�б��������������ߵ���������ƫ�ƣ�ֻ�����б�߶��һ������ƫ��һ�����������11Ҫ��ȥ5���õ���һ�����У�����5����������һ������Ҫ����1�����Ե�7�У�5��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P89 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������Ȼ�����������У�����60�ڵڼ��еڼ���"));
	const char* pPic =
		"1     2     6     7     15     16����\n"
		"\n"
		"3     5     8     14����\n"
		"\n"
		"4     9     13����\n"
		"\n"
		"10    12����\n"
		"\n"
		"11����\n"
		"\n"
		;
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ��б�����ӵ����ǿ����ȼ����м���б�ߣ�������ʹ���������60��n����������ô60>=(1+n)*n/2��"));
	ColPrintf(PrintfCol::����, Lang("2.���㣬��Ϊ�������2������(1+n)*n����ﵽ100��120����ӽ����������Ǵ����12*11=132,���У������10��11*10=110�������55"));
	ColPrintf(PrintfCol::����, Lang("3.������ľ��൱�����������е��飬��Ϊ��������������60-55=5�����Ա����ϼ���5�������͵���һ��б��11"));
	ColPrintf(PrintfCol::����, Lang("4.��Ϊ��ֻ��б�ߣ�б��������������ߵ���������ƫ�ƣ�ֻ�����б�߶��һ������ƫ��һ�����������11Ҫ��ȥ5���õ���һ�����У�����5����������һ������Ҫ����1�����Ե�7�У�5��"));
}
void P89()
{
	P89_1();
	ColPrintf(PrintfCol::����, "");
	P89_2();
	ColPrintf(PrintfCol::����, "");
	P89_3();
	ColPrintf(PrintfCol::����, "");
	P89_4();
	ColPrintf(PrintfCol::����, "");
	P89_5();
	ColPrintf(PrintfCol::����, "");
	//P73_2();
	ColPrintf(PrintfCol::����, "");
	//P73_3();
	ColPrintf(PrintfCol::����, "");
	//P73_4();
	ColPrintf(PrintfCol::����, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::����, "");
	P55_3();
	ColPrintf(PrintfCol::����, "");*/
}
void P89_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P89();
	Lang.SetCurLanguage(LanguageLib::English);
	P89();
	ColPrintf(PrintfCol::����, "");

}