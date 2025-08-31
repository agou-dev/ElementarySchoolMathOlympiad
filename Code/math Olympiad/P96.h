#pragma once
void P96_1()
{
	LanguageLib::LanguageTableT Language = {
		{"Division of P96 Example One Number","P96 ��һ ��������"},
		{"Title: 2772��1440��20110101 These numbers, which ones can be divided by 3, 9, 4, 8, 11, 7",
		"��Ŀ��2772��1440��20110101��Щ������Щ�ܱ�3��9��4��8��11��7����"},
		{"1. Let's first determine if 2772 can be divided by them. The multiples of 3 can be obtained by adding them together. 2+7+7+2=18, which is a multiple of three and a multiple of 9. The factor of 9 is the same because it has 3, and the factor of 9 is 18, so 2772 has factors of 3 and 9",
		"1.�������ж�2772�ǲ��ǿɱ�����������3�ı���ֱ���ø�λ��ӵõ���2+7+7+2=18�������ı�����9�ı�����9��������Ϊ��3������9Ҳ��һ����9�ı�����18������2772��������3��9"},
		{"2. Then we can determine if there is a multiple of 4 that is 2772. Firstly, 100 can be divided by 4, so we must check if the last two digits can be divided by 4. If so, then 2772 is a multiple of 4, and the last two digits are 72. Therefore, the multiple of 4 is 2772",
		"2.Ȼ�����������ж�4�ı�����û��2772������100��������4���������Ǳ��뿴����λ�Ƿ���Ա�4������������ԣ���ô2772����4�ı���������λ��72��4������������4�ı�����2772"},
		{"3. The final judgment is 8, because 1000 can be divided by 8, so we only need to check if the last three digits can be divided by 8. The last three digits are 772, so they can be divided by it",
		"3.�����жϵ���8����Ϊ1000���Ա�8��������������ֻ�迴����λ�Ƿ��ܱ�8���������ˣ�����λ��772�������ܱ�������"},
		{"4. Let's take a look at 11, 7, and so on. Just use the truncation method to do these. Subtracting the first 2 from its tail 772 is equal to 770770. 770 is both a multiple of 7 and 11, so 2772 can be divided by these numbers",
		"4.������11��7��Щ����Щֱ����նβ���������ˣ�������β772��ȥͷ2�͵���770��770����7�ı�������11�ı���������2772���Ա���Щ������"},
		{"5. To determine 1440, first it is a multiple of 3, 1+4+4+0=9, which is a multiple of 3 because it is also a multiple of 9. Then determine 4, taking the last two digits of 40, which is a multiple of 4",
		"5.�ж�1440��������3�ı�����1+4+4+0=9����3�ı�������Ϊ��9Ҳ��9�ı����������ж�4��ȡ����λ40����4�ı���"},
		{"6. Then determine the multiple of 8, take the last three digits 440, which is a multiple of 8, so 1440 is a multiple of 8.",
		"6.�����ж�8�ı�����ȡ����λ440����8�ı���������1440��8�ı�����"},
		{"7. Determine the multiples of 11 and 7 using the truncation method. If 1440 is truncated, it will be 440. Subtracting the previous one will result in 439, which is clearly not a multiple of 7 and 11. Therefore, it cannot be divided by these numbers",
		"7.�ж�11��7�ı�������նβ����1440նβ����440����ȥǰ�����439�����Բ���7��11�ı��������Բ��ܱ���Щ������"},
		{"8. Judging 20110101, the sum of 2+1+1+1+1=6. 6 is a multiple of 3, but not a multiple of 9, so it is excluded.",
		"8.�ж�20110101����λ������2+1+1+1+1=6��6��3�ı�����������9�ı����������ų���"},
		{"9.So only 2772 meets the conditions",
		"9.����ֻ��2772��������"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P96 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��2772��1440��20110101��Щ������Щ�ܱ�3��9��4��8��11��7����"));
	ColPrintf(PrintfCol::����, Lang("1.�������ж�2772�ǲ��ǿɱ�����������3�ı���ֱ���ø�λ��ӵõ���2+7+7+2=18�������ı�����9�ı�����9��������Ϊ��3������9Ҳ��һ����9�ı�����18������2772��������3��9"));
	ColPrintf(PrintfCol::����, Lang("2.Ȼ�����������ж�4�ı�����û��2772������100��������4���������Ǳ��뿴����λ�Ƿ���Ա�4������������ԣ���ô2772����4�ı���������λ��72��4������������4�ı�����2772"));
	ColPrintf(PrintfCol::����, Lang("3.�����жϵ���8����Ϊ1000���Ա�8��������������ֻ�迴����λ�Ƿ��ܱ�8���������ˣ�����λ��772�������ܱ�������"));
	ColPrintf(PrintfCol::����, Lang("4.������11��7��Щ����Щֱ����նβ���������ˣ�������β772��ȥͷ2�͵���770��770����7�ı�������11�ı���������2772���Ա���Щ������"));
	ColPrintf(PrintfCol::����, Lang("5.�ж�1440��������3�ı�����1+4+4+0=9����3�ı�������Ϊ��9Ҳ��9�ı����������ж�4��ȡ����λ40����4�ı���"));
	ColPrintf(PrintfCol::����, Lang("6.�����ж�8�ı�����ȡ����λ440����8�ı���������1440��8�ı�����"));
	ColPrintf(PrintfCol::����, Lang("7.�ж�11��7�ı�������նβ����1440նβ����440����ȥǰ�����439�����Բ���7��11�ı��������Բ��ܱ���Щ������"));
	ColPrintf(PrintfCol::����, Lang("8.�ж�20110101����λ������2+1+1+1+1=6��6��3�ı�����������9�ı����������ų���"));
	ColPrintf(PrintfCol::����, Lang("9.����ֻ��2772��������"));
}
void P96_2()
{
	LanguageLib::LanguageTableT Language = {
		{"Division of P96 Example Two Numbers","P96 ���� ��������"},
		{"Title: 12345678910111213141516171819... 20082009 Divide by 9 and what is the remainder",
		"��Ŀ��12345678910111213141516171819����20082009����9�༸"},
		{"1. Let's first find its pattern, starting from 1 and continuing until 9. 9 is a multiple of 9, so we can group every 9, and the last number is a multiple of 9, such as 123456789 in a group",
		"1.�����������Ĺ������ȴ�1��ʼһֱ��9��9��9�ı������������ǿ���ÿ9��һ�飬�����Ǹ�����9�ı���������123456789һ��"},
		{"2. Since the last digit of each group is a multiple of 9, removing 9 from the last digit in each group will result in a remainder of 0. Then, we will analyze the digits before the multiples of 9",
		"2.��Ϊÿһ��������9�ı�����������9ȥ��ÿ�������һ������������0��Ȼ��������������9�ı���ǰ�������"},
		{"To make it a multiple of 9, we need to add 8, which happens to be 8 in each group. They complement each other, and then let's look at 2. To make it a multiple of 9, we need to add 7, which is selected from each group to complement",
		"3.1����Ҫʹ����9�ı�������Ҫ����8��ÿ����������8�������໥��ϣ�Ȼ��������2�ģ�����Ҫʹ����9�ı��������Ҫ����7��ÿ����ѡ��7�����"},
		{"4. Keep doing this until the division is complete, and you will find that there are no numbers that are not paired with a certain pair, indicating that this group is a multiple of 9.",
		"4.������һֱ������󣬾ͻᷢ�֣�û��û����ĳ����Ե�������˵��������9�ı�����"},
		{"5. Let's take a look at the next group, 101112131415161718. The last 18 is a multiple of 9. Let's take a look at the first 10, which can be combined with 17 to form 27. 27 is a multiple of 9, and 11 and 16 also form 27 when combined",
		"5.������������һ�飬101112131415161718������18��9�ı���������������ǰ��10������17������27��27��9�ı�����11��16���Ҳ��27"},
		{"6. In the same situation as the previous group, both can be divided by 9. In this case, because the last one must be a multiple of 9, the preceding numbers must be subtracted. 9-1=8, and the first and last can be paired, forming this situation",
		"6.����һ��һ����������ǿ��Ա�9�����ģ������������Ϊ���һ���ض���9�ı�����ǰ����������ȥ��9-1=8����ǰ�������������ԣ��γ����������"},
		{"7. So the following groups have no remainder, so we don't need to pay attention to them. What we need to focus on is the last few numbers, 2008 and 2009. The first number is 2007, 2+7=9, and the first number is a multiple of 9. That is to say, the last two numbers, 2008 and 2009, have not yet completed the loop",
		"7.���Ժ�����鶼��һ��û�������ģ��������ǲ�����Ҫ��ע������Ҫ��ע������󼸸�����2008��2009��ǰ����Ǹ�����2007��2+7=9��ǰ�����9�ı�����Ҳ����˵���20082009�ǻ�û��ѭ����"},
		{"8. Don't worry about the previous ones, just consider the remainder of dividing 2008 and 2009 by 9. Add them together, 21/9=2... 3",
		"8.֮ǰ�Ĳ��ÿ��ǣ�ֱ�ӿ���20082009����9����������λ���21��21/9=2����3."},
		{"9.So the remainder of 12345678910111213141516171819... 20082009 is 3",
		"9.����12345678910111213141516171819����20082009��������3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P96 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��12345678910111213141516171819����20082009����9�༸"));
	ColPrintf(PrintfCol::����, Lang("1.�����������Ĺ������ȴ�1��ʼһֱ��9��9��9�ı������������ǿ���ÿ9��һ�飬�����Ǹ�����9�ı���������123456789һ��"));
	ColPrintf(PrintfCol::����, Lang("2.��Ϊÿһ��������9�ı�����������9ȥ��ÿ�������һ������������0��Ȼ��������������9�ı���ǰ�������"));
	ColPrintf(PrintfCol::����, Lang("3.1����Ҫʹ����9�ı�������Ҫ����8��ÿ����������8�������໥��ϣ�Ȼ��������2�ģ�����Ҫʹ����9�ı��������Ҫ����7��ÿ����ѡ��7�����"));
	ColPrintf(PrintfCol::����, Lang("4.������һֱ������󣬾ͻᷢ�֣�û��û����ĳ����Ե�������˵��������9�ı�����"));
	ColPrintf(PrintfCol::����, Lang("5.������������һ�飬101112131415161718������18��9�ı���������������ǰ��10������17������27��27��9�ı�����11��16���Ҳ��27"));
	ColPrintf(PrintfCol::����, Lang("6.����һ��һ����������ǿ��Ա�9�����ģ������������Ϊ���һ���ض���9�ı�����ǰ����������ȥ��9-1=8����ǰ�������������ԣ��γ����������"));
	ColPrintf(PrintfCol::����, Lang("7.���Ժ�����鶼��һ��û�������ģ��������ǲ�����Ҫ��ע������Ҫ��ע������󼸸�����2008��2009��ǰ����Ǹ�����2007��2+7=9��ǰ�����9�ı�����Ҳ����˵���20082009�ǻ�û��ѭ����"));
	ColPrintf(PrintfCol::����, Lang("8.֮ǰ�Ĳ��ÿ��ǣ�ֱ�ӿ���20082009����9����������λ���21��21/9=2����3."));
	ColPrintf(PrintfCol::����, Lang("9.����12345678910111213141516171819����20082009��������3"));
}
void P96_3()
{
	LanguageLib::LanguageTableT Language = {
		{"Division of P96 Example Three Numbers","P96 ���� ��������"},
		{"Title: 2007 [] 12 [] 2 can be divided by 9 and 11, what is this number",
		"��Ŀ��2007[]12[]2�ܱ�9��11������������Ƕ���"},
		{"1. It must be divisible by 9 and 11, and it must be their common multiple. We can first find the least common multiple, and then because the least common multiple does not miss any common multiple when multiplying by 2, we can first find the least common multiple",
		"1.�ض����Ա�9��11�������϶������ǵĹ����������ǿ����������С��������Ȼ����Ϊ��С������ÿ�γ�2ʱ����Ź��κι�����������������С������"},
		{"2. Because 9 and 11 are coprime, the least common multiple is their product, which is 9 * 11=99",
		"2.��Ϊ9��11�ǻ��ʵģ�������С�������������ǵĳ˻���Ҳ����9*11=99"},
		{"3. Then divide this number by 99, because it needs to be divided evenly, so it must be divided completely",
		"3.Ȼ�������������99����ΪҪ���������Ա������"},
		{"4. We all know how to find multiples of 9. Here, we add an extra ten digits of 9 to 9. Correspondingly, when we add each digit, we must add two and two digits together to determine its number of digits",
		"4.���Ƕ�֪��9�ı�������������ǰ�9�����һ��ʮλ9����ô��Ӧ�ģ����ǼӸ�λʱ��������λ��λ����Ӳ��У����ܶ���λ��"},
		{"5. We will add the two digits and list them vertically, and the final sum will definitely be 99.",
		"5.�����ٰ���λ�����Ϊ��ʽ�����ĺͿ϶���99��"},
		{"6.After listing the vertical equations, because 2+2+[]+2=9, [] is 3",
		"6.�к���ʽ����Ϊ2+2+[]+2=9������[]����3"},
		{"7. Looking at the ten digits below, []+1+7=9, then []=1",
		"7.���濴ʮλ��[]+1+7=9,��ô[]=1"},
		{"8.So this number is 20073121",
		"8.�������������20073121"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P96 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��2007[]12[]2�ܱ�9��11������������Ƕ���"));
	ColPrintf(PrintfCol::����, Lang("1.�ض����Ա�9��11�������϶������ǵĹ����������ǿ����������С��������Ȼ����Ϊ��С������ÿ�γ�2ʱ����Ź��κι�����������������С������"));
	ColPrintf(PrintfCol::����, Lang("2.��Ϊ9��11�ǻ��ʵģ�������С�������������ǵĳ˻���Ҳ����9*11=99"));
	ColPrintf(PrintfCol::����, Lang("3.Ȼ�������������99����ΪҪ���������Ա������"));
	ColPrintf(PrintfCol::����, Lang("4.���Ƕ�֪��9�ı�������������ǰ�9�����һ��ʮλ9����ô��Ӧ�ģ����ǼӸ�λʱ��������λ��λ����Ӳ��У����ܶ���λ��"));
	ColPrintf(PrintfCol::����, Lang("5.�����ٰ���λ�����Ϊ��ʽ�����ĺͿ϶���99��"));
	ColPrintf(PrintfCol::����, Lang("6.�к���ʽ����Ϊ2+2+[]+2=9������[]����3"));
	ColPrintf(PrintfCol::����, Lang("7.���濴ʮλ��[]+1+7=9,��ô[]=1"));
	ColPrintf(PrintfCol::����, Lang("8.�������������20073121"));
}
void P96()
{
	P96_1();
	ColPrintf(PrintfCol::����, "");
	P96_2();
	ColPrintf(PrintfCol::����, "");
	P96_3();
	ColPrintf(PrintfCol::����, "");
	//P94_4();
	ColPrintf(PrintfCol::����, "");
	//P89_2();
	ColPrintf(PrintfCol::����, "");
	//P89_3();
	ColPrintf(PrintfCol::����, "");
	//P89_4();
	ColPrintf(PrintfCol::����, "");
	//P89_5();
	ColPrintf(PrintfCol::����, "");
	//P73_2();
	ColPrintf(PrintfCol::����, "");
	//P73_3();
	//ColPrintf(PrintfCol::����, "");
	//P73_4();
	//ColPrintf(PrintfCol::����, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::����, "");
	P55_3();
	ColPrintf(PrintfCol::����, "");*/
}
void P96_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P96();
	Lang.SetCurLanguage(LanguageLib::English);
	P96();
	ColPrintf(PrintfCol::����, "");

}