#pragma once
void P44_1()
{

	LanguageLib::LanguageTableT Language = {
		{"P44 Example 1 permutation combination","P44��һ �������"},
		{"Title: Xiaohong and the other 5 classmates take a photo. Xiaohong cannot be on the far left or right. How many arrangements are there?",
		"��Ŀ��С�������5��ͬѧ���գ�С�첻������������ң��м�������?"},
		{"Analysis: We can first calculate the number of permutations that Xiaohong can have on the left and right of 6 people, and then subtract Xiaohong's positions on both sides",
		"���������ǿ�������6����С����������ҵ����������ٰ�С������ռ���õ���������ȥ"},
		{"1. Calculate the total number of permutations N1 for six people. The total number of permutations N1 for six people is equal to the total number of people N1 * (total number of people N1-\nnumber of people selected each time N2) * (total number of people N1- number of people selected each time N2- number of people selected each time N2) * (total number of people N1-\nnumber of people selected each time N2- number of people selected each time N2) * (total number of people N1- number of people selected each time\nN2- number of people selected each time N2)",
		"1.����������һ������������N1 ������һ������������N1=һ��������N1*(һ��������N1-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"},
		{"2. Calculate the number of options for Xiaohong on one side N3=Other students N4 * (Other students N4- Number of options selected each time N2) * (Other students N4- Number of options selected each time N2- Number of options selected each time N2) * (Other students N4- Number of options selected each time N2- Number of options selected each time N2)",
		"2.����С����һ�ߵ�����N3 С����һ�ߵ�����N3=����ͬѧN4*(����ͬѧN4-ÿ��ѡ����N2)*(����ͬѧN4-ÿ��ѡ����N2-ÿ��ѡ����N2)*(����ͬѧN4-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"},
		{"3. Calculate the number of species on both sides of Xiaohong N4=the number of species on one side of Xiaohong N3 * the number of sides where Xiaohong cannot stand N5",
		"3.����С�������ߵ�����N4 С�������ߵ�����N4=С����һ�ߵ�����N3*С�첻��վ�ı���N5"},
		{"4. Calculate the total number of permutations N6=the total number of permutations for six people N1- the number of permutations for Xiaohong on both sides N4",
		"4.����һ��������N6 һ��������N6=������һ������������N1-С�������ߵ�����N4"},
		//������
		{"ThetotalnumberofpeopleisN1","һ��������N1"},
		{"NumberofcandidatesselectedeachtimeN2","ÿ��ѡ����N2"},
		{"ThenumberofsidesthatXiaohongcannotstandonisN5","С�첻��վ�ı���N5"},
		{"ThetotalnumberofpermutationsN1forsixpeople","������һ������������N1"},
		{"ThenumberofspecieswithXiaohongonthesideN3","С����һ�ߵ�����N3"},
		{"Xiaohong'snumberofspeciesonbothsidesN4","С�������ߵ�����N4"},
		{"TotalarrangementnumberN6","һ��������N6"},
		{"OtherstudentsN4","����ͬѧN4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ��������N1, 6);
	DefineLangVarInt(ÿ��ѡ����N2, 1);
	DefineLangVarInt(С�첻��վ�ı���N5, 2);
	DefineLangVarInt(����ͬѧN4, 5);
	ColPrintf(PrintfCol::����, Lang("P44��һ �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��С�������5��ͬѧ���գ�С�첻������������ң��м�������?"));
	ColPrintf(PrintfCol::����, Lang("���������ǿ�������6����С����������ҵ����������ٰ�С������ռ���õ���������ȥ"));
	DefineLangVarInt(������һ������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����������һ������������N1 ������һ������������N1=һ��������N1*(һ��������N1-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"));
	������һ������������N1 = һ��������N1 * (һ��������N1 - ÿ��ѡ����N2) * (һ��������N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2) * (һ��������N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2 - ÿ��ѡ����N2) * (һ��������N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2 - ÿ��ѡ����N2 - ÿ��ѡ����N2);
	������һ������������N1.PrintProcessLog(1);
	DefineLangVarInt(С����һ�ߵ�����N3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����С����һ�ߵ�����N3 С����һ�ߵ�����N3=����ͬѧN4*(����ͬѧN4-ÿ��ѡ����N2)*(����ͬѧN4-ÿ��ѡ����N2-ÿ��ѡ����N2)*(����ͬѧN4-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"));
	С����һ�ߵ�����N3 = ����ͬѧN4 * (����ͬѧN4 - ÿ��ѡ����N2) * (����ͬѧN4 - ÿ��ѡ����N2 - ÿ��ѡ����N2) * (����ͬѧN4 - ÿ��ѡ����N2 - ÿ��ѡ����N2 - ÿ��ѡ����N2);
	С����һ�ߵ�����N3.PrintProcessLog(2);
	DefineLangVarInt(С�������ߵ�����N4, 0);
	ColPrintf(PrintfCol::����, Lang("3.����С�������ߵ�����N4 С�������ߵ�����N4=С����һ�ߵ�����N3*С�첻��վ�ı���N5"));
	С�������ߵ�����N4 = С����һ�ߵ�����N3 * С�첻��վ�ı���N5;
	С�������ߵ�����N4.PrintProcessLog(3);
	DefineLangVarInt(һ��������N6, 0);
	ColPrintf(PrintfCol::����, Lang("4.����һ��������N6 һ��������N6=������һ������������N1-С�������ߵ�����N4"));
	һ��������N6 = ������һ������������N1 - С�������ߵ�����N4;
	һ��������N6.PrintProcessLog(4);
}
void P44_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P44 Example 2 permutation combination","P44���� �������"},
		{"Title: Weiwei bought 6 types of food, but she cannot bring the fifth and sixth types. She has to choose 4 types as her meals. How many choices do she have?",
		"��Ŀ��ޱޱ����6��ʳ��������ֺ͵����ֲ��ܴ�����Ҫѡ4����Ϊ�͵㣬���м���ѡ��"},
		{"Analysis: Since we need to choose food, we cannot have the same things in different orders, such as items numbered 0, 1,\n2, 3 and 1, 0, 2, 3 being the same. This is equivalent to having only one type, so we need to eliminate duplicates and use this method to subtract\nthe fifth and sixth types",
		"��������ȻҪѡ��ʳ�����ǲ�����ͬ�����ﲻͬ��˳�򣬱�����Ϊ0��1��2��3��1��0��2��3��һ���ģ�����൱��ֻ��һ�֣��������ǵð��ظ��ĳ�������������ѵ�������ּ���������д����C^m_n=A^m_n/m"},
		{"1. Calculate the total number of species N1, which includes all species N1=(total number of people N1 * (total number of people N1- number of people selected each time N2) * (total number of people N1- number of people selected each time N2- number of people selected each time N2) * (total number of people N1- number of people selected each time N2- number of people selected each time N2)",
		"1.�������ȫ��������N1 ����ȫ��������N1=(һ��������N1*(һ��������N1-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2))"},
		{"2. Calculate the number of repetitions N2. The number of repetitions N2=the number of choices N1 per time * (the number of choices N1 per time - the number of choices N2 per time) * (the number of choices N1 per time -\nthe number of choices N2 per time) * (the number of choices N1 per time - the number of choices N2 per time - the number of choices N2 per\ntime)",
		"2.�����ظ�������N2 �ظ�������N2=ÿ�ε�ѡ����N1*(ÿ�ε�ѡ����N1-ÿ��ѡ����N2)*(ÿ�ε�ѡ����N1-ÿ��ѡ����N2-ÿ��ѡ����N2)*(ÿ�ε�ѡ����N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"},
		{"3. Calculate the number of non duplicated species N4=including all species N1/duplicated species N2",
		"3.����û���ظ�����N4 û���ظ�����N4=����ȫ��������N1/�ظ�������N2"},
		{"4. If there are no duplicates in the calculation, you cannot select the number of items N5. If there are no duplicates, you cannot select the number of items N5=((total\nquantity N7- non selectable quantity N6) * (total quantity N7- non selectable quantity N6) - number of people selected each time N2)/(non\nselectable quantity N6 * (non selectable quantity N6- number of people selected each time N2)",
		"4.����û�ظ�����ѡ������N5 û�ظ�����ѡ������N5 = ((�ܹ�������N7 - ����ѡ�������N6)* ( (�ܹ�������N7 - ����ѡ�������N6) - ÿ��ѡ����N2))/ (����ѡ�������N6 * (����ѡ�������N6 - ÿ��ѡ����N2));"},
		{"5. Calculate the total number of choices N7. The total number of choices N7 is equal to the number of non duplicated items N4 minus the number of non duplicated items N5",
		"5.����һ��ѡ����N7 һ��ѡ����N7=û���ظ�����N4-û�ظ�����ѡ������N5"},
		//������
		{"ThetotalnumberofpeopleisN1","һ��������N1"},
		{"NumberofcandidatesselectedeachtimeN2","ÿ��ѡ����N2"},
		{"NumberofchoiceseachtimeN1","ÿ�ε�ѡ����N1"},
		{"ThetotalquantityisN7","�ܹ�������N7"},
		{"NumberN6thatcannotbeselected","����ѡ�������N6"},
		{"IncludingallspeciesN1","����ȫ��������N1"},
		{"NumberofrepeatedspeciesN2","�ظ�������N2"},
		{"NoduplicatenumberN4","û���ظ�����N4"},
		{"Noduplicates.CannotselectnumberN5","û�ظ�����ѡ������N5"},
		{"ThetotalnumberofchoicesisN7","һ��ѡ����N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ��������N1, 6);
	DefineLangVarInt(ÿ��ѡ����N2, 1);
	DefineLangVarInt(ÿ�ε�ѡ����N1, 4);
	DefineLangVarInt(�ܹ�������N7, 6);
	DefineLangVarInt(����ѡ�������N6, 2);
	ColPrintf(PrintfCol::����, Lang("P44���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ޱޱ����6��ʳ��������ֺ͵����ֲ��ܴ�����Ҫѡ4����Ϊ�͵㣬���м���ѡ��"));
	ColPrintf(PrintfCol::����, Lang("��������ȻҪѡ��ʳ�����ǲ�����ͬ�����ﲻͬ��˳�򣬱�����Ϊ0��1��2��3��1��0��2��3��һ���ģ�����൱��ֻ��һ�֣��������ǵð��ظ��ĳ�������������ѵ�������ּ���������д����C^m_n=A^m_n/m"));
	DefineLangVarInt(����ȫ��������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ȫ��������N1 ����ȫ��������N1=(һ��������N1*(һ��������N1-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2)*(һ��������N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2))"));
	����ȫ��������N1 = (һ��������N1 * (һ��������N1 - ÿ��ѡ����N2) * (һ��������N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2) * (һ��������N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2 - ÿ��ѡ����N2));
	����ȫ��������N1.PrintProcessLog(1);
	DefineLangVarInt(�ظ�������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ظ�������N2 �ظ�������N2=ÿ�ε�ѡ����N1*(ÿ�ε�ѡ����N1-ÿ��ѡ����N2)*(ÿ�ε�ѡ����N1-ÿ��ѡ����N2-ÿ��ѡ����N2)*(ÿ�ε�ѡ����N1-ÿ��ѡ����N2-ÿ��ѡ����N2-ÿ��ѡ����N2)"));
	�ظ�������N2 = ÿ�ε�ѡ����N1 * (ÿ�ε�ѡ����N1 - ÿ��ѡ����N2) * (ÿ�ε�ѡ����N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2) * (ÿ�ε�ѡ����N1 - ÿ��ѡ����N2 - ÿ��ѡ����N2 - ÿ��ѡ����N2);
	�ظ�������N2.PrintProcessLog(2);
	DefineLangVarInt(û���ظ�����N4, 0);
	ColPrintf(PrintfCol::����, Lang("3.����û���ظ�����N4 û���ظ�����N4=����ȫ��������N1/�ظ�������N2"));
	û���ظ�����N4 = ����ȫ��������N1 / �ظ�������N2;
	û���ظ�����N4.PrintProcessLog(3);
	DefineLangVarInt(û�ظ�����ѡ������N5, 0);
	ColPrintf(PrintfCol::����, Lang("4.����û�ظ�����ѡ������N5 û�ظ�����ѡ������N5 = ((�ܹ�������N7 - ����ѡ�������N6)* ( (�ܹ�������N7 - ����ѡ�������N6) - ÿ��ѡ����N2))/ (����ѡ�������N6 * (����ѡ�������N6 - ÿ��ѡ����N2));"));
	û�ظ�����ѡ������N5 = ((�ܹ�������N7 - ����ѡ�������N6)* ( (�ܹ�������N7 - ����ѡ�������N6) - ÿ��ѡ����N2))/ (����ѡ�������N6 * (����ѡ�������N6 - ÿ��ѡ����N2));
	û�ظ�����ѡ������N5.PrintProcessLog(4);
	DefineLangVarInt(һ��ѡ����N7, 0);
	ColPrintf(PrintfCol::����, Lang("5.����һ��ѡ����N7 һ��ѡ����N7=û���ظ�����N4-û�ظ�����ѡ������N5"));
	һ��ѡ����N7 = û���ظ�����N4 - û�ظ�����ѡ������N5;
	һ��ѡ����N7.PrintProcessLog(5);
}
void P44()
{
	P44_1();
	ColPrintf(PrintfCol::����, "");
	P44_2();
	ColPrintf(PrintfCol::����, "");
	
}
void P44_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P44();
	Lang.SetCurLanguage(LanguageLib::English);
	P44();
	ColPrintf(PrintfCol::����, "");

}