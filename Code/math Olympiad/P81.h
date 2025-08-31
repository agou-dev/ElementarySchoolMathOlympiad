#pragma once
void P81_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 1 Logical Reasoning Hypothesis Method","P81 例一 逻辑推理假设法"},
		{"Title: Caught four thieves in a theft case: A said it was B who stole it, B said it was D who stole it, C said it wasn't me who stole it anyway, D said it was B who was lying",
		"题目：在一庄盗窃案里面抓到四个小偷：A说：是B偷的，B说：是D偷的，C说：反正我没偷，D说：B在说谎"},
		{"1. Assuming A stole: A is not right, B is also not right, C says: Anyway, I didn't steal, so it's true that I didn't steal, so it's right, D says: B is lying because A stole it, B says it was D who stole it, and indeed B is lying. There are 2 errors and 2 pairs in total, so exclude A",
		"1.假设A偷的：A说的不对，B说的也不对，C说：反正我没偷，确实是没偷，所以是对的，D说：B在说谎，因为A偷的，B说是D偷的，确实B在说谎。这一共有2错，2对，所以排除A"},
		{"2. Assuming B stole: A said it was right, B said it was wrong, C didn't steal, so it was right, and D was lying because B said it stole, but we assumed it wasn't. There are still 2 mistakes and 2 pairs in total, so B is excluded",
		"2.假设B偷的：A说的就是对的，B说的就是错的，C没有偷，所以是对的，而D因为B说D偷的，但我们假设的不是，所以确实在说谎，还是一共有2错，2对，所以排除B"},
		{"3. Assuming that it was stolen by C and A said it was stolen by B, it turns out that C stole it, so A's statement is wrong, B's statement is stolen by D, it turns out it was stolen by C, so B's statement is wrong. C is wrong because we assume it is C, and D's statement is correct because B is wrong, which is consistent with the situation. Therefore, D did not lie and C is a thief",
		"3.假设是C偷的，A说的是B偷的，原来是C偷的所以A说的就是错的，B说的是D偷的，原来是C偷的所以B说的就是错的，C因为我们假设是C所以C是错的，而D因为B是错的所以D说的就是对的，符合情况，所以D没说谎，C是小偷"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例一 逻辑推理假设法"));
	ColPrintf(PrintfCol::标题, Lang("题目：在一庄盗窃案里面抓到四个小偷：A说：是B偷的，B说：是D偷的，C说：反正我没偷，D说：B在说谎"));
	ColPrintf(PrintfCol::方法, Lang("1.假设A偷的：A说的不对，B说的也不对，C说：反正我没偷，确实是没偷，所以是对的，D说：B在说谎，因为A偷的，B说是D偷的，确实B在说谎。这一共有2错，2对，所以排除A"));
	ColPrintf(PrintfCol::方法, Lang("2.假设B偷的：A说的就是对的，B说的就是错的，C没有偷，所以是对的，而D因为B说D偷的，但我们假设的不是，所以确实在说谎，还是一共有2错，2对，所以排除B"));
	ColPrintf(PrintfCol::方法, Lang("3.假设是C偷的，A说的是B偷的，原来是C偷的所以A说的就是错的，B说的是D偷的，原来是C偷的所以B说的就是错的，C因为我们假设是C所以C是错的，而D因为B是错的所以D说的就是对的，符合情况，所以D没说谎，C是小偷"));
}
void P81_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 examples 2 logical reasoning enumeration list method","P81 例二 逻辑推理枚举列表法"},
		{"Title: A, B, C, D, and E held a math competition in the whole school. They guessed A: B is the third place, C is the fifth place, B: D is the second place, E is the fourth place, C: A is the first place, E is the fourth place, D: C is the first place, B is the second place, E: D is the second place, and A is the third place. The teacher said they guessed half of each other correctly. What are their rankings?",
		"题目：全校举行数学竞赛，A，B，C，D，E分别猜测A：B是第三名，C是第5名，B：D是第2名，E是第4名，C：A是第1名，E是第4名，D：C是第1名，B是第2名，E：D是第2名，A是第3名，老师说他们互相猜对了一半，他们的名次各是多少？"},
		{"1. Assuming that the first half of A is incorrect and the second half is correct, C is in 5th place, so D's statement that C is in 1st place is incorrect, and B is in 2nd place is correct",
		"1.假设A的前一半不对，后一半对 C是第5名就是对的，所以D说的C是第1名就是错的,B是第2名就是对的"},
		{"If B is in second place, it is correct. If B is in second place, D cannot be in second place. Therefore, E is in fourth place, and A is in third place",
		"2.如果B是第2名是对的，如果B是第2名 D就不可能是第2名，所以E是第4名是对的，A是第3名是对的"},
		{"3. If E is ranked fourth, it is correct; A is ranked first, it is incorrect; D is ranked second, it is incorrect. Analyzing the second one yields information that A is ranked third, which is correct; D is ranked second, which is incorrect",
		"3.如果E是第4名是对的，A是第1名是错的，D是第2名是错的，分析第二个得出信息，A是第3名是对的，D是第2名是错的"},
		{"4. There is only one D left, because other rankings have already been occupied, so D is the first place, and in the incorrect information, we judged it as correct but did not appear. This indicates that they are not contradictory, so our reasoning is correct",
		"4.剩下一个D，因为其他的名次已被占用，所以D就是第一名，并且错误的信息中，我们判断为正确并没有出现，这说明他们并不矛盾，所以我们的推理是正确的"},
		{"D is the first place, B is the second place, A is the third place, E is the fourth place, C is the fifth place",
		"D为第一名，B是第2名，A是第3名，E是第4名，C是第5名"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例二 逻辑推理枚举列表法"));
	ColPrintf(PrintfCol::标题, Lang("题目：全校举行数学竞赛，A，B，C，D，E分别猜测A：B是第三名，C是第5名，B：D是第2名，E是第4名，C：A是第1名，E是第4名，D：C是第1名，B是第2名，E：D是第2名，A是第3名，老师说他们互相猜对了一半，他们的名次各是多少？"));
	ColPrintf(PrintfCol::方法, Lang("1.假设A的前一半不对，后一半对 C是第5名就是对的，所以D说的C是第1名就是错的,B是第2名就是对的"));
	ColPrintf(PrintfCol::方法, Lang("2.如果B是第2名是对的，如果B是第2名 D就不可能是第2名，所以E是第4名是对的，A是第3名是对的"));
	ColPrintf(PrintfCol::方法, Lang("3.如果E是第4名是对的，A是第1名是错的，D是第2名是错的，分析第二个得出信息，A是第3名是对的，D是第2名是错的"));
	ColPrintf(PrintfCol::方法, Lang("4.剩下一个D，因为其他的名次已被占用，所以D就是第一名，并且错误的信息中，我们判断为正确并没有出现，这说明他们并不矛盾，所以我们的推理是正确的"));
	ColPrintf(PrintfCol::方法, Lang("D为第一名，B是第2名，A是第3名，E是第4名，C是第5名"));
}


void P81_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 cases 3 logical reasoning","P81 例三 逻辑推理"},
		{"Title: There are four people, A, B, C, and D, living in a four story building. Among them are engineers, workers, teachers, and doctors. If it is known that A lives lower than B than C, D is lower than A and B, and the doctor lives above the teacher building, under the workers, and the architect is on the bottom floor, how many floors do they live on? What are their professions?",
		"题目：有甲乙丙丁4人住在4层楼里面，他们之中有工程师，工人，教师和医生，如果已知甲比乙住的高比丙住的低，丁比甲乙都低，医生住在教师楼上，在工人下，建筑师在最底层，它们都住在几楼，他们的职业是什么？"},
		{"1. Because A lives higher than B, A>B, and because A lives lower than C, C>A>B, and because D is lower than both A and B, C>A>B>D",
		"1.因为甲比乙住的高，所以甲>乙，又因为甲比丙住的低，所以丙>甲>乙,因为丁比甲乙都低，所以 丙>甲>乙>丁"},
		{"2. Because doctors are located above teachers, doctors>teachers, and because they are located below workers, workers>doctors>teachers. Because architects are located at the bottom, workers>doctors>teachers>architects",
		"2.因为医生在教师楼上，所以医生>教师，又因为在工人之下，所以工人>医生>教师，因为建筑师在最底层，所以工人>医生>教师>建筑师"},
		{"3. The second step corresponds to the first step, where workers>doctors>teachers>architects C>A>B>D. Therefore, C is a worker on the fourth floor, doctors on the third floor are A, B is a teacher on the second floor, and D is an architect on the last floor",
		"3.第二步与第一步对应，工人>医生>教师>建筑师 丙>甲>乙>丁，所以丙在第4层是工人，医生是第3层是甲，乙在第2层是教师，丁在最后一层是建筑师"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例三 逻辑推理"));
	ColPrintf(PrintfCol::标题, Lang("题目：有甲乙丙丁4人住在4层楼里面，他们之中有工程师，工人，教师和医生，如果已知甲比乙住的高比丙住的低，丁比甲乙都低，医生住在教师楼上，在工人下，建筑师在最底层，它们都住在几楼，他们的职业是什么？"));
	ColPrintf(PrintfCol::方法, Lang("1.因为甲比乙住的高，所以甲>乙，又因为甲比丙住的低，所以丙>甲>乙,因为丁比甲乙都低，所以 丙>甲>乙>丁"));
	ColPrintf(PrintfCol::方法, Lang("2.因为医生在教师楼上，所以医生>教师，又因为在工人之下，所以工人>医生>教师，因为建筑师在最底层，所以工人>医生>教师>建筑师"));
	ColPrintf(PrintfCol::方法, Lang("3.第二步与第一步对应，工人>医生>教师>建筑师 丙>甲>乙>丁，所以丙在第4层是工人，医生是第3层是甲，乙在第2层是教师，丁在最后一层是建筑师"));
}
void P81_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 4 Logical Reasoning","P81 4 逻辑推理"},
		{"Title: As shown in the figure, there are numbers 1-6 on the six faces of a cube. The sum of any two opposing faces is 7. So, if five squares are connected together, the sum of the two adjacent faces is 8. What is the solution? What are the numbers",
		"题目：如图正方体六个面上有1-6这几个数字，任意两个相对的面的和都是7，这样5个正方形连在一起，挨着的两个面的和是8，求？的数字是几"},
		{"1.The first cube has a positive value of 1 and the sum of its opposite faces is 7, so the negative value is 6",
		"1.第一个正方体因为正面是1，而相对的面的和是7，所以反面是6"},
		{"2. The second cube has a positive side of 2 and a negative side of 7-2=5 because the negative side of the first cube has a negative side of 6 and the sum of the adjacent sides must be 8",
		"2.第二个正方体因为第一个正方体的反面是6，而按着的面和必须是8，所以第二个面的正面是2，反面就是7-2=5"},
		{"3. The third cube, because the opposite side of the second cube is 5, and the sum of the adjacent faces must be 8, therefore the front side of the second cube is 3, and the opposite side is 7-3=4, while the top is 1 and the bottom is 6. Therefore, only 2 and 5 can be selected on the right side",
		"3.第三个正方体因为第二个正方体的反面是5，而按着的面和必须是8，所以第二个面的正面是3，反面就是7-3=4，而上面是1，下面就是6，所以右边只有2和5可以选"},
		{"4. Because if you choose 2, the front side will be 6, the back side will be 1, and the sum of two adjacent sides must be 8, so the front side will be 7, which does not meet the conditions, so you can only choose 5",
		"4.因为如果选2，下来正面就是6，反面就是1，二紧挨的和必须是8，所以正面就成7了，与条件不符，所以只能选5"},
		{"5.If you choose 5, the front side will be 3, the back side will be 4, the front side will be 4, and the back side will be 3. So? It's 3",
		"5.如果选5，下来正面是3，反面就是4，正面就是4，反面就是3，所以？是3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 4 逻辑推理"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图正方体六个面上有1-6这几个数字，任意两个相对的面的和都是7，这样5个正方形连在一起，挨着的两个面的和是8，求？的数字是几"));
	ColPrintf(PrintfCol::方法, Lang("1.第一个正方体因为正面是1，而相对的面的和是7，所以反面是6"));
	ColPrintf(PrintfCol::方法, Lang("2.第二个正方体因为第一个正方体的反面是6，而按着的面和必须是8，所以第二个面的正面是2，反面就是7-2=5"));
	ColPrintf(PrintfCol::方法, Lang("3.第三个正方体因为第二个正方体的反面是5，而按着的面和必须是8，所以第二个面的正面是3，反面就是7-3=4，而上面是1，下面就是6，所以右边只有2和5可以选"));
	ColPrintf(PrintfCol::方法, Lang("4.因为如果选2，下来正面就是6，反面就是1，二紧挨的和必须是8，所以正面就成7了，与条件不符，所以只能选5"));
	ColPrintf(PrintfCol::方法, Lang("5.如果选5，下来正面是3，反面就是4，正面就是4，反面就是3，所以？是3"));
}
void P81_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 5 Logical Reasoning","P81 例五 逻辑推理"},
		{"Question: A, B, C, D, E: In the exam, each person scored no less than 91 points in mathematics and the scores were not repeated. The average score for ABC is 95 points, and the average score for BCD is 94 points. A is the first place, E is the third place, 96 points. What is the score for D",
		"题目：A，B，C，D，E五人再一次满分100分考试中，每人数学都不低于91分，且分数不重复，ABC的平均分为95分，BCD的平均分为94分，A是第一名，E是第三名，96分，D的得分是多少"},
		{"The total score of ABC is 3 * 95=385, while the total score of BCD is 3 * 94=382, with a difference of 385-382. The only difference is A and D, so A-D=385-382=3",
		"1.ABC的总分是3*95=285，而BCD的总分是3*94=282，中间相差285-382，唯一不同是A和D所以A-D=285-282=3"},
		{"2. Because A is the first place, E is the third place with a score of 96, and there is a second place in between, A needs to be above 97. There are three possibilities: A is 100 points, D is 97 points, E is 96 points, and BC is the fourth and fifth place. The total number of the two is 285-100-185, and the split number is 185=93+92;",
		"2.因为A是第一名，E是第三名是96，中间还有第2名，所以A要在97以上，有三种可能，A是100分D是97分，E是96分，BC是第四和第五名，两人总得285-100-185，分拆这个数：185=93+92；"},
		{"If A is 99 and D is 96, this contradicts E, so exclude it",
		"3.假如A是99，D就是96，这与E就矛盾了，所以排除"},
		{"4. If A is 98, D is 95, and the person in second place is 97, then the other person is 285-98-97, which is 90. This contradicts the requirement for a score greater than 91, so it is excluded",
		"4.假如A是98，D就是95，第二名的人就是97，那么另一个人就是285-98-97就是90，这与分数要大于91矛盾所以排除"},
		{"So D can only be 97",
		"5.所以D只可能是97"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例五 逻辑推理"));
	ColPrintf(PrintfCol::标题, Lang("题目：A，B，C，D，E五人再一次满分100分考试中，每人数学都不低于91分，且分数不重复，ABC的平均分为95分，BCD的平均分为94分，A是第一名，E是第三名，96分，D的得分是多少"));
	ColPrintf(PrintfCol::方法, Lang("1.ABC的总分是3*95=285，而BCD的总分是3*94=282，中间相差285-382，唯一不同是A和D所以A-D=285-282=3"));
	ColPrintf(PrintfCol::方法, Lang("2.因为A是第一名，E是第三名是96，中间还有第2名，所以A要在97以上，有三种可能，A是100分D是97分，E是96分，BC是第四和第五名，两人总得285-100-185，分拆这个数：185=93+92；"));
	ColPrintf(PrintfCol::方法, Lang("3.假如A是99，D就是96，这与E就矛盾了，所以排除"));
	ColPrintf(PrintfCol::方法, Lang("4.假如A是98，D就是95，第二名的人就是97，那么另一个人就是285-98-97就是90，这与分数要大于91矛盾所以排除"));
	ColPrintf(PrintfCol::方法, Lang("5.所以D只可能是97"));
}
void P81()
{
	P81_1();
	ColPrintf(PrintfCol::方法, "");
	P81_2();
	ColPrintf(PrintfCol::方法, "");
	P81_3();
	ColPrintf(PrintfCol::方法, "");
	P81_4();
	ColPrintf(PrintfCol::方法, "");
	P81_5();
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
void P81_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P81();
	Lang.SetCurLanguage(LanguageLib::English);
	P81();
	ColPrintf(PrintfCol::方法, "");

}