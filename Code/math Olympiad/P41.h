#pragma once
void P41_1()
{
	LanguageLib::LanguageTableT Language = {
		
		{"P41 Example 1: Addition and multiplication problem","P41例一 加乘问题"},
		{"Question: How many combinations of RMB 5 cents, 2 cents, and 1 cent make up 1 yuan?",
		"题目：人民币的5角，2角，1角有多少种组合成1元?"},
		{"Analysis: For this problem, we can first enumerate the cases where 5 corners are 0 and 2 corners are 0. Increasing the number of 2 corners by\n 1 will result in a decrease. After enumerating the cases where 5 corners are 0, we can add the number of 5 corners and add the total count to\nobtain the result.",
		"分析:对于这个问题，我们可以先把5角为0张2角为0的枚举出来，2角增加1角就会减少，把5角为0张枚举出来后就可以添加5角数量，把统计的个数相加得到。"},
		{"Five corners with 0: 0 with 2 corners, 10 with 1 corner; 1 with 2 corners, 8 with 1 corner; 2 pieces with 2 corners, 6 pieces with 1 corner;\n 3 pieces with 2 corners, 4 pieces with 1 corner; 4 pieces with 2 corners, 2 pieces with 1 corner;\n5 pieces with 2 corners, 0 pieces with 1 corner;",
		"五角为0的：0个2角的，10个1角的；1个2角的，8个1角的；2个2角的，6个1角的；3个2角的，4个1角的；4个2角的，2个1角的；5个2角的，0个1角的"},
		{"Five corners with 1: 0 with 2 corners, 5 with 1 corner; 1 with 2 corners, 3 with 1 corner; 2 pieces with 2 corners, 1 piece with 1 corner;",
		"五角为1的：0个2角的，5个1角的；1个2角的，3个1角的；2个2角的，1个1角的；"},
		{"The pentagon is 2: 0 with 2 angles, 0 with 1 angle;",
		"五角为2的：0个2角的，0个1角的；" },
		{"1. Calculate the total number of combinations N1=the total number of pentagons with 0, N2+the total number of pentagons with 1, N2+the total number of pentagons with 1, N2",
		"1.计算一共的组合数N1 一共的组合数N1=五角为0个的总数N2+五角为1个的总数N2+五角为2个的总数N3" },
		//变量表
		{"Thetotalnumberofpentagonswith0isN2","五角为0个的总数N2"},
		{"ThetotalnumberN2withonepentagon","五角为1个的总数N2"},
		{"ThetotalnumberN2with2pentagon","五角为2个的总数N3"},
		{"ThetotalnumberofcombinationsN1","一共的组合数N1"},
		
	};
	Lang.AddLanguageTable(
		Language
	);
	
	DefineLangVarInt(五角为0个的总数N2, 6);
	DefineLangVarInt(五角为1个的总数N2, 3);
	DefineLangVarInt(五角为2个的总数N3, 1);
	ColPrintf(PrintfCol::标题, Lang("P41例一 加乘问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：人民币的5角，2角，1角有多少种组合成1元?"));
	ColPrintf(PrintfCol::标题, Lang("分析:对于这个问题，我们可以先把5角为0张2角为0的枚举出来，2角增加1角就会减少，把5角为0张枚举出来后就可以添加5角数量，把统计的个数相加得到。"));
	ColPrintf(PrintfCol::方法, Lang("五角为0的：0个2角的，10个1角的；1个2角的，8个1角的；2个2角的，6个1角的；3个2角的，4个1角的；4个2角的，2个1角的；5个2角的，0个1角的"));
	ColPrintf(PrintfCol::方法, Lang("五角为1的：0个2角的，5个1角的；1个2角的，3个1角的；2个2角的，1个1角的；"));
	ColPrintf(PrintfCol::方法, Lang("五角为2的：0个2角的，0个1角的；"));
	DefineLangVarInt(一共的组合数N1, 0);
	

	ColPrintf(PrintfCol::方法, Lang("1.计算一共的组合数N1 一共的组合数N1=五角为0个的总数N2+五角为1个的总数N2+五角为2个的总数N3"));
	一共的组合数N1 = 五角为0个的总数N2 + 五角为1个的总数N2 + 五角为2个的总数N3;
	一共的组合数N1.PrintProcessLog(1);
	
}
void P41_2()
{

	LanguageLib::LanguageTableT Language = {
		
		{"P41 Example 2: Addition and multiplication problem","P41例二 加乘问题"},
		{"Question: How many three digit numbers are there that add up to 24?",
		"题目：三位数各位数之和是24的有几个三位数？"},
		{"analysis; When we do this question, we can start by looking at the numbers in the hundreds, starting from 9, and continue to calculate downwards like the previous question",
		"分析;我们做这道题时可以像上一道题一样先看百位上的数，从9开始，一直往下推算就可得出"},
		{"When the hundredth digit is 9: 24-9=15=the tenth digit is 9+the sixth digit is 6; Ten digits are 6+and six digits are 9; Ten digits are 8+seven digits are 7; Ten digits are 7+and one digit is 8",
		"百位是9时：24-9=15=十位是9+个位是6；十位是6+个位是9；十位是8+个位是7；十位是7+个位是8"},
		{"When the hundredth digit is 8 o'clock: 24-8=16=the tenth digit is 9+the tenth digit is 7; Ten digits are 7+and nine digits are 9; Ten digits are 8+one digit is 8",
		"百位是8时：24-8=16=十位是9+个位是7；十位是7+个位是9；十位是8+个位是8"},
		{"When the hundredth digit is 7: 24-7=17=the tenth digit is 9+the tenth digit is 8; Ten digits are 8+and nine digits are 9",
		"百位是7时：24-7=17=十位是9+个位是8；十位是8+个位是9"},
		{"When the hundredth digit is 6: 24-6=18=the tenth digit is 9+the tenth digit is 9;",
		"百位是6时：24-6=18=十位是9+个位是9；"},
		{"When the hundredth digit is 5: 24-6=19, without any digit added up, it is 19",
		"百位是5时：24-6=19没有任何一位相加是19"},
		{"1. Calculate the total number of three digits N1. The total number of three digits N1=when the hundredth\ndigit is 9, the number of species N1+when the hundredth digit is 8, the number of species N2+when the hundredth digit is 7, the number of species N3+when\nthe hundredth digit is 6, the number of species N4",
		"1.计算一共的三位数N1 一共的三位数N1=百位是9时种数N1+百位是8时种数N2+百位是7时种数N3+百位是6时种数N4"},
		//变量表
		{"ThehundredthdigitisthenumberofspeciesN1at9o'clock","百位是9时种数N1"},
		{"HundreddigitisthenumberofspeciesN2at8o'clock","百位是8时种数N2"},
		{"AhundreddigitsisthenumberN3at7o'clock","百位是7时种数N3"},
		{"Hundreddigitisthe6thdigitofN4","百位是6时种数N4"},
		{"A total of three digits N1","一共的三位数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(百位是9时种数N1, 4);
	DefineLangVarInt(百位是8时种数N2, 3);
	DefineLangVarInt(百位是7时种数N3, 2);
	DefineLangVarInt(百位是6时种数N4, 1);
	ColPrintf(PrintfCol::标题, Lang("P41例二 加乘问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：三位数各位数之和是24的有几个三位数？"));
	ColPrintf(PrintfCol::标题, Lang("分析;我们做这道题时可以像上一道题一样先看百位上的数，从9开始，一直往下推算就可得出"));
	ColPrintf(PrintfCol::方法, Lang("百位是9时：24-9=15=十位是9+个位是6；十位是6+个位是9；十位是8+个位是7；十位是7+个位是8"));
	ColPrintf(PrintfCol::方法, Lang("百位是8时：24-8=16=十位是9+个位是7；十位是7+个位是9；十位是8+个位是8"));
	ColPrintf(PrintfCol::方法, Lang("百位是7时：24-7=17=十位是9+个位是8；十位是8+个位是9"));
	ColPrintf(PrintfCol::方法, Lang("百位是6时：24-6=18=十位是9+个位是9；"));
	ColPrintf(PrintfCol::方法, Lang("百位是5时：24-6=19没有任何一位相加是19"));
	DefineLangVarInt(一共的三位数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共的三位数N1 一共的三位数N1=百位是9时种数N1+百位是8时种数N2+百位是7时种数N3+百位是6时种数N4"));
	一共的三位数N1 = 百位是9时种数N1 + 百位是8时种数N2 + 百位是7时种数N3 + 百位是6时种数N4;
	一共的三位数N1.PrintProcessLog(1);
}
void P41_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P41 Example 3: Addition and multiplication problem","P41例三 加乘问题"},
		{"Title: How many combinations are there for 4 meat dishes, 3 vegetable dishes, and 2 soups?",
		"题目：4种荤菜，3种素菜，2种汤各选一样，一共有多少种搭配?"},
		{"Analysis: We can cross sort this question, but we can also look at the first two rankings and add the ones that come after them. For example,\nwe can number the first two, 0, 1, 2, 3..., and sort them in order to get 0-0, 0-1, 0-2, 0-3... We can observe that these are just a few digits,\nand multiplying them yields",
		"分析：这道题我们可以对它交叉排序，但也可以先看前两个排序，把后面的加上就行了，比如我们把前两个编上号，0，1，2，3……，按顺序排就是0-0，0-1，0-2，0-3……我们观察可以发现这就是几个几，相乘可得"},
		{"When the meat dishes are% d, the vegetable dishes are% d, and the soup is% d",
		"当荤菜%d时，素菜是%d，汤是%d"},
		{"1. Calculate the total number of combinations N1=number of meat dishes N2 * number of vegetables N3 * number of soups N4",
		"1.计算一共的搭配数N1 一共的搭配数N1=荤菜种数N2*素菜种数N3*汤种数N4"},
		//变量表
		{"NumberofmeatdishesN2","荤菜种数N2"},
		{"NumberofvegetariandishesN3","素菜种数N3"},
		{"SouptypeN4","汤种数N4"},
		{"ThetotalnumberofcombinationsN1","一共的搭配数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(荤菜种数N2, 4);
	DefineLangVarInt(素菜种数N3, 3);
	DefineLangVarInt(汤种数N4, 2);
	ColPrintf(PrintfCol::标题, Lang("P41例三 加乘问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：4种荤菜，3种素菜，2种汤各选一样，一共有多少种搭配?"));
	ColPrintf(PrintfCol::标题, Lang("分析：这道题我们可以对它交叉排序，但也可以先看前两个排序，把后面的加上就行了，比如我们把前两个编上号，0，1，2，3……，按顺序排就是0-0，0-1，0-2，0-3……我们观察可以发现这就是几个几，相乘可得"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1;i <= 4;i++)
	{
		for ( j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 2;k++)
			{
				ColPrintf(PrintfCol::方法, Lang("当荤菜%d时，素菜是%d，汤是%d"),i,j,k);
				h++;
			}
		}
	};
	DefineLangVarInt(一共的搭配数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共的搭配数N1 一共的搭配数N1=荤菜种数N2*素菜种数N3*汤种数N4"));
	一共的搭配数N1 = 荤菜种数N2 * 素菜种数N3 * 汤种数N4;
	一共的搭配数N1.PrintProcessLog(1);
}
void P41_4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P41 Example 4 First question: Addition and multiplication problem","P41例四第一小题 加乘问题"},
		{"Title: Use numbers 0, 2, 4, 5, and 7 to form a unique four digit number",
		"题目：用0，2，4，5，7这些数字组成无重复的四位数"},
		{"When the thousand bit is% s, the hundred bit is% s, the ten bit is% s, and the single bit is% s",
		"当千位时%s时，百位是%s，十位是%s，个位是%s"},
		{"There are a total of %d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P41例四第一小题 加乘问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：用0，2，4，5，7这些数字组成无重复的四位数"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int n1 = 0;
	int k1 = 0;
	char col[6][16];
	for (i = 1;i <= 5;i++)
	{
		if (i == 1)
		{
			strcpy(&col[i][0], "0 ");
		}
		if (i == 2)
		{
			strcpy(&col[i][0], "2 ");
		}
		if (i == 3)
		{
			strcpy(&col[i][0], "4 ");
		}
		if (i == 4)
		{
			strcpy(&col[i][0], "5 "); ;
		}
		if (i == 5)
		{
			strcpy(&col[i][0], "7 "); ;
		}
	}
	n1 = 0;
	
	for (i = 2;i <= 5;i++)
	{


		for (j = 1;j <= 4;j++)
		{
			for (k = 1;k <= 3;k++)
			{
				for (k1 = 1;k1 <= 2;k1++)
				{
					
					
						ColPrintf(PrintfCol::方法, Lang("当千位时%s时，百位是%s，十位是%s，个位是%s"), &col[i][0],&col[j][0], &col[k][0], &col[k1][0]);
						n1++;
						h++;
					
					
				}

			}
		}
	};
	ColPrintf(PrintfCol::方法, Lang("一共有%d种"), h);
}
void P41_4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P41 Example 4 Second question: Addition and multiplication problem","P41例四第二小题 加乘问题"},
		{"Title: Use numbers 0, 2, 4, 5, and 7 to form an even four digit number without repetition",
		"题目：用0，2，4，5，7这些数字组成无重复的四位偶数"},
		{"When the parity is% s in the thousands, the hundreds are% s, the tens are% s, and the units are% s",
		"奇偶当千位时%s时，百位是%s，十位是%s，个位是%s"},
		{"When the thousand bit is% s, the hundred bit is% s, the ten bit is% s, and the single bit is% s",
		"奇当千位时%s时，百位是%s，十位是%s，个位是%s"},
		{"There are a total of% d types of parity",
		"奇偶一共有%d种"},
		{"There are a total of% d odd numbers",
		"奇数一共有%d种"},
		{"There are a total of% d types",
		"一共有%d种"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P41例四第二小题 加乘问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：用0，2，4，5，7这些数字组成无重复的四位偶数"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int n1 = 0;
	int k1 = 0;
	int MeThis=0;
	char col[6][16];
	for (i = 1;i <= 5;i++)
	{
		if (i == 1)
		{
			strcpy(&col[i][0], "0 ");
		}
		if (i == 2)
		{
			strcpy(&col[i][0], "2 ");
		}
		if (i == 3)
		{
			strcpy(&col[i][0], "4 ");
		}
		if (i == 4)
		{
			strcpy(&col[i][0], "5 "); ;
		}
		if (i == 5)
		{
			strcpy(&col[i][0], "7 "); ;
		}
	}
	n1 = 0;

	for (i = 2;i <= 5;i++)
	{


		for (j = 1;j <= 4;j++)
		{
			for (k = 1;k <= 3;k++)
			{
				for (k1 = 1;k1 <= 2;k1++)
				{


					ColPrintf(PrintfCol::方法, Lang("奇偶当千位时%s时，百位是%s，十位是%s，个位是%s"), &col[i][0], &col[j][0], &col[k][0], &col[k1][0]);
					n1++;
					h++;


				}

			}
		}
	};
	n1 = 0;
	
	ColPrintf(PrintfCol::方法, Lang("奇偶一共有%d种"), h);
	n1 = 0;

	for (i = 2;i <= 4;i++)
	{


		for (j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 2;k++)
			{
				for (k1 = 5;k1 >= 4;k1--)
				{


					ColPrintf(PrintfCol::方法, Lang("奇当千位时%s时，百位是%s，十位是%s，个位是%s"), &col[i][0], &col[j][0], &col[k][0], &col[k1][0]);
					n1++;
					MeThis++;


				}

			}
		}
	};
	ColPrintf(PrintfCol::方法, Lang("奇数一共有%d种"), MeThis);
	ColPrintf(PrintfCol::方法, Lang("一共有%d种"),h- MeThis);
}
void P41()
{
	P41_1();
	ColPrintf(PrintfCol::方法, "");
	P41_2();
	ColPrintf(PrintfCol::方法, "");
	P41_3();
	ColPrintf(PrintfCol::方法, "");
	P41_4_1();
	ColPrintf(PrintfCol::方法, "");
	P41_4_2();
	ColPrintf(PrintfCol::方法, "");
}
void P41_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P41();
	Lang.SetCurLanguage(LanguageLib::English);
	P41();
	ColPrintf(PrintfCol::方法, "");

}