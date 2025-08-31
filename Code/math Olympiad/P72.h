#pragma once
void P72_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 case one drawer problem","P87 例一 抽屉问题"},
		{"Title: There are 13 students in the first group of the study class, and at least two of them were born in the same month. Can you prove it?",
		"题目：学习班第一小组有13个学生，他们至少有两个同一个月生的，你能证明吗?"},
		{"1. Because there are 12 months each year, but they have 13 people, even with the minimum probability of one person being born in the same month, there is still one person left, which proves that there are at least two people born in the same month no matter where they are assigned",
		"1.因为每年有12个月，他们却有13个人，所以即使是最小概率一个人一个月，还是有剩余一个人，这个人无论分到哪里，都证明了至少有两个同一个月生的"},
		{"2. The formula proves that 13/12=1... 1, 1+1=2",
		"2.算式证明 13/12=1……1，1+1=2"},
		{"So this idea is correct",
		"3.所以这个设想是正确的"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例一 抽屉问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：学习班第一小组有13个学生，他们至少有两个同一个月生的，你能证明吗?"));
	ColPrintf(PrintfCol::方法, Lang("1.因为每年有12个月，他们却有13个人，所以即使是最小概率一个人一个月，还是有剩余一个人，这个人无论分到哪里，都证明了至少有两个同一个月生的"));
	ColPrintf(PrintfCol::方法, Lang("2.算式证明 13/12=1……1，1+1=2‌"));
	ColPrintf(PrintfCol::方法, Lang("3.所以这个设想是正确的"));
}
void P72_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Case 2 Drawer Problem","P87 例二 抽屉问题"},
		{"Title: Choose any 8 natural numbers, and there must be 2 of them whose difference is a multiple of 7",
		"题目：任取8个自然数，其中必定有2个，它们的差是7的倍数"},
		{"1. Because the difference we are looking for is a multiple of 7, this means that if a and b have the same remainder, otherwise subtraction has a remainder and cannot be divided by 7",
		"1.因为我们要找的差是7的倍数，这就意味着如果a，b，它们的余数相同，不然相减是有余数的，不能被7整除"},
		{"2. Because the remainder is definitely smaller than 1, it has a total of 7 numbers: 0, 1, 2, 3, 4, 5, 6, which means 7 baskets or 7 drawers",
		"2.因为余数肯定比1小，所以它一共有0，1，2，3，4，5，6共7个数，就是7个篮子，或7个抽屉"},
		{"3. Since there are 7 drawers and 8 natural numbers are selected, each drawer has a natural number, and the last number is placed in the drawer that already has a natural number",
		"3.因为有7个抽屉选8个自然数，那么每个抽屉都有一个自然数，最后一个数放在已经有一个自然数的抽屉里"},
		{"4. Formula proof: 8/7=1... 1, 1+1=2",
		"4.算式证明 8/7=1……1，1+1=2"},
		{"5.So this idea is correct",
		"5.所以这个设想是正确的"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例二 抽屉问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：任取8个自然数，其中必定有2个，它们的差是7的倍数"));
	ColPrintf(PrintfCol::方法, Lang("1.因为我们要找的差是7的倍数，这就意味着如果a，b，它们的余数相同，不然相减是有余数的，不能被7整除"));
	ColPrintf(PrintfCol::方法, Lang("2.因为余数肯定比1小，所以它一共有0，1，2，3，4，5，6共7个数，就是7个篮子，或7个抽屉‌"));
	ColPrintf(PrintfCol::方法, Lang("3.因为有7个抽屉选8个自然数，那么每个抽屉都有一个自然数，最后一个数放在已经有一个自然数的抽屉里"));
	ColPrintf(PrintfCol::方法, Lang("4.算式证明 8/7=1……1，1+1=2"));
	ColPrintf(PrintfCol::方法, Lang("5.所以这个设想是正确的"));
}
void P72_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Case Three Drawer Problem","P87 例三 抽屉问题"},
		{"Title: There are 15 pills of red, yellow, blue, and green in the bag. Close your eyes and take five pills. How many times do you need to touch them?",
		"题目：袋子里有红黄蓝绿各15粒，闭上眼睛拿五粒，至少要多少粒，才能摸到?"},
		{"1. Because it is at least, and we need to ensure that we touch it, we have to prepare for the worst, which is necessary and there is no such thing as luck.",
		"1.因为是至少，而且需要保证摸到，所以我们得做好最坏的打算，这是必须，没有什么运气之说。"},
		{"2. If there are always one red, one yellow, one blue, and one green each time, this is the worst-case scenario and can happen without luck. It is inevitable.",
		"2.如果每次都是红黄蓝绿各一个，这是最坏的打算，也是没有运气都可以，是必然的。"},
		{"3. If that's the case, then four pills each time. By the fourth time, 16 pills of 4 * 4 have already been taken. There was also one pill, so there were only 5 pills. Therefore, 16+1=17 pills",
		"3.如果是这样那么每次四粒，到第四次时，已经取了4*4=16个，还有一次是1粒的，就5粒了，所以16+1=17粒"},
		{"So at least 17 pills need to be touched to reach them",
		"4.所以最少要摸17粒才能摸到"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例三 抽屉问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：袋子里有红黄蓝绿各15粒，闭上眼睛拿五粒，至少要多少粒，才能摸到?"));
	ColPrintf(PrintfCol::方法, Lang("1.因为是至少，而且需要保证摸到，所以我们得做好最坏的打算，这是必须，没有什么运气之说。"));
	ColPrintf(PrintfCol::方法, Lang("2.如果每次都是红黄蓝绿各一个，这是最坏的打算，也是没有运气都可以，是必然的。"));
	ColPrintf(PrintfCol::方法, Lang("3.如果是这样那么每次四粒，到第四次时，已经取了4*4=16个，还有一次是1粒的，就5粒了，所以16+1=17粒"));
	ColPrintf(PrintfCol::方法, Lang("4.所以最少要摸17粒才能摸到"));
}
void P72_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Case Four Drawer Problem","P87 例四 抽屉问题"},
		{"Title: 48 students, election team leader, A has 13 votes, B has 10 votes, C has 7 votes. How many more votes are needed to make A elected?",
		"题目：48名同学，选举队长，甲是13票，乙是10票，丙得7票，要使甲当选，至少还需要多少票?"},
		{"1. Because the closest vote to A is B, we need to consider B, regardless of how many votes C receives, because B poses the greatest threat",
		"1.因为离甲票数最近的是乙，所以我们需要考虑的是乙，不管丙多少票，因为乙的威胁最大"},
		{"So the first thing to determine is how many votes are still available, and only by calculating how many votes are left can we allocate votes to A and B? 48-13-10-7 is 18 votes",
		"2.所以最先要确定还有多少票可选，只有算出还有多少票才可以给甲乙分配票数 48-13-10-7就是18票"},
		{"3. We allocated 18/2 votes to each of Party A and Party B. After allocation, Party A received 22 votes, while Party B received 19 votes. Is there still a difference of 3 votes",
		"3.我们给甲乙各分配18/2票 甲分配后就是22票，乙分配就是19票，还是差3票"},
		{"4. Because it is the minimum, a difference of three is not the minimum, and a difference of one is required. Therefore, if A withdraws one vote and B adds one vote, it will result in 21 A votes and 20 B votes",
		"4.因为是最少，它们相差三不是至少，要相差一才可以，所以甲退一票，乙要增一票就是21张甲票，20张乙票"},
		{"5. Therefore, at least 8 sheets (21-13) need to be allocated",
		"5.所以至少需要分配21-13=8张"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P87 例四 抽屉问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：48名同学，选举队长，甲是13票，乙是10票，丙得7票，要使甲当选，至少还需要多少票?"));
	ColPrintf(PrintfCol::方法, Lang("1.因为离甲票数最近的是乙，所以我们需要考虑的是乙，不管丙多少票，因为乙的威胁最大"));
	ColPrintf(PrintfCol::方法, Lang("2.所以最先要确定还有多少票可选，只有算出还有多少票才可以给甲乙分配票数 48-13-10-7就是18票"));
	ColPrintf(PrintfCol::方法, Lang("3.我们给甲乙各分配18/2票 甲分配后就是22票，乙分配就是19票，还是差3票"));
	ColPrintf(PrintfCol::方法, Lang("4.因为是最少，它们相差三不是至少，要相差一才可以，所以甲退一票，乙要增一票就是21张甲票，20张乙票"));
	ColPrintf(PrintfCol::方法, Lang("5.所以至少需要分配21-13=8张"));
}
void P72_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Case Five Drawer Problem","P87 例五 抽屉问题"},
		{"Title: Take out two trump cards from the deck and draw the remaining cards freely",
		"题目：牌中取出两张王牌，剩下自由抽牌，抽18张牌，多少张同花色，抽20张牌，多少张同数字"},
		{"1. Calculate the total number of cards that can form an average, N1. The total number of cards that can form an average, N1, is equal to drawing 18 cards, N2, divided by the total number of different suits, N3",
		"1.计算一共可以组成平均的牌数N1 一共可以组成平均的牌数N1=抽18张牌N2/共有的不同花色数N3"},
		{"2. Calculate the number of cards in the same suit N1=the total average number of cards that can be composed N1+the remaining number N3",
		"2.计算同花色张数N1 同花色张数N1=一共可以组成平均的牌数N1+余下张数N3"},
		{"3. Calculate the total number of cards that can form an average of the same number, N1. The total number of cards that can form an average of the same number, N1, is equal to drawing 20 cards, N2, divided by the total number of different numbers, N3",
		"3.计算一共可以组成平均的同数字牌数N1 一共可以组成平均的同数字牌数N1=抽20张牌N2/共有的不同数字数N3"},
		{"4. Calculate the number of same number cards N1=the total number of same number cards N1 that can form an average+the remaining number N3",
		"4.计算同数字张数N1 同数字张数N1=一共可以组成平均的同数字牌数N1+余下张数N3"},
		//变量表
		{"Draw18cardsN2","抽18张牌N2"},
		{"CommonnumberofdifferentcolorsN3","共有的不同花色数N3"},
		{"RemainingnumberN3","余下张数N3"},
		{"Draw20cardsN2","抽20张牌N2"},
		{"CommonNumberN3","共有的不同数字数N3"},
		{"AtotalofN1averagecardscanbeformed","一共可以组成平均的牌数N1"},
		{"NumberofphotosinthesamecolorN1","同花色张数N1"},
		{"AtotalofN1cardswiththesamenumbercanbeformedasanaverage","一共可以组成平均的同数字牌数N1"},
		{"NumberofidenticalnumbersN1","同数字张数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(抽18张牌N2, 18);
	DefineLangVarInt(共有的不同花色数N3, 4);
	DefineLangVarInt(余下张数N3, 1);
	DefineLangVarInt(抽20张牌N2, 20);
	DefineLangVarInt(共有的不同数字数N3, 13);
	ColPrintf(PrintfCol::标题, Lang("P87 例五 抽屉问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：牌中取出两张王牌，剩下自由抽牌，抽18张牌，多少张同花色，抽20张牌，多少张同数字"));
	DefineLangVarInt(一共可以组成平均的牌数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共可以组成平均的牌数N1 一共可以组成平均的牌数N1=抽18张牌N2/共有的不同花色数N3"));
	一共可以组成平均的牌数N1 = 抽18张牌N2 / 共有的不同花色数N3;
	一共可以组成平均的牌数N1.PrintProcessLog(1);
	DefineLangVarInt(同花色张数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算同花色张数N1 同花色张数N1=一共可以组成平均的牌数N1+余下张数N3"));
	同花色张数N1 = 一共可以组成平均的牌数N1 + 余下张数N3;
	同花色张数N1.PrintProcessLog(2);
	DefineLangVarInt(一共可以组成平均的同数字牌数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共可以组成平均的同数字牌数N1 一共可以组成平均的同数字牌数N1=抽20张牌N2/共有的不同数字数N3"));
	一共可以组成平均的同数字牌数N1 = 抽20张牌N2 / 共有的不同数字数N3;
	一共可以组成平均的同数字牌数N1.PrintProcessLog(3);
	DefineLangVarInt(同数字张数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算同数字张数N1 同数字张数N1=一共可以组成平均的同数字牌数N1+余下张数N3"));
	同数字张数N1 = 一共可以组成平均的同数字牌数N1 + 余下张数N3;
	同数字张数N1.PrintProcessLog(4);
}
void P72()
{
	//P70_formula();
	ColPrintf(PrintfCol::方法, "");
	//P87_rude();
	ColPrintf(PrintfCol::方法, "");
	P72_1();
	ColPrintf(PrintfCol::方法, "");
	P72_2();
	ColPrintf(PrintfCol::方法, "");
	P72_3();
	ColPrintf(PrintfCol::方法, "");
	P72_4();
	ColPrintf(PrintfCol::方法, "");
	P72_5();
	ColPrintf(PrintfCol::方法, "");
	//P70_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_3();
	ColPrintf(PrintfCol::方法, "");
}
void P72_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P72();
	Lang.SetCurLanguage(LanguageLib::English);
	P72();
	ColPrintf(PrintfCol::方法, "");

}