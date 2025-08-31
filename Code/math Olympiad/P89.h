#pragma once
void P89_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 case one cycle problem","P89 例一 周期问题"},
		{"Title: May 5th, 2016 is Thursday, what day is May 25th?",
		"题目：2016年的5月5号是星期四，5月25日是星期几?"},
		{"1. Calculate the total number of days passed N1=the number of days ended N2- the number of days started N3",
		"1.计算总过的天数N1 总过的天数N1=结束的天数N2-开始的天数N3"},
		{"2. Calculate the last day N2 of the cycle, which is equal to the total number of days N1% and the number of days N2 in a week",
		"2.计算最后循环到的天N2 最后循环到的天N2=总过的天数N1%一个星期的天数N2"},
		{"3. Since the remainder is% d, it should be the previous number in the next loop, which is Wednesday",
		"3.因为余数是%d，所以它应是下一个循环的前一个数，就是星期三"},
		//变量表
		{"EnddaysN2","结束的天数N2"},
		{"StartingdaysN3","开始的天数N3"},
		{"DaysofaweekN2","一个星期的天数N2"},
		{"TotalnumberofdayspassedN1","总过的天数N1"},
		{"ThelastdaytocycletoN2","最后循环到的天N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(结束的天数N2, 25);
	DefineLangVarInt(开始的天数N3, 5);
	DefineLangVarInt(一个星期的天数N2, 7);
	ColPrintf(PrintfCol::标题, Lang("P89 例一 周期问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：2016年的5月5号是星期四，5月25日是星期几?"));
	DefineLangVarInt(总过的天数N1, 1);
	ColPrintf(PrintfCol::方法, Lang("1.计算总过的天数N1 总过的天数N1=结束的天数N2-开始的天数N3"));
	总过的天数N1 = 结束的天数N2 - 开始的天数N3;
	总过的天数N1.PrintProcessLog(1);
	DefineLangVarInt(最后循环到的天N2, 1);
	ColPrintf(PrintfCol::方法, Lang("2.计算最后循环到的天N2 最后循环到的天N2=总过的天数N1%一个星期的天数N2"));
	最后循环到的天N2 = 总过的天数N1 % 一个星期的天数N2;
	最后循环到的天N2.PrintProcessLog(2);
	ColPrintf(PrintfCol::方法, Lang("3.因为余数是%d，所以它应是下一个循环的前一个数，就是星期三"), 最后循环到的天N2.Var);
}
void P89_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 Case Two Cycle Problem","P89 例二 周期问题"},
		{"Title: Each column in the table has three layers, top, middle, and bottom, combined from top to bottom. For example, the first column M starts from A, the third column M loves C, and what is the 78th column?",
		"题目：下表每列都有上中下三层，从上往下组合，比如第一列M从A，第三列M爱C，第78列是什么?"},
		{"1. Calculate the 78th column N1 in the upper layer, where N1 equals the 78th column N2 divided by the number of cycles per cycle N3 in the upper layer",
		"1.计算上层第78列N1 上层第78列N1=第78列N2/上层每循环数的数量N3"},
		{"2. Calculate the number of cycles per cycle N3 for the 78th column N2 in the middle layer, where N2=% of N2 in the 78th column",
		"2.计算中层第78列N2 中层第78列N2=第78列N2%中层每循环数的数量N3"},
		{"3. Calculate the number of cycles per cycle N3 for the 78th column N2 in the lower layer, where N2 in the 78th column is equal to N2% in the 78th column",
		"3.计算下层第78列N2 下层第78列N2=第78列N2%下层每循环数的数量N3"},
		{"4. Because the upper layer (loop number% d) has no remainder, it is M, the middle layer% d is love according to the loop, and the lower layer% d is B according to the loop. Connecting them together is M love B",
		"4.因为上层(循环数%d)没有余数所以是M，中层%d依照循环是爱,下层%d依照循环是B，连起来是M爱B"},
		//变量表
		{"Column78N2","第78列N2"},
		{"NumberofcyclesperupperlayerN3","上层每循环数的数量N3"},
		{"ThenumberofcyclespermiddlelayerN3","中层每循环数的数量N3"},
		{"NumberofcyclesperlowerlayerN3","下层每循环数的数量N3"},
		{"Upper78thcolumnN1","上层第78列N1"},
		{"Middlecolumn78N2","中层第78列N2"},
		{"Lowercolumn78N2","下层第78列N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第78列N2, 78);
	DefineLangVarInt(上层每循环数的数量N3, 2);
	DefineLangVarInt(中层每循环数的数量N3, 5);
	DefineLangVarInt(下层每循环数的数量N3, 4);
	ColPrintf(PrintfCol::标题, Lang("P89 例二 周期问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：下表每列都有上中下三层，从上往下组合，比如第一列M从A，第三列M爱C，第78列是什么?"));
	const char* pPic =
		"\n"
		"\n"
		"\n"
		"\n"
		"       M   N   M   N   M   N   M   N   M   N   M   N……\n"
		"\n"
		"       从  小  爱  数  学  从  小  爱  数  学  从  小……\n"
		"\n"
		"       A   B   C   D   A   B   C   D   A   B   C   D……\n"
		"\n"
		"\n"
		;
	ColPrintf(PrintfCol::方法, pPic);
	DefineLangVarInt(上层第78列N1, 1);
	ColPrintf(PrintfCol::方法, Lang("1.计算上层第78列N1 上层第78列N1=第78列N2/上层每循环数的数量N3"));
	上层第78列N1 = 第78列N2 / 上层每循环数的数量N3;
	上层第78列N1.PrintProcessLog(1);
	DefineLangVarInt(中层第78列N2, 1);
	ColPrintf(PrintfCol::方法, Lang("2.计算中层第78列N2 中层第78列N2=第78列N2%中层每循环数的数量N3"));
	中层第78列N2 = 第78列N2 % 中层每循环数的数量N3;
	中层第78列N2.PrintProcessLog(2);
	DefineLangVarInt(下层第78列N2, 1);
	ColPrintf(PrintfCol::方法, Lang("3.计算下层第78列N2 下层第78列N2=第78列N2%下层每循环数的数量N3"));
	下层第78列N2 = 第78列N2 % 下层每循环数的数量N3;
	下层第78列N2.PrintProcessLog(3);
	ColPrintf(PrintfCol::方法, Lang("4.因为上层(循环数%d)没有余数所以是M，中层%d依照循环是爱,下层%d依照循环是B，连起来是M爱B"), 上层第78列N1.Var, 中层第78列N2.Var, 下层第78列N2.Var);
}
void P89_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 Case Three Cycle Problem","P89 例三 周期问题"},
		{"Title: What is the 300th digit in the sequence of 1/1, 1/2, 2/2, 1/3, 2/3, 3/3, 1/4... and what is the position of 5/12 in this sequence?",
		"题目：在1/1，1/2，2/2，1/3，2/3，3/3，1/4……这个数列中第300个数字是多少，5/12是在这个数列中的第几个?"},
		{"Here, the denominators increase sequentially, but when increasing, the numerator must be written from 1 to the denominator. Therefore, there are 1 denominator for 1, and 2 denominators for 2",
		"1.在这里分母是依次增加，但增加时，分子必须从1到分母这些数写出来，所以分母为1的，有1个，分母为2的有2个……"},
		{"2. Estimate what the denominator will be after three hundred fractions, as this involves two arithmetic sequences, so we can only estimate. Since it is three hundred, the denominator must be within 30, so (1+20) * 20/2=210, (1+24) * 24/2=300",
		"2.估算在三百个分数后，分母是多少，因为这里涉及两个等差数列，所以我们只能估算，因为是在三百，所以分母必定在30以内，所以(1+20)*20/2=210,(1+24)*24/2=300"},
		{"3. We did not calculate a value that can only be approximated to it, so it has no remainder. The numerator happens to be the denominator, which is 24/24",
		"3.我们没有算出只能与它近似的值，所以它没有余数，分子正好是分母，就是24/24"},
		{"4.5/12, first calculate how many fractions are there before the denominator, (1+11) * 11/2=66",
		"4.5/12，先算分母之前有多少个分数，(1+11)*11/2=66个"},
		{"5.Starting from 11/11, there are 5 denominators with 12, so 5/12 is at the 66th+5th=71st in this sequence",
		"5.从11/11开始，还有5个分母是12的，所以5/12在这个数列的第66+5=71个"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P89 例三 周期问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：在1/1，1/2，2/2，1/3，2/3，3/3，1/4……这个数列中第300个数字是多少，5/12是在这个数列中的第几个?"));
	ColPrintf(PrintfCol::方法, Lang("1.在这里分母是依次增加，但增加时，分子必须从1到分母这些数写出来，所以分母为1的，有1个，分母为2的有2个……"));
	ColPrintf(PrintfCol::方法, Lang("2.估算在三百个分数后，分母是多少，因为这里涉及两个等差数列，所以我们只能估算，因为是在三百，所以分母必定在30以内，所以(1+20)*20/2=210,(1+24)*24/2=300"));
	ColPrintf(PrintfCol::方法, Lang("3.我们没有算出只能与它近似的值，所以它没有余数，分子正好是分母，就是24/24"));
	ColPrintf(PrintfCol::方法, Lang("4.5/12，先算分母之前有多少个分数，(1+11)*11/2=66个"));
	ColPrintf(PrintfCol::方法, Lang("5.从11/11开始，还有5个分母是12的，所以5/12在这个数列的第66+5=71个"));
}
void P89_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 Case Four Cycle Problem","P89 例四 周期问题"},
		{"Question: There is a sequence of 4, 5, 9, 14, 23... What is the remainder of dividing the 2015th number in this sequence by three?",
		"题目：有一数列4，5，9，14，23……这个数列中的第2015个数除以三，余数是多少?"},
		{"1. Through observation, we found that this sequence has no discernible pattern, but we require the remainder of the 2015th number. We don't need to calculate the 2015th number, we just need to calculate the remainder of this sequence",
		"1.我们通过观察发现这个数列没有规律可言，但要求我们第2015的余数，我们不用算第2015个数我们只需要把这个数列的余数算出即可"},
		{"2. Calculate the remainder of all numbers, starting from 4 as 1, 2, 0, 2, 2, 1, 0, 1, 1, 2, 0, 2, 2, 1, 0, 1, 1, 1. 2, 0, 2, 2, 1, 0, 1 is one cycle, there are a total of 8 cycles. The remainder can be calculated directly below",
		"2.计算所有数的余数，从4开始是1，2，0，2，2，1，0，1，1，2，0，2，2，1，0，1，1。2，0，2，2，1，0，1是一个周期，共有8个，下面直接用余数算就可以"},
		{"3. Calculate the remainder N1 from the loop of the number 2015th. The remainder N1 from the loop of the number 2015th=2015N2/trin3",
		"3.计算第2015这个数循环到的余数N1 第2015这个数循环到的余数N1=第2015N2/三N3"},
		//变量表
		{"The2015N2","第2015N2"},
		{"ThreeN3","三N3"},
		{"TheremainderN1ofthe2015cycleofthisnumber","第2015这个数循环到的余数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(第2015N2, 2015);
	DefineLangVarInt(三N3, 3);
	ColPrintf(PrintfCol::标题, Lang("P89 例四 周期问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一数列4，5，9，14，23……这个数列中的第2015个数除以三，余数是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.我们通过观察发现这个数列没有规律可言，但要求我们第2015的余数，我们不用算第2015个数我们只需要把这个数列的余数算出即可"));
	ColPrintf(PrintfCol::方法, Lang("2.计算所有数的余数，从4开始是1，2，0，2，2，1，0，1，1，2，0，2，2，1，0，1，1。2，0，2，2，1，0，1是一个周期，共有8个，下面直接用余数算就可以"));
	DefineLangVarInt(第2015这个数循环到的余数N1, 1);
	ColPrintf(PrintfCol::方法, Lang("3.计算第2015这个数循环到的余数N1 第2015这个数循环到的余数N1=第2015N2/三N3"));
	第2015这个数循环到的余数N1 = 第2015N2 / 三N3;
	第2015这个数循环到的余数N1.PrintProcessLog(3);
}
void P89_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P89 Case Five Cycle Problem","P89 例五 周期问题"},
		{"Title: Arrange natural numbers in the following order, so that 60 is in which row and column",
		"题目：将自然数用下面排列，这样60在第几行第几列"},
		{"1. Since it increases diagonally, we can first calculate how many diagonal lines there are, but we cannot make this number greater than 60. If n is the number of rows, then 60>=(1+n) * n/2.",
		"1.因为是斜着增加的我们可以先计算有几条斜线，但不能使这个数大于60，n是行数，那么60>=(1+n)*n/2。"},
		{"2. Estimation, because the latter is divided by 2, (1+n) * n must reach 100 to 120 to be closest, so we start from a maximum of 12 * 11=132, which is not possible. If it is 10, 11 * 10=110, and finally it is 55",
		"2.估算，因为后面除以2，所以(1+n)*n必须达到100到120才最接近，所以我们从最大12*11=132,不行，如果是10，11*10=110，最后是55"},
		{"3. The above calculation is equivalent to the group in the periodic problem, because there is a remainder, the remainder is 60-55=5, so 5 numbers must be added to reach the next diagonal line 11",
		"3.上面算的就相当于周期问题中的组，因为有余数，余数是60-55=5，所以必须上加上5个数，就到下一个斜线11"},
		{"4. Because it is only a diagonal line, the coordinates of the diagonal line are offset from those of the vertical line. Adding one more diagonal line results in an offset of one. Therefore, subtracting 5 from 11 yields the previous row and column, which are 5. However, since the row is the previous one, 1 needs to be added, resulting in the 7th row and 5th column",
		"4.因为它只是斜线，斜线它的坐标和竖线的坐标是有偏移，只有这个斜线多加一个，就偏移一个，所以这个11要减去5，得到上一个的行，列是5，但行是上一个所以要加上1，所以第7行，5列"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P89 例五 周期问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：将自然数用下面排列，这样60在第几行第几列"));
	const char* pPic =
		"1     2     6     7     15     16……\n"
		"\n"
		"3     5     8     14……\n"
		"\n"
		"4     9     13……\n"
		"\n"
		"10    12……\n"
		"\n"
		"11……\n"
		"\n"
		;
	ColPrintf(PrintfCol::方法, pPic);
	ColPrintf(PrintfCol::方法, Lang("1.因为是斜着增加的我们可以先计算有几条斜线，但不能使这个数大于60，n是行数，那么60>=(1+n)*n/2。"));
	ColPrintf(PrintfCol::方法, Lang("2.估算，因为后面除以2，所以(1+n)*n必须达到100到120才最接近，所以我们从最大12*11=132,不行，如果是10，11*10=110，最后是55"));
	ColPrintf(PrintfCol::方法, Lang("3.上面算的就相当于周期问题中的组，因为有余数，余数是60-55=5，所以必须上加上5个数，就到下一个斜线11"));
	ColPrintf(PrintfCol::方法, Lang("4.因为它只是斜线，斜线它的坐标和竖线的坐标是有偏移，只有这个斜线多加一个，就偏移一个，所以这个11要减去5，得到上一个的行，列是5，但行是上一个所以要加上1，所以第7行，5列"));
}
void P89()
{
	P89_1();
	ColPrintf(PrintfCol::方法, "");
	P89_2();
	ColPrintf(PrintfCol::方法, "");
	P89_3();
	ColPrintf(PrintfCol::方法, "");
	P89_4();
	ColPrintf(PrintfCol::方法, "");
	P89_5();
	ColPrintf(PrintfCol::方法, "");
	//P73_2();
	ColPrintf(PrintfCol::方法, "");
	//P73_3();
	ColPrintf(PrintfCol::方法, "");
	//P73_4();
	ColPrintf(PrintfCol::方法, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::方法, "");
	P55_3();
	ColPrintf(PrintfCol::方法, "");*/
}
void P89_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P89();
	Lang.SetCurLanguage(LanguageLib::English);
	P89();
	ColPrintf(PrintfCol::方法, "");

}