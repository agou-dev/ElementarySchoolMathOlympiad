#pragma once
void P7_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P7 Example 1 Train Crossing the Bridge","P7例一 火车过桥"},
		{"Title: A train has a length of 800 meters and a speed of 1000 meters per minute. There are two tunnels on the road. It takes 2 minutes to pass through the\nfirst tunnel and 3 minutes to pass through the second tunnel. It takes a total of 6 minutes to pass through the\ntwo tunnels. What is the distance between the tunnels?",
		"题目：一列火车长度是800米，速度是1000米/分，路上有两个隧道，通过第一个时间是2分钟，通过第二个时间是3分钟，通过两个隧道共用了6分钟，隧道相距多少米？"},
		{"1. Calculate the first tunnel length S1. The first tunnel length S1 is equal to (train speed V1 * first tunnel time T1) minus the train length S2",
		"1.计算第一隧道长度S1 第一隧道长度S1=(火车速度V1*第一隧道时间T1)-火车长度S2"},
		{"2. Calculate the length of the second tunnel S4. The length of the second tunnel S4 is calculated as (train speed V1 * second tunnel time 2) - train length S2",
		"2.计算第二隧道长度S3 二隧道长度S3=(火车速度V1*第二隧道时间T2)-火车长度S2"},
		{"3. Calculate the total distance S1=(train speed V1 * total time T3) - train length S2",
		"3.计算总路程S4 总路程S4=(火车速度V1*总时间T3)-火车长度S2"},
		{"4. Calculate the distance between tunnels S5. The distance between tunnels S5=total distance S4- second tunnel length S3- first tunnel length S1",
		"4.计算隧道相距S5 隧道相距S5=总路程S4-第二隧道长度S3-第一隧道长度S1"},
		{"Answer: The distance between tunnels is% dm",
		"答：隧道相距%dm"},
		//变量表
		{"TrainSpeedV1","火车速度V1"},
		{"FirstTunnelTimeT1","第一隧道时间T1"},
		{"SecondTunnelTimeT2","第二隧道时间T2"},
		{"TrainLengthS2","火车长度S2"},
		{"TotalTimeT3","总时间T3"},
		{"FirstTunnelLengthS1","第一隧道长度S1"},
		{"SecondTunnelLength S3","第二隧道长度S3"},
		{"TotalDistanceS4","总路程S4"},
		{"TunnelDistanceS5","隧道相距S5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"        |------------------------6分钟------------------------|\n"
		"           2分钟               1分钟             3分钟\n"
		"  800米 |------------------|             |--------------------|\n"
		"------->|-----------------------------------------------------|------->\n"
	;
	DefineLangVarInt(火车速度V1, 1000);
	DefineLangVarInt(第一隧道时间T1, 2);
	DefineLangVarInt(第二隧道时间T2, 3);
	DefineLangVarInt(火车长度S2, 800);
	DefineLangVarInt(总时间T3, 6);
	ColPrintf(PrintfCol::标题, Lang("P7例一 火车过桥"));
	ColPrintf(PrintfCol::标题, Lang("题目：一列火车长度是800米，速度是1000米/分，路上有两个隧道，通过第一个时间是2分钟，通过第二个时间是3分钟，通过两个隧道共用了6分钟，隧道相距多少米？"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(第一隧道长度S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算第一隧道长度S1 第一隧道长度S1=(火车速度V1*第一隧道时间T1)-火车长度S2"));
	第一隧道长度S1 = (火车速度V1 * 第一隧道时间T1) - 火车长度S2;
	第一隧道长度S1.PrintProcessLog(1);
	DefineLangVarInt(第二隧道长度S3, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第二隧道长度S3 二隧道长度S3=(火车速度V1*第二隧道时间T2)-火车长度S2"));
	第二隧道长度S3 = (火车速度V1 * 第二隧道时间T2) - 火车长度S2;
	第二隧道长度S3.PrintProcessLog(2);
	DefineLangVarInt(总路程S4, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算总路程S4 总路程S4=(火车速度V1*总时间T3)-火车长度S2"));
	总路程S4 = (火车速度V1 * 总时间T3) - 火车长度S2;
	总路程S4.PrintProcessLog(3);
	DefineLangVarInt(隧道相距S5, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算隧道相距S5 隧道相距S5=总路程S4-第二隧道长度S3-第一隧道长度S1"));
	隧道相距S5 = 总路程S4 - 第二隧道长度S3 - 第一隧道长度S1;
	隧道相距S5.PrintProcessLog(4);
	ColPrintf(PrintfCol::结果, Lang("答：隧道相距%dm"), (int)隧道相距S5);
}
void P7_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P7 Example 2 Train Crossing the Bridge","P7例二 火车过桥"},
		{"Title: A 250 meter express train with a speed of 15 meters per second, a 263 meter slow train with a speed of 12 meters per second, traveling in opposite directions and completely staggered. How many seconds does it take?",
		"题目：一列快车250米，速度是15米/秒，慢车263米，速度是12米/秒，相向而行，完全错开，需要多少秒?"},
		{"1. Calculate the total distance traveled by the train S1=express train length S2+local train length S3",
		"1.计算火车一共走过距离S1 火车一共走过距离S1=快车车长S2+慢车车长S3"},
		{"2. Calculate the phase error time T1, which is equal to the total distance traveled by the train S1 divided by the speed of the express train V1 and the speed of the local train V2",
		"2.计算相错时间T1 相错时间T1=火车一共走过距离S1/(快车速度V1+慢车速度V2)"},
		{"Answer: It takes a total of% d seconds",
		"答：一共需要%d秒"},
		//变量表
		{"ExpressTrainConductorS2","快车车长S2"},
		{"SlowCarDriverS3","慢车车长S3"},
		{"ExpressSpeedV1","快车速度V1"},
		{"SlowSpeedV2","慢车速度V2"},
		{"TheTrainHasTraveledATotalDistanceOfS1","火车一共走过距离S1"},
		{"WrongTimeT1","相错时间T1"},

	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(快车车长S2, 250);
	DefineLangVarInt(慢车车长S3, 263);

	DefineLangVarInt(快车速度V1, 15);
	DefineLangVarInt(慢车速度V2, 12);
	ColPrintf(PrintfCol::标题, Lang("P7例二 火车过桥"));
	ColPrintf(PrintfCol::标题, Lang("题目：一列快车250米，速度是15米/秒，慢车263米，速度是12米/秒，相向而行，完全错开，需要多少秒?"));
	DefineLangVarInt(火车一共走过距离S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算火车一共走过距离S1 火车一共走过距离S1=快车车长S2+慢车车长S3"));
	火车一共走过距离S1 = 快车车长S2 + 慢车车长S3;
	火车一共走过距离S1.PrintProcessLog(1);
	DefineLangVarInt(相错时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算相错时间T1 相错时间T1=火车一共走过距离S1/(快车速度V1+慢车速度V2)"));
	相错时间T1 = 火车一共走过距离S1 / (快车速度V1 + 慢车速度V2);
	相错时间T1.PrintProcessLog(2);
	ColPrintf(PrintfCol::结果, Lang("答：一共需要%d秒"), (int)相错时间T1);
}
void P7()
{
	P7_1();
	ColPrintf(PrintfCol::方法, "");
	P7_2();
	ColPrintf(PrintfCol::方法, "");
}
void P7_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P7();
	Lang.SetCurLanguage(LanguageLib::English);
	P7();
	ColPrintf(PrintfCol::方法, "");

}