#pragma once
void P88_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case 1 Tree Planting Problem","P88 例一 植树问题"},
		{"Title: There are 95 trees planted on the side of the road, both ends are planted, with a distance of 5 meters between each two trees. How long is this section of road?",
		"题目：道路一旁栽了95棵树，两头都栽，每两棵树相距5米，这段公路长多少米?"},
		{"1. Calculate the total number of segments N1=number of trees planted N2- number of segments that trees cannot correspond to N3",
		"1.计算一共的段数N1 一共的段数N1=栽的棵树N2-树对应不了的段数N3"},
		{"2. Calculate the length of the highway S1, which is equal to the total number of segments N1 multiplied by the length of each segment N4",
		"2.计算公路长度S1 公路长度S1=一共的段数N1*每段长度N4"},
		//变量表
		{"ThetreeplantedN2","栽的棵树N2"},
		{"NumberofsegmentsN3thatthetreecannotcorrespondto","树对应不了的段数N3"},
		{"EachsegmentlengthN4","每段长度N4"},
		{"ThetotalnumberofsegmentsN1","一共的段数N1"},
		{"HighwaylengthS1","公路长度S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(栽的棵树N2, 95);
	DefineLangVarInt(树对应不了的段数N3, 1);
	DefineLangVarInt(每段长度N4, 5);
	const char* pPic =
		"1         2         3         4         5……         95\n"
		"|---5米---|---5米---|---5米---|---5米---|……---5米---|\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P88 例一 植树问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：道路一旁栽了95棵树，两头都栽，每两棵树相距5米，这段公路长多少米?"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(一共的段数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共的段数N1 一共的段数N1=栽的棵树N2-树对应不了的段数N3"));
	一共的段数N1 = 栽的棵树N2 - 树对应不了的段数N3;
	一共的段数N1.PrintProcessLog(1);
	DefineLangVarInt(公路长度S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算公路长度S1 公路长度S1=一共的段数N1*每段长度N4"));
	公路长度S1 = 一共的段数N1 * 每段长度N4;
	公路长度S1.PrintProcessLog(2);
}
void P88_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case 2 Tree Planting Problem","P88 例二 植树问题"},
		{"Title: Hang 202 lanterns on both sides of an 800 meter bridge, at both ends of the bridge, and find the distance between trees.",
		"题目：在一座800米的桥上两边挂202个灯笼，桥头桥尾都挂，求树间距。"},
		{"1. Calculate the number of lanterns hung on one side N1=total number of lanterns hung N2/side N3",
		"1.计算一边挂的灯笼数N1 一边挂的灯笼数N1=总共挂灯笼数N2/边数N3"},
		{"2. Calculate the number of segments on one side N2=the number of lanterns hanging on one side N1- the number of segments that the tree cannot correspond to N3",
		"2.计算一边的段数N2 一边的段数N2=一边挂的灯笼数N1-树对应不了的段数N3"},
		{"3. Calculate the distance N3, which is equal to the total distance S1 divided by the number of segments N2 on one side",
		"3.计算间距N3 间距N3=总路程S1/一边的段数N2"},
		//变量表
		{"ThetotalnumberoflanternshungisN2","总共挂灯笼数N2"},
		{"EdgeN3","边数N3"},
		{"NumberofsegmentsN3thatthetreecaotcorrespondto","树对应不了的段数N3"},
		{"TotaldistanceS1","总路程S1"},
		{"NumberoflanternshangingononesideN1","一边挂的灯笼数N1"},
		{"NumberofsegmentsononesideN2","一边的段数N2"},
		{"DistanceN3","间距N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共挂灯笼数N2, 202);
	DefineLangVarInt(边数N3, 2);
	DefineLangVarInt(树对应不了的段数N3, 1);
	DefineLangVarInt(总路程S1, 800);
	const char* pPic =
		"|---------------------------800米------------------------|\n"
		"1         2         3         4         5……         101\n"
		"|---8米---|---8米---|---8米---|---8米---|……---8米---|\n"
		"\n"
		"\n"
		"\n"
		"|---------------------------800米------------------------|\n"
		"1         2         3         4         5……         101\n"
		"|---8米---|---8米---|---8米---|---8米---|……---8米---|\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P88 例二 植树问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：在一座800米的桥上两边挂202个灯笼，桥头桥尾都挂，求树间距。"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(一边挂的灯笼数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一边挂的灯笼数N1 一边挂的灯笼数N1=总共挂灯笼数N2/边数N3"));
	一边挂的灯笼数N1 = 总共挂灯笼数N2 / 边数N3;
	一边挂的灯笼数N1.PrintProcessLog(1);
	DefineLangVarInt(一边的段数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算一边的段数N2 一边的段数N2=一边挂的灯笼数N1-树对应不了的段数N3"));
	一边的段数N2 = 一边挂的灯笼数N1 - 树对应不了的段数N3;
	一边的段数N2.PrintProcessLog(2);
	DefineLangVarInt(间距N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算间距N3 间距N3=总路程S1/一边的段数N2"));
	间距N3 = 总路程S1 / 一边的段数N2;
	间距N3.PrintProcessLog(3);
}
void P88_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case Three Tree Planting Problem","P88 例三 植树问题"},
		{"Title: There is a 13 meter long piece of wood that has been damaged by 1 meter. After removing it, the rest was cut 5 times. How long is each piece",
		"题目：有一根13米长的木头，坏了1米，去掉，剩下的砍了5刀，每根长多少米"},
		{"1. Calculate the usable wood N1. The usable wood N1 is equal to the total length N2 minus the damaged length N3",
		"1.计算能用的木头N1 能用的木头N1=总共长度N2-坏的长度N3"},
		{"2. Calculate the number of segments N2 to be cut. The number of segments N2 to be cut is equal to the number of cuts N4 plus the number of excess segments N5",
		"2.计算砍出的段数N2 砍出的段数N2=砍出的刀数N4+多余的段数N5"},
		{"3. Calculate segment length N3. Segment length N3=usable wood N1/number of segments cut N2",
		"3.计算段长度N3 段长度N3=能用的木头N1/砍出的段数N2"},
		//变量表
		{"TotallengthN2","总共长度N2"},
		{"BadlengthN3","坏的长度N3"},
		{"NumberofcutsN45","砍出的刀数N4"},
		{"ExcesssegmentcountN5","多余的段数N5"},
		{"UsefulWoodN1","能用的木头N1"},
		{"NumberofsegmentscutN2","砍出的段数N2"},
		{"SegmentlengthN3","段长度N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总共长度N2, 13);
	DefineLangVarInt(坏的长度N3, 1);
	DefineLangVarInt(砍出的刀数N4, 5);
	DefineLangVarInt(多余的段数N5, 1);
	const char* pPic =
		"|坏的长度|       1       1       2       2        3      3       4       4       5       5     6\n"
		"|--1米---|------2米------|------2米------|------2米------|------2米------|------2米------|-----2米-------\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P88 例三 植树问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一根13米长的木头，坏了1米，去掉，剩下的砍了5刀，每根长多少米"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(能用的木头N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算能用的木头N1 能用的木头N1=总共长度N2-坏的长度N3"));
	能用的木头N1 = 总共长度N2 - 坏的长度N3;
	能用的木头N1.PrintProcessLog(1);
	DefineLangVarInt(砍出的段数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算砍出的段数N2 砍出的段数N2=砍出的刀数N4+多余的段数N5"));
	砍出的段数N2 = 砍出的刀数N4 + 多余的段数N5;
	砍出的段数N2.PrintProcessLog(2);
	DefineLangVarInt(段长度N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算段长度N3 段长度N3=能用的木头N1/砍出的段数N2"));
	段长度N3 = 能用的木头N1 / 砍出的段数N2;
	段长度N3.PrintProcessLog(3);
}
void P88_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case Four Tree Planting Problem","P88 例四 植树问题"},
		{"Title: 200 students lined up in 4 columns. Given that the two rows are 1 meter apart, how many meters are in this column",
		"题目：200名学生排成4列纵队，已知两排相隔1m，这只队伍多少米"},
		{"1. Calculate the number of students per team N1=total number of students N2/team N3",
		"1.计算每队人数N1 每队人数N1=一共学生人数N2/队数N3"},
		{"2. Calculate the number of intervals per team N2=number of people per team N1- number of segments that students cannot correspond to N3",
		"2.计算每队间隔数N2 每队间隔数N2=每队人数N1-学生对应不了的段数N3"},
		{"3. Calculate team length L1. Team length L1=number of intervals between each team N2 * number of intervals between two rows N3",
		"3.计算队伍长度L1 队伍长度L1=每队间隔数N2*两排相隔间隔数N3"},
		//变量表
		{"TotalnumberofstudentsN2","一共学生人数N2"},
		{"NumberofteamsN3","队数N3"},
		{"NumberofparagraphsthatstudentscannotcorrespondtoN3","学生对应不了的段数N3"},
		{"TworowsseparatedbyN3","两排相隔间隔数N3"},
		{"NumberofpeopleperteamN1","每队人数N1"},
		{"IntervalperteamN2","每队间隔数N2"},
		{"TeamlengthL1","队伍长度L1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一共学生人数N2, 200);
	DefineLangVarInt(队数N3, 4);
	DefineLangVarInt(学生对应不了的段数N3, 1);
	DefineLangVarInt(两排相隔间隔数N3, 1);
	const char* pPic =
		"|-1米-|-1米-|-1米-|\n"
		"|-1米-|-1米-|-1米-|\n"
		"|-1米-|-1米-|-1米-|\n"
		"|-1米-|-1米-|-1米-|\n"
		"|-1米-|-1米-|-1米-|\n"
		"|-1米-|-1米-|-1米-|\n"
		"…………………………\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P88 例四 植树问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：200名学生排成4列纵队，已知两排相隔1m，这只队伍多少米"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(每队人数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算每队人数N1 每队人数N1=一共学生人数N2/队数N3"));
	每队人数N1 = 一共学生人数N2 / 队数N3;
	每队人数N1.PrintProcessLog(1);
	DefineLangVarInt(每队间隔数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每队间隔数N2 每队间隔数N2=每队人数N1-学生对应不了的段数N3"));
	每队间隔数N2 = 每队人数N1 - 学生对应不了的段数N3;
	每队间隔数N2.PrintProcessLog(2);
	DefineLangVarInt(队伍长度L1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算队伍长度L1 队伍长度L1=每队间隔数N2*两排相隔间隔数N3"));
	队伍长度L1 = 每队间隔数N2 * 两排相隔间隔数N3;
	队伍长度L1.PrintProcessLog(3);
}
void P88_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Example 5 Tree Planting Problem (The first and last two trees are not counted here, so they are not planted on both sides)","P88 例五 植树问题(最前面最后面两棵树这里不算所以是两边不栽)"},
		{"Title: Two trees are 115 meters apart, with 22 trees in between. How many meters is the distance between the 16th tree and the 1st tree?",
		"题目：两棵树相距115米，中间有22棵树，第16棵树与第1棵树相隔多少米?"},
		{"1. Calculate the total number of segments N1=middle tree N2+extra segments N5",
		"1.计算总共段数N1 总共段数N1=中间棵树N2+多余的段数N5"},
		{"2. Calculate the interval length N2. Interval length N2=total distance S1/ total number of segments N1",
		"2.计算间隔长度N2 间隔长度N2=总距离S1/总共段数N1"},
		{"3. Calculate the interval length L1 from the 1st to the 16th. The interval length L1 from the 1st to the 16th is equal to (16th N6-1st N7) multiplied by the interval length N2",
		"3.计算第1到16间隔长度L1 第1到16间隔长度L1=(第16棵N6-第1棵N7)*间隔长度N2"},
		//变量表
		{"MiddleTreeN2","中间棵树N2"},
		{"ExcesssegmentcountN5","多余的段数N5"},
		{"TotaldistanceS1","总距离S1"},
		{"16thN6tree","第16棵N6"},
		{"ThefirstN7","第1棵N7"},
		{"TotalnumberofsegmentsN1","总共段数N1"},
		{"IntervallengthN2","间隔长度N2"},
		{"IntervallengthL1from1to16","第1到16间隔长度L1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(中间棵树N2, 22);
	DefineLangVarInt(多余的段数N5, 1);
	DefineLangVarInt(总距离S1, 115);
	DefineLangVarInt(第16棵N6, 16);
	DefineLangVarInt(第1棵N7, 1);
	const char* pPic =
		"             |------------------------------------22棵-----------------------------------------|\n"
		"|-----5m-----|-----5m-----|-----5m-----|-----5m-----|-----5m-----|……-----5m-----|-----5m-----|-----5m-----|\n"
		;
	ColPrintf(PrintfCol::标题, Lang("P88 例五 植树问题(最前面最后面两棵树这里不算所以是两边不栽)"));
	ColPrintf(PrintfCol::标题, Lang("题目：两棵树相距115米，中间有22棵树，第16棵树与第1棵树相隔多少米?"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(总共段数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算总共段数N1 总共段数N1=中间棵树N2+多余的段数N5"));
	总共段数N1 = 中间棵树N2 + 多余的段数N5;
	总共段数N1.PrintProcessLog(1);
	DefineLangVarInt(间隔长度N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算间隔长度N2 间隔长度N2=总距离S1/总共段数N1"));
	间隔长度N2 = 总距离S1 / 总共段数N1;
	间隔长度N2.PrintProcessLog(2);
	DefineLangVarInt(第1到16间隔长度L1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算第1到16间隔长度L1 第1到16间隔长度L1=(第16棵N6-第1棵N7)*间隔长度N2"));
	第1到16间隔长度L1 = (第16棵N6 - 第1棵N7) * 间隔长度N2;
	第1到16间隔长度L1.PrintProcessLog(3);
}
void P88_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P88 Case Six Tree Planting Problem","P88 例六 植树问题"},
		{"Title: A circular flower bed with a circle of 120 meters. If we follow the flower bed, there will be one lilac flower every six meters. There will be two equally spaced roses between the lilacs. How many lilacs, how many roses?",
		"题目：一个圆形花坛，一圈是120米，如果沿着花坛，每六米一个丁香花，丁香花之间有等距离的两株月季花，几株丁香花，几株月季花?"},
		{"1. Calculate the number of lilacs N1. The number of lilacs N1 is equal to the length of one circle N1 divided by one flower every six meters",
		"1.计算丁香花数量N1 丁香花数量N1=一圈长度N1/每六米一个花"},
		{"2. Calculate the number of roses N2=the number of lilacs N1 * the number of roses per segment N3",
		"2.计算月季花数量N2 月季花数量N2=丁香花数量N1*每段月季花数量N3"},
		//变量表
		{"CirclelengthN1","一圈长度N1"},
		{"Oneflowereverysixmeters","每六米一个花"},
		{"NumberofrosespersegmentN3","每段月季花数量N3"},
		{"NumberoflilacsN1","丁香花数量N1"},
		{"NumberofrosesN2","月季花数量N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(一圈长度N1, 120);
	DefineLangVarInt(每六米一个花, 6);
	DefineLangVarInt(每段月季花数量N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P88 例六 植树问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个圆形花坛，一圈是120米，如果沿着花坛，每六米一个丁香花，丁香花之间有等距离的两株月季花，几株丁香花，几株月季花?"));
	DefineLangVarInt(丁香花数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算丁香花数量N1 丁香花数量N1=一圈长度N1/每六米一个花"));
	丁香花数量N1 = 一圈长度N1 / 每六米一个花;
	丁香花数量N1.PrintProcessLog(1);
	DefineLangVarInt(月季花数量N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算月季花数量N2 月季花数量N2=丁香花数量N1*每段月季花数量N3"));
	月季花数量N2 = 丁香花数量N1 * 每段月季花数量N3;
	月季花数量N2.PrintProcessLog(2);
}
void P88()
{
	P88_1();
	ColPrintf(PrintfCol::方法, "");
	P88_2();
	ColPrintf(PrintfCol::方法, "");
	P88_3();
	ColPrintf(PrintfCol::方法, "");
	P88_4();
	ColPrintf(PrintfCol::方法, "");
	P88_5();
	ColPrintf(PrintfCol::方法, "");
	P88_6();
	ColPrintf(PrintfCol::方法, "");
}
void P88_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P88();
	Lang.SetCurLanguage(LanguageLib::English);
	P88();
	ColPrintf(PrintfCol::方法, "");

}