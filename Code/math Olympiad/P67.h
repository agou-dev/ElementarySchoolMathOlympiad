#pragma once
void P67_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 1 Extracting Common Factors","P81 例一 提取公因数"},
		{"Title: Calculate 41.2 * 8.1+11 * 9 (1/4)+53.7 * 1.9",
		"题目：计算41.2*8.1+11*9(1/4)+53.7*1.9"},
		{"1. Convert fractions to decimals 41.2 * 8.1+11 * 9.25+53.7 * 1.9",
		"1.分数转小数 41.2*8.1+11*9.25+53.7*1.9"},
		{"2. Convert factors that can be rounded to integers into the sum of two numbers, 41.2 * 8.1+(41.2+12.5) * 1.9+11 * 9.25",
		"2.把能凑整数的因数转为两个数相加的和 41.2*8.1+(41.2+12.5)*1.9+11*9.25"},
		{"3. Expand step 2 to obtain 41.2 * 8.1+41.2 * 1.9+12.5 * 1.9+11 * 9.25",
		"3.展开第2步得到 41.2*8.1+41.2*1.9+12.5*1.9+11*9.25"},
		{"4. Extract common factor 41.2 * (8.1+1.9)+12.5 * 1.9+1.1 * 92.5",
		"4.提取公因数 41.2*(8.1+1.9)+12.5*1.9+1.1*92.5"},
		{"5. Convert the factor that can be rounded to an integer into the sum of two numbers, 412+12.5 * 1.9+1.1 * (12.5)+80",
		"5.把能凑整数的因数转为两个数相加的和 412+12.5*1.9+1.1*(12.5)+80"},
		{"6. Expand step 5 to obtain 412+12.5 * 1.9+1.1 * 12.5+80",
		"6.展开第5步得到 412+12.5*1.9+1.1*12.5+80"},
		{"7. Extract common factor 412+12.5 * 3+80=537.5",
		"7,提取公因数 412+12.5*3+80=537.5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例一 提取公因数"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算41.2*8.1+11*9(1/4)+53.7*1.9"));
	ColPrintf(PrintfCol::方法, Lang("1.分数转小数 41.2*8.1+11*9.25+53.7*1.9"));
	ColPrintf(PrintfCol::方法, Lang("2.把能凑整数的因数转为两个数相加的和 41.2*8.1+(41.2+12.5)*1.9+11*9.25"));
	ColPrintf(PrintfCol::方法, Lang("3.展开第2步得到 41.2*8.1+41.2*1.9+12.5*1.9+11*9.25"));
	ColPrintf(PrintfCol::方法, Lang("4.提取公因数 41.2*(8.1+1.9)+12.5*1.9+1.1*92.5"));
	ColPrintf(PrintfCol::方法, Lang("5.把能凑整数的因数转为两个数相加的和 412+12.5*1.9+1.1*(12.5)+80"));
	ColPrintf(PrintfCol::方法, Lang("6.展开第5步得到 412+12.5*1.9+1.1*12.5+80"));
	ColPrintf(PrintfCol::方法, Lang("7,提取公因数 412+12.5*3+80=537.5"));
}
void P67_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example 2 Extracting Common Factors","P81 例二 提取公因数"},
		{"Title: Calculate 3 (3/5) * 2345+5555/(25/256)+654.3 * 36",
		"题目：计算3(3/5)*2345+5555/(25/256)+654.3*36"},
		{"1. Convert the fraction to a decimal of 3.6 * 2345+5555/(25/256)+654.3 * 36",
		"1.把分数化为小数 3.6*2345+5555/(25/256)+654.3*36"},
		{"2. Factorize the middle term to a common factor of 3.6 * 2345+5555/(25/256)+6543 * 3.6",
		"2.把中间的项的因数化为公因数 3.6*2345+5555/(25/256)+6543*3.6"},
		{"3. Extract common factor 3.6 * (2345+6543)+5555/(25/256)",
		"3.提取公因数 3.6*(2345+6543)+5555/(25/256)"},
		{"4. The latter item is approximately divided into 3.6 * 8888+1111/(5/256)",
		"4.后一项约分 3.6*8888+1111/(5/256)"},
		{"5. The score for the latter item will decrease by approximately 3.6 * 8888+8888/6.4",
		"5.后一项分数约掉 3.6*8888+8888*6.4"},
		{"6. Extract the common factor (3.6+6.4) * 8888",
		"6.提取公因数 (3.6+6.4)*8888"},
		{"Step 6 of simplification yields 10 * 8888=88880",
		"7.化简第6步得到 10*8888=88880"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例二 提取公因数"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算3(3/5)*2345+5555/(25/256)+654.3*36"));
	ColPrintf(PrintfCol::方法, Lang("1.把分数化为小数 3.6*2345+5555/(25/256)+654.3*36"));
	ColPrintf(PrintfCol::方法, Lang("2.把中间的项的因数化为公因数 3.6*2345+5555/(25/256)+6543*3.6"));
	ColPrintf(PrintfCol::方法, Lang("3.提取公因数 3.6*(2345+6543)+5555/(25/256)"));
	ColPrintf(PrintfCol::方法, Lang("4.后一项约分 3.6*8888+1111/(5/256)"));
	ColPrintf(PrintfCol::方法, Lang("5.后一项分数约掉 3.6*8888+8888*6.4"));
	ColPrintf(PrintfCol::方法, Lang("6.提取公因数 (3.6+6.4)*8888"));
	ColPrintf(PrintfCol::方法, Lang("7.化简第6步得到 10*8888=88880"));
}
void P67_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P81 Example Three Extracting Common Factors","P81 例三 提取公因数"},
		{"Title: Calculation (0.34 * 2400 * 0.25+3 * 7 (3/4)+26.24/(1/3))/2/13",
		"题目：计算(0.34*2400*0.25+3*7(3/4)+26.24/(1/3))/2/13"},
		{"1. Convert fractions to decimals (0.34 * 2400 * 0.25+3 * 7.75+26.24 * 3) * 13/2",
		"1.把分数化为小数 (0.34*2400*0.25+3*7.75+26.24*3)*13/2"},
		{"2. Simplify the previous step and extract the common factor to obtain (34 * 24 * 0.25+3 * (7.75+26.24) * 13/2",
		"2.化简上一步并提取公因数得到 (34*24*0.25+3*(7.75+26.24))*13/2"},
		{"3. Simplify the previous step to obtain (34 * 24 * 0.25+3 * 34) * 13/2",
		"3.化简上一步得到 (34*24*0.25+3*34)*13/2"},
		{"4. Simplify the previous step and extract the common factor to obtain (6+3) * 34) * 13/2",
		"4.化简上一步并提取公因数得到 ((6+3)*34)*13/2"},
		{"5. Simplify the previous step to obtain 9 * 34 * (13/2)",
		"5.化简上一步得到 9*34*(13/2)"},
		{"6. About 9 * 17 * 13=1989 for the previous step",
		"6.对上一步约分 9*17*13=1989"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P81 例三 提取公因数"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算(0.34*2400*0.25+3*7(3/4)+26.24/(1/3))/2/13"));
	ColPrintf(PrintfCol::方法, Lang("1.把分数化为小数 (0.34*2400*0.25+3*7.75+26.24*3)*13/2"));
	ColPrintf(PrintfCol::方法, Lang("2.化简上一步并提取公因数得到 (34*24*0.25+3*(7.75+26.24))*13/2"));
	ColPrintf(PrintfCol::方法, Lang("3.化简上一步得到 (34*24*0.25+3*34)*13/2"));
	ColPrintf(PrintfCol::方法, Lang("4.化简上一步并提取公因数得到 ((6+3)*34)*13/2"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步得到 9*34*(13/2)"));
	ColPrintf(PrintfCol::方法, Lang("6.对上一步约分 9*17*13=1989"));
}
void P67()
{
	P67_1();
	ColPrintf(PrintfCol::方法, "");
	P67_2();
	ColPrintf(PrintfCol::方法, "");
	P67_3();
	ColPrintf(PrintfCol::方法, "");
}
void P67_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P67();
	Lang.SetCurLanguage(LanguageLib::English);
	P67();
	ColPrintf(PrintfCol::方法, "");

}