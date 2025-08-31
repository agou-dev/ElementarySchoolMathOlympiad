#pragma once
void P81_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 1 Logical Reasoning Hypothesis Method","P81 ��һ �߼�������跨"},
		{"Title: Caught four thieves in a theft case: A said it was B who stole it, B said it was D who stole it, C said it wasn't me who stole it anyway, D said it was B who was lying",
		"��Ŀ����һׯ���԰�����ץ���ĸ�С͵��A˵����B͵�ģ�B˵����D͵�ģ�C˵��������û͵��D˵��B��˵��"},
		{"1. Assuming A stole: A is not right, B is also not right, C says: Anyway, I didn't steal, so it's true that I didn't steal, so it's right, D says: B is lying because A stole it, B says it was D who stole it, and indeed B is lying. There are 2 errors and 2 pairs in total, so exclude A",
		"1.����A͵�ģ�A˵�Ĳ��ԣ�B˵��Ҳ���ԣ�C˵��������û͵��ȷʵ��û͵�������ǶԵģ�D˵��B��˵�ѣ���ΪA͵�ģ�B˵��D͵�ģ�ȷʵB��˵�ѡ���һ����2��2�ԣ������ų�A"},
		{"2. Assuming B stole: A said it was right, B said it was wrong, C didn't steal, so it was right, and D was lying because B said it stole, but we assumed it wasn't. There are still 2 mistakes and 2 pairs in total, so B is excluded",
		"2.����B͵�ģ�A˵�ľ��ǶԵģ�B˵�ľ��Ǵ�ģ�Cû��͵�������ǶԵģ���D��ΪB˵D͵�ģ������Ǽ���Ĳ��ǣ�����ȷʵ��˵�ѣ�����һ����2��2�ԣ������ų�B"},
		{"3. Assuming that it was stolen by C and A said it was stolen by B, it turns out that C stole it, so A's statement is wrong, B's statement is stolen by D, it turns out it was stolen by C, so B's statement is wrong. C is wrong because we assume it is C, and D's statement is correct because B is wrong, which is consistent with the situation. Therefore, D did not lie and C is a thief",
		"3.������C͵�ģ�A˵����B͵�ģ�ԭ����C͵������A˵�ľ��Ǵ�ģ�B˵����D͵�ģ�ԭ����C͵������B˵�ľ��Ǵ�ģ�C��Ϊ���Ǽ�����C����C�Ǵ�ģ���D��ΪB�Ǵ������D˵�ľ��ǶԵģ��������������Dû˵�ѣ�C��С͵"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ��һ �߼�������跨"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һׯ���԰�����ץ���ĸ�С͵��A˵����B͵�ģ�B˵����D͵�ģ�C˵��������û͵��D˵��B��˵��"));
	ColPrintf(PrintfCol::����, Lang("1.����A͵�ģ�A˵�Ĳ��ԣ�B˵��Ҳ���ԣ�C˵��������û͵��ȷʵ��û͵�������ǶԵģ�D˵��B��˵�ѣ���ΪA͵�ģ�B˵��D͵�ģ�ȷʵB��˵�ѡ���һ����2��2�ԣ������ų�A"));
	ColPrintf(PrintfCol::����, Lang("2.����B͵�ģ�A˵�ľ��ǶԵģ�B˵�ľ��Ǵ�ģ�Cû��͵�������ǶԵģ���D��ΪB˵D͵�ģ������Ǽ���Ĳ��ǣ�����ȷʵ��˵�ѣ�����һ����2��2�ԣ������ų�B"));
	ColPrintf(PrintfCol::����, Lang("3.������C͵�ģ�A˵����B͵�ģ�ԭ����C͵������A˵�ľ��Ǵ�ģ�B˵����D͵�ģ�ԭ����C͵������B˵�ľ��Ǵ�ģ�C��Ϊ���Ǽ�����C����C�Ǵ�ģ���D��ΪB�Ǵ������D˵�ľ��ǶԵģ��������������Dû˵�ѣ�C��С͵"));
}
void P81_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 examples 2 logical reasoning enumeration list method","P81 ���� �߼�����ö���б�"},
		{"Title: A, B, C, D, and E held a math competition in the whole school. They guessed A: B is the third place, C is the fifth place, B: D is the second place, E is the fourth place, C: A is the first place, E is the fourth place, D: C is the first place, B is the second place, E: D is the second place, and A is the third place. The teacher said they guessed half of each other correctly. What are their rankings?",
		"��Ŀ��ȫУ������ѧ������A��B��C��D��E�ֱ�²�A��B�ǵ�������C�ǵ�5����B��D�ǵ�2����E�ǵ�4����C��A�ǵ�1����E�ǵ�4����D��C�ǵ�1����B�ǵ�2����E��D�ǵ�2����A�ǵ�3������ʦ˵���ǻ���¶���һ�룬���ǵ����θ��Ƕ��٣�"},
		{"1. Assuming that the first half of A is incorrect and the second half is correct, C is in 5th place, so D's statement that C is in 1st place is incorrect, and B is in 2nd place is correct",
		"1.����A��ǰһ�벻�ԣ���һ��� C�ǵ�5�����ǶԵģ�����D˵��C�ǵ�1�����Ǵ��,B�ǵ�2�����ǶԵ�"},
		{"If B is in second place, it is correct. If B is in second place, D cannot be in second place. Therefore, E is in fourth place, and A is in third place",
		"2.���B�ǵ�2���ǶԵģ����B�ǵ�2�� D�Ͳ������ǵ�2��������E�ǵ�4���ǶԵģ�A�ǵ�3���ǶԵ�"},
		{"3. If E is ranked fourth, it is correct; A is ranked first, it is incorrect; D is ranked second, it is incorrect. Analyzing the second one yields information that A is ranked third, which is correct; D is ranked second, which is incorrect",
		"3.���E�ǵ�4���ǶԵģ�A�ǵ�1���Ǵ�ģ�D�ǵ�2���Ǵ�ģ������ڶ����ó���Ϣ��A�ǵ�3���ǶԵģ�D�ǵ�2���Ǵ��"},
		{"4. There is only one D left, because other rankings have already been occupied, so D is the first place, and in the incorrect information, we judged it as correct but did not appear. This indicates that they are not contradictory, so our reasoning is correct",
		"4.ʣ��һ��D����Ϊ�����������ѱ�ռ�ã�����D���ǵ�һ�������Ҵ������Ϣ�У������ж�Ϊ��ȷ��û�г��֣���˵�����ǲ���ì�ܣ��������ǵ���������ȷ��"},
		{"D is the first place, B is the second place, A is the third place, E is the fourth place, C is the fifth place",
		"DΪ��һ����B�ǵ�2����A�ǵ�3����E�ǵ�4����C�ǵ�5��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ���� �߼�����ö���б�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ȫУ������ѧ������A��B��C��D��E�ֱ�²�A��B�ǵ�������C�ǵ�5����B��D�ǵ�2����E�ǵ�4����C��A�ǵ�1����E�ǵ�4����D��C�ǵ�1����B�ǵ�2����E��D�ǵ�2����A�ǵ�3������ʦ˵���ǻ���¶���һ�룬���ǵ����θ��Ƕ��٣�"));
	ColPrintf(PrintfCol::����, Lang("1.����A��ǰһ�벻�ԣ���һ��� C�ǵ�5�����ǶԵģ�����D˵��C�ǵ�1�����Ǵ��,B�ǵ�2�����ǶԵ�"));
	ColPrintf(PrintfCol::����, Lang("2.���B�ǵ�2���ǶԵģ����B�ǵ�2�� D�Ͳ������ǵ�2��������E�ǵ�4���ǶԵģ�A�ǵ�3���ǶԵ�"));
	ColPrintf(PrintfCol::����, Lang("3.���E�ǵ�4���ǶԵģ�A�ǵ�1���Ǵ�ģ�D�ǵ�2���Ǵ�ģ������ڶ����ó���Ϣ��A�ǵ�3���ǶԵģ�D�ǵ�2���Ǵ��"));
	ColPrintf(PrintfCol::����, Lang("4.ʣ��һ��D����Ϊ�����������ѱ�ռ�ã�����D���ǵ�һ�������Ҵ������Ϣ�У������ж�Ϊ��ȷ��û�г��֣���˵�����ǲ���ì�ܣ��������ǵ���������ȷ��"));
	ColPrintf(PrintfCol::����, Lang("DΪ��һ����B�ǵ�2����A�ǵ�3����E�ǵ�4����C�ǵ�5��"));
}


void P81_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 cases 3 logical reasoning","P81 ���� �߼�����"},
		{"Title: There are four people, A, B, C, and D, living in a four story building. Among them are engineers, workers, teachers, and doctors. If it is known that A lives lower than B than C, D is lower than A and B, and the doctor lives above the teacher building, under the workers, and the architect is on the bottom floor, how many floors do they live on? What are their professions?",
		"��Ŀ���м��ұ���4��ס��4��¥���棬����֮���й���ʦ�����ˣ���ʦ��ҽ���������֪�ױ���ס�ĸ߱ȱ�ס�ĵͣ����ȼ��Ҷ��ͣ�ҽ��ס�ڽ�ʦ¥�ϣ��ڹ����£�����ʦ����ײ㣬���Ƕ�ס�ڼ�¥�����ǵ�ְҵ��ʲô��"},
		{"1. Because A lives higher than B, A>B, and because A lives lower than C, C>A>B, and because D is lower than both A and B, C>A>B>D",
		"1.��Ϊ�ױ���ס�ĸߣ����Լ�>�ң�����Ϊ�ױȱ�ס�ĵͣ����Ա�>��>��,��Ϊ���ȼ��Ҷ��ͣ����� ��>��>��>��"},
		{"2. Because doctors are located above teachers, doctors>teachers, and because they are located below workers, workers>doctors>teachers. Because architects are located at the bottom, workers>doctors>teachers>architects",
		"2.��Ϊҽ���ڽ�ʦ¥�ϣ�����ҽ��>��ʦ������Ϊ�ڹ���֮�£����Թ���>ҽ��>��ʦ����Ϊ����ʦ����ײ㣬���Թ���>ҽ��>��ʦ>����ʦ"},
		{"3. The second step corresponds to the first step, where workers>doctors>teachers>architects C>A>B>D. Therefore, C is a worker on the fourth floor, doctors on the third floor are A, B is a teacher on the second floor, and D is an architect on the last floor",
		"3.�ڶ������һ����Ӧ������>ҽ��>��ʦ>����ʦ ��>��>��>�������Ա��ڵ�4���ǹ��ˣ�ҽ���ǵ�3���Ǽף����ڵ�2���ǽ�ʦ���������һ���ǽ���ʦ"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ���� �߼�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���м��ұ���4��ס��4��¥���棬����֮���й���ʦ�����ˣ���ʦ��ҽ���������֪�ױ���ס�ĸ߱ȱ�ס�ĵͣ����ȼ��Ҷ��ͣ�ҽ��ס�ڽ�ʦ¥�ϣ��ڹ����£�����ʦ����ײ㣬���Ƕ�ס�ڼ�¥�����ǵ�ְҵ��ʲô��"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ�ױ���ס�ĸߣ����Լ�>�ң�����Ϊ�ױȱ�ס�ĵͣ����Ա�>��>��,��Ϊ���ȼ��Ҷ��ͣ����� ��>��>��>��"));
	ColPrintf(PrintfCol::����, Lang("2.��Ϊҽ���ڽ�ʦ¥�ϣ�����ҽ��>��ʦ������Ϊ�ڹ���֮�£����Թ���>ҽ��>��ʦ����Ϊ����ʦ����ײ㣬���Թ���>ҽ��>��ʦ>����ʦ"));
	ColPrintf(PrintfCol::����, Lang("3.�ڶ������һ����Ӧ������>ҽ��>��ʦ>����ʦ ��>��>��>�������Ա��ڵ�4���ǹ��ˣ�ҽ���ǵ�3���Ǽף����ڵ�2���ǽ�ʦ���������һ���ǽ���ʦ"));
}
void P81_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 4 Logical Reasoning","P81 4 �߼�����"},
		{"Title: As shown in the figure, there are numbers 1-6 on the six faces of a cube. The sum of any two opposing faces is 7. So, if five squares are connected together, the sum of the two adjacent faces is 8. What is the solution? What are the numbers",
		"��Ŀ����ͼ����������������1-6�⼸�����֣�����������Ե���ĺͶ���7������5������������һ�𣬰��ŵ�������ĺ���8���󣿵������Ǽ�"},
		{"1.The first cube has a positive value of 1 and the sum of its opposite faces is 7, so the negative value is 6",
		"1.��һ����������Ϊ������1������Ե���ĺ���7�����Է�����6"},
		{"2. The second cube has a positive side of 2 and a negative side of 7-2=5 because the negative side of the first cube has a negative side of 6 and the sum of the adjacent sides must be 8",
		"2.�ڶ�����������Ϊ��һ��������ķ�����6�������ŵ���ͱ�����8�����Եڶ������������2���������7-2=5"},
		{"3. The third cube, because the opposite side of the second cube is 5, and the sum of the adjacent faces must be 8, therefore the front side of the second cube is 3, and the opposite side is 7-3=4, while the top is 1 and the bottom is 6. Therefore, only 2 and 5 can be selected on the right side",
		"3.��������������Ϊ�ڶ���������ķ�����5�������ŵ���ͱ�����8�����Եڶ������������3���������7-3=4����������1���������6�������ұ�ֻ��2��5����ѡ"},
		{"4. Because if you choose 2, the front side will be 6, the back side will be 1, and the sum of two adjacent sides must be 8, so the front side will be 7, which does not meet the conditions, so you can only choose 5",
		"4.��Ϊ���ѡ2�������������6���������1���������ĺͱ�����8����������ͳ�7�ˣ�����������������ֻ��ѡ5"},
		{"5.If you choose 5, the front side will be 3, the back side will be 4, the front side will be 4, and the back side will be 3. So? It's 3",
		"5.���ѡ5������������3���������4���������4���������3�����ԣ���3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 4 �߼�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ����������������1-6�⼸�����֣�����������Ե���ĺͶ���7������5������������һ�𣬰��ŵ�������ĺ���8���󣿵������Ǽ�"));
	ColPrintf(PrintfCol::����, Lang("1.��һ����������Ϊ������1������Ե���ĺ���7�����Է�����6"));
	ColPrintf(PrintfCol::����, Lang("2.�ڶ�����������Ϊ��һ��������ķ�����6�������ŵ���ͱ�����8�����Եڶ������������2���������7-2=5"));
	ColPrintf(PrintfCol::����, Lang("3.��������������Ϊ�ڶ���������ķ�����5�������ŵ���ͱ�����8�����Եڶ������������3���������7-3=4����������1���������6�������ұ�ֻ��2��5����ѡ"));
	ColPrintf(PrintfCol::����, Lang("4.��Ϊ���ѡ2�������������6���������1���������ĺͱ�����8����������ͳ�7�ˣ�����������������ֻ��ѡ5"));
	ColPrintf(PrintfCol::����, Lang("5.���ѡ5������������3���������4���������4���������3�����ԣ���3"));
}
void P81_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 5 Logical Reasoning","P81 ���� �߼�����"},
		{"Question: A, B, C, D, E: In the exam, each person scored no less than 91 points in mathematics and the scores were not repeated. The average score for ABC is 95 points, and the average score for BCD is 94 points. A is the first place, E is the third place, 96 points. What is the score for D",
		"��Ŀ��A��B��C��D��E������һ������100�ֿ����У�ÿ����ѧ��������91�֣��ҷ������ظ���ABC��ƽ����Ϊ95�֣�BCD��ƽ����Ϊ94�֣�A�ǵ�һ����E�ǵ�������96�֣�D�ĵ÷��Ƕ���"},
		{"The total score of ABC is 3 * 95=385, while the total score of BCD is 3 * 94=382, with a difference of 385-382. The only difference is A and D, so A-D=385-382=3",
		"1.ABC���ܷ���3*95=285����BCD���ܷ���3*94=282���м����285-382��Ψһ��ͬ��A��D����A-D=285-282=3"},
		{"2. Because A is the first place, E is the third place with a score of 96, and there is a second place in between, A needs to be above 97. There are three possibilities: A is 100 points, D is 97 points, E is 96 points, and BC is the fourth and fifth place. The total number of the two is 285-100-185, and the split number is 185=93+92;",
		"2.��ΪA�ǵ�һ����E�ǵ�������96���м仹�е�2��������AҪ��97���ϣ������ֿ��ܣ�A��100��D��97�֣�E��96�֣�BC�ǵ��ĺ͵������������ܵ�285-100-185���ֲ��������185=93+92��"},
		{"If A is 99 and D is 96, this contradicts E, so exclude it",
		"3.����A��99��D����96������E��ì���ˣ������ų�"},
		{"4. If A is 98, D is 95, and the person in second place is 97, then the other person is 285-98-97, which is 90. This contradicts the requirement for a score greater than 91, so it is excluded",
		"4.����A��98��D����95���ڶ������˾���97����ô��һ���˾���285-98-97����90���������Ҫ����91ì�������ų�"},
		{"So D can only be 97",
		"5.����Dֻ������97"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ���� �߼�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��A��B��C��D��E������һ������100�ֿ����У�ÿ����ѧ��������91�֣��ҷ������ظ���ABC��ƽ����Ϊ95�֣�BCD��ƽ����Ϊ94�֣�A�ǵ�һ����E�ǵ�������96�֣�D�ĵ÷��Ƕ���"));
	ColPrintf(PrintfCol::����, Lang("1.ABC���ܷ���3*95=285����BCD���ܷ���3*94=282���м����285-382��Ψһ��ͬ��A��D����A-D=285-282=3"));
	ColPrintf(PrintfCol::����, Lang("2.��ΪA�ǵ�һ����E�ǵ�������96���м仹�е�2��������AҪ��97���ϣ������ֿ��ܣ�A��100��D��97�֣�E��96�֣�BC�ǵ��ĺ͵������������ܵ�285-100-185���ֲ��������185=93+92��"));
	ColPrintf(PrintfCol::����, Lang("3.����A��99��D����96������E��ì���ˣ������ų�"));
	ColPrintf(PrintfCol::����, Lang("4.����A��98��D����95���ڶ������˾���97����ô��һ���˾���285-98-97����90���������Ҫ����91ì�������ų�"));
	ColPrintf(PrintfCol::����, Lang("5.����Dֻ������97"));
}
void P81()
{
	P81_1();
	ColPrintf(PrintfCol::����, "");
	P81_2();
	ColPrintf(PrintfCol::����, "");
	P81_3();
	ColPrintf(PrintfCol::����, "");
	P81_4();
	ColPrintf(PrintfCol::����, "");
	P81_5();
	ColPrintf(PrintfCol::����, "");
	//P80_3_2();
	ColPrintf(PrintfCol::����, "");
	//P80_4();
	ColPrintf(PrintfCol::����, "");
	//P66_2();
	ColPrintf(PrintfCol::����, "");
	//P66_3();
	ColPrintf(PrintfCol::����, "");
	//P66_4();
	ColPrintf(PrintfCol::����, "");
	//P77_5();
	ColPrintf(PrintfCol::����, "");
}
void P81_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P81();
	Lang.SetCurLanguage(LanguageLib::English);
	P81();
	ColPrintf(PrintfCol::����, "");

}