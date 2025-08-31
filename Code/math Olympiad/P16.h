#pragma once
void P16_1()
{
	LanguageLib::LanguageTableT Language = {
		{"Example of P16: A Floating Ship","P16����һ ��ˮ�д�"},
		{"Title: A ship sailed upstream and dropped a kettle into the river halfway. When it was discovered, it was already 2\nkilometers away from the kettle. The ship's static water velocity was 4 kilometers, and the water flow velocity was 2 kilometers.\nDoes it take a long time to catch up with the kettle?",
		"��Ŀ��һ�Ҵ��������ϣ���;��ˮ�����뽭�У�����ʱ�Ѿ���ˮ��2ǧ�ף�����ˮ�ٶ���4ǧ�ף�ˮ���ٶ���2ǧ�ף�׷��ˮ��Ҫ����ʱ��?"},
		{"1. Calculate their speed difference V1. Their speed difference V1=(static water velocity V2+water velocity V3) - water velocity V3",
		"1.�������ǵ��ٶȲ�V1 ���ǵ��ٶȲ�V1=(��ˮ�ٶ�V2+ˮ��V3)-ˮ��V3"},
		{"2. Calculate the time T1 to catch up with the kettle. The time T1 to catch up with the kettle is equal to the distance S1/their speed difference V1",
		"2.����׷��ˮ��ʱ��T1 ׷��ˮ��ʱ��T1=׷��·��S1/���ǵ��ٶȲ�V1"},
		//������
		{"StaticWaterVelocityV2","��ˮ�ٶ�V2"},
		{"WaterSpeedV3","ˮ��V3"},
		{"ChasingTheDistanceS1","׷��·��S1"},
		{"TheirSpeedDifferenceV1","���ǵ��ٶȲ�V1"},
		{"CatchUpWithTheKettleTimeT1","׷��ˮ��ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ��ˮ�ٶ�V2, 4);
	DefineLangVar(float, ˮ��V3, 2);
	DefineLangVar(float, ׷��·��S1, 2);
	DefineLangVar(float,���ǵ��ٶȲ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("P16����һ ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ�Ҵ��������ϣ���;��ˮ�����뽭�У�����ʱ�Ѿ���ˮ��2ǧ�ף�����ˮ�ٶ���4ǧ�ף�ˮ���ٶ���2ǧ�ף�׷��ˮ��Ҫ����ʱ��?"));
	ColPrintf(PrintfCol::����, Lang("1.�������ǵ��ٶȲ�V1 ���ǵ��ٶȲ�V1=(��ˮ�ٶ�V2+ˮ��V3)-ˮ��V3"));
	���ǵ��ٶȲ�V1 = (��ˮ�ٶ�V2 + ˮ��V3) - ˮ��V3;
	���ǵ��ٶȲ�V1.PrintProcessLog(1);
	DefineLangVar(float, ׷��ˮ��ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("2.����׷��ˮ��ʱ��T1 ׷��ˮ��ʱ��T1=׷��·��S1/���ǵ��ٶȲ�V1"));
	׷��ˮ��ʱ��T1 = ׷��·��S1 / ���ǵ��ٶȲ�V1;
	׷��ˮ��ʱ��T1.PrintProcessLog(2);
}
void P16_2()
{
	LanguageLib::LanguageTableT Language = {
		{"Example of P16: A Floating Ship","P16������ ��ˮ�д�"},
		{"Title: A and B travel 480 kilometers downstream, 56 kilometers in still water, 40 kilometers in still water, with a water speed of 8 kilometers.\nA starts chasing after B 1.5 hours after departure, turns back when A arrives, and meets B halfway. At this point,\nhow many kilometers are you from the finish line?",
		"��Ŀ������˳������480ǧ�ף���ˮ�м���56ǧ�ף�����40ǧ�ף�ˮ��Ϊ8ǧ�ף��ҳ�����1.5Сʱ�׿�ʼ׷���׵����۷���������;������������ʱ���յ����ǧ�ף�"},
		{"1. Calculate the total travel time T1 of A driving along the water, which is equal to the total travel time S1 divided by the speed V1 of A in still water and the speed V1 of the water",
		"1.�����˳ˮ��ʻȫ��ʱ��T1 ��˳ˮ��ʻȫ��ʱ��T1=ȫ��S1/(��ˮ�м��ٶ�V1+ˮ��V1)"},
		{"2. Calculate the total travel time T2 for B to travel along the water, which is equal to the total travel time S1 divided by (B's speed V2 in still water+water speed V1)",
		"2.������˳ˮ��ʻȫ��ʱ��T2 ��˳ˮ��ʻȫ��ʱ��T2=ȫ��S1/(��ˮ�����ٶ�V2+ˮ��V1)"},
		{"3. Calculate the time T3 for A to arrive and then for B to travel. The time T3 for A to arrive and\nthen for B to travel is equal to the total time T1 for A to travel along the river\nplus the total time T2 for B to travel along the river",
		"3.����׵�������е�ʱ��T3 �׵�������е�ʱ��T3=���ҳ���ʱ���T4+��˳ˮ��ʻȫ��ʱ��T1"},
		{"4. Calculate the velocity V1 of B in still water. The velocity V1 of B in still water is equal to the sum of the velocity V2 of B in still water and the velocity V1 of the water",
		"4.������˳ˮ���ٶ�V1 ��˳ˮ���ٶ�V1=��ˮ�����ٶ�V2+ˮ��V1"},
		{"5. Calculate the total distance S2 from point A to point B, which is equal to (the total time T2 for point B to\ntravel downstream - the time T3 for point A to travel downstream) multiplied by the speed V1 of point\nB traveling downstream",
		"5.����׵����Ҿ���ȫ�̾���S2 �׵����Ҿ���ȫ�̾���S2=(��˳ˮ��ʻȫ��ʱ��T2-�׵�������е�ʱ��T3)*��˳ˮ���ٶ�V1"},
		{"6. Calculate the upstream velocity V3 of A=the velocity V1 of A in still water minus the velocity V1 of water",
		"6.�������ˮ�ٶ�V3 ����ˮ�ٶ�V3=��ˮ�м��ٶ�V1-ˮ��V1"},
		{"7. Calculate the distance S3 from the endpoint at this time. The distance S3 from the endpoint at this time is equal to the total distance S1- ((A's upstream speed V3+B's downstream speed V1)/multiplier N1)",
		"7.�����ʱ���յ����S3 ��ʱ���յ����S3=ȫ��S1-(��˳ˮ���ٶ�V1/����N1)"},
		//������
		{"FullS1","ȫ��S1"},
		{"VelocityV1ofarmorinstillwater","��ˮ�м��ٶ�V1"},
		{"WatervelocityV1","ˮ��V1"},
		{"VelocityV2ofBinstillwater","��ˮ�����ٶ�V2"},
		{"ThedeparturetimedifferencebetweenAandBisT4","���ҳ���ʱ���T4"},
		{"MagnificationN1","����N1"},
		{"Jiadownstream'stotaltraveltimeT1","��˳ˮ��ʻȫ��ʱ��T1"},
		{"ThetotaltraveltimeT2forYidownstream","��˳ˮ��ʻȫ��ʱ��T2"},
		{"ThetimeT3forBtotravelafterAarrives","�׵�������е�ʱ��T3"},
		{"ThespeedofflowingwaterV1","��˳ˮ���ٶ�V1"},
		{"ThetotaldistancefrompointAtopointBisS2","�׵����Ҿ���ȫ�̾���S2"},
		{"Jia'supstreamspeedV3","����ˮ�ٶ�V3"},
		{"Atthispoint,thedistancefromtheendpointisS3","��ʱ���յ����S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ȫ��S1, 480);
	DefineLangVar(float, ��ˮ�м��ٶ�V1, 56);
	DefineLangVar(float, ˮ��V1, 8);
	DefineLangVar(float, ��ˮ�����ٶ�V2, 40);
	DefineLangVar(float, ���ҳ���ʱ���T4, 1.5);
	DefineLangVar(float, ����N1, 2);
	const char* pPic =
		"1.5Сʱʱ\n"
		"               480ǧ��\n"
		"|-------------------------------------|\n"
		">\n"
		"��\n"
		"-----��---->\n"
		"9Сʱʱ\n"
		"               480ǧ��\n"
		"|-------------------------------------|\n"
		"------------------��------------------>\n"
		"-----��---------------------->\n"
		" \n"
		"               480ǧ��\n"
		"|-------------------------------------|\n"
		"------------------��------------------|\n"
		"                                   <--|\n"
		"-----��--------------------------->\n"
		;
	ColPrintf(PrintfCol::����, Lang("P16������ ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������˳������480ǧ�ף���ˮ�м���56ǧ�ף�����40ǧ�ף�ˮ��Ϊ8ǧ�ף��ҳ�����1.5Сʱ�׿�ʼ׷���׵����۷���������;������������ʱ���յ����ǧ�ף�"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVar(float, ��˳ˮ��ʻȫ��ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����˳ˮ��ʻȫ��ʱ��T1 ��˳ˮ��ʻȫ��ʱ��T1=ȫ��S1/(��ˮ�м��ٶ�V1+ˮ��V1)"));
	��˳ˮ��ʻȫ��ʱ��T1 = ȫ��S1 / (��ˮ�м��ٶ�V1 + ˮ��V1);
	��˳ˮ��ʻȫ��ʱ��T1.PrintProcessLog(1);
	DefineLangVar(float, ��˳ˮ��ʻȫ��ʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������˳ˮ��ʻȫ��ʱ��T2 ��˳ˮ��ʻȫ��ʱ��T2=ȫ��S1/(��ˮ�����ٶ�V2+ˮ��V1)"));
	��˳ˮ��ʻȫ��ʱ��T2 = ȫ��S1 / (��ˮ�����ٶ�V2 + ˮ��V1);
	��˳ˮ��ʻȫ��ʱ��T2.PrintProcessLog(2);
	DefineLangVar(float, �׵�������е�ʱ��T3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����׵�������е�ʱ��T3 �׵�������е�ʱ��T3=���ҳ���ʱ���T4+��˳ˮ��ʻȫ��ʱ��T1"));
	�׵�������е�ʱ��T3 = ���ҳ���ʱ���T4 + ��˳ˮ��ʻȫ��ʱ��T1;
	�׵�������е�ʱ��T3.PrintProcessLog(3);
	DefineLangVar(float, ��˳ˮ���ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("4.������˳ˮ���ٶ�V1 ��˳ˮ���ٶ�V1=��ˮ�����ٶ�V2+ˮ��V1"));
	��˳ˮ���ٶ�V1 = ��ˮ�����ٶ�V2 + ˮ��V1;
	��˳ˮ���ٶ�V1.PrintProcessLog(4);
	DefineLangVar(float, �׵����Ҿ���ȫ�̾���S2, 0);
	ColPrintf(PrintfCol::����, Lang("5.����׵����Ҿ���ȫ�̾���S2 �׵����Ҿ���ȫ�̾���S2=(��˳ˮ��ʻȫ��ʱ��T2-�׵�������е�ʱ��T3)*��˳ˮ���ٶ�V1"));
	�׵����Ҿ���ȫ�̾���S2 = (��˳ˮ��ʻȫ��ʱ��T2 - �׵�������е�ʱ��T3) * ��˳ˮ���ٶ�V1;
	�׵����Ҿ���ȫ�̾���S2.PrintProcessLog(5);
	DefineLangVar(float, ����ˮ�ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("6.�������ˮ�ٶ�V3 ����ˮ�ٶ�V3=��ˮ�м��ٶ�V1-ˮ��V1"));
	����ˮ�ٶ�V3 = ��ˮ�м��ٶ�V1 - ˮ��V1;
	����ˮ�ٶ�V3.PrintProcessLog(6);
	DefineLangVar(float, ��ʱ���յ����S3, 0);
	ColPrintf(PrintfCol::����, Lang("7.�����ʱ���յ����S3 ��ʱ���յ����S3=ȫ��S1-(��˳ˮ���ٶ�V1/����N1)"));
	��ʱ���յ����S3 = ȫ��S1 - (��˳ˮ���ٶ�V1 / ����N1);
	��ʱ���յ����S3.PrintProcessLog(7);
}
void P16()
{
	P16_1();
	ColPrintf(PrintfCol::����, "");
	P16_2();
	ColPrintf(PrintfCol::����, "");
}
void P16_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P16();
	Lang.SetCurLanguage(LanguageLib::English);
	P16();
	ColPrintf(PrintfCol::����, "");

}