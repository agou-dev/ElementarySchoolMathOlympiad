#pragma once
void P86_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 Case 1 Profit and Loss Issue","P86 ��һ ӯ������"},
		{"Question: How many people and how many exercise books will Xiaoming distribute? Each person will receive 3 books, 4 books less, and 2 books more than 40 books?",
		"��Ŀ��С������ϰ�ᣬÿ�˷�3������4����ÿ�˷�2����40����һ���ж��ٸ��ˣ����ٱ���ϰ��?"},
		{"1. Calculate the difference between the profit and loss of publishing a book N1. The difference between the profit and loss of publishing a book N1=the number of books N2+the number of books N4",
		"1.���㷢����ӯ��֮��N1 ������ӯ��֮��N1=�ٵı���N2+��ı���N4"},
		{"2. Calculate the difference between the books distributed by each person N2=three books distributed by each person N5- two books distributed by each person N6",
		"2.����ÿ�˷��ı���֮��N2 ÿ�˷��ı���֮��N2=ÿ�˷�����N5-ÿ�˷�����N6"},
		{"3. Calculate the total number of people N7=the difference between the profit and loss of publishing the book N1/the difference between the books published per person N2",
		"3.����һ��������N7 һ��������N7=������ӯ��֮��N1/ÿ�˷��ı���֮��N2"},
		{"4. Calculate the number of exercise books N8. The number of exercise books N8=(total number of people N7 * three books per person N5) - the few books N2",
		"4.������ϰ������N8 ��ϰ������N8=(һ��������N7*ÿ�˷�����N5)-�ٵı���N2"},
		//������
		{"TheFewBooksN2","�ٵı���N2"},
		{"ManyBooksN4","��ı���N4"},
		{"EachPersonWillReceiveThreeN5Books","ÿ�˷�����N5"},
		{"EachPersonEillReceiveTwoN6Books","ÿ�˷�����N6"},
		{"ProfitAndLossDifferenceN1ForPublishingThisBook","������ӯ��֮��N1"},
		{"TheDifferenceInBooksDistributedByEachPersonN2","ÿ�˷��ı���֮��N2"},
		{"ThetotalnumberofpeopleisN7","һ��������N7"},
		{"NumberofexercisebooksN8","��ϰ������N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ٵı���N2, 4);
	DefineLangVarInt(��ı���N4, 40);
	DefineLangVarInt(ÿ�˷�����N5, 3);
	DefineLangVarInt(ÿ�˷�����N6, 2);
	ColPrintf(PrintfCol::����, Lang("P86 ��һ ӯ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��С������ϰ�ᣬÿ�˷�3������4����ÿ�˷�2����40����һ���ж��ٸ��ˣ����ٱ���ϰ��?"));
	DefineLangVarInt(������ӯ��֮��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㷢����ӯ��֮��N1 ������ӯ��֮��N1=�ٵı���N2+��ı���N4"));
	������ӯ��֮��N1 = �ٵı���N2 + ��ı���N4;
	������ӯ��֮��N1.PrintProcessLog(1);
	DefineLangVarInt(ÿ�˷��ı���֮��N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿ�˷��ı���֮��N2 ÿ�˷��ı���֮��N2=ÿ�˷�����N5-ÿ�˷�����N6"));
	ÿ�˷��ı���֮��N2 = ÿ�˷�����N5 - ÿ�˷�����N6;
	ÿ�˷��ı���֮��N2.PrintProcessLog(2);
	DefineLangVarInt(һ��������N7, 0);
	ColPrintf(PrintfCol::����, Lang("3.����һ��������N7 һ��������N7=������ӯ��֮��N1/ÿ�˷��ı���֮��N2"));
	һ��������N7 = ������ӯ��֮��N1 / ÿ�˷��ı���֮��N2;
	һ��������N7.PrintProcessLog(3);
	DefineLangVarInt(��ϰ������N8, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ϰ������N8 ��ϰ������N8=(һ��������N7*ÿ�˷�����N5)-�ٵı���N2"));
	��ϰ������N8 = (һ��������N7 * ÿ�˷�����N5) - �ٵı���N2;
	��ϰ������N8.PrintProcessLog(4);
}
void P86_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 case two two two loss problem","P86 ���� ��������"},
		{"Title: How many students are there in the class and how many exercise books are there? If each person has six books, there will be a shortage of 94 books. If each person has four books, there will be a shortage of 2 books",
		"��Ŀ����ʦ����ϰ�������ÿ����������94�������ÿ��4������2���������ж��ٸ�ѧ�������ٸ���ϰ��"},
		{"1. Calculate the difference between the profit and loss of publishing a book N1. The difference between the profit and loss of publishing a book N1=the book with six fewer books N2- the book with four fewer books N4",
		"1.���㷢����ӯ��֮��N1 ������ӯ��֮��N1=�����ٵı���N2-�ı��ٵı���N4"},
		{"2. Calculate the difference between the books distributed by each person N2=six books distributed by each person N5- four books distributed by each person N6",
		"2.����ÿ�˷��ı���֮��N2 ÿ�˷��ı���֮��N2=ÿ�˷�����N5-ÿ�˷��ı�N6"},
		{"3. Calculate the total number of people N7=the difference between the profit and loss of publishing the book N1/the difference between the books published per person N2",
		"3.����һ��������N7 һ��������N7=������ӯ��֮��N1/ÿ�˷��ı���֮��N2"},
		{"4. Calculate the number of exercise books N8=(total number of people N7 * four books per person N6) - the book with four fewer books N4",
		"4.������ϰ������N8 ��ϰ������N8=(һ��������N7*ÿ�˷��ı�N6)-�ı��ٵı���N4"},
		//������
		{"SixFewBooksN2","�����ٵı���N2"},
		{"FourFewBooksN4","�ı��ٵı���N4"},
		{"EachpersonwillreceivesixN5books","ÿ�˷�����N5"},
		{"EachpersonwillreceivefourN6books","ÿ�˷��ı�N6"},
		{"ProfitandlossdifferenceN1forpublishingthisbook","������ӯ��֮��N1"},
		{"ThedifferenceinbooksdistributedbyeachpersonN2","ÿ�˷��ı���֮��N2"},
		{"ThetotalnumberofpeopleisN7","һ��������N7"},
		{"NumberofexercisebooksN8","��ϰ������N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�����ٵı���N2, 94);
	DefineLangVarInt(�ı��ٵı���N4, 2);
	DefineLangVarInt(ÿ�˷�����N5, 6);
	DefineLangVarInt(ÿ�˷��ı�N6, 4);
	ColPrintf(PrintfCol::����, Lang("P86 ���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ʦ����ϰ�������ÿ����������94�������ÿ��4������2���������ж��ٸ�ѧ�������ٸ���ϰ��"));
	DefineLangVarInt(������ӯ��֮��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㷢����ӯ��֮��N1 ������ӯ��֮��N1=�����ٵı���N2-�ı��ٵı���N4"));
	������ӯ��֮��N1 = �����ٵı���N2 - �ı��ٵı���N4;
	������ӯ��֮��N1.PrintProcessLog(1);
	DefineLangVarInt(ÿ�˷��ı���֮��N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿ�˷��ı���֮��N2 ÿ�˷��ı���֮��N2=ÿ�˷�����N5-ÿ�˷��ı�N6"));
	ÿ�˷��ı���֮��N2 = ÿ�˷�����N5 - ÿ�˷��ı�N6;
	ÿ�˷��ı���֮��N2.PrintProcessLog(2);
	DefineLangVarInt(һ��������N7, 0);
	ColPrintf(PrintfCol::����, Lang("3.����һ��������N7 һ��������N7=������ӯ��֮��N1/ÿ�˷��ı���֮��N2"));
	һ��������N7 = ������ӯ��֮��N1 / ÿ�˷��ı���֮��N2;
	һ��������N7.PrintProcessLog(3);
	DefineLangVarInt(��ϰ������N8, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ϰ������N8 ��ϰ������N8=(һ��������N7*ÿ�˷��ı�N6)-�ı��ٵı���N4"));
	��ϰ������N8 = (һ��������N7 * ÿ�˷��ı�N6) - �ı��ٵı���N4;
	��ϰ������N8.PrintProcessLog(4);
}
void P86_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 case of three two surplus problem","P86 ���� ��ӯ����"},
		{"Title: How many people are there and how many colored pens are there if each person sends 5 and 12 more, and if each person sends 8 and 3 more?",
		"��Ŀ�����ʱʣ����ÿ�˷�5ֻ��12֧�����ÿ�˷�8֧���3֧��һ���м����ˣ�һ���м�֧�ʱ�?"},
		{"1. Calculate the difference between the profit and loss of the pens N1=the difference between the profit and loss of more than five pens N2- the difference between the profit and loss of more than eight pens N4",
		"1.���㷢֧��ӯ��֮��N1 ��֧��ӯ��֮��N1=��֧���֧��N2-��֧���֧��N4"},
		{"2. Calculate the difference in pens distributed by each person N2=8 pens distributed by each person N6-5 pens distributed by each person N5",
		"2.����ÿ�˷���֧��֮��N2 ÿ�˷���֧��֮��N2=ÿ�˷���֧N6-ÿ�˷���֧N5"},
		{"3. Calculate the total number of people N7=the difference between the profit and loss of pens distributed N1/the difference between pens distributed per person N2",
		"3.����һ��������N7 һ��������N7=��֧��ӯ��֮��N1/ÿ�˷���֧��֮��N2"},
		{"4. Calculate the number of exercise books N8=(total number of people N7 * pens over eight N4) - Each person will receive eight N6 pens",
		"4.������ϰ������N8 ��ϰ������N8=(һ��������N7*��֧���֧��N4)-ÿ�˷���֧N6"},
		//������
		{"MorethanfivepensN2","��֧���֧��N2"},
		{"MorethaneightpensN4","��֧���֧��N4"},
		{"EachpersonwillreceiveeightN6tubes","ÿ�˷���֧N6"},
		{"EachpersonwillreceivefiveN5s","ÿ�˷���֧N5"},
		{"DifferencebetweenprofitandlossofpenN1","��֧��ӯ��֮��N1"},
		{"ThedifferenceinpensdistributedbyeachpersonN2","ÿ�˷���֧��֮��N2"},
		{"ThetotalnumberofpeopleisN7","һ��������N7"},
		{"NumberofexercisebooksN8","��ϰ������N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��֧���֧��N2, 12);
	DefineLangVarInt(��֧���֧��N4, 3);
	DefineLangVarInt(ÿ�˷���֧N6, 8);
	DefineLangVarInt(ÿ�˷���֧N5, 5);
	ColPrintf(PrintfCol::����, Lang("P86 ���� ��ӯ����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ʱʣ����ÿ�˷�5ֻ��12֧�����ÿ�˷�8֧���3֧��һ���м����ˣ�һ���м�֧�ʱ�?"));
	DefineLangVarInt(��֧��ӯ��֮��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㷢֧��ӯ��֮��N1 ��֧��ӯ��֮��N1=��֧���֧��N2-��֧���֧��N4"));
	��֧��ӯ��֮��N1 = ��֧���֧��N2 - ��֧���֧��N4;
	��֧��ӯ��֮��N1.PrintProcessLog(1);
	DefineLangVarInt(ÿ�˷���֧��֮��N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿ�˷���֧��֮��N2 ÿ�˷���֧��֮��N2=ÿ�˷���֧N6-ÿ�˷���֧N5"));
	ÿ�˷���֧��֮��N2 = ÿ�˷���֧N6 - ÿ�˷���֧N5;
	ÿ�˷���֧��֮��N2.PrintProcessLog(2);
	DefineLangVarInt(һ��������N7, 0);
	ColPrintf(PrintfCol::����, Lang("3.����һ��������N7 һ��������N7=��֧��ӯ��֮��N1/ÿ�˷���֧��֮��N2"));
	һ��������N7 = ��֧��ӯ��֮��N1 / ÿ�˷���֧��֮��N2;
	һ��������N7.PrintProcessLog(3);
	DefineLangVarInt(��ϰ������N8, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ϰ������N8 ��ϰ������N8=(һ��������N7*��֧���֧��N4)-ÿ�˷���֧N6"));
	��ϰ������N8 = (һ��������N7 * ��֧���֧��N4) - ÿ�˷���֧N6;
	��ϰ������N8.PrintProcessLog(4);
}
void P86_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 Case Four Profit and Loss Issues","P86 ���� ӯ������"},
		{"Title: A classmate goes on a spring outing, and if there are 60 people in each car, 15 people will not board; If there are 65 people and an extra car, how many students are there in total?",
		"��Ŀ��ͬѧȥ���Σ����ÿ����60�ˣ���15��û�ϳ�������65�ˣ����һ������һ���ж���ѧ��?"},
		{"1. Calculate the difference between the profits and losses of the ride N1=65 people per ride N3- number of people who did not board N2",
		"1.��������ӯ��֮��N1 ����ӯ��֮��N1=ÿ����65��N3-û�ϳ�����N2"},
		{"2. Calculate the difference between vehicles N2=65 people per vehicle N3-60 people per vehicle N3",
		"2.��������֮��N2 ����֮��N2=ÿ����65��N3-ÿ����60��N3"},
		{"3. Calculate the total number of people N7. The total number of people N7 is equal to the difference in profits and losses of the ride N1 divided by the difference in ride N2",
		"3.����һ��������N7 һ��������N7 = (һ��������N7 * ÿ����65��N3) - ÿ����65��N3"},
		{"4. Calculate the number of vehicles N8=(total number of people N7 * 65 people per vehicle N3) -65 people per vehicle N3",
		"4.���㳵����N8 ������N8 = ����ӯ��֮��N1 / ����֮��N2"},
		//������
		{"65peoplepervehicleN3","ÿ����65��N3"},
		{"65peoplepervehicleN3","ÿ����65��N3"},
		{"NumberofpeoplewithoutboardingN2","û�ϳ�����N2"},
		{"60peoplepervehicleN3","ÿ����60��N3"},
		{"ProfitandlossdifferenceofrideN1","����ӯ��֮��N1"},
		{"DifferencebycarN2","����֮��N2"},
		{"ThetotalnumberofpeopleisN7","һ��������N7"},
		{"NumberofcarsN8","������N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ÿ����65��N3, 65);
	DefineLangVarInt(ÿ����60��N3, 60);
	DefineLangVarInt(û�ϳ�����N2, 15);

	ColPrintf(PrintfCol::����, Lang("P86 ���� ӯ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ͬѧȥ���Σ����ÿ����60�ˣ���15��û�ϳ�������65�ˣ����һ������һ���ж���ѧ��?"));
	DefineLangVarInt(����ӯ��֮��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������ӯ��֮��N1 ����ӯ��֮��N1=ÿ����65��N3-û�ϳ�����N2"));
	����ӯ��֮��N1 = ÿ����65��N3 - û�ϳ�����N2;
	����ӯ��֮��N1.PrintProcessLog(1);
	DefineLangVarInt(����֮��N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������֮��N2 ����֮��N2=ÿ����65��N3-ÿ����60��N3"));
	����֮��N2 = ÿ����65��N3 - ÿ����60��N3;
	����֮��N2.PrintProcessLog(2);
	DefineLangVarInt(һ��������N7, 0);
	ColPrintf(PrintfCol::����, Lang("3.����һ��������N7 һ��������N7 = (һ��������N7 * ÿ����65��N3) - ÿ����65��N3"));
	һ��������N7 = (һ��������N7 * ÿ����65��N3) - ÿ����65��N3;
	һ��������N7.PrintProcessLog(3);
	DefineLangVarInt(������N8, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㳵����N8 ������N8 = ����ӯ��֮��N1 / ����֮��N2"));
	������N8 = ����ӯ��֮��N1 / ����֮��N2;
	������N8.PrintProcessLog(4);
}
void P86_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 case of the five two surplus problem","P86 ���� ��ӯ����"},
		{"Title: According to school regulations, students arrive at school at 8am and Xiaofeng goes to school at a speed of 60 meters per minute. They arrive 10 minutes early at a speed of 50 meters per minute and arrive 8 minutes early. How far is the school and when did they leave home?",
		"��Ŀ��ѧУ�涨����8�㵽У��С��ȥ��ѧ��ÿ����60�ף���ǰ10���ӵ�У��ÿ����50�ף���ǰ8���ӵ�У����ѧУ��Զ��ʲôʱ���뿪�ҵ�?"},
		{"1. Calculate the number of meters walked 10 minutes ahead of schedule N1=10 minutes ahead of schedule N1 * 60 meters per minute V1",
		"1.������ǰ10���Ӷ�������N1 ��ǰ10���Ӷ�������N1=��ǰ10����N1*ÿ����60��V1"},
		{"2. Calculate the number of meters walked 8 minutes in advance N1=8 minutes in advance N2 * 50 meters per minute V2",
		"2.������ǰ8���Ӷ�������N1 ��ǰ8���Ӷ�������N1=��ǰ8����N2*ÿ����50��V2"},
		{"3. Calculate the early departure time T1. The early departure time T1 is calculated as follows: (extra distance traveled 10 minutes in advance N1- extra distance traveled 8 minutes in advance N1)/(60 meters per minute V1-50 meters per minute V2)",
		"3.������ǰ���ʱ��T1 ��ǰ���ʱ��T1=(��ǰ10���Ӷ�������N1-��ǰ8���Ӷ�������N1)/(ÿ����60��V1-ÿ����50��V2)"},
		{"4. Calculate the distance from the school S1=(early departure time T1-10 minutes early N1) * 60 meters per minute V1",
		"4.������ѧУ�ľ���S1 ��ѧУ�ľ���S1=(��ǰ���ʱ��T1-��ǰ10����N1)*ÿ����60��V1"},
		//������
		{"10minutesinadvanceN1","��ǰ10����N1"},
		{"60metersperminuteV1","ÿ����60��V1"},
		{"8minutesinadvanceN2","��ǰ8����N2"},
		{"50metersperminuteV2","ÿ����50��V2"},
		{"Walkmorethan10minutesinadvanceforN1meters","��ǰ10���Ӷ�������N1"},
		{"Walkmorethan8minutesinadvanceforN1meters","��ǰ8���Ӷ�������N1"},
		{"EarlydeparturetimeT1","��ǰ���ʱ��T1"},
		{"DistancefromschoolS1","��ѧУ�ľ���S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ǰ10����N1, 10);
	DefineLangVarInt(ÿ����60��V1, 60);
	DefineLangVarInt(��ǰ8����N2, 8);
	DefineLangVarInt(ÿ����50��V2, 50);
	ColPrintf(PrintfCol::����, Lang("P86 ���� ��ӯ����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ѧУ�涨����8�㵽У��С��ȥ��ѧ��ÿ����60�ף���ǰ10���ӵ�У��ÿ����50�ף���ǰ8���ӵ�У����ѧУ��Զ��ʲôʱ���뿪�ҵ�?"));
	DefineLangVarInt(��ǰ10���Ӷ�������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ǰ10���Ӷ�������N1 ��ǰ10���Ӷ�������N1=��ǰ10����N1*ÿ����60��V1"));
	��ǰ10���Ӷ�������N1 = ��ǰ10����N1 * ÿ����60��V1;
	��ǰ10���Ӷ�������N1.PrintProcessLog(1);
	DefineLangVarInt(��ǰ8���Ӷ�������N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ǰ8���Ӷ�������N1 ��ǰ8���Ӷ�������N1=��ǰ8����N2*ÿ����50��V2"));
	��ǰ8���Ӷ�������N1 = ��ǰ8����N2 * ÿ����50��V2;
	��ǰ8���Ӷ�������N1.PrintProcessLog(2);
	DefineLangVarInt(��ǰ���ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("3.������ǰ���ʱ��T1 ��ǰ���ʱ��T1=(��ǰ10���Ӷ�������N1-��ǰ8���Ӷ�������N1)/(ÿ����60��V1-ÿ����50��V2)"));
	��ǰ���ʱ��T1 = (��ǰ10���Ӷ�������N1 - ��ǰ8���Ӷ�������N1) / (ÿ����60��V1 - ÿ����50��V2);
	��ǰ���ʱ��T1.PrintProcessLog(3);
	DefineLangVarInt(��ѧУ�ľ���S1, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ѧУ�ľ���S1 ��ѧУ�ľ���S1=(��ǰ���ʱ��T1-��ǰ10����N1)*ÿ����60��V1"));
	��ѧУ�ľ���S1 = (��ǰ���ʱ��T1 - ��ǰ10����N1) * ÿ����60��V1;
	��ѧУ�ľ���S1.PrintProcessLog(4);
}
void P86_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 case six profit and loss issue","P86 ���� ӯ������"},
		{"Title: Fangfang buys oranges for her family to eat. If two people eat 4 oranges and the rest eat 2 oranges, there will be an additional 4 oranges. If one person eats 6 oranges and the rest eat 4 oranges, there will be a shortage of 12 oranges. How many oranges did Fangfang buy and how many people are there?",
		"��Ŀ�����������Ӹ����˳ԣ�����������˳�4��������ÿ�˳�2�������4�������һ�˳�6���������˳�4��������12�����������˶��ٸ����ӣ��ж��ٸ���?"},
		{"1. Calculate the excess quantity N1 for each person to eat 2, which is equal to the excess quantity N2 plus the remaining 2, which is equal to N3",
		"1.����ÿ�˳�2���������N1 ÿ�˳�2���������N1=�������N2+����ÿ�˳�2��N3"},
		{"2. Calculate the excess quantity N2 for each person eating 4. The excess quantity N2 for each person eating 4 is equal to the excess quantity N3 minus (the excess quantity N3 divided by each person eating 6)",
		"2.����ÿ�˳�4���������N2 ÿ�˳�4���������N2=�ٵ�����N3-(�ٵ�����N3/ÿ�˳�6��)"},
		{"3. Calculate the total number of people N3=(each person eats 2 extra pieces N1+each person eats 4 extra pieces N2)/(the rest of each person eats 4 pieces N3- the rest of each person eats 2 pieces N3)",
		"3.����һ��������N3 һ��������N3=(ÿ�˳�2���������N1+ÿ�˳�4���������N2)/(����ÿ�˳�4��N3-����ÿ�˳�2��N3)"},
		{"4. Calculate how many oranges were bought N4=total number of people N3 * each other eating 2 N3+each person eating 2+extra quantity N1",
		"4.�������˶�������N4 ���˶�������N4=һ��������N3*����ÿ�˳�2��N3+ÿ�˳�2���������N1"},
		//������
		{"ExcessquantityN2","�������N2"},
		{"Everyoneelsewilleat2N3","����ÿ�˳�2��N3"},
		{"LessquantityN3","�ٵ�����N3"},
		{"Eachpersoneats6","ÿ�˳�6��"},
		{"Everyoneelsewilleat4N3","����ÿ�˳�4��N3"},
		{"Eachpersoneats2morethanthequantityN1","ÿ�˳�2���������N1"},
		{"Eachpersoneats4morethanthequantityN2","ÿ�˳�4���������N2"},
		{"ThetotalnumberofpeopleN3","һ��������N3"},
		{"HowmanyorangesdidyoubuyN4","���˶�������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�������N2, 4);
	DefineLangVarInt(����ÿ�˳�2��N3, 2);
	DefineLangVarInt(�ٵ�����N3, 12);
	DefineLangVarInt(ÿ�˳�6��, 6);
	DefineLangVarInt(����ÿ�˳�4��N3, 4);
	ColPrintf(PrintfCol::����, Lang("P86 ���� ӯ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����������Ӹ����˳ԣ�����������˳�4��������ÿ�˳�2�������4�������һ�˳�6���������˳�4��������12�����������˶��ٸ����ӣ��ж��ٸ���?"));
	DefineLangVarInt(ÿ�˳�2���������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ÿ�˳�2���������N1 ÿ�˳�2���������N1=�������N2+����ÿ�˳�2��N3"));
	ÿ�˳�2���������N1 = �������N2 + ����ÿ�˳�2��N3;
	ÿ�˳�2���������N1.PrintProcessLog(1);
	DefineLangVarInt(ÿ�˳�4���������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿ�˳�4���������N2 ÿ�˳�4���������N2=�ٵ�����N3-(�ٵ�����N3/ÿ�˳�6��)"));
	ÿ�˳�4���������N2 = �ٵ�����N3 - (�ٵ�����N3 / ÿ�˳�6��);
	ÿ�˳�4���������N2.PrintProcessLog(2);
	DefineLangVarInt(һ��������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����һ��������N3 һ��������N3=(ÿ�˳�2���������N1+ÿ�˳�4���������N2)/(����ÿ�˳�4��N3-����ÿ�˳�2��N3)"));
	һ��������N3 = (ÿ�˳�2���������N1 + ÿ�˳�4���������N2) / (����ÿ�˳�4��N3 - ����ÿ�˳�2��N3);
	һ��������N3.PrintProcessLog(3);
	DefineLangVarInt(���˶�������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.�������˶�������N4 ���˶�������N4=һ��������N3*����ÿ�˳�2��N3+ÿ�˳�2���������N1"));
	���˶�������N4 = һ��������N3 * ����ÿ�˳�2��N3 + ÿ�˳�2���������N1;
	���˶�������N4.PrintProcessLog(4);
}
void P86()
{
	//P70_formula();
	ColPrintf(PrintfCol::����, "");
	P86_1();
	ColPrintf(PrintfCol::����, "");
	P86_2();
	ColPrintf(PrintfCol::����, "");
	P86_3();
	ColPrintf(PrintfCol::����, "");
	P86_4();
	ColPrintf(PrintfCol::����, "");
	P86_5();
	ColPrintf(PrintfCol::����, "");
	P86_6();
	ColPrintf(PrintfCol::����, "");
	//P70_2();
	ColPrintf(PrintfCol::����, "");
	//P69_2();
	ColPrintf(PrintfCol::����, "");
	//P69_3();
	ColPrintf(PrintfCol::����, "");
}
void P86_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P86();
	Lang.SetCurLanguage(LanguageLib::English);
	P86();
	ColPrintf(PrintfCol::����, "");

}