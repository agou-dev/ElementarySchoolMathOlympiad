#pragma once
//(1/1-1/6+1/6-1/11+1/11-1/6+……+1/71-1/76+1/76-1/81)*4
void P59_formula()
{
	LanguageLib::LanguageTableT Language = {
		{"P59 formula derivation definition new operation","P59 公式推导 裂项问题"},
		{"1. In the fractional column, let's first look at the calculation of a fraction (B+A)/(A * B). Here, the denominator below is indivisible, while above it is an addition, so each addition is removed. Because the middle is a plus sign, it is B/(A * B)+A/(A * B). The first B can be eliminated, and A can also be eliminated to become 1. Therefore, (B+A)/(A * B)=1/A+1/B",
		"1.分数列项 我们先看一个分数的计算(B+A)/(A*B)在这里下面的分母是不可分割的，而上面那里因为是加法所以加法的每一项都去除，因为中间是加号所以就是B/(A*B)+A/(A*B)，前面B可以消掉，A也可以消掉变1 所以(B+A)/(A * B)=1/A+1/B"},
		{"2. How to list items that must have these two numbers added and multiplied, such as 3/2=(1+2)/1 * 2",
		"2.如何列项 必须相加有这两个数，相乘有这两个数比如3/2=（1+2）/1*2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P59 公式推导 裂项问题"));
	ColPrintf(PrintfCol::方法, Lang("1.分数列项 我们先看一个分数的计算(B+A)/(A*B)在这里下面的分母是不可分割的，而上面那里因为是加法所以加法的每一项都去除，因为中间是加号所以就是B/(A*B)+A/(A*B)，前面B可以消掉，A也可以消掉变1 所以(B+A)/(A * B)=1/A+1/B"));
	ColPrintf(PrintfCol::方法, Lang("2.如何列项 必须相加有这两个数，相乘有这两个数比如3/2=（1+2）/1*2"));
}
void P59_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P59 Example 1: Defining a New Operation","P59 例一 裂项问题"},
		{"Title: Calculation 3/5+6/7+5/6+7/12+9/20+11/30+13/42",
		"题目：计算3/5+6/7+5/6+7/12+9/20+11/30+13/42"},
		{"1. Split the items into 3/5+6/7+((2+3)/(2 * 3))+(4+3)/(3 * 4))+(4+5)/(4 * 5))+((5+6)/(5 * 6))+(6+7)/(6 * 7))",
		"1.把能列项裂项得到S1 3/5+6/7+((2+3)/(2*3))+((4+3)/(3*4))+((4+5)/(4*5))+((5+6)/(5*6))+((6+7)/(6*7))"},
		{"2. Simplify S1 into S2 3/5+6/7+(1/2+1/3)+(1/3+1/4)+(1/4+1/5)+(1/5+1/6)+(1/6+1/7) using a formula",
		"2.把S1用公式化简成S2 3/5+6/7+(1/2+1/3))+(1/3+1/4))+(1/4+1/5))+(1/5+1/6))+(1/6+1/7))"},
		{"3. Round the numbers that cannot be listed in S1 to obtain S2 1+1+(1/2+1/4+1/4)+(1/3+1/3+1/6+1/6)",
		"3.把S1中不能列项的数凑整得到S2 1+1+(1/2+1/4+1/4  )+(1/3+1/3+1/6+1/6)"},
		{"4. Simplify equation S1 to obtain S2 1+1+1+1=4",
		"4.化简式子S1得到S2 1+1+1+1=4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P59 例一 裂项问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算3/5+6/7+5/6+7/12+9/20+11/30+13/42"));
	ColPrintf(PrintfCol::方法, Lang("1.把能列项裂项得到S1 3/5+6/7+((2+3)/(2*3))+((4+3)/(3*4))+((4+5)/(4*5))+((5+6)/(5*6))+((6+7)/(6*7))"));
	ColPrintf(PrintfCol::方法, Lang("2.把S1用公式化简成S2 3/5+6/7+(1/2+1/3))+(1/3+1/4))+(1/4+1/5))+(1/5+1/6))+(1/6+1/7))"));
	ColPrintf(PrintfCol::方法, Lang("3.把S1中不能列项的数凑整得到S2 1+1+(1/2+1/4+1/4  )+(1/3+1/3+1/6+1/6)"));
	ColPrintf(PrintfCol::方法, Lang("4.化简式子S1得到S2 1+1+1+1=4"));
}
void P59_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P59 Example 2: Defining New Operations","P59 例二 裂项问题"},
		{"Title: Calculation 3/2+5/6+7/12+9/20+11/30+13/42+15/56+17/72+19/90",
		"题目：计算3/2-5/6+7/12-9/20+11/30-13/42+15/56-17/72+19/90"},
		{"1. Splitting items are obtained S1 (1+2)/(1*2)+(2+3)/(2*3)+(3+4)/(3*4)+(4+5)/(4*5)+(5+6)/(5*6)+(6+7)/(6*7)+(7+8)/(7*8)+(8+9)/(8*9)+(9+10)/(9*10)",
		"1.裂项得到S1 (1+2)/(1*2)-(2+3)/(2*3)+(3+4)/(3*4)-(4+5)/(4*5)+(5+6)/(5*6)-(6+7)/(6*7)+(7+8)/(7*8)-(8+9)/(8*9)+(9+10)/(9*10)"},
		{"2. Use the formula to obtain S2 (1/1+1/2)-(1/2+1/3)+(1/3+1/4)-(1/4+1/5)+(1/5+1/6)-(1/6+1/7)+(1/7+1/8)-(1/8+1/9)-(1/9+1/10)",
		"2.把S1用公式得到S2 (1/1+1/2)-(1/2+1/3)+(1/3+1/4)-(1/4+1/5)+(1/5+1/6)-(1/6+1/7)+(1/7+1/8)-(1/8+1/9)-(1/9+1/10)"},
		{"3. Expand S2 to obtain S3 1/1/1+1/2-1/3-1/3+1/4-1/1+5+1/5+1/6-1/6-1/7+1/7-1/8-1/9-1/9-1/10",
		"3.展开S2得到S3 1/1+1/2-1/2-1/3+1/3+1/4-1/4-1/5+1/5+1/6-1/6-1/7+1/7+1/8-1/8-1/9-1/9-1/10"},
		{"4. Subtract the items of S3 by 1/1+1/10=1.1",
		"4.把S3的的项消掉 1/1+1/10=1.1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P59 例二 裂项问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算3/2-5/6+7/12-9/20+11/30-13/42+15/56-17/72+19/90"));
	ColPrintf(PrintfCol::方法, Lang("1.裂项得到S1 (1+2)/(1*2)-(2+3)/(2*3)+(3+4)/(3*4)-(4+5)/(4*5)+(5+6)/(5*6)-(6+7)/(6*7)+(7+8)/(7*8)-(8+9)/(8*9)+(9+10)/(9*10)"));
	ColPrintf(PrintfCol::方法, Lang("2.把S1用公式得到S2 (1/1+1/2)-(1/2+1/3)+(1/3+1/4)-(1/4+1/5)+(1/5+1/6)-(1/6+1/7)+(1/7+1/8)-(1/8+1/9)-(1/9+1/10)"));
	ColPrintf(PrintfCol::方法, Lang("3.展开S2得到S3 1/1+1/2-1/2-1/3+1/3+1/4-1/4-1/5+1/5+1/6-1/6-1/7+1/7+1/8-1/8-1/9-1/9-1/10"));
	ColPrintf(PrintfCol::方法, Lang("4.把S3的的项消掉 1/1+1/10=1.1"));
}
void P59_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P59 Cases of Three Splitting Problems","P59 例三 裂项问题"},
		{"Title: Calculation (49/12-63/20+77/30-91/42+105/56) -3 (1/6)) 1/24",
		"题目：计算((49/12-63/20+77/30-91/42+105/56)-3(1/6))1/24"},
		{"1. Because there is a common factor, the common factor is proposed as (7 * (7/12-9/9+11/30-13/42+15/56) -3 (1/6)) 1/24",
		"1.因为有公因数所以把公因数提出 (7*(7/12-9/20+11/30-13/42+15/56)-3(1/6))1/24"},
		{"2. Split Item (7 * (3+4)/(3 * 4) - (4+5)/(4 * 5)+(5+6)/(5 * 6) - (6+7)/(6 * 7)+(7+8)/(7 * 8)) 1/24",
		"2.裂项 (7*(3+4)/(3*4)-(4+5)/(4*5)+(5+6)/(5*6)-(6+7)/(6*7)+(7+8)/(7*8))1/24"},
		{"3. Use the formula to calculate the crack term (7 * 1/3+1/4-1/4+1/5-1/5+1/6-1/6+1/7-1/7+1/8) 1/24",
		"3.用公式求出裂项 (7*1/3+1/4-1/4+1/5-1/5+1/6-1/6+1/7-1/7+1/8)1/24"},
		{"4. Eliminate excess items (7 * (1/3+1/8-19/6)) 24",
		"4.消掉多余项 (7*(1/3+1/8-19/6))24"},
		{"5. Simplify the equation to obtain 7 * (1/3+1/8) * 24-19/6 * 24",
		"5.化简式子得到 7*(1/3+1/8)*24-19/6*24"},
		{"6. Simplify the equation to obtain 7 * (8+3) -76=1",
		"6.化简式子得到 7*(8+3)-76=1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P59 例三 裂项问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算((49/12-63/20+77/30-91/42+105/56)-3(1/6))1/24"));
	ColPrintf(PrintfCol::方法, Lang("1.因为有公因数所以把公因数提出 (7*(7/12-9/20+11/30-13/42+15/56)-3(1/6))1/24"));
	ColPrintf(PrintfCol::方法, Lang("2.裂项 (7*(3+4)/(3*4)-(4+5)/(4*5)+(5+6)/(5*6)-(6+7)/(6*7)+(7+8)/(7*8))1/24"));
	ColPrintf(PrintfCol::方法, Lang("3.用公式求出裂项 (7*1/3+1/4-1/4+1/5-1/5+1/6-1/6+1/7-1/7+1/8)1/24"));
	ColPrintf(PrintfCol::方法, Lang("4.消掉多余项 (7*(1/3+1/8-19/6))24"));
	ColPrintf(PrintfCol::方法, Lang("5.化简式子得到 7*(1/3+1/8)*24-19/6*24"));
	ColPrintf(PrintfCol::方法, Lang("6.化简式子得到 7*(8+3)-76=1"));
}
void P59()
{
	P59_formula();
	ColPrintf(PrintfCol::方法, "");
	P59_1();
	ColPrintf(PrintfCol::方法, "");
	P59_2();
	ColPrintf(PrintfCol::方法, "");
	P59_3();
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
void P59_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P59();
	Lang.SetCurLanguage(LanguageLib::English);
	P59();
	ColPrintf(PrintfCol::方法, "");

}