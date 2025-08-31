#pragma once
void P92_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P92 case one factor multiple","P92 ��һ ��������"},
		{"Question: Two natural numbers are not in a multiple relationship. Their greatest common factor is 18 and their least common multiple is 216. What are these two numbers?",
		"��Ŀ��������Ȼ�����ɱ�����ϵ�����ǵ����������18����С��������216�����������ֱ��Ƕ���?"},
		{"1. Because both of these numbers can be divided by their greatest common factor, we can divide the two numbers into their greatest common factor and another number with a multiple relationship",
		"1.��Ϊ�������������Ա�����������������ǿ��԰��������ֱ�ֳ��������������һ��������ϵ����"},
		{"2. So we can write it as follows: let the greatest common factor be m, another multiple is associated with a and b, and the two numbers are A and B. Then: A=m * a, B=m * b",
		"2.�������ǿ���д�ɣ����������Ϊm����һ������������ķֱ�Ϊa��b��������ΪA��B����ô��A=m*a��B=m*b"},
		{"3. Inputting the values into the equation is: A=18 * a, B=18 * b",
		"3.��ֵ���뵽ʽ���о��ǣ�A=18*a��B=18*b"},
		{"If it is the least common multiple, the method to calculate the least common multiple based on the decomposition prime factor is: [a, b]=m * a * b=18 * a * b=216, and the factor relationship is: (a, b)=m=18",
		"4.�������С���������ݷֽ�����������С�������İ취���ǣ�[a,b]=m*a*b=18*a*b=216,������ϵ���ǣ�(a,b)=m=18"},
		{"If 5. m is derived, then a * b can be derived: 18 * a * b=216=>a * b=216/18=12",
		"5.m�Ƴ����ˣ���ôa*b�Ϳ����Ƴ���18*a*b=216=>a*b=216/18=12"},
		{"In the question, it was mentioned that there cannot be a multiple relationship because the factors have one term that is the same, so it depends on whether a and b have a multiple relationship. Only 3 * 4=12 is satisfied, so these two numbers are 18 * 3=54 and 18 * 4=72, respectively",
		"6.��Ŀ��˵�˲��ɱ�����ϵ����Ϊ������һ����ͬ�����Ծ�Ҫ��a��b�Ƿ��Ǳ�����ϵ�������ֻ��3*4=12���������������ֱ���18*3=54��18*4=72"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P92 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������Ȼ�����ɱ�����ϵ�����ǵ����������18����С��������216�����������ֱ��Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ�������������Ա�����������������ǿ��԰��������ֱ�ֳ��������������һ��������ϵ����"));
	ColPrintf(PrintfCol::����, Lang("2.�������ǿ���д�ɣ����������Ϊm����һ������������ķֱ�Ϊa��b��������ΪA��B����ô��A=m*a��B=m*b"));
	ColPrintf(PrintfCol::����, Lang("3.��ֵ���뵽ʽ���о��ǣ�A=18*a��B=18*b"));
	ColPrintf(PrintfCol::����, Lang("4.�������С���������ݷֽ�����������С�������İ취���ǣ�[a,b]=m*a*b=18*a*b=216,������ϵ���ǣ�(a,b)=m=18"));
	ColPrintf(PrintfCol::����, Lang("5.m�Ƴ����ˣ���ôa*b�Ϳ����Ƴ���18*a*b=216=>a*b=216/18=12"));
	ColPrintf(PrintfCol::����, Lang("6.��Ŀ��˵�˲��ɱ�����ϵ����Ϊ������һ����ͬ�����Ծ�Ҫ��a��b�Ƿ��Ǳ�����ϵ�������ֻ��3*4=12���������������ֱ���18*3=54��18*4=72"));
}
void P92_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P92 cases with two factor multiples","P92 ���� ��������"},
		{"Question: The least common multiple of two numbers is 420, the greatest common factor is 6, and the difference between the two numbers is 18. What is the smaller number?",
		"��Ŀ������������С��������420�����������6���������18����С�����Ƕ��٣�"},
		{"1. This question is basically the same as the previous one, except for a difference of 18. We will still list the greatest common factor and common multiple before calculating",
		"1.��һ�����һ�����һ����ֻ�����������18�����ǻ��ǰ���������͹������г���������"},
		{"2. Let the greatest common factor be m, and the other multiples associated with it are a and b, respectively. The two numbers are A and B. Therefore, A=m * a, B=m * b",
		"2.�������������Ϊm����һ������������ķֱ�Ϊa��b��������ΪA��B����ô��A=m*a��B=m*b"},
		{"3. Substitute the numerical values into the equation, as m is the greatest common factor: (a, b)=m=6. Substitute m into the equation: A=6 * a, B=6 * b",
		"3.����ֵ���뵱�У���Ϊm������������ԣ�(a,b)=m=6,��m����ʽ�ӵ��У�A=6*a��B=6*b"},
		{"4. According to the decomposition prime factor acting on the equation, then: [a, b]=m * a * b=6 * a * b=420",
		"4.���ݷֽ�������������ʽ�ӵ��У���ô��[a,b]=m*a*b=6*a*b=420"},
		{"5. Simplify the equation from the previous step to obtain: 6 * a * b=420=>a * b=420/6=70",
		"5.������һ����ʽ�ӵõ���6*a*b=420=>a*b=420/6=70"},
		{"6. Because the relationship still requires a and b, and 6 * a-6 * b=18=>a-b=18/6=3, the factors of 70 are 1, 2, 5, 7, 10, 35, 70, which only match 7 * 10",
		"6.��Ϊ��ϵ������Ҫa��b�ģ�����6*a-6*b=18=>a-b=18/6=3��70��������1��2��5��7��10��35��70�������ϵ�ֻ��7*10"},
		{"7. We can calculate two numbers, the first one is 6 * 7=42, the second one is 6 * 10=60, and the smaller one is 42",
		"7.���ǾͿ��Լ����������ˣ���һ������6*7=42���ڶ�����6*10=60����С����42"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P92 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������������С��������420�����������6���������18����С�����Ƕ��٣�"));
	ColPrintf(PrintfCol::����, Lang("1.��һ�����һ�����һ����ֻ�����������18�����ǻ��ǰ���������͹������г���������"));
	ColPrintf(PrintfCol::����, Lang("2.�������������Ϊm����һ������������ķֱ�Ϊa��b��������ΪA��B����ô��A=m*a��B=m*b"));
	ColPrintf(PrintfCol::����, Lang("3.����ֵ���뵱�У���Ϊm������������ԣ�(a,b)=m=6,��m����ʽ�ӵ��У�A=6*a��B=6*b"));
	ColPrintf(PrintfCol::����, Lang("4.���ݷֽ�������������ʽ�ӵ��У���ô��[a,b]=m*a*b=6*a*b=420"));
	ColPrintf(PrintfCol::����, Lang("5.������һ����ʽ�ӵõ���6*a*b=420=>a*b=420/6=70"));
	ColPrintf(PrintfCol::����, Lang("6.��Ϊ��ϵ������Ҫa��b�ģ�����6*a-6*b=18=>a-b=18/6=3��70��������1��2��5��7��10��35��70�������ϵ�ֻ��7*10"));
	ColPrintf(PrintfCol::����, Lang("7.���ǾͿ��Լ����������ˣ���һ������6*7=42���ڶ�����6*10=60����С����42"));
}
void P92_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P92 cases with three factor multiples","P92 ���� ��������"},
		{"Title: Some children form a line and distribute an apple every two from the left and an orange every four from the right. There are 10 people who receive both apples and oranges. How many people are there in total?",
		"��Ŀ����ЩС�����ĳ�һ�У�����߿�ʼÿ��������һ��ƻ�������ҿ�ʼÿ��4����һ�����ӣ�ƻ�����Ӷ��õ�����10�ˣ���ô���ж�����?"},
		{"1. Let's start by looking at the one from the left, which is divided as follows: 1, 2, 3, 4, 5, 6... If we send one after the other two, then the ones we send are 1, 4, 7... ",
		"1.���ǿ�ʼ�ȿ�����ģ����������ֵģ�1��2��3��4��5��6�������и���������һ����ô�����ľ���1��4��7����"},
		{"2. It was found that one in every 2+1 people has an apple, where 1 is the person who sent it and 2 is separated by two people. Therefore, the image becomes like this: | 1, 2, 3 |, | 4, 5, 6 |",
		"2.���з���ÿ2+1�����о���һ������ƻ��������1���Ƿ������Ǹ��ˣ�2���Ǹ��������ˣ�����ͼ�ͱ��������|1��2��3|��|4��5��6|����"},
		{"3. Going from right to left is also the same principle. Every four people send an orange, it's like this... 7, 6, 5, 4, 3, 2, 1",
		"3.��������Ҳ��һ������ÿ��4���˷�һ�����ӣ��������ġ���7��6��5��4��3��2��1"},
		{"4. Similarly, there is one person every four people, so it is a group of 4+1 people. Each group sends one person, where 1 is the person to whom it is sent and 4 is separated by 4 people. Therefore, the graph becomes like this:... 7, 6, 5 |, | 4, 3, 2, 1|",
		"4.ͬ��ÿ���ĸ��˾���һ������ô����4+1����һ�飬һ�鷢һ�������е�1���Ƿ������Ǹ��ˣ�4���Ǹ���4���ˣ�����ͼ�ͱ������������7��6��5|��|4��3��2��1|"},
		{"When left and right intersect, the number of people at that time can definitely be divided by the number of people in these two groups, which is their least common multiple [3,5]=15",
		"5.������ཻʱ����ʱ�������϶��������������������������������֮�����С������[3,5]=15"},
		{"Because 10 people received apples and oranges, and each group received 15 people, there are 150 people in 10 * 15=150 people",
		"6.��Ϊƻ�����Ӷ��õ�����10�ˣ�ÿ�鶼�õ�����15�����Ծ���10*15=150��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P92 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ЩС�����ĳ�һ�У�����߿�ʼÿ��������һ��ƻ�������ҿ�ʼÿ��4����һ�����ӣ�ƻ�����Ӷ��õ�����10�ˣ���ô���ж�����?"));
	ColPrintf(PrintfCol::����, Lang("1.���ǿ�ʼ�ȿ�����ģ����������ֵģ�1��2��3��4��5��6�������и���������һ����ô�����ľ���1��4��7����"));
	ColPrintf(PrintfCol::����, Lang("2.���з���ÿ2+1�����о���һ������ƻ��������1���Ƿ������Ǹ��ˣ�2���Ǹ��������ˣ�����ͼ�ͱ��������|1��2��3|��|4��5��6|����"));
	ColPrintf(PrintfCol::����, Lang("3.��������Ҳ��һ������ÿ��4���˷�һ�����ӣ��������ġ���7��6��5��4��3��2��1"));
	ColPrintf(PrintfCol::����, Lang("4.ͬ��ÿ���ĸ��˾���һ������ô����4+1����һ�飬һ�鷢һ�������е�1���Ƿ������Ǹ��ˣ�4���Ǹ���4���ˣ�����ͼ�ͱ������������7��6��5|��|4��3��2��1|"));
	ColPrintf(PrintfCol::����, Lang("5.������ཻʱ����ʱ�������϶��������������������������������֮�����С������[3,5]=15"));
	ColPrintf(PrintfCol::����, Lang("6.��Ϊƻ�����Ӷ��õ�����10�ˣ�ÿ�鶼�õ�����15�����Ծ���10*15=150��"));
}
void P92_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P92 cases with four factor multiples","P92 ���� ��������"},
		{"Question: In an exam, one seventh of the students who participated were excellent, one fourth were good, one third were successful, and the rest were poor. Given that there are less than 100 students, how many of them are poor",
		"��Ŀ��һ�ο��ԣ��μӵ�ѧ�������߷�֮һ���ţ��ķ�֮һ����������֮һ���У������Ϊ���֪ѧ������100�ˣ���ô��������Ƕ���"},
		{"1. We know that the denominator is obtained by dividing the unit into equal parts, and there is no specific number of people here. We set unit one as the total number of people, and the total number of people must be divisible by the denominator in order to do so",
		"1.����֪����ĸ�ǰѵ�λ��ƽ���ֳɶ��ٷݵ����ģ�������û�о�������������ǰѵ�λһ��Ϊ������������������Ҫ�ܱ���ĸ��������"},
		{"2. Because Unit One must be divided by the denominator, and one seventh is preferred, the total number of people must be a multiple of seven",
		"2.��Ϊ��λһ���뱻��ĸ�������߷�֮һ��������������������7�ı���"},
		{"3. Because Unit One must be divided by the denominator, and one quarter is good, the total number of people must be a multiple of 4",
		"3.��Ϊ��λһ���뱻��ĸ�������ķ�֮һ��������������������4�ı���"},
		{"4. Because Unit One must be divided by the denominator, one-third must be in the middle, so the total number of people must be a multiple of 3",
		"4.��Ϊ��λһ���뱻��ĸ����������֮һ��������������������3�ı���"},
		{"5.So the total number of people must meet these conditions: multiples of 7, multiples of 4, multiples of 3, which are common multiples of 7, 4, and 3, and this common multiple must be within 100",
		"5.�������������������⼸��������7�ı�����4�ı�����3�ı���������7��4��3�Ĺ������������������������100����"},
		{"6. First, find the least common multiple: [7,4,3]=84. We see that this number is very close to one hundred. To find another one, we must multiply it by 2. Multiplying by 2 would exceed 100, so the total number of people is 84",
		"6.������С��������[7,4,3]=84�����ǿ���������ǳ��ӽ���һ�٣�Ҫ���ҳ�һ���������2����2�ͳ���100�ˣ�����������Ϊ84"},
		{"7. If you know the number of units one is, then it's easy to find the number of three. One seventh gets good: 84/7=12 people, one fourth gets good: 84/4=21 people, and one third gets right: 84/3=28 people",
		"7.֪���˵�λһ�Ǽ�����ô���������ͺ����ˣ��߷�֮һ���ţ�84/7=12�ˣ��ķ�֮һ������84/4=21�ˣ�����֮һ���У�84/3=28��"},
		{"8. Knowing the number of the three, the next step is to subtract the number of the three from the total number, and the difference is 23 people: 84-21-12-28=23 people",
		"8.���ߵ�����֪���ˣ�������������������ȥ���ߵ����������ǲ��������84-21-12-28=23��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P92 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ�ο��ԣ��μӵ�ѧ�������߷�֮һ���ţ��ķ�֮һ����������֮һ���У������Ϊ���֪ѧ������100�ˣ���ô��������Ƕ���"));
	ColPrintf(PrintfCol::����, Lang("1.����֪����ĸ�ǰѵ�λ��ƽ���ֳɶ��ٷݵ����ģ�������û�о�������������ǰѵ�λһ��Ϊ������������������Ҫ�ܱ���ĸ��������"));
	ColPrintf(PrintfCol::����, Lang("2.��Ϊ��λһ���뱻��ĸ�������߷�֮һ��������������������7�ı���"));
	ColPrintf(PrintfCol::����, Lang("3.��Ϊ��λһ���뱻��ĸ�������ķ�֮һ��������������������4�ı���"));
	ColPrintf(PrintfCol::����, Lang("4.��Ϊ��λһ���뱻��ĸ����������֮һ��������������������3�ı���"));
	ColPrintf(PrintfCol::����, Lang("5.�������������������⼸��������7�ı�����4�ı�����3�ı���������7��4��3�Ĺ������������������������100����"));
	ColPrintf(PrintfCol::����, Lang("6.������С��������[7,4,3]=84�����ǿ���������ǳ��ӽ���һ�٣�Ҫ���ҳ�һ���������2����2�ͳ���100�ˣ�����������Ϊ84"));
	ColPrintf(PrintfCol::����, Lang("7.֪���˵�λһ�Ǽ�����ô���������ͺ����ˣ��߷�֮һ���ţ�84/7=12�ˣ��ķ�֮һ������84/4=21�ˣ�����֮һ���У�84/3=28��"));
	ColPrintf(PrintfCol::����, Lang("8.���ߵ�����֪���ˣ�������������������ȥ���ߵ����������ǲ��������84-21-12-28=23��"));
}
void P92()
{
	P92_1();
	ColPrintf(PrintfCol::����, "");
	P92_2();
	ColPrintf(PrintfCol::����, "");
	P92_3();
	ColPrintf(PrintfCol::����, "");
	P92_4();
	ColPrintf(PrintfCol::����, "");
}
void P92_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P92();
	Lang.SetCurLanguage(LanguageLib::English);
	P92();
	ColPrintf(PrintfCol::����, "");
}