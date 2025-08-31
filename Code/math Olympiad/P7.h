#pragma once
void P7_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P7 Example 1 Train Crossing the Bridge","P7��һ �𳵹���"},
		{"Title: A train has a length of 800 meters and a speed of 1000 meters per minute. There are two tunnels on the road. It takes 2 minutes to pass through the\nfirst tunnel and 3 minutes to pass through the second tunnel. It takes a total of 6 minutes to pass through the\ntwo tunnels. What is the distance between the tunnels?",
		"��Ŀ��һ�л𳵳�����800�ף��ٶ���1000��/�֣�·�������������ͨ����һ��ʱ����2���ӣ�ͨ���ڶ���ʱ����3���ӣ�ͨ���������������6���ӣ�����������ף�"},
		{"1. Calculate the first tunnel length S1. The first tunnel length S1 is equal to (train speed V1 * first tunnel time T1) minus the train length S2",
		"1.�����һ�������S1 ��һ�������S1=(���ٶ�V1*��һ���ʱ��T1)-�𳵳���S2"},
		{"2. Calculate the length of the second tunnel S4. The length of the second tunnel S4 is calculated as (train speed V1 * second tunnel time 2) - train length S2",
		"2.����ڶ��������S3 ���������S3=(���ٶ�V1*�ڶ����ʱ��T2)-�𳵳���S2"},
		{"3. Calculate the total distance S1=(train speed V1 * total time T3) - train length S2",
		"3.������·��S4 ��·��S4=(���ٶ�V1*��ʱ��T3)-�𳵳���S2"},
		{"4. Calculate the distance between tunnels S5. The distance between tunnels S5=total distance S4- second tunnel length S3- first tunnel length S1",
		"4.����������S5 ������S5=��·��S4-�ڶ��������S3-��һ�������S1"},
		{"Answer: The distance between tunnels is% dm",
		"��������%dm"},
		//������
		{"TrainSpeedV1","���ٶ�V1"},
		{"FirstTunnelTimeT1","��һ���ʱ��T1"},
		{"SecondTunnelTimeT2","�ڶ����ʱ��T2"},
		{"TrainLengthS2","�𳵳���S2"},
		{"TotalTimeT3","��ʱ��T3"},
		{"FirstTunnelLengthS1","��һ�������S1"},
		{"SecondTunnelLength S3","�ڶ��������S3"},
		{"TotalDistanceS4","��·��S4"},
		{"TunnelDistanceS5","������S5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"        |------------------------6����------------------------|\n"
		"           2����               1����             3����\n"
		"  800�� |------------------|             |--------------------|\n"
		"------->|-----------------------------------------------------|------->\n"
	;
	DefineLangVarInt(���ٶ�V1, 1000);
	DefineLangVarInt(��һ���ʱ��T1, 2);
	DefineLangVarInt(�ڶ����ʱ��T2, 3);
	DefineLangVarInt(�𳵳���S2, 800);
	DefineLangVarInt(��ʱ��T3, 6);
	ColPrintf(PrintfCol::����, Lang("P7��һ �𳵹���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ�л𳵳�����800�ף��ٶ���1000��/�֣�·�������������ͨ����һ��ʱ����2���ӣ�ͨ���ڶ���ʱ����3���ӣ�ͨ���������������6���ӣ�����������ף�"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(��һ�������S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����һ�������S1 ��һ�������S1=(���ٶ�V1*��һ���ʱ��T1)-�𳵳���S2"));
	��һ�������S1 = (���ٶ�V1 * ��һ���ʱ��T1) - �𳵳���S2;
	��һ�������S1.PrintProcessLog(1);
	DefineLangVarInt(�ڶ��������S3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ڶ��������S3 ���������S3=(���ٶ�V1*�ڶ����ʱ��T2)-�𳵳���S2"));
	�ڶ��������S3 = (���ٶ�V1 * �ڶ����ʱ��T2) - �𳵳���S2;
	�ڶ��������S3.PrintProcessLog(2);
	DefineLangVarInt(��·��S4, 0);
	ColPrintf(PrintfCol::����, Lang("3.������·��S4 ��·��S4=(���ٶ�V1*��ʱ��T3)-�𳵳���S2"));
	��·��S4 = (���ٶ�V1 * ��ʱ��T3) - �𳵳���S2;
	��·��S4.PrintProcessLog(3);
	DefineLangVarInt(������S5, 0);
	ColPrintf(PrintfCol::����, Lang("4.����������S5 ������S5=��·��S4-�ڶ��������S3-��һ�������S1"));
	������S5 = ��·��S4 - �ڶ��������S3 - ��һ�������S1;
	������S5.PrintProcessLog(4);
	ColPrintf(PrintfCol::���, Lang("��������%dm"), (int)������S5);
}
void P7_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P7 Example 2 Train Crossing the Bridge","P7���� �𳵹���"},
		{"Title: A 250 meter express train with a speed of 15 meters per second, a 263 meter slow train with a speed of 12 meters per second, traveling in opposite directions and completely staggered. How many seconds does it take?",
		"��Ŀ��һ�п쳵250�ף��ٶ���15��/�룬����263�ף��ٶ���12��/�룬������У���ȫ������Ҫ������?"},
		{"1. Calculate the total distance traveled by the train S1=express train length S2+local train length S3",
		"1.�����һ���߹�����S1 ��һ���߹�����S1=�쳵����S2+��������S3"},
		{"2. Calculate the phase error time T1, which is equal to the total distance traveled by the train S1 divided by the speed of the express train V1 and the speed of the local train V2",
		"2.�������ʱ��T1 ���ʱ��T1=��һ���߹�����S1/(�쳵�ٶ�V1+�����ٶ�V2)"},
		{"Answer: It takes a total of% d seconds",
		"��һ����Ҫ%d��"},
		//������
		{"ExpressTrainConductorS2","�쳵����S2"},
		{"SlowCarDriverS3","��������S3"},
		{"ExpressSpeedV1","�쳵�ٶ�V1"},
		{"SlowSpeedV2","�����ٶ�V2"},
		{"TheTrainHasTraveledATotalDistanceOfS1","��һ���߹�����S1"},
		{"WrongTimeT1","���ʱ��T1"},

	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�쳵����S2, 250);
	DefineLangVarInt(��������S3, 263);

	DefineLangVarInt(�쳵�ٶ�V1, 15);
	DefineLangVarInt(�����ٶ�V2, 12);
	ColPrintf(PrintfCol::����, Lang("P7���� �𳵹���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ�п쳵250�ף��ٶ���15��/�룬����263�ף��ٶ���12��/�룬������У���ȫ������Ҫ������?"));
	DefineLangVarInt(��һ���߹�����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����һ���߹�����S1 ��һ���߹�����S1=�쳵����S2+��������S3"));
	��һ���߹�����S1 = �쳵����S2 + ��������S3;
	��һ���߹�����S1.PrintProcessLog(1);
	DefineLangVarInt(���ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������ʱ��T1 ���ʱ��T1=��һ���߹�����S1/(�쳵�ٶ�V1+�����ٶ�V2)"));
	���ʱ��T1 = ��һ���߹�����S1 / (�쳵�ٶ�V1 + �����ٶ�V2);
	���ʱ��T1.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("��һ����Ҫ%d��"), (int)���ʱ��T1);
}
void P7()
{
	P7_1();
	ColPrintf(PrintfCol::����, "");
	P7_2();
	ColPrintf(PrintfCol::����, "");
}
void P7_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P7();
	Lang.SetCurLanguage(LanguageLib::English);
	P7();
	ColPrintf(PrintfCol::����, "");

}