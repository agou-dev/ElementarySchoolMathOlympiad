#pragma once
//���ĵ�����
void P17_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P17 case one average speed","P17��һ ƽ���ٶ�"},
		{"Title: The distance from A to B is 12 kilometers. The speed of pedestrians on a downhill slope is 6 kilometers. The distance from B to C is 8 kilometers.\nThe speed on a flat road is 4 kilometers. The distance from C to D is 4 kilometers. The speed on an uphill road is\n2 kilometers. What is the average speed?",
		"��Ŀ����A��B��·����12ǧ������·�˵��ٶ���6ǧ�ף���B��C��8ǧ��ƽ·�ٶ���4ǧ�ף���C��D��4ǧ������·�ٶ���2ǧ�ף���ƽ���ٶȣ�"},
		{"1. Calculate the time T1 used for downhill road=downhill road distance S1/downhill road speed V1",
		"1.��������·���õ�ʱ��T1 ����·���õ�ʱ��T1=����··��S1/����·�ٶ�V1"},
		{"2. Calculate the time T2 used for flat road=flat road distance S2/flat road speed V2",
		"2.����ƽ·���õ�ʱ��T2 ƽ·���õ�ʱ��T2=ƽ···��S2/ƽ·�ٶ�V2"},
		{"3. Calculate the time T3 for uphill road=uphill road distance S3/uphill road speed V3",
		"3.��������·���õ�ʱ��T3 ����·���õ�ʱ��T3=����···��S3/����·�ٶ�V3"},
		{"4. Calculate the total time T4, which is equal to the time T1 spent on the downhill road, the time T2 spent on the flat road, and the time T3 spent on the uphill road",
		"4.������ʱ��T4 ��ʱ��T4=����·���õ�ʱ��T1+ƽ·���õ�ʱ��T2+����·���õ�ʱ��T3"},
		{"5. Calculate the total distance S4. The total distance S4 is equal to the downhill road distance S1+the flat road distance S2+the uphill road distance S3",
		"5.������·��S4 ��·��S4=����··��S1+ƽ···��S2+����···��S3"},
		{"6. Calculate the average speed V4. The average speed V4 is equal to the total distance S4 divided by the total time T4",
		"6.����ƽ���ٶ�V4 ƽ���ٶ�V4=��·��S4/��ʱ��T4"},
		//������
		{"DownhillrouteS1","����··��S1"},
		{"DownhillspeedV1","����·�ٶ�V1"},
		{"FlatRouteS2","ƽ···��S2"},
		{"FlatroadspeedV2","ƽ·�ٶ�V2"},
		{"UpslopeRoadDistanceS3","����···��S3"},
		{"UphillspeedV3","����·�ٶ�V3"},
		{"TimeT1fordownhillroad","����·���õ�ʱ��T1"},
		{"TimeT2forflatroad","ƽ·���õ�ʱ��T2"},
		{"TimeT3foruphillroad","����·���õ�ʱ��T3"},
		{"TotaltimeT4","��ʱ��T4"},
		{"TotaldistanceS4","��·��S4"},
		{"AveragespeedV4","ƽ���ٶ�V4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(����··��S1, 12);
	DefineLangVarInt(����·�ٶ�V1, 6);
	DefineLangVarInt(ƽ···��S2, 8);
	DefineLangVarInt(ƽ·�ٶ�V2, 4);
	DefineLangVarInt(����···��S3, 4);
	DefineLangVarInt(����·�ٶ�V3, 2);
	ColPrintf(PrintfCol::����, Lang("P17��һ ƽ���ٶ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����A��B��·����12ǧ������·�˵��ٶ���6ǧ�ף���B��C��8ǧ��ƽ·�ٶ���4ǧ�ף���C��D��4ǧ������·�ٶ���2ǧ�ף���ƽ���ٶȣ�"));
	DefineLangVarInt(����·���õ�ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������·���õ�ʱ��T1 ����·���õ�ʱ��T1=����··��S1/����·�ٶ�V1"));
	����·���õ�ʱ��T1 = ����··��S1 / ����·�ٶ�V1;
	����·���õ�ʱ��T1.PrintProcessLog(1);
	DefineLangVarInt(ƽ·���õ�ʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ƽ·���õ�ʱ��T2 ƽ·���õ�ʱ��T2=ƽ···��S2/ƽ·�ٶ�V2"));
	ƽ·���õ�ʱ��T2 = ƽ···��S2 / ƽ·�ٶ�V2;
	ƽ·���õ�ʱ��T2.PrintProcessLog(2);
	DefineLangVarInt(����·���õ�ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("3.��������·���õ�ʱ��T3 ����·���õ�ʱ��T3=����···��S3/����·�ٶ�V3"));
	����·���õ�ʱ��T3 = ����···��S3 / ����·�ٶ�V3;
	����·���õ�ʱ��T3.PrintProcessLog(3);
	DefineLangVarInt(��ʱ��T4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ʱ��T4 ��ʱ��T4=����·���õ�ʱ��T1+ƽ·���õ�ʱ��T2+����·���õ�ʱ��T3"));
	��ʱ��T4 = ����·���õ�ʱ��T1 + ƽ·���õ�ʱ��T2 + ����·���õ�ʱ��T3;
	��ʱ��T4.PrintProcessLog(4);
	DefineLangVarInt(��·��S4, 0);
	ColPrintf(PrintfCol::����, Lang("5.������·��S4 ��·��S4=����··��S1+ƽ···��S2+����···��S3"));
	��·��S4 = ����··��S1 + ƽ···��S2 + ����···��S3;
	��·��S4.PrintProcessLog(5);
	DefineLangVarInt(ƽ���ٶ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("6.����ƽ���ٶ�V4 ƽ���ٶ�V4=��·��S4/��ʱ��T4"));
	ƽ���ٶ�V4 = ��·��S4 / ��ʱ��T4;
	ƽ���ٶ�V4.PrintProcessLog(6);
}
void P17_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P17 case 2 average speed","P17���� ƽ���ٶ�"},
		{"Title: What is the average speed of a motorcycle that travels 90 kilometers at a speed of 30 kilometers and then returns at a speed of 45 kilometers?",
		"��Ŀ��Ħ�г���30ǧ������90ǧ�ף�����45ǧ���ٶȷ��أ�������ƽ���ٶȣ�"},
		{"1. Calculate the total distance S1 of the motorcycle trip. The total distance S1 of the motorcycle trip is equal to the number of round trips N1 multiplied by the total distance S1",
		"1.����Ħ�г��е���·��S1 Ħ�г��е���·��S1=������N1*��·��S1"},
		{"2. Calculate the time T1 used in the past time. The time T1 used in the past time is equal to the total distance S1 divided by the forward speed V1",
		"2.������ʱ���õ�ʱ��T1 ��ʱ���õ�ʱ��T1=��·��S1/��ʱ�ٶ�V1"},
		{"3. Calculate the time T2 used for reverse time. The time T2 used for reverse time is equal to the total distance S1 divided by the reverse time speed V2",
		"3.���㷴ʱ���õ�ʱ��T2 ��ʱ���õ�ʱ��T2=��·��S1/��ʱ�ٶ�V2"},
		{"4. Calculate the total time T3, which is equal to the time T1 used in the past time and the time T2 used in the reverse time",
		"4.������ʱ��T3 ��ʱ��T3=��ʱ���õ�ʱ��T1+��ʱ���õ�ʱ��T2"},
		{"5. Calculate the average speed V3. The average speed V3 is equal to the total distance traveled by the motorcycle S1 divided by the total time T3",
		"5.����ƽ���ٶ�V3 ƽ���ٶ�V3=Ħ�г��е���·��S1/��ʱ��T3"},
		//������
		{"RoundtripnumberN1","������N1"},
		{"TotaldistanceS1","��·��S1"},
		{"ForwardspeedV1","��ʱ�ٶ�V1"},
		{"ReversevelocityV2","��ʱ�ٶ�V2"},
		{"ThetotaldistancetraveledbymotorcycleS1","Ħ�г��е���·��S1"},
		{"TimeT1usedinthepast","��ʱ���õ�ʱ��T1"},
		{"TimeT2usedforreversetime","��ʱ���õ�ʱ��T2"},
		{"TotaltimeT3","��ʱ��T3"},
		{"AveragespeedV3","ƽ���ٶ�V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(������N1, 2);
	DefineLangVarInt(��·��S1, 90);
	DefineLangVarInt(��ʱ�ٶ�V1, 30);
	DefineLangVarInt(��ʱ�ٶ�V2, 45);
	ColPrintf(PrintfCol::����, Lang("P17���� ƽ���ٶ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��Ħ�г���30ǧ������90ǧ�ף�����45ǧ���ٶȷ��أ�������ƽ���ٶȣ�"));
	DefineLangVarInt(Ħ�г��е���·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����Ħ�г��е���·��S1 Ħ�г��е���·��S1=������N1*��·��S1"));
	Ħ�г��е���·��S1 = ������N1 * ��·��S1;
	Ħ�г��е���·��S1.PrintProcessLog(1);
	DefineLangVarInt(��ʱ���õ�ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ʱ���õ�ʱ��T1 ��ʱ���õ�ʱ��T1=��·��S1/��ʱ�ٶ�V1"));
	��ʱ���õ�ʱ��T1 = ��·��S1 / ��ʱ�ٶ�V1;
	��ʱ���õ�ʱ��T1.PrintProcessLog(2);
	DefineLangVarInt(��ʱ���õ�ʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㷴ʱ���õ�ʱ��T2 ��ʱ���õ�ʱ��T2=��·��S1/��ʱ�ٶ�V2"));
	��ʱ���õ�ʱ��T2 = ��·��S1 / ��ʱ�ٶ�V2;
	��ʱ���õ�ʱ��T2.PrintProcessLog(3);
	DefineLangVarInt(��ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ʱ��T3 ��ʱ��T3=��ʱ���õ�ʱ��T1+��ʱ���õ�ʱ��T2"));
	��ʱ��T3 = ��ʱ���õ�ʱ��T1 + ��ʱ���õ�ʱ��T2;
	��ʱ��T3.PrintProcessLog(4);
	DefineLangVarInt(ƽ���ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("5.����ƽ���ٶ�V3 ƽ���ٶ�V3=Ħ�г��е���·��S1/��ʱ��T3"));
	ƽ���ٶ�V3 = Ħ�г��е���·��S1 / ��ʱ��T3;
	ƽ���ٶ�V3.PrintProcessLog(5);
}
void P17_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P17 case 3 average speed","P17���� ƽ���ٶ�"},
		{"Title: A car travels from point A to point B, which is 300 kilometers away. The average speed for the first 120 kilometers is\n40 kilometers. If you want to travel the entire distance at a speed of 50 kilometers, what speed should you travel the\nremaining distance at?",
		"��Ŀ��һ�������Ӽ׵ؿ���300ǧ�׵��ҵأ�ǰ120ǧ��ƽ���ٶ���40ǧ�ף���ʹȫ����50ǧ���ٶ���ʻ��ʣ�µ�·�������ʲô�ٶ���ʻ?"},
		{"1. Calculate the remaining distance S1. The remaining distance S1=total distance S2- distance already traveled S3",
		"1.����ʣ�µ�·��S1 ʣ�µ�·��S1=��·��S2-���е�·��S3"},
		{"2. Calculate the total time T1, which is equal to the total distance S2 divided by the total average speed V1",
		"2.�����ܹ���ʱ��T1 �ܹ���ʱ��T1=��·��S2/�ܵ�ƽ���ٶ�V1"},
		{"3. Calculate the time T2 that has been traveled. The time T2 that has been traveled is equal to the distance S3 traveled divided by the average speed V2 traveled",
		"3.�����Ѿ��ߵ�ʱ��T2 �Ѿ��ߵ�ʱ��T2=���е�·��S3/���е�ƽ���ٶ�V2"},
		{"4. Calculate the remaining time T3. The remaining time T3 is equal to the total time T1 minus the time T2 that has already passed",
		"4.����ʣ�µ�ʱ��T3 ʣ�µ�ʱ��T3=�ܹ���ʱ��T1-�Ѿ��ߵ�ʱ��T2"},
		{"5. Calculate the average speed V3 to be traveled. The average speed V3 to be traveled is equal to the remaining distance S1 divided by the remaining time T3",
		"5.����Ҫ�ߵ�ƽ���ٶ�V3 Ҫ�ߵ�ƽ���ٶ�V3=ʣ�µ�·��S1/ʣ�µ�ʱ��T3"},
		//������
		{"TotaldistanceS2","��·��S2"},
		{"ThecompletedjourneyS3","���е�·��S3"},
		{"OverallaveragespeedV1","�ܵ�ƽ���ٶ�V1"},
		{"AveragespeedV2alreadyachieved","���е�ƽ���ٶ�V2"},
		{"RemainingjourneyS1","ʣ�µ�·��S1"},
		{"TotaltimeT1","�ܹ���ʱ��T1"},
		{"TimeT2thathasalreadypassed","�Ѿ��ߵ�ʱ��T2"},
		{"RemainingtimeT3","ʣ�µ�ʱ��T3"},
		{"AveragespeedtotravelV3","Ҫ�ߵ�ƽ���ٶ�V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��·��S2, 300);
	DefineLangVarInt(���е�·��S3, 120);
	DefineLangVarInt(�ܵ�ƽ���ٶ�V1, 50);
	DefineLangVarInt(���е�ƽ���ٶ�V2, 40);
	ColPrintf(PrintfCol::����, Lang("P17���� ƽ���ٶ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ�������Ӽ׵ؿ���300ǧ�׵��ҵأ�ǰ120ǧ��ƽ���ٶ���40ǧ�ף���ʹȫ����50ǧ���ٶ���ʻ��ʣ�µ�·�������ʲô�ٶ���ʻ?"));
	DefineLangVarInt(ʣ�µ�·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ʣ�µ�·��S1 ʣ�µ�·��S1=��·��S2-���е�·��S3"));
	ʣ�µ�·��S1 = ��·��S2 - ���е�·��S3;
	ʣ�µ�·��S1.PrintProcessLog(1);
	DefineLangVarInt(�ܹ���ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ܹ���ʱ��T1 �ܹ���ʱ��T1=��·��S2/�ܵ�ƽ���ٶ�V1"));
	�ܹ���ʱ��T1 = ��·��S2 / �ܵ�ƽ���ٶ�V1;
	�ܹ���ʱ��T1.PrintProcessLog(2);
	DefineLangVarInt(�Ѿ��ߵ�ʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����Ѿ��ߵ�ʱ��T2 �Ѿ��ߵ�ʱ��T2=���е�·��S3/���е�ƽ���ٶ�V2"));
	�Ѿ��ߵ�ʱ��T2 = ���е�·��S3 / ���е�ƽ���ٶ�V2;
	�Ѿ��ߵ�ʱ��T2.PrintProcessLog(3);
	DefineLangVarInt(ʣ�µ�ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ʣ�µ�ʱ��T3 ʣ�µ�ʱ��T3=�ܹ���ʱ��T1-�Ѿ��ߵ�ʱ��T2"));
	ʣ�µ�ʱ��T3 = �ܹ���ʱ��T1 - �Ѿ��ߵ�ʱ��T2;
	ʣ�µ�ʱ��T3.PrintProcessLog(4);
	DefineLangVarInt(Ҫ�ߵ�ƽ���ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("5.����Ҫ�ߵ�ƽ���ٶ�V3 Ҫ�ߵ�ƽ���ٶ�V3=ʣ�µ�·��S1/ʣ�µ�ʱ��T3"));
	Ҫ�ߵ�ƽ���ٶ�V3 = ʣ�µ�·��S1 / ʣ�µ�ʱ��T3;
	Ҫ�ߵ�ƽ���ٶ�V3.PrintProcessLog(5);
}
void P17_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P17 case four average speed","P17���� ƽ���ٶ�"},
		{"Question: An ant crawls along the three sides of an equilateral triangle for one week, with speeds of 50cm, 20cm, and 40cm per minute on each side. What is the average length of centimeters per minute it crawls for one week?",
		"��Ŀ��һֻ�����صȱ������ε�����������һ�ܣ�����������ÿ�����ٶȷֱ���50cm��20cm��40cm������һ�ܵ�ƽ��ÿ���Ӷ������ף�"},
		{"1. Find the least common multiple of its speed as the distance S1",
		"1.�������ٶȵĹ�������Ϊһ����·��S1"},
		{"2. Calculate the time T1 used for the first edge. The time T1 used for the first edge is equal to the distance S1 of one edge divided by the speed V1 of the first edge",
		"2.�����һ�����õ�ʱ��T1 ��һ�����õ�ʱ��T1=һ����·��S1/��һ�����ٶ�V1"},
		{"3. Calculate the time T2 for the second edge. The time T2 for the second edge is equal to the distance S1 of one edge divided by the speed V2 of the second edge",
		"3.����ڶ������õ�ʱ��T2 �ڶ������õ�ʱ��T2=һ����·��S1/�ڶ������ٶ�V2"},
		{"4. Calculate the time T2 for the third edge. The time T2 for the third edge is equal to the distance S1 of one edge divided by the speed V3 of the third edge",
		"4.������������õ�ʱ��T3 ���������õ�ʱ��T3=һ����·��S1/���������ٶ�V3"},
		{"5. Calculate the total time T4, which is equal to the time T1 spent on the first edge, the time T2 spent on the second edge, and the time T3 spent on the third edge",
		"5.������ʱ��T4 ��ʱ��T4=��һ�����õ�ʱ��T1+�ڶ������õ�ʱ��T2+���������õ�ʱ��T3"},
		{"6. Calculate the average speed V4. The average speed V4 is equal to one side distance S1 multiplied by the total number of sides N1 divided by the total time T4",
		"6.����ƽ���ٶ�V4 ƽ���ٶ�V4=һ����·��S1*һ������N1/��ʱ��T4"},
		//������
		{"OnesidejourneyS1","һ����·��S1"},
		{"ThefirstedgevelocityV1","��һ�����ٶ�V1"},
		{"ThesecondedgevelocityV2","�ڶ������ٶ�V2"},
		{"ThethirdedgespeedV3","���������ٶ�V3"},
		{"TotalnumberofsidesN1","һ������N1"},
		{"TimeT1usedforthefirstedge","��һ�����õ�ʱ��T1"},
		{"TimeT2usedforthesecondedge","�ڶ������õ�ʱ��T2"},
		{"TimeT3usedforthethirdedge","���������õ�ʱ��T3"},
		{"TotaltimeT4","��ʱ��T4"},
		{"AveragespeedV4","ƽ���ٶ�V4"},
		{"CommonmultipleN2","������N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	typedef ScanningLine<5, 5, 18, 8> ScanningLineT;
	ScanningLineT test;
	test.AddTriangle(ScanningLineT::Point(1, 4), ScanningLineT::Point(2.5, 1), ScanningLineT::Point(4, 4), ScanningLineT::FillMode::EdgeMode, '*');
	test.AddText(PrintfCol::Blue, 2.5, 1.5, "50");
	test.AddText(PrintfCol::Blue, 4.2, 2.5, "40");
	test.AddText(PrintfCol::Blue, 2.5, 3.5, "20");
	DefineFractionVar(��һ�����ٶ�V1, 50,1);
	DefineFractionVar(�ڶ������ٶ�V2, 20,1);
	DefineFractionVar(���������ٶ�V3, 40,1);
	DefineFractionVar(һ������N1, 3,1);
	ColPrintf(PrintfCol::����, Lang("P17���� ƽ���ٶ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һֻ�����صȱ������ε�����������һ�ܣ�����������ÿ�����ٶȷֱ���50cm��20cm��40cm������һ�ܵ�ƽ��ÿ���Ӷ������ף�"));
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineFractionVar(������N2, ��һ�����ٶ�V1.Var.nNumerator* �ڶ������ٶ�V2.Var.nNumerator * ���������ٶ�V3.Var.nNumerator,1);
	DefineFractionVar(һ����·��S1, 1,1);
	ColPrintf(PrintfCol::����, Lang("1.�������ٶȵĹ�������Ϊһ����·��S1"));
	һ����·��S1 = ������N2;
	һ����·��S1.PrintProcessLog(5);
	DefineFractionVar(��һ�����õ�ʱ��T1, 1,1);
	ColPrintf(PrintfCol::����, Lang("2.�����һ�����õ�ʱ��T1 ��һ�����õ�ʱ��T1=һ����·��S1/��һ�����ٶ�V1"));
	��һ�����õ�ʱ��T1 = һ����·��S1 / ��һ�����ٶ�V1;
	��һ�����õ�ʱ��T1.PrintProcessLog(2);
	DefineFractionVar(�ڶ������õ�ʱ��T2, 1,1);
	ColPrintf(PrintfCol::����, Lang("3.����ڶ������õ�ʱ��T2 �ڶ������õ�ʱ��T2=һ����·��S1/�ڶ������ٶ�V2"));
	�ڶ������õ�ʱ��T2 = һ����·��S1 / �ڶ������ٶ�V2;
	�ڶ������õ�ʱ��T2.PrintProcessLog(3);
	DefineFractionVar(���������õ�ʱ��T3, 1,1);
	ColPrintf(PrintfCol::����, Lang("4.������������õ�ʱ��T3 ���������õ�ʱ��T3=һ����·��S1/���������ٶ�V3"));
	���������õ�ʱ��T3 = һ����·��S1 / ���������ٶ�V3;
	���������õ�ʱ��T3.PrintProcessLog(4);
	DefineFractionVar(��ʱ��T4, 1,1);
	ColPrintf(PrintfCol::����, Lang("5.������ʱ��T4 ��ʱ��T4=��һ�����õ�ʱ��T1+�ڶ������õ�ʱ��T2+���������õ�ʱ��T3"));
	��ʱ��T4 = ��һ�����õ�ʱ��T1 + �ڶ������õ�ʱ��T2 + ���������õ�ʱ��T3;
	��ʱ��T4.PrintProcessLog(5);
	DefineFractionVar(ƽ���ٶ�V4, 1, 1);
	ColPrintf(PrintfCol::����, Lang("6.����ƽ���ٶ�V4 ƽ���ٶ�V4=һ����·��S1*һ������N1/��ʱ��T4"));
	ƽ���ٶ�V4 = һ����·��S1 * һ������N1 / ��ʱ��T4;
	ƽ���ٶ�V4.PrintProcessLog(6);
}
void P17()
{
	//���ĵ���
	P17_1();
	ColPrintf(PrintfCol::����, "");
	P17_2();
	ColPrintf(PrintfCol::����, "");
	P17_3();
	ColPrintf(PrintfCol::����, "");
	P17_4();
	ColPrintf(PrintfCol::����, "");
}
void P17_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P17();
	Lang.SetCurLanguage(LanguageLib::English);
	P17();
	ColPrintf(PrintfCol::����, "");

}
