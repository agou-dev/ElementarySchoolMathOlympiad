#pragma once
void P57_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 1 Definition of New Operation for the First Small Question","P57 ��һ��һС�� ����������"},
		{"Title: Assuming that both a and b represent numbers, and specifying that a �� b=3 * a -2 * b",
		"����Ŀ����a��b����ʾ�����涨a��b=3*a-2*b"},
		{"Title: Seeking 3 �� 2 and 2 �� 3",
		"��Ŀ����3��2��2��3"},
		{"1. Expand 3 �� 2 to obtain S1 3 �� 2=3 * 3-2 * 2=>3 * 3-2 * 2=9-4=5",
		"1.չ��3��2�õ�S1 3��2=3*3-2*2=>3*3-2*2=9-4=5"},
		{"2. Expand 2 �� 3 to obtain S2 2 �� 3=3 * 2-2 * 3=>3 * 2-2 * 3=6-6=0",
		"2.չ��2��3�õ�S2 2��3=3*2-2*3=>3*2-2*3=6-6=0"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P57 ��һ��һС�� ����������"));
	ColPrintf(PrintfCol::����, Lang("����Ŀ����a��b����ʾ�����涨a��b=3*a-2*b"));
	ColPrintf(PrintfCol::����, Lang("1.չ��3��2�õ�S1 3��2=3*3-2*2=>3*3-2*2=9-4=5"));
	ColPrintf(PrintfCol::����, Lang("2.չ��2��3�õ�S2 2��3=3*2-2*3=>3*2-2*3=6-6=0"));
}
void P57_1_2()
{
	
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 1 Definition of New Operation for Question 2","P57 ��һ�ڶ�С�� ����������"},
		{"Title: Seeking (17 �� 6) �� 2, 17 �� (6 �� 2)",
		"��Ŀ����(17��6)��2��17��(6��2)"},
		{"1. Enter 17 �� 6 into the symbol definition to obtain S1 17 �� 6=3 * 17-2 * 6=51-12=39",
		"1.��17��6������Ŷ����еõ�S1 17��6=3*17-2*6=51-12=39"},
		{"2. Substitute S1 into (17 �� 6) �� 2 to obtain S2 39 �� 2=3 * 39-2 * 2=117-4=113",
		"2.��S1����(17��6)��2�õ�S2 39��2=3*39-2*2=117-4=113"},
		{"3. Substitute 6 �� 2 into the symbol definition to obtain S3 6 �� 2=6 * 3-2 * 2=18-4=14",
		"3.��6 �� 2������Ŷ����еõ�S3 6 �� 2=6*3-2*2=18-4=14"},
		{"4. Substitute S3 into 17 �� (6 �� 2) to obtain S4 17 �� 14=17 * 3-14 * 2=51-28=23",
		"4.��S3����17 �� (6 �� 2)�õ�S4 17 ��14=17*3-14*2=51-28=23"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P57 ��һ�ڶ�С�� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����(17��6)��2��17��(6��2)"));
	ColPrintf(PrintfCol::����, Lang("1.��17��6������Ŷ����еõ�S1 17��6=3*17-2*6=51-12=39"));
	ColPrintf(PrintfCol::����, Lang("2.��S1����(17��6)��2�õ�S2 39��2=3*39-2*2=117-4=113"));
	ColPrintf(PrintfCol::����, Lang("3.��6 �� 2������Ŷ����еõ�S3 6 �� 2=6*3-2*2=18-4=14"));
	ColPrintf(PrintfCol::����, Lang("4.��S3����17 �� (6 �� 2)�õ�S4 17 ��14=17*3-14*2=51-28=23"));
}
void P57_1_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 1 Definition of New Operation for Question 3","P57 ��һ����С�� ����������"},
		{"Title: If it is known that 4 �� b=2, find b",
		"��Ŀ�������֪4 ��b=2����b"},
		{"1. Substitute 4 �� b=2 into the symbol definition to obtain S1 4 �� b=2=4 * 3-2b=2",
		"1.��4 ��b=2������Ŷ����еõ�S1 4 ��b=2=4*3-2b=2"},
		{"2. Simplify S1 to obtain S2 12-2b=2",
		"2.����S1�õ�S2 12-2b=2"},
		{"3. Simplify S2 to obtain S3 12-2=2b",
		"3.����S2�õ�S3 12-2=2b"},
		{"4. Simplify S4 to obtain S5 2b=10=>b=10/2=5",
		"4.����S4�õ�S5 2b=10=>b=10/2=5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P57 ��һ����С�� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������֪4 ��b=2����b"));
	ColPrintf(PrintfCol::����, Lang("1.��4 ��b=2������Ŷ����еõ�S1 4 ��b=2=4*3-2b=2"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 12-2b=2"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 12-2=2b"));
	ColPrintf(PrintfCol::����, Lang("4.����S4�õ�S5 2b=10=>b=10/2=5"));
}
void P57_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 2: Defining New Operations","P57 ���� ����������"},
		{"Title: Calculate a �� b as half of the difference between a and b, subtract the smaller from the larger one, for example, 12 �� 24=(24-12)/2=6, calculate 20 �� (7 �� x)=1, and find all values of x",
		"��Ŀ������a��b��ʾa��b�Ĳ��һ�룬�ýϴ�ļ���С�ģ�����12��24=(24-12)/2=6������20��(7��x)=1����x������ֵ"},
		{"1. Because half of the two values are 1, the entire difference is: (20 �� (7 �� x)) * 2=1 * 2=2",
		"1.��Ϊ����ֵ��һ����1����������ֵ�ǣ�(20��(7��x))*2=1*2=2"},
		{"2. Because either the left side is larger by 2 or the right side is larger by 2, there are two options: (7 �� x)=20-2=18 (7 �� x)=20+2=22",
		"2.��ΪҪô��ߴ�2��Ҫô�ұߴ�2���������֣�(7��x)=20-2=18 (7��x)=20+2=22"},
		{"3. Substitute the second step into 20 �� (7 �� x)=1 to obtain S1. When (7 �� x)=20-2=18, x must be greater than 7, otherwise (x-7)/2=18=>x-7=36=>x=43 cannot be satisfied",
		"3.�ѵڶ�������20��(7��x)=1�õ�S1 ��(7��x)=20-2=18ʱ xһ������7��Ȼ�޷����� (x-7)/2=18=>x-7=36=>x=43"},
		{"4. Substitute the second step into 20 �� (7 �� x)=1 to obtain S1. When (7 �� x)=20+2=22, x must be greater than 7, otherwise (x-7)/2=22=>x-7=44=>x=51 cannot be satisfied",
		"4.�ѵڶ�������20��(7��x)=1�õ�S1 ��(7��x)=20+2=22ʱ xһ������7��Ȼ�޷����� (x-7)/2=22=>x-7=44=>x=51"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P57 ���� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������a��b��ʾa��b�Ĳ��һ�룬�ýϴ�ļ���С�ģ�����12��24=(24-12)/2=6������20��(7��x)=1����x������ֵ"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ����ֵ��һ����1����������ֵ�ǣ�(20��(7��x))*2=1*2=2"));
	ColPrintf(PrintfCol::����, Lang("2.��ΪҪô��ߴ�2��Ҫô�ұߴ�2���������֣�(7��x)=20-2=18 (7��x)=20+2=22"));
	ColPrintf(PrintfCol::����, Lang("3.�ѵڶ�������20��(7��x)=1�õ�S1 ��(7��x)=20-2=18ʱ xһ������7��Ȼ�޷����� (x-7)/2=18=>x-7=36=>x=43"));
	ColPrintf(PrintfCol::����, Lang("4.�ѵڶ�������20��(7��x)=1�õ�S1 ��(7��x)=20+2=22ʱ xһ������7��Ȼ�޷����� (x-7)/2=22=>x-7=44=>x=51"));
}
void P57_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 3 Definition of New Operation","P57 ���� ����������"},
		{"Title: Regulation A o B=xA+B�� And 2 o 3=3 o 2. Seeking (6) o 5)*(1 o 10)",
		"��Ŀ���涨AOB=xA+B������2o3=3o2����(6o5)*(1o10)"},
		{"1. List equation S1 2 o 3=2x+3 3 o 2=3x+2",
		"1.�г�ʽ��S1 2o3=2x+3 3o2=3x+2"},
		{"2. Combine S1 to obtain S2 2x+3=3x+2",
		"2.����S1�õ�S2 2x+3=3x+2"},
		{"3. Simplify S2 to obtain S3 2x+3-2=2x+1=3x",
		"3.����S2�õ�S3 2x+3-2=2x+1=3x"},
		{"4. Simplify S3 to obtain S4 2x+1=3x=>3x-2x=1=>x=1",
		"4.����S3�õ�S4 2x+1=3x=>3x-2x=1=>x=1"},
		{"5. Substitute S4 into the symbol definition to obtain S5 (6o5)=6 * 1+5=11 (1o10)=1 * 1+10=11",
		"5.��S4���������Ŷ����еõ�S5 (6o5)=6*1+5=11 (1o10)=1*1+10=11"},
		{"6. Combine S5 to obtain S6 (6o5) * (1o10)=11 * 11=121",
		"6.��S5���ϵõ�S6 (6o5)*(1o10)=11*11=121"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P57 ���� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���涨AOB=xA+B������2o3=3o2����(6o5)*(1o10)"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 2o3=2x+3 3o2=3x+2"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 2x+3=3x+2"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 2x+3-2=2x+1=3x"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 2x+1=3x=>3x-2x=1=>x=1"));
	ColPrintf(PrintfCol::����, Lang("5.��S4���������Ŷ����еõ�S5 (6o5)=6*1+5=11 (1o10)=1*1+10=11"));
	ColPrintf(PrintfCol::����, Lang("6.��S5���ϵõ�S6 (6o5)*(1o10)=11*11=121"));
}
void P57_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P57 Example 4: Defining New Operations","P57 ���� ����������"},
		{"Title: There is a mathematical symbol ��o��that makes the following equation hold: 2o4=8 5o3=13 3o5=11 9o7=25",
		"��Ŀ����һ����ѧ���š�o����ʹ����ĵ�ʽ���� 2o4=8 5o3=13 3o5=11 9o7=25"},
		{"1. Let's first look at the first equation, which clearly shows 2 * 4=8, and then look at the next equation, 5o3, which clearly shows that our multiplication is incorrect. However, after swapping the positions of 3o5, the result becomes smaller, and the first number becomes smaller. This indicates that the first number contributes the most",
		"1.�����ȿ���һ��ʽ��������2*4=8 ��������һ��ʽ��5o3������������Ǵ���ģ���3o5������һ��λ�ý����С�ˣ���һ������С�ˣ����˵����һ�����������"},
		{"If the addition result is small, it must be a multiplication and addition process, because the first number contributes the most, so we try to multiply by 2, but it still doesn't work because the second number is useless. We add the second number",
		"2.�������ӽ��С�ˣ����Աض����ֳ��ּӣ���Ϊ��һ����������������������ų�2��Ҳ���ǲ��ԣ���Ϊ�ڶ�����û�� ���Ǽ��ϵڶ�����"},
		{"3. Verify equation 2o4=2 * 2+4=8 5o3=5 * 2+3=13 3o5=3 * 2+5=11 9o7=9 * 2+7=25",
		"3.��֤ʽ�� 2o4=2*2+4=8 5o3=5*2+3=13 3o5=3*2+5=11 9o7=9*2+7=25"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P57 ���� ����������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ����ѧ���š�o����ʹ����ĵ�ʽ���� 2o4=8 5o3=13 3o5=11 9o7=25"));
	ColPrintf(PrintfCol::����, Lang("1.�����ȿ���һ��ʽ��������2*4=8 ��������һ��ʽ��5o3������������Ǵ���ģ���3o5������һ��λ�ý����С�ˣ���һ������С�ˣ����˵����һ�����������"));
	ColPrintf(PrintfCol::����, Lang("2.�������ӽ��С�ˣ����Աض����ֳ��ּӣ���Ϊ��һ����������������������ų�2��Ҳ���ǲ��ԣ���Ϊ�ڶ�����û�� ���Ǽ��ϵڶ�����"));
	ColPrintf(PrintfCol::����, Lang("3.��֤ʽ�� 2o4=2*2+4=8 5o3=5*2+3=13 3o5=3*2+5=11 9o7=9*2+7=25"));
}
void P57()
{
	P57_1_1();
	ColPrintf(PrintfCol::����, "");
	P57_1_2();
	ColPrintf(PrintfCol::����, "");
	P57_1_3();
	ColPrintf(PrintfCol::����, "");
	P57_2();
	ColPrintf(PrintfCol::����, "");
	P57_3();
	ColPrintf(PrintfCol::����, "");
	P57_4();
	ColPrintf(PrintfCol::����, "");
	//P23_2();
	ColPrintf(PrintfCol::����, "");
}
void P57_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P57();
	Lang.SetCurLanguage(LanguageLib::English);
	P57();
	ColPrintf(PrintfCol::����, "");

}