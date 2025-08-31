#pragma once
void P15_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P15 Example 7: Flowing Ship","P15��7 ��ˮ�д�"},
		{"Title: It took three days for the ship to travel from point A to point B, and four days to travel from point B to point A. The unpowered raft was released from point A and arrived at point B a few days later",
		"��Ŀ���ִ���A�ص�B���������죬��B�ص�A����Ҫ���죬��A�طų��޶���ľ���������B��"},
		{"1. Calculate the water velocity V1. Water velocity V1=(ship downstream time T1+ship upstream time T2)/multiplier N1",
		"1.����ˮ��V1 ˮ��V1=(�ִ�˳��ʱ��T1+�ִ�����ʱ��T2)/����N1"},
		{"2. Let the entire process be the least common multiple of inverse time",
		"2.��ȫ��Ϊ��˳ʱ�����С������"},
		{"3. Calculate the sailing time T2 of the raft. The sailing time T2 of the raft is equal to the total distance S1 divided by the water speed V1",
		"3.����ľ��˳ˮʱ��T2 ľ��˳ˮʱ��T2=ȫ��S1/ˮ��V1"},
		//������
		{"ShipDownstreamTimeT1","�ִ�˳��ʱ��T1"},
		{"ShipReverseFlowTimeT2","�ִ�����ʱ��T2"},
		{"MagnificationN1","����N1"},
		{"FullS1","ȫ��S1"},
		{"WaterVelocityV1","ˮ��V1"},
		{"RaftDownstreamTimeT2","ľ��˳ˮʱ��T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,�ִ�˳��ʱ��T1, 3);
	DefineLangVar(float,�ִ�����ʱ��T2, 4);
	DefineLangVar(float,����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P15��7 ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ִ���A�ص�B���������죬��B�ص�A����Ҫ���죬��A�طų��޶���ľ���������B��"));
	DefineLangVar(float,ˮ��V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ˮ��V1 ˮ��V1=(�ִ�˳��ʱ��T1+�ִ�����ʱ��T2)/����N1"));
	ˮ��V1 = (�ִ�˳��ʱ��T1 + �ִ�����ʱ��T2) / ����N1;
	ˮ��V1.PrintProcessLog(1);
	DefineLangVar(float,ȫ��S1, MinCommonMultiple(�ִ�˳��ʱ��T1.Var, �ִ�����ʱ��T2.Var));
	ColPrintf(PrintfCol::����, Lang("2.��ȫ��Ϊ��˳ʱ�����С������"));
	ȫ��S1 = ȫ��S1;
	ȫ��S1.PrintProcessLog(2);
	DefineLangVar(float,ľ��˳ˮʱ��T2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ľ��˳ˮʱ��T2 ľ��˳ˮʱ��T2=ȫ��S1/ˮ��V1"));
	ľ��˳ˮʱ��T2 = ȫ��S1 / ˮ��V1;
	ľ��˳ˮʱ��T2.PrintProcessLog(2);
}
void P15_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P15 Case 8: Flowing Ship","P15��8 ��ˮ�д�"},
		{"Title: A small boat sailing for 33 kilometers in the forward current, 11 kilometers in the reverse current, takes 11\nhours, 24 kilometers in the forward current, and 14 kilometers in the reverse current. What are\nthe static water velocity and water flow velocity in kilometers?",
		"��Ŀ��һ��С�����У�˳����33ǧ�ף���������11ǧ����ʱ11Сʱ��˳����24ǧ�ף���������14ǧ�ף���ˮ�ٶȺ�ˮ���ٶ��Ƕ���ǧ�ף�"},
		{"1. Calculate the downstream distance difference S1. The downstream distance difference S1=33 kilometers of downstream current -24 kilometers of downstream current",
		"1.����˳��·�̲�S1 ˳��·�̲�S1=˳����33ǧ��-˳����24ǧ��"},
		{"2. Calculate the reverse flow distance difference S2. The reverse flow distance difference S2=reverse flow 14 kilometers - reverse flow 11 kilometers",
		"2.��������·�̲�S2 ����·�̲�S2=������14ǧ��-������11ǧ��"},
		{"3. Calculate the downstream distance multiple N1. The downstream distance multiple N1=downstream distance difference S1/upstream distance difference S2",
		"3.����˳��·�̱���N1 ˳��·�̱���N1=˳��·�̲�S1/����·�̲�S2"},
		{"4. Calculate the counter current velocity V1. Counter current velocity V1=(33 kilometers of forward current/multiple of forward distance N1)/total time T1",
		"4.���������ٶ�V1 �����ٶ�V1=(˳����33ǧ��/˳��·�̱���N1)/��ʱ��T1"},
		{"5. Calculate the downstream velocity V2, which is equal to the upstream velocity V1 multiplied by the downstream distance multiple N1",
		"5.����˳ˮ�ٶ�V2 ˳ˮ�ٶ�V2=�����ٶ�V1*˳��·�̱���N1"},
		{"6. Calculate the static water velocity V3. Static water velocity V3=(counter current velocity V1+downstream velocity V2)/multiplier N1",
		"6.���㾲ˮ�ٶ�V3 ��ˮ�ٶ�V3=(�����ٶ�V1+˳ˮ�ٶ�V2)/����N1"},
		{"7. Calculate the water velocity V4, which is equal to (downstream velocity V2- upstream velocity V1) divided by the ratio N1",
		"7.����ˮ�ٶ�V4 ˮ�ٶ�V4=(˳ˮ�ٶ�V2-�����ٶ�V1)/����N1"},
		//������
		{"Shunxing33Kilometers","˳����33ǧ��"},
		{"Shunxing24Kilometers","˳����24ǧ��"},
		{"ReverseEpidemic14Kilometers","������14ǧ��"},
		{"CounterEpidemic11Kilometers","������11ǧ��"},
		{"TotalTimeT1","��ʱ��T1"},
		{"MagnificationN1","����N1"},
		{"WaterVelocityV4","ˮ�ٶ�V4"},
		{"DownstreamDistanceDifferenceS1" ,"˳��·�̲�S1"},
		{"ReverseFlowDistanceDifferenceS2","����·�̲�S2"},
		{"ParallelTravelMultipleN1","˳��·�̱���N1"},
		{"ReverseFlowVelocityV1","�����ٶ�V1"},
		{"ParallelSpeedV2","˳ˮ�ٶ�V2"},
		{"StaticWaterVelocityV3","��ˮ�ٶ�V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ˳����33ǧ��, 33);
	DefineLangVar(float, ˳����24ǧ��, 24);
	DefineLangVar(float, ������14ǧ��, 14);
	DefineLangVar(float, ������11ǧ��, 11);
	DefineLangVar(float, ��ʱ��T1, 11);
	DefineLangVar(float, ����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P15��8 ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ��С�����У�˳����33ǧ�ף���������11ǧ����ʱ11Сʱ��˳����24ǧ�ף���������14ǧ�ף���ˮ�ٶȺ�ˮ���ٶ��Ƕ���ǧ�ף�"));
	DefineLangVar(float, ˳��·�̲�S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����˳��·�̲�S1 ˳��·�̲�S1=˳����33ǧ��-˳����24ǧ��"));
	˳��·�̲�S1 = ˳����33ǧ�� - ˳����24ǧ��;
	˳��·�̲�S1.PrintProcessLog(1);
	DefineLangVar(float, ����·�̲�S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������·�̲�S2 ����·�̲�S2=������14ǧ��-������11ǧ��"));
	����·�̲�S2 = ������14ǧ�� - ������11ǧ��;
	����·�̲�S2.PrintProcessLog(2);
	DefineLangVar(float, ˳��·�̱���N1, 0);
	ColPrintf(PrintfCol::����, Lang("3.����˳��·�̱���N1 ˳��·�̱���N1=˳��·�̲�S1/����·�̲�S2"));
	˳��·�̱���N1 = ˳��·�̲�S1 / ����·�̲�S2;
	˳��·�̱���N1.PrintProcessLog(3);
	DefineLangVar(float, �����ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("4.���������ٶ�V1 �����ٶ�V1=(˳����33ǧ��/˳��·�̱���N1)/��ʱ��T1"));
	�����ٶ�V1 = (˳����33ǧ�� / ˳��·�̱���N1) / ��ʱ��T1;
	�����ٶ�V1.PrintProcessLog(4);
	DefineLangVar(float, ˳ˮ�ٶ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("5.����˳ˮ�ٶ�V2 ˳ˮ�ٶ�V2=�����ٶ�V1*˳��·�̱���N1"));
	˳ˮ�ٶ�V2 = �����ٶ�V1 * ˳��·�̱���N1;
	˳ˮ�ٶ�V2.PrintProcessLog(5);
	DefineLangVar(float, ��ˮ�ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㾲ˮ�ٶ�V3 ��ˮ�ٶ�V3=(�����ٶ�V1+˳ˮ�ٶ�V2)/����N1"));
	��ˮ�ٶ�V3 = (�����ٶ�V1 + ˳ˮ�ٶ�V2) / ����N1;
	��ˮ�ٶ�V3.PrintProcessLog(6);
	DefineLangVar(float, ˮ�ٶ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("7.����ˮ�ٶ�V4 ˮ�ٶ�V4=(˳ˮ�ٶ�V2-�����ٶ�V1)/����N1"));
	ˮ�ٶ�V4 = (˳ˮ�ٶ�V2 - �����ٶ�V1) / ����N1;
	ˮ�ٶ�V4.PrintProcessLog(7);
}
void P15_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P15 Case 8: Flowing Ship","P15���� ��ˮ�д�"},
		{"Title: A small boat sailing for 120 kilometers in the forward current, 80 kilometers in the reverse current, takes 80\nhours, 80 kilometers in the forward current, and 120 kilometers in the reverse current. What are\nthe static water velocity and water flow velocity in kilometers?",
		"��Ŀ��һ���ִ����У�˳����120ǧ�ף���������120ǧ����ʱ16Сʱ��˳����60ǧ�ף���������120ǧ�ף�ˮ���ٶ��Ƕ���ǧ�ף�"},
		{"1. Calculate the downstream distance difference S1. The downstream distance difference S1=120 kilometers of downstream current -80 kilometers of downstream current",
		"1.����˳��·�̲�S1 ˳��·�̲�S1=˳����120ǧ��-˳����60ǧ��"},
		{"2. Calculate the reverse flow distance difference S2. The reverse flow distance difference S2=reverse flow 120 kilometers - reverse flow 80 kilometers",
		"2.��������·�̲�S2 ����·�̲�S2=������120ǧ��-������120ǧ��"},
		{"3. Calculate the downstream distance multiple N1. The downstream distance multiple N1=downstream distance difference S1/upstream distance difference S2",
		"3.����˳��·�̱���N1 ˳��·�̱���N1=˳��·�̲�S1/����·�̲�S2"},
		{"4. Calculate the counter current velocity V1. Counter current velocity V1=((forward current 120 kilometers/forward current distance multiple N1)+counter current 80 kilometers)/total time T1",
		"4.���������ٶ�V1 �����ٶ�V1=((˳����120ǧ��/˳��·�̱���N1)+������80ǧ��)/��ʱ��T1"},
		{"5. Calculate the downstream velocity V2, which is equal to the upstream velocity V1 multiplied by the downstream distance multiple N1",
		"5.����˳ˮ�ٶ�V2 ˳ˮ�ٶ�V2=�����ٶ�V1*˳��·�̱���N1"},
		{"6. Calculate the static water velocity V3. Static water velocity V3=(counter current velocity V1+downstream velocity V2)/multiplier N1",
		"6.���㾲ˮ�ٶ�V3 ��ˮ�ٶ�V3=(�����ٶ�V1+˳ˮ�ٶ�V2)/����N1"},
		{"7. Calculate the water velocity V4, which is equal to (downstream velocity V2- upstream velocity V1) divided by the ratio N1",
		"7.����ˮ�ٶ�V4 ˮ�ٶ�V4=(˳ˮ�ٶ�V2-�����ٶ�V1)/����N1"},
		//������
		{"Shunxing33Kilometers","˳����120ǧ��"},
		{"Shunxing24Kilometers","˳����60ǧ��"},
		{"ReverseEpidemic14Kilometers","������120ǧ��"},
		{"CounterEpidemic11Kilometers","������80ǧ��"},
		{"TotalTimeT1","��ʱ��T1"},
		{"WaterVelocityV4","ˮ�ٶ�V4"},
		{"MagnificationN1","����N1"},
		{"DownstreamDistanceDifferenceS1" ,"˳��·�̲�S1"},
		{"ReverseFlowDistanceDifferenceS2","����·�̲�S2"},
		{"ParallelTravelMultipleN1","˳��·�̱���N1"},
		{"ReverseFlowVelocityV1","�����ٶ�V1"},
		{"ParallelSpeedV2","˳ˮ�ٶ�V2"},
		{"StaticWaterVelocityV3","��ˮ�ٶ�V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ˳����120ǧ��, 120);
	DefineLangVar(float, ˳����60ǧ��, 60);
	DefineLangVar(float, ������120ǧ��, 120);
	DefineLangVar(float, ������80ǧ��, 80);
	DefineLangVar(float, ��ʱ��T1, 16);
	DefineLangVar(float, ����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P15���� ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ���ִ����У�˳����120ǧ�ף���������120ǧ����ʱ16Сʱ��˳����60ǧ�ף���������120ǧ�ף�ˮ���ٶ��Ƕ���ǧ�ף�"));
	DefineLangVar(float, ˳��·�̲�S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����˳��·�̲�S1 ˳��·�̲�S1=˳����120ǧ��-˳����60ǧ��"));
	˳��·�̲�S1 = ˳����120ǧ�� - ˳����60ǧ��;
	˳��·�̲�S1.PrintProcessLog(1);
	DefineLangVar(float, ����·�̲�S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.��������·�̲�S2 ����·�̲�S2=������120ǧ��-������80ǧ��"));
	����·�̲�S2 = ������120ǧ�� - ������80ǧ��;
	����·�̲�S2.PrintProcessLog(2);
	DefineLangVar(float, ˳��·�̱���N1, 0);
	ColPrintf(PrintfCol::����, Lang("3.����˳��·�̱���N1 ˳��·�̱���N1=˳��·�̲�S1/����·�̲�S2"));
	˳��·�̱���N1 = ˳��·�̲�S1 / ����·�̲�S2;
	˳��·�̱���N1.PrintProcessLog(3);
	DefineLangVar(float, �����ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("4.���������ٶ�V1 �����ٶ�V1=((˳����120ǧ��/˳��·�̱���N1)+������80ǧ��)/��ʱ��T1"));
	�����ٶ�V1 = ((˳����120ǧ�� / ˳��·�̱���N1) + ������80ǧ��) / ��ʱ��T1;
	�����ٶ�V1.PrintProcessLog(4);
	DefineLangVar(float, ˳ˮ�ٶ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("5.����˳ˮ�ٶ�V2 ˳ˮ�ٶ�V2=�����ٶ�V1*˳��·�̱���N1"));
	˳ˮ�ٶ�V2 = �����ٶ�V1 * ˳��·�̱���N1;
	˳ˮ�ٶ�V2.PrintProcessLog(5);
	DefineLangVar(float, ��ˮ�ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㾲ˮ�ٶ�V3 ��ˮ�ٶ�V3=(�����ٶ�V1+˳ˮ�ٶ�V2)/����N1"));
	��ˮ�ٶ�V3 = (�����ٶ�V1 + ˳ˮ�ٶ�V2) / ����N1;
	��ˮ�ٶ�V3.PrintProcessLog(6);
	DefineLangVar(float, ˮ�ٶ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("7.����ˮ�ٶ�V4 ˮ�ٶ�V4=(˳ˮ�ٶ�V2-�����ٶ�V1)/����N1"));
	ˮ�ٶ�V4 = (˳ˮ�ٶ�V2 - �����ٶ�V1) / ����N1;
	ˮ�ٶ�V4.PrintProcessLog(7);
}
void P15()
{
	P15_1();
	ColPrintf(PrintfCol::����, "");
	P15_2();
	ColPrintf(PrintfCol::����, "");
	P15_3();
	ColPrintf(PrintfCol::����, "");
}
void P15_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P15();
	Lang.SetCurLanguage(LanguageLib::English);
	P15();
	ColPrintf(PrintfCol::����, "");

}