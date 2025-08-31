#pragma once
void P15_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P15 Example 7: Flowing Ship","P15例7 流水行船"},
		{"Title: It took three days for the ship to travel from point A to point B, and four days to travel from point B to point A. The unpowered raft was released from point A and arrived at point B a few days later",
		"题目：轮船从A地到B地用了三天，从B地到A地需要四天，从A地放出无动力木筏，几天后到B地"},
		{"1. Calculate the water velocity V1. Water velocity V1=(ship downstream time T1+ship upstream time T2)/multiplier N1",
		"1.计算水速V1 水速V1=(轮船顺流时间T1+轮船逆流时间T2)/倍率N1"},
		{"2. Let the entire process be the least common multiple of inverse time",
		"2.设全程为逆顺时间的最小公倍数"},
		{"3. Calculate the sailing time T2 of the raft. The sailing time T2 of the raft is equal to the total distance S1 divided by the water speed V1",
		"3.计算木筏顺水时间T2 木筏顺水时间T2=全程S1/水速V1"},
		//变量表
		{"ShipDownstreamTimeT1","轮船顺流时间T1"},
		{"ShipReverseFlowTimeT2","轮船逆流时间T2"},
		{"MagnificationN1","倍率N1"},
		{"FullS1","全程S1"},
		{"WaterVelocityV1","水速V1"},
		{"RaftDownstreamTimeT2","木筏顺水时间T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,轮船顺流时间T1, 3);
	DefineLangVar(float,轮船逆流时间T2, 4);
	DefineLangVar(float,倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P15例7 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：轮船从A地到B地用了三天，从B地到A地需要四天，从A地放出无动力木筏，几天后到B地"));
	DefineLangVar(float,水速V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算水速V1 水速V1=(轮船顺流时间T1+轮船逆流时间T2)/倍率N1"));
	水速V1 = (轮船顺流时间T1 + 轮船逆流时间T2) / 倍率N1;
	水速V1.PrintProcessLog(1);
	DefineLangVar(float,全程S1, MinCommonMultiple(轮船顺流时间T1.Var, 轮船逆流时间T2.Var));
	ColPrintf(PrintfCol::方法, Lang("2.设全程为逆顺时间的最小公倍数"));
	全程S1 = 全程S1;
	全程S1.PrintProcessLog(2);
	DefineLangVar(float,木筏顺水时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算木筏顺水时间T2 木筏顺水时间T2=全程S1/水速V1"));
	木筏顺水时间T2 = 全程S1 / 水速V1;
	木筏顺水时间T2.PrintProcessLog(2);
}
void P15_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P15 Case 8: Flowing Ship","P15例8 流水行船"},
		{"Title: A small boat sailing for 33 kilometers in the forward current, 11 kilometers in the reverse current, takes 11\nhours, 24 kilometers in the forward current, and 14 kilometers in the reverse current. What are\nthe static water velocity and water flow velocity in kilometers?",
		"题目：一艘小船航行，顺流行33千米，再逆流行11千米用时11小时，顺流行24千米，再逆流行14千米，静水速度和水流速度是多少千米？"},
		{"1. Calculate the downstream distance difference S1. The downstream distance difference S1=33 kilometers of downstream current -24 kilometers of downstream current",
		"1.计算顺流路程差S1 顺流路程差S1=顺流行33千米-顺流行24千米"},
		{"2. Calculate the reverse flow distance difference S2. The reverse flow distance difference S2=reverse flow 14 kilometers - reverse flow 11 kilometers",
		"2.计算逆流路程差S2 逆流路程差S2=逆流行14千米-逆流行11千米"},
		{"3. Calculate the downstream distance multiple N1. The downstream distance multiple N1=downstream distance difference S1/upstream distance difference S2",
		"3.计算顺流路程倍数N1 顺流路程倍数N1=顺流路程差S1/逆流路程差S2"},
		{"4. Calculate the counter current velocity V1. Counter current velocity V1=(33 kilometers of forward current/multiple of forward distance N1)/total time T1",
		"4.计算逆流速度V1 逆流速度V1=(顺流行33千米/顺流路程倍数N1)/总时间T1"},
		{"5. Calculate the downstream velocity V2, which is equal to the upstream velocity V1 multiplied by the downstream distance multiple N1",
		"5.计算顺水速度V2 顺水速度V2=逆流速度V1*顺流路程倍数N1"},
		{"6. Calculate the static water velocity V3. Static water velocity V3=(counter current velocity V1+downstream velocity V2)/multiplier N1",
		"6.计算静水速度V3 静水速度V3=(逆流速度V1+顺水速度V2)/倍率N1"},
		{"7. Calculate the water velocity V4, which is equal to (downstream velocity V2- upstream velocity V1) divided by the ratio N1",
		"7.计算水速度V4 水速度V4=(顺水速度V2-逆流速度V1)/倍率N1"},
		//变量表
		{"Shunxing33Kilometers","顺流行33千米"},
		{"Shunxing24Kilometers","顺流行24千米"},
		{"ReverseEpidemic14Kilometers","逆流行14千米"},
		{"CounterEpidemic11Kilometers","逆流行11千米"},
		{"TotalTimeT1","总时间T1"},
		{"MagnificationN1","倍率N1"},
		{"WaterVelocityV4","水速度V4"},
		{"DownstreamDistanceDifferenceS1" ,"顺流路程差S1"},
		{"ReverseFlowDistanceDifferenceS2","逆流路程差S2"},
		{"ParallelTravelMultipleN1","顺流路程倍数N1"},
		{"ReverseFlowVelocityV1","逆流速度V1"},
		{"ParallelSpeedV2","顺水速度V2"},
		{"StaticWaterVelocityV3","静水速度V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 顺流行33千米, 33);
	DefineLangVar(float, 顺流行24千米, 24);
	DefineLangVar(float, 逆流行14千米, 14);
	DefineLangVar(float, 逆流行11千米, 11);
	DefineLangVar(float, 总时间T1, 11);
	DefineLangVar(float, 倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P15例8 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：一艘小船航行，顺流行33千米，再逆流行11千米用时11小时，顺流行24千米，再逆流行14千米，静水速度和水流速度是多少千米？"));
	DefineLangVar(float, 顺流路程差S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算顺流路程差S1 顺流路程差S1=顺流行33千米-顺流行24千米"));
	顺流路程差S1 = 顺流行33千米 - 顺流行24千米;
	顺流路程差S1.PrintProcessLog(1);
	DefineLangVar(float, 逆流路程差S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算逆流路程差S2 逆流路程差S2=逆流行14千米-逆流行11千米"));
	逆流路程差S2 = 逆流行14千米 - 逆流行11千米;
	逆流路程差S2.PrintProcessLog(2);
	DefineLangVar(float, 顺流路程倍数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算顺流路程倍数N1 顺流路程倍数N1=顺流路程差S1/逆流路程差S2"));
	顺流路程倍数N1 = 顺流路程差S1 / 逆流路程差S2;
	顺流路程倍数N1.PrintProcessLog(3);
	DefineLangVar(float, 逆流速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算逆流速度V1 逆流速度V1=(顺流行33千米/顺流路程倍数N1)/总时间T1"));
	逆流速度V1 = (顺流行33千米 / 顺流路程倍数N1) / 总时间T1;
	逆流速度V1.PrintProcessLog(4);
	DefineLangVar(float, 顺水速度V2, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算顺水速度V2 顺水速度V2=逆流速度V1*顺流路程倍数N1"));
	顺水速度V2 = 逆流速度V1 * 顺流路程倍数N1;
	顺水速度V2.PrintProcessLog(5);
	DefineLangVar(float, 静水速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算静水速度V3 静水速度V3=(逆流速度V1+顺水速度V2)/倍率N1"));
	静水速度V3 = (逆流速度V1 + 顺水速度V2) / 倍率N1;
	静水速度V3.PrintProcessLog(6);
	DefineLangVar(float, 水速度V4, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算水速度V4 水速度V4=(顺水速度V2-逆流速度V1)/倍率N1"));
	水速度V4 = (顺水速度V2 - 逆流速度V1) / 倍率N1;
	水速度V4.PrintProcessLog(7);
}
void P15_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P15 Case 8: Flowing Ship","P15巩固 流水行船"},
		{"Title: A small boat sailing for 120 kilometers in the forward current, 80 kilometers in the reverse current, takes 80\nhours, 80 kilometers in the forward current, and 120 kilometers in the reverse current. What are\nthe static water velocity and water flow velocity in kilometers?",
		"题目：一艘轮船航行，顺流行120千米，再逆流行120千米用时16小时，顺流行60千米，再逆流行120千米，水流速度是多少千米？"},
		{"1. Calculate the downstream distance difference S1. The downstream distance difference S1=120 kilometers of downstream current -80 kilometers of downstream current",
		"1.计算顺流路程差S1 顺流路程差S1=顺流行120千米-顺流行60千米"},
		{"2. Calculate the reverse flow distance difference S2. The reverse flow distance difference S2=reverse flow 120 kilometers - reverse flow 80 kilometers",
		"2.计算逆流路程差S2 逆流路程差S2=逆流行120千米-逆流行120千米"},
		{"3. Calculate the downstream distance multiple N1. The downstream distance multiple N1=downstream distance difference S1/upstream distance difference S2",
		"3.计算顺流路程倍数N1 顺流路程倍数N1=顺流路程差S1/逆流路程差S2"},
		{"4. Calculate the counter current velocity V1. Counter current velocity V1=((forward current 120 kilometers/forward current distance multiple N1)+counter current 80 kilometers)/total time T1",
		"4.计算逆流速度V1 逆流速度V1=((顺流行120千米/顺流路程倍数N1)+逆流行80千米)/总时间T1"},
		{"5. Calculate the downstream velocity V2, which is equal to the upstream velocity V1 multiplied by the downstream distance multiple N1",
		"5.计算顺水速度V2 顺水速度V2=逆流速度V1*顺流路程倍数N1"},
		{"6. Calculate the static water velocity V3. Static water velocity V3=(counter current velocity V1+downstream velocity V2)/multiplier N1",
		"6.计算静水速度V3 静水速度V3=(逆流速度V1+顺水速度V2)/倍率N1"},
		{"7. Calculate the water velocity V4, which is equal to (downstream velocity V2- upstream velocity V1) divided by the ratio N1",
		"7.计算水速度V4 水速度V4=(顺水速度V2-逆流速度V1)/倍率N1"},
		//变量表
		{"Shunxing33Kilometers","顺流行120千米"},
		{"Shunxing24Kilometers","顺流行60千米"},
		{"ReverseEpidemic14Kilometers","逆流行120千米"},
		{"CounterEpidemic11Kilometers","逆流行80千米"},
		{"TotalTimeT1","总时间T1"},
		{"WaterVelocityV4","水速度V4"},
		{"MagnificationN1","倍率N1"},
		{"DownstreamDistanceDifferenceS1" ,"顺流路程差S1"},
		{"ReverseFlowDistanceDifferenceS2","逆流路程差S2"},
		{"ParallelTravelMultipleN1","顺流路程倍数N1"},
		{"ReverseFlowVelocityV1","逆流速度V1"},
		{"ParallelSpeedV2","顺水速度V2"},
		{"StaticWaterVelocityV3","静水速度V3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 顺流行120千米, 120);
	DefineLangVar(float, 顺流行60千米, 60);
	DefineLangVar(float, 逆流行120千米, 120);
	DefineLangVar(float, 逆流行80千米, 80);
	DefineLangVar(float, 总时间T1, 16);
	DefineLangVar(float, 倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P15巩固 流水行船"));
	ColPrintf(PrintfCol::标题, Lang("题目：一艘轮船航行，顺流行120千米，再逆流行120千米用时16小时，顺流行60千米，再逆流行120千米，水流速度是多少千米？"));
	DefineLangVar(float, 顺流路程差S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算顺流路程差S1 顺流路程差S1=顺流行120千米-顺流行60千米"));
	顺流路程差S1 = 顺流行120千米 - 顺流行60千米;
	顺流路程差S1.PrintProcessLog(1);
	DefineLangVar(float, 逆流路程差S2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算逆流路程差S2 逆流路程差S2=逆流行120千米-逆流行80千米"));
	逆流路程差S2 = 逆流行120千米 - 逆流行80千米;
	逆流路程差S2.PrintProcessLog(2);
	DefineLangVar(float, 顺流路程倍数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算顺流路程倍数N1 顺流路程倍数N1=顺流路程差S1/逆流路程差S2"));
	顺流路程倍数N1 = 顺流路程差S1 / 逆流路程差S2;
	顺流路程倍数N1.PrintProcessLog(3);
	DefineLangVar(float, 逆流速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算逆流速度V1 逆流速度V1=((顺流行120千米/顺流路程倍数N1)+逆流行80千米)/总时间T1"));
	逆流速度V1 = ((顺流行120千米 / 顺流路程倍数N1) + 逆流行80千米) / 总时间T1;
	逆流速度V1.PrintProcessLog(4);
	DefineLangVar(float, 顺水速度V2, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算顺水速度V2 顺水速度V2=逆流速度V1*顺流路程倍数N1"));
	顺水速度V2 = 逆流速度V1 * 顺流路程倍数N1;
	顺水速度V2.PrintProcessLog(5);
	DefineLangVar(float, 静水速度V3, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算静水速度V3 静水速度V3=(逆流速度V1+顺水速度V2)/倍率N1"));
	静水速度V3 = (逆流速度V1 + 顺水速度V2) / 倍率N1;
	静水速度V3.PrintProcessLog(6);
	DefineLangVar(float, 水速度V4, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算水速度V4 水速度V4=(顺水速度V2-逆流速度V1)/倍率N1"));
	水速度V4 = (顺水速度V2 - 逆流速度V1) / 倍率N1;
	水速度V4.PrintProcessLog(7);
}
void P15()
{
	P15_1();
	ColPrintf(PrintfCol::方法, "");
	P15_2();
	ColPrintf(PrintfCol::方法, "");
	P15_3();
	ColPrintf(PrintfCol::方法, "");
}
void P15_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P15();
	Lang.SetCurLanguage(LanguageLib::English);
	P15();
	ColPrintf(PrintfCol::方法, "");

}