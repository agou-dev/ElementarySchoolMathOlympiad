#pragma once
void P71_rule()
{
	LanguageLib::LanguageTableT Language = {
		{"P71 Regular Cycle Decimal Fraction","P71 ���� ѭ��С��������"},
		{"1. Common formulas",
		"1.����ʽ��"},
		{"    1.1/7=0.142857142857����=abc/999=142857/99999",
		"    1.1/7=0.142857142857����=abc/999=142857/99999"},
		{"    2.2/7=0.285714285714����=abc/999=285714/99999",
		"    2.2/7=0.285714285714����=abc/999=285714/99999"},
		{"    3.3/7=0.428571428571����=abc/999=428571/99999",
		"    3.3/7=0.428571428571����=abc/999=428571/99999"},
		{"    4.4/7=0.571428571428����=abc/999=571428/99999",
		"    4.4/7=0.571428571428����=abc/999=571428/99999"},
		{"    5.5/7=0.714285714285����=abc/999=714285/99999",
		"    5.5/7=0.714285714285����=abc/999=714285/99999"},
		{"    6.6/7=0.857142857142����=abc/999=857142/99999",
		"    6.6/7=0.857142857142����=abc/999=857142/99999"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P71 ���� ѭ��С��������"));
	ColPrintf(PrintfCol::����, Lang("1.����ʽ��"));
	ColPrintf(PrintfCol::����, Lang("    1.1/7=0.142857142857����=abc/999=142857/99999"));
	ColPrintf(PrintfCol::����, Lang("    2.2/7=0.285714285714����=abc/999=285714/99999"));
	ColPrintf(PrintfCol::����, Lang("    3.3/7=0.428571428571����=abc/999=428571/99999"));
	ColPrintf(PrintfCol::����, Lang("    4.4/7=0.571428571428����=abc/999=571428/99999"));
	ColPrintf(PrintfCol::����, Lang("    5.5/7=0.714285714285����=abc/999=714285/99999"));
	ColPrintf(PrintfCol::����, Lang("    6.6/7=0.857142857142����=abc/999=857142/99999"));
}
void P71_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P71 Example One Cycle Decimal Score","P71 ��һ ѭ��С��������"},
		{"Question: If the true fraction a/7 is converted to decimal, and the sum of several consecutive numbers starting from the first decimal place is 1992, then what is a?",
		"��Ŀ�������a/7��ΪС���������С�����һλ�����ֿ�ʼ�������ɸ�����֮����1992����ôa�Ƕ���?"},
		{"1. According to the rule, the number after the decimal point is 142857. After adding them up, divide it by 1992 to calculate how many cycles there are. Then, determine the following decimals based on the remainder, and use them to find the ones that follow the rule",
		"1.���ݹ��ɷ��ϵ���С���������142857�������������������1992���ѭ�����ٸ���Ȼ�����������ȷ������ļ���С����ͨ������ļ���С�������������ͬ��"},
		{"2. Calculate the total number of nodes in each cycle as 1+4+2+8+5+7=27",
		"2.����ÿ��ѭ�������� 1+4+2+8+5+7=27"},
		{"3. Calculate the number of cyclic digits 1992/27=73... 21",
		"3.����ѭ��λ�� 1992/27=73����21"},
		{"4. Calculate the number of loops without loops in the last loop 27-21-6, 6=2+4",
		"4.�������һ��ѭ�����û��ѭ������ 27-21-6��6=2+4"},
		{"5. According to the pattern, if the end is 2 and 4, only 857142 can be satisfied, so a is 6",
		"5.���ݹ����ҳ�ĩβ��2��4�������ֻ����857142������a��6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P71 ��һ ѭ��С��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������a/7��ΪС���������С�����һλ�����ֿ�ʼ�������ɸ�����֮����1992����ôa�Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.���ݹ��ɷ��ϵ���С���������142857�������������������1992���ѭ�����ٸ���Ȼ�����������ȷ������ļ���С����ͨ������ļ���С�������������ͬ��"));
	ColPrintf(PrintfCol::����, Lang("2.����ÿ��ѭ�������� 1+4+2+8+5+7=27"));
	ColPrintf(PrintfCol::����, Lang("3.����ѭ��λ�� 1992/27=73����21"));
	ColPrintf(PrintfCol::����, Lang("4.�������һ��ѭ�����û��ѭ������ 27-21-6��6=2+4"));
	ColPrintf(PrintfCol::����, Lang("5.���ݹ����ҳ�ĩβ��2��4�������ֻ����857142������a��6"));
}
void P71_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P71 Example Two Cycle Decimal Score","P71 ���� ѭ��С��������"},
		{"Question: A student multiplies 1.2333... by a, and considers 1.2333... as 1.23. The result is 0.3 less. What is the correct result?",
		"��Ŀ��ĳѧ����1.2333��������a����1.2333��������1.23���������0.3����ȷ�Ľ���Ƕ���?"},
		{"1. List equations S1 1.2333... a-1.23a=0.3",
		"1.�г�ʽ��S1 1.2333����a-1.23a=0.3"},
		{"2. Extract the common factor S1 to obtain S2 a (1.2333... -1.23)=0.3",
		"2.��ȡ������S1�õ�S2 a(1.2333����-1.23)=0.3"},
		{"3. Convert S2 into a fraction S3 a (1 (21/90) -1 (23/100))=(3/10)",
		"3.��S2��Ϊ����S3 a(1(21/90)-1(23/100))=(3/10)"},
		{"4. Simplify S3 to obtain S4 a (1/300)=(3/10)",
		"4.����S3�õ�S4 a(1/300)=(3/10)"},
		{"5. Simplify S4 to obtain S5 a=(3/10) * 300/1=90",
		"5.����S4�õ�S5 a=(3/10)*300/1=90"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P71 ���� ѭ��С��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ĳѧ����1.2333��������a����1.2333��������1.23���������0.3����ȷ�Ľ���Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 1.2333����a-1.23a=0.3"));
	ColPrintf(PrintfCol::����, Lang("2.��ȡ������S1�õ�S2 a(1.2333����-1.23)=0.3"));
	ColPrintf(PrintfCol::����, Lang("3.��S2��Ϊ����S3 a(1(21/90)-1(23/100))=(3/10)"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 a(1/300)=(3/10)"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�õ�S5 a=(3/10)*300/1=90"));
}
void P71_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P71 Example 3 Cycle Decimal Score","P71 ���� ѭ��С��������"},
		{"Title: What is abc when the sum of the numerator and denominator is 58 when written as the simplest fraction",
		"��Ŀ����ѭ��С��0.abcabc����д��������ʱ�����ӷ�ĸ�ĺ���58����abc�Ƕ���"},
		{"1. Simplify cyclic decimals 0. abcabc...=abc/999",
		"1.����ѭ��С�� 0.abcabc����=abc/999"},
		{"2. Decompose 999 to approximately 999=111 * 9=3 * 37 * 9=3 * 37 * 3 ^ 2=37 * 3 ^ 3",
		"2.�ֽ�999ʹ�ܹ�Լ�� 999=111*9=3*37*9=3*37*3^2=37*3^3=x"},
		{"3. List the range of denominators after simplification 58/2<x<58",
		"3.�оٻ�����ĸ�ķ�Χ 58/2<x<58"},
		{"4. Which item matches 3 ^ 3=27<29 37>29, so 37 is the denominator",
		"4.��һ����� 3^3=27<29 37>29,����37�����Ƿ�ĸ"},
		{"5. Take step 4 into step 1 (? * 3 ^ 3)/37 * 3 ^ 3=abc/999",
		"5.����4�������һ�� (?*3^3)/37*3^3=abc/999"},
		{"6. Simplify the previous step to obtain (? * 3 ^ 3)/37 * 3 ^ 3=? /37 ? +37=58",
		"6.������һ���õ� (?*3^3)/37*3^3=?/37 abc+37=58"},
		{"7. Simplify the previous step to obtain abc+37=58 abc=21",
		"7.������һ���õ� abc+37=58 abc=21"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P71 ���� ѭ��С��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ѭ��С��0.abcabc����д��������ʱ�����ӷ�ĸ�ĺ���58����abc�Ƕ���"));
	ColPrintf(PrintfCol::����, Lang("1.����ѭ��С�� 0.abcabc����=abc/999"));
	ColPrintf(PrintfCol::����, Lang("2.�ֽ�999ʹ�ܹ�Լ�� 999=111*9=3*37*9=3*37*3^2=37*3^3=x"));
	ColPrintf(PrintfCol::����, Lang("3.�оٻ�����ĸ�ķ�Χ 58/2<x<58"));
	ColPrintf(PrintfCol::����, Lang("4.��һ����� 3^3=27<29 37>29,����37�����Ƿ�ĸ"));
	ColPrintf(PrintfCol::����, Lang("5.����4�������һ�� (?*3^3)/37*3^3=abc/999"));
	ColPrintf(PrintfCol::����, Lang("6.������һ���õ� (?*3^3)/37*3^3=?/37 abc+37=58"));
	ColPrintf(PrintfCol::����, Lang("7.������һ���õ� abc+37=58 abc=21"));
}
void P71()
{
	//P70_formula();
	ColPrintf(PrintfCol::����, "");
	P71_rule();
	ColPrintf(PrintfCol::����, "");
	P71_1();
	ColPrintf(PrintfCol::����, "");
	P71_2();
	ColPrintf(PrintfCol::����, "");
	P71_3();
	ColPrintf(PrintfCol::����, "");
	
	//P70_2();
	ColPrintf(PrintfCol::����, "");
	//P69_2();
	ColPrintf(PrintfCol::����, "");
	//P69_3();
	ColPrintf(PrintfCol::����, "");
}
void P71_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P71();
	Lang.SetCurLanguage(LanguageLib::English);
	P71();
	ColPrintf(PrintfCol::����, "");

}