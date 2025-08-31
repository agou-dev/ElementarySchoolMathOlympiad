#pragma once
void P73_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example 1 Score Problem","P87 例一 分数问题"},
		{"Title: Jingjing finished reading a book in three days. On the first day, she read 1/4 of the entire book. On the second day, she read the remaining 2/5. On the second day, she read 15 more pages than on the first day. How many pages are there in this book?",
		"题目：晶晶三天看完一本书，第一天看了全书的1/4，第二天看了余下的2/5，第二天比第一天多看15页书，本书共有多少页?"},
		{"1. Calculate the remaining pages N1 of the first day. The remaining pages N1 of the first day=Unit N2- The amount of pages viewed on the first day N3",
		"1.计算第一天剩下的页数N1 第一天剩下的页数N1=单位一N2-第一天看的量N3"},
		{"2. Calculate the remaining pages N2 for the second day. The remaining pages N2 for the second day=the remaining pages N1 for the first day * the amount of views N3 for the second day",
		"2.计算第二天剩下的页数N2 第二天剩下的页数N2=第一天剩下的页数N1*第二天看的量N3"},
		{"3. Calculate the number of pages viewed N2=the remaining pages on the second day N2- the amount viewed on the first day N3",
		"3.计算多看页数N2 多看页数N2=第二天剩下的页数N2-第一天看的量N3"},
		{"4. Calculate the total number of pages N3=integer number of pages viewed more N3/number of pages viewed more N2",
		"4.计算共有页数N3 共有页数N3=整数多看页数N3/多看页数N2"},
		//变量表
		{"Unit1N2","单位一N2"},
		{"Thefirstday'sviewingvolumeN3","第一天看的量N3"},
		{"Thenextday'sviewingvolumeN3","第二天看的量N3"},
		{"ReadmorepagesN3forintegers","整数多看页数N3"},
		{"TheremainingpagesofthefirstdayareN1","第一天剩下的页数N1"},
		{"TheremainingpagesontheseconddayareN2","第二天剩下的页数N2"},
		{"ReadmorepagesN2","多看页数N2"},
		{"TotalpagesN3","共有页数N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(单位一N2, 1,1);
	DefineFractionLangVar(第一天看的量N3, 1,4);
	DefineFractionLangVar(第二天看的量N3, 2,5);
	DefineFractionLangVar(整数多看页数N3, 15,1);
	ColPrintf(PrintfCol::标题, Lang("P87 例一 分数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：晶晶三天看完一本书，第一天看了全书的1/4，第二天看了余下的2/5，第二天比第一天多看15页书，本书共有多少页?"));
	DefineFractionLangVar(第一天剩下的页数N1, 1,1);
	ColPrintf(PrintfCol::方法, Lang("1.计算第一天剩下的页数N1 第一天剩下的页数N1=单位一N2-第一天看的量N3"));
	第一天剩下的页数N1 = 单位一N2 - 第一天看的量N3;
	第一天剩下的页数N1.PrintProcessLog(1);
	DefineFractionLangVar(第二天剩下的页数N2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("2.计算第二天剩下的页数N2 第二天剩下的页数N2=第一天剩下的页数N1*第二天看的量N3"));
	第二天剩下的页数N2 = 第一天剩下的页数N1 * 第二天看的量N3;
	第二天剩下的页数N2.PrintProcessLog(2);
	DefineFractionLangVar(多看页数N2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("3.计算多看页数N2 多看页数N2=第二天剩下的页数N2-第一天看的量N3"));
	多看页数N2 = 第二天剩下的页数N2 - 第一天看的量N3;
	多看页数N2.PrintProcessLog(3);
	DefineFractionLangVar(共有页数N3, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("4.计算共有页数N3 共有页数N3=整数多看页数N3/多看页数N2"));
	共有页数N3 = 整数多看页数N3 / 多看页数N2;
	共有页数N3.PrintProcessLog(4);
}
void P73_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Two Score Problem","P87 例二 分数问题"},
		{"Title: How many cows have 1/4 more heads than sheep, and how many sheep have less heads than cows?",
		"题目：牛的头数比羊的头数多1/4，羊的头数比牛的头数少多少?"},
		{"Let the number of sheep be x",
		"设羊的头数为x,牛的头数则为x+1/4x"},
		{"1. List equation S1 x+1/4x",
		"1.列出式子S1 x+1/4x"},
		{"2. Simplify S1 to obtain S2 1x+1/4x",
		"2.化简S1得到S2 1x+1/4x"},
		{"3. Simplify S2 to obtain S3 (1/4+1) x",
		"3.化简S2得到S3 (1/4+1)x"},
		{"4. Simplify S3 to obtain S4 x+1/4x=5/4x",
		"4.化简S3得到S4 x+1/4x=5/4x"},
		{"5. Using the number of cows as a unit, one (1/4x)/(5/4x)",
		"5.以牛的数量为单位一得到S5 (1/4x)/(5/4x)"},
		{"6. Simplify S5 to obtain S6 1/4/5/4=1/5",
		"6.化简S5得到S6 1/4/5/4=1/5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例二 分数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：牛的头数比羊的头数多1/4，羊的头数比牛的头数少多少?"));
	ColPrintf(PrintfCol::方法, Lang("设羊的头数为x,牛的头数则为x+1/4x"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 x+1/4x"));
	ColPrintf(PrintfCol::方法, Lang("2.化简S1得到S2 1x+1/4x"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 (1/4+1)x"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 x+1/4x=5/4x"));
	ColPrintf(PrintfCol::方法, Lang("5.以牛的数量为单位一得到S5 (1/4x)/(5/4x)"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S5得到S6 1/4/5/4=1/5"));
}
void P73_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Three Score Problem (C as Unit One)","P87 例三 分数问题(丙为单位一)"},
		{"Title: A is 2/3 of B, B is 3/4 of C, and the sum of A, B, and C is 216. What are the values of A, B, and C respectively?",
		"题目：甲数是乙数的2/3，乙是丙的3/4，甲乙丙的和是216，甲乙丙各是多少?"},
		{"1. Calculate the amount of C N1=unit N2",
		"1.计算丙的量N1 丙的量N1=单位一N2"},
		{"2. Calculate the amount of B (N2)=the amount of C (N1) * the ratio of B to C (N2)",
		"2.计算乙的量N2 乙的量N2=丙的量N1*乙对于丙倍数N2"},
		{"3. Calculate the quantity of A N3=the quantity of B N2 * the multiple of A to B N3",
		"3.计算甲的量N3 甲的量N3=乙的量N2*甲对于乙的倍数N3"},
		{"4. Calculate the sum of A, B, and C, N4=the amount of C N1+the amount of B N2+the amount of A N3",
		"4.计算甲乙丙的和N4 甲乙丙的和N4=丙的量N1+乙的量N2+甲的量N3"},
		{"5. Calculate the integer C N5. The integer C N5 is equal to the sum of the integers A, B, and C N5/the sum of A, B, and C N4",
		"5.计算整数丙N5 整数丙N5=整数甲乙丙的和N5/甲乙丙的和N4"},
		{"6. Calculate the integer N2=the quantity of B, N2 * the integer C, N5",
		"6.计算整数乙N2 整数乙N2=乙的量N2*整数丙N5"},
		{"7. Calculate the integer A N6, where the integer A N6 equals the quantity of A N3 multiplied by the integer C N5",
		"7.计算整数甲N6 整数甲N6=甲的量N3*整数丙N5"},
		//变量表
		{"Unit1N2","单位一N2"},
		{"BisamultipleofN2comparedtoC","乙对于丙倍数N2"},
		{"ThemultipleN3ofAtoB","甲对于乙的倍数N3"},
		{"ThesumofintegersA,B,C,andN5","整数甲乙丙的和N5"},
		{"QuantityofCN1","丙的量N1"},
		{"QuantityofBN2","乙的量N2"},
		{"TheamountofAN3","甲的量N3"},
		{"A,B,C,andN4","甲乙丙的和N4"},
		{"IntegerCN5","整数丙N5"},
		{"IntegerBN2","整数乙N2"},
		{"IntegerN6","整数甲N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(单位一N2, 1, 1);
	DefineFractionLangVar(乙对于丙倍数N2, 3, 4);
	DefineFractionLangVar(甲对于乙的倍数N3, 2, 3);
	DefineFractionLangVar(整数甲乙丙的和N5, 216, 1);
	ColPrintf(PrintfCol::标题, Lang("P87 例三 分数问题(丙为单位一)"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲数是乙数的2/3，乙是丙的3/4，甲乙丙的和是216，甲乙丙各是多少?"));
	DefineFractionLangVar(丙的量N1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("1.计算丙的量N1 丙的量N1=单位一N2"));
	丙的量N1 = 单位一N2;
	丙的量N1.PrintProcessLog(1);
	DefineFractionLangVar(乙的量N2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("2.计算乙的量N2 乙的量N2=丙的量N1*乙对于丙倍数N2"));
	乙的量N2 = 丙的量N1 * 乙对于丙倍数N2;
	乙的量N2.PrintProcessLog(2);
	DefineFractionLangVar(甲的量N3, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲的量N3 甲的量N3=乙的量N2*甲对于乙的倍数N3"));
	甲的量N3 = 乙的量N2 * 甲对于乙的倍数N3;
	甲的量N3.PrintProcessLog(3);
	DefineFractionLangVar(甲乙丙的和N4, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("4.计算甲乙丙的和N4 甲乙丙的和N4=丙的量N1+乙的量N2+甲的量N3"));
	甲乙丙的和N4 = 丙的量N1 + 乙的量N2 + 甲的量N3;
	甲乙丙的和N4.PrintProcessLog(4);
	DefineFractionLangVar(整数丙N5, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("5.计算整数丙N5 整数丙N5=整数甲乙丙的和N5/甲乙丙的和N4"));
	整数丙N5 = 整数甲乙丙的和N5 / 甲乙丙的和N4;
	整数丙N5.PrintProcessLog(5);
	DefineFractionLangVar(整数乙N2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("6.计算整数乙N2 整数乙N2=乙的量N2*整数丙N5"));
	整数乙N2 = 乙的量N2 * 整数丙N5;
	整数乙N2.PrintProcessLog(6);
	DefineFractionLangVar(整数甲N6, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("7.计算整数甲N6 整数甲N6=甲的量N3*整数丙N5"));
	整数甲N6 = 甲的量N3 * 整数丙N5;
	整数甲N6.PrintProcessLog(7);
}
void P73_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Four Score Problem","P87 例四 分数问题"},
		{"Title: A, B, C, and D donated to the Hope Project. A donated half of the other three people, B donated one-third of the other three people, C donated one fourth of the total number of the other three people, and D donated 91 yuan. How much did A, B, and D each contribute?",
		"题目：甲乙丙丁向希望工程捐款，甲捐了其他三人的一半，乙捐了另外三人的1/3，丙捐了另外三人总数的1/4，丁捐了91元，求甲乙丙各占多少元?"},
		{"1. Thinking from the perspective of A: Let A be x, 1/2 (total number of donations from three people - x)=x=>1/2 total number of donations from three people -1/2x=x=>1/2 total number of donations from three people=3/2x, so the total number of donations from three people is three times larger than A. Dividing Unit 1 into three parts, A is 1/3",
		"1.站在甲的角度思考：设甲为x，1/2(三人捐的总数-x)=x=>1/2三人捐的总数-1/2x=x=>1/2三人捐的总数=3/2x,所以三人捐的总数比甲大3倍，把单位1分为3份，甲就是1/3"},
		{"2. Thinking from the perspective of B: Let B be x, 1/3 (the total number of donations from three people - x)=x=>1/3, the total number of donations from three people -1/3x=x=>1/3, the total number of donations from three people=4/3x, so the total number of donations from three people is four times larger than A. Dividing Unit 1 into four parts, A is 1/4",
		"2.站在乙的角度思考：设乙为x，1/3(三人捐的总数-x)=x=>1/3三人捐的总数-1/3x=x=>1/3三人捐的总数=4/3x,所以三人捐的总数比乙大4倍，把单位1分为4份，乙就是1/4"},
		{"3. Thinking from the perspective of C: Let C be x, 1/4 (total number of donations from three people - x)=x=>1/4 total number of donations from three people -1/4x=x=>1/4 total number of donations from three people=5/4x, so the total number of donations from three people is 5 times larger than C. Dividing Unit 1 into 5 parts, C is 1/5",
		"3.站在丙的角度思考：设丙为x，1/4(三人捐的总数-x)=x=>1/4三人捐的总数-1/4x=x=>1/4三人捐的总数=5/4x,所以三人捐的总数比丙大5倍，把单位1分为5份，丙就是1/5"},
		{"4. Calculate the total amount of money N1=unit one N2- (the amount of A N3+the amount of B N4+the amount of C N5)",
		"4.计算总共钱数N1 总共钱数N1=单位一N2-(甲的量N3+乙的量N4+丙的量N5)"},
		{"5. Calculate the total amount of money for integers N2=the amount of money donated by C N6/the total amount of money N1",
		"5.计算整数总共钱数N2 整数总共钱数N2=丙捐的钱N6/总共钱数N1"},
		{"6. Calculate the integer N3. The integer N3 is equal to the total amount of money N2 multiplied by the quantity N3 of A",
		"6.计算整数甲N3 整数甲N3=整数总共钱数N2*甲的量N3"},
		{"7. Calculate the integer N4. The integer N4 is equal to the total amount of money N2 multiplied by the quantity N4 of B",
		"7.计算整数乙N4 整数乙N4=整数总共钱数N2*乙的量N4"},
		{"8. Calculate the integer C N5. The integer C N5=the total number of integers N2 * the amount of C N5",
		"8.计算整数丙N5 整数丙N5=整数总共钱数N2*丙的量N5"},
		//变量表
		{"Unit1N2","单位一N2"},
		{"QuantityofBN4","乙的量N4"},
		{"TheamountofCisN5","丙的量N5"},
		{"ThemoneydonatedbyCN6","丙捐的钱N6"},
		{"TheamountofAN3","甲的量N3"},
		{"TotalamountN1","总共钱数N1"},
		{"IntegertotalamountN2","整数总共钱数N2"},
		{"IntegerAN3","整数甲N3"},
		{"IntegerN4","整数乙N4"},
		{"IntegerCN5","整数丙N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(单位一N2, 1, 1);
	DefineFractionLangVar(乙的量N4, 1, 4);
	DefineFractionLangVar(丙的量N5, 1, 5);
	DefineFractionLangVar(丙捐的钱N6, 91, 1);
	DefineFractionLangVar(甲的量N3, 1, 3);
	ColPrintf(PrintfCol::标题, Lang("P87 例四 分数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙丙丁向希望工程捐款，甲捐了其他三人的一半，乙捐了另外三人的1/3，丙捐了另外三人总数的1/4，丁捐了91元，求甲乙丙各占多少元?"));
	ColPrintf(PrintfCol::方法, Lang("1.站在甲的角度思考：设甲为x，1/2(三人捐的总数-x)=x=>1/2三人捐的总数-1/2x=x=>1/2三人捐的总数=3/2x,所以三人捐的总数比甲大3倍，把单位1分为3份，甲就是1/3"));
	ColPrintf(PrintfCol::方法, Lang("2.站在乙的角度思考：设乙为x，1/3(三人捐的总数-x)=x=>1/3三人捐的总数-1/3x=x=>1/3三人捐的总数=4/3x,所以三人捐的总数比乙大4倍，把单位1分为4份，乙就是1/4"));
	ColPrintf(PrintfCol::方法, Lang("3.站在丙的角度思考：设丙为x，1/4(三人捐的总数-x)=x=>1/4三人捐的总数-1/4x=x=>1/4三人捐的总数=5/4x,所以三人捐的总数比丙大5倍，把单位1分为5份，丙就是1/5"));
	DefineFractionLangVar(总共钱数N1, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("4.计算总共钱数N1 总共钱数N1=单位一N2-(甲的量N3+乙的量N4+丙的量N5)"));
	总共钱数N1 = 单位一N2 - (甲的量N3 + 乙的量N4 + 丙的量N5);
	总共钱数N1.PrintProcessLog(4);
	DefineFractionLangVar(整数总共钱数N2, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("5.计算整数总共钱数N2 整数总共钱数N2=丙捐的钱N6/总共钱数N1"));
	整数总共钱数N2 = 丙捐的钱N6 / 总共钱数N1;
	整数总共钱数N2.PrintProcessLog(5);
	DefineFractionLangVar(整数甲N3, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("6.计算整数甲N3 整数甲N3=整数总共钱数N2*甲的量N3"));
	整数甲N3 = 整数总共钱数N2 * 甲的量N3;
	整数甲N3.PrintProcessLog(6);
	DefineFractionLangVar(整数乙N4, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("7.计算整数乙N4 整数乙N4=整数总共钱数N2*乙的量N4"));
	整数乙N4 = 整数总共钱数N2 * 乙的量N4;
	整数乙N4.PrintProcessLog(7);
	DefineFractionLangVar(整数丙N5, 1, 1);
	ColPrintf(PrintfCol::方法, Lang("8.计算整数丙N5 整数丙N5=整数总共钱数N2*丙的量N5"));
	整数丙N5 = 整数总共钱数N2 * 丙的量N5;
	整数丙N5.PrintProcessLog(8);
}
void P73_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Five Score Problem","P87 例五 分数问题"},
		{"Question: Originally, Team B was 3/7 of Team A. Now that 30 people have been sent to Team B, the number of people in Team B is 2/3 of Team A. So, how many people did the two teams have in total?",
		"题目：乙原来是甲队的3/7，现在派出30人到乙队，则乙队的人数是甲队的2/3，那么原来两队共是多少人?"},
		{"1. Because the first condition considers Team A as Unit 1, dividing Team A into seven parts, Team B accounts for three parts, Team A is Unit 1, so it accounts for seven parts, and Team B is the denominator of Team A's Unit 1, so the parts between them can be added up",
		"1.因为第一个条件把甲队看为单位一，把甲队分为七份，乙队占三份，甲队是单位一所以它占7份，乙队是由甲队的单位一作为分母的，所以它们之间的份数是可以相加"},
		{"2. So the two teams account for 10/7, and the next condition is given to the B team with 30 people. The total number of people here should still be 10/7, so the next condition is about 2/3, a total of 5 points. We multiply 2 to become 10 points, and at the same time, the B team becomes 4/6",
		"2.所以两队占10/7，下一个条件给到乙队30人，这里理应总人数还是10/7，那么就是下一个条件约分了，约为2/3，一共5份，我们乘2变成10份，同时变成了乙队变成4/6"},
		{"3. Comparing 4/6 and 3/7, it can be seen that Team B has increased by 1 point, while Team A has decreased by 1 point to 6, which is exactly in line. Therefore, 1 point is 30, and 10 points is 300, so there were originally 300 people",
		"3.我们对比4/6和3/7，可见乙队增加了1份，甲队减少了一份变成6，正好符合，所以一份就是30，10份就是300，所以原来有300人"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例五 分数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：乙原来是甲队的3/7，现在派出30人到乙队，则乙队的人数是甲队的2/3，那么原来两队共是多少人?"));
	ColPrintf(PrintfCol::方法, Lang("1.因为第一个条件把甲队看为单位一，把甲队分为七份，乙队占三份，甲队是单位一所以它占7份，乙队是由甲队的单位一作为分母的，所以它们之间的份数是可以相加"));
	ColPrintf(PrintfCol::方法, Lang("2.所以两队占10/7，下一个条件给到乙队30人，这里理应总人数还是10/7，那么就是下一个条件约分了，约为2/3，一共5份，我们乘2变成10份，同时变成了乙队变成4/6"));
	ColPrintf(PrintfCol::方法, Lang("3.我们对比4/6和3/7，可见乙队增加了1份，甲队减少了一份变成6，正好符合，所以一份就是30，10份就是300，所以原来有300人"));
}
void P73()
{
	P73_1();
	ColPrintf(PrintfCol::方法, "");
	P73_2();
	ColPrintf(PrintfCol::方法, "");
	P73_3();
	ColPrintf(PrintfCol::方法, "");
	P73_4();
	ColPrintf(PrintfCol::方法, "");
	P73_5();
	ColPrintf(PrintfCol::方法, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::方法, "");
	P55_3();
	ColPrintf(PrintfCol::方法, "");*/
}
void P73_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P73();
	Lang.SetCurLanguage(LanguageLib::English);
	P73();
	ColPrintf(PrintfCol::方法, "");

}