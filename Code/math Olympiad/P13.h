#pragma once
void P13_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P13 Example Three: Flowing Ships","P13���� ��ˮ�д�"},
		{"Title: Ship B traveled for 2 hours along the water, covering 120 kilometers, and returned in 4 hours. Ship A traveled a distance along the water and returned in 3 hours. How many more hours did Ship A travel along the water than against it?",
		"��Ŀ���Ҵ�˳ˮ����2Сʱ������120ǧ�ף���������4Сʱ���״�˳ˮ����һ�ξ���󣬷�������3Сʱ����˳ˮ�е�ʱ�����ˮ�е�ʱ��༸Сʱ?"},
		{"1. Calculate B's speed V1. B's speed V1=B's travel distance S1/B's time T1",
		"1.�������ٶ�V1 ���ٶ�V1=���е�·��S1/�����õ�ʱ��T1"},
		{"2. Calculate the reverse flow velocity V2 of B=the distance S1 of B row/the reverse flow time T2 of B",
		"2.�����������ٶ�V2 �������ٶ�V2=���е�·��S1/������ʱ��T2"},
		{"3. Calculate the downstream speed V3 of B=the distance S1 of B/the downstream time T2 of B",
		"3.������˳���ٶ�V3 ��˳���ٶ�V3=���е�·��S1/��˳��ʱ��T2"},
		{"4. Calculate the water flow velocity V4. Water flow velocity V4=(downstream velocity V3- upstream velocity V2)/number of shared velocities N1",
		"4.����ˮ���ٶ�V4 ˮ���ٶ�V4=(��˳���ٶ�V3-�������ٶ�V2)/���е��ٶ�����N1"},
		{"5. Calculate the downstream velocity V5 of A=the distance S1 of B/the downstream time T3 of A",
		"5.�����˳���ٶ�V5 ��˳���ٶ�V5=���е�·��S1/��˳��ʱ��T3"},
		{"6. Calculate the upstream velocity of A V6=downstream velocity of A V5- water flow velocity V4- water flow velocity V4",
		"6.�������ˮ�ٶ�V6 ����ˮ�ٶ�V6=��˳���ٶ�V5-ˮ���ٶ�V4-ˮ���ٶ�V4"},
		{"7. Calculate the multi-purpose time T4. The multi-purpose time T4 is calculated as (the distance S1 of line B/the upstream speed V6 of line A) minus the downstream time T3 of line A",
		"7.�������ʱ��T4 ����ʱ��T4=(���е�·��S1/����ˮ�ٶ�V6)-��˳��ʱ��T3"},
		//������
		{"TheTimeT1UsedByB","�����õ�ʱ��T1"},
		{"RouteS1OfBankB","���е�·��S1"},
		{"BCounterCurrentTimeT2","������ʱ��T2"},
		{"BDownstreamTimeT2","��˳��ʱ��T2"},
		{"CommonSpeedQuantityN1","���е��ٶ�����N1"},
		{"BSpeedV1","���ٶ�V1"},
		{"BCounterCurrentVlocityV2","�������ٶ�V2"},
		{"BDownstreamSpeedV3","��˳���ٶ�V3"},
		{"WaterFlowVlocityV4","ˮ���ٶ�V4"},
		{"Jia'sDownstreamSpeedV5","��˳���ٶ�V5"},
		{"JiaReverseWaterSpeedV6","����ˮ�ٶ�V6"},
		{"SpendMoreTimeT4","����ʱ��T4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܾ���S1, 180);
	DefineLangVarInt(����ǰ˳ˮʱ��T1, 10);
	DefineLangVarInt(����ǰ��ˮʱ��T2, 15);
	DefineLangVarInt(���е��ٶ�����N1, 2);
}
void P13_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P13 Example 1: Floating Ship","P13��һ ��ˮ�д�"},
		{"Title: Two docks are 352 kilometers apart. It takes 11 hours downstream and 16 hours upstream. What is the speed of the ship?",
		"��Ŀ��������ͷ���352ǧ�ף����˳��������Ҫ11Сʱ������������Ҫ16Сʱ�����ٶȣ�"},
		{"1. Calculate the downstream ship speed V1, which is equal to the total distance S1 divided by the downstream time T1",
		"1.����˳ˮ����V1 ˳ˮ����V1=��·��S1/˳ˮʱ��T1"},
		{"2. Calculate the upstream ship speed V2, which is equal to the total distance S1 divided by the upstream time T2",
		"2.������ˮ����V2 ��ˮ����V2=��·��S1/��ˮʱ��T2"},
		{"3. Calculate the ship speed V3. Ship speed V3=(downstream ship speed V1+upstream ship speed V2)/number of shared speeds N1",
		"3.���㴬�ٶ�V3 ���ٶ�V3=(˳ˮ����V1+��ˮ����V2)/���е��ٶ�����N1"},
		//������
		{"TotalDistanceS1","��·��S1"},
		{"ShunshuiTimeT1","˳ˮʱ��T1"},
		{"ReverseWaterTimeT2","��ˮʱ��T2"},
		{"CommonSpeedQuantityN1","���е��ٶ�����N1"},
		{"ShunshuiBoatSpeedV1","˳ˮ����V1"},
		{"ReverseCurrentShipSpeedV2","��ˮ����V2"},
		{"ShipSpeedV3","���ٶ�V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��·��S1, 352);
	DefineLangVarInt(˳ˮʱ��T1, 11);
	DefineLangVarInt(��ˮʱ��T2, 16);
	DefineLangVarInt(���е��ٶ�����N1, 2);
	DefineLangVarInt(˳ˮ����V1, 0);
	ColPrintf(PrintfCol::����, Lang("P13��һ ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������ͷ���352ǧ�ף����˳��������Ҫ11Сʱ������������Ҫ16Сʱ�����ٶȣ�"));
	ColPrintf(PrintfCol::����, Lang("1.����˳ˮ����V1 ˳ˮ����V1=��·��S1/˳ˮʱ��T1"));
	˳ˮ����V1 = ��·��S1 / ˳ˮʱ��T1;
	˳ˮ����V1.PrintProcessLog(1);
	DefineLangVarInt(��ˮ����V2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ˮ����V2 ��ˮ����V2=��·��S1/��ˮʱ��T2"));
	��ˮ����V2 = ��·��S1 / ��ˮʱ��T2;
	��ˮ����V2.PrintProcessLog(2);
	DefineLangVarInt(���ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㴬�ٶ�V3 ���ٶ�V3=(˳ˮ����V1+��ˮ����V2)/���е��ٶ�����N1"));
	���ٶ�V3 = (˳ˮ����V1 + ��ˮ����V2) / ���е��ٶ�����N1;
	���ٶ�V3.PrintProcessLog(3);
}
void P13_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P13 Example 2: Floating Ship","P13���� ��ˮ�д�"},
		{"Topic: It takes 10 hours for a ship to go back and forth between 180 km wharves, and 15 hours for a ship to\ngo against the current. Because of the increase of rainstorm flow, it takes 9 hours for a ship to\ngo along the current, and how many hours for a ship to go against the current?",
		"��Ŀ:��������180ǧ����ͷ֮�䣬˳ˮ����10Сʱ����ˮ����15Сʱ�����ڱ���ˮ������,��ʱ˳ˮ��ʱ9Сʱ����ˮ��ʱ����Сʱ?"},
		{"1. Calculate the downstream speed before rainstorm V1: downstream speed before rainstorm V1=total distance S1/downstream time before rainstorm T1",
		"1.���㱩��ǰ˳ˮ�ٶ�V1 ����ǰ˳ˮ�ٶ�V1=�ܾ���S1/����ǰ˳ˮʱ��T1"},
		{"2. Calculate the upstream velocity before rainstorm V2: upstream velocity before rainstorm V2=total distance S1/upstream time before rainstorm T2",
		"2.���㱩��ǰ��ˮ�ٶ�V2 ����ǰ��ˮ�ٶ�V2=�ܾ���S1/����ǰ��ˮʱ��T2"},
		{"3. Calculated ship speed V3 Ship speed V3=(downstream speed before rainstorm V1+upstream speed before rainstorm V2)/number of common speeds N1",
		"3.���㴬�ٶ�V3 ���ٶ�V3=(����ǰ˳ˮ�ٶ�V1+����ǰ��ˮ�ٶ�V2)/���е��ٶ�����N1"},
		{"4. Calculate downstream velocity after rainstorm V4 downstream velocity before rainstorm V4=total distance S1/downstream time before rainstorm T3",
		"4.���㱩���˳ˮ�ٶ�V4 �����˳ˮ�ٶ�V4=�ܾ���S1/����ǰ˳ˮʱ��T1"},
		{"5. Calculate the flow speed after rainstorm V5 The flow speed after rainstorm V5=the downstream speed after rainstorm V4- the ship speed V3",
		"5.���㱩���ˮ���ٶ�V5 �����ˮ���ٶ�V5=�����˳ˮ�ٶ�V4-���ٶ�V3"},
		{"6. Calculate the backwater speed after rainstorm V6=vessel speed V3- flow speed after rainstorm V5 after rainstorm",
		"6.���㱩�����ˮ�ٶ�V6 �������ˮ�ٶ�V6=���ٶ�V3-�����ˮ���ٶ�V5"},
		{"7. Calculate the counter current time after rainstorm T4 The counter current time after rainstorm T4=total distance S1/counter current speed after rainstorm V6",
		"7.���㱩�����ˮʱ��T4 �������ˮʱ��T4=�ܾ���S1/�������ˮ�ٶ�V6"},
		//������
		{"TotalDistanceS1","�ܾ���S1"},
		{"FollowWaterTimeBeforeRainstormT1","����ǰ˳ˮʱ��T1"},
		{"HeadwaterTimeT2BeforeRainstorm","����ǰ��ˮʱ��T2"},
		{"CommoSpeedQuantityN1","���е��ٶ�����N1"},
		{"FollowWaterTimeBeforeRainstormT3","����ǰ˳ˮʱ��T3"},
		{"DownstreamSpeedBeforeRainstormV1","����ǰ˳ˮ�ٶ�V1"},
		{"HeadwaterVelocityBeforeRainstormV2","����ǰ��ˮ�ٶ�V2"},
		{"ShipSpeedV3","���ٶ�V3"},
		{"DownstreamSpeedAfterRainstormV4","�����˳ˮ�ٶ�V4"},
		{"FlowVelocityAfterRainstormV5","�����ˮ���ٶ�V5"},
		{"HeadwaterSpeedAfterRainstormV6","�������ˮ�ٶ�V6"},
		{"BackflowTimeAfterRainstormT4","�������ˮʱ��T4"},
	};
	Lang.AddLanguageTable(
		Language
	);

	DefineLangVarInt(�ܾ���S1, 180);
	DefineLangVarInt(����ǰ˳ˮʱ��T1, 10);
	DefineLangVarInt(����ǰ��ˮʱ��T2, 15);
	DefineLangVarInt(���е��ٶ�����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P13���� ��ˮ�д�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������ͷ���352ǧ�ף����˳��������Ҫ11Сʱ������������Ҫ16Сʱ�����ٶȣ�"));
	DefineLangVarInt(����ǰ˳ˮ�ٶ�V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㱩��ǰ˳ˮ�ٶ�V1 ����ǰ˳ˮ�ٶ�V1=�ܾ���S1/����ǰ˳ˮʱ��T1"));
	����ǰ˳ˮ�ٶ�V1 = �ܾ���S1 / ����ǰ˳ˮʱ��T1;
	����ǰ˳ˮ�ٶ�V1.PrintProcessLog(1);
	DefineLangVarInt(����ǰ��ˮ�ٶ�V2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㱩��ǰ��ˮ�ٶ�V2 ����ǰ��ˮ�ٶ�V2=�ܾ���S1/����ǰ��ˮʱ��T2"));
	����ǰ��ˮ�ٶ�V2 = �ܾ���S1 / ����ǰ��ˮʱ��T2;
	����ǰ��ˮ�ٶ�V2.PrintProcessLog(2);
	DefineLangVarInt(���ٶ�V3, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㴬�ٶ�V3 ���ٶ�V3=(����ǰ˳ˮ�ٶ�V1+����ǰ��ˮ�ٶ�V2)/���е��ٶ�����N1"));
	���ٶ�V3 = (����ǰ˳ˮ�ٶ�V1 + ����ǰ��ˮ�ٶ�V2) / ���е��ٶ�����N1;
	���ٶ�V3.PrintProcessLog(3);
	DefineLangVarInt(�����˳ˮ�ٶ�V4, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㱩���˳ˮ�ٶ�V4 �����˳ˮ�ٶ�V4=�ܾ���S1/����ǰ˳ˮʱ��T1"));
	�����˳ˮ�ٶ�V4 = �ܾ���S1 / ����ǰ˳ˮʱ��T1;
	�����˳ˮ�ٶ�V4.PrintProcessLog(5);
	DefineLangVarInt(�����ˮ���ٶ�V5, 0);
	ColPrintf(PrintfCol::����, Lang("5.���㱩���ˮ���ٶ�V5 �����ˮ���ٶ�V5=�����˳ˮ�ٶ�V4-���ٶ�V3"));
	�����ˮ���ٶ�V5 = �����˳ˮ�ٶ�V4 - ���ٶ�V3;
	�����ˮ���ٶ�V5.PrintProcessLog(5);
	DefineLangVarInt(�������ˮ�ٶ�V6, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㱩�����ˮ�ٶ�V6 �������ˮ�ٶ�V6=���ٶ�V3-�����ˮ���ٶ�V5"));
	�������ˮ�ٶ�V6 = ���ٶ�V3 - �����ˮ���ٶ�V5;
	�������ˮ�ٶ�V6.PrintProcessLog(6);
	DefineLangVarInt(�������ˮʱ��T4, 0);
	ColPrintf(PrintfCol::����, Lang("7.���㱩�����ˮʱ��T4 �������ˮʱ��T4=�ܾ���S1/�������ˮ�ٶ�V6"));
	�������ˮʱ��T4=�ܾ���S1 / �������ˮ�ٶ�V6;
	�������ˮʱ��T4.PrintProcessLog(7);
}
void P13()
{
	P13_1();
	ColPrintf(PrintfCol::����, "");
	P13_2();
	ColPrintf(PrintfCol::����, "");
}
void P13_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P13();
	Lang.SetCurLanguage(LanguageLib::English);
	P13();
	ColPrintf(PrintfCol::����, "");

}