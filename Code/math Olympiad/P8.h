#pragma once
void P8_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P8 Example 1 Overtaking Problem: Train Crossing the Bridge","P8��һ ��������𳵹���"},
		{"Title: It took 25 seconds for a train to pass through a tunnel that is 250 meters long, and 23 seconds to cross a bridge that\nis 210 meters long. In front of it is a freight train that is 320 meters long and has a\nspeed of 17 meters per second. How many seconds did it take for the train to catch up and leave?",
		"��Ŀ���𳵹�������������250������25�룬��210�׵�������23�룬��ǰ����һ�л�����320���ٶ�17��/�룬��׷�����������˶�����?"},
		{"1. Calculate train speed V1. Train speed V1=(tunnel length S1- bridge length S2)/(tunnel crossing time T1- bridge crossing time T2)",
		"1.������ٶ�V1 ���ٶ�V1=(�������S1-�ų�S2)/(�����ʱ��T1-����ʱ��T2)"},
		{"2. Calculate the length of the train S3. Train length S3=(train speed V1 * tunnel passage time T1) - tunnel length S1",
		"2.����𳵳���S3 �𳵳���S3=(���ٶ�V1*�����ʱ��T1)-�������S1"},
		{"3. Calculate overtaking time T3 Overtaking time T3=(train length S3+truck length S4)/(train speed V1- truck speed V2)",
		"3.���㳬��ʱ��T3 ����ʱ��T3=(�𳵳���S3+��������S4)/(���ٶ�V1-�����ٶ�V2)"},
		{"Answer: It took% d seconds for the train to catch up and leave",
		"�𣺻�׷������������%d��"},
		//������
		{"TunnelLengthS1","�������S1"},
		{"BridgeLengthS2","�ų�S2"},
		{"TunnelPassageTimeT1","�����ʱ��T1"},
		{"BridgeCrossingTimeT2","����ʱ��T2"},
		{"TruckLengthS4","��������S4"},
		{"TruckSpeedV2","�����ٶ�V2"},
		{"TrainSpeedV1","���ٶ�V1"},
		{"TrainLengthS3","�𳵳���S3"},
		{"OvertakingTimeT3","����ʱ��T3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�������S1, 250);
	DefineLangVarInt(�ų�S2, 210);
	DefineLangVarInt(�����ʱ��T1, 25);
	DefineLangVarInt(����ʱ��T2, 23);
	DefineLangVarInt(��������S4, 320);
	DefineLangVarInt(�����ٶ�V2, 17);
	ColPrintf(PrintfCol::����, Lang("P8��һ ��������𳵹���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���𳵹�������������250������25�룬��210�׵�������23�룬��ǰ����һ�л�����320���ٶ�17��/�룬��׷�����������˶�����?"));
	DefineLangVarInt(���ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ٶ�V1 ���ٶ�V1=(�������S1-�ų�S2)/(�����ʱ��T1-����ʱ��T2)"));
	���ٶ�V1 = (�������S1 - �ų�S2) / (�����ʱ��T1 - ����ʱ��T2);
	���ٶ�V1.PrintProcessLog(1);
	DefineLangVarInt(�𳵳���S3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����𳵳���S3 �𳵳���S3=(���ٶ�V1*�����ʱ��T1)-�������S1"));
	�𳵳���S3 = (���ٶ�V1 * �����ʱ��T1) - �������S1;
	�𳵳���S3.PrintProcessLog(2);
	DefineLangVarInt(����ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳬��ʱ��T3 ����ʱ��T3=(�𳵳���S3+��������S4)/(���ٶ�V1-�����ٶ�V2)"));
	����ʱ��T3 = (�𳵳���S3 + ��������S4) / (���ٶ�V1 - �����ٶ�V2);
	����ʱ��T3.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("�𣺻�׷������������%d��"), (int)����ʱ��T3);
}
void P8_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P8 Example 2 Overtaking Problem","P8���� ��������"},
		{"Title: There are two trains traveling in the same direction, the fast train has a speed of 33 meters per second and the slow train has a speed of 21\nmeters per second. If the front of the train is level for 20 seconds and then exceeds the slow train, and if the rear of the train is level for 25\nseconds and then exceeds the slow train, what is the length of the two trains? What is the time it takes for\nthe front of the two trains to overlap and the rear of the two trains to separate?",
		"��Ŀ�������л�ͬ����У��쳵�ٶ���33��/�룬�����ٶ���21��/�룬�����ͷƽ��20��󳬹������������βƽ��25��󳬹�������\n���������Ƕ��٣�������ͷ�ص�����β�����ʱ���Ƕ���?"},
		{"1. Calculate the length of the express train S1. The length of the express train S1 is equal to (express speed V1- local speed V2)\nmultiplied by the time it takes for the front of the train to be level with the local train T1",
		"1.����쳵����S1 �쳵����S1=(�쳵�ٶ�V1-�����ٶ�V2)*��ͷƽ�볬������ʱ��T1"},
		{"2. Calculate the length of the local train S2. The length of the local train S2 is equal to\n(express speed V1- local speed V2) * the time it takes for the rear of the train to be level\nbeyond the local train T2",
		"2.������������S2 ��������S2=(�쳵�ٶ�V1-�����ٶ�V2)*��βƽ�볬������ʱ��T2"},
		{"3. Calculate the time T3 for the overlap of the front and the separation of the rear of the vehicle. The time T3 for the overlap of\nthe front and the separation of the rear of the vehicle is calculated as (express train\nlength S1+local train length S2) divided by (express train speed V1+local train speed V2)",
		"3.���㳵��ͷ�ص�����β�����ʱ��T3 ����ͷ�ص�����β�����ʱ��T3=(�쳵����S1+��������S2)/(�쳵�ٶ�V1+�����ٶ�V2)"},
		{"Answer: The time it takes for the front of the car to overlap and the rear to separate is% d seconds",
		"�𣺳���ͷ�ص�����β�����ʱ����%d��"},
		//������
		{"ExpressSpeedV1","�쳵�ٶ�V1"},
		{"SlowSpeedV2","�����ٶ�V2"},
		{"TheFrontOfTheCarIsLevelBeyondTheIdleTimeT1","��ͷƽ�볬������ʱ��T1"},
		{"TheTailOfTheCarIsLevelBeyondTheLdleTimeT2","��βƽ�볬������ʱ��T2"},
		{"ExpressTrainConductorS1","�쳵����S1"},
		{"SlowCarDriverS2","��������S2"},
		{"TheTimeT3FromTheOverlapOfTheFrontOfTheCarToTheSeparationOfTheRearOfTheCar","����ͷ�ص�����β�����ʱ��T3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�쳵�ٶ�V1, 33);
	DefineLangVarInt(�����ٶ�V2, 21);
	DefineLangVarInt(��ͷƽ�볬������ʱ��T1, 20);
	DefineLangVarInt(��βƽ�볬������ʱ��T2, 25);
	const char* pPic =
		"��ͷƽ��\n"
		"         -------->\n"
		"----------------->\n"
		"|-----------------------------------------------------|\n"
		"��βƽ��\n"
		"-------->\n"
		"----------------->\n"
		"|-----------------------------------------------------|\n"
		;
	ColPrintf(PrintfCol::����, Lang("P8���� ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������л�ͬ����У��쳵�ٶ���33��/�룬�����ٶ���21��/�룬�����ͷƽ��20��󳬹������������βƽ��25��󳬹�������\n���������Ƕ��٣�������ͷ�ص�����β�����ʱ���Ƕ���?"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(�쳵����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����쳵����S1 �쳵����S1=(�쳵�ٶ�V1-�����ٶ�V2)*��ͷƽ�볬������ʱ��T1"));
	�쳵����S1 = (�쳵�ٶ�V1 - �����ٶ�V2) * ��ͷƽ�볬������ʱ��T1;
	�쳵����S1.PrintProcessLog(1);
	DefineLangVarInt(��������S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������������S2 ��������S2=(�쳵�ٶ�V1-�����ٶ�V2)*��βƽ�볬������ʱ��T2"));
	��������S2 = (�쳵�ٶ�V1 - �����ٶ�V2) * ��βƽ�볬������ʱ��T2;
	��������S2.PrintProcessLog(2);
	DefineLangVarInt(����ͷ�ص�����β�����ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳵��ͷ�ص�����β�����ʱ��T3 ����ͷ�ص�����β�����ʱ��T3=(�쳵����S1+��������S2)/(�쳵�ٶ�V1+�����ٶ�V2)"));
	����ͷ�ص�����β�����ʱ��T3 = (�쳵����S1 + ��������S2) / (�쳵�ٶ�V1 + �����ٶ�V2);
	����ͷ�ص�����β�����ʱ��T3.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("�𣺳���ͷ�ص�����β�����ʱ����%d��"), (int)����ͷ�ص�����β�����ʱ��T3);
}
void P8_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P8 Example 2 Overtaking Problem Encounter Problem","P8���� ����������������"},
		{"Title: A car with a length of 15 meters departs from point A at a speed of 5 meters per second. Point A departs from point A and point B\ndeparts from point B. The car catches up with point A for 6 seconds before leaving point A. After 30 seconds, the car encounters point B and leaves point\nB after 2 seconds. What is the distance between point A and point B?",
		"��Ŀ��һ������15�״�A�س����ٶ���5��/�룬�״�A�س������Ҵ�B�س�������׷�ϼ�6����뿪�˼ף�30��������ң�����2����뿪�ң�������������?"},
		{"1. Calculate the speed V1 of vehicle A, which is equal to (vehicle speed V2 * time T1 for vehicle to chase after vehicle A - vehicle length S1) divided by the time T1 for vehicle to chase after vehicle A",
		"1.������ٶ�V1 ���ٶ�V1=(���ٶ�V2*��׷�׵�ʱ��T1-����S1)/��׷�׵�ʱ��T1"},
		{"2. Calculate the speed V3 of vehicle B=(vehicle length S1- vehicle speed V2 * vehicle error time T2)/vehicle error time T2",
		"2.�������ٶ�V3 ���ٶ�V3=(����S1-���ٶ�V2*�����ҵ�ʱ��T2)/�����ҵ�ʱ��T2"},
		{"3. Calculate the distance S2 between Party A and Party B, which is equal to (vehicle speed V2- vehicle speed V3) multiplied by (time T3 between Party A and Party B+time T2 when the vehicle misses Party B)",
		"3.����������·��S2 �������·��S2=(���ٶ�V2-���ٶ�V3)*(�������ʱ��T3+�����ҵ�ʱ��T2)"},
		{"Answer: A and B are% d meters apart",
		"�𣺼������%f��"},
		//������
		{"VehicleSpeedV2","���ٶ�V2"},
		{"TimeT1ForCarChaseAfterArmor","��׷�׵�ʱ��T1"},
		{"CarCaptainS1","����S1"},
		{"CarErrorB'sTimeT2","�����ҵ�ʱ��T2"},
		{"TimeT3BetweenAAndB","�������ʱ��T3"},
		{"ASpeedV1","���ٶ�V1"},
		{"BSpeedV3","���ٶ�V3"},
		{"DistanceS2BetweenAAndB","�������·��S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,���ٶ�V2, 5);
	DefineLangVar(float,��׷�׵�ʱ��T1, 6);
	DefineLangVar(float,����S1, 15);
	DefineLangVar(float,�����ҵ�ʱ��T2, 2);
	DefineLangVar(float,�������ʱ��T3, 30);
	ColPrintf(PrintfCol::����, Lang("P8���� ����������������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ������15�״�A�س����ٶ���5��/�룬�״�A�س������Ҵ�B�س�������׷�ϼ�6����뿪�˼ף�30��������ң�����2����뿪�ң�������������?"));
	DefineLangVar(float,���ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ٶ�V1 ���ٶ�V1=(���ٶ�V2*��׷�׵�ʱ��T1-����S1)/��׷�׵�ʱ��T1"));
	���ٶ�V1 = (���ٶ�V2 * ��׷�׵�ʱ��T1 - ����S1) / ��׷�׵�ʱ��T1;
	���ٶ�V1.PrintProcessLog(1);
	DefineLangVar(float,���ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������ٶ�V3 ���ٶ�V3=(����S1-���ٶ�V2*�����ҵ�ʱ��T2)/�����ҵ�ʱ��T2"));
	���ٶ�V3 = (����S1 - ���ٶ�V2 * �����ҵ�ʱ��T2) / �����ҵ�ʱ��T2;
	���ٶ�V3.PrintProcessLog(2);
	DefineLangVar(float,�������·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����������·��S2 �������·��S2=(���ٶ�V2-���ٶ�V3)*(�������ʱ��T3+�����ҵ�ʱ��T2)"));
	�������·��S2 = (���ٶ�V2 - ���ٶ�V3) * (�������ʱ��T3 + �����ҵ�ʱ��T2);
	�������·��S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("�𣺼������%f��"), (float)�������·��S2);
}
void P8()
{
	P8_1();
	ColPrintf(PrintfCol::����, "");
	P8_2();
	ColPrintf(PrintfCol::����, "");
	P8_3();
	ColPrintf(PrintfCol::����, "");
}
void P8_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P8();
	Lang.SetCurLanguage(LanguageLib::English);
	P8();
	ColPrintf(PrintfCol::����, "");

}