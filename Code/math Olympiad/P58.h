#pragma once
void P58_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P58 Example 5: Defining New Operations","P58 ���� ����������"},
		{"Title:�� � represents an operation symbol, which means x * y=1/((x+1) (y+A)). Given 1/2+1/((2+1)(1+A))=2/3, find the value of 2013 �� 2014",
		"��Ŀ�������ʾһ��������ţ����ĺ�����x*y=1/xy+1/((x+1)(y+A)),��֪2��1=1/2*1/((2+1)(1+A))=2/3,��2013��2014��ֵ"},
		{"1. List the equation S1 1/2+1/((2+1)(1+A))=2/3",
		"1.�г�ʽ��S1 1/2+1/((2+1)(1+A))=2/3"},
		{"2. Simplify equation S1 to obtain S2 molecule with a reduction of 1/((2+1) (1+A))=2/3-1/2=1/6",
		"2.����ʽ��S1�õ�S2 ���Ӽ����� 1/((2+1)(1+A))=2/3-1/2=1/6"},
		{"3. Simplify equation S2 to obtain S3 molecule with (2+1) (1+A)=6",
		"3.����ʽ��S2�õ�S3 �������� (2+1)(1+A)=6"},
		{"4. Simplify S3 to obtain S4 (1+A)=6/(2+1)=2",
		"4.����S3�õ�S4 (1+A)=6/(2+1)=2"},
		{"5. Simplify S4 to obtain S5 A=2-1=1",
		"5.����S4�õ�S5 A=2-1=1"},
		{"6. Substitute S5 into the question to obtain S6 2013 �� 2014=1/(2013 * 2014)+1/((2013+1) (2014+1))=1/2013-1/2014+1/2014-1/2015",
		"6.��S5������Ŀ�еõ�S6 2013��2014=1/(2013*2014)+1/((2013+1)(2014+1))=1/2013-1/2014+1/2014-1/2015"},
		{"7. Simplify S6 to obtain S9 1/2013-1/2015=2/(2013 * 2015)",
		"7.����S6�õ�S9 1/2013-1/2015=2/(2013*2015)"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P58 ���� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������ʾһ��������ţ����ĺ�����x*y=1/xy+1/((x+1)(y+A)),��֪2��1=1/2*1/((2+1)(1+A))=2/3,��2013��2014��ֵ"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 1/2+1/((2+1)(1+A))=2/3"));
	ColPrintf(PrintfCol::����, Lang("2.����ʽ��S1�õ�S2 ���Ӽ����� 1/((2+1)(1+A))=2/3-1/2=1/6"));
	ColPrintf(PrintfCol::����, Lang("3.����ʽ��S2�õ�S3 �������� (2+1)(1+A)=6"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 (1+A)=6/(2+1)=2"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�õ�S5 A=2-1=1"));
	ColPrintf(PrintfCol::����, Lang("6.��S5������Ŀ�еõ�S6 2013��2014=1/(2013*2014)+1/((2013+1)(2014+1))=1/2013-1/2014+1/2014-1/2015"));
	ColPrintf(PrintfCol::����, Lang("7.����S6�õ�S9 1/2013-1/2015=2/(2013*2015)"));
}
void P58_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P58 Example 6: Defining New Operations","P58 ���� ����������"},
		{"Title: As shown in the picture, a beetle starts from A on a wooden board with squares and climbs along horizontal lines to reach B. Its formula is 1-2+1+2+2-1+2-1+2+1=6, so the formula -2-1+2+2+2+1+1=6. Draw a line segment",
		"��Ŀ����ͼһֻ�׳�ӻ��з����ľ���A������B������һ�������ߣ�����B������ʽ��1-2+1+2+2-1+2-1+2+1=6����ô��ʽ-2-1+2+2+2+1+1+1=6�����߶�"},
		{"1. Looking at the picture, we found that the number composed of 8 digits is also 8 line segments, which means that each line segment corresponds to a number.",
		"1.��ͼ���Ƿ�����8�����ֹ��ɵ�����Ҳ��8���߶Σ����˵��ÿһ���߶ζ���Ӧһ�����֡�"},
		{"2. First, let's take a look at the first operator. If the first one is positive, it is an addition, and the addition goes up one square, it means that the addition can go up. If the number is one square, it goes up one square. If the second one is not positive, it goes left one square, corresponding to the number 2. From here, we need to understand the relationship between numbers and operators",
		"2.�����ȿ��������һ�������������Ǽӣ�������������һ��˵�����ǿ������ϣ�����������һ������һ�񣬵ڶ�������������������һ�񣬶�Ӧ������2������������Ҫ֪��������������Ĺ���"},
		{"3. The third number is the same as the first number, and although the number in the fourth grid is the same, the direction has changed. Therefore, 2 can be left or right, and the premise for determining its direction is positive and negative. The fifth and fourth grids are the same",
		"3.���������͵�һ����һ������4������Ȼ����һ���ĵ�������ˣ�����2�ǿ�����Ҳ�����ң���ȷ�������ǰ�������ĺ͸��ģ�������͵��ĸ�һ��"},
		{"4. The sixth 1 is negative, it is downward, so 1 can go up or down, depending on the positive or negative, positive up or negative down. The combination of the latter and the former can lead to the same conclusion",
		"4.��6��1�Ǹ����������µģ�����1��������Ҳ�������£���Ҳȡ�����������������ϣ��������£����������ǰ���ͬ��ɵ�"},
		{"5. Looking at the problem based on our conclusion: the first one is left because it is negative, the second one is also negative but only 1, the third one is right because it is positive 2, and the last 1 is upward because it is positive",
		"5.������ǵĽ��ۿ����⣺��һ����Ϊ�Ǹ����������󣬵ڶ���Ҳ�Ǹ����򲻹���1��������������2���������ң������1��Ϊ�����ģ���������"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P58 ���� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼһֻ�׳�ӻ��з����ľ���A������B������һ�������ߣ�����B������ʽ��1-2+1+2+2-1+2-1+2+1=6����ô��ʽ-2-1+2+2+2+1+1+1=6�����߶�"));
	ColPrintf(PrintfCol::����, Lang("1.��ͼ���Ƿ�����8�����ֹ��ɵ�����Ҳ��8���߶Σ����˵��ÿһ���߶ζ���Ӧһ�����֡�"));
	ColPrintf(PrintfCol::����, Lang("2.�����ȿ��������һ�������������Ǽӣ�������������һ��˵�����ǿ������ϣ�����������һ������һ�񣬵ڶ�������������������һ�񣬶�Ӧ������2������������Ҫ֪��������������Ĺ���"));
	ColPrintf(PrintfCol::����, Lang("3.���������͵�һ����һ������4������Ȼ����һ���ĵ�������ˣ�����2�ǿ�����Ҳ�����ң���ȷ�������ǰ�������ĺ͸��ģ�������͵��ĸ�һ��"));
	ColPrintf(PrintfCol::����, Lang("4.��6��1�Ǹ����������µģ�����1��������Ҳ�������£���Ҳȡ�����������������ϣ��������£����������ǰ���ͬ��ɵ�"));
	ColPrintf(PrintfCol::����, Lang("5.������ǵĽ��ۿ����⣺��һ����Ϊ�Ǹ����������󣬵ڶ���Ҳ�Ǹ����򲻹���1��������������2���������ң������1��Ϊ�����ģ���������"));
}
void P58_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P58 Example Seven: Defining New Operations","P58 ���� ����������"},
		{"Question: x is a positive number, and<x>represents the number of prime numbers that do not exceed x, such as<5.1>=3, which means there are 3 prime numbers that do not exceed 5.1, including 2, 3, and 5. What is the value of<<19>+<93>+<4>*<1>*<8>>",
		"��Ŀ��xΪ������<x>��ʾ������xǰ��������ĸ�������<5.1>=3,��������5.1��������2��3��5��3������<<19>+<93>+<4>*<1>*<8>>��ֵ�Ƕ���"},
		{"1.<19>: 2,3,5,7,11,13,17,19, so<19>=8",
		"1.<19>:2,3,5,7,11,13,17,19����<19>=8"},
		{"2.<93>: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, so<93>=24",
		"2.<93>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31, 37, 41, 43, 47,53, 59, 61, 67, 71,73, 79, 83, 89����<93>=24"},
		{"3. Also, because the last three are multiplied, with<1>=0, the rest are not added together",
		"3.����Ϊ������������˵�����<1>=0�����Ժ���Ĳ����"},
		{"4. The sixth 1 is negative, it is downward, so 1 can go up or down, depending on the positive or negative, positive up or negative down. The combination of the latter and the former can lead to the same conclusion",
		"4.��6��1�Ǹ����������µģ�����1��������Ҳ�������£���Ҳȡ�����������������ϣ��������£����������ǰ���ͬ��ɵ�"},
		{"5.<8+24>=<32>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31 <32>=11",
		"5.<8+24>=<32>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31 <32>=11"},


		{"1.<19>:  ",
		"1.<19>:"},
		{"so<19>=%d",
		"����<19>=%d"},
		{"2.<93>:  ",
		"2.<93>:"},
		{"so<93>=%d",
		"����<93>=%d"},
		{"3. Also, because the last three are multiplied, with<1>=0, the rest are not added together",
		"3.����Ϊ������������˵�����<1>=0�����Ժ���Ĳ����"},
		{"4. The sixth 1 is negative, it is downward, so 1 can go up or down, depending on the positive or negative, positive up or negative down. The combination of the latter and the former can lead to the same conclusion",
		"4.��6��1�Ǹ����������µģ�����1��������Ҳ�������£���Ҳȡ�����������������ϣ��������£����������ǰ���ͬ��ɵ�"},
		{"5.<8+24>=<32>:",
		"5.<8+24>=<32>:"},
		{"<32>=%d",
		"<32>=%d"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P58 ���� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��xΪ������<x>��ʾ������xǰ��������ĸ�������<5.1>=3,��������5.1��������2��3��5��3������<<19>+<93>+<4>*<1>*<8>>��ֵ�Ƕ���"));
	/*ColPrintf(PrintfCol::����, Lang("1.<19>:2,3,5,7,11,13,17,19����<19>=8"));
	ColPrintf(PrintfCol::����, Lang("2.<93>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31, 37, 41, 43, 47,53, 59, 61, 67, 71,73, 79, 83, 89����<93>=24"));
	ColPrintf(PrintfCol::����, Lang("3.����Ϊ������������˵�����<1>=0�����Ժ���Ĳ����"));
	ColPrintf(PrintfCol::����, Lang("4.��6��1�Ǹ����������µģ�����1��������Ҳ�������£���Ҳȡ�����������������ϣ��������£����������ǰ���ͬ��ɵ�"));
	ColPrintf(PrintfCol::����, Lang("5.<8+24>=<32>:2, 3, 5, 7, 11,13, 17, 19, 23, 29,31 <32>=11"));*/
	ColPrintf(PrintfCol::����, Lang("1.<19>:"));
	int i = withinprime(19);
	ColPrintf(PrintfCol::����, Lang("����<19>=%d"),i);
	ColPrintf(PrintfCol::����, Lang("2.<93>:"));
	int i1 = withinprime(93);
	ColPrintf(PrintfCol::����, Lang("����<93>=%d"), i1);
	ColPrintf(PrintfCol::����, Lang("3.����Ϊ������������˵�����<1>=0�����Ժ���Ĳ����"));
	ColPrintf(PrintfCol::����, Lang("4.��6��1�Ǹ����������µģ�����1��������Ҳ�������£���Ҳȡ�����������������ϣ��������£����������ǰ���ͬ��ɵ�"), i1);
	ColPrintf(PrintfCol::����, Lang("5.<8+24>=<32>:"));
	int i2 = withinprime(i+i1);
	ColPrintf(PrintfCol::����, Lang("<32>=%d"), i2);
}
void P58_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P58 Example 8: Defining New Operations","P58 ���� ����������"},
		{"Title: 64=2 * 2 * 2 * 2 * 2 can be expressed as F (64)=6 243=3 * 3 * 3 * 3 can be expressed as G (243)=5. Calculate the following values",
		"��Ŀ��64=2*2*2*2*2*2���Ա�ʾΪF(64)=6 243=3*3*3*3*3���Ա�ʾΪG(243)=5��������ֵ"},
		{"(1) Calculate the value of F (128)",
		"(1)����F(128)��ֵ"},
		{"��2�� F��16��=G������",
		"(2)F(16) = G(? )"},
		{"��3�� F������+G��27��=6",
		"(3)F(?)+G(27)=6"},
		{"(4) If x and y are numbers that can be divided by 2, try to prove that F (x * y)=F (x)+F (y)",
		"(4)���x��y�ֱ�Ϊ�ܱ�2������������֤����F(x*y)=F(x)+F(y)"},
		{"(1) Because 128 is a number that can be divided by 2, it must be divisible by 2, so 128=2 * 2 * 2 * 2 * 2 * 2 * 2 * 2, and F (128)=7",
		"(1)��Ϊ128���ܱ�2��������������һ���ܱ�2����������128=2*2*2*2*2*2*2 ���F(128)=7"},
		{"(2) First, calculate that F (16) can be divided by 2, so F (16)=3. We only need to find one equal in number to it, because it decomposes into 3. Therefore, 3 * 3 * 3=81, which is G (81)",
		"(2)�ȼ����F(16) ���ܱ�2��������F(16)=4 ��ֻ���ҵ�����������ȵľͿ��ԣ���Ϊ���ֽ��3������3*3*3*3=81 ������G(81)"},
		{"(3) Because it is the sum of two times, we first calculate G (27) 27=3 * 3 * 3 G (27)=3, so the value of the first term must be 6-3=3, and the value of the first term is F, so 2 * 2 * 2=16, so it is F (16)",
		"(3)��Ϊ���������������������G(27) 27=3*3*3 G(27)=3,����ǰһ���ֵ������6-3=3��ǰһ����F����2*2*2*2=16 ������F(16)"},
		{"(4) Assuming x has m multiplications of 2 and y has n multiplications of 2, so x=2 ^ m y=2 ^ n F (x)=m, F (y)=n, the equation can be changed to F (2 ^ m * 2 ^ n)=m+n=>F (2 ^ m * 2 ^ n)=F (x)+F (y). Therefore, we verify that F (16)=4 and write it as F (16)=F (4)+F (4). Both m and n are 2, 2+2=4, so this is correct",
		"(4)����x��m��2��� y��n��2��� ����x=2^m y=2^n F(x)=m,F(y)=n,��˿��԰�ʽ�ӱ��F(2^m*2^n)=m+n=>F(2^m*2^n)=F(x)+F(y),����������֤һ�£�F(16)=4 ������д��F(16)=F(4)+F(4) m��n����2��2+2=4����������ǶԵ�"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P58 ���� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��64=2*2*2*2*2*2���Ա�ʾΪF(64)=6 243=3*3*3*3*3���Ա�ʾΪG(243)=5��������ֵ"));
	ColPrintf(PrintfCol::����, Lang("(1)����F(128)��ֵ"));
	ColPrintf(PrintfCol::����, Lang("(2)F(16) = G(? )"));
	ColPrintf(PrintfCol::����, Lang("(3)F(?)+G(27)=6"));
	ColPrintf(PrintfCol::����, Lang("(4)���x��y�ֱ�Ϊ�ܱ�2������������֤����F(x*y)=F(x)+F(y)"));
	ColPrintf(PrintfCol::����, Lang("(1)��Ϊ128���ܱ�2��������������һ���ܱ�2����������128=2*2*2*2*2*2*2 ���F(128)=7"));
	ColPrintf(PrintfCol::����, Lang("(2)�ȼ����F(16) ���ܱ�2��������F(16)=4 ��ֻ���ҵ�����������ȵľͿ��ԣ���Ϊ���ֽ��3������3*3*3*3=81 ������G(81)"));
	ColPrintf(PrintfCol::����, Lang("(3)��Ϊ���������������������G(27) 27=3*3*3 G(27)=3,����ǰһ���ֵ������6-3=3��ǰһ����F����2*2*2*2=16 ������F(16)"));
	ColPrintf(PrintfCol::����, Lang("(4)����x��m��2��� y��n��2��� ����x=2^m y=2^n F(x)=m,F(y)=n,��˿��԰�ʽ�ӱ��F(2^m*2^n)=m+n=>F(2^m*2^n)=F(x)+F(y),����������֤һ�£�F(16)=4 ������д��F(16)=F(4)+F(4) m��n����2��2+2=4����������ǶԵ�"));
}
void P58()
{
	P58_1();
	ColPrintf(PrintfCol::����, "");
	P58_2();
	ColPrintf(PrintfCol::����, "");
	P58_3();
	ColPrintf(PrintfCol::����, "");
	P58_4();//����4��С��
	ColPrintf(PrintfCol::����, "");
	/*P57_1_2();
	ColPrintf(PrintfCol::����, "");
	P57_1_3();
	ColPrintf(PrintfCol::����, "");
	P57_2();
	ColPrintf(PrintfCol::����, "");
	P57_3();
	ColPrintf(PrintfCol::����, "");
	P57_4();
	ColPrintf(PrintfCol::����, "");*/
	//P23_2();
	ColPrintf(PrintfCol::����, "");
}
void P58_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P58();
	Lang.SetCurLanguage(LanguageLib::English);
	P58();
	ColPrintf(PrintfCol::����, "");

}