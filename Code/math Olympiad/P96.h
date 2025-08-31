#pragma once
void P96_1()
{
	LanguageLib::LanguageTableT Language = {
		{"Division of P96 Example One Number","P96 例一 数的整除"},
		{"Title: 2772，1440，20110101 These numbers, which ones can be divided by 3, 9, 4, 8, 11, 7",
		"题目：2772，1440，20110101这些数，那些能被3，9，4，8，11，7整除"},
		{"1. Let's first determine if 2772 can be divided by them. The multiples of 3 can be obtained by adding them together. 2+7+7+2=18, which is a multiple of three and a multiple of 9. The factor of 9 is the same because it has 3, and the factor of 9 is 18, so 2772 has factors of 3 and 9",
		"1.我们先判断2772是不是可被它们整除，3的倍数直接用各位相加得到，2+7+7+2=18，是三的倍数，9的倍数，9的因数因为有3，所以9也是一样，9的倍数有18，所以2772的因数有3，9"},
		{"2. Then we can determine if there is a multiple of 4 that is 2772. Firstly, 100 can be divided by 4, so we must check if the last two digits can be divided by 4. If so, then 2772 is a multiple of 4, and the last two digits are 72. Therefore, the multiple of 4 is 2772",
		"2.然后我们再来判断4的倍数有没有2772，首先100可以整除4，所以我们必须看后两位是否可以被4整除，如果可以，那么2772就是4的倍数，后两位是72，4可以整除所以4的倍数有2772"},
		{"3. The final judgment is 8, because 1000 can be divided by 8, so we only need to check if the last three digits can be divided by 8. The last three digits are 772, so they can be divided by it",
		"3.后面判断的是8，因为1000可以被8整除，所以我们只需看后三位是否能被8整除就行了，后三位是772，所以能被它整除"},
		{"4. Let's take a look at 11, 7, and so on. Just use the truncation method to do these. Subtracting the first 2 from its tail 772 is equal to 770770. 770 is both a multiple of 7 and 11, so 2772 can be divided by these numbers",
		"4.再来看11，7这些，这些直接用斩尾法做就行了，用它的尾772减去头2就等于770，770既是7的倍数又是11的倍数，所以2772可以被这些数整除"},
		{"5. To determine 1440, first it is a multiple of 3, 1+4+4+0=9, which is a multiple of 3 because it is also a multiple of 9. Then determine 4, taking the last two digits of 40, which is a multiple of 4",
		"5.判断1440，首先是3的倍数，1+4+4+0=9，是3的倍数，因为是9也是9的倍数，再来判断4，取后两位40，是4的倍数"},
		{"6. Then determine the multiple of 8, take the last three digits 440, which is a multiple of 8, so 1440 is a multiple of 8.",
		"6.再来判断8的倍数，取后三位440，是8的倍数，所以1440是8的倍数。"},
		{"7. Determine the multiples of 11 and 7 using the truncation method. If 1440 is truncated, it will be 440. Subtracting the previous one will result in 439, which is clearly not a multiple of 7 and 11. Therefore, it cannot be divided by these numbers",
		"7.判断11，7的倍数，用斩尾法，1440斩尾后是440，减去前面的是439，明显不是7和11的倍数，所以不能被这些数整除"},
		{"8. Judging 20110101, the sum of 2+1+1+1+1=6. 6 is a multiple of 3, but not a multiple of 9, so it is excluded.",
		"8.判断20110101，各位加起来2+1+1+1+1=6，6是3的倍数，但不是9的倍数，所以排除。"},
		{"9.So only 2772 meets the conditions",
		"9.所以只有2772满足条件"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P96 例一 数的整除"));
	ColPrintf(PrintfCol::标题, Lang("题目：2772，1440，20110101这些数，那些能被3，9，4，8，11，7整除"));
	ColPrintf(PrintfCol::方法, Lang("1.我们先判断2772是不是可被它们整除，3的倍数直接用各位相加得到，2+7+7+2=18，是三的倍数，9的倍数，9的因数因为有3，所以9也是一样，9的倍数有18，所以2772的因数有3，9"));
	ColPrintf(PrintfCol::方法, Lang("2.然后我们再来判断4的倍数有没有2772，首先100可以整除4，所以我们必须看后两位是否可以被4整除，如果可以，那么2772就是4的倍数，后两位是72，4可以整除所以4的倍数有2772"));
	ColPrintf(PrintfCol::方法, Lang("3.后面判断的是8，因为1000可以被8整除，所以我们只需看后三位是否能被8整除就行了，后三位是772，所以能被它整除"));
	ColPrintf(PrintfCol::方法, Lang("4.再来看11，7这些，这些直接用斩尾法做就行了，用它的尾772减去头2就等于770，770既是7的倍数又是11的倍数，所以2772可以被这些数整除"));
	ColPrintf(PrintfCol::方法, Lang("5.判断1440，首先是3的倍数，1+4+4+0=9，是3的倍数，因为是9也是9的倍数，再来判断4，取后两位40，是4的倍数"));
	ColPrintf(PrintfCol::方法, Lang("6.再来判断8的倍数，取后三位440，是8的倍数，所以1440是8的倍数。"));
	ColPrintf(PrintfCol::方法, Lang("7.判断11，7的倍数，用斩尾法，1440斩尾后是440，减去前面的是439，明显不是7和11的倍数，所以不能被这些数整除"));
	ColPrintf(PrintfCol::方法, Lang("8.判断20110101，各位加起来2+1+1+1+1=6，6是3的倍数，但不是9的倍数，所以排除。"));
	ColPrintf(PrintfCol::方法, Lang("9.所以只有2772满足条件"));
}
void P96_2()
{
	LanguageLib::LanguageTableT Language = {
		{"Division of P96 Example Two Numbers","P96 例二 数的整除"},
		{"Title: 12345678910111213141516171819... 20082009 Divide by 9 and what is the remainder",
		"题目：12345678910111213141516171819……20082009除以9余几"},
		{"1. Let's first find its pattern, starting from 1 and continuing until 9. 9 is a multiple of 9, so we can group every 9, and the last number is a multiple of 9, such as 123456789 in a group",
		"1.我们先找它的规律首先从1开始一直到9，9是9的倍数，所以我们可以每9个一组，最后的那个数是9的倍数，比如123456789一组"},
		{"2. Since the last digit of each group is a multiple of 9, removing 9 from the last digit in each group will result in a remainder of 0. Then, we will analyze the digits before the multiples of 9",
		"2.因为每一组的最后都是9的倍数，所以用9去除每组中最后一个数余数都是0，然后我们再来分析9的倍数前面的数字"},
		{"To make it a multiple of 9, we need to add 8, which happens to be 8 in each group. They complement each other, and then let's look at 2. To make it a multiple of 9, we need to add 7, which is selected from each group to complement",
		"3.1我们要使它是9的倍数就需要加上8，每组中正好有8，它们相互配合，然后再来看2的，我们要使它是9的倍数必须就要加上7，每组中选出7来配合"},
		{"4. Keep doing this until the division is complete, and you will find that there are no numbers that are not paired with a certain pair, indicating that this group is a multiple of 9.",
		"4.这样做一直到分完后，就会发现，没有没有与某个配对的数，这说明这组是9的倍数。"},
		{"5. Let's take a look at the next group, 101112131415161718. The last 18 is a multiple of 9. Let's take a look at the first 10, which can be combined with 17 to form 27. 27 is a multiple of 9, and 11 and 16 also form 27 when combined",
		"5.我们再来看下一组，101112131415161718，最后的18是9的倍数，我们再来看前面10可以与17配合组成27，27是9的倍数，11和16配合也是27"},
		{"6. In the same situation as the previous group, both can be divided by 9. In this case, because the last one must be a multiple of 9, the preceding numbers must be subtracted. 9-1=8, and the first and last can be paired, forming this situation",
		"6.和上一组一个情况，都是可以被9整除的，这种情况，因为最后一个必定是9的倍数，前面的数必须减去，9-1=8，最前面和最后面可以配对，形成了这种情况"},
		{"7. So the following groups have no remainder, so we don't need to pay attention to them. What we need to focus on is the last few numbers, 2008 and 2009. The first number is 2007, 2+7=9, and the first number is a multiple of 9. That is to say, the last two numbers, 2008 and 2009, have not yet completed the loop",
		"7.所以后面的组都是一样没有余数的，所以我们并不需要关注，我们要关注的是最后几个数，2008和2009，前面的那个数是2007，2+7=9，前面的是9的倍数，也就是说最后20082009是还没有循环完"},
		{"8. Don't worry about the previous ones, just consider the remainder of dividing 2008 and 2009 by 9. Add them together, 21/9=2... 3",
		"8.之前的不用考虑，直接考虑20082009除以9的余数，各位相加21，21/9=2……3."},
		{"9.So the remainder of 12345678910111213141516171819... 20082009 is 3",
		"9.所以12345678910111213141516171819……20082009的余数是3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P96 例二 数的整除"));
	ColPrintf(PrintfCol::标题, Lang("题目：12345678910111213141516171819……20082009除以9余几"));
	ColPrintf(PrintfCol::方法, Lang("1.我们先找它的规律首先从1开始一直到9，9是9的倍数，所以我们可以每9个一组，最后的那个数是9的倍数，比如123456789一组"));
	ColPrintf(PrintfCol::方法, Lang("2.因为每一组的最后都是9的倍数，所以用9去除每组中最后一个数余数都是0，然后我们再来分析9的倍数前面的数字"));
	ColPrintf(PrintfCol::方法, Lang("3.1我们要使它是9的倍数就需要加上8，每组中正好有8，它们相互配合，然后再来看2的，我们要使它是9的倍数必须就要加上7，每组中选出7来配合"));
	ColPrintf(PrintfCol::方法, Lang("4.这样做一直到分完后，就会发现，没有没有与某个配对的数，这说明这组是9的倍数。"));
	ColPrintf(PrintfCol::方法, Lang("5.我们再来看下一组，101112131415161718，最后的18是9的倍数，我们再来看前面10可以与17配合组成27，27是9的倍数，11和16配合也是27"));
	ColPrintf(PrintfCol::方法, Lang("6.和上一组一个情况，都是可以被9整除的，这种情况，因为最后一个必定是9的倍数，前面的数必须减去，9-1=8，最前面和最后面可以配对，形成了这种情况"));
	ColPrintf(PrintfCol::方法, Lang("7.所以后面的组都是一样没有余数的，所以我们并不需要关注，我们要关注的是最后几个数，2008和2009，前面的那个数是2007，2+7=9，前面的是9的倍数，也就是说最后20082009是还没有循环完"));
	ColPrintf(PrintfCol::方法, Lang("8.之前的不用考虑，直接考虑20082009除以9的余数，各位相加21，21/9=2……3."));
	ColPrintf(PrintfCol::方法, Lang("9.所以12345678910111213141516171819……20082009的余数是3"));
}
void P96_3()
{
	LanguageLib::LanguageTableT Language = {
		{"Division of P96 Example Three Numbers","P96 例三 数的整除"},
		{"Title: 2007 [] 12 [] 2 can be divided by 9 and 11, what is this number",
		"题目：2007[]12[]2能被9和11整除，这个数是多少"},
		{"1. It must be divisible by 9 and 11, and it must be their common multiple. We can first find the least common multiple, and then because the least common multiple does not miss any common multiple when multiplying by 2, we can first find the least common multiple",
		"1.必定可以被9和11整除，肯定是它们的共倍数，我们可以先求出最小公倍数，然后因为最小公倍数每次乘2时不会放过任何公倍数，所以先求最小公倍数"},
		{"2. Because 9 and 11 are coprime, the least common multiple is their product, which is 9 * 11=99",
		"2.因为9和11是互质的，所以最小公倍数就是它们的乘积，也就是9*11=99"},
		{"3. Then divide this number by 99, because it needs to be divided evenly, so it must be divided completely",
		"3.然后用这个数除以99，因为要整除，所以必须除尽"},
		{"4. We all know how to find multiples of 9. Here, we add an extra ten digits of 9 to 9. Correspondingly, when we add each digit, we must add two and two digits together to determine its number of digits",
		"4.我们都知道9的倍数如何求，这里是把9多加了一个十位9，那么相应的，我们加各位时，必须两位两位的相加才行，才能对其位数"},
		{"5. We will add the two digits and list them vertically, and the final sum will definitely be 99.",
		"5.我们再把两位相加列为竖式，最后的和肯定是99。"},
		{"6.After listing the vertical equations, because 2+2+[]+2=9, [] is 3",
		"6.列好竖式后因为2+2+[]+2=9，所以[]就是3"},
		{"7. Looking at the ten digits below, []+1+7=9, then []=1",
		"7.下面看十位，[]+1+7=9,那么[]=1"},
		{"8.So this number is 20073121",
		"8.所以这个数字是20073121"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P96 例三 数的整除"));
	ColPrintf(PrintfCol::标题, Lang("题目：2007[]12[]2能被9和11整除，这个数是多少"));
	ColPrintf(PrintfCol::方法, Lang("1.必定可以被9和11整除，肯定是它们的共倍数，我们可以先求出最小公倍数，然后因为最小公倍数每次乘2时不会放过任何公倍数，所以先求最小公倍数"));
	ColPrintf(PrintfCol::方法, Lang("2.因为9和11是互质的，所以最小公倍数就是它们的乘积，也就是9*11=99"));
	ColPrintf(PrintfCol::方法, Lang("3.然后用这个数除以99，因为要整除，所以必须除尽"));
	ColPrintf(PrintfCol::方法, Lang("4.我们都知道9的倍数如何求，这里是把9多加了一个十位9，那么相应的，我们加各位时，必须两位两位的相加才行，才能对其位数"));
	ColPrintf(PrintfCol::方法, Lang("5.我们再把两位相加列为竖式，最后的和肯定是99。"));
	ColPrintf(PrintfCol::方法, Lang("6.列好竖式后因为2+2+[]+2=9，所以[]就是3"));
	ColPrintf(PrintfCol::方法, Lang("7.下面看十位，[]+1+7=9,那么[]=1"));
	ColPrintf(PrintfCol::方法, Lang("8.所以这个数字是20073121"));
}
void P96()
{
	P96_1();
	ColPrintf(PrintfCol::方法, "");
	P96_2();
	ColPrintf(PrintfCol::方法, "");
	P96_3();
	ColPrintf(PrintfCol::方法, "");
	//P94_4();
	ColPrintf(PrintfCol::方法, "");
	//P89_2();
	ColPrintf(PrintfCol::方法, "");
	//P89_3();
	ColPrintf(PrintfCol::方法, "");
	//P89_4();
	ColPrintf(PrintfCol::方法, "");
	//P89_5();
	ColPrintf(PrintfCol::方法, "");
	//P73_2();
	ColPrintf(PrintfCol::方法, "");
	//P73_3();
	//ColPrintf(PrintfCol::方法, "");
	//P73_4();
	//ColPrintf(PrintfCol::方法, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::方法, "");
	P55_3();
	ColPrintf(PrintfCol::方法, "");*/
}
void P96_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P96();
	Lang.SetCurLanguage(LanguageLib::English);
	P96();
	ColPrintf(PrintfCol::方法, "");

}