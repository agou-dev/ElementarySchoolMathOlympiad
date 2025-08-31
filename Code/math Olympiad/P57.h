#pragma once
void P57_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 1 Definition of New Operation for the First Small Question","P57 例一第一小题 定义新运算"},
		{"Title: Assuming that both a and b represent numbers, and specifying that a ▲ b=3 * a -2 * b",
		"总题目：设a，b都表示数，规定a▲b=3*a-2*b"},
		{"Title: Seeking 3 ▲ 2 and 2 ▲ 3",
		"题目：求3▲2和2▲3"},
		{"1. Expand 3 ▲ 2 to obtain S1 3 ▲ 2=3 * 3-2 * 2=>3 * 3-2 * 2=9-4=5",
		"1.展开3▲2得到S1 3▲2=3*3-2*2=>3*3-2*2=9-4=5"},
		{"2. Expand 2 ▲ 3 to obtain S2 2 ▲ 3=3 * 2-2 * 3=>3 * 2-2 * 3=6-6=0",
		"2.展开2▲3得到S2 2▲3=3*2-2*3=>3*2-2*3=6-6=0"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P57 例一第一小题 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("总题目：设a，b都表示数，规定a▲b=3*a-2*b"));
	ColPrintf(PrintfCol::方法, Lang("1.展开3▲2得到S1 3▲2=3*3-2*2=>3*3-2*2=9-4=5"));
	ColPrintf(PrintfCol::方法, Lang("2.展开2▲3得到S2 2▲3=3*2-2*3=>3*2-2*3=6-6=0"));
}
void P57_1_2()
{
	
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 1 Definition of New Operation for Question 2","P57 例一第二小题 定义新运算"},
		{"Title: Seeking (17 ▲ 6) ▲ 2, 17 ▲ (6 ▲ 2)",
		"题目：求(17▲6)▲2，17▲(6▲2)"},
		{"1. Enter 17 ▲ 6 into the symbol definition to obtain S1 17 ▲ 6=3 * 17-2 * 6=51-12=39",
		"1.把17▲6带入符号定义中得到S1 17▲6=3*17-2*6=51-12=39"},
		{"2. Substitute S1 into (17 ▲ 6) ▲ 2 to obtain S2 39 ▲ 2=3 * 39-2 * 2=117-4=113",
		"2.把S1带入(17▲6)▲2得到S2 39▲2=3*39-2*2=117-4=113"},
		{"3. Substitute 6 ▲ 2 into the symbol definition to obtain S3 6 ▲ 2=6 * 3-2 * 2=18-4=14",
		"3.把6 ▲ 2带入符号定义中得到S3 6 ▲ 2=6*3-2*2=18-4=14"},
		{"4. Substitute S3 into 17 ▲ (6 ▲ 2) to obtain S4 17 ▲ 14=17 * 3-14 * 2=51-28=23",
		"4.把S3带入17 ▲ (6 ▲ 2)得到S4 17 ▲14=17*3-14*2=51-28=23"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P57 例一第二小题 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：求(17▲6)▲2，17▲(6▲2)"));
	ColPrintf(PrintfCol::方法, Lang("1.把17▲6带入符号定义中得到S1 17▲6=3*17-2*6=51-12=39"));
	ColPrintf(PrintfCol::方法, Lang("2.把S1带入(17▲6)▲2得到S2 39▲2=3*39-2*2=117-4=113"));
	ColPrintf(PrintfCol::方法, Lang("3.把6 ▲ 2带入符号定义中得到S3 6 ▲ 2=6*3-2*2=18-4=14"));
	ColPrintf(PrintfCol::方法, Lang("4.把S3带入17 ▲ (6 ▲ 2)得到S4 17 ▲14=17*3-14*2=51-28=23"));
}
void P57_1_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 1 Definition of New Operation for Question 3","P57 例一第三小题 定义新运算"},
		{"Title: If it is known that 4 ▲ b=2, find b",
		"题目：如果已知4 ▲b=2，求b"},
		{"1. Substitute 4 ▲ b=2 into the symbol definition to obtain S1 4 ▲ b=2=4 * 3-2b=2",
		"1.把4 ▲b=2带入符号定义中得到S1 4 ▲b=2=4*3-2b=2"},
		{"2. Simplify S1 to obtain S2 12-2b=2",
		"2.化简S1得到S2 12-2b=2"},
		{"3. Simplify S2 to obtain S3 12-2=2b",
		"3.化简S2得到S3 12-2=2b"},
		{"4. Simplify S4 to obtain S5 2b=10=>b=10/2=5",
		"4.化简S4得到S5 2b=10=>b=10/2=5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P57 例一第三小题 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：如果已知4 ▲b=2，求b"));
	ColPrintf(PrintfCol::方法, Lang("1.把4 ▲b=2带入符号定义中得到S1 4 ▲b=2=4*3-2b=2"));
	ColPrintf(PrintfCol::方法, Lang("2.化简S1得到S2 12-2b=2"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 12-2=2b"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S4得到S5 2b=10=>b=10/2=5"));
}
void P57_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 2: Defining New Operations","P57 例二 定义新运算"},
		{"Title: Calculate a ▲ b as half of the difference between a and b, subtract the smaller from the larger one, for example, 12 ▲ 24=(24-12)/2=6, calculate 20 ▲ (7 ▲ x)=1, and find all values of x",
		"题目：计算a▲b表示a和b的差的一半，用较大的减较小的，例如12▲24=(24-12)/2=6，计算20▲(7▲x)=1，求x的所有值"},
		{"1. Because half of the two values are 1, the entire difference is: (20 ▲ (7 ▲ x)) * 2=1 * 2=2",
		"1.因为两个值的一半是1所以整个差值是：(20▲(7▲x))*2=1*2=2"},
		{"2. Because either the left side is larger by 2 or the right side is larger by 2, there are two options: (7 ▲ x)=20-2=18 (7 ▲ x)=20+2=22",
		"2.因为要么左边大2，要么右边大2所以有两种：(7▲x)=20-2=18 (7▲x)=20+2=22"},
		{"3. Substitute the second step into 20 ▲ (7 ▲ x)=1 to obtain S1. When (7 ▲ x)=20-2=18, x must be greater than 7, otherwise (x-7)/2=18=>x-7=36=>x=43 cannot be satisfied",
		"3.把第二步带入20▲(7▲x)=1得到S1 当(7▲x)=20-2=18时 x一定大于7不然无法满足 (x-7)/2=18=>x-7=36=>x=43"},
		{"4. Substitute the second step into 20 ▲ (7 ▲ x)=1 to obtain S1. When (7 ▲ x)=20+2=22, x must be greater than 7, otherwise (x-7)/2=22=>x-7=44=>x=51 cannot be satisfied",
		"4.把第二步带入20▲(7▲x)=1得到S1 当(7▲x)=20+2=22时 x一定大于7不然无法满足 (x-7)/2=22=>x-7=44=>x=51"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P57 例二 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算a▲b表示a和b的差的一半，用较大的减较小的，例如12▲24=(24-12)/2=6，计算20▲(7▲x)=1，求x的所有值"));
	ColPrintf(PrintfCol::方法, Lang("1.因为两个值的一半是1所以整个差值是：(20▲(7▲x))*2=1*2=2"));
	ColPrintf(PrintfCol::方法, Lang("2.因为要么左边大2，要么右边大2所以有两种：(7▲x)=20-2=18 (7▲x)=20+2=22"));
	ColPrintf(PrintfCol::方法, Lang("3.把第二步带入20▲(7▲x)=1得到S1 当(7▲x)=20-2=18时 x一定大于7不然无法满足 (x-7)/2=18=>x-7=36=>x=43"));
	ColPrintf(PrintfCol::方法, Lang("4.把第二步带入20▲(7▲x)=1得到S1 当(7▲x)=20+2=22时 x一定大于7不然无法满足 (x-7)/2=22=>x-7=44=>x=51"));
}
void P57_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 3 Definition of New Operation","P57 例三 定义新运算"},
		{"Title: Regulation A o B=xA+B， And 2 o 3=3 o 2. Seeking (6) o 5)*(1 o 10)",
		"题目：规定AOB=xA+B，并且2o3=3o2，求(6o5)*(1o10)"},
		{"1. List equation S1 2 o 3=2x+3 3 o 2=3x+2",
		"1.列出式子S1 2o3=2x+3 3o2=3x+2"},
		{"2. Combine S1 to obtain S2 2x+3=3x+2",
		"2.联合S1得到S2 2x+3=3x+2"},
		{"3. Simplify S2 to obtain S3 2x+3-2=2x+1=3x",
		"3.化简S2得到S3 2x+3-2=2x+1=3x"},
		{"4. Simplify S3 to obtain S4 2x+1=3x=>3x-2x=1=>x=1",
		"4.化简S3得到S4 2x+1=3x=>3x-2x=1=>x=1"},
		{"5. Substitute S4 into the symbol definition to obtain S5 (6o5)=6 * 1+5=11 (1o10)=1 * 1+10=11",
		"5.把S4带入带入符号定义中得到S5 (6o5)=6*1+5=11 (1o10)=1*1+10=11"},
		{"6. Combine S5 to obtain S6 (6o5) * (1o10)=11 * 11=121",
		"6.把S5联合得到S6 (6o5)*(1o10)=11*11=121"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P57 例三 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：规定AOB=xA+B，并且2o3=3o2，求(6o5)*(1o10)"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 2o3=2x+3 3o2=3x+2"));
	ColPrintf(PrintfCol::方法, Lang("2.联合S1得到S2 2x+3=3x+2"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 2x+3-2=2x+1=3x"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 2x+1=3x=>3x-2x=1=>x=1"));
	ColPrintf(PrintfCol::方法, Lang("5.把S4带入带入符号定义中得到S5 (6o5)=6*1+5=11 (1o10)=1*1+10=11"));
	ColPrintf(PrintfCol::方法, Lang("6.把S5联合得到S6 (6o5)*(1o10)=11*11=121"));
}
void P57_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 4: Defining New Operations","P57 例四 定义新运算"},
		{"Title: There is a mathematical symbol “o”that makes the following equation hold: 2o4=8 5o3=13 3o5=11 9o7=25",
		"题目：有一个数学符号“o”，使下面的等式成立 2o4=8 5o3=13 3o5=11 9o7=25"},
		{"1. Let's first look at the first equation, which clearly shows 2 * 4=8, and then look at the next equation, 5o3, which clearly shows that our multiplication is incorrect. However, after swapping the positions of 3o5, the result becomes smaller, and the first number becomes smaller. This indicates that the first number contributes the most",
		"1.我们先看第一个式子明显是2*4=8 再来看下一个式子5o3明显我们相乘是错误的，而3o5调换了一下位置结果变小了，第一个数便小了，这就说明第一个数贡献最大"},
		{"If the addition result is small, it must be a multiplication and addition process, because the first number contributes the most, so we try to multiply by 2, but it still doesn't work because the second number is useless. We add the second number",
		"2.如果是相加结果小了，所以必定是又乘又加，因为第一个数贡献最大，所以我们试着乘2，也还是不对，因为第二个数没用 我们加上第二个数"},
		{"3. Verify equation 2o4=2 * 2+4=8 5o3=5 * 2+3=13 3o5=3 * 2+5=11 9o7=9 * 2+7=25",
		"3.验证式子 2o4=2*2+4=8 5o3=5*2+3=13 3o5=3*2+5=11 9o7=9*2+7=25"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P57 例四 定义新运算"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一个数学符号“o”，使下面的等式成立 2o4=8 5o3=13 3o5=11 9o7=25"));
	ColPrintf(PrintfCol::方法, Lang("1.我们先看第一个式子明显是2*4=8 再来看下一个式子5o3明显我们相乘是错误的，而3o5调换了一下位置结果变小了，第一个数便小了，这就说明第一个数贡献最大"));
	ColPrintf(PrintfCol::方法, Lang("2.如果是相加结果小了，所以必定是又乘又加，因为第一个数贡献最大，所以我们试着乘2，也还是不对，因为第二个数没用 我们加上第二个数"));
	ColPrintf(PrintfCol::方法, Lang("3.验证式子 2o4=2*2+4=8 5o3=5*2+3=13 3o5=3*2+5=11 9o7=9*2+7=25"));
}
void P57()
{
	P57_1_1();
	ColPrintf(PrintfCol::方法, "");
	P57_1_2();
	ColPrintf(PrintfCol::方法, "");
	P57_1_3();
	ColPrintf(PrintfCol::方法, "");
	P57_2();
	ColPrintf(PrintfCol::方法, "");
	P57_3();
	ColPrintf(PrintfCol::方法, "");
	P57_4();
	ColPrintf(PrintfCol::方法, "");
	//P23_2();
	ColPrintf(PrintfCol::方法, "");
}
void P57_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P57();
	Lang.SetCurLanguage(LanguageLib::English);
	P57();
	ColPrintf(PrintfCol::方法, "");

}