#pragma once
void P82_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 1 Logical Reasoning","P81 ��һ �߼�����"},
		{"Title: Red Mom Frying Fish. It is known that washing and cutting fish takes 3 minutes, washing takes 2 minutes, boiling oil takes 5 minutes, frying fish takes 8 minutes, and cutting ginger takes 1 minute. How to complete it in the shortest possible time",
		"��Ŀ������������㡣��֪ϴ������Ҫ3���ӣ�ϴ��Ҫ2���ӣ���������Ҫ5���ӣ�����Ҫ8���ӣ��н�Ҫһ���ӣ���������ʱ������"},
		{"1. You can first take a look at what you can do and do other things, which maximizes the use of time",
		"1.�����ȿ�һ����Щ�������п���������£���������޶ȵ�������ʱ��"},
		{"2. First, wash the pot, because washing the pot is done by oneself, so it cannot stack events and takes 2 minutes. Then, heat up the oil, because it is waiting, so you can also wash fish, cut fish, cut ginger, and finally fry fish for 8 minutes",
		"2.��ϴ������Ϊϴ�������Լ�Ҫ���ֵģ����Բ��ܵ����¼�Ҫ��2���ӣ�Ȼ��������ȣ���Ϊ��ʱ�ǵȴ��ģ����Ի�����ϴ�����㣬�н���������Ҫ8����"},
		{"3. Calculate the time for washing the pot+cooking time+cutting fish time=2+5+8=15 minutes, so the shortest time is 15 minutes",
		"3.����ʱ�� ϴ����ʱ��+���͵�ʱ��+�����ʱ��=2+5+8=15���ӣ��������ʱ��Ҫ15����"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ��һ �߼�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������������㡣��֪ϴ������Ҫ3���ӣ�ϴ��Ҫ2���ӣ���������Ҫ5���ӣ�����Ҫ8���ӣ��н�Ҫһ���ӣ���������ʱ������"));
	ColPrintf(PrintfCol::����, Lang("1.�����ȿ�һ����Щ�������п���������£���������޶ȵ�������ʱ��"));
	ColPrintf(PrintfCol::����, Lang("2.��ϴ������Ϊϴ�������Լ�Ҫ���ֵģ����Բ��ܵ����¼�Ҫ��2���ӣ�Ȼ��������ȣ���Ϊ��ʱ�ǵȴ��ģ����Ի�����ϴ�����㣬�н���������Ҫ8����"));
	ColPrintf(PrintfCol::����, Lang("3.����ʱ�� ϴ����ʱ��+���͵�ʱ��+�����ʱ��=2+5+8=15���ӣ��������ʱ��Ҫ15����"));
}
void P82_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 2 Logical Reasoning","P81 ���� �߼�����"},
		{"Title: A, B, C, D water queue, A5 minutes full, B4 minutes full, C2 minutes full.D1 minutes full. How to arrange A, B, C, and D in the shortest possible time when D2 minutes are full?",
		"��Ŀ��A��B��C��D��ˮ�Ŷӣ�A5���ӽ�����B4���ӽ�����C2���ӽ�����D1���ӽ�����A��B��C��D����������õ�ʱ�����?"},
		{"1. The shortest time can be determined based on the time of straight and reverse alignment",
		"1.���԰��������ź͵����ŵ�ʱ����ȷ�����ʱ��"},
		{"2. During the scheduled time, A first receives water for 5 minutes without any waiting time, totaling 5 minutes. B receives water for 4 minutes, and the waiting time is the sum of A's waiting time and A's receiving time, totaling 9 minutes",
		"2.���������õ�ʱ�� A�Ƚ�ˮ����ˮʱ��5���ӣ�û�еȴ���ʱ�䣬�ܼ�5���ӣ�B��ˮ����ˮʱ��4���ӣ��ȴ���ʱ�����A�ȴ���ʱ���A��ˮ��ʱ�����5���ӣ��ܼ�9����"},
		{"3. C receives water for 2 minutes, and the waiting time is the sum of B's waiting time and B's receiving time, totaling 11 minutes. D receives water for 1 minute, and the waiting time is the sum of C's waiting time and C's receiving time, totaling 12 minutes",
		"3.C��ˮ����ˮʱ��2���ӣ��ȴ���ʱ�����B�ȴ���ʱ���B��ˮ��ʱ�����9���ӣ��ܼ�11���ӣ�D��ˮ����ˮʱ��1���ӣ��ȴ���ʱ�����C�ȴ���ʱ���C��ˮ��ʱ�����11���ӣ��ܼ�12����"},
		{"4. A total of 5+9+11+12=37 was used",
		"4.һ������5+9+11+12=37"},
		{"5. Row in reverse, D receives water for 1 minute without waiting time, totaling 1 minute. C receives water for 2 minutes, and the waiting time is equal to D's waiting time plus D's receiving time, totaling 3 minutes",
		"5.�����ţ�D��ˮ����ˮʱ��1���ӣ�û�еȴ���ʱ�䣬�ܼ�1���ӣ�.C��ˮ����ˮʱ��2���ӣ��ȴ���ʱ�����D�ȴ���ʱ���D��ˮ��ʱ�����1���ӣ��ܼ�3����"},
		{"6. B receives water for 4 minutes, and the waiting time is equal to C's waiting time plus C's receiving time, which is 3 minutes, for a total of 7 minutes",
		"6.B��ˮ����ˮʱ��4���ӣ��ȴ���ʱ�����C�ȴ���ʱ���C��ˮ��ʱ�����3���ӣ��ܼ�7����,A��ˮ����ˮʱ��5���ӣ��ȴ���ʱ�����B�ȴ���ʱ���B��ˮ��ʱ�����7���ӣ��ܼ�12����"},
		{"7. It took a total of 23 minutes, so the reverse arrangement method is better because the people in front had less time, so the people behind had less waiting time. They took a long time to take over, but the few people behind were naturally waiting faster",
		"7.һ������23���ӣ����Ե����ŷ������ţ���Ϊǰ�����ʱ���٣����Ժ�����˵ȵ�ʱ���٣������ǽӵ�ʱ��ܳ�����������ٵ����ڵ���Ȼ���õ�ʱ��Ϳ�"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ���� �߼�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��A��B��C��D��ˮ�Ŷӣ�A5���ӽ�����B4���ӽ�����C2���ӽ�����D1���ӽ�����A��B��C��D����������õ�ʱ�����?"));
	ColPrintf(PrintfCol::����, Lang("1.���԰��������ź͵����ŵ�ʱ����ȷ�����ʱ��"));
	ColPrintf(PrintfCol::����, Lang("2.���������õ�ʱ�� A�Ƚ�ˮ����ˮʱ��5���ӣ�û�еȴ���ʱ�䣬�ܼ�5���ӣ�B��ˮ����ˮʱ��4���ӣ��ȴ���ʱ�����A�ȴ���ʱ���A��ˮ��ʱ�����5���ӣ��ܼ�9����"));
	ColPrintf(PrintfCol::����, Lang("3.C��ˮ����ˮʱ��2���ӣ��ȴ���ʱ�����B�ȴ���ʱ���B��ˮ��ʱ�����9���ӣ��ܼ�11���ӣ�D��ˮ����ˮʱ��1���ӣ��ȴ���ʱ�����C�ȴ���ʱ���C��ˮ��ʱ�����11���ӣ��ܼ�12����"));
	ColPrintf(PrintfCol::����, Lang("4.һ������5+9+11+12=37"));
	ColPrintf(PrintfCol::����, Lang("5.�����ţ�D��ˮ����ˮʱ��1���ӣ�û�еȴ���ʱ�䣬�ܼ�1���ӣ�.C��ˮ����ˮʱ��2���ӣ��ȴ���ʱ�����D�ȴ���ʱ���D��ˮ��ʱ�����1���ӣ��ܼ�3����"));
	ColPrintf(PrintfCol::����, Lang("6.B��ˮ����ˮʱ��4���ӣ��ȴ���ʱ�����C�ȴ���ʱ���C��ˮ��ʱ�����3���ӣ��ܼ�7����,A��ˮ����ˮʱ��5���ӣ��ȴ���ʱ�����B�ȴ���ʱ���B��ˮ��ʱ�����7���ӣ��ܼ�12����"));
	ColPrintf(PrintfCol::����, Lang("7.һ������23���ӣ����Ե����ŷ������ţ���Ϊǰ�����ʱ���٣����Ժ�����˵ȵ�ʱ���٣������ǽӵ�ʱ��ܳ�����������ٵ����ڵ���Ȼ���õ�ʱ��Ϳ�"));
}
void P82_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example Three Logical Reasoning","P81 ���� �߼�����"},
		{"Title: There is a pile of chess pieces with 2002 pieces. A and B take turns to take the pieces. As long as the player who removes the last piece wins, each person can only take 1 to 7 pieces. To make A win, how should they take them",
		"��Ŀ����һ��������2002���������������������ӣ�ֻҪ˭�õ����һ�������߻�ʤ��ÿ��ֻ����1��7�����ӣ�Ҫʹ�ױ�Ӯ��Ҫ������"},
		{"1. The final number of chess pieces can only be 8, because when B takes it, even if they only take one piece of armor, they can still take seven pieces, and B will not take all seven pieces",
		"1.����������ֻ����8������Ϊ�����õ�ʱ��ʹֻ��һ����Ҳ����������������7��Ҳ����ȫ������"},
		{"2. In order for A to win, A must first make a strong move and adjust 2002 to a multiple of 8. After that, no matter how B wins, the sum of A's and B's must be 8.",
		"2.Ҫʹ�׻�ʤ���ױ���������Ϊǿ����2002����8�ı�����֮�󲻹��������ã����õĺ����õĵĺͱ�����8��"},
		{"3. First of all, 2002 is not a multiple of 8, so 2002/8=250... 2. The remaining numbers are the quantity that A needs to take, which is also the number adjusted to 2002. After adjusting, B starts taking, for example, B takes a, 1<a<7, and then A needs to take 8-a, so that the final number is 8",
		"3.����2002����8�ı���������2002/8=250����2�����µ������Ǽ�Ҫ�õ�������Ҳ�ǵ�2002���������ú��ҿ�ʼ�ã���������a����1<a<7��Ȼ��׾�Ҫ��8-a������������ʹ�����8��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ���� �߼�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ��������2002���������������������ӣ�ֻҪ˭�õ����һ�������߻�ʤ��ÿ��ֻ����1��7�����ӣ�Ҫʹ�ױ�Ӯ��Ҫ������"));
	ColPrintf(PrintfCol::����, Lang("1.����������ֻ����8������Ϊ�����õ�ʱ��ʹֻ��һ����Ҳ����������������7��Ҳ����ȫ������"));
	ColPrintf(PrintfCol::����, Lang("2.Ҫʹ�׻�ʤ���ױ���������Ϊǿ����2002����8�ı�����֮�󲻹��������ã����õĺ����õĵĺͱ�����8��"));
	ColPrintf(PrintfCol::����, Lang("3.����2002����8�ı���������2002/8=250����2�����µ������Ǽ�Ҫ�õ�������Ҳ�ǵ�2002���������ú��ҿ�ʼ�ã���������a����1<a<7��Ȼ��׾�Ҫ��8-a������������ʹ�����8��"));
}
void P82_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example Four Logical Reasoning","P81 ���� �߼�����"},
		{"Title: The school has decided to purchase coal in early autumn. Normally, 15 tons of coal are consumed in winter. If the winter is relatively warm, 10 tons of coal are needed, and if it is cold, 20 tons are needed. The prices are 100 yuan per ton, 150 yuan per ton, and 200 yuan per ton, respectively",
		"��Ŀ��ѧУ�����ڳ��ﹺ��ú����������Ҫ����15�ֵ�ú����������Ƚ�ů��Ҫ10��ú���������Ҫ20�֣��۸�ֱ�Ϊ100Ԫһ�֣�150Ԫһ�֣�200Ԫһ��"},
		{"There are three options: one is to purchase 10 tons of coal, the other is to purchase 15 tons of coal, and the third is to purchase 20 tons of coalWe all know that buying things when they are cheap is the most cost-effective, and the more they are, the more cost-effective they are",
		"1.���������ַ�����һ���ǹ�10��ú�����ǹ�15��ú�����ǹ�20��ú�����ǰ���������һ�飬���Ƕ�֪������������ʱ�������ģ�����Խ����"},
		{"2. The first option is to purchase 100 * 10=1000 yuan during warm winter, and 200 * 10=2000 yuan during cold winter. Normally, it would cost 5 * 150=750 yuan, so it would cost 3000 yuan",
		"2.��һ�ַ�����ů��ʱҪ100*10=1000��������ʱ��Ҫ�ɹ�200*10=2000Ԫ������Ҫ5*150=750Ԫ����Ҫ3000"},
		{"3. The second option is to spend 1500 yuan (100 * 15) in warm winter, waste 500 yuan (5 * 100=500) in warm winter, and 1000 yuan (5 * 200=1000) in cold winter, at least 3000 yuan",
		"3.�ڶ��֣�ů��ʱҪ100*15=1500��ů���˷�5*100=500����Ҫ�ٽ�5��ú������Ҫ2500Ԫ"},
		{"4. The third option is to spend 100 * 20=2000 yuan in warm winter, 500 yuan in normal conditions, and 1000 yuan in cold winter, which costs 2000 yuan",
		"4.��3�֣�ů��ʱҪ100*20=2000Ԫ������ʱ�˷�500Ԫ�������˷�1000Ԫ��Ҫ2000Ԫ"},
		{"Therefore, the best option is to purchase 2000 yuan during the warm winter season",
		"5.������ů��ʱ�ɹ�2000Ԫ�ķ������"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ���� �߼�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ѧУ�����ڳ��ﹺ��ú����������Ҫ����15�ֵ�ú����������Ƚ�ů��Ҫ10��ú���������Ҫ20�֣��۸�ֱ�Ϊ100Ԫһ�֣�150Ԫһ�֣�200Ԫһ��"));
	ColPrintf(PrintfCol::����, Lang("1.���������ַ�����һ���ǹ�10��ú�����ǹ�15��ú�����ǹ�20��ú�����ǰ���������һ�飬���Ƕ�֪������������ʱ�������ģ�����Խ����"));
	ColPrintf(PrintfCol::����, Lang("2.��һ�ַ�����ů��ʱҪ100*10=1000��������ʱ��Ҫ�ɹ�200*10=2000Ԫ������Ҫ5*150=750Ԫ����Ҫ3000"));
	ColPrintf(PrintfCol::����, Lang("3.�ڶ��֣�ů��ʱҪ100*15=1500��ů���˷�5*100=500����Ҫ�ٽ�5��ú������Ҫ2500Ԫ"));
	ColPrintf(PrintfCol::����, Lang("4.��3�֣�ů��ʱҪ100*20=2000Ԫ������ʱ�˷�500Ԫ�������˷�1000Ԫ��Ҫ2000Ԫ"));
	ColPrintf(PrintfCol::����, Lang("5.������ů��ʱ�ɹ�2000Ԫ�ķ������"));
}
void P82_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 5 Logical Reasoning","P81 ���� �߼�����"},
		{"Title: A certain product number is a three digit number, and there are several three digit numbers below: 874��765��123��364��925, where one of the three digit numbers is a digit of this code. So, what is this code",
		"��Ŀ��ĳ��Ʒ�����һ����λ�����������⼸����λ����874��765��123��364��925������ÿһ����λ���е�ĳһλ������������һ��λ����ô��������Ƕ���"},
		{"1. There are a total of 3, 4, and 5 possible bits. Assuming that 3 in 123 is the bit of this encoding, then 1 is not a hundred bit, 2 is not a ten bit, 2 is not a ten bit, 5 is not a single bit, so 9 is a hundred bit. Therefore, 874765364 needs to be excluded, so this solution is excluded",
		"1.��һ����3��4��5�⼸�����ܵĸ�λ�����Ǽ���123�е�3�����������ĸ�λ����ô1�Ͳ��ǰ�λ��2�Ͳ���ʮλ��2����ʮλ��5���Ǹ�λ����9���ǰ�λ����Ҫ�ų�874��765��364�ͱ��ų��ˣ�������һ�������ų�"},
		{"2. The second option, where the individual digit is 5, the hundredth digit is 9, and the tenth digit is 2, is excluded. The result is the same as the previous option, so this option is excluded",
		"2.�ڶ�����������λ��5����λ�Ǿŵı��ų���ʮλ��2�ı��ų����������һ������һ����������������ų�"},
		{"3. The third option is that the individual digit is 4, the hundreds digit is not 3 or 8, and the tens digit is not 6 or 7, so only 2 can be selected for the tens digit and 7 can be selected for the hundreds digit. Therefore, the answer is 724",
		"3.��������������λ��4����λ����3��8��ʮλ����6��7������ʮλֻ��ѡ2����λֻ��ѡ7�����Դ���724"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P81 ���� �߼�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ĳ��Ʒ�����һ����λ�����������⼸����λ����874��765��123��364��925������ÿһ����λ���е�ĳһλ������������һ��λ����ô��������Ƕ���"));
	ColPrintf(PrintfCol::����, Lang("1.��һ����3��4��5�⼸�����ܵĸ�λ�����Ǽ���123�е�3�����������ĸ�λ����ô1�Ͳ��ǰ�λ��2�Ͳ���ʮλ��2����ʮλ��5���Ǹ�λ����9���ǰ�λ����Ҫ�ų�874��765��364�ͱ��ų��ˣ�������һ�������ų�"));
	ColPrintf(PrintfCol::����, Lang("2.�ڶ�����������λ��5����λ�Ǿŵı��ų���ʮλ��2�ı��ų����������һ������һ����������������ų�"));
	ColPrintf(PrintfCol::����, Lang("3.��������������λ��4����λ����3��8��ʮλ����6��7������ʮλֻ��ѡ2����λֻ��ѡ7�����Դ���724"));
}
void P82()
{
	P82_1();
	ColPrintf(PrintfCol::����, "");
	P82_2();
	ColPrintf(PrintfCol::����, "");
	P82_3();
	ColPrintf(PrintfCol::����, "");
	P82_4();
	ColPrintf(PrintfCol::����, "");
	P82_5();
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
void P82_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P82();
	Lang.SetCurLanguage(LanguageLib::English);
	P82();
	ColPrintf(PrintfCol::����, "");

}