#pragma once
void P80_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 Case Study of One Chicken and Rabbit in the Same Cage","P80 ��һ ����ͬ�����跨"},
		{"Title: There are 50 bills of one yuan, two yuan, and five yuan, with a total face value of 116 yuan. There are two more bills of one yuan than two yuan. How many bills of the three types are there in total?",
		"��Ŀ����һԪ��Ԫ��Ԫֽ�ҹ�50�ţ���ֵ��116Ԫ��1Ԫ��������Ԫ�����ţ�����ֽ�ҹ��ж�����?"},
		{"1. Calculate if there are two yuan bills with the same face value N1, and if there are two yuan bills with the same face value N1=total face value N2- the number of bills with more than two yuan N3 * one yuan N4",
		"1.�������һ��Ԫֽ��������ͬ��ֵN1 ���һ��Ԫֽ��������ͬ��ֵN1=����ֵN2-�ȶ�Ԫ������N3*һԪN4"},
		{"2. Calculate if all have a face value of five yuan N2=five yuan N5 * (total number N6- more than two yuan N3)",
		"2.�������������Ԫ��ֵN2 ���������Ԫ��ֵN2=��ԪN5*(������N6-�ȶ�Ԫ������N3)"},
		{"3. Calculate the face value difference N7. Face value difference N7=if all are five yuan face value N2- if the quantity of one and two yuan bills is the same, face value N1",
		"3.������ֵ��N7 ��ֵ��N7=���������Ԫ��ֵN2-���һ��Ԫֽ��������ͬ��ֵN1"},
		{"4. Calculate the number of binary sheets N8=face value difference N7/(five yuan N5 * take out two sheets N10- (one yuan N4+two yuan N5))",
		"4.�����Ԫ����N8 ��Ԫ����N8=��ֵ��N7/(��ԪN5*�ó�����N10-(һԪN4+��ԪN5))"},
		{"5. Calculate the number of single element sheets N6=the number of binary sheets N8+the number of more than binary sheets N3",
		"5.����һԪ����N6 һԪ����N6=��Ԫ����N8+�ȶ�Ԫ������N3"},
		{"6. Calculate the number of pentagonal sheets N7=total sheets N6- binary sheets N8- unary sheets N6",
		"6.������Ԫ����N7 ��Ԫ����N7=������N6-��Ԫ����N8-һԪ����N6"},
		//������
		{"TotalfacevalueN2","����ֵN2"},
		{"Morethantwoyuan,N3","�ȶ�Ԫ������N3"},
		{"OneyuanN4","һԪN4"},
		{"FiveyuanN5","��ԪN5"},
		{"BinaryN5","��ԪN5"},
		{"TotalnumberofpagesN6","������N6"},
		{"TakeouttwoN10cards","�ó�����N10"},
		{"Ifthequantityofoneandtwoyuanbanknotesisthesame,withafacevalueofN1","���һ��Ԫֽ��������ͬ��ֵN1"},
		{"IftheyareallfiveyuanfacevalueN2","���������Ԫ��ֵN2"},
		{"FacevaluedifferenceN7","��ֵ��N7"},
		{"NumberofbinarysheetsN8","��Ԫ����N8"},
		{"NumberofsheetsperyuanN6","һԪ����N6"},
		{"Numberofsheetsfor5yuanN7","��Ԫ����N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(����ֵN2,116);
	DefineLangVarInt(�ȶ�Ԫ������N3, 2);
	DefineLangVarInt(һԪN4, 1);
	DefineLangVarInt(��ԪN5, 5);
	DefineLangVarInt(��ԪN5, 2);
	DefineLangVarInt(������N6, 50);
	DefineLangVarInt(�ó�����N10, 2);
	ColPrintf(PrintfCol::����, Lang("P80 ��һ ����ͬ�����跨"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һԪ��Ԫ��Ԫֽ�ҹ�50�ţ���ֵ��116Ԫ��1Ԫ��������Ԫ�����ţ�����ֽ�ҹ��ж�����?"));
	DefineLangVarInt(���һ��Ԫֽ��������ͬ��ֵN1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������һ��Ԫֽ��������ͬ��ֵN1 ���һ��Ԫֽ��������ͬ��ֵN1=����ֵN2-�ȶ�Ԫ������N3*һԪN4"));
	���һ��Ԫֽ��������ͬ��ֵN1 = ����ֵN2 - �ȶ�Ԫ������N3 * һԪN4;
	���һ��Ԫֽ��������ͬ��ֵN1.PrintProcessLog(1);
	DefineLangVarInt(���������Ԫ��ֵN2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������������Ԫ��ֵN2 ���������Ԫ��ֵN2=��ԪN5*(������N6-�ȶ�Ԫ������N3)"));
	���������Ԫ��ֵN2 = ��ԪN5 * (������N6 - �ȶ�Ԫ������N3);
	���������Ԫ��ֵN2.PrintProcessLog(1);
	DefineLangVarInt(��ֵ��N7, 0);
	ColPrintf(PrintfCol::����, Lang("3.������ֵ��N7 ��ֵ��N7=���������Ԫ��ֵN2-���һ��Ԫֽ��������ͬ��ֵN1"));
	��ֵ��N7 = ���������Ԫ��ֵN2 - ���һ��Ԫֽ��������ͬ��ֵN1;
	��ֵ��N7.PrintProcessLog(3);
	DefineLangVarInt(��Ԫ����N8, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����Ԫ����N8 ��Ԫ����N8=��ֵ��N7/(��ԪN5*�ó�����N10-(һԪN4+��ԪN5))"));
	��Ԫ����N8 = ��ֵ��N7 / (��ԪN5 * �ó�����N10 - (һԪN4 + ��ԪN5));
	��Ԫ����N8.PrintProcessLog(4);
	DefineLangVarInt(һԪ����N6, 0);
	ColPrintf(PrintfCol::����, Lang("5.����һԪ����N6 һԪ����N6=��Ԫ����N8+�ȶ�Ԫ������N3"));
	һԪ����N6 = ��Ԫ����N8 + �ȶ�Ԫ������N3;
	һԪ����N6.PrintProcessLog(5);
	DefineLangVarInt(��Ԫ����N7, 0);
	ColPrintf(PrintfCol::����, Lang("6.������Ԫ����N7 ��Ԫ����N7=������N6-��Ԫ����N8-һԪ����N6"));
	��Ԫ����N7 = ������N6 - ��Ԫ����N8 - һԪ����N6;
	��Ԫ����N7.PrintProcessLog(6);
}
void P80_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 Case Study: Equation Method for Chicken and Rabbit in the Same Cage","P80 ��һ ����ͬ�����̷�"},
		{"Title: There are 50 bills of one yuan, two yuan, and five yuan, with a total face value of 116 yuan. There are two more bills of one yuan than two yuan. How many bills of the three types are there in total?",
		"��Ŀ����һԪ��Ԫ��Ԫֽ�ҹ�50�ţ���ֵ��116Ԫ��1Ԫ��������Ԫ�����ţ�����ֽ�ҹ��ж�����?"},
		{"Let x be a unary quantity, y be a quintuple quantity, and x+2 be a bivariate quantity",
		"��xΪһԪ������yΪ��Ԫ������x+2Ϊ��Ԫ����"},
		{"1. List the face value equation S1 (x+2)+2x+5y=116",
		"1.�г���ֵ����S1 (x+2)+2x+5y=116"},
		{"2. Simplify S1 to obtain S2 x+2x+5y=114",
		"2.����S1�õ�S2 x+2x+5y=114"},
		{"3. Simplify S2 to obtain S3 3x+5y=114",
		"3.����S2�õ�S3 3x+5y=114"},
		{"4. List the quantity relationship S4 (x+2)+x+y=50",
		"4.�г�������ϵS4 ��x+2��+x+y=50"},
		{"5. Simplify S4 to obtain S5 x+x+y=48=>2x+y=48",
		"5.����S4�õ�S5 x+x+y=48=>2x+y=48"},
		{"6. According to S5, list the equation for y as S6 y=48-2x",
		"6.����S5�г�y�ķ���S6 y=48-2x"},
		{"7. Substitute S6 into S3 to obtain S7 3x+5 (48-2x)=114",
		"7.��S6����S3�õ�S7 3x+5(48-2x)=114"},
		{"8. Expand S7 to obtain S8 3x+240-10x=114",
		"8.չ��S7�õ�S8 3x+240-10x=114"},
		{"9. Simplify S8 to obtain S9 3x-10x=-126=>-7x=-126",
		"9.����S8�õ�S9 3x-10x=-126=>-7x=-126"},
		{"10. Simplify S9 to obtain S10- x=-18",
		"10.����S9�õ�S10 -x=-18=>x=18"},
		{"11. Substitute S10 into S6 to obtain S11 y=48-2 * 18=12",
		"11.��S10����S6�õ�S11 y=48-2*18=12"},
		{"12. Obtain binary quantity S12 x+2=18+2=20",
		"12.�õ���Ԫ����S12 x+2=18+2=20"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P80 ��һ ����ͬ�����̷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һԪ��Ԫ��Ԫֽ�ҹ�50�ţ���ֵ��116Ԫ��1Ԫ��������Ԫ�����ţ�����ֽ�ҹ��ж�����?"));
	ColPrintf(PrintfCol::����, Lang("��xΪһԪ������yΪ��Ԫ������x+2Ϊ��Ԫ����"));
	ColPrintf(PrintfCol::����, Lang("1.�г���ֵ����S1 (x+2)+2x+5y=116"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 x+2x+5y=114"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 3x+5y=114"));
	ColPrintf(PrintfCol::����, Lang("4.�г�������ϵS4 ��x+2��+x+y=50"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�õ�S5 x+x+y=48=>2x+y=48"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�г�y�ķ���S6 y=48-2x"));
	ColPrintf(PrintfCol::����, Lang("7.��S6����S3�õ�S7 3x+5(48-2x)=114"));
	ColPrintf(PrintfCol::����, Lang("8.չ��S7�õ�S8 3x+240-10x=114"));
	ColPrintf(PrintfCol::����, Lang("9.����S8�õ�S9 3x-10x=-126=>-7x=-126"));
	ColPrintf(PrintfCol::����, Lang("10.����S9�õ�S10 -x=-18=>x=18"));
	ColPrintf(PrintfCol::����, Lang("11.��S10����S6�õ�S11 y=48-2*18=12"));
	ColPrintf(PrintfCol::����, Lang("12.�õ���Ԫ����S12 x+2=18+2=20"));
}
void P80_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 Cases 2 of Common Law for Chicken and Rabbit in the Same Cage","P80 ���� ����ͬ����ͨ��"},
		{"Title: One hundred animals drink 100 cups of cola, one large animal drinks three cups per person, and three small animals drink one cup per person. How many large animals and how many small animals are there?",
		"��Ŀ��һ��ֻ�����100�����֣�����һ�˺�������С�������˺���һ�����������ֻ��С�������ֻ?"},
		{"1. Calculate the number of servings of cola consumed by a large animal N1=the number of cups consumed by the large animal N2 * the number of servings per cup N3",
		"1.��������һ�ݿ�����N1 �����һ�ݿ�����N1=����ȵı���N2*ÿ���ķ���N3"},
		{"2. Calculate If all the cups are consumed by large animals, N2=the number of cups consumed by one large animal, N4 * the number of cola cups, N5",
		"2.�������ȫ�Ǵ���ȵı���N2 ȫ�Ǵ���ȵı���N2=����һ���ȵı���N4*���ֱ���N5"},
		{"3. Calculate the number of cups consumed by small animals N3=number of cola cups N5 * number of servings consumed by small animals N6",
		"3.���������С����ȵı���N3 �����С����ȵı���N3=���ֱ���N5*С����ȵķ���N6"},
		{"4. Calculate the difference in the number of cups N4=the number of cups consumed by all large animals N2- the number of cups consumed by small animals N3",
		"4.���㱭����N4 ������N4=ȫ�Ǵ���ȵı���N2-�����С����ȵı���N3"},
		{"5. Calculate the number of large animals N5=cup difference N4/(the number of cola drinks by large animals N1- the number of cola drinks by small animals N6)",
		"5.�������ֻ��N5 ����ֻ��N5=������N4/(�����һ�ݿ�����N1-С����ȵķ���N6)"},
		{"6. Calculate the number of small animals N6=number of cola cups N5- number of large animals N5",
		"6.����С����ֻ��N6 С����ֻ��N6=���ֱ���N5-����ֻ��N5"},
		//������
		{"NumberofcupsconsumedbylargeanimalsN2","����ȵı���N2"},
		{"NumberofservingspercupN3","ÿ���ķ���N3"},
		{"ThenumberofcupsalargeanimaldrinksN4","����һ���ȵı���N4"},
		{"NumberofCokeCupsN5","���ֱ���N5"},
		{"NumberofservingsforsmallanimalsN6","С����ȵķ���N6"},
		{"LargeanimalsdrinkingoneservingofcolaN1","�����һ�ݿ�����N1"},
		{"Ifallthecupsareconsumedbylargeanimals,N2","ȫ�Ǵ���ȵı���N2"},
		{"Ifitisasmallanimal,thenumberofcupsconsumedisN3","�����С����ȵı���N3"},
		{"CupdifferenceN4","������N4"},
		{"NumberoflargeanimalsN5","����ֻ��N5"},
		{"NumberofsmallanimalsN6","С����ֻ��N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(����ȵı���N2, 3);
	DefineLangVarInt(ÿ���ķ���N3, 3);
	DefineLangVarInt(����һ���ȵı���N4, 3);
	DefineLangVarInt(���ֱ���N5, 100);
	DefineLangVarInt(С����ȵķ���N6, 1);
	ColPrintf(PrintfCol::����, Lang("P80 ���� ����ͬ����ͨ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ��ֻ�����100�����֣�����һ�˺�������С�������˺���һ�����������ֻ��С�������ֻ?"));
	DefineLangVarInt(�����һ�ݿ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������һ�ݿ�����N1 �����һ�ݿ�����N1=����ȵı���N2*ÿ���ķ���N3"));
	�����һ�ݿ�����N1 = ����ȵı���N2 * ÿ���ķ���N3;
	�����һ�ݿ�����N1.PrintProcessLog(1);
	DefineLangVarInt(ȫ�Ǵ���ȵı���N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������ȫ�Ǵ���ȵı���N2 ȫ�Ǵ���ȵı���N2=����һ���ȵı���N4*���ֱ���N5"));
	ȫ�Ǵ���ȵı���N2 = ����һ���ȵı���N4 * ���ֱ���N5;
	ȫ�Ǵ���ȵı���N2.PrintProcessLog(2);
	DefineLangVarInt(�����С����ȵı���N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������С����ȵı���N3 �����С����ȵı���N3=���ֱ���N5*С����ȵķ���N6"));
	�����С����ȵı���N3 = ���ֱ���N5 * С����ȵķ���N6;
	�����С����ȵı���N3.PrintProcessLog(3);
	DefineLangVarInt(������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㱭����N4 ������N4=ȫ�Ǵ���ȵı���N2-�����С����ȵı���N3"));
	������N4 = ȫ�Ǵ���ȵı���N2 - �����С����ȵı���N3;
	������N4.PrintProcessLog(4);
	DefineLangVarInt(����ֻ��N5, 0);
	ColPrintf(PrintfCol::����, Lang("5.�������ֻ��N5 ����ֻ��N5=������N4/(�����һ�ݿ�����N1-С����ȵķ���N6)"));
	����ֻ��N5 = ������N4 / (�����һ�ݿ�����N1 - С����ȵķ���N6);
	����ֻ��N5.PrintProcessLog(5);
	DefineLangVarInt(С����ֻ��N6, 0);
	ColPrintf(PrintfCol::����, Lang("6.����С����ֻ��N6 С����ֻ��N6=���ֱ���N5-����ֻ��N5"));
	С����ֻ��N6 = ���ֱ���N5 - ����ֻ��N5;
	С����ֻ��N6.PrintProcessLog(6);
}
void P80_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 Case Study of Two Chickens and Rabbits in the Same Cage Equation Method","P80 ���� ����ͬ�����̷�"},
		{"Title: One hundred animals drink 100 cups of cola, one large animal drinks three cups per person, and three small animals drink one cup per person. How many large animals and how many small animals are there?",
		"��Ŀ��һ��ֻ�����100�����֣�����һ�˺�������С�������˺���һ�����������ֻ��С�������ֻ?"},
		{"Set x large animals and y small animals",
		"�����Ϊxֻ��С����Ϊyֻ"},
		{"1. List the quantity relationship S1 x+y=100",
		"1.�г�������ϵS1 x+y=100"},
		{"2. List the cup count relationship S2 3x+3/y=100",
		"2.�г�������ϵS2 3x+3/y=100"},
		{"3. Simplify S1 to obtain S2 y=100-x",
		"3.����S1�õ�S3 y=100-x"},
		{"4. Substitute S3 into S2 to obtain S4 3x+3/(100-x)=100",
		"4.��S3����S2�õ�S4 3x+3/(100-x)=100"},
		{"5. Subtract the denominator of S4 to obtain S5 (3x+3/(100-x)) * 3=100 * 3=>9x+100-x=300",
		"5.����S4�ķ�ĸ�õ�S5 (3x+3/(100-x))*3=100*3=>9x+100-x=300"},
		{"6. Simplify S5 to obtain S6 8x+100=300",
		"6.����S5�õ�S6 8x+100=300"},
		{"7. Simplify S6 to obtain S7 8x=200=>x=25",
		"7.����S6�õ�S7 8x=200=>x=25"},
		{"8. Substitute S7 into S3 to obtain S8 with y=100-x=>y=100-25=75",
		"8.��S7����S3�õ�S8 y=100-x=>y=100-25=75"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P80 ���� ����ͬ�����̷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ��ֻ�����100�����֣�����һ�˺�������С�������˺���һ�����������ֻ��С�������ֻ?"));
	ColPrintf(PrintfCol::����, Lang("�����Ϊxֻ��С����Ϊyֻ"));
	ColPrintf(PrintfCol::����, Lang("1.�г�������ϵS1 x+y=100"));
	ColPrintf(PrintfCol::����, Lang("2.�г�������ϵS2 3x+3/y=100"));
	ColPrintf(PrintfCol::����, Lang("3.����S1�õ�S3 y=100-x"));
	ColPrintf(PrintfCol::����, Lang("4.��S3����S2�õ�S4 3x+3/(100-x)=100"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�ķ�ĸ�õ�S5 (3x+3/(100-x))*3=100*3=>9x+100-x=300"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ�S6 8x+100=300"));
	ColPrintf(PrintfCol::����, Lang("7.����S6�õ�S7 8x=200=>x=25"));
	ColPrintf(PrintfCol::����, Lang("8.��S7����S3�õ�S8 y=100-x=>y=100-25=75"));
}
void P80_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 cases of three chickens and rabbits in the same cage using common law","P80 ���� ����ͬ����ͨ��"},
		{"Title: Animal special forces soldiers go out to carry out missions. They go out 20 times a day on sunny days and 12 times on rainy days, totaling 112 times. On average, they go out 14 times a day. How many rainy days are there?",
		"��Ŀ���������ֱ���ȥִ����������ÿ���20�Σ������12�Σ�����112�Σ�ƽ��ÿ���14�Σ��ж���������?"},
		{"1. Calculate the number of days of appointment N1=number of outings N2/average number N3",
		"1.�����������N1 ��������N1=��ȥ����N2/ƽ������N3"},
		{"2. Calculate the number of sunny days N2 if all are sunny days N2=number of sunny days N3 * number of days N1",
		"2.�������ȫ���������N2 ���ȫ���������N2=�������N3*��������N1"},
		{"3. Calculate the frequency difference N3, which is equal to the number of exits N2 minus the number of sunny days N2",
		"3.���������N3 ������N3=��ȥ����N2-���ȫ���������N2"},
		{"4. Calculate the number of rainy days N4=frequency difference N3/(sunny days N3- rainy days N4)",
		"4.������������N4 ��������N4=������N3/(�������N3-�������N4)"},
		//������
		{"NumberofoutingsN2","��ȥ����N2"},
		{"AveragefrequencyN3","ƽ������N3"},
		{"SunnyDaysN3","�������N3"},
		{"NumberofrainydaysN4","�������N4"},
		{"NumberofdaysinofficeN1","��������N1"},
		{"Ifit'sallsunnytimesN2","���ȫ���������N2"},
		{"NumberdifferenceN3","������N3"},
		{"NumberofrainydaysN4","��������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ȥ����N2, 112);
	DefineLangVarInt(ƽ������N3, 14);
	DefineLangVarInt(�������N3, 20);
	DefineLangVarInt(�������N4, 12);
	ColPrintf(PrintfCol::����, Lang("P80 ���� ����ͬ����ͨ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������ֱ���ȥִ����������ÿ���20�Σ������12�Σ�����112�Σ�ƽ��ÿ���14�Σ��ж���������?"));
	DefineLangVarInt(��������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����������N1 ��������N1=��ȥ����N2/ƽ������N3"));
	��������N1 = ��ȥ����N2 / ƽ������N3;
	��������N1.PrintProcessLog(1);
	DefineLangVarInt(���ȫ���������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������ȫ���������N2 ���ȫ���������N2=�������N3*��������N1"));
	���ȫ���������N2 = �������N3 * ��������N1;
	���ȫ���������N2.PrintProcessLog(2);
	DefineLangVarInt(������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������N3 ������N3=��ȥ����N2-���ȫ���������N2"));
	������N3 = ��ȥ����N2 - ���ȫ���������N2;
	������N3.PrintProcessLog(3);
	DefineLangVarInt(��������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������������N4 ��������N4=������N3/(�������N3-�������N4)"));
	��������N4 = ������N3 / (�������N3 - �������N4);
	��������N4.PrintProcessLog(4);
}
void P80_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 cases of three chickens and rabbits in the same cage using common law","P80 ���� ����ͬ�����̷�"},
		{"Title: Animal special forces soldiers go out to carry out missions. They go out 20 times a day on sunny days and 12 times on rainy days, totaling 112 times. On average, they go out 14 times a day. How many rainy days are there?",
		"��Ŀ���������ֱ���ȥִ����������ÿ���20�Σ������12�Σ�����112�Σ�ƽ��ÿ���14�Σ��ж���������?"},
		{"Let the total number of days be t, the number of sunny days be x, and the number of cloudy days be y (y is the main target)",
		"��������Ϊt����������Ϊx����������Ϊy(y����ҪĿ��)"},
		{"1. List the equation for the number of days S1 14=112/t=>t=112/14=8",
		"1.�г���������S1 14=112/t=>t=112/14=8"},
		{"2. List the number of days equation S2 x+y=8",
		"2.�г���������S2 x+y=8"},
		{"3. List the number equation S3 20x+12y=112",
		"3.�г���������S3 20x+12y=112"},
		{"4. Simplify S2 to obtain S3 y=8-x",
		"4.����S2�õ�S4 y=8-x"},
		{"5. Substitute S4 into S3 to obtain S5 20x+12 (8-x)=112",
		"5.��S4����S3�õ�S5 20x+12(8-x)=112"},
		{"6. Simplify S5 to obtain S6 20x+96-12x=112",
		"6.����S5�õ�S6 20x+96-12x=112"},
		{"7. Simplify S6 to obtain S7 20x-12x=16",
		"7.����S6�õ�S7 20x-12x=16"},
		{"8. Simplify S7 to obtain S8 with 8x=16=>x=2",
		"8.����S7�õ�S8 8x=16=>x=2"},
		{"9. Substitute S8 into S4 to obtain S5 y=8-2=6",
		"9.��S8����S4�õ�S5 y=8-2=6"},

	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P80 ���� ����ͬ�����̷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������ֱ���ȥִ����������ÿ���20�Σ������12�Σ�����112�Σ�ƽ��ÿ���14�Σ��ж���������?"));
	ColPrintf(PrintfCol::����, Lang("��������Ϊt����������Ϊx����������Ϊy(y����ҪĿ��)"));
	ColPrintf(PrintfCol::����, Lang("1.�г���������S1 14=112/t=>t=112/14=8"));
	ColPrintf(PrintfCol::����, Lang("2.�г���������S2 x+y=8"));
	ColPrintf(PrintfCol::����, Lang("3.�г���������S3 20x+12y=112"));
	ColPrintf(PrintfCol::����, Lang("4.����S2�õ�S4 y=8-x"));
	ColPrintf(PrintfCol::����, Lang("5.��S4����S3�õ�S5 20x+12(8-x)=112"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ�S6 20x+96-12x=112"));
	ColPrintf(PrintfCol::����, Lang("7.����S6�õ�S7 20x-12x=16"));
	ColPrintf(PrintfCol::����, Lang("8.����S7�õ�S8 8x=16=>x=2"));
	ColPrintf(PrintfCol::����, Lang("9.��S8����S4�õ�S5 y=8-2=6"));
}
void P80_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 cases of four chickens and rabbits in the same cage","P80 ���� ����ͬ��"},
		{"Title: Locomotive A travels 200 kilometers per hour from point A to point B, while locomotive B travels 160 kilometers per hour from point B to point A. In the picture, locomotive A stops for 4 hours due to a malfunction, so it arrives at the destination one hour later than locomotive B. What is the distance between locomotive A and point B?",
		"��Ŀ������A�ӴӼ׿����ҵأ�ÿСʱ��200ǧ�ף����ͬʱ����B���ҵ��ף�ÿСʱ160ǧ�ף�ͼ��A�������ͣ��4Сʱ�����Ա�B�ӳ�һСʱ����Ŀ�ĵأ���������صľ���?"},
		{"1. Calculate the time T1 that A uses less than B, which is equal to the time T1-A stays and the time T2 it is late",
		"1.����A��B���õ�ʱ��T1 A��B���õ�ʱ��T1=Aͣ����ʱ��T1-A�ٵ���ʱ��T2"},
		{"2. Calculate the distance traveled by A without stopping, S1. If A does not stop, S1=the time T1 that A takes less than B * A speed V1",
		"2.�������Aû��ͣ�����ߵ�·��S1 ���Aû��ͣ�����ߵ�·��S1=A��B���õ�ʱ��T1*A�ٶ�V1"},
		{"3. Calculate the time T3 for A to travel to B and travel to B, where T3 equals the distance traveled by A without stopping, denoted as S1/(A speed V1-B speed V2)",
		"3.����A����B��ʻ��ʱ��T3 A����B��ʻ��ʱ��T3=���Aû��ͣ�����ߵ�·��S1/(A�ٶ�V1-B�ٶ�V2)"},
		{"4. Calculate the distance between two places S4. The distance between two places S4=the time it takes for A to reach B and travel T3 * B speed V2",
		"4.�������ؾ���S4 ���ؾ���S4=A����B��ʻ��ʱ��T3*B�ٶ�V2"},
		//������
		{"A'sdwelltimeT1","Aͣ����ʱ��T1"},
		{"AislateattimeT2","A�ٵ���ʱ��T2"},
		{"AspeedV1","A�ٶ�V1"},
		{"BspeedV2","B�ٶ�V2"},
		{"AtakeslesstimeT1thanB","A��B���õ�ʱ��T1"},
		{"IfAdoesn'tstopandwalkanextradistanceS1","���Aû��ͣ�����ߵ�·��S1"},
		{"TimeT3forAtoreachBandtravel","A����B��ʻ��ʱ��T3"},
		{"DistancebetweentwolocationsS4","���ؾ���S4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(Aͣ����ʱ��T1, 4);
	DefineLangVarInt(A�ٵ���ʱ��T2, 1);
	DefineLangVarInt(A�ٶ�V1, 200);
	DefineLangVarInt(B�ٶ�V2, 160);
	ColPrintf(PrintfCol::����, Lang("P80 ���� ����ͬ��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������A�ӴӼ׿����ҵأ�ÿСʱ��200ǧ�ף����ͬʱ����B���ҵ��ף�ÿСʱ160ǧ�ף�ͼ��A�������ͣ��4Сʱ�����Ա�B�ӳ�һСʱ����Ŀ�ĵأ���������صľ���?"));
	DefineLangVarInt(A��B���õ�ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����A��B���õ�ʱ��T1 A��B���õ�ʱ��T1=Aͣ����ʱ��T1-A�ٵ���ʱ��T2"));
	A��B���õ�ʱ��T1 = Aͣ����ʱ��T1 - A�ٵ���ʱ��T2;
	A��B���õ�ʱ��T1.PrintProcessLog(1);
	DefineLangVarInt(���Aû��ͣ�����ߵ�·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������Aû��ͣ�����ߵ�·��S1 ���Aû��ͣ�����ߵ�·��S1=A��B���õ�ʱ��T1*A�ٶ�V1"));
	���Aû��ͣ�����ߵ�·��S1 = A��B���õ�ʱ��T1 * A�ٶ�V1;
	���Aû��ͣ�����ߵ�·��S1.PrintProcessLog(2);
	DefineLangVarInt(A����B��ʻ��ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����A����B��ʻ��ʱ��T3 A����B��ʻ��ʱ��T3=���Aû��ͣ�����ߵ�·��S1/(A�ٶ�V1-B�ٶ�V2)"));
	A����B��ʻ��ʱ��T3 = ���Aû��ͣ�����ߵ�·��S1 / (A�ٶ�V1 - B�ٶ�V2);
	A����B��ʻ��ʱ��T3.PrintProcessLog(3);
	DefineLangVarInt(���ؾ���S4, 0);
	ColPrintf(PrintfCol::����, Lang("4.�������ؾ���S4 ���ؾ���S4=A����B��ʻ��ʱ��T3*B�ٶ�V2"));
	���ؾ���S4 = A����B��ʻ��ʱ��T3 * B�ٶ�V2;
	���ؾ���S4.PrintProcessLog(4);
}

void P80()
{
	P80_1();
	ColPrintf(PrintfCol::����, "");
	P80_1_2();
	ColPrintf(PrintfCol::����, "");
	P80_2();
	ColPrintf(PrintfCol::����, "");
	P80_2_2();
	ColPrintf(PrintfCol::����, "");
	P80_3();
	ColPrintf(PrintfCol::����, "");
	P80_3_2();
	ColPrintf(PrintfCol::����, "");
	P80_4();
	ColPrintf(PrintfCol::����, "");
	//P66_2();
	ColPrintf(PrintfCol::����, "");
	//P66_3();
	ColPrintf(PrintfCol::����, "");
	//P66_4();
	ColPrintf(PrintfCol::����, "");
	//P77_5();
	ColPrintf(PrintfCol::����, "");
}
void P80_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P80();
	Lang.SetCurLanguage(LanguageLib::English);
	P80();
	ColPrintf(PrintfCol::����, "");

}