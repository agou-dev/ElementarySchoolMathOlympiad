#pragma once
void P84_1()
{
	LanguageLib::LanguageTableT Language = { 
		{"P84 Case 1: Cattle grazing problem","P84 ��һ ţ�Բ�����"},
		{"Title: There is a pasture in Qingqing with a lot of grass. 27 cows are grazed and the grass is eaten up in 6 weeks. 23 cows are grazed and the grass is eaten up in 9 weeks. If 21 cows are grazed, the grass will be eaten up in a few days.",
		"��Ŀ��������һ���������������кܶ�ݣ���ţ27ֻ��6�ܰѲݳԹ⣬��ţ23��9�ܳ��꣬�����21ţ�����ݼ�����ꡣ"},
		{"1. Calculate the number of grazing for 27 cows N1=27 cows N2 * 27 cows grazing time T1",
		"1.����ţ27ֻʳ����N1 ţ27ֻʳ����N1=ţ27ֻN2*ţ27ֻ�Բ�ʱ��T1"},
		{"2. Calculate the number of grazing for 23 cows N2=23 cows N2 * 23 cows grazing time T2",
		"2.����ţ23ֻʳ����N2 ţ23ֻʳ����N2=ţ23ֻN2*ţ23ֻ�Բ�ʱ��T2"},
		{"3. Calculate the rate of grass growth V1. The rate of grass growth V1 is calculated as (the number of grass fed by 27 cows N1- the number of grass fed by 23 cows N2) divided by (the grazing time of 27 cows T1- the grazing time of 23 cows T2)",
		"3.�����������ٶ�V1 �������ٶ�V1=(ţ27ֻʳ����N1-ţ23ֻʳ����N2)/(ţ27ֻ�Բ�ʱ��T1-ţ23ֻ�Բ�ʱ��T2)"},
		{"4. Calculate the original grass amount N3. The original grass amount N3 is equal to the number of 27 cows feeding on grass N1 divided by the grazing time T1 of 27 cows multiplied by the grass growth rate V1",
		"4.����ԭ�в���N3 ԭ�в���N3=ţ27ֻʳ����N1-(ţ27ֻ�Բ�ʱ��T1*�������ٶ�V1)"},
		{"5. Set 21 cows to be eaten in x days",
		"5.��21ͷţx�����"},
		{"1. List the equation S1 72+(15x)=21x",
		"1.�г�ʽ��S1 72+(15x)=21x"},
		{"2. Simplify S1 to obtain S2 21x-15x=72",
		"2.����S1�õ�S2 21x-15x=72"},
		{"3. Simplify S2 to obtain S3 6x=72",
		"3.����S2�õ�S3 6x=72"},
		{"4. Simplify S3 to obtain S4 x=12",
		"4.����S3�õ�S4 x=12"},
		//������
		{"27cowsN2","ţ27ֻN2"},
		{"27cowsgrazingtimeT1","ţ27ֻ�Բ�ʱ��T1"},
		{"23cowsN2","ţ23ֻN2"},
		{"23cowsgrazingtimeT2","ţ23ֻ�Բ�ʱ��T2"},
		{"27cowsfeedingongrassN1","ţ27ֻʳ����N1"},
		{"23herbivoresN2","ţ23ֻʳ����N2"},
		{"GrassgrowthrateV1","�������ٶ�V1"},
		{"OriginalgrassquantityN3","ԭ�в���N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ţ27ֻN2, 27);
	DefineLangVarInt(ţ27ֻ�Բ�ʱ��T1, 6);
	DefineLangVarInt(ţ23ֻN2, 23);
	DefineLangVarInt(ţ23ֻ�Բ�ʱ��T2, 9);
	ColPrintf(PrintfCol::����, Lang("P84 ��һ ţ�Բ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������һ���������������кܶ�ݣ���ţ27ֻ��6�ܰѲݳԹ⣬��ţ23��9�ܳ��꣬�����21ţ�����ݼ�����ꡣ"));
	DefineLangVarInt(ţ27ֻʳ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ţ27ֻʳ����N1 ţ27ֻʳ����N1=ţ27ֻN2*ţ27ֻ�Բ�ʱ��T1"));
	ţ27ֻʳ����N1 = ţ27ֻN2 * ţ27ֻ�Բ�ʱ��T1;
	ţ27ֻʳ����N1.PrintProcessLog(1);
	DefineLangVarInt(ţ23ֻʳ����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ţ23ֻʳ����N2 ţ23ֻʳ����N2=ţ23ֻN2*ţ23ֻ�Բ�ʱ��T2"));
	ţ23ֻʳ����N2 = ţ23ֻN2 * ţ23ֻ�Բ�ʱ��T2;
	ţ23ֻʳ����N2.PrintProcessLog(2);
	DefineLangVarInt(�������ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����������ٶ�V1 �������ٶ�V1=(ţ27ֻʳ����N1-ţ23ֻʳ����N2)/(ţ27ֻ�Բ�ʱ��T1-ţ23ֻ�Բ�ʱ��T2)"));
	�������ٶ�V1 = (ţ27ֻʳ����N1 - ţ23ֻʳ����N2) / (ţ27ֻ�Բ�ʱ��T1 - ţ23ֻ�Բ�ʱ��T2);
	�������ٶ�V1.PrintProcessLog(3);
	DefineLangVarInt(ԭ�в���N3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ԭ�в���N3 ԭ�в���N3=ţ27ֻʳ����N1-(ţ27ֻ�Բ�ʱ��T1*�������ٶ�V1)"));
	ԭ�в���N3 = ţ27ֻʳ����N1 - (ţ27ֻ�Բ�ʱ��T1 * �������ٶ�V1);
	ԭ�в���N3.PrintProcessLog(4);
	ColPrintf(PrintfCol::����, Lang("5.��21ͷţx�����"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 72+(15x)=21x"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 21x-15x=72"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 6x=72"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 x=12"));
}
void P84_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P84 Example One Variation Practice on Cattle Eating Grass Problem","P84 ��һ��ʽ��ϰ ţ�Բ�����"},
		{"Title: There is a lot of grass in the pasture. If you herd 10 cows, it will take 20 days to finish the grass. If you herd 15 cows, it will take 10 days to finish the grass. If you herd 25 cows, it will take a few days to finish the grass.",
		"��Ŀ���������кܶ�ݣ���ţ10ֻ��20��ѲݳԹ⣬��ţ15��10����꣬�����25ţ�����ݼ�����ꡣ"},
		{"1. Calculate the number of grazing for 10 cows N1=10 cows N2 * 10 cows grazing time T1",
		"1.����ţ10ֻʳ����N1 ţ10ֻʳ����N1=ţ10ֻN2*ţ10ֻ�Բ�ʱ��T1"},
		{"2. Calculate the number of grazing for 15 cows N2=15 cows N2 * 15 cows grazing time T2",
		"2.����ţ15ֻʳ����N2 ţ15ֻʳ����N2=ţ15ֻN2*ţ15ֻ�Բ�ʱ��T2"},
		{"3. Calculate the rate of grass growth V1. The rate of grass growth V1 is calculated as (the number of grass fed by 10 cows N1- the number of grass fed by 15 cows N2) divided by (the grazing time of 10 cows T1- the grazing time of 15 cows T2)",
		"3.�����������ٶ�V1 �������ٶ�V1=(ţ10ֻʳ����N1-ţ15ֻʳ����N2)/(ţ10ֻ�Բ�ʱ��T1-ţ15ֻ�Բ�ʱ��T2)"},
		{"4. Calculate the original grass amount N3. The original grass amount N3 is equal to the number of 10 cows feeding on grass N1 divided by the grazing time T1 of 10 cows multiplied by the grass growth rate V1",
		"4.����ԭ�в���N3 ԭ�в���N3=ţ10ֻʳ����N1-(ţ10ֻ�Բ�ʱ��T1*�������ٶ�V1)"},
		{"5. Set 25 cows to be eaten in x days",
		"5.��25ͷţx�����"},
		{"1. List the equation S1 100+(5x)=25x",
		"1.�г�ʽ��S1 100+(5x)=25x"},
		{"2. Simplify S1 to obtain S2 25x-5x=100",
		"2.����S1�õ�S2 25x-5x=100"},
		{"3. Simplify S2 to obtain S3 20x=100",
		"3.����S2�õ�S3 20x=100"},
		{"4. Simplify S3 to obtain S4 x=5",
		"4.����S3�õ�S4 x=5"},
		//������
		{"10cowsN2","ţ10ֻN2"},
		{"10cowsgrazingtimeT1","ţ10ֻ�Բ�ʱ��T1"},
		{"15cowsN2","ţ15ֻN2"},
		{"15cowsgrazingtimeT2","ţ15ֻ�Բ�ʱ��T2"},
		{"10cowsfeedingongrassN1","ţ10ֻʳ����N1"},
		{"15herbivoresN2","ţ15ֻʳ����N2"},
		{"GrassgrowthrateV1","�������ٶ�V1"},
		{"OriginalgrassquantityN3","ԭ�в���N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ţ10ֻN2, 10);
	DefineLangVarInt(ţ10ֻ�Բ�ʱ��T1, 20);
	DefineLangVarInt(ţ15ֻN2, 15);
	DefineLangVarInt(ţ15ֻ�Բ�ʱ��T2, 10);
	ColPrintf(PrintfCol::����, Lang("P84 ��һ ţ�Բ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������кܶ�ݣ���ţ10ֻ��20��ѲݳԹ⣬��ţ15��10����꣬�����25ţ�����ݼ�����ꡣ"));
	DefineLangVarInt(ţ10ֻʳ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ţ10ֻʳ����N1 ţ10ֻʳ����N1=ţ10ֻN2*ţ10ֻ�Բ�ʱ��T1"));
	ţ10ֻʳ����N1 = ţ10ֻN2 * ţ10ֻ�Բ�ʱ��T1;
	ţ10ֻʳ����N1.PrintProcessLog(1);
	DefineLangVarInt(ţ15ֻʳ����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ţ15ֻʳ����N2 ţ15ֻʳ����N2=ţ15ֻN2*ţ15ֻ�Բ�ʱ��T2"));
	ţ15ֻʳ����N2 = ţ15ֻN2 * ţ15ֻ�Բ�ʱ��T2;
	ţ15ֻʳ����N2.PrintProcessLog(2);
	DefineLangVarInt(�������ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����������ٶ�V1 �������ٶ�V1=(ţ10ֻʳ����N1-ţ15ֻʳ����N2)/(ţ10ֻ�Բ�ʱ��T1-ţ15ֻ�Բ�ʱ��T2)"));
	�������ٶ�V1 = (ţ10ֻʳ����N1 - ţ15ֻʳ����N2) / (ţ10ֻ�Բ�ʱ��T1 - ţ15ֻ�Բ�ʱ��T2);
	�������ٶ�V1.PrintProcessLog(3);
	DefineLangVarInt(ԭ�в���N3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ԭ�в���N3 ԭ�в���N3=ţ10ֻʳ����N1-(ţ10ֻ�Բ�ʱ��T1*�������ٶ�V1)"));
	ԭ�в���N3 = ţ10ֻʳ����N1 - (ţ10ֻ�Բ�ʱ��T1 * �������ٶ�V1);
	ԭ�в���N3.PrintProcessLog(4);
	ColPrintf(PrintfCol::����, Lang("5.��25ͷţx�����"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 100+(5x)=25x"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 25x-5x=100"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 20x=100"));
	ColPrintf(PrintfCol::����, Lang("4.����S3�õ�S4 x=5"));
}
void P84_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P84 Case 2: Cattle grazing problem","P84 ���� ţ�Բ�����"},
		{"Title: When a ship discovers a leak, some water has already entered the ship at a constant speed. If 6 people are sent to clean the water outside, it will take 18 hours. If 10 people are sent, it will take 6 hours. If 6 people are sent to clean the water in the first 3 hours, how many more hours will it take to send another 10 people?",
		"��Ŀ��һֻ������©ˮʱ���ѽ���һЩˮ��ˮ���ٽ��봬�У������6����������ˮ��Ҫ18Сʱ�����10���ˣ�Ҫ6Сʱ�����ǰ3��Сʱ6����ˮ����������10���˻�Ҫ���ٸ�Сʱ?"},
		{"1. Calculate the amount of water spent by ten people N1=ten people N2 * ten people spend time T1",
		"1.����ʮ����ˮ��N1 ʮ����ˮ��N1=ʮ��N2*ʮ����ˮ��Ҫʱ��T1"},
		{"2. Calculate the amount of water collected by six people N2=the amount of water collected by six people N4 * the time required for six people to collect water T2",
		"2.����������ˮ��N2 ������ˮ��N2=����N4*������ˮ��Ҫʱ��T2"},
		{"3. Calculate the inflow velocity V1. The inflow velocity V1 is calculated as (the amount of water collected by six people N2 minus the amount of water collected by ten people N1) divided by (the time required for six people to collect water T2 minus the time required for ten people to collect water T1)",
		"3.�����ˮ�ٶ�V1 ��ˮ�ٶ�V1=(������ˮ��N2-ʮ����ˮ��N1)/(������ˮ��Ҫʱ��T2-ʮ����ˮ��Ҫʱ��T1)"},
		{"4. Calculate the original water volume N6, which is equal to the amount of water collected by ten people N1 divided by (the time required for ten people to collect water T1 multiplied by the inflow velocity V1)",
		"4.����ԭ�е�ˮ��N6 ԭ�е�ˮ��N6=ʮ����ˮ��N1-(ʮ����ˮ��Ҫʱ��T1*��ˮ�ٶ�V1)"},
		{"5. Calculate the amount N7 of six people who first washed water and then washed water. The amount N7 of six people who washed water first and then=(original water amount N6+(water inlet speed V1 * time T1 of first washing) - (time T1 of first washing * time N4 of six people)",
		"5.������������ˮ�����N7 ��������ˮ�����N7=(ԭ�е�ˮ��N6+(��ˮ�ٶ�V1*���Ե�ʱ��T1))-(���Ե�ʱ��T1*����N4)"},
		{"6. Calculate the amount of water collected by sixteen people N8=the amount of water collected by six people first and then N7/(ten people N2+six people N4- inflow velocity V1)",
		"6.����ʮ������ˮ��N8 ʮ������ˮ��N8=��������ˮ�����N7/(ʮ��N2+����N4-��ˮ�ٶ�V1)"},
		//������
		{"TenpeopleN2","ʮ��N2"},
		{"TenpeopleneedtimetosearchforwaterT1","ʮ����ˮ��Ҫʱ��T1"},
		{"SixpeopleN4","����N4"},
		{"SixpeopleneedtimetosearchforwaterT2","������ˮ��Ҫʱ��T2"},
		{"TimeT1forfirstshopping","���Ե�ʱ��T1"},
		{"Tenpeople'swaterconsumptionN1","ʮ����ˮ��N1"},
		{"SixpeoplewashingwaterN2","������ˮ��N2"},
		{"InletvelocityV1","��ˮ�ٶ�V1"},
		{"TheoriginalwatervolumeN6","ԭ�е�ˮ��N6"},
		{"TheamountofwatercollectedbysixpeoplefirstisN7","��������ˮ�����N7"},
		{"SixteenpeopleshoppingforwaterN8","ʮ������ˮ��N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarFloat(ʮ��N2, 10);
	DefineLangVarFloat(ʮ����ˮ��Ҫʱ��T1, 6);
	DefineLangVarFloat(����N4, 6);
	DefineLangVarFloat(������ˮ��Ҫʱ��T2, 18);
	DefineLangVarFloat(���Ե�ʱ��T1, 3);
	ColPrintf(PrintfCol::����, Lang("P84 ���� ţ�Բ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һֻ������©ˮʱ���ѽ���һЩˮ��ˮ���ٽ��봬�У������6����������ˮ��Ҫ18Сʱ�����10���ˣ�Ҫ6Сʱ�����ǰ3��Сʱ6����ˮ����������10���˻�Ҫ���ٸ�Сʱ?"));
	DefineLangVarFloat(ʮ����ˮ��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ʮ����ˮ��N1 ʮ����ˮ��N1=ʮ��N2*ʮ����ˮ��Ҫʱ��T1"));
	ʮ����ˮ��N1 = ʮ��N2 * ʮ����ˮ��Ҫʱ��T1;
	ʮ����ˮ��N1.PrintProcessLog(1);
	DefineLangVarFloat(������ˮ��N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����������ˮ��N2 ������ˮ��N2=����N4*������ˮ��Ҫʱ��T2"));
	������ˮ��N2 = ����N4 * ������ˮ��Ҫʱ��T2;
	������ˮ��N2.PrintProcessLog(2);
	DefineLangVarFloat(��ˮ�ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ˮ�ٶ�V1 ��ˮ�ٶ�V1=(������ˮ��N2-ʮ����ˮ��N1)/(������ˮ��Ҫʱ��T2-ʮ����ˮ��Ҫʱ��T1)"));
	��ˮ�ٶ�V1 = (������ˮ��N2 - ʮ����ˮ��N1) / (������ˮ��Ҫʱ��T2 - ʮ����ˮ��Ҫʱ��T1);
	��ˮ�ٶ�V1.PrintProcessLog(3);
	DefineLangVarFloat(ԭ�е�ˮ��N6, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ԭ�е�ˮ��N6 ԭ�е�ˮ��N6=ʮ����ˮ��N1-(ʮ����ˮ��Ҫʱ��T1*��ˮ�ٶ�V1)"));
	ԭ�е�ˮ��N6 = ʮ����ˮ��N1 - (ʮ����ˮ��Ҫʱ��T1 * ��ˮ�ٶ�V1);
	ԭ�е�ˮ��N6.PrintProcessLog(4);
	DefineLangVarFloat(��������ˮ�����N7, 0);
	ColPrintf(PrintfCol::����, Lang("5.������������ˮ�����N7 ��������ˮ�����N7=(ԭ�е�ˮ��N6+(��ˮ�ٶ�V1*���Ե�ʱ��T1))-(���Ե�ʱ��T1*����N4)"));
	��������ˮ�����N7 = (ԭ�е�ˮ��N6 + (��ˮ�ٶ�V1 * ���Ե�ʱ��T1)) - (���Ե�ʱ��T1 * ����N4);
	��������ˮ�����N7.PrintProcessLog(5);
	DefineLangVarFloat(ʮ������ˮ��N8, 0);
	ColPrintf(PrintfCol::����, Lang("6.����ʮ������ˮ��N8 ʮ������ˮ��N8=��������ˮ�����N7/(ʮ��N2+����N4-��ˮ�ٶ�V1)"));
	ʮ������ˮ��N8 = ��������ˮ�����N7 / (ʮ��N2 + ����N4 - ��ˮ�ٶ�V1);
	ʮ������ˮ��N8.PrintProcessLog(5);
}
void P84_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P84 Cases of Three Cattle Eating Grass Problem","P84 ���� ţ�Բ�����"},
		{"Title: Before ticket checking at the station, there are several passengers waiting. It takes 30 minutes for 4 ticket checking machines, 20 minutes for 5 ticket checking machines, and how many minutes for 7 ticket checking machines?",
		"��Ŀ����վ��Ʊǰ�����������˿͵ȴ���4����Ʊ��Ҫ30���ӣ�5����Ʊ��Ҫ20���ӣ�7����Ʊ��Ҫ���ٷ���?"},
		{"1. Calculate the processing quantity N1 of the five ticket checking machines. The processing quantity N1 of the five ticket checking machines is equal to the N2 of the five ticket checking machines multiplied by the time T1 of the five ticket checking machines",
		"1.�������Ʊ����������N1 ���Ʊ����������N1=���Ʊ��N2*���Ʊ��ʱ��T1"},
		{"2. Calculate the processing quantity N1 of the four ticket checking machines. The processing quantity N1 of the four ticket checking machines is equal to the four ticket checking machines N2 multiplied by the four ticket checking machine time T1",
		"2.�����ļ�Ʊ����������N1 �ļ�Ʊ����������N1=�ļ�Ʊ��N2*�ļ�Ʊ��ʱ��T1"},
		{"3. Calculate the entry speed V1. Entry speed V1=(number of ticket machines processed by four ticket machines N1- number of ticket machines processed by five ticket machines N1)/(time of four ticket machines T1- time of five ticket machines T1)",
		"3.��������ٶ�V1 �����ٶ�V1=(�ļ�Ʊ����������N1-���Ʊ����������N1)/(�ļ�Ʊ��ʱ��T1-���Ʊ��ʱ��T1)"},
		{"4. Calculate the original number of people N6=Five ticket checking machine processing quantity N1- (entry speed V1 * Five ticket checking machine time T1)",
		"4.����ԭ������N6 ԭ������N6=���Ʊ����������N1-(�����ٶ�V1*���Ʊ��ʱ��T1)"},
		{"5. Calculation requires time T2=original number of people N6/(seven ticket checking machines N2- entry speed V1)",
		"5.������Ҫʱ��T2 ��Ҫʱ��T2=ԭ������N6/(�߼�Ʊ��N2-�����ٶ�V1)"},
		//������
		{"FiveticketcheckingmachinesN2","���Ʊ��N2"},
		{"FiveticketcheckingmachinetimeT1","���Ʊ��ʱ��T1"},
		{"FourticketcheckingmachinesN2","�ļ�Ʊ��N2"},
		{"TicketcheckingmachinetimeT1","�ļ�Ʊ��ʱ��T1"},
		{"SeventicketcheckingmachineN2","�߼�Ʊ��N2"},
		{"NumberofticketcheckingmachinesprocessedN1","���Ʊ����������N1"},
		{"NumberofticketcheckingmachinesprocessedN1","�ļ�Ʊ����������N1"},
		{"EnteringspeedV1","�����ٶ�V1"},
		{"OriginalnumberN6","ԭ������N6"},
		{"TimerequiredT2","��Ҫʱ��T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarFloat(���Ʊ��N2, 5);
	DefineLangVarFloat(���Ʊ��ʱ��T1, 20);
	DefineLangVarFloat(�ļ�Ʊ��N2, 4);
	DefineLangVarFloat(�ļ�Ʊ��ʱ��T1, 30);
	DefineLangVarFloat(�߼�Ʊ��N2, 7);
	ColPrintf(PrintfCol::����, Lang("P84 ���� ţ�Բ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����վ��Ʊǰ�����������˿͵ȴ���4����Ʊ��Ҫ30���ӣ�5����Ʊ��Ҫ20���ӣ�7����Ʊ��Ҫ���ٷ���?"));
	DefineLangVarFloat(���Ʊ����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������Ʊ����������N1 ���Ʊ����������N1=���Ʊ��N2*���Ʊ��ʱ��T1"));
	���Ʊ����������N1 = ���Ʊ��N2 * ���Ʊ��ʱ��T1;
	���Ʊ����������N1.PrintProcessLog(1);
	DefineLangVarFloat(�ļ�Ʊ����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ļ�Ʊ����������N1 �ļ�Ʊ����������N1=�ļ�Ʊ��N2*�ļ�Ʊ��ʱ��T1"));
	�ļ�Ʊ����������N1 = �ļ�Ʊ��N2 * �ļ�Ʊ��ʱ��T1;
	�ļ�Ʊ����������N1.PrintProcessLog(2);
	DefineLangVarFloat(�����ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("3.��������ٶ�V1 �����ٶ�V1=(�ļ�Ʊ����������N1-���Ʊ����������N1)/(�ļ�Ʊ��ʱ��T1-���Ʊ��ʱ��T1)"));
	�����ٶ�V1 = (�ļ�Ʊ����������N1 - ���Ʊ����������N1) / (�ļ�Ʊ��ʱ��T1 - ���Ʊ��ʱ��T1);
	�����ٶ�V1.PrintProcessLog(3);
	DefineLangVarFloat(ԭ������N6, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ԭ������N6 ԭ������N6=���Ʊ����������N1-(�����ٶ�V1*���Ʊ��ʱ��T1)"));
	ԭ������N6 = ���Ʊ����������N1 - (�����ٶ�V1 * ���Ʊ��ʱ��T1);
	ԭ������N6.PrintProcessLog(4);
	DefineLangVarFloat(��Ҫʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("5.������Ҫʱ��T2 ��Ҫʱ��T2=ԭ������N6/(�߼�Ʊ��N2-�����ٶ�V1)"));
	��Ҫʱ��T2 = ԭ������N6 / (�߼�Ʊ��N2 - �����ٶ�V1);
	��Ҫʱ��T2.PrintProcessLog(5);
}
void P84()
{
	P84_1();
	ColPrintf(PrintfCol::����, "");
	P84_2();
	ColPrintf(PrintfCol::����, "");
	P84_3();
	ColPrintf(PrintfCol::����, "");
	P84_4();
	ColPrintf(PrintfCol::����, "");
	//P77_4();
	ColPrintf(PrintfCol::����, "");
	//P77_5();
	ColPrintf(PrintfCol::����, "");
}
void P84_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P84();
	Lang.SetCurLanguage(LanguageLib::English);
	P84();
	ColPrintf(PrintfCol::����, "");

}