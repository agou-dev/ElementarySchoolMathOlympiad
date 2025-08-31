#pragma once
void P94_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P93 Determine whether a number can be divided by a composite number","P93 �ж�һ�����ǲ��ǿ��Ա��������� ��������"},
		{"1. To determine whether it can be divided by a composite number, which may be a very large number, we need to divide it into two multiplication cases and then see if they can be divided separately",
		"1.Ҫ�ж����ǲ��ǿ��Ա������������������������һ���ǳ����һ��������������Ҫ�����ֳ���������˵�������ٷֱ��ǲ���������"},
		{"2. However, it needs to be added that if the two numbers divided are the same, and one of them is a factor of this number, then the other is also the same.",
		"2.���ǻ���Ҫ���䣬����ֳɵ�����������ͬ���������һ����������������������ô����һ��Ҳ��һ���ġ�"},
		{"3. This is a special case where the number being split may be its factor, but in reality, the composite number is not its factor. For example, the factor of 36, where 6 * 6=36, but this number is 42, cannot be divided by 36",
		"3.�����һ�������������п��ֲܷ���������������������ʵ�����������������������������36����������6*6=36������һ������42��42��������36"},
		{"4. Therefore, there cannot be any relationship between the two numbers that are split, which is coprime. Since the two numbers are not related, then 36 is still equal to 3 * 12. How can we explain this",
		"4.���Էֲ��������֮�䲻�����κι�ϵ�����ǻ��ʣ���Ȼ˵������û�й�ϵ����ô36������3*12�������ô����"},
		{"5. Because a multiple of 3 is 12, and 12 can contain 3, then if it is a multiple of 12, it is also a multiple of three, which is equivalent to the same, so we can only be coprime",
		"5.��Ϊ3�ı�����12����12���԰�����3����ô�����12�ı�������ô��Ҳ�����ı����������൱����ͬ�ģ���������ֻ�ܻ���"},
		{"6. Give an example: Can 1980 be divided by 36",
		"6.��һ�����ӣ�1980���ɲ����Ա�36����"},
		{"7. List the factors of 36 and split them: The factors of 36 are 1 * 36, 2 * 18, 3 * 12, 4 * 9. Among them, the coprime is 4 * 9, so it is split into 4 * 9",
		"7.�г�36���������ֲ�����36��������1*36��2*18��3*12��4*9�����л��ʵ���4*9�����Էֲ��4*9"},
		{"8. Determine whether 4 is a factor of 1980, because 4 only involves dividing the last two bits by the last two potentials, so 100 can also divide 4. Therefore, we only look at the last two bits: 80/4=20, so it is",
		"8.�ж�4�Ƿ���1980����������Ϊ4ֻ�漰������λ����λ�������ˣ���ô100Ҳ��������4����������ֻ������λ��80/4=20��������"},
		{"9. Determine whether 9 is a factor of 1980. 1980/9=220, so 1980 can be divided by 4.",
		"9.�ж�9�Ƿ���1980��������1980/9=220����1980��������4��"},
		{"10.So 1980 can be divided by 36",
		"10.����1980���Ա�36����"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P93 �ж�һ�����ǲ��ǿ��Ա��������� ��������"));
	ColPrintf(PrintfCol::����, Lang("1.Ҫ�ж����ǲ��ǿ��Ա������������������������һ���ǳ����һ��������������Ҫ�����ֳ���������˵�������ٷֱ��ǲ���������"));
	ColPrintf(PrintfCol::����, Lang("2.���ǻ���Ҫ���䣬����ֳɵ�����������ͬ���������һ����������������������ô����һ��Ҳ��һ���ġ�"));
	ColPrintf(PrintfCol::����, Lang("3.�����һ�������������п��ֲܷ���������������������ʵ�����������������������������36����������6*6=36������һ������42��42��������36"));
	ColPrintf(PrintfCol::����, Lang("4.���Էֲ��������֮�䲻�����κι�ϵ�����ǻ��ʣ���Ȼ˵������û�й�ϵ����ô36������3*12�������ô����"));
	ColPrintf(PrintfCol::����, Lang("5.��Ϊ3�ı�����12����12���԰�����3����ô�����12�ı�������ô��Ҳ�����ı����������൱����ͬ�ģ���������ֻ�ܻ���"));
	ColPrintf(PrintfCol::����, Lang("6.��һ�����ӣ�1980���ɲ����Ա�36����"));
	ColPrintf(PrintfCol::����, Lang("7.�г�36���������ֲ�����36��������1*36��2*18��3*12��4*9�����л��ʵ���4*9�����Էֲ��4*9"));
	ColPrintf(PrintfCol::����, Lang("8.�ж�4�Ƿ���1980����������Ϊ4ֻ�漰������λ����λ�������ˣ���ô100Ҳ��������4����������ֻ������λ��80/4=20��������"));
	ColPrintf(PrintfCol::����, Lang("9.�ж�9�Ƿ���1980��������1980/9=220����1980��������4��"));
	ColPrintf(PrintfCol::����, Lang("10.����1980���Ա�36����"));
}
void P94_2()
{
	LanguageLib::LanguageTableT Language = {
		{"The relationship between multiples of P93 and the division of numbers","P93 ������֮��Ĺ�ϵ ��������"},
		{"If a number a can be divided by b, and b can be divided by c, then a can be divided by c",
		"1.���һ����a���Ա�b������b�ֿ��Ա�c��������ôa�Ϳ�������c"},
		{"2. We can imagine that because a can be divided by b, we assume that there are n b's in a",
		"2.���ǿ������룺��Ϊa���Ա�b���������Լ���a������n��b"},
		{"3. We can also imagine that because b can be divided by c, we assume that there are x c in each b",
		"3.���ǻ��������룺��Ϊb�ֿ��Ա�c���������Լ���ÿ��b������x��c"},
		{"4. Because there are n b's in a and x c's in b, 2 b's make 2x c's, n b's make nx c's, and n b's can be written as a",
		"4.������Ϊa������n��b��b��������x��c��2��b����2x��c��n��b����nx��c��n��b����дΪa"},
		{"5.Since there is an integer c in a, then a can be divided by c",
		"5.��Ȼa��������������c����ôa�Ϳ��Գ�c"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P93 ������֮��Ĺ�ϵ ��������"));
	ColPrintf(PrintfCol::����, Lang("1.���һ����a���Ա�b������b�ֿ��Ա�c��������ôa�Ϳ�������c"));
	ColPrintf(PrintfCol::����, Lang("2.���ǿ������룺��Ϊa���Ա�b���������Լ���a������n��b"));
	ColPrintf(PrintfCol::����, Lang("3.���ǻ��������룺��Ϊb�ֿ��Ա�c���������Լ���ÿ��b������x��c"));
	ColPrintf(PrintfCol::����, Lang("4.������Ϊa������n��b��b��������x��c��2��b����2x��c��n��b����nx��c��n��b����дΪa"));
	ColPrintf(PrintfCol::����, Lang("5.��Ȼa��������������c����ôa�Ϳ��Գ�c"));
}
void P94_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P93 Division of trial division numbers","P93 �Գ��� ��������"},
		{"1. This method can be used when he gives a number, but some bits are not given, and then says that he can divide it by one number. He asks what the number you give is",
		"1.���ַ�������ʹ���ڣ�������һ������������һ����λû�и���Ȼ��˵��һ�����������������������������Ƕ���"},
		{"2. Let's start by taking the big picture, for example, if someone doesn't give us a digit, we set a digit to 9 and then use that number to remove it.",
		"2.������˵�Ӵ����㣬�����˼�û�и���λ�����Ǿ����λ��9��Ȼ�����Ǹ���ȥ����"},
		{"3.If there is a remainder, then we have learned before how to remove the remainder. Directly subtracting the remainder from the dividend is the final correct answer",
		"3.����������Ļ�����ô����֮ǰѧ�����ȥ��������ֱ�Ӵӱ��������������������������ȷ��"},
		{"4. If we start counting from a small number, let the number of digits be 0. If there is a remainder, subtract the remainder from the divisor to obtain the number of digits that cannot form a group.",
		"4.�����С�Ŀ�ʼ�㣬��ô�������λ��Ϊ0����������������ó�����ȥ����������ʣ�²��ܹ���һ�����Ҫ������"},
		{"5. If we add the required number to the dividend, the remainder will be equal to the divisor, which will add one, and there will be no remainder",
		"5.�����ٰѱ�����������Ҫ��������ô�����ͻ���ڳ������̻��һ����û������"},
		{"6. For example: What should be filled in the _ part to make 201_ divisible by 9",
		"6.�ٸ����ӣ�ʹ201_�ܱ�9������_����Ҫ��ʲô"},
		{"7. Starting from the big picture, assuming that _ is 9, then 2019/9... 3",
		"7.�Ӵ�ʼ�㣬�ȼ���_Ϊ9����ô2019/9����3"},
		{"8. Because it cannot be added up, the divisor is increased by 3, resulting in 2019-3=2016-9=224",
		"8.��Ϊ�������ϼ��ˣ����Ա���������3����Ҫ2019-3=2016��2016/9=224"},
		{"7. Starting from the big picture, assuming that _ is 9, then 2019/9... 3",
		"9.��С��ʼ�㣬�ȼ���_Ϊ0����ô2010/9����3"},
		{"10. Since it cannot be reduced downwards, the dividend is reduced by 9-3=6, resulting in 2010+6=2016, 2016/9=224",
		"10.��Ϊ�������¼��ˣ����Ա���������9-3=6����Ҫ2010+6=2016��2016/9=224"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P93 �Գ��� ��������"));
	ColPrintf(PrintfCol::����, Lang("1.���ַ�������ʹ���ڣ�������һ������������һ����λû�и���Ȼ��˵��һ�����������������������������Ƕ���"));
	ColPrintf(PrintfCol::����, Lang("2.������˵�Ӵ����㣬�����˼�û�и���λ�����Ǿ����λ��9��Ȼ�����Ǹ���ȥ����"));
	ColPrintf(PrintfCol::����, Lang("3.����������Ļ�����ô����֮ǰѧ�����ȥ��������ֱ�Ӵӱ��������������������������ȷ��"));
	ColPrintf(PrintfCol::����, Lang("4.�����С�Ŀ�ʼ�㣬��ô�������λ��Ϊ0����������������ó�����ȥ����������ʣ�²��ܹ���һ�����Ҫ������"));
	ColPrintf(PrintfCol::����, Lang("5.�����ٰѱ�����������Ҫ��������ô�����ͻ���ڳ������̻��һ����û������"));
	ColPrintf(PrintfCol::����, Lang("6.�ٸ����ӣ�ʹ201_�ܱ�9������_����Ҫ��ʲô"));
	ColPrintf(PrintfCol::����, Lang("7.�Ӵ�ʼ�㣬�ȼ���_Ϊ9����ô2019/9����3"));
	ColPrintf(PrintfCol::����, Lang("8.��Ϊ�������ϼ��ˣ����Ա���������3����Ҫ2019-3=2016��2016/9=224"));
	ColPrintf(PrintfCol::����, Lang("9.��С��ʼ�㣬�ȼ���_Ϊ0����ô2010/9����3"));
	ColPrintf(PrintfCol::����, Lang("10.��Ϊ�������¼��ˣ����Ա���������9-3=6����Ҫ2010+6=2016��2016/9=224"));
}
void P94_4()
{
	LanguageLib::LanguageTableT Language = {
		{"The properties of P93 integers and the division of numbers","P93 ���������� ��������"},
		{"1. Relationship between bits: We all know that multiplying a bit by 1000 means adding three zeros at the end, multiplying it by 100 means adding two zeros... This way, we can calculate the relationship between bits",
		"1.λ֮��Ĺ�ϵ�����Ƕ�֪��һ����λ����1000�����ں����������0������100�����Ǽ��������㡭����������������Լ���λ֮��Ĺ�ϵ"},
		{"2. abcd are all single digits, a is one digit, b is also one digit, so 1000 a's, adding 3 zeros after a is: four digit a 000",
		"2.abcd��Ϊһ����λ����a��һλ��bҲ��һλ����ô1000��a����a�������3������ǣ���λ��a000"},
		{"3. Adding two zeros after b is: the three digit b00, and adding it to the four digit a000 is ab00",
		"3.b�ں����������0���ǣ���λ��b00������λ��a000��Ӿ���ab00"},
		{"4. Adding a 0 after c is: the three digit c0, and adding it to the four digit ab00 is abc0",
		"4.c�ں������1��0���ǣ���λ��c0������λ��ab00��Ӿ���abc0"},
		{"5. When we add d, we get: abc0+c=abcd, so a multi digit number can be written as multiplying the digits of each digit in this multi digit number, and then adding the digits together",
		"5.��������d��Ӿ͵õ��ˣ�abc0+c=abcd������һ����λ��������д�ɸ�λ�������λ����λ����ˣ�Ȼ���λ��ӵ���ʽ"},
		{"6. Then list the formula: four digit abcd=a * 1000+b * 100+c * 10+d",
		"6.Ȼ���г�ʽ�ӣ���λ��abcd=a*1000+b*100+c*10+d"},
		{"7.For example: 6789=6 * 1000+7 * 100+8 * 10+9",
		"7.�ٸ����ӣ�6789=6*1000+7*100+8*10+9"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P93 ���������� ��������"));
	ColPrintf(PrintfCol::����, Lang("1.λ֮��Ĺ�ϵ�����Ƕ�֪��һ����λ����1000�����ں����������0������100�����Ǽ��������㡭����������������Լ���λ֮��Ĺ�ϵ"));
	ColPrintf(PrintfCol::����, Lang("2.abcd��Ϊһ����λ����a��һλ��bҲ��һλ����ô1000��a����a�������3������ǣ���λ��a000"));
	ColPrintf(PrintfCol::����, Lang("3.b�ں����������0���ǣ���λ��b00������λ��a000��Ӿ���ab00"));
	ColPrintf(PrintfCol::����, Lang("4.c�ں������1��0���ǣ���λ��c0������λ��ab00��Ӿ���abc0"));
	ColPrintf(PrintfCol::����, Lang("5.��������d��Ӿ͵õ��ˣ�abc0+c=abcd������һ����λ��������д�ɸ�λ�������λ����λ����ˣ�Ȼ���λ��ӵ���ʽ"));
	ColPrintf(PrintfCol::����, Lang("6.Ȼ���г�ʽ�ӣ���λ��abcd=a*1000+b*100+c*10+d"));
	ColPrintf(PrintfCol::����, Lang("7.�ٸ����ӣ�6789=6*1000+7*100+8*10+9"));
}
void P94()
{
	P94_1();
	ColPrintf(PrintfCol::����, "");
	P94_2();
	ColPrintf(PrintfCol::����, "");
	P94_3();
	ColPrintf(PrintfCol::����, "");
	P94_4();
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
void P94_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P94();
	Lang.SetCurLanguage(LanguageLib::English);
	P94();
	ColPrintf(PrintfCol::����, "");

}