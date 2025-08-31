#pragma once
void P5_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 1","P5火车过桥 情况1"},
		{"Situation: Train passing through trees Problem: Trains have length and speed, trees have no length and speed",
		"情况：火车过树问题：火车有长度有速度，树没长度没速度"},
		{"Solution idea: Because this problem calculates the total distance traveled by the train, we use a punctuation point without length to calculate.\nFor example, if the locomotive touches a tree and leaves the tree at the end of the train, find a punctuation point at the end of the train.\nThe distance traveled from the previous train end to the current train end is the distance traveled",
		"解题思路：因为这个问题是计算的火车走过的总路程，所以我们用一个没有长度的标点来计算，比如火车头现触到树到火车尾离开树，找一个标点火车尾，在之前的火车尾到现在的火车尾，就是走过的距离"},
		{"Conclusion formula: The distance traveled by the train (train length) S1=Train speed V1 * Train tail passing time T1 through the tree",
		"结论公式：火车走过的路程（火车车长）S1=火车速度V1*火车尾通过树的时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"\n"
		"           tain              tree\n"
		"|--------------------------->||\n"
		"\n"
		"                               tree          tain\n"
		"                               || |--------------------------->\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P5火车过桥 情况1"));
	ColPrintf(PrintfCol::标题, Lang("情况：火车过树问题：火车有长度有速度，树没长度没速度"));
	ColPrintf(PrintfCol::标题, pPic);
	ColPrintf(PrintfCol::方法, Lang("解题思路：因为这个问题是计算的火车走过的总路程，所以我们用一个没有长度的标点来计算，比如火车头现触到树到火车尾离开树，找一个标点火车尾，在之前的火车尾到现在的火车尾，就是走过的距离"));
	ColPrintf(PrintfCol::方法, Lang("结论公式：火车走过的路程（火车车长）S1=火车速度V1*火车尾通过树的时间T1"));
}
void P5_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 2","P5火车过桥 情况2"},
		{"Situation: Trains and people: Trains have length and speed, while people have speed but no length",
		"情况：火车追人：火车有长度有速度，人有速度没长度"},
		{"Solution idea: This is a typical pursuit problem, and the method of calculating the total distance requires calculating the speed difference.\nSince a person also has to walk a certain distance, in order to make them stationary, their speed must be\nsubtracted, so the speed difference needs to be calculated",
		"解题思路:这是一个典型的追及问题，而计算总路程的方法就要算速度差，而人也要走一段路程所以要使人变静止就得减去他的速度，所以要算速度差"},
		{"Conclusion formula: The distance traveled by the train (train length) S1=(train speed V1- person speed V2) * time exceeded by the person T1",
		"结论公式:火车走过的路程（火车车长）S1=(火车的速度V1-人的速度V2)*超过人的时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"\n"
		"           tain              people\n"
		"|--------------------------->||\n"
		"\n"
		"                                         people          tain\n"
		"                                         || |--------------------------->\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P5火车过桥 情况2"));
	ColPrintf(PrintfCol::标题, Lang("情况：火车追人：火车有长度有速度，人有速度没长度"));
	ColPrintf(PrintfCol::标题, pPic);
	ColPrintf(PrintfCol::方法, Lang("解题思路:这是一个典型的追及问题，而计算总路程的方法就要算速度差，而人也要走一段路程所以要使人变静止就得减去他的速度，所以要算速度差"));
	ColPrintf(PrintfCol::方法, Lang("结论公式:火车走过的路程（火车车长）S1=(火车的速度V1-人的速度V2)*超过人的时间T1"));
}
void P5_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 3","P5火车过桥 情况3"},
		{"Situation: Train crossing bridge: The train has length and speed, while the bridge has length without speed",
		"情况：火车过桥：火车有长度有速度，桥没速度有长度"},
		{"Solution idea: This is a typical train crossing a bridge problem. It has a bridge, where the train's head touches the bridge first and the train's\ntail leaves the bridge, or is it calculated based on a punctuation mark on the train. So the total distance traveled\nby the train is the length of the train plus the length of the bridge",
		"解题思路:这是一个典型的火车过桥问题，它有桥，火车的头先碰到桥，火车尾再离开桥,还是以火车上的一个标点计算。所以火车行过的总路程就是火车长度加上桥的长度"},
		{"Conclusion formula: The distance traveled by the train (train length) S1=Train speed V1 * Bridge crossing time T1 or the distance traveled by the train (train length) S1=Train length L1+Bridge length L2",
		"结论公式:火车走过的路程（火车车长）S1=火车速度V1*通过桥的时间T1 或 火车走过的路程（火车车长）S1=火车长度L1+桥的长度L2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"\n"
		"           tain                            bridge\n"
		"|--------------------------->|---------------------------------|\n"
		"\n"
		"                                               bridge                            tain\n"
		"                             |---------------------------------||--------------------------->\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P5火车过桥 情况3"));
	ColPrintf(PrintfCol::标题, Lang("情况：火车追人：火车有长度有速度，人有速度没长度"));
	ColPrintf(PrintfCol::标题, pPic);
	ColPrintf(PrintfCol::方法, Lang("解题思路:这是一个典型的火车过桥问题，它有桥，火车的头先碰到桥，火车尾再离开桥,还是以火车上的一个标点计算。所以火车行过的总路程就是火车长度加上桥的长度"));
	ColPrintf(PrintfCol::方法, Lang("结论公式:火车走过的路程（火车车长）S1=火车速度V1*通过桥的时间T1 或 火车走过的路程（火车车长）S1=火车长度L1+桥的长度L2"));
}
void P5_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 3","P5火车和火车 情况4"},
		{"Situation: Train crossing bridge: The train has length and speed",
		"情况：火车和火车：火车有长度有速度"},
		{"Solution idea: This is a typical problem of traveling in opposite directions, which requires the use of speed and. Because of the mismatch, the distance\ntraveled will definitely be faster than when stationary. At the beginning, the front of the car is level, and at\nthe end, the rear of the car is level. They both have speed, so the speed and can\nbe calculated",
		"解题思路:这是一个典型的相向而行问题，这个问题要用到速度和，因为相错，走过的路程肯定比静止的要快，开始时车头平齐，结束时车尾平齐，他们都有速度，所以要求速度和，然后就可以计算出来了"},
		{"Conclusion formula: The total length (total distance) of the two vehicles S1=the speed of the two vehicles and SUM1 * the time it takes to complete the wrong phase T1",
		"结论公式:两车的总长度（总路程）S1=两车速度和SUM1*相错完成的时间T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"\n"
		"           tain1                            tain2\n"
		"|---------------------------><---------------------------------|\n"
		"\n"
		"       tain2                            tain1\n"
		"<---------------------------------||--------------------------->\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P5火车和火车 情况4"));
	ColPrintf(PrintfCol::标题, Lang("情况：火车和火车：火车有长度有速度"));
	ColPrintf(PrintfCol::标题, pPic);
	ColPrintf(PrintfCol::方法, Lang("解题思路:这是一个典型的相向而行问题，这个问题要用到速度和，因为相错，走过的路程肯定比静止的要快，开始时车头平齐，结束时车尾平齐，他们都有速度，所以要求速度和，然后就可以计算出来了"));
	ColPrintf(PrintfCol::方法, Lang("结论公式:两车的总长度（总路程）S1=两车速度和SUM1*相错完成的时间T1"));
}
void P5_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 3","P5火车过桥 情况5"},
		{"Situation: Train crossing bridge: The train has length and speed",
		"情况：火车完全在桥上的问题：火车有长度有速度，桥没速度有长度"},
		{"Solution idea: This is a typical train crossing a bridge problem, but the goal is for the train to travel completely on the bridge. This is also very simple\nbecause it has the rear of the train on the bridge and the rear of the train on the bridge. Therefore, the\ndistance it travels is the length of the bridge minus the length of the train, which\ncan be easily calculated",
		"解题思路:这是一个典型的火车过桥问题，但求的是火车完全在桥上走到路程，而这个也非常简单，因为它是现车尾在桥，后车头在桥，所以它走的路程就是桥的长度-火车长度，这就可以轻易算出来了"},
		{"Conclusion formula: The distance traveled by the train (train length) S1=Train speed V1 * Time to cross the bridge T1 or the distance traveled by the train (train length) S1=Bridge length L1- Train length L2",
		"结论公式:火车走过的路程（火车车长）S1=火车速度V1*穿过桥的时间T1 或 火车走过的路程（火车车长）S1=桥的长度L1-火车长度L2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic = 
		"\n"
		"     tain\n"
		"|------------------>\n"
		"|---------------------------------bridge---------------------------------|\n"
		"\n"
		"                                                          tain\n"
		"                                                     |------------------>\n"
		"|---------------------------------bridge---------------------------------|\n"

		;
	ColPrintf(PrintfCol::标题, Lang("P5火车过桥 情况5"));
	ColPrintf(PrintfCol::标题, Lang("情况：火车完全在桥上的问题：火车有长度有速度，桥没速度有长度"));
	ColPrintf(PrintfCol::标题, pPic);
	ColPrintf(PrintfCol::方法, Lang("解题思路:这是一个典型的火车过桥问题，但求的是火车完全在桥上走到路程，而这个也非常简单，因为它是现车尾在桥，后车头在桥，所以它走的路程就是桥的长度-火车长度，这就可以轻易算出来了"));
	ColPrintf(PrintfCol::方法, Lang("结论公式:火车走过的路程（火车车长）S1=火车速度V1*穿过桥的时间T1 或 火车走过的路程（火车车长）S1=桥的长度L1-火车长度L2"));
}

void P5()
{
	P5_1();
	ColPrintf(PrintfCol::方法, "");
	P5_2();
	ColPrintf(PrintfCol::方法, "");
	P5_3();
	ColPrintf(PrintfCol::方法, "");
	P5_4();
	ColPrintf(PrintfCol::方法, "");
	P5_5();
	ColPrintf(PrintfCol::方法, "");
}
void P5_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P5();
	Lang.SetCurLanguage(LanguageLib::English);
	P5();
	ColPrintf(PrintfCol::方法, "");

}