#pragma once
void P78_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case one sum difference multiple","P78 ��һ �Ͳ��"},
		{"Title: There are two piles of chess pieces, the first pile has 82 pieces and the second pile has 68 pieces. How many pieces were taken out from the second pile to make the first pile twice as many as the second pile?",
		"��Ŀ�����������ӣ���һ����82�����ӣ��ڶ�����68�����ӣ��ӵڶ����ó�һЩ����һ��ʹ��һ���ǵڶ��ѵ��������ó��˶��ٿ�?"},
		{"1. Calculate the total number of chess pieces N1=the number of chess pieces in the first pile N2+the number of chess pieces in the second team N3",
		"1.�����ܹ���������N1 �ܹ���������N1=��һ��������N2+�ڶ���������N3"},
		{"2. Calculate the number of chess pieces in the second pile after taking out N3=the total number of chess pieces N1/(multiple N4+smaller number multiplied by larger number N5)",
		"2.�����ó���ڶ���������N3 �ó���ڶ���������N3=�ܹ���������N1/(����N4+��С�����ڽϴ��������N5)"},
		{"3. Calculate the number of pieces in the first pile after taking out N4=total number of pieces N1- number of pieces in the second pile after taking out N3",
		"3.�����ó����һ��������N4 �ó����һ��������N4=�ܹ���������N1-�ó���ڶ���������N3"},
		{"4. Calculate the number of pieces taken out from the second pile N5=the number of pieces taken out from the second team N3- the number of pieces taken out from the second pile N3",
		"4.����ڶ����ó�����N5 �ڶ����ó�����N5=�ڶ���������N3-�ó���ڶ���������N3"},
		//������
		{"NumberofchesspiecesinthefirstpileN2","��һ��������N2"},
		{"NumberofchesspiecesinthesecondteamN3","�ڶ���������N3"},
		{"MultipleN4","����N4"},
		{"ThesmallernumberisamultipleofthelargernumberN5","��С�����ڽϴ��������N5"},
		{"ThetotalnumberofchesspiecesN1","�ܹ���������N1"},
		{"TakeoutthesecondpileofchesspiecesN3","�ó���ڶ���������N3"},
		{"TakeoutthefirstpileofchesspiecesN4","�ó����һ��������N4"},
		{"TakeoutN5piecesfromthesecondpile","�ڶ����ó�����N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��һ��������N2, 82);
	DefineLangVarInt(�ڶ���������N3, 68);
	DefineLangVarInt(����N4, 2);
	DefineLangVarInt(��С�����ڽϴ��������N5, 1);
	ColPrintf(PrintfCol::����, Lang("P78 ��һ �Ͳ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����������ӣ���һ����82�����ӣ��ڶ�����68�����ӣ��ӵڶ����ó�һЩ����һ��ʹ��һ���ǵڶ��ѵ��������ó��˶��ٿ�?"));
	DefineLangVarInt(�ܹ���������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ܹ���������N1 �ܹ���������N1=��һ��������N2+�ڶ���������N3"));
	�ܹ���������N1 = ��һ��������N2 + �ڶ���������N3;
	�ܹ���������N1.PrintProcessLog(1);
	DefineLangVarInt(�ó���ڶ���������N3, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ó���ڶ���������N3 �ó���ڶ���������N3=�ܹ���������N1/(����N4+��С�����ڽϴ��������N5)"));
	�ó���ڶ���������N3 = �ܹ���������N1 / (����N4 + ��С�����ڽϴ��������N5);
	�ó���ڶ���������N3.PrintProcessLog(2);
	DefineLangVarInt(�ó����һ��������N4, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ó����һ��������N4 �ó����һ��������N4=�ܹ���������N1-�ó���ڶ���������N3"));
	�ó����һ��������N4 = �ܹ���������N1 - �ó���ڶ���������N3;
	�ó����һ��������N4.PrintProcessLog(3);
	DefineLangVarInt(�ڶ����ó�����N5, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ڶ����ó�����N5 �ڶ����ó�����N5=�ڶ���������N3-�ó���ڶ���������N3"));
	�ڶ����ó�����N5 = �ڶ���������N3 - �ó���ڶ���������N3;
	�ڶ����ó�����N5.PrintProcessLog(4);
}
void P78_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case two sum difference multiple","P78 ���� �Ͳ��"},
		{"Title: There are a total of 72 apples in three baskets. The number of apples in the first basket is twice that of the second basket, and the number of apples in the third basket is three times that of the first basket. How many apples are there in each of the three baskets",
		"��Ŀ���������ӵ�ƻ������72�ţ���һ�����ӵĸ����ǵڶ������ӵ�2�������������ӵ�ƻ���ǵ�һ�����ӵ�����������ƻ�����ж��ٸ�"},
		{"1. Calculate the number of multiples N1 of three baskets to the first basket. The number of multiples N1 of three baskets to the first basket is equal to the number of multiples N2 of the first basket to the first basket plus the number of multiples N2 of the second basket to the first basket (the number of multiples N2 of the third basket to the second basket multiplied by the number of multiples N2 of the second basket to the first basket)",
		"1.�������������ڵ�һ�����ı�������N1 ���������ڵ�һ�����ı�������N1=��һ�������ڵ�һ�����ı�������N2+�ڶ��������ڵ�һ�����ı�������N2+(�����������ڵڶ������ı�������N2*�ڶ��������ڵ�һ�����ı�������N2)"},
		{"2. Calculate the average quantity per serving N3. The average quantity per serving N3 is equal to the total number of apples N4 divided by the multiple of three baskets for the first basket N1",
		"2.����ƽ��ÿ������N3 ƽ��ÿ������N3=ƻ������N4/���������ڵ�һ�����ı�������N1"},
		{"3. Calculate the number of apples in the first basket N4. The number of apples in the first basket N4 is equal to the average quantity per serving N3 multiplied by the number of multiples of the first basket N2",
		"3.�����һ����ƻ������N4 ��һ����ƻ������N4=ƽ��ÿ������N3*��һ�������ڵ�һ�����ı�������N2"},
		{"4. Calculate the number of apples in the second basket N4. The number of apples in the second basket N4 is equal to the average quantity per serving N3 multiplied by the number of multiples of the first basket N2",
		"4.����ڶ�����ƻ������N4 �ڶ�����ƻ������N4=ƽ��ÿ������N3*�ڶ��������ڵ�һ�����ı�������N2"},
		{"5. Calculate the number of apples in the third basket N4. The number of apples in the third basket N4 is equal to the average quantity per serving N3 * (the number of multiples of the third basket to the second basket N2 * the number of multiples of the second basket to the first basket N2)",
		"5.�����������ƻ������N4 ��������ƻ������N4=ƽ��ÿ������N3*(�����������ڵڶ������ı�������N2*�ڶ��������ڵ�һ�����ı�������N2)"},
		//������
		{"ThenumberofmultiplesN2ofthefirstbaskettothefirstbasket","��һ�������ڵ�һ�����ı�������N2"},
		{"ThenumberofmultiplesN2ofthesecondbasketoverthefirstbasket","�ڶ��������ڵ�һ�����ı�������N2"},
		{"ThenumberofmultiplesN2ofthethirdbaskettothesecondbasket","�����������ڵڶ������ı�������N2"},
		{"TotalnumberofapplesN4","ƻ������N4"},
		{"ThenumberofmultiplesN1ofthreebasketsoverthefirstbasket","���������ڵ�һ�����ı�������N1"},
		{"AveragequantityperservingN3","ƽ��ÿ������N3"},
		{"NumberofapplesinthefirstbasketN4","��һ����ƻ������N4"},
		{"NumberofapplesinthesecondbasketN4","�ڶ�����ƻ������N4"},
		{"NumberofapplesinthethirdbasketN4","��������ƻ������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��һ�������ڵ�һ�����ı�������N2, 1);
	DefineLangVarInt(�ڶ��������ڵ�һ�����ı�������N2, 2);
	DefineLangVarInt(�����������ڵڶ������ı�������N2, 3);
	DefineLangVarInt(ƻ������N4, 72);
	ColPrintf(PrintfCol::����, Lang("P78 ���� �Ͳ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������ӵ�ƻ������72�ţ���һ�����ӵĸ����ǵڶ������ӵ�2�������������ӵ�ƻ���ǵ�һ�����ӵ�����������ƻ�����ж��ٸ�"));
	DefineLangVarInt(���������ڵ�һ�����ı�������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������������ڵ�һ�����ı�������N1 ���������ڵ�һ�����ı�������N1=��һ�������ڵ�һ�����ı�������N2+�ڶ��������ڵ�һ�����ı�������N2+(�����������ڵڶ������ı�������N2*�ڶ��������ڵ�һ�����ı�������N2)"));
	���������ڵ�һ�����ı�������N1 = ��һ�������ڵ�һ�����ı�������N2 + �ڶ��������ڵ�һ�����ı�������N2 + (�����������ڵڶ������ı�������N2 * �ڶ��������ڵ�һ�����ı�������N2);
	���������ڵ�һ�����ı�������N1.PrintProcessLog(1);
	DefineLangVarInt(ƽ��ÿ������N3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ƽ��ÿ������N3 ƽ��ÿ������N3=ƻ������N4/���������ڵ�һ�����ı�������N1"));
	ƽ��ÿ������N3 = ƻ������N4 / ���������ڵ�һ�����ı�������N1;
	ƽ��ÿ������N3.PrintProcessLog(2);
	DefineLangVarInt(��һ����ƻ������N4, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����һ����ƻ������N4 ��һ����ƻ������N4=ƽ��ÿ������N3*��һ�������ڵ�һ�����ı�������N2"));
	��һ����ƻ������N4 = ƽ��ÿ������N3 * ��һ�������ڵ�һ�����ı�������N2;
	��һ����ƻ������N4.PrintProcessLog(3);
	DefineLangVarInt(�ڶ�����ƻ������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ڶ�����ƻ������N4 �ڶ�����ƻ������N4=ƽ��ÿ������N3*�ڶ��������ڵ�һ�����ı�������N2"));
	�ڶ�����ƻ������N4 = ƽ��ÿ������N3 * �ڶ��������ڵ�һ�����ı�������N2;
	�ڶ�����ƻ������N4.PrintProcessLog(4);
	DefineLangVarInt(��������ƻ������N4, 0);
	ColPrintf(PrintfCol::����, Lang("5.�����������ƻ������N4 ��������ƻ������N4=ƽ��ÿ������N3*(�����������ڵڶ������ı�������N2*�ڶ��������ڵ�һ�����ı�������N2)"));
	��������ƻ������N4 = ƽ��ÿ������N3 * (�����������ڵڶ������ı�������N2 * �ڶ��������ڵ�һ�����ı�������N2);
	��������ƻ������N4.PrintProcessLog(5);
}
void P78_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case three sum difference multiple","P78 ���� �Ͳ��"},
		{"Title: A certain agricultural tool production company produced 1200 more bearings in the second quarter than in the first quarter, and 2800 more bearings in the third quarter than in the second quarter, which is three times that of the first quarter. How many bearings were produced in each quarter",
		"��Ŀ��ĳũ��������˾�ڶ����ȱȵ�һ���ȶ�����1200����У��������ȱȵڶ����ȶ�����2800��������ǵ�һ���ȵ������������������������"},
		{"1. Calculate the total number of bearings produced, N1=N2 produced in the second quarter+N2 produced in the third quarter",
		"1.����һ�������������N1 һ�������������N1=�ڶ����ȶ�������N2+�������ȶ�������N2"},
		{"2. Calculate the number of bearings produced per unit N3=the total number of excess bearings produced N1/(the excess production factor in the third quarter N4- excluding the first quarter N5)",
		"2.����ÿ�����������N3 ÿ�����������N3=һ�������������N1/(�������ȶ���������N4-��һ���ȳ���N5)"},
		{"3. Calculate the number of bearings in the first quarter N5=the number of bearings produced per unit N3 * the multiple of the excess production in the first quarter N6",
		"3.�����һ���������N5 ��һ���������N5=ÿ�����������N3*��һ���ȶ������ı���N6"},
		{"4. Calculate the number of bearings in the second quarter N5. The number of bearings in the second quarter N5 is equal to the number of bearings produced per unit N3 plus the excess N2 produced in the second quarter",
		"4.����ڶ����������N5 �ڶ����������N5=ÿ�����������N3+�ڶ����ȶ�������N2"},
		{"5. Calculate the number of bearings in the third quarter N5. The number of bearings in the third quarter N5=the number of bearings produced per unit N3+the total number of bearings produced N1",
		"5.����������������N5 �������������N5=ÿ�����������N3+һ�������������N1"},
		//������
		{"MoreN2producedinthesecondquarter","�ڶ����ȶ�������N2"},
		{"MoreN2producedinthethirdquarter","�������ȶ�������N2"},
		{"ThirdquartermultipleproductionN4","�������ȶ���������N4"},
		{"ExcludingN5inthefirstquarter","��һ���ȳ���N5"},
		{"MultipleN6producedinthefirstquarter","��һ���ȶ������ı���N6"},
		{"AtotalofN1additionalbearingswereproduced","һ�������������N1"},
		{"NumberofbearingsperproductionN3","ÿ�����������N3"},
		{"NumberofbearingsinQ1N5","��һ���������N5"},
		{"NumberofbearingsinQ2N5","�ڶ����������N5"},
		{"NumberofbearingsinQ3N5","�������������N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ڶ����ȶ�������N2, 1200);
	DefineLangVarInt(�������ȶ�������N2, 2800);
	DefineLangVarInt(�������ȶ���������N4, 3);
	DefineLangVarInt(��һ���ȳ���N5, 1);
	DefineLangVarInt(��һ���ȶ������ı���N6, 1);
	ColPrintf(PrintfCol::����, Lang("P78 ���� �Ͳ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ĳũ��������˾�ڶ����ȱȵ�һ���ȶ�����1200����У��������ȱȵڶ����ȶ�����2800��������ǵ�һ���ȵ������������������������"));
	DefineLangVarInt(һ�������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ�������������N1 һ�������������N1=�ڶ����ȶ�������N2+�������ȶ�������N2"));
	һ�������������N1 = �ڶ����ȶ�������N2 + �������ȶ�������N2;
	һ�������������N1.PrintProcessLog(1);
	DefineLangVarInt(ÿ�����������N3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿ�����������N3 ÿ�����������N3=һ�������������N1/(�������ȶ���������N4-��һ���ȳ���N5)"));
	ÿ�����������N3 = һ�������������N1 / (�������ȶ���������N4 - ��һ���ȳ���N5);
	ÿ�����������N3.PrintProcessLog(2);
	DefineLangVarInt(��һ���������N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����һ���������N5 ��һ���������N5=ÿ�����������N3*��һ���ȶ������ı���N6"));
	��һ���������N5 = ÿ�����������N3 * ��һ���ȶ������ı���N6;
	��һ���������N5.PrintProcessLog(3);
	DefineLangVarInt(�ڶ����������N5, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ڶ����������N5 �ڶ����������N5=ÿ�����������N3+�ڶ����ȶ�������N2"));
	�ڶ����������N5 = ÿ�����������N3 + �ڶ����ȶ�������N2;
	�ڶ����������N5.PrintProcessLog(4);
	DefineLangVarInt(�������������N5, 0);
	ColPrintf(PrintfCol::����, Lang("5.����������������N5 �������������N5=ÿ�����������N3+һ�������������N1"));
	�������������N5 = ÿ�����������N3 + һ�������������N1;
	�������������N5.PrintProcessLog(5);
}
void P78_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case 4 sum difference multiple","P78 ���� �Ͳ��"},
		{"Title: How many books do A and B each have? If A gives B 45 books, the two have the same book list. If B gives A 45 books, A is twice as many as B. How many books did A and B originally have?",
		"��Ŀ���������˸������ɱ��飬����׸���45���飬������Ŀ��ͬ������Ҹ���45���������ҵ�����������ԭ�����ж��ٱ���?"},
		{"1. Calculate the number of books that A originally had more than B, N1. The number of books that A originally had more than B, N1, is equal to the number of books that A gave B, N2, multiplied by the number of books that B had more than A and less than B, N3",
		"1.�����ԭ�����Ҷ�ı���N1 ��ԭ�����Ҷ�ı���N1=�׸��ұ���N2*�Ҷ��˼����˵ı���N3"},
		{"2. Calculate the number of books that A has now more than B, N1. The number of books that A has now more than B, N1, is equal to the original number of books that A had more than B, N1, plus the number of books that A gave B, N2, multiplied by the number of books that B had more than A and less than B, N3",
		"2.��������ڱ��Ҷ�ı���N1 �����ڱ��Ҷ�ı���N1=��ԭ�����Ҷ�ı���N1+�׸��ұ���N2*�Ҷ��˼����˵ı���N3"},
		{"3. Calculate B's current book N4. B's current book N4=the number of books that A has more than B, N1/(multiple N4-smaller number multiplied by larger number N5)",
		"3.���������ڵı���N4 �����ڵı���N4=�����ڱ��Ҷ�ı���N1/(����N4-��С�����ڽϴ��������N5)"},
		{"4. Calculate the original B N5=B's current book N4+A gives B a book N2",
		"4.����ԭ������N5 ԭ������N5=�����ڵı���N4+�׸��ұ���N2"},
		{"5. Calculate the original value of A N6, which is equal to the original value of B N5 plus the original number N1 that A has more than B",
		"5.����ԭ���ļ�N6 ԭ���ļ�N6=ԭ������N5+��ԭ�����Ҷ�ı���N1"},
		//������
		{"AgivesBabookN2","�׸��ұ���N2"},
		{"ThemultipleN3whereBismoreandAisless","�Ҷ��˼����˵ı���N3"},
		{"MultipleN4","����N4"},
		{"ThesmallernumberisamultipleofthelargernumberN5","��С�����ڽϴ��������N5"},
		{"AoriginallyhadmoreoriginalnumbersthanB,N1","��ԭ�����Ҷ�ı���N1"},
		{"AnowhasmorenumbersthanB,N1","�����ڱ��Ҷ�ı���N1"},
		{"B'scurrentbookN4","�����ڵı���N4"},
		{"TheoriginalBN5","ԭ������N5"},
		{"TheoriginalAN6","ԭ���ļ�N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�׸��ұ���N2, 45);
	DefineLangVarInt(�Ҷ��˼����˵ı���N3, 2);
	DefineLangVarInt(����N4, 2);
	DefineLangVarInt(��С�����ڽϴ��������N5, 1);
	ColPrintf(PrintfCol::����, Lang("P78 ���� �Ͳ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������˸������ɱ��飬����׸���45���飬������Ŀ��ͬ������Ҹ���45���������ҵ�����������ԭ�����ж��ٱ���?"));
	DefineLangVarInt(��ԭ�����Ҷ�ı���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ԭ�����Ҷ�ı���N1 ��ԭ�����Ҷ�ı���N1=�׸��ұ���N2*�Ҷ��˼����˵ı���N3"));
	��ԭ�����Ҷ�ı���N1 = �׸��ұ���N2 * �Ҷ��˼����˵ı���N3;
	��ԭ�����Ҷ�ı���N1.PrintProcessLog(1);
	DefineLangVarInt(�����ڱ��Ҷ�ı���N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������ڱ��Ҷ�ı���N1 �����ڱ��Ҷ�ı���N1=��ԭ�����Ҷ�ı���N1+�׸��ұ���N2*�Ҷ��˼����˵ı���N3"));
	�����ڱ��Ҷ�ı���N1 = ��ԭ�����Ҷ�ı���N1 + �׸��ұ���N2 * �Ҷ��˼����˵ı���N3;
	�����ڱ��Ҷ�ı���N1.PrintProcessLog(2);
	DefineLangVarInt(�����ڵı���N4, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������ڵı���N4 �����ڵı���N4=�����ڱ��Ҷ�ı���N1/(����N4-��С�����ڽϴ��������N5)"));
	�����ڵı���N4 = �����ڱ��Ҷ�ı���N1 / (����N4 - ��С�����ڽϴ��������N5);
	�����ڵı���N4.PrintProcessLog(3);
	DefineLangVarInt(ԭ������N5, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ԭ������N5 ԭ������N5=�����ڵı���N4+�׸��ұ���N2"));
	ԭ������N5 = �����ڵı���N4 + �׸��ұ���N2;
	ԭ������N5.PrintProcessLog(4);
	DefineLangVarInt(ԭ���ļ�N6, 0);
	ColPrintf(PrintfCol::����, Lang("5.����ԭ���ļ�N6 ԭ���ļ�N6=ԭ������N5+��ԭ�����Ҷ�ı���N1"));
	ԭ���ļ�N6 = ԭ������N5 + ��ԭ�����Ҷ�ı���N1;
	ԭ���ļ�N6.PrintProcessLog(5);
}
void P78_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case five sum difference multiple","P78 ���� �Ͳ��"},
		{"Question: In an exam, Xiaoliang's average score in mathematics and Chinese was 93 points, with mathematics being 4 points higher than Chinese. How many points did Xiaoliang score in both Chinese and mathematics",
		"��Ŀ��С����һ�ο����У���ѧ���ĵ�ƽ������93�֣���ѧ�����Ķ�4�֣�С��������ѧ�����˶��ٷ�"},
		{"1. Calculate the total score N1 of Chinese and Mathematics. The total score N1 of Chinese and Mathematics is equal to the average score N2 multiplied by the total number of courses N3",
		"1.����������ѧ�ܷ�N1 ������ѧ�ܷ�N1=ƽ����N2*һ������N3"},
		{"2. Calculate the math score N2. Math score N2=(total score of Chinese math N1+score with more math N3)/total number of courses N3",
		"2.������ѧ�÷�N2 ��ѧ�÷�N2=(������ѧ�ܷ�N1+��ѧ��ķ���N3)/һ������N3"},
		{"3. Calculate the Chinese language score N2, which is equal to the total score of Chinese and mathematics N1 minus the mathematics score N2",
		"3.�������ĵ÷�N2 ���ĵ÷�N2=������ѧ�ܷ�N1-��ѧ�÷�N2"},
		//������
		{"AveragescoreN2","ƽ����N2"},
		{"TotalnumberofdoorsN3","һ������N3"},
		{"MathscoresN3","��ѧ��ķ���N3"},
		{"ChineseandMathematicsTotalScoreN1","������ѧ�ܷ�N1"},
		{"MathematicsscoreN2","��ѧ�÷�N2"},
		{"ChinesescoreN2","���ĵ÷�N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ƽ����N2, 93);
	DefineLangVarInt(һ������N3, 2);
	DefineLangVarInt(��ѧ��ķ���N3, 4);
	ColPrintf(PrintfCol::����, Lang("P78 ���� �Ͳ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��С����һ�ο����У���ѧ���ĵ�ƽ������93�֣���ѧ�����Ķ�4�֣�С��������ѧ�����˶��ٷ�"));
	DefineLangVarInt(������ѧ�ܷ�N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����������ѧ�ܷ�N1 ������ѧ�ܷ�N1=ƽ����N2*һ������N3"));
	������ѧ�ܷ�N1 = ƽ����N2 * һ������N3;
	������ѧ�ܷ�N1.PrintProcessLog(1);
	DefineLangVarInt(��ѧ�÷�N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ѧ�÷�N2 ��ѧ�÷�N2=(������ѧ�ܷ�N1+��ѧ��ķ���N3)/һ������N3"));
	��ѧ�÷�N2 = (������ѧ�ܷ�N1 + ��ѧ��ķ���N3) / һ������N3;
	��ѧ�÷�N2.PrintProcessLog(2);
	DefineLangVarInt(���ĵ÷�N2, 0);
	ColPrintf(PrintfCol::����, Lang("3.�������ĵ÷�N2 ���ĵ÷�N2=������ѧ�ܷ�N1-��ѧ�÷�N2"));
	���ĵ÷�N2 = ������ѧ�ܷ�N1 - ��ѧ�÷�N2;
	���ĵ÷�N2.PrintProcessLog(3);
}
void P78_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case six sum difference multiple","P78 ���� �Ͳ��"},
		{"Title: The sum of the three numbers A, B, C, and C is 120, where the sum of A and B is three times that of C. A is 10 more than B. What are the three numbers?",
		"��Ŀ�����ұ������ĺ���120�����м׺��ҵĺ��Ǳ����������ױ��Ҷ�10�����������Ƕ��٣�"},
		{"1. Calculate the number of C, N1. The number of C is equal to the sum of three numbers, N2 divided by (A/B multiple N3+C multiple N4)",
		"1.�������N1 ����N1=���������ܺ�N2/(���ұ���N3+������N4)"},
		{"2. Calculate the sum of A and B, N2. The sum of A and B is equal to the sum of three numbers, N2 minus the number of C, N1",
		"2.������ҵĺ�N2 ���ҵĺ�N2=���������ܺ�N2-����N1"},
		{"3. Calculate the number N3 of A=(sum of A and B+difference between A and B N3)/multiplier N5",
		"3.�������N3 ����N3=(���ҵĺ�N2+���ҵĲ�N3)/����N5"},
		{"4. Calculate the number of B (N4), which is equal to the sum of A and B (N2) minus the number of A (N3)",
		"4.��������N4 ����N4=���ҵĺ�N2-����N3"},
		//������
		{"ThesumofthreenumbersN2","���������ܺ�N2"},
		{"MultipleofAandBN3","���ұ���N3"},
		{"CmultipleN4","������N4"},
		{"DifferencebetweenAandBN3","���ҵĲ�N3"},
		{"MagnificationN5","����N5"},
		{"NumberofCN1","����N1"},
		{"AandB,'sandN2","���ҵĺ�N2"},
		{"ANumberN3","����N3"},
		{"BnumberN4","����N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���������ܺ�N2, 120);
	DefineLangVarInt(���ұ���N3, 3);
	DefineLangVarInt(������N4, 1);
	DefineLangVarInt(���ҵĲ�N3, 10);
	DefineLangVarInt(����N5, 2);
	ColPrintf(PrintfCol::����, Lang("P78 ���� �Ͳ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ұ������ĺ���120�����м׺��ҵĺ��Ǳ����������ױ��Ҷ�10�����������Ƕ��٣�"));
	DefineLangVarInt(����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������N1 ����N1=���������ܺ�N2/(���ұ���N3+������N4)"));
	����N1 = ���������ܺ�N2 / (���ұ���N3 + ������N4);
	����N1.PrintProcessLog(1);
	DefineLangVarInt(���ҵĺ�N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ҵĺ�N2 ���ҵĺ�N2=���������ܺ�N2-����N1"));
	���ҵĺ�N2 = ���������ܺ�N2 - ����N1;
	���ҵĺ�N2.PrintProcessLog(2);
	DefineLangVarInt(����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�������N3 ����N3=(���ҵĺ�N2+���ҵĲ�N3)/����N5"));
	����N3 = (���ҵĺ�N2 + ���ҵĲ�N3) / ����N5;
	����N3.PrintProcessLog(3);
	DefineLangVarInt(����N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������N4 ����N4=���ҵĺ�N2-����N3"));
	����N4 = ���ҵĺ�N2 - ����N3;
	����N4.PrintProcessLog(4);
}
void P78()
{
	P78_1();
	ColPrintf(PrintfCol::����, "");
	P78_2();
	ColPrintf(PrintfCol::����, "");
	P78_3();
	ColPrintf(PrintfCol::����, "");
	P78_4();
	ColPrintf(PrintfCol::����, "");
	P78_5();
	ColPrintf(PrintfCol::����, "");
	P78_6();
	ColPrintf(PrintfCol::����, "");
}
void P78_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P78();
	Lang.SetCurLanguage(LanguageLib::English);
	P78();
	ColPrintf(PrintfCol::����, "");

}