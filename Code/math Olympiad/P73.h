#pragma once
void P73_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example 1 Score Problem","P87 ��һ ��������"},
		{"Title: Jingjing finished reading a book in three days. On the first day, she read 1/4 of the entire book. On the second day, she read the remaining 2/5. On the second day, she read 15 more pages than on the first day. How many pages are there in this book?",
		"��Ŀ���������쿴��һ���飬��һ�쿴��ȫ���1/4���ڶ��쿴�����µ�2/5���ڶ���ȵ�һ��࿴15ҳ�飬���鹲�ж���ҳ?"},
		{"1. Calculate the remaining pages N1 of the first day. The remaining pages N1 of the first day=Unit N2- The amount of pages viewed on the first day N3",
		"1.�����һ��ʣ�µ�ҳ��N1 ��һ��ʣ�µ�ҳ��N1=��λһN2-��һ�쿴����N3"},
		{"2. Calculate the remaining pages N2 for the second day. The remaining pages N2 for the second day=the remaining pages N1 for the first day * the amount of views N3 for the second day",
		"2.����ڶ���ʣ�µ�ҳ��N2 �ڶ���ʣ�µ�ҳ��N2=��һ��ʣ�µ�ҳ��N1*�ڶ��쿴����N3"},
		{"3. Calculate the number of pages viewed N2=the remaining pages on the second day N2- the amount viewed on the first day N3",
		"3.����࿴ҳ��N2 �࿴ҳ��N2=�ڶ���ʣ�µ�ҳ��N2-��һ�쿴����N3"},
		{"4. Calculate the total number of pages N3=integer number of pages viewed more N3/number of pages viewed more N2",
		"4.���㹲��ҳ��N3 ����ҳ��N3=�����࿴ҳ��N3/�࿴ҳ��N2"},
		//������
		{"Unit1N2","��λһN2"},
		{"Thefirstday'sviewingvolumeN3","��һ�쿴����N3"},
		{"Thenextday'sviewingvolumeN3","�ڶ��쿴����N3"},
		{"ReadmorepagesN3forintegers","�����࿴ҳ��N3"},
		{"TheremainingpagesofthefirstdayareN1","��һ��ʣ�µ�ҳ��N1"},
		{"TheremainingpagesontheseconddayareN2","�ڶ���ʣ�µ�ҳ��N2"},
		{"ReadmorepagesN2","�࿴ҳ��N2"},
		{"TotalpagesN3","����ҳ��N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(��λһN2, 1,1);
	DefineFractionLangVar(��һ�쿴����N3, 1,4);
	DefineFractionLangVar(�ڶ��쿴����N3, 2,5);
	DefineFractionLangVar(�����࿴ҳ��N3, 15,1);
	ColPrintf(PrintfCol::����, Lang("P87 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������쿴��һ���飬��һ�쿴��ȫ���1/4���ڶ��쿴�����µ�2/5���ڶ���ȵ�һ��࿴15ҳ�飬���鹲�ж���ҳ?"));
	DefineFractionLangVar(��һ��ʣ�µ�ҳ��N1, 1,1);
	ColPrintf(PrintfCol::����, Lang("1.�����һ��ʣ�µ�ҳ��N1 ��һ��ʣ�µ�ҳ��N1=��λһN2-��һ�쿴����N3"));
	��һ��ʣ�µ�ҳ��N1 = ��λһN2 - ��һ�쿴����N3;
	��һ��ʣ�µ�ҳ��N1.PrintProcessLog(1);
	DefineFractionLangVar(�ڶ���ʣ�µ�ҳ��N2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("2.����ڶ���ʣ�µ�ҳ��N2 �ڶ���ʣ�µ�ҳ��N2=��һ��ʣ�µ�ҳ��N1*�ڶ��쿴����N3"));
	�ڶ���ʣ�µ�ҳ��N2 = ��һ��ʣ�µ�ҳ��N1 * �ڶ��쿴����N3;
	�ڶ���ʣ�µ�ҳ��N2.PrintProcessLog(2);
	DefineFractionLangVar(�࿴ҳ��N2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("3.����࿴ҳ��N2 �࿴ҳ��N2=�ڶ���ʣ�µ�ҳ��N2-��һ�쿴����N3"));
	�࿴ҳ��N2 = �ڶ���ʣ�µ�ҳ��N2 - ��һ�쿴����N3;
	�࿴ҳ��N2.PrintProcessLog(3);
	DefineFractionLangVar(����ҳ��N3, 1, 1);
	ColPrintf(PrintfCol::����, Lang("4.���㹲��ҳ��N3 ����ҳ��N3=�����࿴ҳ��N3/�࿴ҳ��N2"));
	����ҳ��N3 = �����࿴ҳ��N3 / �࿴ҳ��N2;
	����ҳ��N3.PrintProcessLog(4);
}
void P73_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Two Score Problem","P87 ���� ��������"},
		{"Title: How many cows have 1/4 more heads than sheep, and how many sheep have less heads than cows?",
		"��Ŀ��ţ��ͷ�������ͷ����1/4�����ͷ����ţ��ͷ���ٶ���?"},
		{"Let the number of sheep be x",
		"�����ͷ��Ϊx,ţ��ͷ����Ϊx+1/4x"},
		{"1. List equation S1 x+1/4x",
		"1.�г�ʽ��S1 x+1/4x"},
		{"2. Simplify S1 to obtain S2 1x+1/4x",
		"2.����S1�õ�S2 1x+1/4x"},
		{"3. Simplify S2 to obtain S3 (1/4+1) x",
		"3.����S2�õ�S3 (1/4+1)x"},
		{"4. Simplify S3 to obtain S4 x+1/4x=5/4x",
		"4.����S3�õ�S4 x+1/4x=5/4x"},
		{"5. Using the number of cows as a unit, one (1/4x)/(5/4x)",
		"5.��ţ������Ϊ��λһ�õ�S5 (1/4x)/(5/4x)"},
		{"6. Simplify S5 to obtain S6 1/4/5/4=1/5",
		"6.����S5�õ�S6 1/4/5/4=1/5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P87 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ţ��ͷ�������ͷ����1/4�����ͷ����ţ��ͷ���ٶ���?"));
	ColPrintf(PrintfCol::����, Lang("�����ͷ��Ϊx,ţ��ͷ����Ϊx+1/4x"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 x+1/4x"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 1x+1/4x"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 (1/4+1)x"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 x+1/4x=5/4x"));
	ColPrintf(PrintfCol::����, Lang("5.��ţ������Ϊ��λһ�õ�S5 (1/4x)/(5/4x)"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ�S6 1/4/5/4=1/5"));
}
void P73_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Three Score Problem (C as Unit One)","P87 ���� ��������(��Ϊ��λһ)"},
		{"Title: A is 2/3 of B, B is 3/4 of C, and the sum of A, B, and C is 216. What are the values of A, B, and C respectively?",
		"��Ŀ��������������2/3�����Ǳ���3/4�����ұ��ĺ���216�����ұ����Ƕ���?"},
		{"1. Calculate the amount of C N1=unit N2",
		"1.���������N1 ������N1=��λһN2"},
		{"2. Calculate the amount of B (N2)=the amount of C (N1) * the ratio of B to C (N2)",
		"2.�����ҵ���N2 �ҵ���N2=������N1*�Ҷ��ڱ�����N2"},
		{"3. Calculate the quantity of A N3=the quantity of B N2 * the multiple of A to B N3",
		"3.����׵���N3 �׵���N3=�ҵ���N2*�׶����ҵı���N3"},
		{"4. Calculate the sum of A, B, and C, N4=the amount of C N1+the amount of B N2+the amount of A N3",
		"4.������ұ��ĺ�N4 ���ұ��ĺ�N4=������N1+�ҵ���N2+�׵���N3"},
		{"5. Calculate the integer C N5. The integer C N5 is equal to the sum of the integers A, B, and C N5/the sum of A, B, and C N4",
		"5.����������N5 ������N5=�������ұ��ĺ�N5/���ұ��ĺ�N4"},
		{"6. Calculate the integer N2=the quantity of B, N2 * the integer C, N5",
		"6.����������N2 ������N2=�ҵ���N2*������N5"},
		{"7. Calculate the integer A N6, where the integer A N6 equals the quantity of A N3 multiplied by the integer C N5",
		"7.����������N6 ������N6=�׵���N3*������N5"},
		//������
		{"Unit1N2","��λһN2"},
		{"BisamultipleofN2comparedtoC","�Ҷ��ڱ�����N2"},
		{"ThemultipleN3ofAtoB","�׶����ҵı���N3"},
		{"ThesumofintegersA,B,C,andN5","�������ұ��ĺ�N5"},
		{"QuantityofCN1","������N1"},
		{"QuantityofBN2","�ҵ���N2"},
		{"TheamountofAN3","�׵���N3"},
		{"A,B,C,andN4","���ұ��ĺ�N4"},
		{"IntegerCN5","������N5"},
		{"IntegerBN2","������N2"},
		{"IntegerN6","������N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(��λһN2, 1, 1);
	DefineFractionLangVar(�Ҷ��ڱ�����N2, 3, 4);
	DefineFractionLangVar(�׶����ҵı���N3, 2, 3);
	DefineFractionLangVar(�������ұ��ĺ�N5, 216, 1);
	ColPrintf(PrintfCol::����, Lang("P87 ���� ��������(��Ϊ��λһ)"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������������2/3�����Ǳ���3/4�����ұ��ĺ���216�����ұ����Ƕ���?"));
	DefineFractionLangVar(������N1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("1.���������N1 ������N1=��λһN2"));
	������N1 = ��λһN2;
	������N1.PrintProcessLog(1);
	DefineFractionLangVar(�ҵ���N2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("2.�����ҵ���N2 �ҵ���N2=������N1*�Ҷ��ڱ�����N2"));
	�ҵ���N2 = ������N1 * �Ҷ��ڱ�����N2;
	�ҵ���N2.PrintProcessLog(2);
	DefineFractionLangVar(�׵���N3, 1, 1);
	ColPrintf(PrintfCol::����, Lang("3.����׵���N3 �׵���N3=�ҵ���N2*�׶����ҵı���N3"));
	�׵���N3 = �ҵ���N2 * �׶����ҵı���N3;
	�׵���N3.PrintProcessLog(3);
	DefineFractionLangVar(���ұ��ĺ�N4, 1, 1);
	ColPrintf(PrintfCol::����, Lang("4.������ұ��ĺ�N4 ���ұ��ĺ�N4=������N1+�ҵ���N2+�׵���N3"));
	���ұ��ĺ�N4 = ������N1 + �ҵ���N2 + �׵���N3;
	���ұ��ĺ�N4.PrintProcessLog(4);
	DefineFractionLangVar(������N5, 1, 1);
	ColPrintf(PrintfCol::����, Lang("5.����������N5 ������N5=�������ұ��ĺ�N5/���ұ��ĺ�N4"));
	������N5 = �������ұ��ĺ�N5 / ���ұ��ĺ�N4;
	������N5.PrintProcessLog(5);
	DefineFractionLangVar(������N2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("6.����������N2 ������N2=�ҵ���N2*������N5"));
	������N2 = �ҵ���N2 * ������N5;
	������N2.PrintProcessLog(6);
	DefineFractionLangVar(������N6, 1, 1);
	ColPrintf(PrintfCol::����, Lang("7.����������N6 ������N6=�׵���N3*������N5"));
	������N6 = �׵���N3 * ������N5;
	������N6.PrintProcessLog(7);
}
void P73_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Four Score Problem","P87 ���� ��������"},
		{"Title: A, B, C, and D donated to the Hope Project. A donated half of the other three people, B donated one-third of the other three people, C donated one fourth of the total number of the other three people, and D donated 91 yuan. How much did A, B, and D each contribute?",
		"��Ŀ�����ұ�����ϣ�����̾��׾����������˵�һ�룬�Ҿ����������˵�1/3����������������������1/4��������91Ԫ������ұ���ռ����Ԫ?"},
		{"1. Thinking from the perspective of A: Let A be x, 1/2 (total number of donations from three people - x)=x=>1/2 total number of donations from three people -1/2x=x=>1/2 total number of donations from three people=3/2x, so the total number of donations from three people is three times larger than A. Dividing Unit 1 into three parts, A is 1/3",
		"1.վ�ڼ׵ĽǶ�˼�������Ϊx��1/2(���˾������-x)=x=>1/2���˾������-1/2x=x=>1/2���˾������=3/2x,�������˾�������ȼ״�3�����ѵ�λ1��Ϊ3�ݣ��׾���1/3"},
		{"2. Thinking from the perspective of B: Let B be x, 1/3 (the total number of donations from three people - x)=x=>1/3, the total number of donations from three people -1/3x=x=>1/3, the total number of donations from three people=4/3x, so the total number of donations from three people is four times larger than A. Dividing Unit 1 into four parts, A is 1/4",
		"2.վ���ҵĽǶ�˼��������Ϊx��1/3(���˾������-x)=x=>1/3���˾������-1/3x=x=>1/3���˾������=4/3x,�������˾���������Ҵ�4�����ѵ�λ1��Ϊ4�ݣ��Ҿ���1/4"},
		{"3. Thinking from the perspective of C: Let C be x, 1/4 (total number of donations from three people - x)=x=>1/4 total number of donations from three people -1/4x=x=>1/4 total number of donations from three people=5/4x, so the total number of donations from three people is 5 times larger than C. Dividing Unit 1 into 5 parts, C is 1/5",
		"3.վ�ڱ��ĽǶ�˼�������Ϊx��1/4(���˾������-x)=x=>1/4���˾������-1/4x=x=>1/4���˾������=5/4x,�������˾�������ȱ���5�����ѵ�λ1��Ϊ5�ݣ�������1/5"},
		{"4. Calculate the total amount of money N1=unit one N2- (the amount of A N3+the amount of B N4+the amount of C N5)",
		"4.�����ܹ�Ǯ��N1 �ܹ�Ǯ��N1=��λһN2-(�׵���N3+�ҵ���N4+������N5)"},
		{"5. Calculate the total amount of money for integers N2=the amount of money donated by C N6/the total amount of money N1",
		"5.���������ܹ�Ǯ��N2 �����ܹ�Ǯ��N2=�����ǮN6/�ܹ�Ǯ��N1"},
		{"6. Calculate the integer N3. The integer N3 is equal to the total amount of money N2 multiplied by the quantity N3 of A",
		"6.����������N3 ������N3=�����ܹ�Ǯ��N2*�׵���N3"},
		{"7. Calculate the integer N4. The integer N4 is equal to the total amount of money N2 multiplied by the quantity N4 of B",
		"7.����������N4 ������N4=�����ܹ�Ǯ��N2*�ҵ���N4"},
		{"8. Calculate the integer C N5. The integer C N5=the total number of integers N2 * the amount of C N5",
		"8.����������N5 ������N5=�����ܹ�Ǯ��N2*������N5"},
		//������
		{"Unit1N2","��λһN2"},
		{"QuantityofBN4","�ҵ���N4"},
		{"TheamountofCisN5","������N5"},
		{"ThemoneydonatedbyCN6","�����ǮN6"},
		{"TheamountofAN3","�׵���N3"},
		{"TotalamountN1","�ܹ�Ǯ��N1"},
		{"IntegertotalamountN2","�����ܹ�Ǯ��N2"},
		{"IntegerAN3","������N3"},
		{"IntegerN4","������N4"},
		{"IntegerCN5","������N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineFractionLangVar(��λһN2, 1, 1);
	DefineFractionLangVar(�ҵ���N4, 1, 4);
	DefineFractionLangVar(������N5, 1, 5);
	DefineFractionLangVar(�����ǮN6, 91, 1);
	DefineFractionLangVar(�׵���N3, 1, 3);
	ColPrintf(PrintfCol::����, Lang("P87 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ұ�����ϣ�����̾��׾����������˵�һ�룬�Ҿ����������˵�1/3����������������������1/4��������91Ԫ������ұ���ռ����Ԫ?"));
	ColPrintf(PrintfCol::����, Lang("1.վ�ڼ׵ĽǶ�˼�������Ϊx��1/2(���˾������-x)=x=>1/2���˾������-1/2x=x=>1/2���˾������=3/2x,�������˾�������ȼ״�3�����ѵ�λ1��Ϊ3�ݣ��׾���1/3"));
	ColPrintf(PrintfCol::����, Lang("2.վ���ҵĽǶ�˼��������Ϊx��1/3(���˾������-x)=x=>1/3���˾������-1/3x=x=>1/3���˾������=4/3x,�������˾���������Ҵ�4�����ѵ�λ1��Ϊ4�ݣ��Ҿ���1/4"));
	ColPrintf(PrintfCol::����, Lang("3.վ�ڱ��ĽǶ�˼�������Ϊx��1/4(���˾������-x)=x=>1/4���˾������-1/4x=x=>1/4���˾������=5/4x,�������˾�������ȱ���5�����ѵ�λ1��Ϊ5�ݣ�������1/5"));
	DefineFractionLangVar(�ܹ�Ǯ��N1, 1, 1);
	ColPrintf(PrintfCol::����, Lang("4.�����ܹ�Ǯ��N1 �ܹ�Ǯ��N1=��λһN2-(�׵���N3+�ҵ���N4+������N5)"));
	�ܹ�Ǯ��N1 = ��λһN2 - (�׵���N3 + �ҵ���N4 + ������N5);
	�ܹ�Ǯ��N1.PrintProcessLog(4);
	DefineFractionLangVar(�����ܹ�Ǯ��N2, 1, 1);
	ColPrintf(PrintfCol::����, Lang("5.���������ܹ�Ǯ��N2 �����ܹ�Ǯ��N2=�����ǮN6/�ܹ�Ǯ��N1"));
	�����ܹ�Ǯ��N2 = �����ǮN6 / �ܹ�Ǯ��N1;
	�����ܹ�Ǯ��N2.PrintProcessLog(5);
	DefineFractionLangVar(������N3, 1, 1);
	ColPrintf(PrintfCol::����, Lang("6.����������N3 ������N3=�����ܹ�Ǯ��N2*�׵���N3"));
	������N3 = �����ܹ�Ǯ��N2 * �׵���N3;
	������N3.PrintProcessLog(6);
	DefineFractionLangVar(������N4, 1, 1);
	ColPrintf(PrintfCol::����, Lang("7.����������N4 ������N4=�����ܹ�Ǯ��N2*�ҵ���N4"));
	������N4 = �����ܹ�Ǯ��N2 * �ҵ���N4;
	������N4.PrintProcessLog(7);
	DefineFractionLangVar(������N5, 1, 1);
	ColPrintf(PrintfCol::����, Lang("8.����������N5 ������N5=�����ܹ�Ǯ��N2*������N5"));
	������N5 = �����ܹ�Ǯ��N2 * ������N5;
	������N5.PrintProcessLog(8);
}
void P73_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P87 Example Five Score Problem","P87 ���� ��������"},
		{"Question: Originally, Team B was 3/7 of Team A. Now that 30 people have been sent to Team B, the number of people in Team B is 2/3 of Team A. So, how many people did the two teams have in total?",
		"��Ŀ����ԭ���Ǽ׶ӵ�3/7�������ɳ�30�˵��Ҷӣ����Ҷӵ������Ǽ׶ӵ�2/3����ôԭ�����ӹ��Ƕ�����?"},
		{"1. Because the first condition considers Team A as Unit 1, dividing Team A into seven parts, Team B accounts for three parts, Team A is Unit 1, so it accounts for seven parts, and Team B is the denominator of Team A's Unit 1, so the parts between them can be added up",
		"1.��Ϊ��һ�������Ѽ׶ӿ�Ϊ��λһ���Ѽ׶ӷ�Ϊ�߷ݣ��Ҷ�ռ���ݣ��׶��ǵ�λһ������ռ7�ݣ��Ҷ����ɼ׶ӵĵ�λһ��Ϊ��ĸ�ģ���������֮��ķ����ǿ������"},
		{"2. So the two teams account for 10/7, and the next condition is given to the B team with 30 people. The total number of people here should still be 10/7, so the next condition is about 2/3, a total of 5 points. We multiply 2 to become 10 points, and at the same time, the B team becomes 4/6",
		"2.��������ռ10/7����һ�����������Ҷ�30�ˣ�������Ӧ����������10/7����ô������һ������Լ���ˣ�ԼΪ2/3��һ��5�ݣ����ǳ�2���10�ݣ�ͬʱ������Ҷӱ��4/6"},
		{"3. Comparing 4/6 and 3/7, it can be seen that Team B has increased by 1 point, while Team A has decreased by 1 point to 6, which is exactly in line. Therefore, 1 point is 30, and 10 points is 300, so there were originally 300 people",
		"3.���ǶԱ�4/6��3/7���ɼ��Ҷ�������1�ݣ��׶Ӽ�����һ�ݱ��6�����÷��ϣ�����һ�ݾ���30��10�ݾ���300������ԭ����300��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P87 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ԭ���Ǽ׶ӵ�3/7�������ɳ�30�˵��Ҷӣ����Ҷӵ������Ǽ׶ӵ�2/3����ôԭ�����ӹ��Ƕ�����?"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ��һ�������Ѽ׶ӿ�Ϊ��λһ���Ѽ׶ӷ�Ϊ�߷ݣ��Ҷ�ռ���ݣ��׶��ǵ�λһ������ռ7�ݣ��Ҷ����ɼ׶ӵĵ�λһ��Ϊ��ĸ�ģ���������֮��ķ����ǿ������"));
	ColPrintf(PrintfCol::����, Lang("2.��������ռ10/7����һ�����������Ҷ�30�ˣ�������Ӧ����������10/7����ô������һ������Լ���ˣ�ԼΪ2/3��һ��5�ݣ����ǳ�2���10�ݣ�ͬʱ������Ҷӱ��4/6"));
	ColPrintf(PrintfCol::����, Lang("3.���ǶԱ�4/6��3/7���ɼ��Ҷ�������1�ݣ��׶Ӽ�����һ�ݱ��6�����÷��ϣ�����һ�ݾ���30��10�ݾ���300������ԭ����300��"));
}
void P73()
{
	P73_1();
	ColPrintf(PrintfCol::����, "");
	P73_2();
	ColPrintf(PrintfCol::����, "");
	P73_3();
	ColPrintf(PrintfCol::����, "");
	P73_4();
	ColPrintf(PrintfCol::����, "");
	P73_5();
	ColPrintf(PrintfCol::����, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::����, "");
	P55_3();
	ColPrintf(PrintfCol::����, "");*/
}
void P73_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P73();
	Lang.SetCurLanguage(LanguageLib::English);
	P73();
	ColPrintf(PrintfCol::����, "");

}