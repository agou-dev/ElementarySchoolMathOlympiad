#pragma once
void P58_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P58 Example 5: Defining New Operations","P58 例五 定义新运算"},
		{"Title:“ ☆” represents an operation symbol, which means x * y=1/((x+1) (y+A)). Given 1/2+1/((2+1)(1+A))=2/3, find the value of 2013 ☆ 2014",
		"题目：“☆”表示一种运算符号，它的含义是x*y=1/xy+1/((x+1)(y+A)),已知2☆1=1/2*1/((2+1)(1+A))=2/3,求2013☆2014的值"},
		{"1. List the equation S1 1/2+1/((2+1)(1+A))=2/3",
		"1.列出式子S1 1/2+1/((2+1)(1+A))=2/3"},
		{"2. Simplify equation S1 to obtain S2 molecule with a reduction of 1/((2+1) (1+A))=2/3-1/2=1/6",
		"2.化简式子S1得到S2 分子减分子 1/((2+1)(1+A))=2/3-1/2=1/6"},
		{"3. Simplify equation S2 to obtain S3 molecule with (2+1) (1+A)=6",
		"3.化简式子S2得到S3 分子消掉 (2+1)(1+A)=6"},
		{"4. Simplify S3 to obtain S4 (1+A)=6/(2+1)=2",
		"4.化简S3得到S4 (1+A)=6/(2+1)=2"},
		{"5. Simplify S4 to obtain S5 A=2-1=1",
		"5.化简S4得到S5 A=2-1=1"},
		{"6. Substitute S5 into the question to obtain S6 2013 ☆ 2014=1/(2013 * 2014)+1/((2013+1) (2014+1))=1/2013-1/2014+1/2014-1/2015",
		"6.把S5带入题目中得到S6 2013☆2014=1/(2013*2014)+1/((2013+1)(2014+1))=1/2013-1/2014+1/2014-1/2015"},
		{"7. Simplify S6 to obtain S9 1/2013-1/2015=2/(2013 * 2015)",
		"7.化简S6得到S9 1/2013-1/2015=2/(2013*2015)"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P58 例五 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：“☆”表示一种运算符号，它的含义是x*y=1/xy+1/((x+1)(y+A)),已知2☆1=1/2*1/((2+1)(1+A))=2/3,求2013☆2014的值"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 1/2+1/((2+1)(1+A))=2/3"));
	ColPrintf(PrintfCol::方法, Lang("2.化简式子S1得到S2 分子减分子 1/((2+1)(1+A))=2/3-1/2=1/6"));
	ColPrintf(PrintfCol::方法, Lang("3.化简式子S2得到S3 分子消掉 (2+1)(1+A)=6"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 (1+A)=6/(2+1)=2"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S4得到S5 A=2-1=1"));
	ColPrintf(PrintfCol::方法, Lang("6.把S5带入题目中得到S6 2013☆2014=1/(2013*2014)+1/((2013+1)(2014+1))=1/2013-1/2014+1/2014-1/2015"));
	ColPrintf(PrintfCol::方法, Lang("7.化简S6得到S9 1/2013-1/2015=2/(2013*2015)"));
}
void P58_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P58 Example 6: Defining New Operations","P58 例六 定义新运算"},
		{"Title: As shown in the picture, a beetle starts from A on a wooden board with squares and climbs along horizontal lines to reach B. Its formula is 1-2+1+2+2-1+2-1+2+1=6, so the formula -2-1+2+2+2+1+1=6. Draw a line segment",
		"题目：如图一只甲虫从画有方格的木板从A出发到B，沿着一条条横线，爬到B它的算式是1-2+1+2+2-1+2-1+2+1=6，那么算式-2-1+2+2+2+1+1+1=6画出线段"},
		{"1. Looking at the picture, we found that the number composed of 8 digits is also 8 line segments, which means that each line segment corresponds to a number.",
		"1.看图我们发现由8个数字构成的数字也是8条线段，这就说明每一个线段都对应一个数字。"},
		{"2. First, let's take a look at the first operator. If the first one is positive, it is an addition, and the addition goes up one square, it means that the addition can go up. If the number is one square, it goes up one square. If the second one is not positive, it goes left one square, corresponding to the number 2. From here, we need to understand the relationship between numbers and operators",
		"2.我们先看运算符第一个是正的所以是加，而加往上行了一格，说明加是可以往上，看数字它是一往上了一格，第二个不是正的它往左了一格，对应数字是2，从这里我们要知道数字与运算符的关联"},
		{"3. The third number is the same as the first number, and although the number in the fourth grid is the same, the direction has changed. Therefore, 2 can be left or right, and the premise for determining its direction is positive and negative. The fifth and fourth grids are the same",
		"3.第三个数和第一个数一样，第4格数虽然数是一样的但方向变了，所以2是可以左也可以右，它确定方向的前提是正的和负的，第五个和第四个一样"},
		{"4. The sixth 1 is negative, it is downward, so 1 can go up or down, depending on the positive or negative, positive up or negative down. The combination of the latter and the former can lead to the same conclusion",
		"4.第6个1是负的它是往下的，所以1可以往上也可以往下，这也取决于正负，正的往上，负的往下，后面的联合前面的同理可得"},
		{"5. Looking at the problem based on our conclusion: the first one is left because it is negative, the second one is also negative but only 1, the third one is right because it is positive 2, and the last 1 is upward because it is positive",
		"5.结合我们的结论看问题：第一个因为是负的所以是左，第二个也是负的向不过是1，第三个是正的2所以是向右，后面的1因为是正的，所以向上"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P58 例六 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图一只甲虫从画有方格的木板从A出发到B，沿着一条条横线，爬到B它的算式是1-2+1+2+2-1+2-1+2+1=6，那么算式-2-1+2+2+2+1+1+1=6画出线段"));
	ColPrintf(PrintfCol::方法, Lang("1.看图我们发现由8个数字构成的数字也是8条线段，这就说明每一个线段都对应一个数字。"));
	ColPrintf(PrintfCol::方法, Lang("2.我们先看运算符第一个是正的所以是加，而加往上行了一格，说明加是可以往上，看数字它是一往上了一格，第二个不是正的它往左了一格，对应数字是2，从这里我们要知道数字与运算符的关联"));
	ColPrintf(PrintfCol::方法, Lang("3.第三个数和第一个数一样，第4格数虽然数是一样的但方向变了，所以2是可以左也可以右，它确定方向的前提是正的和负的，第五个和第四个一样"));
	ColPrintf(PrintfCol::方法, Lang("4.第6个1是负的它是往下的，所以1可以往上也可以往下，这也取决于正负，正的往上，负的往下，后面的联合前面的同理可得"));
	ColPrintf(PrintfCol::方法, Lang("5.结合我们的结论看问题：第一个因为是负的所以是左，第二个也是负的向不过是1，第三个是正的2所以是向右，后面的1因为是正的，所以向上"));
}
void P58_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P58 Example Seven: Defining New Operations","P58 例七 定义新运算"},
		{"Question: x is a positive number, and<x>represents the number of prime numbers that do not exceed x, such as<5.1>=3, which means there are 3 prime numbers that do not exceed 5.1, including 2, 3, and 5. What is the value of<<19>+<93>+<4>*<1>*<8>>",
		"题目：x为正数，<x>表示不超过x前面的质数的个数，如<5.1>=3,即不超过5.1的质数有2，3，5共3个，那<<19>+<93>+<4>*<1>*<8>>的值是多少"},
		{"1.<19>: 2,3,5,7,11,13,17,19, so<19>=8",
		"1.<19>:2,3,5,7,11,13,17,19所以<19>=8"},
		{"2.<93>: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, so<93>=24",
		"2.<93>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31, 37, 41, 43, 47,53, 59, 61, 67, 71,73, 79, 83, 89所以<93>=24"},
		{"3. Also, because the last three are multiplied, with<1>=0, the rest are not added together",
		"3.又因为后面三个是相乘的其中<1>=0，所以后面的不相加"},
		{"4. The sixth 1 is negative, it is downward, so 1 can go up or down, depending on the positive or negative, positive up or negative down. The combination of the latter and the former can lead to the same conclusion",
		"4.第6个1是负的它是往下的，所以1可以往上也可以往下，这也取决于正负，正的往上，负的往下，后面的联合前面的同理可得"},
		{"5.<8+24>=<32>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31 <32>=11",
		"5.<8+24>=<32>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31 <32>=11"},


		{"1.<19>:  ",
		"1.<19>:"},
		{"so<19>=%d",
		"所以<19>=%d"},
		{"2.<93>:  ",
		"2.<93>:"},
		{"so<93>=%d",
		"所以<93>=%d"},
		{"3. Also, because the last three are multiplied, with<1>=0, the rest are not added together",
		"3.又因为后面三个是相乘的其中<1>=0，所以后面的不相加"},
		{"4. The sixth 1 is negative, it is downward, so 1 can go up or down, depending on the positive or negative, positive up or negative down. The combination of the latter and the former can lead to the same conclusion",
		"4.第6个1是负的它是往下的，所以1可以往上也可以往下，这也取决于正负，正的往上，负的往下，后面的联合前面的同理可得"},
		{"5.<8+24>=<32>:",
		"5.<8+24>=<32>:"},
		{"<32>=%d",
		"<32>=%d"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P58 例七 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：x为正数，<x>表示不超过x前面的质数的个数，如<5.1>=3,即不超过5.1的质数有2，3，5共3个，那<<19>+<93>+<4>*<1>*<8>>的值是多少"));
	/*ColPrintf(PrintfCol::方法, Lang("1.<19>:2,3,5,7,11,13,17,19所以<19>=8"));
	ColPrintf(PrintfCol::方法, Lang("2.<93>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31, 37, 41, 43, 47,53, 59, 61, 67, 71,73, 79, 83, 89所以<93>=24"));
	ColPrintf(PrintfCol::方法, Lang("3.又因为后面三个是相乘的其中<1>=0，所以后面的不相加"));
	ColPrintf(PrintfCol::方法, Lang("4.第6个1是负的它是往下的，所以1可以往上也可以往下，这也取决于正负，正的往上，负的往下，后面的联合前面的同理可得"));
	ColPrintf(PrintfCol::方法, Lang("5.<8+24>=<32>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31 <32>=11"));*/
	ColPrintf(PrintfCol::方法, Lang("1.<19>:"));
	int i = withinprime(19);
	ColPrintf(PrintfCol::方法, Lang("所以<19>=%d"),i);
	ColPrintf(PrintfCol::方法, Lang("2.<93>:"));
	int i1 = withinprime(93);
	ColPrintf(PrintfCol::方法, Lang("所以<93>=%d"), i1);
	ColPrintf(PrintfCol::方法, Lang("3.又因为后面三个是相乘的其中<1>=0，所以后面的不相加"));
	ColPrintf(PrintfCol::方法, Lang("4.第6个1是负的它是往下的，所以1可以往上也可以往下，这也取决于正负，正的往上，负的往下，后面的联合前面的同理可得"), i1);
	ColPrintf(PrintfCol::方法, Lang("5.<8+24>=<32>:"));
	int i2 = withinprime(i+i1);
	ColPrintf(PrintfCol::方法, Lang("<32>=%d"), i2);
}
void P58_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P58 Example 8: Defining New Operations","P58 例八 定义新运算"},
		{"Title: 64=2 * 2 * 2 * 2 * 2 can be expressed as F (64)=6 243=3 * 3 * 3 * 3 can be expressed as G (243)=5. Calculate the following values",
		"题目：64=2*2*2*2*2*2可以表示为F(64)=6 243=3*3*3*3*3可以表示为G(243)=5计算下列值"},
		{"(1) Calculate the value of F (128)",
		"(1)计算F(128)的值"},
		{"（2） F（16）=G（？）",
		"(2)F(16) = G(? )"},
		{"（3） F（？）+G（27）=6",
		"(3)F(?)+G(27)=6"},
		{"(4) If x and y are numbers that can be divided by 2, try to prove that F (x * y)=F (x)+F (y)",
		"(4)如果x和y分别为能被2整除的数，试证明：F(x*y)=F(x)+F(y)"},
		{"(1) Because 128 is a number that can be divided by 2, it must be divisible by 2, so 128=2 * 2 * 2 * 2 * 2 * 2 * 2 * 2, and F (128)=7",
		"(1)因为128是能被2整除的数所以它一定能被2除尽，所以128=2*2*2*2*2*2*2 因此F(128)=7"},
		{"(2) First, calculate that F (16) can be divided by 2, so F (16)=3. We only need to find one equal in number to it, because it decomposes into 3. Therefore, 3 * 3 * 3=81, which is G (81)",
		"(2)先计算出F(16) 它能被2整除所以F(16)=4 而只需找到于它次数相等的就可以，因为它分解成3，所以3*3*3*3=81 所以是G(81)"},
		{"(3) Because it is the sum of two times, we first calculate G (27) 27=3 * 3 * 3 G (27)=3, so the value of the first term must be 6-3=3, and the value of the first term is F, so 2 * 2 * 2=16, so it is F (16)",
		"(3)因为是两个次数相加我们先算G(27) 27=3*3*3 G(27)=3,所以前一项的值必须是6-3=3，前一项是F所以2*2*2*2=16 所以是F(16)"},
		{"(4) Assuming x has m multiplications of 2 and y has n multiplications of 2, so x=2 ^ m y=2 ^ n F (x)=m, F (y)=n, the equation can be changed to F (2 ^ m * 2 ^ n)=m+n=>F (2 ^ m * 2 ^ n)=F (x)+F (y). Therefore, we verify that F (16)=4 and write it as F (16)=F (4)+F (4). Both m and n are 2, 2+2=4, so this is correct",
		"(4)假设x有m个2相乘 y有n个2相乘 所以x=2^m y=2^n F(x)=m,F(y)=n,因此可以把式子变成F(2^m*2^n)=m+n=>F(2^m*2^n)=F(x)+F(y),所以我们验证一下：F(16)=4 而我们写成F(16)=F(4)+F(4) m和n都是2，2+2=4，所以这个是对的"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P58 例八 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：64=2*2*2*2*2*2可以表示为F(64)=6 243=3*3*3*3*3可以表示为G(243)=5计算下列值"));
	ColPrintf(PrintfCol::方法, Lang("(1)计算F(128)的值"));
	ColPrintf(PrintfCol::方法, Lang("(2)F(16) = G(? )"));
	ColPrintf(PrintfCol::方法, Lang("(3)F(?)+G(27)=6"));
	ColPrintf(PrintfCol::方法, Lang("(4)如果x和y分别为能被2整除的数，试证明：F(x*y)=F(x)+F(y)"));
	ColPrintf(PrintfCol::方法, Lang("(1)因为128是能被2整除的数所以它一定能被2除尽，所以128=2*2*2*2*2*2*2 因此F(128)=7"));
	ColPrintf(PrintfCol::方法, Lang("(2)先计算出F(16) 它能被2整除所以F(16)=4 而只需找到于它次数相等的就可以，因为它分解成3，所以3*3*3*3=81 所以是G(81)"));
	ColPrintf(PrintfCol::方法, Lang("(3)因为是两个次数相加我们先算G(27) 27=3*3*3 G(27)=3,所以前一项的值必须是6-3=3，前一项是F所以2*2*2*2=16 所以是F(16)"));
	ColPrintf(PrintfCol::方法, Lang("(4)假设x有m个2相乘 y有n个2相乘 所以x=2^m y=2^n F(x)=m,F(y)=n,因此可以把式子变成F(2^m*2^n)=m+n=>F(2^m*2^n)=F(x)+F(y),所以我们验证一下：F(16)=4 而我们写成F(16)=F(4)+F(4) m和n都是2，2+2=4，所以这个是对的"));
}
void P58()
{
	P58_1();
	ColPrintf(PrintfCol::方法, "");
	P58_2();
	ColPrintf(PrintfCol::方法, "");
	P58_3();
	ColPrintf(PrintfCol::方法, "");
	P58_4();//包含4个小题
	ColPrintf(PrintfCol::方法, "");
	/*P57_1_2();
	ColPrintf(PrintfCol::方法, "");
	P57_1_3();
	ColPrintf(PrintfCol::方法, "");
	P57_2();
	ColPrintf(PrintfCol::方法, "");
	P57_3();
	ColPrintf(PrintfCol::方法, "");
	P57_4();
	ColPrintf(PrintfCol::方法, "");*/
	//P23_2();
	ColPrintf(PrintfCol::方法, "");
}
void P58_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P58();
	Lang.SetCurLanguage(LanguageLib::English);
	P58();
	ColPrintf(PrintfCol::方法, "");

}