#pragma once
void P82_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 1 Logical Reasoning","P81 例一 逻辑推理"},
		{"Title: Red Mom Frying Fish. It is known that washing and cutting fish takes 3 minutes, washing takes 2 minutes, boiling oil takes 5 minutes, frying fish takes 8 minutes, and cutting ginger takes 1 minute. How to complete it in the shortest possible time",
		"题目：红红的妈妈煎鱼。已知洗鱼切鱼要3分钟，洗过要2分钟，把油烧热要5分钟，煎鱼要8分钟，切姜要一分钟，如何用最短时间做完"},
		{"1. You can first take a look at what you can do and do other things, which maximizes the use of time",
		"1.可以先看一看那些做的事中可以做别的事，这样最大限度的利用了时间"},
		{"2. First, wash the pot, because washing the pot is done by oneself, so it cannot stack events and takes 2 minutes. Then, heat up the oil, because it is waiting, so you can also wash fish, cut fish, cut ginger, and finally fry fish for 8 minutes",
		"2.先洗锅，因为洗锅是是自己要动手的，所以不能叠加事件要用2分钟，然后把油烧热，因为这时是等待的，所以还可以洗鱼切鱼，切姜，最后煎鱼要8分钟"},
		{"3. Calculate the time for washing the pot+cooking time+cutting fish time=2+5+8=15 minutes, so the shortest time is 15 minutes",
		"3.计算时间 洗锅的时间+烧油的时间+切鱼的时间=2+5+8=15分钟，所以最短时间要15分钟"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例一 逻辑推理"));
	ColPrintf(PrintfCol::标题, Lang("题目：红红的妈妈煎鱼。已知洗鱼切鱼要3分钟，洗过要2分钟，把油烧热要5分钟，煎鱼要8分钟，切姜要一分钟，如何用最短时间做完"));
	ColPrintf(PrintfCol::方法, Lang("1.可以先看一看那些做的事中可以做别的事，这样最大限度的利用了时间"));
	ColPrintf(PrintfCol::方法, Lang("2.先洗锅，因为洗锅是是自己要动手的，所以不能叠加事件要用2分钟，然后把油烧热，因为这时是等待的，所以还可以洗鱼切鱼，切姜，最后煎鱼要8分钟"));
	ColPrintf(PrintfCol::方法, Lang("3.计算时间 洗锅的时间+烧油的时间+切鱼的时间=2+5+8=15分钟，所以最短时间要15分钟"));
}
void P82_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 2 Logical Reasoning","P81 例二 逻辑推理"},
		{"Title: A, B, C, D water queue, A5 minutes full, B4 minutes full, C2 minutes full.D1 minutes full. How to arrange A, B, C, and D in the shortest possible time when D2 minutes are full?",
		"题目：A，B，C，D接水排队，A5分钟接满，B4分钟接满，C2分钟接满。D1分钟接满，A，B，C，D如何排列所用的时间最短?"},
		{"1. The shortest time can be determined based on the time of straight and reverse alignment",
		"1.可以按照正着排和倒着排的时间来确定最短时间"},
		{"2. During the scheduled time, A first receives water for 5 minutes without any waiting time, totaling 5 minutes. B receives water for 4 minutes, and the waiting time is the sum of A's waiting time and A's receiving time, totaling 9 minutes",
		"2.正着排所用的时间 A先接水，接水时间5分钟，没有等待的时间，总计5分钟，B接水，接水时间4分钟，等待的时间就是A等待的时间加A接水的时间就是5分钟，总计9分钟"},
		{"3. C receives water for 2 minutes, and the waiting time is the sum of B's waiting time and B's receiving time, totaling 11 minutes. D receives water for 1 minute, and the waiting time is the sum of C's waiting time and C's receiving time, totaling 12 minutes",
		"3.C接水，接水时间2分钟，等待的时间就是B等待的时间加B接水的时间就是9分钟，总计11分钟，D接水，接水时间1分钟，等待的时间就是C等待的时间加C接水的时间就是11分钟，总计12分钟"},
		{"4. A total of 5+9+11+12=37 was used",
		"4.一共用了5+9+11+12=37"},
		{"5. Row in reverse, D receives water for 1 minute without waiting time, totaling 1 minute. C receives water for 2 minutes, and the waiting time is equal to D's waiting time plus D's receiving time, totaling 3 minutes",
		"5.倒着排，D接水，接水时间1分钟，没有等待的时间，总计1分钟，.C接水，接水时间2分钟，等待的时间就是D等待的时间加D接水的时间就是1分钟，总计3分钟"},
		{"6. B receives water for 4 minutes, and the waiting time is equal to C's waiting time plus C's receiving time, which is 3 minutes, for a total of 7 minutes",
		"6.B接水，接水时间4分钟，等待的时间就是C等待的时间加C接水的时间就是3分钟，总计7分钟,A接水，接水时间5分钟，等待的时间就是B等待的时间加B接水的时间就是7分钟，总计12分钟"},
		{"7. It took a total of 23 minutes, so the reverse arrangement method is better because the people in front had less time, so the people behind had less waiting time. They took a long time to take over, but the few people behind were naturally waiting faster",
		"7.一共用了23分钟，所以倒着排方法更优，因为前面的人时间少，所以后面的人等的时间少，而他们接的时间很长，但后面很少的人在等自然所用的时间就快"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例二 逻辑推理"));
	ColPrintf(PrintfCol::标题, Lang("题目：A，B，C，D接水排队，A5分钟接满，B4分钟接满，C2分钟接满。D1分钟接满，A，B，C，D如何排列所用的时间最短?"));
	ColPrintf(PrintfCol::方法, Lang("1.可以按照正着排和倒着排的时间来确定最短时间"));
	ColPrintf(PrintfCol::方法, Lang("2.正着排所用的时间 A先接水，接水时间5分钟，没有等待的时间，总计5分钟，B接水，接水时间4分钟，等待的时间就是A等待的时间加A接水的时间就是5分钟，总计9分钟"));
	ColPrintf(PrintfCol::方法, Lang("3.C接水，接水时间2分钟，等待的时间就是B等待的时间加B接水的时间就是9分钟，总计11分钟，D接水，接水时间1分钟，等待的时间就是C等待的时间加C接水的时间就是11分钟，总计12分钟"));
	ColPrintf(PrintfCol::方法, Lang("4.一共用了5+9+11+12=37"));
	ColPrintf(PrintfCol::方法, Lang("5.倒着排，D接水，接水时间1分钟，没有等待的时间，总计1分钟，.C接水，接水时间2分钟，等待的时间就是D等待的时间加D接水的时间就是1分钟，总计3分钟"));
	ColPrintf(PrintfCol::方法, Lang("6.B接水，接水时间4分钟，等待的时间就是C等待的时间加C接水的时间就是3分钟，总计7分钟,A接水，接水时间5分钟，等待的时间就是B等待的时间加B接水的时间就是7分钟，总计12分钟"));
	ColPrintf(PrintfCol::方法, Lang("7.一共用了23分钟，所以倒着排方法更优，因为前面的人时间少，所以后面的人等的时间少，而他们接的时间很长，但后面很少的人在等自然所用的时间就快"));
}
void P82_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example Three Logical Reasoning","P81 例三 逻辑推理"},
		{"Title: There is a pile of chess pieces with 2002 pieces. A and B take turns to take the pieces. As long as the player who removes the last piece wins, each person can only take 1 to 7 pieces. To make A win, how should they take them",
		"题目：有一堆棋子有2002粒，甲乙两人轮流拿棋子，只要谁拿掉最后一个棋子者获胜，每人只能拿1到7颗棋子，要使甲必赢，要怎样拿"},
		{"1. The final number of chess pieces can only be 8, because when B takes it, even if they only take one piece of armor, they can still take seven pieces, and B will not take all seven pieces",
		"1.最后的棋子数只能是8粒，因为当乙拿的时候即使只拿一粒甲也可以拿七粒，乙拿7粒也不会全部拿来"},
		{"2. In order for A to win, A must first make a strong move and adjust 2002 to a multiple of 8. After that, no matter how B wins, the sum of A's and B's must be 8.",
		"2.要使甲获胜，甲必须先下手为强，把2002调至8的倍数，之后不管乙怎样拿，甲拿的和乙拿的的和必须是8。"},
		{"3. First of all, 2002 is not a multiple of 8, so 2002/8=250... 2. The remaining numbers are the quantity that A needs to take, which is also the number adjusted to 2002. After adjusting, B starts taking, for example, B takes a, 1<a<7, and then A needs to take 8-a, so that the final number is 8",
		"3.首先2002不是8的倍数，所以2002/8=250……2，余下的数就是甲要拿的数量，也是调2002的数，调好后，乙开始拿，比如乙拿a个，1<a<7，然后甲就要拿8-a个，这样才能使最后是8粒"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例三 逻辑推理"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一堆棋子有2002粒，甲乙两人轮流拿棋子，只要谁拿掉最后一个棋子者获胜，每人只能拿1到7颗棋子，要使甲必赢，要怎样拿"));
	ColPrintf(PrintfCol::方法, Lang("1.最后的棋子数只能是8粒，因为当乙拿的时候即使只拿一粒甲也可以拿七粒，乙拿7粒也不会全部拿来"));
	ColPrintf(PrintfCol::方法, Lang("2.要使甲获胜，甲必须先下手为强，把2002调至8的倍数，之后不管乙怎样拿，甲拿的和乙拿的的和必须是8。"));
	ColPrintf(PrintfCol::方法, Lang("3.首先2002不是8的倍数，所以2002/8=250……2，余下的数就是甲要拿的数量，也是调2002的数，调好后，乙开始拿，比如乙拿a个，1<a<7，然后甲就要拿8-a个，这样才能使最后是8粒"));
}
void P82_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example Four Logical Reasoning","P81 例四 逻辑推理"},
		{"Title: The school has decided to purchase coal in early autumn. Normally, 15 tons of coal are consumed in winter. If the winter is relatively warm, 10 tons of coal are needed, and if it is cold, 20 tons are needed. The prices are 100 yuan per ton, 150 yuan per ton, and 200 yuan per ton, respectively",
		"题目：学校决定在初秋购买煤，正常冬季要消耗15吨的煤，如果冬季比较暖和要10吨煤，如果寒冷要20吨，价格分别为100元一吨，150元一吨，200元一吨"},
		{"There are three options: one is to purchase 10 tons of coal, the other is to purchase 15 tons of coal, and the third is to purchase 20 tons of coalWe all know that buying things when they are cheap is the most cost-effective, and the more they are, the more cost-effective they are",
		"1.可以有三种方案，一种是购10吨煤，二是购15吨煤，三是购20吨煤，我们把三个都试一遍，我们都知道，东西便宜时买是最划算的，愈多越划算"},
		{"2. The first option is to purchase 100 * 10=1000 yuan during warm winter, and 200 * 10=2000 yuan during cold winter. Normally, it would cost 5 * 150=750 yuan, so it would cost 3000 yuan",
		"2.第一种方案，暖冬时要100*10=1000，而寒冬时还要采购200*10=2000元，正常要5*150=750元所以要3000"},
		{"3. The second option is to spend 1500 yuan (100 * 15) in warm winter, waste 500 yuan (5 * 100=500) in warm winter, and 1000 yuan (5 * 200=1000) in cold winter, at least 3000 yuan",
		"3.第二种，暖冬时要100*15=1500，暖冬浪费5*100=500，还要再进5吨煤，至少要2500元"},
		{"4. The third option is to spend 100 * 20=2000 yuan in warm winter, 500 yuan in normal conditions, and 1000 yuan in cold winter, which costs 2000 yuan",
		"4.第3种，暖冬时要100*20=2000元，正常时浪费500元，寒冬浪费1000元，要2000元"},
		{"Therefore, the best option is to purchase 2000 yuan during the warm winter season",
		"5.所以在暖冬时采购2000元的方案最佳"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例四 逻辑推理"));
	ColPrintf(PrintfCol::标题, Lang("题目：学校决定在初秋购买煤，正常冬季要消耗15吨的煤，如果冬季比较暖和要10吨煤，如果寒冷要20吨，价格分别为100元一吨，150元一吨，200元一吨"));
	ColPrintf(PrintfCol::方法, Lang("1.可以有三种方案，一种是购10吨煤，二是购15吨煤，三是购20吨煤，我们把三个都试一遍，我们都知道，东西便宜时买是最划算的，愈多越划算"));
	ColPrintf(PrintfCol::方法, Lang("2.第一种方案，暖冬时要100*10=1000，而寒冬时还要采购200*10=2000元，正常要5*150=750元所以要3000"));
	ColPrintf(PrintfCol::方法, Lang("3.第二种，暖冬时要100*15=1500，暖冬浪费5*100=500，还要再进5吨煤，至少要2500元"));
	ColPrintf(PrintfCol::方法, Lang("4.第3种，暖冬时要100*20=2000元，正常时浪费500元，寒冬浪费1000元，要2000元"));
	ColPrintf(PrintfCol::方法, Lang("5.所以在暖冬时采购2000元的方案最佳"));
}
void P82_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 5 Logical Reasoning","P81 例五 逻辑推理"},
		{"Title: A certain product number is a three digit number, and there are several three digit numbers below: 874，765，123，364，925, where one of the three digit numbers is a digit of this code. So, what is this code",
		"题目：某商品编号是一个三位数，下面有这几个三位数：874，765，123，364，925，其中每一个三位数中的某一位都是这个编码的一个位，那么这个编码是多少"},
		{"1. There are a total of 3, 4, and 5 possible bits. Assuming that 3 in 123 is the bit of this encoding, then 1 is not a hundred bit, 2 is not a ten bit, 2 is not a ten bit, 5 is not a single bit, so 9 is a hundred bit. Therefore, 874765364 needs to be excluded, so this solution is excluded",
		"1.，一共有3，4，5这几个可能的个位，我们假设123中的3就是这个编码的个位，那么1就不是百位，2就不是十位，2不是十位，5不是个位所以9就是百位，就要排除874，765，364就被排除了，所以这一个方案排除"},
		{"2. The second option, where the individual digit is 5, the hundredth digit is 9, and the tenth digit is 2, is excluded. The result is the same as the previous option, so this option is excluded",
		"2.第二个方案，个位是5，百位是九的被排除，十位是2的被排除，结果和上一个方案一样，所以这个方案排除"},
		{"3. The third option is that the individual digit is 4, the hundreds digit is not 3 or 8, and the tens digit is not 6 or 7, so only 2 can be selected for the tens digit and 7 can be selected for the hundreds digit. Therefore, the answer is 724",
		"3.第三个方案，个位是4，百位不是3和8，十位不是6和7，所以十位只能选2，百位只能选7，所以答案是724"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例五 逻辑推理"));
	ColPrintf(PrintfCol::标题, Lang("题目：某商品编号是一个三位数，下面有这几个三位数：874，765，123，364，925，其中每一个三位数中的某一位都是这个编码的一个位，那么这个编码是多少"));
	ColPrintf(PrintfCol::方法, Lang("1.，一共有3，4，5这几个可能的个位，我们假设123中的3就是这个编码的个位，那么1就不是百位，2就不是十位，2不是十位，5不是个位所以9就是百位，就要排除874，765，364就被排除了，所以这一个方案排除"));
	ColPrintf(PrintfCol::方法, Lang("2.第二个方案，个位是5，百位是九的被排除，十位是2的被排除，结果和上一个方案一样，所以这个方案排除"));
	ColPrintf(PrintfCol::方法, Lang("3.第三个方案，个位是4，百位不是3和8，十位不是6和7，所以十位只能选2，百位只能选7，所以答案是724"));
}
void P82()
{
	P82_1();
	ColPrintf(PrintfCol::方法, "");
	P82_2();
	ColPrintf(PrintfCol::方法, "");
	P82_3();
	ColPrintf(PrintfCol::方法, "");
	P82_4();
	ColPrintf(PrintfCol::方法, "");
	P82_5();
	ColPrintf(PrintfCol::方法, "");
	//P80_3_2();
	ColPrintf(PrintfCol::方法, "");
	//P80_4();
	ColPrintf(PrintfCol::方法, "");
	//P66_2();
	ColPrintf(PrintfCol::方法, "");
	//P66_3();
	ColPrintf(PrintfCol::方法, "");
	//P66_4();
	ColPrintf(PrintfCol::方法, "");
	//P77_5();
	ColPrintf(PrintfCol::方法, "");
}
void P82_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P82();
	Lang.SetCurLanguage(LanguageLib::English);
	P82();
	ColPrintf(PrintfCol::方法, "");

}