#pragma once
void P77_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 Case One Travel Problem","P77 ��һ �г�����"},
		{"Title: The water speed is 15 kilometers per hour. If you travel 320 kilometers downstream for 8 hours, how many kilometers do you travel upstream?",
		"��Ŀ��ˮ����15ǧ��ÿСʱ�����˳ˮ8Сʱ��320ǧ�ף�����ˮ�ж���ǧ��?"},
		{"1. Calculate the downstream speed V1, which is equal to the downstream distance S1 divided by the total time T1",
		"1.����˳ˮ�ٶ�V1 ˳ˮ�ٶ�V1=˳ˮ·��S1/��ʱ��T1"},
		{"2. Calculate the ship speed V2, which is equal to the downstream speed V1 minus the downstream speed V3",
		"2.���㴬��V2 ����V2=˳ˮ�ٶ�V1-ˮ��V3"},
		{"3. Calculate the upstream velocity V4, which is equal to the ship speed V2 minus the water speed V3",
		"3.������ˮ�ٶ�V4 ��ˮ�ٶ�V4=����V2-ˮ��V3"},
		{"4. Calculate the upstream distance S2=total time T1 * upstream speed V4",
		"4.������ˮ·��S2 ��ˮ·��S2=��ʱ��T1*��ˮ�ٶ�V4"},
		//������
		{"ShunshuiRoadS1","˳ˮ·��S1"},
		{"TotaltimeT1","��ʱ��T1"},
		{"WaterspeedV3","ˮ��V3"},
		{"ShunshuispeedV1","˳ˮ�ٶ�V1"},
		{"ShipspeedV2","����V2"},
		{"UpstreamvelocityV4","��ˮ�ٶ�V4"},
		{"UpstreamjourneyS2","��ˮ·��S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ˳ˮ·��S1, 320);
	DefineLangVar(float, ��ʱ��T1, 8);
	DefineLangVar(float, ˮ��V3, 15);
	ColPrintf(PrintfCol::����, Lang("P77 ��һ �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ˮ����15ǧ��ÿСʱ�����˳ˮ8Сʱ��320ǧ�ף�����ˮ�ж���ǧ��?"));
	DefineLangVar(float, ˳ˮ�ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����˳ˮ�ٶ�V1 ˳ˮ�ٶ�V1=˳ˮ·��S1/��ʱ��T1"));
	˳ˮ�ٶ�V1 = ˳ˮ·��S1 / ��ʱ��T1;
	˳ˮ�ٶ�V1.PrintProcessLog(2);
	DefineLangVar(float, ����V2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㴬��V2 ����V2=˳ˮ�ٶ�V1-ˮ��V3"));
	����V2 = ˳ˮ�ٶ�V1 - ˮ��V3;
	����V2.PrintProcessLog(2);
	DefineLangVar(float, ��ˮ�ٶ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("3.������ˮ�ٶ�V4 ��ˮ�ٶ�V4=����V2-ˮ��V3"));
	��ˮ�ٶ�V4 = ����V2 - ˮ��V3;
	��ˮ�ٶ�V4.PrintProcessLog(3);
	DefineLangVar(float, ��ˮ·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ˮ·��S2 ��ˮ·��S2=��ʱ��T1*��ˮ�ٶ�V4"));
	��ˮ·��S2 = ��ʱ��T1 * ��ˮ�ٶ�V4;
	��ˮ·��S2.PrintProcessLog(4);
}
void P77_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 Case 2 Travel Problem","P77 ���� �г�����"},
		{"Title: A wooden boat is traveling on the water surface, with a speed of 1 hour and 5 kilometers in the water and 5 hours and 5 kilometers in the opposite direction. What are the boat speed and water speed?",
		"��Ŀ��һֻľ����ˮ����ʻ��˳ˮ1Сʱ5ǧ�ף���ˮ5Сʱ5ǧ�ף����ٺ�ˮ�ٸ��Ƕ���?"},
		{"1. Calculate the upstream velocity V1, which is equal to the upstream distance S1 divided by the upstream time T1",
		"1.������ˮ�ٶ�V1 ��ˮ�ٶ�V1=��ˮ·��S1/��ˮʱ��T1"},
		{"2. Calculate the downstream speed V2, which is equal to the downstream distance S1 divided by the downstream time T",
		"2.����˳ˮ�ٶ�V2 ˳ˮ�ٶ�V2=˳ˮ·��S1/˳ˮʱ��T1"},
		{"3. Calculate the ship speed V3, which is equal to (upstream speed V1+downstream speed V2) divided by the multiplier N1",
		"3.���㴬��V3 ����V3=(��ˮ�ٶ�V1+˳ˮ�ٶ�V2)/����N1"},
		{"4. Calculate the water speed V4, which is equal to the downstream speed V2 minus the ship speed V3",
		"4.����ˮ��V4 ˮ��V4=˳ˮ�ٶ�V2-����V3"},
		//������
		{"UpstreamjourneyS1","��ˮ·��S1"},
		{"ReversewatertimeT1","��ˮʱ��T1"},
		{"ShunshuiRoadS1","˳ˮ·��S1"},
		{"ShunshuitimeT1","˳ˮʱ��T1"},
		{"MagnificationN1","����N1"},
		{"UpstreamvelocityV1","��ˮ�ٶ�V1"},
		{"ParallelspeedV2","˳ˮ�ٶ�V2"},
		{"ShipspeedV3","����V3"},
		{"WaterspeedV4","ˮ��V4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ��ˮ·��S1, 5);
	DefineLangVar(float, ��ˮʱ��T1, 5);
	DefineLangVar(float, ˳ˮ·��S1, 5);
	DefineLangVar(float, ˳ˮʱ��T1, 1);
	DefineLangVar(float, ����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P77 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һֻľ����ˮ����ʻ��˳ˮ1Сʱ5ǧ�ף���ˮ5Сʱ5ǧ�ף����ٺ�ˮ�ٸ��Ƕ���?"));
	DefineLangVar(float, ��ˮ�ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ˮ�ٶ�V1 ��ˮ�ٶ�V1=��ˮ·��S1/��ˮʱ��T1"));
	��ˮ�ٶ�V1 = ��ˮ·��S1 / ��ˮʱ��T1;
	��ˮ�ٶ�V1.PrintProcessLog(1);
	DefineLangVar(float, ˳ˮ�ٶ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����˳ˮ�ٶ�V2 ˳ˮ�ٶ�V2=˳ˮ·��S1/˳ˮʱ��T1"));
	˳ˮ�ٶ�V2 = ˳ˮ·��S1 / ˳ˮʱ��T1;
	˳ˮ�ٶ�V2.PrintProcessLog(2);
	DefineLangVar(float, ����V3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㴬��V3 ����V3=(��ˮ�ٶ�V1+˳ˮ�ٶ�V2)/����N1"));
	����V3 = (��ˮ�ٶ�V1 + ˳ˮ�ٶ�V2) / ����N1;
	����V3.PrintProcessLog(3);
	DefineLangVar(float, ˮ��V4, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ˮ��V4 ˮ��V4=˳ˮ�ٶ�V2-����V3"));
	ˮ��V4 = ˳ˮ�ٶ�V2 - ����V3;
	ˮ��V4.PrintProcessLog(4);
}
void P77_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 Case Three Trip Problem","P77 ���� �г�����"},
		{"Title: How many seconds does it take for a train with a length of 150 meters and a speed of 19 meters per second to cross a 420 meter bridge?",
		"��Ŀ��һ���𳵳�150�ף�ÿ����19�ף�ȫ��ͨ��420�׵���Ҫ������?"},
		{"1. Calculate the distance to be traveled by the train S1=train length S2+bridge length S3",
		"1.�����Ҫ��·��S1 ��Ҫ��·��S1=�𳵳�S2+�ų�S3"},
		{"2. Calculate the crossing time T1, which is equal to the distance traveled by the train S1 divided by the train speed V1",
		"2.�������ʱ��T1 ����ʱ��T1=��Ҫ��·��S1/���ٶ�V1"},
		//������
		{"TrainconductorS2","�𳵳�S2"},
		{"BridgelengthS3","�ų�S3"},
		{"TrainspeedV1","���ٶ�V1"},
		{"TraintraveldistanceS1","��Ҫ��·��S1"},
		{"BridgecrossingtimeT1","����ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, �𳵳�S2, 150);
	DefineLangVar(float, �ų�S3, 420);
	DefineLangVar(float, ���ٶ�V1, 19);
	ColPrintf(PrintfCol::����, Lang("P77 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ���𳵳�150�ף�ÿ����19�ף�ȫ��ͨ��420�׵���Ҫ������?"));
	const char* pPic =
		"��---------150��------->\n"
		"                         ��A----------------------420��-------------------B\n"
		;
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVar(float, ��Ҫ��·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����Ҫ��·��S1 ��Ҫ��·��S1=�𳵳�S2+�ų�S3"));
	��Ҫ��·��S1 = �𳵳�S2 + �ų�S3;
	��Ҫ��·��S1.PrintProcessLog(1);
	DefineLangVar(float, ����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������ʱ��T1 ����ʱ��T1=��Ҫ��·��S1/���ٶ�V1"));
	����ʱ��T1 = ��Ҫ��·��S1 / ���ٶ�V1;
	����ʱ��T1.PrintProcessLog(2);
}
void P77_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 Case Four Travel Problem","P77 ���� �г�����"},
		{"Title: How many seconds did it take for a passenger car to be 190 meters long and a truck to be 240 meters long, with two cars traveling towards each other at speeds of 20 meters per second and 23 meters per second, respectively, from the intersection of the front and the separation of the rear of the car",
		"��Ŀ��һ���ͳ���190�ף�һ��������240�ף������ֱ���20��ÿ���23��ÿ����ٶ�������У��ӳ�ͷ����ͳ�β���빲���˶�����"},
		{"1. Calculate the intersection distance S1. Intersection distance S1=Bus length L1+Truck length L2",
		"1.���㽻��·��S1 ����·��S1=�ͳ�����L1+��������L2"},
		{"2. Calculate the speed and V1 speed, where V1=bus speed V2+truck speed V3",
		"2.�����ٶȺ�V1 �ٶȺ�V1=�ͳ��ٶ�V2+�����ٶ�V3"},
		{"3. Calculate the meeting time T1, which is equal to the intersection distance S1 divided by the speed and V1",
		"3.��������ʱ��T1 ����ʱ��T1=����·��S1/�ٶȺ�V1"},
		//������
		{"BuslengthL1","�ͳ�����L1"},
		{"TrucklengthL2","��������L2"},
		{"BusspeedV2","�ͳ��ٶ�V2"},
		{"TruckspeedV3","�����ٶ�V3"},
		{"IntersectionrouteS1","����·��S1"},
		{"SpeedandV1","�ٶȺ�V1"},
		{"MeetingtimeT1","����ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, �ͳ�����L1, 190);
	DefineLangVar(float, ��������L2, 240);
	DefineLangVar(float, �ͳ��ٶ�V2, 20);
	DefineLangVar(float, �����ٶ�V3, 23);
	ColPrintf(PrintfCol::����, Lang("P77 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ���ͳ���190�ף�һ��������240�ף������ֱ���20��ÿ���23��ÿ����ٶ�������У��ӳ�ͷ����ͳ�β���빲���˶�����"));
	DefineLangVar(float, ����·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㽻��·��S1 ����·��S1=�ͳ�����L1+��������L2"));
	����·��S1 = �ͳ�����L1 + ��������L2;
	����·��S1.PrintProcessLog(1);
	DefineLangVar(float, �ٶȺ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����ٶȺ�V1 �ٶȺ�V1=�ͳ��ٶ�V2+�����ٶ�V3"));
	�ٶȺ�V1 = �ͳ��ٶ�V2 + �����ٶ�V3;
	�ٶȺ�V1.PrintProcessLog(2);
	DefineLangVar(float, ����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("3.��������ʱ��T1 ����ʱ��T1=����·��S1/�ٶȺ�V1"));
	����ʱ��T1 = ����·��S1 / �ٶȺ�V1;
	����ʱ��T1.PrintProcessLog(3);
}
void P77_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P77 case five itinerary problem","P77 ���� �г�����"},
		{"Title: It takes 65 seconds for a train to cross a 990 meter bridge, and 90.5 seconds for the same speed to cross a 1500 meter bridge. Calculate the speed and length of the train",
		"��Ŀ��һ�л�ͨ��990�׵Ĵ�����65�룬ͬ�����ٶȹ�1500�׵Ĵ���Ҫ90.5�룬���ٺͳ���"},
		{"1. Calculate the distance difference S1 between two major bridges, where S1=the first bridge length L1-the second bridge length L2",
		"1.������������·�̲�S1 ��������·�̲�S1=��һ���ų�L1-�ڶ����ų�L2"},
		{"2. Calculate the time difference T1 between two bridges. The time difference T1 between two bridges is equal to the first bridge time T2 plus the second bridge time T3",
		"2.������������ʱ���T1 ��������ʱ���T1=��һ����ʱ��T2-�ڶ�����ʱ��T3"},
		{"3. Calculate the vehicle speed V1, which is equal to the distance difference S1 between two major bridges divided by the time difference T1 between two major bridges",
		"3.���㳵��V1 ����V1=��������·�̲�S1/��������ʱ���T1"},
		{"4. Calculate the distance of the train passing through the first bridge S2=vehicle speed V1 * first bridge time T2",
		"4.�����ͨ����һ�����е�·��S2 ��ͨ����һ�����е�·��S2=����V1*��һ����ʱ��T2"},
		{"5. Calculate the length of the train S3, which is equal to the distance of the train passing through the first bridge S2 minus the length of the first bridge L1",
		"5.���㳵��S3 ����S3=��ͨ����һ�����е�·��S2-��һ���ų�L1"},
		//������
		{"ThefirstbridgelengthL1","��һ���ų�L1"},
		{"SecondbridgelengthL2","�ڶ����ų�L2"},
		{"ThefirstbridgetimeT2","��һ����ʱ��T2"},
		{"ThesecondbridgetimeT3","�ڶ�����ʱ��T3"},
		{"ThedistancedifferencebetweenthetwobridgesisS1","��������·�̲�S1"},
		{"TimedifferenceT1betweentwobridges","��������ʱ���T1"},
		{"VehiclespeedV1","����V1"},
		{"ThedistanceofthetrainpassingthroughthefirstbridgeS2","��ͨ����һ�����е�·��S2"},
		{"CarCaptainS3","����S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ��һ���ų�L1, 1500);
	DefineLangVar(float, �ڶ����ų�L2, 990);
	DefineLangVar(float, ��һ����ʱ��T2, 90.5);
	DefineLangVar(float, �ڶ�����ʱ��T3, 65);
	ColPrintf(PrintfCol::����, Lang("P77 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ�л�ͨ��990�׵Ĵ�����65�룬ͬ�����ٶȹ�1500�׵Ĵ���Ҫ90.5�룬���ٺͳ���"));
	DefineLangVar(float, ��������·�̲�S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������������·�̲�S1 ��������·�̲�S1=��һ���ų�L1-�ڶ����ų�L2"));
	��������·�̲�S1 = ��һ���ų�L1 - �ڶ����ų�L2;
	��������·�̲�S1.PrintProcessLog(1);
	DefineLangVar(float, ��������ʱ���T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.������������ʱ���T1 ��������ʱ���T1=��һ����ʱ��T2-�ڶ�����ʱ��T3"));
	��������ʱ���T1 = ��һ����ʱ��T2 - �ڶ�����ʱ��T3;
	��������ʱ���T1.PrintProcessLog(2);
	DefineLangVar(float, ����V1, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳵��V1 ����V1=��������·�̲�S1/��������ʱ���T1"));
	����V1 = ��������·�̲�S1 / ��������ʱ���T1;
	����V1.PrintProcessLog(3);
	DefineLangVar(float, ��ͨ����һ�����е�·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.�����ͨ����һ�����е�·��S2 ��ͨ����һ�����е�·��S2=����V1*��һ����ʱ��T2"));
	��ͨ����һ�����е�·��S2 = ����V1 * ��һ����ʱ��T2;
	��ͨ����һ�����е�·��S2.PrintProcessLog(4);
	DefineLangVar(float, ����S3, 0);
	ColPrintf(PrintfCol::����, Lang("5.���㳵��S3 ����S3=��ͨ����һ�����е�·��S2-��һ���ų�L1"));
	����S3 = ��ͨ����һ�����е�·��S2 - ��һ���ų�L1;
	����S3.PrintProcessLog(5);
}
void P77()
{
	P77_1();
	ColPrintf(PrintfCol::����, "");
	P77_2();
	ColPrintf(PrintfCol::����, "");
	P77_3();
	ColPrintf(PrintfCol::����, "");
	P77_4();
	ColPrintf(PrintfCol::����, "");
	P77_5();
	ColPrintf(PrintfCol::����, "");
}
void P77_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P77();
	Lang.SetCurLanguage(LanguageLib::English);
	P77();
	ColPrintf(PrintfCol::����, "");

}