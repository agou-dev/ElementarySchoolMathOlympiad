#pragma once
void P78_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case one sum difference multiple","P78 例一 和差倍数"},
		{"Title: There are two piles of chess pieces, the first pile has 82 pieces and the second pile has 68 pieces. How many pieces were taken out from the second pile to make the first pile twice as many as the second pile?",
		"题目：有两堆棋子，第一堆有82个棋子，第二个有68个棋子，从第二堆拿出一些给第一堆使第一堆是第二堆的两倍，拿出了多少颗?"},
		{"1. Calculate the total number of chess pieces N1=the number of chess pieces in the first pile N2+the number of chess pieces in the second team N3",
		"1.计算总共的棋子数N1 总共的棋子数N1=第一堆棋子数N2+第二队棋子数N3"},
		{"2. Calculate the number of chess pieces in the second pile after taking out N3=the total number of chess pieces N1/(multiple N4+smaller number multiplied by larger number N5)",
		"2.计算拿出后第二堆棋子数N3 拿出后第二堆棋子数N3=总共的棋子数N1/(倍数N4+较小的数于较大的数倍数N5)"},
		{"3. Calculate the number of pieces in the first pile after taking out N4=total number of pieces N1- number of pieces in the second pile after taking out N3",
		"3.计算拿出后第一堆棋子数N4 拿出后第一堆棋子数N4=总共的棋子数N1-拿出后第二堆棋子数N3"},
		{"4. Calculate the number of pieces taken out from the second pile N5=the number of pieces taken out from the second team N3- the number of pieces taken out from the second pile N3",
		"4.计算第二堆拿出颗数N5 第二堆拿出颗数N5=第二队棋子数N3-拿出后第二堆棋子数N3"},
		//变量表
		{"NumberofchesspiecesinthefirstpileN2","第一堆棋子数N2"},
		{"NumberofchesspiecesinthesecondteamN3","第二队棋子数N3"},
		{"MultipleN4","倍数N4"},
		{"ThesmallernumberisamultipleofthelargernumberN5","较小的数于较大的数倍数N5"},
		{"ThetotalnumberofchesspiecesN1","总共的棋子数N1"},
		{"TakeoutthesecondpileofchesspiecesN3","拿出后第二堆棋子数N3"},
		{"TakeoutthefirstpileofchesspiecesN4","拿出后第一堆棋子数N4"},
		{"TakeoutN5piecesfromthesecondpile","第二堆拿出颗数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第一堆棋子数N2, 82);
	DefineLangVarInt(第二队棋子数N3, 68);
	DefineLangVarInt(倍数N4, 2);
	DefineLangVarInt(较小的数于较大的数倍数N5, 1);
	ColPrintf(PrintfCol::标题, Lang("P78 例一 和差倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：有两堆棋子，第一堆有82个棋子，第二个有68个棋子，从第二堆拿出一些给第一堆使第一堆是第二堆的两倍，拿出了多少颗?"));
	DefineLangVarInt(总共的棋子数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算总共的棋子数N1 总共的棋子数N1=第一堆棋子数N2+第二队棋子数N3"));
	总共的棋子数N1 = 第一堆棋子数N2 + 第二队棋子数N3;
	总共的棋子数N1.PrintProcessLog(1);
	DefineLangVarInt(拿出后第二堆棋子数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算拿出后第二堆棋子数N3 拿出后第二堆棋子数N3=总共的棋子数N1/(倍数N4+较小的数于较大的数倍数N5)"));
	拿出后第二堆棋子数N3 = 总共的棋子数N1 / (倍数N4 + 较小的数于较大的数倍数N5);
	拿出后第二堆棋子数N3.PrintProcessLog(2);
	DefineLangVarInt(拿出后第一堆棋子数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算拿出后第一堆棋子数N4 拿出后第一堆棋子数N4=总共的棋子数N1-拿出后第二堆棋子数N3"));
	拿出后第一堆棋子数N4 = 总共的棋子数N1 - 拿出后第二堆棋子数N3;
	拿出后第一堆棋子数N4.PrintProcessLog(3);
	DefineLangVarInt(第二堆拿出颗数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算第二堆拿出颗数N5 第二堆拿出颗数N5=第二队棋子数N3-拿出后第二堆棋子数N3"));
	第二堆拿出颗数N5 = 第二队棋子数N3 - 拿出后第二堆棋子数N3;
	第二堆拿出颗数N5.PrintProcessLog(4);
}
void P78_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case two sum difference multiple","P78 例二 和差倍数"},
		{"Title: There are a total of 72 apples in three baskets. The number of apples in the first basket is twice that of the second basket, and the number of apples in the third basket is three times that of the first basket. How many apples are there in each of the three baskets",
		"题目：三个篮子的苹果共有72颗，第一颗篮子的个数是第二个篮子的2倍，第三个篮子的苹果是第一个篮子的三倍。三篮苹果各有多少个"},
		{"1. Calculate the number of multiples N1 of three baskets to the first basket. The number of multiples N1 of three baskets to the first basket is equal to the number of multiples N2 of the first basket to the first basket plus the number of multiples N2 of the second basket to the first basket (the number of multiples N2 of the third basket to the second basket multiplied by the number of multiples N2 of the second basket to the first basket)",
		"1.计算三个篮对于第一个篮的倍数数量N1 三个篮对于第一个篮的倍数数量N1=第一个篮对于第一个篮的倍数数量N2+第二个篮对于第一个篮的倍数数量N2+(第三个篮对于第二个篮的倍数数量N2*第二个篮对于第一个篮的倍数数量N2)"},
		{"2. Calculate the average quantity per serving N3. The average quantity per serving N3 is equal to the total number of apples N4 divided by the multiple of three baskets for the first basket N1",
		"2.计算平均每份数量N3 平均每份数量N3=苹果总数N4/三个篮对于第一个篮的倍数数量N1"},
		{"3. Calculate the number of apples in the first basket N4. The number of apples in the first basket N4 is equal to the average quantity per serving N3 multiplied by the number of multiples of the first basket N2",
		"3.计算第一个篮苹果数量N4 第一个篮苹果数量N4=平均每份数量N3*第一个篮对于第一个篮的倍数数量N2"},
		{"4. Calculate the number of apples in the second basket N4. The number of apples in the second basket N4 is equal to the average quantity per serving N3 multiplied by the number of multiples of the first basket N2",
		"4.计算第二个篮苹果数量N4 第二个篮苹果数量N4=平均每份数量N3*第二个篮对于第一个篮的倍数数量N2"},
		{"5. Calculate the number of apples in the third basket N4. The number of apples in the third basket N4 is equal to the average quantity per serving N3 * (the number of multiples of the third basket to the second basket N2 * the number of multiples of the second basket to the first basket N2)",
		"5.计算第三个篮苹果数量N4 第三个篮苹果数量N4=平均每份数量N3*(第三个篮对于第二个篮的倍数数量N2*第二个篮对于第一个篮的倍数数量N2)"},
		//变量表
		{"ThenumberofmultiplesN2ofthefirstbaskettothefirstbasket","第一个篮对于第一个篮的倍数数量N2"},
		{"ThenumberofmultiplesN2ofthesecondbasketoverthefirstbasket","第二个篮对于第一个篮的倍数数量N2"},
		{"ThenumberofmultiplesN2ofthethirdbaskettothesecondbasket","第三个篮对于第二个篮的倍数数量N2"},
		{"TotalnumberofapplesN4","苹果总数N4"},
		{"ThenumberofmultiplesN1ofthreebasketsoverthefirstbasket","三个篮对于第一个篮的倍数数量N1"},
		{"AveragequantityperservingN3","平均每份数量N3"},
		{"NumberofapplesinthefirstbasketN4","第一个篮苹果数量N4"},
		{"NumberofapplesinthesecondbasketN4","第二个篮苹果数量N4"},
		{"NumberofapplesinthethirdbasketN4","第三个篮苹果数量N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第一个篮对于第一个篮的倍数数量N2, 1);
	DefineLangVarInt(第二个篮对于第一个篮的倍数数量N2, 2);
	DefineLangVarInt(第三个篮对于第二个篮的倍数数量N2, 3);
	DefineLangVarInt(苹果总数N4, 72);
	ColPrintf(PrintfCol::标题, Lang("P78 例二 和差倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：三个篮子的苹果共有72颗，第一颗篮子的个数是第二个篮子的2倍，第三个篮子的苹果是第一个篮子的三倍。三篮苹果各有多少个"));
	DefineLangVarInt(三个篮对于第一个篮的倍数数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算三个篮对于第一个篮的倍数数量N1 三个篮对于第一个篮的倍数数量N1=第一个篮对于第一个篮的倍数数量N2+第二个篮对于第一个篮的倍数数量N2+(第三个篮对于第二个篮的倍数数量N2*第二个篮对于第一个篮的倍数数量N2)"));
	三个篮对于第一个篮的倍数数量N1 = 第一个篮对于第一个篮的倍数数量N2 + 第二个篮对于第一个篮的倍数数量N2 + (第三个篮对于第二个篮的倍数数量N2 * 第二个篮对于第一个篮的倍数数量N2);
	三个篮对于第一个篮的倍数数量N1.PrintProcessLog(1);
	DefineLangVarInt(平均每份数量N3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算平均每份数量N3 平均每份数量N3=苹果总数N4/三个篮对于第一个篮的倍数数量N1"));
	平均每份数量N3 = 苹果总数N4 / 三个篮对于第一个篮的倍数数量N1;
	平均每份数量N3.PrintProcessLog(2);
	DefineLangVarInt(第一个篮苹果数量N4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算第一个篮苹果数量N4 第一个篮苹果数量N4=平均每份数量N3*第一个篮对于第一个篮的倍数数量N2"));
	第一个篮苹果数量N4 = 平均每份数量N3 * 第一个篮对于第一个篮的倍数数量N2;
	第一个篮苹果数量N4.PrintProcessLog(3);
	DefineLangVarInt(第二个篮苹果数量N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算第二个篮苹果数量N4 第二个篮苹果数量N4=平均每份数量N3*第二个篮对于第一个篮的倍数数量N2"));
	第二个篮苹果数量N4 = 平均每份数量N3 * 第二个篮对于第一个篮的倍数数量N2;
	第二个篮苹果数量N4.PrintProcessLog(4);
	DefineLangVarInt(第三个篮苹果数量N4, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算第三个篮苹果数量N4 第三个篮苹果数量N4=平均每份数量N3*(第三个篮对于第二个篮的倍数数量N2*第二个篮对于第一个篮的倍数数量N2)"));
	第三个篮苹果数量N4 = 平均每份数量N3 * (第三个篮对于第二个篮的倍数数量N2 * 第二个篮对于第一个篮的倍数数量N2);
	第三个篮苹果数量N4.PrintProcessLog(5);
}
void P78_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case three sum difference multiple","P78 例三 和差倍数"},
		{"Title: A certain agricultural tool production company produced 1200 more bearings in the second quarter than in the first quarter, and 2800 more bearings in the third quarter than in the second quarter, which is three times that of the first quarter. How many bearings were produced in each quarter",
		"题目：某农具生产公司第二季度比第一季度多生产1200个轴承，第三季度比第二季度多生产2800个轴承又是第一季度的三倍，各季度生产多少轴承"},
		{"1. Calculate the total number of bearings produced, N1=N2 produced in the second quarter+N2 produced in the third quarter",
		"1.计算一共多生产轴承数N1 一共多生产轴承数N1=第二季度多生产的N2+第三季度多生产的N2"},
		{"2. Calculate the number of bearings produced per unit N3=the total number of excess bearings produced N1/(the excess production factor in the third quarter N4- excluding the first quarter N5)",
		"2.计算每份生产轴承数N3 每份生产轴承数N3=一共多生产轴承数N1/(第三季度多生产倍数N4-第一季度除外N5)"},
		{"3. Calculate the number of bearings in the first quarter N5=the number of bearings produced per unit N3 * the multiple of the excess production in the first quarter N6",
		"3.计算第一季度轴承数N5 第一季度轴承数N5=每份生产轴承数N3*第一季度多生产的倍数N6"},
		{"4. Calculate the number of bearings in the second quarter N5. The number of bearings in the second quarter N5 is equal to the number of bearings produced per unit N3 plus the excess N2 produced in the second quarter",
		"4.计算第二季度轴承数N5 第二季度轴承数N5=每份生产轴承数N3+第二季度多生产的N2"},
		{"5. Calculate the number of bearings in the third quarter N5. The number of bearings in the third quarter N5=the number of bearings produced per unit N3+the total number of bearings produced N1",
		"5.计算第三季度轴承数N5 第三季度轴承数N5=每份生产轴承数N3+一共多生产轴承数N1"},
		//变量表
		{"MoreN2producedinthesecondquarter","第二季度多生产的N2"},
		{"MoreN2producedinthethirdquarter","第三季度多生产的N2"},
		{"ThirdquartermultipleproductionN4","第三季度多生产倍数N4"},
		{"ExcludingN5inthefirstquarter","第一季度除外N5"},
		{"MultipleN6producedinthefirstquarter","第一季度多生产的倍数N6"},
		{"AtotalofN1additionalbearingswereproduced","一共多生产轴承数N1"},
		{"NumberofbearingsperproductionN3","每份生产轴承数N3"},
		{"NumberofbearingsinQ1N5","第一季度轴承数N5"},
		{"NumberofbearingsinQ2N5","第二季度轴承数N5"},
		{"NumberofbearingsinQ3N5","第三季度轴承数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第二季度多生产的N2, 1200);
	DefineLangVarInt(第三季度多生产的N2, 2800);
	DefineLangVarInt(第三季度多生产倍数N4, 3);
	DefineLangVarInt(第一季度除外N5, 1);
	DefineLangVarInt(第一季度多生产的倍数N6, 1);
	ColPrintf(PrintfCol::标题, Lang("P78 例三 和差倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：某农具生产公司第二季度比第一季度多生产1200个轴承，第三季度比第二季度多生产2800个轴承又是第一季度的三倍，各季度生产多少轴承"));
	DefineLangVarInt(一共多生产轴承数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共多生产轴承数N1 一共多生产轴承数N1=第二季度多生产的N2+第三季度多生产的N2"));
	一共多生产轴承数N1 = 第二季度多生产的N2 + 第三季度多生产的N2;
	一共多生产轴承数N1.PrintProcessLog(1);
	DefineLangVarInt(每份生产轴承数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每份生产轴承数N3 每份生产轴承数N3=一共多生产轴承数N1/(第三季度多生产倍数N4-第一季度除外N5)"));
	每份生产轴承数N3 = 一共多生产轴承数N1 / (第三季度多生产倍数N4 - 第一季度除外N5);
	每份生产轴承数N3.PrintProcessLog(2);
	DefineLangVarInt(第一季度轴承数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算第一季度轴承数N5 第一季度轴承数N5=每份生产轴承数N3*第一季度多生产的倍数N6"));
	第一季度轴承数N5 = 每份生产轴承数N3 * 第一季度多生产的倍数N6;
	第一季度轴承数N5.PrintProcessLog(3);
	DefineLangVarInt(第二季度轴承数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算第二季度轴承数N5 第二季度轴承数N5=每份生产轴承数N3+第二季度多生产的N2"));
	第二季度轴承数N5 = 每份生产轴承数N3 + 第二季度多生产的N2;
	第二季度轴承数N5.PrintProcessLog(4);
	DefineLangVarInt(第三季度轴承数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算第三季度轴承数N5 第三季度轴承数N5=每份生产轴承数N3+一共多生产轴承数N1"));
	第三季度轴承数N5 = 每份生产轴承数N3 + 一共多生产轴承数N1;
	第三季度轴承数N5.PrintProcessLog(5);
}
void P78_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case 4 sum difference multiple","P78 例四 和差倍数"},
		{"Title: How many books do A and B each have? If A gives B 45 books, the two have the same book list. If B gives A 45 books, A is twice as many as B. How many books did A and B originally have?",
		"题目：甲乙两人各有若干本书，如果甲给乙45本书，两人书目相同，如果乙给甲45本，甲是乙的两倍，甲乙原来各有多少本书?"},
		{"1. Calculate the number of books that A originally had more than B, N1. The number of books that A originally had more than B, N1, is equal to the number of books that A gave B, N2, multiplied by the number of books that B had more than A and less than B, N3",
		"1.计算甲原来比乙多的本数N1 甲原来比乙多的本数N1=甲给乙本书N2*乙多了甲少了的倍数N3"},
		{"2. Calculate the number of books that A has now more than B, N1. The number of books that A has now more than B, N1, is equal to the original number of books that A had more than B, N1, plus the number of books that A gave B, N2, multiplied by the number of books that B had more than A and less than B, N3",
		"2.计算甲现在比乙多的本数N1 甲现在比乙多的本数N1=甲原来比乙多的本数N1+甲给乙本书N2*乙多了甲少了的倍数N3"},
		{"3. Calculate B's current book N4. B's current book N4=the number of books that A has more than B, N1/(multiple N4-smaller number multiplied by larger number N5)",
		"3.计算乙现在的本书N4 乙现在的本书N4=甲现在比乙多的本数N1/(倍数N4-较小的数于较大的数倍数N5)"},
		{"4. Calculate the original B N5=B's current book N4+A gives B a book N2",
		"4.计算原来的乙N5 原来的乙N5=乙现在的本书N4+甲给乙本书N2"},
		{"5. Calculate the original value of A N6, which is equal to the original value of B N5 plus the original number N1 that A has more than B",
		"5.计算原来的甲N6 原来的甲N6=原来的乙N5+甲原来比乙多的本数N1"},
		//变量表
		{"AgivesBabookN2","甲给乙本书N2"},
		{"ThemultipleN3whereBismoreandAisless","乙多了甲少了的倍数N3"},
		{"MultipleN4","倍数N4"},
		{"ThesmallernumberisamultipleofthelargernumberN5","较小的数于较大的数倍数N5"},
		{"AoriginallyhadmoreoriginalnumbersthanB,N1","甲原来比乙多的本数N1"},
		{"AnowhasmorenumbersthanB,N1","甲现在比乙多的本数N1"},
		{"B'scurrentbookN4","乙现在的本书N4"},
		{"TheoriginalBN5","原来的乙N5"},
		{"TheoriginalAN6","原来的甲N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(甲给乙本书N2, 45);
	DefineLangVarInt(乙多了甲少了的倍数N3, 2);
	DefineLangVarInt(倍数N4, 2);
	DefineLangVarInt(较小的数于较大的数倍数N5, 1);
	ColPrintf(PrintfCol::标题, Lang("P78 例四 和差倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙两人各有若干本书，如果甲给乙45本书，两人书目相同，如果乙给甲45本，甲是乙的两倍，甲乙原来各有多少本书?"));
	DefineLangVarInt(甲原来比乙多的本数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算甲原来比乙多的本数N1 甲原来比乙多的本数N1=甲给乙本书N2*乙多了甲少了的倍数N3"));
	甲原来比乙多的本数N1 = 甲给乙本书N2 * 乙多了甲少了的倍数N3;
	甲原来比乙多的本数N1.PrintProcessLog(1);
	DefineLangVarInt(甲现在比乙多的本数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算甲现在比乙多的本数N1 甲现在比乙多的本数N1=甲原来比乙多的本数N1+甲给乙本书N2*乙多了甲少了的倍数N3"));
	甲现在比乙多的本数N1 = 甲原来比乙多的本数N1 + 甲给乙本书N2 * 乙多了甲少了的倍数N3;
	甲现在比乙多的本数N1.PrintProcessLog(2);
	DefineLangVarInt(乙现在的本书N4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算乙现在的本书N4 乙现在的本书N4=甲现在比乙多的本数N1/(倍数N4-较小的数于较大的数倍数N5)"));
	乙现在的本书N4 = 甲现在比乙多的本数N1 / (倍数N4 - 较小的数于较大的数倍数N5);
	乙现在的本书N4.PrintProcessLog(3);
	DefineLangVarInt(原来的乙N5, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算原来的乙N5 原来的乙N5=乙现在的本书N4+甲给乙本书N2"));
	原来的乙N5 = 乙现在的本书N4 + 甲给乙本书N2;
	原来的乙N5.PrintProcessLog(4);
	DefineLangVarInt(原来的甲N6, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算原来的甲N6 原来的甲N6=原来的乙N5+甲原来比乙多的本数N1"));
	原来的甲N6 = 原来的乙N5 + 甲原来比乙多的本数N1;
	原来的甲N6.PrintProcessLog(5);
}
void P78_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case five sum difference multiple","P78 例五 和差倍数"},
		{"Question: In an exam, Xiaoliang's average score in mathematics and Chinese was 93 points, with mathematics being 4 points higher than Chinese. How many points did Xiaoliang score in both Chinese and mathematics",
		"题目：小亮在一次考试中，数学语文的平均分是93分，数学比语文多4分，小亮语文数学各得了多少分"},
		{"1. Calculate the total score N1 of Chinese and Mathematics. The total score N1 of Chinese and Mathematics is equal to the average score N2 multiplied by the total number of courses N3",
		"1.计算语文数学总分N1 语文数学总分N1=平均分N2*一共门数N3"},
		{"2. Calculate the math score N2. Math score N2=(total score of Chinese math N1+score with more math N3)/total number of courses N3",
		"2.计算数学得分N2 数学得分N2=(语文数学总分N1+数学多的分数N3)/一共门数N3"},
		{"3. Calculate the Chinese language score N2, which is equal to the total score of Chinese and mathematics N1 minus the mathematics score N2",
		"3.计算语文得分N2 语文得分N2=语文数学总分N1-数学得分N2"},
		//变量表
		{"AveragescoreN2","平均分N2"},
		{"TotalnumberofdoorsN3","一共门数N3"},
		{"MathscoresN3","数学多的分数N3"},
		{"ChineseandMathematicsTotalScoreN1","语文数学总分N1"},
		{"MathematicsscoreN2","数学得分N2"},
		{"ChinesescoreN2","语文得分N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(平均分N2, 93);
	DefineLangVarInt(一共门数N3, 2);
	DefineLangVarInt(数学多的分数N3, 4);
	ColPrintf(PrintfCol::标题, Lang("P78 例五 和差倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：小亮在一次考试中，数学语文的平均分是93分，数学比语文多4分，小亮语文数学各得了多少分"));
	DefineLangVarInt(语文数学总分N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算语文数学总分N1 语文数学总分N1=平均分N2*一共门数N3"));
	语文数学总分N1 = 平均分N2 * 一共门数N3;
	语文数学总分N1.PrintProcessLog(1);
	DefineLangVarInt(数学得分N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算数学得分N2 数学得分N2=(语文数学总分N1+数学多的分数N3)/一共门数N3"));
	数学得分N2 = (语文数学总分N1 + 数学多的分数N3) / 一共门数N3;
	数学得分N2.PrintProcessLog(2);
	DefineLangVarInt(语文得分N2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算语文得分N2 语文得分N2=语文数学总分N1-数学得分N2"));
	语文得分N2 = 语文数学总分N1 - 数学得分N2;
	语文得分N2.PrintProcessLog(3);
}
void P78_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P78 case six sum difference multiple","P78 例六 和差倍数"},
		{"Title: The sum of the three numbers A, B, C, and C is 120, where the sum of A and B is three times that of C. A is 10 more than B. What are the three numbers?",
		"题目：甲乙丙三数的和是120，其中甲和乙的和是丙的三倍，甲比乙多10，三个数各是多少？"},
		{"1. Calculate the number of C, N1. The number of C is equal to the sum of three numbers, N2 divided by (A/B multiple N3+C multiple N4)",
		"1.计算丙数N1 丙数N1=三个数的总和N2/(甲乙倍数N3+丙倍数N4)"},
		{"2. Calculate the sum of A and B, N2. The sum of A and B is equal to the sum of three numbers, N2 minus the number of C, N1",
		"2.计算甲乙的和N2 甲乙的和N2=三个数的总和N2-丙数N1"},
		{"3. Calculate the number N3 of A=(sum of A and B+difference between A and B N3)/multiplier N5",
		"3.计算甲数N3 甲数N3=(甲乙的和N2+甲乙的差N3)/倍率N5"},
		{"4. Calculate the number of B (N4), which is equal to the sum of A and B (N2) minus the number of A (N3)",
		"4.计算乙数N4 乙数N4=甲乙的和N2-甲数N3"},
		//变量表
		{"ThesumofthreenumbersN2","三个数的总和N2"},
		{"MultipleofAandBN3","甲乙倍数N3"},
		{"CmultipleN4","丙倍数N4"},
		{"DifferencebetweenAandBN3","甲乙的差N3"},
		{"MagnificationN5","倍率N5"},
		{"NumberofCN1","丙数N1"},
		{"AandB,'sandN2","甲乙的和N2"},
		{"ANumberN3","甲数N3"},
		{"BnumberN4","乙数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(三个数的总和N2, 120);
	DefineLangVarInt(甲乙倍数N3, 3);
	DefineLangVarInt(丙倍数N4, 1);
	DefineLangVarInt(甲乙的差N3, 10);
	DefineLangVarInt(倍率N5, 2);
	ColPrintf(PrintfCol::标题, Lang("P78 例六 和差倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙丙三数的和是120，其中甲和乙的和是丙的三倍，甲比乙多10，三个数各是多少？"));
	DefineLangVarInt(丙数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算丙数N1 丙数N1=三个数的总和N2/(甲乙倍数N3+丙倍数N4)"));
	丙数N1 = 三个数的总和N2 / (甲乙倍数N3 + 丙倍数N4);
	丙数N1.PrintProcessLog(1);
	DefineLangVarInt(甲乙的和N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算甲乙的和N2 甲乙的和N2=三个数的总和N2-丙数N1"));
	甲乙的和N2 = 三个数的总和N2 - 丙数N1;
	甲乙的和N2.PrintProcessLog(2);
	DefineLangVarInt(甲数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲数N3 甲数N3=(甲乙的和N2+甲乙的差N3)/倍率N5"));
	甲数N3 = (甲乙的和N2 + 甲乙的差N3) / 倍率N5;
	甲数N3.PrintProcessLog(3);
	DefineLangVarInt(乙数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算乙数N4 乙数N4=甲乙的和N2-甲数N3"));
	乙数N4 = 甲乙的和N2 - 甲数N3;
	乙数N4.PrintProcessLog(4);
}
void P78()
{
	P78_1();
	ColPrintf(PrintfCol::方法, "");
	P78_2();
	ColPrintf(PrintfCol::方法, "");
	P78_3();
	ColPrintf(PrintfCol::方法, "");
	P78_4();
	ColPrintf(PrintfCol::方法, "");
	P78_5();
	ColPrintf(PrintfCol::方法, "");
	P78_6();
	ColPrintf(PrintfCol::方法, "");
}
void P78_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P78();
	Lang.SetCurLanguage(LanguageLib::English);
	P78();
	ColPrintf(PrintfCol::方法, "");

}