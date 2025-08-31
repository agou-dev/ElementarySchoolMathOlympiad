#pragma once
void P91_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P91 Example One Remainder Problem","P91 ��һ ��������"},
		{"Title: Divide 1013 by a two digit number, the remainder is 12, find all two digit numbers that meet the criteria",
		"��Ŀ��1013����һ����λ����������12���������������������λ��"},
		{"1. Because 1013 has a remainder, its factors are not the correct quotient either. Due to the interference of the remainder, the factors can only be divisible, leaving those with a remainder helpless.",
		"1.��Ϊ1013����������������Ҳ������ȷ���̣���Ϊ�������ĸ��ţ�����ֻ���Ǳ������ģ��������ľ������޲��ˡ�"},
		{"2. So we have to remove the remainder, which comes from the divisor. If it is not completely divided and is not satisfied with the divisor, then we remove the excess and remove it from the divisor",
		"2.�������ǵð�������ȥ������������Դ�Ǳ�������û�б��������ֲ������������Զ���ľ�ȥ�����ӱ���������ȥ"},
		{"3. Assuming that this two digit number is x, then 1013/x... 12, regardless of the quotient, can be divided by all, and there is no requirement for the quotient, but it can be calculated later",
		"3.���Ǽ��������λ��Ϊx����ô1013/x����12���������Ǽ��������Ϳ����ˣ���ûҪ���̣����̿��Ժ���ȥ����"},
		{"4. After taking the dividend, it is (1013-12)/x... 0=>1001/x... 0",
		"4.�ӱ�����ȡ���������(1013-12)/x����0=>1001/x����0"},
		{"So now we just need to find the factor of 1001, because 1001 can already be divided by these two digits",
		"5.��ô����ֻ��Ҫ��1001�������Ϳ����ˣ���Ϊ1001�Ѿ����Ա������λ������"},
		{"The factors of 6.1001 are 1 * 1001, 7 * 143, 11 * 91, 13 * 77, which means 11001, 7143, 11, 91, 13, 77",
		"6.1001��������1*1001��7*143��11*91��13*77��Ҳ����1��1001��7��143��11��91��13��77"},
		{"7. As the question requires two digit numbers, it is necessary to exclude some: 11, 91, 13, 77",
		"7.��Ϊ��ĿҪ������λ��������Ҫ�ų�һЩ��11��91��13��77"},
		{"8. We also need one more condition, which is that the remainder must be smaller than the divisor. If the remainder is 12, then 11 is excluded",
		"8.���ǻ�Ҫһ��������������һ���ȳ���С��������12����ô11���ų�"},
		{"So the two digit numbers that meet the criteria are 91, 13, and 77",
		"9.���Է�����������λ����91��13��77"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P91 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��1013����һ����λ����������12���������������������λ��"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ1013����������������Ҳ������ȷ���̣���Ϊ�������ĸ��ţ�����ֻ���Ǳ������ģ��������ľ������޲��ˡ�"));
	ColPrintf(PrintfCol::����, Lang("2.�������ǵð�������ȥ������������Դ�Ǳ�������û�б��������ֲ������������Զ���ľ�ȥ�����ӱ���������ȥ"));
	ColPrintf(PrintfCol::����, Lang("3.���Ǽ��������λ��Ϊx����ô1013/x����12���������Ǽ��������Ϳ����ˣ���ûҪ���̣����̿��Ժ���ȥ����"));
	ColPrintf(PrintfCol::����, Lang("4.�ӱ�����ȡ���������(1013-12)/x����0=>1001/x����0"));
	ColPrintf(PrintfCol::����, Lang("5.��ô����ֻ��Ҫ��1001�������Ϳ����ˣ���Ϊ1001�Ѿ����Ա������λ������"));
	ColPrintf(PrintfCol::����, Lang("6.1001��������1*1001��7*143��11*91��13*77��Ҳ����1��1001��7��143��11��91��13��77"));
	ColPrintf(PrintfCol::����, Lang("7.��Ϊ��ĿҪ������λ��������Ҫ�ų�һЩ��11��91��13��77"));
	ColPrintf(PrintfCol::����, Lang("8.���ǻ�Ҫһ��������������һ���ȳ���С��������12����ô11���ų�"));
	ColPrintf(PrintfCol::����, Lang("9.���Է�����������λ����91��13��77"));
}
void P91_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P91 Example of Two Remainder Problem","P91 ���� ��������"},
		{"Question: What is a natural number whose quotient and remainder are equal when divided by 11, and whose quotient is three times the remainder when divided by 9?",
		"��Ŀ��һ����Ȼ����������11���̺���������ȵģ�����9ʱ���������������������Ȼ���Ƕ���?"},
		{"1. At the beginning, let's list the equations because there are two equations with different quantities used. Therefore, let's first list the first equation. Let the dividend be y and the remainder be x, then y/11=x... x",
		"1.��ʼ�����г�ʽ�ӣ���Ϊ������ʽ�ӣ����õ�����������ͬ�������������е�һ��ʽ�ӣ��豻����Ϊy�������̶���x����ô��y/11=x����x"},
		{"2. Since the dividend is unknown, the remainder cannot be removed, so we can only simplify: y=11 * a+a=>y=12a",
		"2.��Ϊ��������δ֪�ģ�������������ȥ������������ֻ�ܻ���y=11*a+a=>y=12a"},
		{"3. According to the question, let's list the second equation. Assuming the dividend is y and the remainder is x, then y/9=3x... x",
		"3.�������������г��ڶ���ʽ�ӣ����豻����Ϊy��������x����ô��y/9=3x����x"},
		{"4. Continue simplifying the second equation: y=9 * 3x+x=>8b",
		"4.�����ѵڶ���ʽ�ӻ���y=9*3x+x=>28b"},
		{"Since this natural number can be decomposed into 28 b's or 12 a's, then it must be the least common multiple of the two numbers, which is 84",
		"5.��Ȼ�����Ȼ�����Էֽ�Ϊ28����b��12��a����ô��һ������������С����������84"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P91 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ����Ȼ����������11���̺���������ȵģ�����9ʱ���������������������Ȼ���Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.��ʼ�����г�ʽ�ӣ���Ϊ������ʽ�ӣ����õ�����������ͬ�������������е�һ��ʽ�ӣ��豻����Ϊy�������̶���x����ô��y/11=x����x"));
	ColPrintf(PrintfCol::����, Lang("2.��Ϊ��������δ֪�ģ�������������ȥ������������ֻ�ܻ���y=11*a+a=>y=12a"));
	ColPrintf(PrintfCol::����, Lang("3.�������������г��ڶ���ʽ�ӣ����豻����Ϊy��������x����ô��y/9=3x����x"));
	ColPrintf(PrintfCol::����, Lang("4.�����ѵڶ���ʽ�ӻ���y=9*3x+x=>28b"));
	ColPrintf(PrintfCol::����, Lang("5.��Ȼ�����Ȼ�����Էֽ�Ϊ28����b��12��a����ô��һ������������С����������84"));
}
void P91()
{
	P91_1();
	ColPrintf(PrintfCol::����, "");
	P91_2();
	ColPrintf(PrintfCol::����, "");
	//P90_2_2();
	ColPrintf(PrintfCol::����, "");
	//P91P90_3();
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
	ColPrintf(PrintfCol::����, "");
	//P73_4();
	ColPrintf(PrintfCol::����, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::����, "");
	P55_3();
	ColPrintf(PrintfCol::����, "");*/
}
void P91_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P91();
	Lang.SetCurLanguage(LanguageLib::English);
	P91();
	ColPrintf(PrintfCol::����, "");

}