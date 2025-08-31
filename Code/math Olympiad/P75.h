#pragma once
void P75_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 1 Score Clever Calculation","P75 ��1 ��������"},
		{"Title: There is a teacher whose age is multiplied by 2, subtracted by 18, divided by 2, and added to 8. The result is 38 years old. How old is this teacher this year?",
		"��Ŀ����һλ��ʦ�����������2����ȥ18���ٳ���2������8�������38�꣬�����ʦ���������?"},
		{"1. Calculate the age before addition N1=calculated age N2- added age N3",
		"1.�����ǰ������N1 ��ǰ������N1=����������N2-���ϵ�����N3"},
		{"2. Calculate the age before division N1 divided by the age before division N1=add the age before division N1 * divide the age before division N3",
		"2.�����ǰ������N1 ��ǰ������N1=��ǰ������N1*��������N3"},
		{"3. Calculate the age before subtraction N1 minus the age before subtraction N1=divide the age before subtraction N1+subtract the age before subtraction N3",
		"3.�����ǰ������N1 ��ǰ������N1=��ǰ������N1+��������N3"},
		{"4. Calculate the original age N1, which is equal to the age before subtraction N1 divided by the multiplied age N3",
		"4.����ԭ����N1 ԭ����N1=��ǰ������N1/�˵�����N3"},
		//������
		{"CalculatedageN2","����������N2"},
		{"AddedageN3","���ϵ�����N3"},
		{"ExceptforageN3","��������N3"},
		{"ReducedageN3","��������N3"},
		{"AgeofrideN3","�˵�����N3"},
		{"AgebeforeadditionN1","��ǰ������N1"},
		{"ExceptforthepreviousageN1","��ǰ������N1"},
		{"AgebeforereductionN1","��ǰ������N1"},
		{"OriginalageN1","ԭ����N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(����������N2, 38);
	DefineLangVarInt(���ϵ�����N3, 8);
	DefineLangVarInt(��������N3, 2);
	DefineLangVarInt(��������N3, 18);
	DefineLangVarInt(�˵�����N3, 2);
	ColPrintf(PrintfCol::����, Lang("P75 ��1 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һλ��ʦ�����������2����ȥ18���ٳ���2������8�������38�꣬�����ʦ���������?"));
	DefineLangVarInt(��ǰ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ǰ������N1 ��ǰ������N1=����������N2-���ϵ�����N3"));
	��ǰ������N1 = ����������N2 - ���ϵ�����N3;
	��ǰ������N1.PrintProcessLog(1);
	DefineLangVarInt(��ǰ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ǰ������N1 ��ǰ������N1=��ǰ������N1*��������N3"));
	��ǰ������N1 = ��ǰ������N1 * ��������N3;
	��ǰ������N1.PrintProcessLog(2);
	DefineLangVarInt(��ǰ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ǰ������N1 ��ǰ������N1=��ǰ������N1+��������N3"));
	��ǰ������N1 = ��ǰ������N1 + ��������N3;
	��ǰ������N1.PrintProcessLog(3);
	DefineLangVarInt(ԭ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ԭ����N1 ԭ����N1=��ǰ������N1/�˵�����N3"));
	ԭ����N1 = ��ǰ������N1 / �˵�����N3;
	ԭ����N1.PrintProcessLog(4);
}
void P75_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 2 Score Clever Calculation","P75 ��2 ��������"},
		{"Title: The building sells televisions. In the first half of the year, more than half of the total number of televisions sold was 10, and in the second half, more than half of the remaining 20 were sold. At this time, there are still 95 televisions left. How many were there in total?",
		"��Ŀ�����ó��۵��ӻ����ϰ������������һ���10̨���°����۳�ʣ�µ�һ���20̨��ʱ��ʣ95̨��ԭ��һ���ж���̨?"},
		{"1. Calculate the remaining half N1. The remaining half N1=the current number of units N1+the remaining half sold N2",
		"1.����ʣ�µ�һ��N1 ʣ�µ�һ��N1=��ʱ��̨��N1+ʣ��һ���������N2"},
		{"2. Calculate half of the total number of sales without adding N2, which is equal to the remaining half N1 multiplied by N3",
		"2.���㲻�Ӷ�����������һ��N2 ���Ӷ�����������һ��N2=ʣ�µ�һ��N1*����N3"},
		{"3. Calculate half of the total N4, half of the total N4=half of the total sales without adding more N2+half of the total sales N3",
		"3,����������һ��N4 ������һ��N4=���Ӷ�����������һ��N2+������һ���������N3"},
		{"4. Calculate the total number N5=half of the total number N4 * multiplier N3",
		"4.��������N5 ����N5=������һ��N4*����N3"},
		//������
		{"Atthistime,thenumberofunitsN1","��ʱ��̨��N1"},
		{"MagnificationN3","����N3"},
		{"MorethanhalfoftheN2soldremains","ʣ��һ���������N2"},
		{"MorethanhalfofthetotalN3sold","������һ���������N3"},
		{"TheremaininghalfN1","ʣ�µ�һ��N1"},
		{"NotaddinghalfofthetotalsalesN2","���Ӷ�����������һ��N2"},
		{"HalfofthetotalN4","������һ��N4"},
		{"TotalN5","����N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ʱ��̨��N1, 95);
	DefineLangVarInt(ʣ��һ���������N2, 20);
	DefineLangVarInt(����N3, 2);
	DefineLangVarInt(������һ���������N3, 10);
	ColPrintf(PrintfCol::����, Lang("P75 ��2 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ó��۵��ӻ����ϰ������������һ���10̨���°����۳�ʣ�µ�һ���20̨��ʱ��ʣ95̨��ԭ��һ���ж���̨?"));
	DefineLangVarInt(ʣ�µ�һ��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ʣ�µ�һ��N1 ʣ�µ�һ��N1=��ʱ��̨��N1+ʣ��һ���������N2"));
	ʣ�µ�һ��N1 = ��ʱ��̨��N1 + ʣ��һ���������N2;
	ʣ�µ�һ��N1.PrintProcessLog(1);
	DefineLangVarInt(���Ӷ�����������һ��N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㲻�Ӷ�����������һ��N2 ���Ӷ�����������һ��N2=ʣ�µ�һ��N1*����N3"));
	���Ӷ�����������һ��N2 = ʣ�µ�һ��N1 * ����N3;
	���Ӷ�����������һ��N2.PrintProcessLog(2);
	DefineLangVarInt(������һ��N4, 0);
	ColPrintf(PrintfCol::����, Lang("3,����������һ��N4 ������һ��N4=���Ӷ�����������һ��N2+������һ���������N3"));
	������һ��N4 = ���Ӷ�����������һ��N2 + ������һ���������N3;
	������һ��N4.PrintProcessLog(3);
	DefineLangVarInt(����N5, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������N5 ����N5=������һ��N4*����N3"));
	����N5 = ������һ��N4 * ����N3;
	����N5.PrintProcessLog(4);
}
void P75_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 3 Score Clever Calculation","P75 ��3 ��������"},
		{"Title: The People's Liberation Army participates in disaster relief activities. Half of the first team is drawn to the second team, 35 people are drawn to the third team, the remaining half is drawn to the fourth team, and 8 people are drawn in.At this time, there are 30 people�� How many people were originally in the first team at this time",
		"��Ŀ����ž��μӾ��ֻ���ӵ�һ���г��1�����2�ӣ����35�˸���3�ӣ����ʣ�µ�һ�����4�ӣ��ֵ���8�ˣ���ʱ��30�ˣ���ʱ��һ��ԭ��������"},
		{"1. Calculate the quantity N1 before the transfer, which is equal to the current number of people N2 minus the number of people transferred N3",
		"1.�������ǰ������N1 ����ǰ������N1=��������N2-��������N3"},
		{"2. Calculate the quantity before half adjustment N2=quantity before adjustment N1 * multiplier N4",
		"2.�����ʣ��һ��ǰ����N2 ��ʣ��һ��ǰ����N2=����ǰ������N1*����N4"},
		{"3. Calculate the quantity before transfer N3. The quantity before transfer N3=half of the quantity before transfer N2+the quantity before transfer N3",
		"3.�������ǰ����N3 ����ǰ����N3=��ʣ��һ��ǰ����N2+��������N3"},
		{"4. Calculate the original team size N4, which is equal to the pre transfer quantity N3 multiplied by the multiplier N4",
		"4.����ԭ��������N4 ԭ��������N4=����ǰ����N3*����N4"},
		//������
		{"ThecurrentnumberofpeopleisN2","��������N2"},
		{"NumberoftransferredpersonnelN3","��������N3"},
		{"MagnificationN4","����N4"},
		{"TransferquantityN3","��������N3"},
		{"QuantitybeforeadjustmentN1","����ǰ������N1"},
		{"AdjusttheremaininghalfofthequantitytoN2","��ʣ��һ��ǰ����N2"},
		{"QuantityN3beforeretrieval","����ǰ����N3"},
		{"OriginalteamsizeN4","ԭ��������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��������N2, 30);
	DefineLangVarInt(��������N3, 8);
	DefineLangVarInt(����N4, 2);
	DefineLangVarInt(��������N3, 35);
	ColPrintf(PrintfCol::����, Lang("P75 ��3 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ž��μӾ��ֻ���ӵ�һ���г��1�����2�ӣ����35�˸���3�ӣ����ʣ�µ�һ�����4�ӣ��ֵ���8�ˣ���ʱ��30�ˣ���ʱ��һ��ԭ��������"));
	DefineLangVarInt(����ǰ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ǰ������N1 ����ǰ������N1=��������N2-��������N3"));
	����ǰ������N1 = ��������N2 - ��������N3;
	����ǰ������N1.PrintProcessLog(1);
	DefineLangVarInt(��ʣ��һ��ǰ����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ʣ��һ��ǰ����N2 ��ʣ��һ��ǰ����N2=����ǰ������N1*����N4"));
	��ʣ��һ��ǰ����N2 = ����ǰ������N1 * ����N4;
	��ʣ��һ��ǰ����N2.PrintProcessLog(2);
	DefineLangVarInt(����ǰ����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�������ǰ����N3 ����ǰ����N3=��ʣ��һ��ǰ����N2+��������N3"));
	����ǰ����N3 = ��ʣ��һ��ǰ����N2 + ��������N3;
	����ǰ����N3.PrintProcessLog(3);
	DefineLangVarInt(ԭ��������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ԭ��������N4 ԭ��������N4=����ǰ����N3*����N4"));
	ԭ��������N4 = ����ǰ����N3 * ����N4;
	ԭ��������N4.PrintProcessLog(4);
}
void P75_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 4 Score Clever Calculation","P75 ��4 ��������"},
		{"Title: A, B, and C have a total of 90 books. If B borrows 3 books from C and then gives C 5 books, then the books of A, B, and C are equal. How many books did A, B, and C have in total?",
		"��Ŀ�����ұ����߹���90��ͼ�飬������������3������͸���5���飬��ʱ���ұ����ߵ��鶼��ȣ�ԭ�����ұ����ж��ٱ���?"},
		{"1. Calculate the current number of books per person N1=shared books N2/number of people N3",
		"1.��������ÿ�˵�����N1 ����ÿ�˵�����N1=���е���N2/����N3"},
		{"2. Calculate the original number of books for C, N2. The original number of books for C is N2=the current number of books per person, N1- the number of books given to C by B, N2",
		"2.�����ԭ������N2 ��ԭ������N2=����ÿ�˵�����N1-���ͱ���������N2"},
		{"3. Calculate the original number of books for A, N3. The original number of books for A, N3, is equal to the total number of books owned by A, N2, and the number of books borrowed by C, N3",
		"3.�����ԭ������N3 ��ԭ������N3=����ÿ�˵�����N1+�����ҵı���N3"},
		{"4. Calculate the original number of books for B, N4. The original number of books for B is N4=shared books N2- the number of books borrowed by C from B N3+the number of books given by B to C N2",
		"4.������ԭ��������N4 ��ԭ��������N4=����ÿ�˵�����N1-�����ҵı���N3+���ͱ���������N2"},
		//������
		{"SharedBooksN2","���е���N2"},
		{"peopleNumberN3","����N3"},
		{"CborrowsB'soriginalnumberN3","�����ҵı���N3"},
		{"ThenumberofbookssentbyBtoCisN2","���ͱ���������N2"},
		{"ThenumberofbooksperpersonnowisN1","����ÿ�˵�����N1"},
		{"NumberoforiginalbooksN2","��ԭ������N2"},
		{"NumberoforiginalbooksN3","��ԭ������N3"},
		{"TheoriginalnumberofbooksforBisN4","��ԭ��������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���е���N2, 90);
	DefineLangVarInt(����N3, 3);
	DefineLangVarInt(�����ҵı���N3, 3);
	DefineLangVarInt(���ͱ���������N2, 5);
	ColPrintf(PrintfCol::����, Lang("P75 ��4 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ұ����߹���90��ͼ�飬������������3������͸���5���飬��ʱ���ұ����ߵ��鶼��ȣ�ԭ�����ұ����ж��ٱ���?"));
	DefineLangVarInt(����ÿ�˵�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������ÿ�˵�����N1 ����ÿ�˵�����N1=���е���N2/����N3"));
	����ÿ�˵�����N1 = ���е���N2 / ����N3;
	����ÿ�˵�����N1.PrintProcessLog(1);
	DefineLangVarInt(��ԭ������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ԭ������N2 ��ԭ������N2=����ÿ�˵�����N1-���ͱ���������N2"));
	��ԭ������N2 = ����ÿ�˵�����N1 - ���ͱ���������N2;
	��ԭ������N2.PrintProcessLog(2);
	DefineLangVarInt(��ԭ������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ԭ������N3 ��ԭ������N3=����ÿ�˵�����N1+�����ҵı���N3"));
	��ԭ������N3 = ����ÿ�˵�����N1 + �����ҵı���N3;
	��ԭ������N3.PrintProcessLog(3);
	DefineLangVarInt(��ԭ��������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ԭ��������N4 ��ԭ��������N4=����ÿ�˵�����N1-�����ҵı���N3+���ͱ���������N2"));
	��ԭ��������N4 = ����ÿ�˵�����N1 - �����ҵı���N3 + ���ͱ���������N2;
	��ԭ��������N4.PrintProcessLog(4);
}
void P75_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 5 Score Clever Calculation","P75 ��5 ��������"},
		{"Title: A and B each have several kilograms of oil. If A pours out the same amount of oil as B and puts it into B, and B puts an equivalent amount of oil from A into A, then both are 24 kilograms. How many kilograms did they originally have",
		"��Ŀ�����Ҹ�������ǧ���ͣ�����׵�������ͬ������ͷ����ң��ҰѼ����൱���ͷ�����У���ʱ���߶���24ǧ�ˣ�ԭ������ǧ��"},
		{"1. Calculate the amount of oil in front of the nail N1=current oil N2/multiplier N1",
		"1.��������ǰ������N1 �����ǰ������N1=���ڵ�����N2/����N1"},
		{"2. Calculate the total oil quantity N2 between the two, which is equal to the current oil quantity N2 multiplied by the multiplier N1",
		"2.���������ܹ�����N2 �����ܹ�����N2=���ڵ�����N2*����N1"},
		{"3. Calculate the number of nail polish N3. The number of nail polish N3 is equal to (the total number of nail polish N2 minus the number of nail polish N1 before putting in the nail polish) divided by the ratio N1",
		"3.���������N3 ������N3=(�����ܹ�����N2-�����ǰ������N1)/����N1"},
		{"4. Calculate the number of gasoline N4, which is equal to the current number of gasoline N2 minus the number of gasoline N3",
		"4.����������N4 ������N4=���ڵ�����N2-������N3"},
		//������
		{"ThecurrentoillevelisN2","���ڵ�����N2"},
		{"MagnificationN1","����N1"},
		{"NumberofnailpolishbeforeinsertionN1","�����ǰ������N1"},
		{"ThetotaloilquantityofthetwoisN2","�����ܹ�����N2"},
		{"OilcontentN3","������N3"},
		{"OilnumberN4","������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ڵ�����N2, 24);
	DefineLangVarInt(����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P75 ��5 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����Ҹ�������ǧ���ͣ�����׵�������ͬ������ͷ����ң��ҰѼ����൱���ͷ�����У���ʱ���߶���24ǧ�ˣ�ԭ������ǧ��"));
	DefineLangVarInt(�����ǰ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������ǰ������N1 �����ǰ������N1=���ڵ�����N2/����N1"));
	�����ǰ������N1 = ���ڵ�����N2 / ����N1;
	�����ǰ������N1.PrintProcessLog(1);
	DefineLangVarInt(�����ܹ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���������ܹ�����N2 �����ܹ�����N2=���ڵ�����N2*����N1"));
	�����ܹ�����N2 = ���ڵ�����N2 * ����N1;
	�����ܹ�����N2.PrintProcessLog(2);
	DefineLangVarInt(������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���������N3 ������N3=(�����ܹ�����N2-�����ǰ������N1)/����N1"));
	������N3 = (�����ܹ�����N2 - �����ǰ������N1) / ����N1;
	������N3.PrintProcessLog(3);
	DefineLangVarInt(������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.����������N4 ������N4=���ڵ�����N2-������N3"));
	������N4 = ���ڵ�����N2 - ������N3;
	������N4.PrintProcessLog(4);
}
void P75_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 6 Score Clever Calculation","P75 ��6 ��������"},
		{"Title: The school brought 36 saplings, and Dongdong and Lili competed to plant them. Dongdong took some first, and Lili saw them and snatched 10 from Dongdong. Dongdong was not convinced and snatched 5. At this point, Dongdong was twice as many as Lili. What were Dongdong's first few saplings?",
		"��Ŀ��ѧУ����36�����磬������������������ȥ�ԣ�����������һЩ�����������ʹӶ���������10�ţ���������������5�ţ���ʱ������������2������������Ǽ���?"},
		{"Because the total number is 36, Xiaodong and Lili must be 36, and Xiaodong is twice as many as Lili. Therefore, now Xiaodong has 24 and Lili has 12",
		"��Ϊ������36�ţ�����С���������ͱ�����36����С�������������������ԣ�����С��24�ţ�����12��"},
		{"1. Calculate the number of Dongdong trees N1=the final number of Dongdong trees N2- the tree that Dongdong snatched N3+the tree that Lili snatched N4",
		"1.���㶫������N1 ��������N1=�������տ���N2-�������Ŀ���N3+�������Ŀ���N4"},
		//������
		{"ThefinalnumberofparticlesinDongdongisN2","�������տ���N2"},
		{"TreeN3snatchedbyDongdong","�������Ŀ���N3"},
		{"Lili'sTreeN4Robbed","�������Ŀ���N4"},
		{"NumberoftreesinDongdongN1","��������N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�������տ���N2, 24);
	DefineLangVarInt(�������Ŀ���N3, 5);
	DefineLangVarInt(�������Ŀ���N4, 10);
	ColPrintf(PrintfCol::����, Lang("P75 ��6 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ѧУ����36�����磬������������������ȥ�ԣ�����������һЩ�����������ʹӶ���������10�ţ���������������5�ţ���ʱ������������2������������Ǽ���?"));
	ColPrintf(PrintfCol::����, Lang("��Ϊ������36�ţ�����С���������ͱ�����36����С�������������������ԣ�����С��24�ţ�����12��"));
	DefineLangVarInt(��������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㶫������N1 ��������N1=�������տ���N2-�������Ŀ���N3+�������Ŀ���N4"));
	��������N1 = �������տ���N2 - �������Ŀ���N3 + �������Ŀ���N4;
	��������N1.PrintProcessLog(4);
}
void P75()
{
	P75_1();
	ColPrintf(PrintfCol::����, "");
	P75_2();
	ColPrintf(PrintfCol::����, "");
	P75_3();
	ColPrintf(PrintfCol::����, "");
	P75_4();
	ColPrintf(PrintfCol::����, "");
	P75_5();
	ColPrintf(PrintfCol::����, "");
	P75_6();
	ColPrintf(PrintfCol::����, "");
}
void P75_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P75();
	Lang.SetCurLanguage(LanguageLib::English);
	P75();
	ColPrintf(PrintfCol::����, "");
}