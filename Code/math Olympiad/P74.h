#pragma once
void P74_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P74 Example 1 Score Problem","P74 ��һ ��������"},
		{"Title: Given that School A has 40% of its students, School A has 30% of its students who are female, School B has 42% of its students who are male, and what percentage of its students are female?",
		"��Ŀ����֪��У����Уѧ����40%����УŮ���Ǽ�Уѧ����30%����У��������Уѧ������42%����УŮ������Уѧ���İٷ�֮����?"},
		{"1. Since School A has 40% of the students from School B, we use the number of students from School B as a unit, which is 100, while School A has 40. The total number of students from both schools is 140",
		"1.��Ϊ��У����Уѧ����40%��������������Уѧ����Ϊ��λһ��Ҳ����100�ݣ���У��Ϊ40�ݣ������ܹ���140��"},
		{"2. Female students from school A make up 30% of the total number of students, while female students from school A make up 40% of the total number of students. After selecting 30% from the top 40, the total number of students is 40 * 30%=12. Similarly, male students from school B make up 42% of the total number of students. If male students make up 42% of the total number of students, female students from school B make up 58% of the total number of students",
		"2.��УŮ���Ǽ�Уѧ����30%����Уѧ����%40����40������ѡ��30%������40*30%=12�ݣ�ͬ����У��������100*42%=42�����������42�ݣ���УŮ������100-42=58��"},
		{"After calculating the score, because the unit one is always the number of students from two schools, it is 58+12/140, which is 70/140. When converted into a percentage, it is 50%",
		"3.�����������Ϊ��λһʼ������Уѧ���������Ծ���58+12/140������70/140����Ϊ�ٷ�����50%"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P74 ��һ ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����֪��У����Уѧ����40%����УŮ���Ǽ�Уѧ����30%����У��������Уѧ������42%����УŮ������Уѧ���İٷ�֮����?"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ��У����Уѧ����40%��������������Уѧ����Ϊ��λһ��Ҳ����100�ݣ���У��Ϊ40�ݣ������ܹ���140��"));
	ColPrintf(PrintfCol::����, Lang("2.��УŮ���Ǽ�Уѧ����30%����Уѧ����%40����40������ѡ��30%������40*30%=12�ݣ�ͬ����У��������100*42%=42�����������42�ݣ���УŮ������100-42=58��"));
	ColPrintf(PrintfCol::����, Lang("3.�����������Ϊ��λһʼ������Уѧ���������Ծ���58+12/140������70/140����Ϊ�ٷ�����50%"));
}
void P74_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P74 Example 2 Score Problem","P74 ���� ��������"},
		{"Title: In the first semester of the sixth grade at Guangming Primary School, boys accounted for 55% of the total, but in the next semester, 3 boys transferred and 3 girls came. At this time, girls accounted for 48% of the total. How many girls were there at this time",
		"��Ŀ������Сѧ���꼶��ѧ��������ռ��55%����һѧ������ת����3�ˣ�Ů������3�ˣ���ʱŮ����վ��48%����ʱŮ��������"},
		{"1. Because three boys transferred and three girls came, the proportion of boys should be 1-48%=52%, compared to 55% -52%=3%. Three boys transferred, which is exactly 3%, so the ratio between them is 3:3",
		"1.��Ϊ����ת����3�ˣ�Ů������3�ˣ���ʱ����ռ��Ӧ����1-48%=52%�����֮��55%-52%=3%������ת�������ˣ�������������3%����������֮��ı�����3:3"},
		{"2. The ratio of 3:3 is 1:1, which is equivalent to 1% being 1 person. Therefore, there are 48 * 1=48 girls and 52 * 1=52 boys, making a total of 48+52=100 girls",
		"2.Լ�֣�3:3Լ�������1��1�ı��ʣ����൱��1%����1���ˣ�����Ů����48*1=48�ˣ�����֪����������52*1=52�ˣ�һ����48+52=100��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P74 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������Сѧ���꼶��ѧ��������ռ��55%����һѧ������ת����3�ˣ�Ů������3�ˣ���ʱŮ����վ��48%����ʱŮ��������"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ����ת����3�ˣ�Ů������3�ˣ���ʱ����ռ��Ӧ����1-48%=52%�����֮��55%-52%=3%������ת�������ˣ�������������3%����������֮��ı�����3:3"));
	ColPrintf(PrintfCol::����, Lang("2.Լ�֣�3:3Լ�������1��1�ı��ʣ����൱��1%����1���ˣ�����Ů����48*1=48�ˣ�����֪����������52*1=52�ˣ�һ����48+52=100��"));
}
void P74_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P74 cases of three score problem individuals","P74 ���� ��������"},
		{"Title: The school gate opens at 6:00 in the morning and closes at 6:40 in the evening. In the afternoon, a classmate came to ask for the time, and the teacher told him: 1/3 of the time from the opening of the gate to now, plus 1/4 of the time from now to the closing of the gate, is the current time. What is the current time?",
		"��Ŀ��ѧУ�糿6��00��У�ţ�����6��40��У�ţ�������һ��ͬѧ����ʱ�䣬��ʦ���������ӿ�У�ŵ�ʱ�䵽���ڵ�ʱ���1/3���������ڵ�ʱ�䵽��У�ŵ�ʱ���1/4��������ʱ�䣬������ʲôʱ��?"},
		{"Assuming that the time from 12 o'clock to now is x hours",
		"��12�㵽������xСʱ"},
		{"1. List the formula S1 (6+x) * 1/3+((6+2/3) - x) * 1/4=x",
		"1.�г�ʽ��S1 (6+x)*1/3+((6+2/3)-x)*1/4=x"},
		{"2. Simplify S1 to obtain S2 (6+x)/3+((6+2/3) - x)/4=x",
		"2.����S1�õ�S2 (6+x)/3+((6+2/3)-x)/4=x"},
		{"3. Dividing S2 yields S3 12 * (6+x)/3+12 * ((6+2/3) - x)/4=12x",
		"3.ͨ��S2�õ�S3 12*(6+x)/3+12*((6+2/3)-x)/4=12x"},
		{"4. Simplify S3 to obtain S4 4 * (6+x)+3 * ((6+2/3) - x)=12x",
		"4.����S3�õ�S4 4*(6+x)+3*((6+2/3)-x)=12x"},
		{"5. Simplify S4 to obtain S5 24+4x+(18+2-3x)=12x",
		"5.����S4�õ�S5 24+4x+(18+2-3x)=12x"},
		{"6. Simplify S5 to obtain S6 24+4x+20-3x=12x",
		"6.����S5�õ�S6 24+4x+20-3x=12x"},
		{"7. Merge S6 to obtain S7 44+x=12x",
		"7.�ϲ�S6�õ�S7 44+x=12x"},
		{"8. Simplify S7 to obtain S8 11x=44=>x=4",
		"8.����S7�õ�S8 11x=44=>x=4"},
		{"9.So it's 4:00 pm in the afternoon",
		"9.���Ծ�������4��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P74 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ѧУ�糿6��00��У�ţ�����6��40��У�ţ�������һ��ͬѧ����ʱ�䣬��ʦ���������ӿ�У�ŵ�ʱ�䵽���ڵ�ʱ���1/3���������ڵ�ʱ�䵽��У�ŵ�ʱ���1/4��������ʱ�䣬������ʲôʱ��?"));
	ColPrintf(PrintfCol::����, Lang("��12�㵽������xСʱ"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 (6+x)*1/3+((6+2/3)-x)*1/4=x"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 (6+x)/3+((6+2/3)-x)/4=x"));
	ColPrintf(PrintfCol::����, Lang("3.ͨ��S2�õ�S3 12*(6+x)/3+12*((6+2/3)-x)/4=12x"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 4*(6+x)+3*((6+2/3)-x)=12x"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�õ�S5 24+4x+(18+2-3x)=12x"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ�S6 24+4x+20-3x=12x"));
	ColPrintf(PrintfCol::����, Lang("7.�ϲ�S6�õ�S7 44+x=12x"));
	ColPrintf(PrintfCol::����, Lang("8.����S7�õ�S8 11x=44=>x=4"));
	ColPrintf(PrintfCol::����, Lang("9.���Ծ�������4��"));
}
void P74_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P74 Example Four Score Problem","P74 ���� ��������"},
		{"Title: A monkey picked a pile of peaches. The first day he ate 1/7 of the peaches, the second day he ate the remaining 1/6, the third day he ate the remaining 1/5, the the?fourth?day he ate the remaining 1/4, the fifth day he ate the remaining 1/3, the sixth day he ate the remaining 1/2, and 12 peaches. What was the total number of peaches he ate the first day and the second day?",
		"��Ŀ��һֻ����ժ��һ�����ӣ���һ�����������ӵ�1/7���ڶ���������µ�1/6��������������µ�1/5��������������µ�1/4��������������µ�1/3��������������µ�1/2������12���ң���һ��ڶ�������ӵ������Ƕ���?"},
		
	};
}