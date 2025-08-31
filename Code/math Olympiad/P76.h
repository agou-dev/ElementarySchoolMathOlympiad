#pragma once
void P76_1()
{
	LanguageLib::LanguageTableT Language = { 
		{"P76 Case 1 Travel Problem","P76 ��һ �г�����"},
		{"Title: Two cars, A and B, depart from A and B respectively, traveling in opposite directions. It is known that there is a difference of 270 kilometers between the two places, with A traveling at a speed of 65 kilometers per hour and B traveling at a speed of 70 kilometers per hour. How long did the two cars meet?",
		"��Ŀ�����������ֱ��A��B�س�����������У���֪�������270ǧ�ף����ٶ���65ǧ��ÿСʱ���ҵ��ٶ���70ǧ��ÿСʱ���೤ʱ����������?"},
		{"1. Calculate the speed and V1 speed, where V1=speed of A V2+speed of B V3",
		"1.�����ٶȺ�V1 �ٶȺ�V1=���ٶ�V2+���ٶ�V3"},
		{"2. Calculate the meeting time T1, which is equal to the total distance S1 divided by the speed and V1",
		"2.��������ʱ��T1 ����ʱ��T1=��·��S1/�ٶȺ�V1"},
		//������
		{"JiaSpeedV2","���ٶ�V2"},
		{"YispeedV3","���ٶ�V3"},
		{"TotaldistanceS1","��·��S1"},
		{"SpeedandV1","�ٶȺ�V1"},
		{"MeetingtimeT1","����ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ٶ�V2, 65);
	DefineLangVarInt(���ٶ�V3, 70);
	DefineLangVarInt(��·��S1, 270);
	ColPrintf(PrintfCol::����, Lang("P76 ��һ �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����������ֱ��A��B�س�����������У���֪�������270ǧ�ף����ٶ���65ǧ��ÿСʱ���ҵ��ٶ���70ǧ��ÿСʱ���೤ʱ����������?"));
	const char* pPic =
		"��----------------------><------------------��\n"
		"A----------------------270ǧ��---------------B\n"
		;
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(�ٶȺ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ٶȺ�V1 �ٶȺ�V1=���ٶ�V2+���ٶ�V3"));
	�ٶȺ�V1 = ���ٶ�V2 + ���ٶ�V3;
	�ٶȺ�V1.PrintProcessLog(1);
	DefineLangVarInt(����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������ʱ��T1 ����ʱ��T1=��·��S1/�ٶȺ�V1"));
	����ʱ��T1 = ��·��S1 / �ٶȺ�V1;
	����ʱ��T1.PrintProcessLog(2);
}
void P76_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case 2 Travel Problem","P76 ���� �г�����"},
		{"Title: AB are 400 kilometers apart. A travels from A to B at a speed of 60 kilometers. Two hours later, B travels from B to A at a speed of 80 kilometers. How long does it take for them to meet?",
		"��Ŀ��AB�������400ǧ�ף��״�A��B���ٶ���60ǧ�ף���Сʱ���Ҵ�B��A���ٶ���80ǧ�ף��೤ʱ������?"},
		{"1. Calculate the distance S1 of the A line in two hours. The distance S1 of the A line in two hours is equal to two hours T1 multiplied by the speed V1 of the A line",
		"1.������Сʱʱ·�̼��е�·��S1 ��Сʱʱ·�̼��е�·��S1=��СʱT1*���ٶ�V1"},
		{"2. Calculate the encounter distance S2. Encounter distance S2=total distance S3- travel time of two hours. Travel distance S1 of line A",
		"2.��������·��S2 ����·��S2=��·��S3-��Сʱʱ·�̼��е�·��S1"},
		{"3. Calculate the speed and V2 speed, where V2=B speed V3+A speed V1",
		"3.�����ٶȺ�V2 �ٶȺ�V2=���ٶ�V3+���ٶ�V1"},
		{"4. Calculate the meeting time T2, which is equal to the meeting distance S2 divided by the speed and V2",
		"4.��������ʱ��T2 ����ʱ��T2=����·��S2/�ٶȺ�V2"},
		//������
		{"TwohourT1","��СʱT1"},
		{"AspeedV1","���ٶ�V1"},
		{"TotaldistanceS3","��·��S3"},
		{"BspeedV3","���ٶ�V3"},
		{"Twohours'journeyfromrouteA,routeS1","��Сʱʱ·�̼��е�·��S1"},
		{"EncounterjourneyS2","����·��S2"},
		{"SpeedandV2","�ٶȺ�V2"},
		{"MeetingtimeT2","����ʱ��T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��СʱT1, 2);
	DefineLangVarInt(���ٶ�V1, 60);
	DefineLangVarInt(��·��S3, 400);
	DefineLangVarInt(���ٶ�V3, 80);
	const char* pPic =
	    "��û���߼��ߵ�·��\n"
		"��-------------->---------><------------------��\n"
		"A----------------------400ǧ��---------------B\n"
		;
	ColPrintf(PrintfCol::����, Lang("P76 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��AB�������400ǧ�ף��״�A��B���ٶ���60ǧ�ף���Сʱ���Ҵ�B��A���ٶ���80ǧ�ף��೤ʱ������?"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(��Сʱʱ·�̼��е�·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������Сʱʱ·�̼��е�·��S1 ��Сʱʱ·�̼��е�·��S1=��СʱT1*���ٶ�V1"));
	��Сʱʱ·�̼��е�·��S1 = ��СʱT1 * ���ٶ�V1;
	��Сʱʱ·�̼��е�·��S1.PrintProcessLog(1);
	DefineLangVarInt(����·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������·��S2 ����·��S2=��·��S3-��Сʱʱ·�̼��е�·��S1"));
	����·��S2 = ��·��S3 - ��Сʱʱ·�̼��е�·��S1;
	����·��S2.PrintProcessLog(2);
	DefineLangVarInt(�ٶȺ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ٶȺ�V2 �ٶȺ�V2=���ٶ�V3+���ٶ�V1"));
	�ٶȺ�V2 = ���ٶ�V3 + ���ٶ�V1;
	�ٶȺ�V2.PrintProcessLog(2);
	DefineLangVarInt(����ʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������ʱ��T2 ����ʱ��T2=����·��S2/�ٶȺ�V2"));
	����ʱ��T2 = ����·��S2 / �ٶȺ�V2;
	����ʱ��T2.PrintProcessLog(4);
}
void P76_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case Three Trip Problem","P76 ���� �г�����"},
		{"Title: Da Mao and Er Mao are walking towards each other at a distance of 1000 kilometers. Da Mao travels at a speed of 120 meters per minute, while Er Mao travels at a speed of 80 meters. How many meters did a dog walk from Da Mao back and forth between the two until they met?",
		"��Ŀ����ë�Ͷ�ë���1000ǧ��������У���ëÿ������120�ף���ë��80�ף�һֻ���Ӵ�ë��ʼ����������֮�䣬ֱ���������������˶�����?"},
		{"1. Calculate the velocity of the second hair of the big hair and V1. The velocity of the second hair of the big hair and V1=the velocity of the big hair V2+the velocity of the second hair V3",
		"1.�����ë��ë�ٶȺ�V1 ��ë��ë�ٶȺ�V1=��ë�ٶ�V2+��ë�ٶ�V3"},
		{"2. Calculate the meeting time T1, which is equal to the total distance S1 divided by the speed of the second mile and V1",
		"2.��������ʱ��T1 ����ʱ��T1=��·��S1/��ë��ë�ٶȺ�V1"},
		{"3. Calculate the distance traveled by the dog S2=Meeting time T1 * Dog speed V3",
		"3.���㹷�ߵ�·��S2 ���ߵ�·��S2=����ʱ��T1*���ٶ�V3"},
		//������
		{"BighairspeedV2","��ë�ٶ�V2"},
		{"SecondspeedV3","��ë�ٶ�V3"},
		{"TotaldistanceS1","��·��S1"},
		{"DogspeedV3","���ٶ�V3"},
		{"DaMaoErMaoSpeedandV1","��ë��ë�ٶȺ�V1"},
		{"MeetingtimeT1","����ʱ��T1"},
		{"TheJourneyoftheDogS2","���ߵ�·��S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ë�ٶ�V2, 120);
	DefineLangVarInt(��ë�ٶ�V3, 80);
	DefineLangVarInt(��·��S1, 1000);
	DefineLangVarInt(���ٶ�V3, 500);
	ColPrintf(PrintfCol::����, Lang("P76 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��AB�������400ǧ�ף��״�A��B���ٶ���60ǧ�ף���Сʱ���Ҵ�B��A���ٶ���80ǧ�ף��೤ʱ������?"));
	DefineLangVarInt(��ë��ë�ٶȺ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ë��ë�ٶȺ�V1 ��ë��ë�ٶȺ�V1=��ë�ٶ�V2+��ë�ٶ�V3"));
	��ë��ë�ٶȺ�V1 = ��ë�ٶ�V2 + ��ë�ٶ�V3;
	��ë��ë�ٶȺ�V1.PrintProcessLog(1);
	DefineLangVarInt(����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������ʱ��T1 ����ʱ��T1=��·��S1/��ë��ë�ٶȺ�V1"));
	����ʱ��T1 = ��·��S1 / ��ë��ë�ٶȺ�V1;
	����ʱ��T1.PrintProcessLog(2);
	DefineLangVarInt(���ߵ�·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㹷�ߵ�·��S2 ���ߵ�·��S2=����ʱ��T1*���ٶ�V3"));
	���ߵ�·��S2 = ����ʱ��T1 * ���ٶ�V3;
	���ߵ�·��S2.PrintProcessLog(3);
}
void P76_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case Four Travel Problem","P76 ���� �г�����"},
		{"Title: There are two types of cars in Beiwang Town and Nanwang Town: buses and minibuses. The speed of buses from Beiwang Town to Nanwang Town is 35 kilometers per hour, and the speed of minibuses from Nanwang Town to Beiwang Town is 40 kilometers per hour. They meet at a distance of 2.5 kilometers from the midpoint of the two towns. What is the total distance in kilometers",
		"��Ŀ���������������ĳ������֣���ͣ��аͣ���ʹӱ������������ٶ���35ǧ��ÿСʱ���аʹ������򵽱������ٶ���40ǧ��ÿСʱ�������������е�2.5ǧ�׵ĵط���������·���Ƕ���ǧ��"},
		{"1. Calculate the distance S1 that the bus has walked more than the minibus, which is equal to the distance S2 from the midpoint multiplied by N1",
		"1.�����ͱ��аͶ���·��S1 ��ͱ��аͶ���·��S1=���е����S2*����N1"},
		{"2. Calculate the hourly speed difference V1=bus speed V2- bus speed V3",
		"2.����ÿСʱ�ٶȲ�V1 ÿСʱ�ٶȲ�V1=����ٶ�V2-�а��ٶ�V3"},
		{"3. Calculate the speed and V2 speed, and V2=bus speed V2+bus speed V3",
		"3.�����ٶȺ�V2 �ٶȺ�V2=����ٶ�V2+�а��ٶ�V3"},
		{"4. Calculate the total time T1, which is equal to the distance traveled by the bus compared to the minibus S1 divided by the speed difference V1 per hour",
		"4.������ʱ��T1 ��ʱ��T1=��ͱ��аͶ���·��S1/ÿСʱ�ٶȲ�V1"},
		{"5. Calculate the total distance S2=total time T1 * speed and V2",
		"5.������·��S2 ��·��S2=��ʱ��T1*�ٶȺ�V2"},
		//������
		{"DistancefrommidpointS2","���е����S2"},
		{"MagnificationN1","����N1"},
		{"BusspeedV2","����ٶ�V2"},
		{"ChinaPakistanspeedV3","�а��ٶ�V3"},
		{"BuseshavemorewalkingdistanceS1thanminibuses","��ͱ��аͶ���·��S1"},
		{"HourlyspeeddifferenceV1","ÿСʱ�ٶȲ�V1"},
		{"SpeedandV2","�ٶȺ�V2"},
		{"TotaltimeT1","��ʱ��T1"},
		{"TotaldistanceS2","��·��S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ���е����S2, 2.5);
	DefineLangVar(float, ����N1, 2);
	DefineLangVar(float, ����ٶ�V2, 40);
	DefineLangVar(float, �а��ٶ�V3, 35);
	const char* pPic =
		"���-----------------------------><------------------�а�\n"
		"                   1000ǧ�� 2.5ǧ��\n"
		"������-------------------|---|---|-----------------������\n"
		"                          �е�"
		;
	ColPrintf(PrintfCol::����, Lang("P76 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���������������ĳ������֣���ͣ��аͣ���ʹӱ������������ٶ���35ǧ��ÿСʱ���аʹ������򵽱������ٶ���40ǧ��ÿСʱ�������������е�2.5ǧ�׵ĵط���������·���Ƕ���ǧ��"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVar(float,��ͱ��аͶ���·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ͱ��аͶ���·��S1 ��ͱ��аͶ���·��S1=���е����S2*����N1"));
	��ͱ��аͶ���·��S1 = ���е����S2 * ����N1;
	��ͱ��аͶ���·��S1.PrintProcessLog(1);
	DefineLangVar(float, ÿСʱ�ٶȲ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ÿСʱ�ٶȲ�V1 ÿСʱ�ٶȲ�V1=����ٶ�V2-�а��ٶ�V3"));
	ÿСʱ�ٶȲ�V1 = ����ٶ�V2 - �а��ٶ�V3;
	ÿСʱ�ٶȲ�V1.PrintProcessLog(2);
	DefineLangVar(float, �ٶȺ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ٶȺ�V2 �ٶȺ�V2=����ٶ�V2+�а��ٶ�V3"));
	�ٶȺ�V2 = ����ٶ�V2 + �а��ٶ�V3;
	�ٶȺ�V2.PrintProcessLog(3);
	DefineLangVar(float, ��ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ʱ��T1 ��ʱ��T1=��ͱ��аͶ���·��S1/ÿСʱ�ٶȲ�V1"));
	��ʱ��T1 = ��ͱ��аͶ���·��S1 / ÿСʱ�ٶȲ�V1;
	��ʱ��T1.PrintProcessLog(4);
	DefineLangVar(float, ��·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("5.������·��S2 ��·��S2=��ʱ��T1*�ٶȺ�V2"));
	��·��S2 = ��ʱ��T1 * �ٶȺ�V2;
	��·��S2.PrintProcessLog(5);
}
void P76_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case 5 Travel Problem","P76 ���� �г�����"},
		{"Title: A lion chasing a sheep, the sheep is 10 meters ahead, the lion's speed is 10, and the sheep's speed is 8. How many seconds will it take to catch up with the sheep?",
		"��Ŀ��һֻʨ��׷��һֻ��������ǰ��10��λ�ã�ʨ�ӵ��ٶ���10������ٶ���8���������׷����?"},
		{"1. Calculate the speed difference V1 and peed difference V1=Lion speed V2-Sheep speed V3",
		"1.�����ٶȲ�V1 �ٶȲ�V1=ʨ���ٶ�V2-���ٶ�V3"},
		{"2. Calculate the time of catching up T1 and time of catching up T1=catching distance S1/speed difference V1",
		"2.����׷��ʱ��T1 ׷��ʱ��T1=׷��·��S1/�ٶȲ�V1"},
		//������
		{"LionSpeedV2","ʨ���ٶ�V2"},
		{"SheepspeedV3","���ٶ�V3"},
		{"ChasingthedistanceS1","׷��·��S1"},
		{"SpeeddifferenceV1","�ٶȲ�V1"},
		{"ChasingTimeT1","׷��ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ʨ���ٶ�V2, 10);
	DefineLangVarInt(���ٶ�V3, 8);
	DefineLangVarInt(׷��·��S1, 10);
	ColPrintf(PrintfCol::����, Lang("P76 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һֻʨ��׷��һֻ��������ǰ��10��λ�ã�ʨ�ӵ��ٶ���10������ٶ���8���������׷����?"));
	const char* pPic =
		"ʨ��|-----|----------------->\n"
		"     10�� ��---------------------->\n"
		"A----------------------270ǧ��---------------B\n"
		;
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(�ٶȲ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����ٶȲ�V1 �ٶȲ�V1=ʨ���ٶ�V2-���ٶ�V3"));
	�ٶȲ�V1 = ʨ���ٶ�V2 - ���ٶ�V3;
	�ٶȲ�V1.PrintProcessLog(1);
	DefineLangVarInt(׷��ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.����׷��ʱ��T1 ׷��ʱ��T1=׷��·��S1/�ٶȲ�V1"));
	׷��ʱ��T1 = ׷��·��S1 / �ٶȲ�V1;
	׷��ʱ��T1.PrintProcessLog(2);
}
void P76_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P76 Case Six Travel Problem","P76 ���� �г�����"},
		{"Question: Two cars are traveling to the airport at speeds of 30 kilometers per hour and 45 kilometers per hour respectively. The first car takes 30 minutes to travel before the second car leaves. Both cars arrive at the same time. What is the total distance?",
		"��Ŀ���������ֱ���30ǧ�׺�45ǧ��ÿСʱ���ٶ�ȥ�ɻ�������һ������30���Ӻ󣬵ڶ��������ߣ�������ͬʱ�������·��?"},
		{"1. Convert the time difference T1 of the second vehicle to 0.5 hours in units of 30 minutes",
		"1.�ڶ���ʱ���T1ת��Ϊ��СʱΪ��λ 30����=0.5Сʱ"},
		{"2. Calculate the following distance S1. The following distance S1 is equal to the time difference T1 of the second vehicle multiplied by the speed V1 of the first vehicle",
		"2.����׷��·��S1 ׷��·��S1=�ڶ���ʱ���T1*��һ�����ٶ�V1"},
		{"3. Calculate the speed difference V3, which is equal to the speed of the first vehicle V1 minus the speed of the second vehicle V2",
		"3.�����ٶȲ�V3 �ٶȲ�V3=��һ�����ٶ�V1-�ڶ������ٶ�V2"},
		{"4. Calculate the total distance S2. The total distance S2 is equal to the following distance S1 divided by the speed difference V3",
		"4.������·��S2 ��·��S2=׷��·��S1/�ٶȲ�V3"},
		//������
		{"SecondvehicletimedifferenceT1","�ڶ���ʱ���T1"},
		{"FirstvehiclespeedV1","��һ�����ٶ�V1"},
		{"SecondvehiclespeedV2","�ڶ������ٶ�V2"},
		{"ChasingthedistanceS1","׷��·��S1"},
		{"SpeeddifferenceV3","�ٶȲ�V3"},
		{"TotaldistanceS2","��·��S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,�ڶ���ʱ���T1, 30);
	DefineLangVar(float, ��һ�����ٶ�V1, 45);
	DefineLangVar(float, �ڶ������ٶ�V2, 30);
	const char* pPic =
		"��һ����|------------------|--------------------------------------->\n"
		"         ��һ������30����  �ڶ�����-------------------------------->\n"
		"A------------------------------------------------------------------�ɻ���\n"
		;
	ColPrintf(PrintfCol::����, Lang("P76 ���� �г�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һֻʨ��׷��һֻ��������ǰ��10��λ�ã�ʨ�ӵ��ٶ���10������ٶ���8���������׷����?"));
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("1.�ڶ���ʱ���T1ת��Ϊ��СʱΪ��λ 30����=0.5Сʱ"));
	�ڶ���ʱ���T1.Var = 0.5;
	DefineLangVar(float, ׷��·��S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.����׷��·��S1 ׷��·��S1=�ڶ���ʱ���T1*��һ�����ٶ�V1"));
	׷��·��S1 = �ڶ���ʱ���T1 * ��һ�����ٶ�V1;
	׷��·��S1.PrintProcessLog(2);
	DefineLangVar(float, �ٶȲ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ٶȲ�V3 �ٶȲ�V3=��һ�����ٶ�V1-�ڶ������ٶ�V2"));
	�ٶȲ�V3 = ��һ�����ٶ�V1 - �ڶ������ٶ�V2;
	�ٶȲ�V3.PrintProcessLog(3);
	DefineLangVar(float, ��·��S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.������·��S2 ��·��S2=׷��·��S1/�ٶȲ�V3"));
	��·��S2 = ׷��·��S1 / �ٶȲ�V3;
	��·��S2.PrintProcessLog(4);
}
void P76()
{
	P76_1();
	ColPrintf(PrintfCol::����, "");
	P76_2();
	ColPrintf(PrintfCol::����, "");
	P76_3();
	ColPrintf(PrintfCol::����, "");
	P76_4();
	ColPrintf(PrintfCol::����, "");
	P76_5();
	ColPrintf(PrintfCol::����, "");
	P76_6();
	ColPrintf(PrintfCol::����, "");
}
void P76_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P76();
	Lang.SetCurLanguage(LanguageLib::English);
	P76();
	ColPrintf(PrintfCol::����, "");

}