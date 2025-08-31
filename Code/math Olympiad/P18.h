#pragma once
void P18_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P18 case one average speed","P18��һ ƽ���ٶ�"},
		{"Title: A person exercised for 3 hours. His speed on a flat road was 4 kilometers, 3 kilometers on an uphill, and 6 kilometers on a downhill. How many kilometers did he travel?",
		"��Ŀ���и����˶�3Сʱ������ƽ·�ϵ��ٶ���4ǧ�ף�����ʱ3ǧ�ף�����ʱ6ǧ�ף��������˶���ǧ�ף�"},
		{"1. Calculate the entire process using the least common multiple",
		"1.��������С���������ȫ��"},
		{"2. Calculate the uphill time T1, which is equal to the total distance S1 divided by the uphill speed V1",
		"2.��������ʱ��T1 ����ʱ��T1=ȫ��S1/��ɽ�ٶ�V1"},
		{"3. Calculate the downhill time T2, which is equal to the total distance S1 divided by the downhill speed V2",
		"3.��������ʱ��T2 ����ʱ��T2=ȫ��S1/��ɽ�ٶ�V2"},
		{"4. Calculate the total time T3, which is equal to the uphill time T1 plus the downhill time T2",
		"4.������ʱ��T3 ��ʱ��T3=����ʱ��T1+����ʱ��T2"},
		{"5. Calculate the total distance S2, which is equal to the number of round trips N1 multiplied by the total distance S1",
		"5.������·��S2 ��·��S2=������N1*ȫ��S1"},
		{"6. Calculate the average speed V1. The average speed V1 is equal to the total distance S2 divided by the total time T3",
		"6.����ƽ���ٶ�V1 ƽ���ٶ�V1=��·��S2/��ʱ��T3"},
		{"7. Calculate the total travel distance S1=travel time T4 * average speed V1",
		"7.����һ���е�·��S1 һ���е�·��S1=�˶�ʱ��T4*ƽ���ٶ�V1"},
		//������
		{"FullS1","ȫ��S1"},
		{"ClimbingspeedV1","��ɽ�ٶ�V1"},
		{"DownhillspeedV2","��ɽ�ٶ�V2"},
		{"RoundtripN1","������N1"},
		{"ExercisetimeT4","�˶�ʱ��T4"},
		{"UphilltimeT1","����ʱ��T1"},
		{"DownhilltimeT2","����ʱ��T2"},
		{"TotaltimeT3","��ʱ��T3"},
		{"TotaldistanceS2","��·��S2"},
		{"AveragespeedV1","ƽ���ٶ�V1"},
		{"TotaldistancetraveledS1","һ���е�·��S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ɽ�ٶ�V1, 6);
	DefineLangVarInt(��ɽ�ٶ�V2, 3);
	DefineLangVarInt(������N1, 2);
	DefineLangVarInt(�˶�ʱ��T4, 3);
	ColPrintf(PrintfCol::����, Lang("P18��һ ƽ���ٶ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���и����˶�3Сʱ������ƽ·�ϵ��ٶ���4ǧ�ף�����ʱ3ǧ�ף�����ʱ6ǧ�ף��������˶���ǧ�ף�"));
	DefineLangVarInt(ȫ��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.��������С���������ȫ��"));
	DefineLangVarInt(��С������, MinCommonMultiple(��ɽ�ٶ�V1.Var, ��ɽ�ٶ�V2.Var));
	ȫ��S1 = ��С������;
	ȫ��S1.PrintProcessLog(1);
	DefineLangVarInt(����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������ʱ��T1 ����ʱ��T1=ȫ��S1/��ɽ�ٶ�V1"));
	����ʱ��T1 = ȫ��S1 / ��ɽ�ٶ�V1;
	����ʱ��T1.PrintProcessLog(2);
	DefineLangVarInt(����ʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("3.��������ʱ��T2 ����ʱ��T2=ȫ��S1/��ɽ�ٶ�V2"));
	����ʱ��T2 = ȫ��S1 / ��ɽ�ٶ�V2;
	����ʱ��T2.PrintProcessLog(3);
	DefineLangVarInt(��ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ʱ��T3 ��ʱ��T3=����ʱ��T1+����ʱ��T2"));
	��ʱ��T3 = ����ʱ��T1 + ����ʱ��T2;
	��ʱ��T3.PrintProcessLog(4);
	DefineLangVarInt(��·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("5.������·��S2 ��·��S2=������N1*ȫ��S1"));
	��·��S2 = ������N1 * ȫ��S1;
	��·��S2.PrintProcessLog(5);
	DefineLangVarInt(ƽ���ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("6.����ƽ���ٶ�V1 ƽ���ٶ�V1=��·��S2/��ʱ��T3"));
	ƽ���ٶ�V1 = ��·��S2 / ��ʱ��T3;
	ƽ���ٶ�V1.PrintProcessLog(6);
	DefineLangVarInt(һ���е�·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("7.����һ���е�·��S1 һ���е�·��S1=�˶�ʱ��T4*ƽ���ٶ�V1"));
	һ���е�·��S1 = �˶�ʱ��T4 * ƽ���ٶ�V1;
	һ���е�·��S1.PrintProcessLog(7);
}
void P18_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P18 case 2 average speed","P18���� ƽ���ٶ�"},
		{"Title: A and B are 6720 meters apart. Someone traveled at a speed of 80 meters for the first half of the time and 60 meters for the second half. How long did it take for the second half of the journey?",
		"��Ŀ�������������6720�ף�����ǰһ��ʱ���ٶ���80�ף���һ��ʱ���ٶ���60�ף���һ��·�����˶���ʱ��?"},
		{"Let half of the time be x",
		"��һ���ʱ��Ϊx"},
		{"1.List the equation S1 80x+60x=6720",
		"1.�г�ʽ��S1 80x+60x=6720"},
		{"2. Merge similar items in S1 to obtain S2 140x=6720",
		"2.,�ϲ�S1ͬ����õ�S2 140x=6720"},
		{"3. Solve x x=6720/140=48 according to S2",
		"3.����S2���x x=6720/140=48"},
		{"4. Calculate half the distance S1 based on the original speed S1=half the time T1 * the first half of the speed V1",
		"4.���㰴ԭ���ٶ���һ��·��S1 ��ԭ���ٶ���һ��·��S1=һ���ʱ��T1*ǰһ����ٶ�V1"},
		{"5. Calculate half of the distance S2, half of the distance S2=total distance S3/half multiple N1",
		"5.����һ���·��S2 һ���·��S2=��·��S3/һ�뱶��N1"},
		{"6. Calculate half of the time T3, half of the time T3=half of the distance S2/first half of the speed V1",
		"6.����һ���ʱ��T3 һ���ʱ��T3=һ���·��S2/ǰһ����ٶ�V1"},
		{"7. Calculate the total time T4. The total time T4 is half of the time T1 multiplied by half of the multiple N1",
		"7.�����ܹ���ʱ��T4 �ܹ���ʱ��T4=һ���ʱ��T1*һ�뱶��N1"},
		{"8. Calculate the time T5 for the second half of the original speed, which is equal to the total time T4 minus the time T3 for the second half of the original speed",
		"8.���㰴ԭ���ٶȺ�һ��ʱ��T5 ��ԭ���ٶȺ�һ��ʱ��T5=�ܹ���ʱ��T4-һ���ʱ��T3"},
		//������
		{"HalfthetimeT1","һ���ʱ��T1"},
		{"ThefirsthalfofthespeedV1","ǰһ����ٶ�V1"},
		{"HalfmultiplierN1","һ�뱶��N1"},
		{"TotaldistanceS3","��·��S3"},
		{"CalculatehalfthedistanceS1basedontheoriginalspeed","��ԭ���ٶ���һ��·��S1"},
		{"HalfofthejourneyS2","һ���·��S2"},
		{"HalfthetimeT3","һ���ʱ��T3"},
		{"TotaltimeT4","�ܹ���ʱ��T4"},
		{"HalfthetimeT5attheoriginalspeed","��ԭ���ٶȺ�һ��ʱ��T5"},

	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(һ���ʱ��T1, 48);
	DefineLangVarInt(ǰһ����ٶ�V1, 80);
	DefineLangVarInt(һ�뱶��N1, 2);
	DefineLangVarInt(��·��S3, 6720);
	ColPrintf(PrintfCol::����, Lang("P18���� ƽ���ٶ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������������6720�ף�����ǰһ��ʱ���ٶ���80�ף���һ��ʱ���ٶ���60�ף���һ��·�����˶���ʱ��?"));
	
	ColPrintf(PrintfCol::����, Lang("��һ���ʱ��Ϊx"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1 80x+60x=6720"));
	ColPrintf(PrintfCol::����, Lang("2.,�ϲ�S1ͬ����õ�S2 140x=6720"));
	ColPrintf(PrintfCol::����, Lang("3.����S2���x x=6720/140=48"));
	DefineLangVarInt(��ԭ���ٶ���һ��·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㰴ԭ���ٶ���һ��·��S1 ��ԭ���ٶ���һ��·��S1=һ���ʱ��T1*ǰһ����ٶ�V1"));
	��ԭ���ٶ���һ��·��S1 = һ���ʱ��T1 * ǰһ����ٶ�V1;
	��ԭ���ٶ���һ��·��S1.PrintProcessLog(4);
	DefineLangVarInt(һ���·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("5.����һ���·��S2 һ���·��S2=��·��S3/һ�뱶��N1"));
	һ���·��S2 = ��·��S3 / һ�뱶��N1;
	һ���·��S2.PrintProcessLog(5);
	DefineLangVarInt(һ���ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("6.����һ���ʱ��T3 һ���ʱ��T3=һ���·��S2/ǰһ����ٶ�V1"));
	һ���ʱ��T3 = һ���·��S2 / ǰһ����ٶ�V1;
	һ���ʱ��T3.PrintProcessLog(6);
	DefineLangVarInt(�ܹ���ʱ��T4, 0);
	ColPrintf(PrintfCol::����, Lang("7.�����ܹ���ʱ��T4 �ܹ���ʱ��T4=һ���ʱ��T1*һ�뱶��N1"));
	�ܹ���ʱ��T4 = һ���ʱ��T1 * һ�뱶��N1;
	�ܹ���ʱ��T4.PrintProcessLog(7);
	DefineLangVarInt(��ԭ���ٶȺ�һ��ʱ��T5, 0);
	ColPrintf(PrintfCol::����, Lang("8.���㰴ԭ���ٶȺ�һ��ʱ��T5 ��ԭ���ٶȺ�һ��ʱ��T5=�ܹ���ʱ��T4-һ���ʱ��T3"));
	��ԭ���ٶȺ�һ��ʱ��T5 = �ܹ���ʱ��T4 - һ���ʱ��T3;
	��ԭ���ٶȺ�һ��ʱ��T5.PrintProcessLog(8);
}
void P18_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P18 case three average speed","P18���� ƽ���ٶ�"},
		{"Title: Two competition plans were discussed before the rowing competition. The first plan is to slide half of the entire journey at speeds of 2.5 meters per second and 3.5 meters per second, respectively. The second option is to\nslide at speeds of 2.5 meters per second and 3.5 meters per second, each for half of the race time. Which option is the best",
		"��Ŀ����������ǰ����������������������һ����������2.5��/���3.5��/����ٶȸ�����ȫ�̵�һ�롣�ڶ�����������2.5��/���3.5��/����ٶȸ����б���ʱ���һ�룬��һ�ַ������"},
		{"1. Because the first plan is to wait for a speed of 2.5 after completing the entire sliding process at a speed of 3.5, we set the half journey as S and the half time as T, and their time difference is (S/2.5) - (S/3.5)",
		"1.��Ϊ��һ�������ǻ���ȫ�̵�һ�� �ٶ���3.5�������Ҫ��2.5�ٶȵģ�������������ΪS��һ��ʱ��ΪT�������ǵ�ʱ������(S/2.5)-(S/3.5)(�����Ӧ����ֵ)·�̲���0"},
		{"2. The second option is to look at the time, which is the same, so the time difference is 0, (S/2.5)-(S/3.5)>0",
		"2.�ڶ��������ǿ�ʱ�䣬ʱ�䶼��ͬ������ʱ�����0��(S/2.5)-(S/3.5)>0·�̲���2.5*T+3.5*T 0<2.5*T+3.5*T"},
		{"3. Because the second plan is faster and can clearly see the difference in distance, the second plan is better",
		"3.��Ϊ�ڶ�������ʱ��죬�ܿ���·�̲���Եڶ��ַ�����"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P18���� ƽ���ٶ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����������ǰ����������������������һ����������2.5��/���3.5��/����ٶȸ�����ȫ�̵�һ�롣�ڶ�����������2.5��/���3.5��/����ٶȸ����б���ʱ���һ�룬��һ�ַ������"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ��һ�������ǻ���ȫ�̵�һ�� �ٶ���3.5�������Ҫ��2.5�ٶȵģ�������������ΪS��һ��ʱ��ΪT�������ǵ�ʱ������(S/2.5)-(S/3.5)(�����Ӧ����ֵ)·�̲���0"));
	ColPrintf(PrintfCol::����, Lang("2.�ڶ��������ǿ�ʱ�䣬ʱ�䶼��ͬ������ʱ�����0��(S/2.5)-(S/3.5)>0·�̲���2.5*T+3.5*T 0<2.5*T+3.5*T"));
	ColPrintf(PrintfCol::����, Lang("3.��Ϊ�ڶ�������ʱ��죬�ܿ���·�̲���Եڶ��ַ�����"));
}
void P18()
{
	P18_1();
	ColPrintf(PrintfCol::����, "");
	P18_2();
	ColPrintf(PrintfCol::����, "");
	P18_3();
	ColPrintf(PrintfCol::����, "");
}
void P18_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P18();
	Lang.SetCurLanguage(LanguageLib::English);
	P18();
	ColPrintf(PrintfCol::����, "");

}