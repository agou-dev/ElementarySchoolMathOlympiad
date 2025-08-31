#pragma once
void P79_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study of One Chicken and Rabbit in the Same Cage","P79 ��һ ����ͬ�����跨"},
		{"Title: There are 100 chickens and rabbits in the cage, with 248 feet. How many chickens and rabbits each have",
		"��Ŀ�������м���һ��ֻ����248ֻ�ţ��ʼ��ø��ж���ֻ"},
		{"1. Calculate if all are rabbit legs N1 if all are rabbit legs N1=total number of chickens and rabbits N2 * number of rabbit feet N3",
		"1.�������ȫ����������N1 ���ȫ����������N1=���ù�������N2*���ӵĽ���N3"},
		{"2. Calculate the difference between the actual number of legs N4 and the actual number of legs N4=if all are rabbit legs N1- actual number of legs N2",
		"2.������ʵ��������N4 ��ʵ��������N4=���ȫ����������N1-ʵ������N2"},
		{"3. Calculate the number of chickens N5. The number of chickens N5=the difference between the actual number of legs N4/(the number of rabbit legs N3- the number of chicken legs N3)",
		"3.���㼦������N5 ��������N5=��ʵ��������N4/(���ӵĽ���N3-���Ľ���N3)"},
		{"4. Calculate the number of rabbits N6=the total number of chickens and rabbits N2- the number of chickens N5",
		"4.�����õ�����N6 �õ�����N6=���ù�������N2-��������N5"},
		//������
		{"TotalnumberofchickensandrabbitsN2","���ù�������N2"},
		{"Rabbit'sfootcountN3","���ӵĽ���N3"},
		{"ActualnumberoflegsN2","ʵ������N2"},
		{"ThenumberofchickenfeetN3","���Ľ���N3"},
		{"IfallarerabbitlegsN1","���ȫ����������N1"},
		{"DifferencefromactualnumberoflegsN4","��ʵ��������N4"},
		{"NumberofchickensN5","��������N5"},
		{"NumberofrabbitsN6","�õ�����N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ù�������N2, 100);
	DefineLangVarInt(���ӵĽ���N3, 4);
	DefineLangVarInt(ʵ������N2, 248);
	DefineLangVarInt(���Ľ���N3, 2);
	ColPrintf(PrintfCol::����, Lang("P79 ��һ ����ͬ�����跨"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������м���һ��ֻ����248ֻ�ţ��ʼ��ø��ж���ֻ"));
	DefineLangVarInt(���ȫ����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ȫ����������N1 ���ȫ����������N1=���ù�������N2*���ӵĽ���N3"));
	���ȫ����������N1 = ���ù�������N2 * ���ӵĽ���N3;
	���ȫ����������N1.PrintProcessLog(1);
	DefineLangVarInt(��ʵ��������N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ʵ��������N4 ��ʵ��������N4=���ȫ����������N1-ʵ������N2"));
	��ʵ��������N4 = ���ȫ����������N1 - ʵ������N2;
	��ʵ��������N4.PrintProcessLog(2);
	DefineLangVarInt(��������N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㼦������N5 ��������N5=��ʵ��������N4/(���ӵĽ���N3-���Ľ���N3)"));
	��������N5 = ��ʵ��������N4 / (���ӵĽ���N3 - ���Ľ���N3);
	��������N5.PrintProcessLog(3);
	DefineLangVarInt(�õ�����N6, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����õ�����N6 �õ�����N6=���ù�������N2-��������N5"));
	�õ�����N6 = ���ù�������N2 - ��������N5;
	�õ�����N6.PrintProcessLog(4);
}
void P79_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study: Equation Method for Chicken and Rabbit in the Same Cage","P79 ��һ ����ͬ�����̷�"},
		{"Title: There are 100 chickens and rabbits in the cage, with 248 feet. How many chickens and rabbits each have",
		"��Ŀ�������м���һ��ֻ����248ֻ�ţ��ʼ��ø��ж���ֻ"},
		{"If the number of chickens is x, then the number of rabbits is (100-x)",
		"�輦������Ϊx�������ӵ�����Ϊ(100-x)ֻ"},
		{"1. List the equation S1 2x+4 (100-x)=248",
		"1.�г�ʽ��S1 2x+4(100-x)=248"},
		{"2. Expand equation S1 to obtain S2 2x+400-4x=248",
		"2.չ��ʽ��S1�õ�S2 2x+400-4x=248"},
		{"3. Simplify S2 to obtain S3-2x+400=248",
		"3.����S2�õ�S3 -2x+400=248"},
		{"4. Simplify S3 to obtain S4-2x=248-400=-152",
		"4.����S3�õ�S4 -2x=248-400=-152"},
		{"5. Simplify S4 to obtain S5- x=-76=>x=76",
		"5.����S4�õ�S5 -x=-76=>x=76"},
		{"6. According to S5, the number of rabbits in S6 is 24, ranging from 100 to 76",
		"6.����S5�õ��õ�ֻ��S6 100-76=24"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P79 ��һ ����ͬ�����̷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������м���һ��ֻ����248ֻ�ţ��ʼ��ø��ж���ֻ"));
	ColPrintf(PrintfCol::����, Lang("�輦������Ϊx�������ӵ�����Ϊ(100-x)ֻ"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 2x+4(100-x)=248"));
	ColPrintf(PrintfCol::����, Lang("2.չ��ʽ��S1�õ�S2 2x+400-4x=248"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 -2x+400=248"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 -2x=248-400=-152"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�õ�S5 -x=-76=>x=76"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ��õ�ֻ��S6 100-76=24"));
}
void P79_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case One Variation Practice Chicken and Rabbit in the Same Cage Fake Method","P79 ��һ��ʽ��ϰ ����ͬ�����跨"},
		{"Title: The class bought 50 tickets, with 15 tickets each and 20 yuan each. The total ticket price is 880 yuan. How many tickets do each have",
		"��Ŀ���༶����50��Ʊ����15һ�ŵģ���20Ԫһ�ŵģ���Ʊ����880Ԫ���ʸ��м���"},
		{"1. Calculate if all are 20 N1=number of tickets N2 * 20 yuan N3",
		"1.�������ȫ�Ƕ�ʮN1 ���ȫ�Ƕ�ʮN1=Ʊ����N2*��ʮԪN3"},
		{"2. Calculate the difference between the actual amount of money N4 and the actual amount of money N4=if all are twenty N1- actual amount of money N2",
		"2.������ʵ��Ǯ����N4 ��ʵ��Ǯ����N4=���ȫ�Ƕ�ʮN1-ʵ��Ǯ��N2"},
		{"3. Calculate the number of chickens N5. The number of chickens N5=the difference between the actual number of legs N4/(the number of rabbit legs N3- the number of chicken legs N3)",
		"3.����ʮ�������N5 ʮ�������N5=��ʵ��Ǯ����N4/(��ʮԪN3-ʮ��ԪN3)"},
		{"4. Calculate the quantity of twenty N6=the quantity of tickets N2 minus the quantity of fifteen N5",
		"4.�����ʮ������N6 ��ʮ������N6=Ʊ����N2-ʮ�������N5"},
		//������
		{"NumberofticketsN2","Ʊ����N2"},
		{"TwentyyuanN3","��ʮԪN3"},
		{"FifteenyuanN3","ʮ��ԪN3"},
		{"ActualamountN2","ʵ��Ǯ��N2"},
		{"Ifallare20N1","���ȫ�Ƕ�ʮN1"},
		{"DifferencefromactualamountN4","��ʵ��Ǯ����N4"},
		{"NumberofFifteenN5","ʮ�������N5"},
		{"NumberofTwentyN6","��ʮ������N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(Ʊ����N2, 50);
	DefineLangVarInt(��ʮԪN3, 20);
	DefineLangVarInt(ʮ��ԪN3, 15);
	DefineLangVarInt(ʵ��Ǯ��N2, 880);
	ColPrintf(PrintfCol::����, Lang("P79 ���� ����ͬ�����跨"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���༶����50��Ʊ����15һ�ŵģ���20Ԫһ�ŵģ���Ʊ����880Ԫ���ʸ��м���"));
	DefineLangVarInt(���ȫ�Ƕ�ʮN1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ȫ�Ƕ�ʮN1 ���ȫ�Ƕ�ʮN1=Ʊ����N2*��ʮԪN3"));
	���ȫ�Ƕ�ʮN1 = Ʊ����N2 * ��ʮԪN3;
	���ȫ�Ƕ�ʮN1.PrintProcessLog(1);
	DefineLangVarInt(��ʵ��Ǯ����N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ʵ��Ǯ����N4 ��ʵ��Ǯ����N4=���ȫ�Ƕ�ʮN1-ʵ��Ǯ��N2"));
	��ʵ��Ǯ����N4 = ���ȫ�Ƕ�ʮN1 - ʵ��Ǯ��N2;
	��ʵ��Ǯ����N4.PrintProcessLog(2);
	DefineLangVarInt(ʮ�������N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ʮ�������N5 ʮ�������N5=��ʵ��Ǯ����N4/(��ʮԪN3-ʮ��ԪN3)"));
	ʮ�������N5 = ��ʵ��Ǯ����N4 / (��ʮԪN3 - ʮ��ԪN3);
	ʮ�������N5.PrintProcessLog(3);
	DefineLangVarInt(��ʮ������N6, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����ʮ������N6 ��ʮ������N6=Ʊ����N2-ʮ�������N5"));
	��ʮ������N6 = Ʊ����N2 - ʮ�������N5;
	��ʮ������N6.PrintProcessLog(4);
}
void P79_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Example One Variation Practice Chicken Rabbit Same Cage Equation Method","P79 ��һ��ʽ��ϰ ����ͬ�����̷�"},
		{"Title: The class bought 50 tickets, with 15 tickets each and 20 yuan each. The total ticket price is 880 yuan. How many tickets do each have",
		"��Ŀ���༶����50��Ʊ����15һ�ŵģ���20Ԫһ�ŵģ���Ʊ����880Ԫ���ʸ��м���"},
		{"If the quantity of fifteen yuan is x, then the quantity of twenty yuan is (100-x) only",
		"��ʮ��Ԫ������Ϊx�����ʮԪ������Ϊ(100-x)ֻ"},
		{"1. List the equation S1 15x+20 (50-x)=880",
		"1.�г�ʽ��S1 15x+20(50-x)=880"},
		{"2. Expand equation S1 to obtain S2 15x+1000-20x=880",
		"2.չ��ʽ��S1�õ�S2 15x+1000-20x=880"},
		{"3. Simplify S2 to obtain S3-5x+1000=880",
		"3.����S2�õ�S3 -5x+1000=880"},
		{"4. Simplify S3 to obtain S4-5x=880-1000=-120",
		"4.����S3�õ�S4 -5x=880-1000=-120"},
		{"5. Simplify S4 to obtain S5- x=-24=>x=24",
		"5.����S4�õ�S5 -x=-24=>x=24"},
		{"6. According to S5, the number of twenty yuan pieces is S6 50-24=26",
		"6.����S5�õ���ʮԪֻ��S6 50-24=26"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P79 ��һ��ʽ��ϰ ����ͬ�����̷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���༶����50��Ʊ����15һ�ŵģ���20Ԫһ�ŵģ���Ʊ����880Ԫ���ʸ��м���"));
	ColPrintf(PrintfCol::����, Lang("��ʮ��Ԫ������Ϊx�����ʮԪ������Ϊ(100-x)ֻ"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 15x+20(50-x)=880"));
	ColPrintf(PrintfCol::����, Lang("2.չ��ʽ��S1�õ�S2 15x+1000-20x=880"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 -5x+1000=880"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 -5x=880-1000=-120"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�õ�S5 -x=-24=>x=24"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ���ʮԪ��ֻ��S6 50-24=26"));
}
void P79_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study of Two Chickens and Rabbits in the Same Cage","P79 ���� ����ͬ�����跨"},
		{"Title: Sika deer and ostrich have a total of 208 legs, with ostriches having 20 more legs than Sika deer. How many Sika deer and ostriches each have?",
		"��Ŀ��÷��¹������������208ֻ�������÷��¹��20ֻ��÷��¹�����������ֻ?"},
		{"1. Calculate if the number of legs is the same as that of the spotted deer N1. If the number of legs is the same as that of the spotted deer N1=actual number of legs N1- (the number of ostriches more than spotted deer N3 * ostrich legs N4)",
		"1,�������������÷��¹��ͬ����N1 ���������÷��¹��ͬ����N1=ʵ�ʽ���N1-(�����÷��¹���ֻ��N3*��������N4)"},
		{"2. Calculate the number of legs and N5. The number of legs and N5=the number of ostrich legs N4+the number of sika deer legs N5",
		"2.���������N5 ������N5=��������N4+÷��¹����N5"},
		{"3. Calculate the number of sika deer N6=if the number is the same as that of sika deer, the number of legs N1 divided by the number of legs and N5",
		"3.����÷��¹ֻ��N6 ÷��¹ֻ��N6=���������÷��¹��ͬ����N1/������N5"},
		{"4. Calculate the number of ostriches N7=actual number of feet N1- number of sika deer N6",
		"4.��������ֻ��N7 ����ֻ��N7 = ÷��¹ֻ��N6 - �����÷��¹���ֻ��N3"},
		//������
		{"ActualnumberoffeetN1","ʵ�ʽ���N1"},
		{"OstrichlegcountN4","��������N4"},
		{"TherearemoreostrichesthansikadeerN3","�����÷��¹���ֻ��N3"},
		{"SikadeerlegcountN5","÷��¹����N5"},
		{"Ifthenumberoflegsisthesameasthatofthespotteddeer,N1","���������÷��¹��ͬ����N1"},
		{"FootcountandN5","������N5"},
		{"NumberofspotteddeerN6","÷��¹ֻ��N6"},
		{"NumberofostrichesN7","����ֻ��N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ʵ�ʽ���N1, 208);
	DefineLangVarInt(��������N4, 2);
	DefineLangVarInt(�����÷��¹���ֻ��N3, 20);
	DefineLangVarInt(÷��¹����N5, 4);
	ColPrintf(PrintfCol::����, Lang("P79 ���� ����ͬ�����跨"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��÷��¹������������208ֻ�������÷��¹��20ֻ��÷��¹�����������ֻ?"));
	DefineLangVarInt(���������÷��¹��ͬ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1,�������������÷��¹��ͬ����N1 ���������÷��¹��ͬ����N1=ʵ�ʽ���N1-(�����÷��¹���ֻ��N3*��������N4)"));
	���������÷��¹��ͬ����N1 = ʵ�ʽ���N1 - (�����÷��¹���ֻ��N3 * ��������N4);
	���������÷��¹��ͬ����N1.PrintProcessLog(1);
	DefineLangVarInt(������N5, 0);
	ColPrintf(PrintfCol::����, Lang("2.���������N5 ������N5=��������N4+÷��¹����N5"));
	������N5 = ��������N4 + ÷��¹����N5;
	������N5.PrintProcessLog(2);
	DefineLangVarInt(÷��¹ֻ��N6, 0);
	ColPrintf(PrintfCol::����, Lang("3.����÷��¹ֻ��N6 ÷��¹ֻ��N6=���������÷��¹��ͬ����N1/������N5"));
	÷��¹ֻ��N6 = ���������÷��¹��ͬ����N1 / ������N5;
	÷��¹ֻ��N6.PrintProcessLog(3);
	DefineLangVarInt(����ֻ��N7, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������ֻ��N7 ����ֻ��N7 = ÷��¹ֻ��N6 - �����÷��¹���ֻ��N3"));
	����ֻ��N7 = ÷��¹ֻ��N6 - �����÷��¹���ֻ��N3;
	����ֻ��N7.PrintProcessLog(4);
}
void P79_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 cases of two chickens and rabbits in the same cage equation method","P79 ���� ����ͬ�����̷�"},
		{"Title: Sika deer and ostrich have a total of 208 legs, with ostriches having 20 more legs than Sika deer. How many Sika deer and ostriches each have?",
		"��Ŀ��÷��¹������������208ֻ�������÷��¹��20ֻ��÷��¹�����������ֻ?"},
		{"If the quantity of fifteen yuan is x, then the quantity of twenty yuan is (100-x) only",
		"��÷��¹������Ϊx�������������Ϊ(x+20)ֻ"},
		{"1. List the equation S1 4x+2 (x+20)=208",
		"1.�г�ʽ��S1 4x+2(x+20)=208"},
		{"2. Expand equation S1 to obtain S2 4x+2x+40=208",
		"2.չ��ʽ��S1�õ�S2 4x+2x+40=208"},
		{"3. Simplify S2 to obtain S3 4x+2x=208-40=168",
		"3.����S2�õ�S3 4x+2x=208-40=168"},
		{"4. Simplify S3 to obtain S4 6x=168",
		"4.����S3�õ�S4 6x=168"},
		{"5. Simplify S4 to obtain S5 x=28",
		"5.����S4�õ�S5 x=28"},
		{"6. According to S5, the number of twenty yuan pieces is S6 28+20=48",
		"6.����S5�õ�����ֻ��S6 28+20=48"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P79 ���� ����ͬ�����̷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��÷��¹������������208ֻ�������÷��¹��20ֻ��÷��¹�����������ֻ?"));
	ColPrintf(PrintfCol::����, Lang("��÷��¹������Ϊx�������������Ϊ(x+20)ֻ"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 4x+2(x+20)=208"));
	ColPrintf(PrintfCol::����, Lang("2.չ��ʽ��S1�õ�S2 4x+2x+40=208"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 4x+2x=208-40=168"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 6x=168"));
	ColPrintf(PrintfCol::����, Lang("5.����S4�õ�S5 x=28"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ�����ֻ��S6 28+20=48"));
}
void P79_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study on the Practice of Two Variations of Chicken and Rabbit in the Same Cage","P79 ������ʽ��ϰ ����ͬ�����跨"},
		{"Title: Roosters and rabbits in the same cage, there are a total of 107 chickens and rabbits, and the number of legs of rabbits is 56 more than that of chickens. How many chickens and rabbits are there in each cage",
		"��Ŀ������ͬ�������ù���107ֻ���õĽ����ȼ��Ľ�����56ֻ�����ø��ж���ֻ"},
		{"1. Calculate if all are rabbit feet N1=rabbit legs N2 * chicken and rabbit N3",
		"1.��������������ӽ���N1 ����������ӽ���N1=��������N2*��������N3"},
		{"2. Calculate the difference between the actual and calculated values N2 and N2=if both are the number of rabbit legs N1- the number of legs that rabbits have more than chickens N2",
		"2.������ʵ�ʲ�N2 ��ʵ�ʲ�N2=����������ӽ���N1-�ñȼ��������N2"},
		{"3. Calculate the number of chickens N3. The number of chickens N3=the difference from the actual N2/(the number of rabbit feet N3+the number of chicken feet N4)",
		"3.���㼦������N3 ��������N3=��ʵ�ʲ�N2/(��������N2+���Ľ���N4)"},
		{"4. Calculate the number of rabbits N4. The number of rabbits N4=the number of chickens N3- the number of chickens N3",
		"4.�����õ�����N4 �õ�����N4=��������N3-��������N3"},
		//������
		{"RabbitlegcountN2","��������N2"},
		{"NumberofchickensandrabbitsN3","��������N3"},
		{"RabbithasmorelegsthanchickenN2","�ñȼ��������N2"},
		{"Chicken'sFootCountN4","���Ľ���N4"},
		{"IftheyareallrabbitfeetN1","����������ӽ���N1"},
		{"DifferencefromactualN2","��ʵ�ʲ�N2"},
		{"ThenumberofchickensN3","��������N3"},
		{"ThenumberofrabbitsN4","�õ�����N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��������N2, 4);
	DefineLangVarInt(��������N3, 107);
	DefineLangVarInt(�ñȼ��������N2, 56);
	DefineLangVarInt(���Ľ���N4, 2);
	ColPrintf(PrintfCol::����, Lang("P79 ������ʽ��ϰ ����ͬ�����跨"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������ͬ�������ù���107ֻ���õĽ����ȼ��Ľ�����56ֻ�����ø��ж���ֻ"));
	DefineLangVarInt(����������ӽ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������������ӽ���N1 ����������ӽ���N1=��������N2*��������N3"));
	����������ӽ���N1 = ��������N2 * ��������N3;
	����������ӽ���N1.PrintProcessLog(1);
	DefineLangVarInt(��ʵ�ʲ�N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ʵ�ʲ�N2 ��ʵ�ʲ�N2=����������ӽ���N1-�ñȼ��������N2"));
	��ʵ�ʲ�N2 = ����������ӽ���N1 - �ñȼ��������N2;
	��ʵ�ʲ�N2.PrintProcessLog(2);
	DefineLangVarInt(��������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㼦������N3 ��������N3=��ʵ�ʲ�N2/(��������N2+���Ľ���N4)"));
	��������N3 = ��ʵ�ʲ�N2 / (��������N2 + ���Ľ���N4);
	��������N3.PrintProcessLog(3);
	DefineLangVarInt(�õ�����N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����õ�����N4 �õ�����N4=��������N3-��������N3"));
	�õ�����N4 = ��������N3 - ��������N3;
	�õ�����N4.PrintProcessLog(4);
}
void P79_4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study on the Two Variation Exercise of Chicken Rabbit Same Cage Equation Method","P79 ������ʽ��ϰ ����ͬ�����̷�"},
		{"Title: Roosters and rabbits in the same cage, there are a total of 107 chickens and rabbits, and the number of legs of rabbits is 56 more than that of chickens. How many chickens and rabbits are there in each cage",
		"��Ŀ������ͬ�������ù���107ֻ���õĽ����ȼ��Ľ�����56ֻ�����ø��ж���ֻ"},
		{"If the quantity of fifteen yuan is x, then the quantity of twenty yuan is (100-x) only",
		"���õ�����Ϊx���򼦵�����Ϊyֻ"},
		{"1. List the equation S1 x+y=107",
		"1.�г�ʽ��S1 x+y=107"},
		{"2. List equation S2 4x-2y=56",
		"2.�г�ʽ��S2 4x-2y=56"},
		{"3. Simplify S2 to obtain S3 (4x-2y)/2=(56)/2",
		"3.����S2�õ�S3 (4x-2y)/2=(56)/2"},
		{"4. Simplify S3 to obtain S4 2x-y=28",
		"4.����S3�õ�S4 2x-y=28"},
		{"5. Combining S4 and S1, obtain S5 x+y+2x-y=107+28=135",
		"5.���S4��S1�õ�S5 x+y+2x-y=107+28=135"},
		{"6. Simplify S5 to obtain S6 x+2x=135=>3x=135=>x=45",
		"6.����S5�õ�S6 x+2x=135=>3x=135=>x=45"},
		{"7. Insert S6 into S1 to obtain S7 45+y=107=>y=62",
		"7.��S6����S1�õ�S7 45+y=107=>y=62"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P79 ������ʽ��ϰ ����ͬ�����̷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������ͬ�������ù���107ֻ���õĽ����ȼ��Ľ�����56ֻ�����ø��ж���ֻ"));
	ColPrintf(PrintfCol::����, Lang("���õ�����Ϊx���򼦵�����Ϊyֻ"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 x+y=107"));
	ColPrintf(PrintfCol::����, Lang("2.�г�ʽ��S2 4x-2y=56"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 (4x-2y)/2=(56)/2"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 2x-y=28"));
	ColPrintf(PrintfCol::����, Lang("5.���S4��S1�õ�S5 x+y+2x-y=107+28=135"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ�S6 x+2x=135=>3x=135=>x=45"));
	ColPrintf(PrintfCol::����, Lang("7.��S6����S1�õ�S7 45+y=107=>y=62"));
}
void P79()
{
	P79_1();
	ColPrintf(PrintfCol::����, "");
	P79_1_2();
	ColPrintf(PrintfCol::����, "");
	P79_2();
	ColPrintf(PrintfCol::����, "");
	P79_2_2();
	ColPrintf(PrintfCol::����, "");
	P79_3();
	ColPrintf(PrintfCol::����, "");
	P79_3_2();
	ColPrintf(PrintfCol::����, "");
	P79_4();
	ColPrintf(PrintfCol::����, "");
	P79_4_2();
	ColPrintf(PrintfCol::����, "");
}
void P79_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P79();
	Lang.SetCurLanguage(LanguageLib::English);
	P79();
	ColPrintf(PrintfCol::����, "");

}