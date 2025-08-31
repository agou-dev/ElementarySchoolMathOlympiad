#pragma once
void P18_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P18 case one average speed","P18例一 平均速度"},
		{"Title: A person exercised for 3 hours. His speed on a flat road was 4 kilometers, 3 kilometers on an uphill, and 6 kilometers on a downhill. How many kilometers did he travel?",
		"题目：有个人运动3小时，他在平路上的速度是4千米，上坡时3千米，下坡时6千米，他的行了多少千米？"},
		{"1. Calculate the entire process using the least common multiple",
		"1.计算用最小公倍数设出全程"},
		{"2. Calculate the uphill time T1, which is equal to the total distance S1 divided by the uphill speed V1",
		"2.计算上坡时间T1 上坡时间T1=全程S1/上山速度V1"},
		{"3. Calculate the downhill time T2, which is equal to the total distance S1 divided by the downhill speed V2",
		"3.计算下坡时间T2 下坡时间T2=全程S1/下山速度V2"},
		{"4. Calculate the total time T3, which is equal to the uphill time T1 plus the downhill time T2",
		"4.计算总时间T3 总时间T3=上坡时间T1+下坡时间T2"},
		{"5. Calculate the total distance S2, which is equal to the number of round trips N1 multiplied by the total distance S1",
		"5.计算总路程S2 总路程S2=来回数N1*全程S1"},
		{"6. Calculate the average speed V1. The average speed V1 is equal to the total distance S2 divided by the total time T3",
		"6.计算平均速度V1 平均速度V1=总路程S2/总时间T3"},
		{"7. Calculate the total travel distance S1=travel time T4 * average speed V1",
		"7.计算一共行的路程S1 一共行的路程S1=运动时间T4*平均速度V1"},
		//变量表
		{"FullS1","全程S1"},
		{"ClimbingspeedV1","上山速度V1"},
		{"DownhillspeedV2","下山速度V2"},
		{"RoundtripN1","来回数N1"},
		{"ExercisetimeT4","运动时间T4"},
		{"UphilltimeT1","上坡时间T1"},
		{"DownhilltimeT2","下坡时间T2"},
		{"TotaltimeT3","总时间T3"},
		{"TotaldistanceS2","总路程S2"},
		{"AveragespeedV1","平均速度V1"},
		{"TotaldistancetraveledS1","一共行的路程S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(上山速度V1, 6);
	DefineLangVarInt(下山速度V2, 3);
	DefineLangVarInt(来回数N1, 2);
	DefineLangVarInt(运动时间T4, 3);
	ColPrintf(PrintfCol::标题, Lang("P18例一 平均速度"));
	ColPrintf(PrintfCol::标题, Lang("题目：有个人运动3小时，他在平路上的速度是4千米，上坡时3千米，下坡时6千米，他的行了多少千米？"));
	DefineLangVarInt(全程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算用最小公倍数设出全程"));
	DefineLangVarInt(最小倍因数, MinCommonMultiple(上山速度V1.Var, 下山速度V2.Var));
	全程S1 = 最小倍因数;
	全程S1.PrintProcessLog(1);
	DefineLangVarInt(上坡时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算上坡时间T1 上坡时间T1=全程S1/上山速度V1"));
	上坡时间T1 = 全程S1 / 上山速度V1;
	上坡时间T1.PrintProcessLog(2);
	DefineLangVarInt(下坡时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算下坡时间T2 下坡时间T2=全程S1/下山速度V2"));
	下坡时间T2 = 全程S1 / 下山速度V2;
	下坡时间T2.PrintProcessLog(3);
	DefineLangVarInt(总时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算总时间T3 总时间T3=上坡时间T1+下坡时间T2"));
	总时间T3 = 上坡时间T1 + 下坡时间T2;
	总时间T3.PrintProcessLog(4);
	DefineLangVarInt(总路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算总路程S2 总路程S2=来回数N1*全程S1"));
	总路程S2 = 来回数N1 * 全程S1;
	总路程S2.PrintProcessLog(5);
	DefineLangVarInt(平均速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算平均速度V1 平均速度V1=总路程S2/总时间T3"));
	平均速度V1 = 总路程S2 / 总时间T3;
	平均速度V1.PrintProcessLog(6);
	DefineLangVarInt(一共行的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算一共行的路程S1 一共行的路程S1=运动时间T4*平均速度V1"));
	一共行的路程S1 = 运动时间T4 * 平均速度V1;
	一共行的路程S1.PrintProcessLog(7);
}
void P18_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P18 case 2 average speed","P18例二 平均速度"},
		{"Title: A and B are 6720 meters apart. Someone traveled at a speed of 80 meters for the first half of the time and 60 meters for the second half. How long did it take for the second half of the journey?",
		"题目：甲乙两地相距6720米，有人前一半时间速度是80米，后一半时间速度是60米，后一半路程用了多少时间?"},
		{"Let half of the time be x",
		"设一半的时间为x"},
		{"1.List the equation S1 80x+60x=6720",
		"1.列出式子S1 80x+60x=6720"},
		{"2. Merge similar items in S1 to obtain S2 140x=6720",
		"2.,合并S1同类项得到S2 140x=6720"},
		{"3. Solve x x=6720/140=48 according to S2",
		"3.根据S2解出x x=6720/140=48"},
		{"4. Calculate half the distance S1 based on the original speed S1=half the time T1 * the first half of the speed V1",
		"4.计算按原来速度算一半路程S1 按原来速度算一半路程S1=一半的时间T1*前一半的速度V1"},
		{"5. Calculate half of the distance S2, half of the distance S2=total distance S3/half multiple N1",
		"5.计算一半的路程S2 一半的路程S2=总路程S3/一半倍数N1"},
		{"6. Calculate half of the time T3, half of the time T3=half of the distance S2/first half of the speed V1",
		"6.计算一半的时间T3 一半的时间T3=一半的路程S2/前一半的速度V1"},
		{"7. Calculate the total time T4. The total time T4 is half of the time T1 multiplied by half of the multiple N1",
		"7.计算总共的时间T4 总共的时间T4=一半的时间T1*一半倍数N1"},
		{"8. Calculate the time T5 for the second half of the original speed, which is equal to the total time T4 minus the time T3 for the second half of the original speed",
		"8.计算按原来速度后一半时间T5 按原来速度后一半时间T5=总共的时间T4-一半的时间T3"},
		//变量表
		{"HalfthetimeT1","一半的时间T1"},
		{"ThefirsthalfofthespeedV1","前一半的速度V1"},
		{"HalfmultiplierN1","一半倍数N1"},
		{"TotaldistanceS3","总路程S3"},
		{"CalculatehalfthedistanceS1basedontheoriginalspeed","按原来速度算一半路程S1"},
		{"HalfofthejourneyS2","一半的路程S2"},
		{"HalfthetimeT3","一半的时间T3"},
		{"TotaltimeT4","总共的时间T4"},
		{"HalfthetimeT5attheoriginalspeed","按原来速度后一半时间T5"},

	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一半的时间T1, 48);
	DefineLangVarInt(前一半的速度V1, 80);
	DefineLangVarInt(一半倍数N1, 2);
	DefineLangVarInt(总路程S3, 6720);
	ColPrintf(PrintfCol::标题, Lang("P18例二 平均速度"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙两地相距6720米，有人前一半时间速度是80米，后一半时间速度是60米，后一半路程用了多少时间?"));
	
	ColPrintf(PrintfCol::方法, Lang("设一半的时间为x"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 80x+60x=6720"));
	ColPrintf(PrintfCol::方法, Lang("2.,合并S1同类项得到S2 140x=6720"));
	ColPrintf(PrintfCol::方法, Lang("3.根据S2解出x x=6720/140=48"));
	DefineLangVarInt(按原来速度算一半路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算按原来速度算一半路程S1 按原来速度算一半路程S1=一半的时间T1*前一半的速度V1"));
	按原来速度算一半路程S1 = 一半的时间T1 * 前一半的速度V1;
	按原来速度算一半路程S1.PrintProcessLog(4);
	DefineLangVarInt(一半的路程S2, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算一半的路程S2 一半的路程S2=总路程S3/一半倍数N1"));
	一半的路程S2 = 总路程S3 / 一半倍数N1;
	一半的路程S2.PrintProcessLog(5);
	DefineLangVarInt(一半的时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算一半的时间T3 一半的时间T3=一半的路程S2/前一半的速度V1"));
	一半的时间T3 = 一半的路程S2 / 前一半的速度V1;
	一半的时间T3.PrintProcessLog(6);
	DefineLangVarInt(总共的时间T4, 0);
	ColPrintf(PrintfCol::方法, Lang("7.计算总共的时间T4 总共的时间T4=一半的时间T1*一半倍数N1"));
	总共的时间T4 = 一半的时间T1 * 一半倍数N1;
	总共的时间T4.PrintProcessLog(7);
	DefineLangVarInt(按原来速度后一半时间T5, 0);
	ColPrintf(PrintfCol::方法, Lang("8.计算按原来速度后一半时间T5 按原来速度后一半时间T5=总共的时间T4-一半的时间T3"));
	按原来速度后一半时间T5 = 总共的时间T4 - 一半的时间T3;
	按原来速度后一半时间T5.PrintProcessLog(8);
}
void P18_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P18 case three average speed","P18例三 平均速度"},
		{"Title: Two competition plans were discussed before the rowing competition. The first plan is to slide half of the entire journey at speeds of 2.5 meters per second and 3.5 meters per second, respectively. The second option is to\nslide at speeds of 2.5 meters per second and 3.5 meters per second, each for half of the race time. Which option is the best",
		"题目：划船比赛前讨论了两个比赛方案。第一个方案是以2.5米/秒和3.5米/秒的速度各滑行全程的一半。第二个方案是以2.5米/秒和3.5米/秒的速度各滑行比赛时间的一半，那一种方案最好"},
		{"1. Because the first plan is to wait for a speed of 2.5 after completing the entire sliding process at a speed of 3.5, we set the half journey as S and the half time as T, and their time difference is (S/2.5) - (S/3.5)",
		"1.因为第一个方案是滑行全程的一半 速度是3.5滑行完后还要等2.5速度的，所以我们设半程为S，一半时间为T，那他们的时间差就是(S/2.5)-(S/3.5)(计算后应是正值)路程差是0"},
		{"2. The second option is to look at the time, which is the same, so the time difference is 0, (S/2.5)-(S/3.5)>0",
		"2.第二个方案是看时间，时间都相同，所以时间差是0，(S/2.5)-(S/3.5)>0路程差是2.5*T+3.5*T 0<2.5*T+3.5*T"},
		{"3. Because the second plan is faster and can clearly see the difference in distance, the second plan is better",
		"3.因为第二个方案时间快，能看清路程差，所以第二种方案好"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P18例三 平均速度"));
	ColPrintf(PrintfCol::标题, Lang("题目：划船比赛前讨论了两个比赛方案。第一个方案是以2.5米/秒和3.5米/秒的速度各滑行全程的一半。第二个方案是以2.5米/秒和3.5米/秒的速度各滑行比赛时间的一半，那一种方案最好"));
	ColPrintf(PrintfCol::方法, Lang("1.因为第一个方案是滑行全程的一半 速度是3.5滑行完后还要等2.5速度的，所以我们设半程为S，一半时间为T，那他们的时间差就是(S/2.5)-(S/3.5)(计算后应是正值)路程差是0"));
	ColPrintf(PrintfCol::方法, Lang("2.第二个方案是看时间，时间都相同，所以时间差是0，(S/2.5)-(S/3.5)>0路程差是2.5*T+3.5*T 0<2.5*T+3.5*T"));
	ColPrintf(PrintfCol::方法, Lang("3.因为第二个方案时间快，能看清路程差，所以第二种方案好"));
}
void P18()
{
	P18_1();
	ColPrintf(PrintfCol::方法, "");
	P18_2();
	ColPrintf(PrintfCol::方法, "");
	P18_3();
	ColPrintf(PrintfCol::方法, "");
}
void P18_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P18();
	Lang.SetCurLanguage(LanguageLib::English);
	P18();
	ColPrintf(PrintfCol::方法, "");

}