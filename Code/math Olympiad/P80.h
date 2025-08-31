#pragma once
void P80_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 Case Study of One Chicken and Rabbit in the Same Cage","P80 例一 鸡兔同笼假设法"},
		{"Title: There are 50 bills of one yuan, two yuan, and five yuan, with a total face value of 116 yuan. There are two more bills of one yuan than two yuan. How many bills of the three types are there in total?",
		"题目：有一元两元五元纸币共50张，面值共116元，1元数量比两元多两张，三种纸币共有多少张?"},
		{"1. Calculate if there are two yuan bills with the same face value N1, and if there are two yuan bills with the same face value N1=total face value N2- the number of bills with more than two yuan N3 * one yuan N4",
		"1.计算如果一二元纸币数量相同面值N1 如果一二元纸币数量相同面值N1=总面值N2-比二元多张数N3*一元N4"},
		{"2. Calculate if all have a face value of five yuan N2=five yuan N5 * (total number N6- more than two yuan N3)",
		"2.计算如果都是五元面值N2 如果都是五元面值N2=五元N5*(总张数N6-比二元多张数N3)"},
		{"3. Calculate the face value difference N7. Face value difference N7=if all are five yuan face value N2- if the quantity of one and two yuan bills is the same, face value N1",
		"3.计算面值差N7 面值差N7=如果都是五元面值N2-如果一二元纸币数量相同面值N1"},
		{"4. Calculate the number of binary sheets N8=face value difference N7/(five yuan N5 * take out two sheets N10- (one yuan N4+two yuan N5))",
		"4.计算二元张数N8 二元张数N8=面值差N7/(五元N5*拿出两张N10-(一元N4+二元N5))"},
		{"5. Calculate the number of single element sheets N6=the number of binary sheets N8+the number of more than binary sheets N3",
		"5.计算一元张数N6 一元张数N6=二元张数N8+比二元多张数N3"},
		{"6. Calculate the number of pentagonal sheets N7=total sheets N6- binary sheets N8- unary sheets N6",
		"6.计算五元张数N7 五元张数N7=总张数N6-二元张数N8-一元张数N6"},
		//变量表
		{"TotalfacevalueN2","总面值N2"},
		{"Morethantwoyuan,N3","比二元多张数N3"},
		{"OneyuanN4","一元N4"},
		{"FiveyuanN5","五元N5"},
		{"BinaryN5","二元N5"},
		{"TotalnumberofpagesN6","总张数N6"},
		{"TakeouttwoN10cards","拿出两张N10"},
		{"Ifthequantityofoneandtwoyuanbanknotesisthesame,withafacevalueofN1","如果一二元纸币数量相同面值N1"},
		{"IftheyareallfiveyuanfacevalueN2","如果都是五元面值N2"},
		{"FacevaluedifferenceN7","面值差N7"},
		{"NumberofbinarysheetsN8","二元张数N8"},
		{"NumberofsheetsperyuanN6","一元张数N6"},
		{"Numberofsheetsfor5yuanN7","五元张数N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(总面值N2,116);
	DefineLangVarInt(比二元多张数N3, 2);
	DefineLangVarInt(一元N4, 1);
	DefineLangVarInt(五元N5, 5);
	DefineLangVarInt(二元N5, 2);
	DefineLangVarInt(总张数N6, 50);
	DefineLangVarInt(拿出两张N10, 2);
	ColPrintf(PrintfCol::标题, Lang("P80 例一 鸡兔同笼假设法"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一元两元五元纸币共50张，面值共116元，1元数量比两元多两张，三种纸币共有多少张?"));
	DefineLangVarInt(如果一二元纸币数量相同面值N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算如果一二元纸币数量相同面值N1 如果一二元纸币数量相同面值N1=总面值N2-比二元多张数N3*一元N4"));
	如果一二元纸币数量相同面值N1 = 总面值N2 - 比二元多张数N3 * 一元N4;
	如果一二元纸币数量相同面值N1.PrintProcessLog(1);
	DefineLangVarInt(如果都是五元面值N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算如果都是五元面值N2 如果都是五元面值N2=五元N5*(总张数N6-比二元多张数N3)"));
	如果都是五元面值N2 = 五元N5 * (总张数N6 - 比二元多张数N3);
	如果都是五元面值N2.PrintProcessLog(1);
	DefineLangVarInt(面值差N7, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算面值差N7 面值差N7=如果都是五元面值N2-如果一二元纸币数量相同面值N1"));
	面值差N7 = 如果都是五元面值N2 - 如果一二元纸币数量相同面值N1;
	面值差N7.PrintProcessLog(3);
	DefineLangVarInt(二元张数N8, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算二元张数N8 二元张数N8=面值差N7/(五元N5*拿出两张N10-(一元N4+二元N5))"));
	二元张数N8 = 面值差N7 / (五元N5 * 拿出两张N10 - (一元N4 + 二元N5));
	二元张数N8.PrintProcessLog(4);
	DefineLangVarInt(一元张数N6, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算一元张数N6 一元张数N6=二元张数N8+比二元多张数N3"));
	一元张数N6 = 二元张数N8 + 比二元多张数N3;
	一元张数N6.PrintProcessLog(5);
	DefineLangVarInt(五元张数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算五元张数N7 五元张数N7=总张数N6-二元张数N8-一元张数N6"));
	五元张数N7 = 总张数N6 - 二元张数N8 - 一元张数N6;
	五元张数N7.PrintProcessLog(6);
}
void P80_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 Case Study: Equation Method for Chicken and Rabbit in the Same Cage","P80 例一 鸡兔同笼方程法"},
		{"Title: There are 50 bills of one yuan, two yuan, and five yuan, with a total face value of 116 yuan. There are two more bills of one yuan than two yuan. How many bills of the three types are there in total?",
		"题目：有一元两元五元纸币共50张，面值共116元，1元数量比两元多两张，三种纸币共有多少张?"},
		{"Let x be a unary quantity, y be a quintuple quantity, and x+2 be a bivariate quantity",
		"设x为一元数量，y为五元数量，x+2为两元数量"},
		{"1. List the face value equation S1 (x+2)+2x+5y=116",
		"1.列出面值方程S1 (x+2)+2x+5y=116"},
		{"2. Simplify S1 to obtain S2 x+2x+5y=114",
		"2.化简S1得到S2 x+2x+5y=114"},
		{"3. Simplify S2 to obtain S3 3x+5y=114",
		"3.化简S2得到S3 3x+5y=114"},
		{"4. List the quantity relationship S4 (x+2)+x+y=50",
		"4.列出数量关系S4 （x+2）+x+y=50"},
		{"5. Simplify S4 to obtain S5 x+x+y=48=>2x+y=48",
		"5.化简S4得到S5 x+x+y=48=>2x+y=48"},
		{"6. According to S5, list the equation for y as S6 y=48-2x",
		"6.根据S5列出y的方程S6 y=48-2x"},
		{"7. Substitute S6 into S3 to obtain S7 3x+5 (48-2x)=114",
		"7.把S6带入S3得到S7 3x+5(48-2x)=114"},
		{"8. Expand S7 to obtain S8 3x+240-10x=114",
		"8.展开S7得到S8 3x+240-10x=114"},
		{"9. Simplify S8 to obtain S9 3x-10x=-126=>-7x=-126",
		"9.化简S8得到S9 3x-10x=-126=>-7x=-126"},
		{"10. Simplify S9 to obtain S10- x=-18",
		"10.化简S9得到S10 -x=-18=>x=18"},
		{"11. Substitute S10 into S6 to obtain S11 y=48-2 * 18=12",
		"11.把S10带入S6得到S11 y=48-2*18=12"},
		{"12. Obtain binary quantity S12 x+2=18+2=20",
		"12.得到二元数量S12 x+2=18+2=20"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P80 例一 鸡兔同笼方程法"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一元两元五元纸币共50张，面值共116元，1元数量比两元多两张，三种纸币共有多少张?"));
	ColPrintf(PrintfCol::方法, Lang("设x为一元数量，y为五元数量，x+2为两元数量"));
	ColPrintf(PrintfCol::方法, Lang("1.列出面值方程S1 (x+2)+2x+5y=116"));
	ColPrintf(PrintfCol::方法, Lang("2.化简S1得到S2 x+2x+5y=114"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 3x+5y=114"));
	ColPrintf(PrintfCol::方法, Lang("4.列出数量关系S4 （x+2）+x+y=50"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S4得到S5 x+x+y=48=>2x+y=48"));
	ColPrintf(PrintfCol::方法, Lang("6.根据S5列出y的方程S6 y=48-2x"));
	ColPrintf(PrintfCol::方法, Lang("7.把S6带入S3得到S7 3x+5(48-2x)=114"));
	ColPrintf(PrintfCol::方法, Lang("8.展开S7得到S8 3x+240-10x=114"));
	ColPrintf(PrintfCol::方法, Lang("9.化简S8得到S9 3x-10x=-126=>-7x=-126"));
	ColPrintf(PrintfCol::方法, Lang("10.化简S9得到S10 -x=-18=>x=18"));
	ColPrintf(PrintfCol::方法, Lang("11.把S10带入S6得到S11 y=48-2*18=12"));
	ColPrintf(PrintfCol::方法, Lang("12.得到二元数量S12 x+2=18+2=20"));
}
void P80_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 Cases 2 of Common Law for Chicken and Rabbit in the Same Cage","P80 例二 鸡兔同笼普通法"},
		{"Title: One hundred animals drink 100 cups of cola, one large animal drinks three cups per person, and three small animals drink one cup per person. How many large animals and how many small animals are there?",
		"题目：一百只动物喝100杯可乐，大动物一人喝三杯，小动物三人喝人一杯，大动物多少只，小动物多少只?"},
		{"1. Calculate the number of servings of cola consumed by a large animal N1=the number of cups consumed by the large animal N2 * the number of servings per cup N3",
		"1.计算大动物喝一份可乐数N1 大动物喝一份可乐数N1=大动物喝的杯数N2*每杯的份数N3"},
		{"2. Calculate If all the cups are consumed by large animals, N2=the number of cups consumed by one large animal, N4 * the number of cola cups, N5",
		"2.计算如果全是大动物喝的杯数N2 全是大动物喝的杯数N2=大动物一个喝的杯数N4*可乐杯数N5"},
		{"3. Calculate the number of cups consumed by small animals N3=number of cola cups N5 * number of servings consumed by small animals N6",
		"3.计算如果是小动物喝的杯数N3 如果是小动物喝的杯数N3=可乐杯数N5*小动物喝的份数N6"},
		{"4. Calculate the difference in the number of cups N4=the number of cups consumed by all large animals N2- the number of cups consumed by small animals N3",
		"4.计算杯数差N4 杯数差N4=全是大动物喝的杯数N2-如果是小动物喝的杯数N3"},
		{"5. Calculate the number of large animals N5=cup difference N4/(the number of cola drinks by large animals N1- the number of cola drinks by small animals N6)",
		"5.计算大动物只数N5 大动物只数N5=杯数差N4/(大动物喝一份可乐数N1-小动物喝的份数N6)"},
		{"6. Calculate the number of small animals N6=number of cola cups N5- number of large animals N5",
		"6.计算小动物只数N6 小动物只数N6=可乐杯数N5-大动物只数N5"},
		//变量表
		{"NumberofcupsconsumedbylargeanimalsN2","大动物喝的杯数N2"},
		{"NumberofservingspercupN3","每杯的份数N3"},
		{"ThenumberofcupsalargeanimaldrinksN4","大动物一个喝的杯数N4"},
		{"NumberofCokeCupsN5","可乐杯数N5"},
		{"NumberofservingsforsmallanimalsN6","小动物喝的份数N6"},
		{"LargeanimalsdrinkingoneservingofcolaN1","大动物喝一份可乐数N1"},
		{"Ifallthecupsareconsumedbylargeanimals,N2","全是大动物喝的杯数N2"},
		{"Ifitisasmallanimal,thenumberofcupsconsumedisN3","如果是小动物喝的杯数N3"},
		{"CupdifferenceN4","杯数差N4"},
		{"NumberoflargeanimalsN5","大动物只数N5"},
		{"NumberofsmallanimalsN6","小动物只数N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(大动物喝的杯数N2, 3);
	DefineLangVarInt(每杯的份数N3, 3);
	DefineLangVarInt(大动物一个喝的杯数N4, 3);
	DefineLangVarInt(可乐杯数N5, 100);
	DefineLangVarInt(小动物喝的份数N6, 1);
	ColPrintf(PrintfCol::标题, Lang("P80 例二 鸡兔同笼普通法"));
	ColPrintf(PrintfCol::标题, Lang("题目：一百只动物喝100杯可乐，大动物一人喝三杯，小动物三人喝人一杯，大动物多少只，小动物多少只?"));
	DefineLangVarInt(大动物喝一份可乐数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算大动物喝一份可乐数N1 大动物喝一份可乐数N1=大动物喝的杯数N2*每杯的份数N3"));
	大动物喝一份可乐数N1 = 大动物喝的杯数N2 * 每杯的份数N3;
	大动物喝一份可乐数N1.PrintProcessLog(1);
	DefineLangVarInt(全是大动物喝的杯数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算如果全是大动物喝的杯数N2 全是大动物喝的杯数N2=大动物一个喝的杯数N4*可乐杯数N5"));
	全是大动物喝的杯数N2 = 大动物一个喝的杯数N4 * 可乐杯数N5;
	全是大动物喝的杯数N2.PrintProcessLog(2);
	DefineLangVarInt(如果是小动物喝的杯数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算如果是小动物喝的杯数N3 如果是小动物喝的杯数N3=可乐杯数N5*小动物喝的份数N6"));
	如果是小动物喝的杯数N3 = 可乐杯数N5 * 小动物喝的份数N6;
	如果是小动物喝的杯数N3.PrintProcessLog(3);
	DefineLangVarInt(杯数差N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算杯数差N4 杯数差N4=全是大动物喝的杯数N2-如果是小动物喝的杯数N3"));
	杯数差N4 = 全是大动物喝的杯数N2 - 如果是小动物喝的杯数N3;
	杯数差N4.PrintProcessLog(4);
	DefineLangVarInt(大动物只数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算大动物只数N5 大动物只数N5=杯数差N4/(大动物喝一份可乐数N1-小动物喝的份数N6)"));
	大动物只数N5 = 杯数差N4 / (大动物喝一份可乐数N1 - 小动物喝的份数N6);
	大动物只数N5.PrintProcessLog(5);
	DefineLangVarInt(小动物只数N6, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算小动物只数N6 小动物只数N6=可乐杯数N5-大动物只数N5"));
	小动物只数N6 = 可乐杯数N5 - 大动物只数N5;
	小动物只数N6.PrintProcessLog(6);
}
void P80_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 Case Study of Two Chickens and Rabbits in the Same Cage Equation Method","P80 例二 鸡兔同笼方程法"},
		{"Title: One hundred animals drink 100 cups of cola, one large animal drinks three cups per person, and three small animals drink one cup per person. How many large animals and how many small animals are there?",
		"题目：一百只动物喝100杯可乐，大动物一人喝三杯，小动物三人喝人一杯，大动物多少只，小动物多少只?"},
		{"Set x large animals and y small animals",
		"设大动物为x只，小动物为y只"},
		{"1. List the quantity relationship S1 x+y=100",
		"1.列出数量关系S1 x+y=100"},
		{"2. List the cup count relationship S2 3x+3/y=100",
		"2.列出杯数关系S2 3x+3/y=100"},
		{"3. Simplify S1 to obtain S2 y=100-x",
		"3.化简S1得到S3 y=100-x"},
		{"4. Substitute S3 into S2 to obtain S4 3x+3/(100-x)=100",
		"4.把S3带入S2得到S4 3x+3/(100-x)=100"},
		{"5. Subtract the denominator of S4 to obtain S5 (3x+3/(100-x)) * 3=100 * 3=>9x+100-x=300",
		"5.化掉S4的分母得到S5 (3x+3/(100-x))*3=100*3=>9x+100-x=300"},
		{"6. Simplify S5 to obtain S6 8x+100=300",
		"6.化简S5得到S6 8x+100=300"},
		{"7. Simplify S6 to obtain S7 8x=200=>x=25",
		"7.化简S6得到S7 8x=200=>x=25"},
		{"8. Substitute S7 into S3 to obtain S8 with y=100-x=>y=100-25=75",
		"8.把S7带入S3得到S8 y=100-x=>y=100-25=75"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P80 例二 鸡兔同笼方程法"));
	ColPrintf(PrintfCol::标题, Lang("题目：一百只动物喝100杯可乐，大动物一人喝三杯，小动物三人喝人一杯，大动物多少只，小动物多少只?"));
	ColPrintf(PrintfCol::方法, Lang("设大动物为x只，小动物为y只"));
	ColPrintf(PrintfCol::方法, Lang("1.列出数量关系S1 x+y=100"));
	ColPrintf(PrintfCol::方法, Lang("2.列出杯数关系S2 3x+3/y=100"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S1得到S3 y=100-x"));
	ColPrintf(PrintfCol::方法, Lang("4.把S3带入S2得到S4 3x+3/(100-x)=100"));
	ColPrintf(PrintfCol::方法, Lang("5.化掉S4的分母得到S5 (3x+3/(100-x))*3=100*3=>9x+100-x=300"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S5得到S6 8x+100=300"));
	ColPrintf(PrintfCol::方法, Lang("7.化简S6得到S7 8x=200=>x=25"));
	ColPrintf(PrintfCol::方法, Lang("8.把S7带入S3得到S8 y=100-x=>y=100-25=75"));
}
void P80_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 cases of three chickens and rabbits in the same cage using common law","P80 例三 鸡兔同笼普通法"},
		{"Title: Animal special forces soldiers go out to carry out missions. They go out 20 times a day on sunny days and 12 times on rainy days, totaling 112 times. On average, they go out 14 times a day. How many rainy days are there?",
		"题目：动物特种兵出去执行任务，晴天每天出20次，雨天出12次，共出112次，平均每天出14次，有多少天雨天?"},
		{"1. Calculate the number of days of appointment N1=number of outings N2/average number N3",
		"1.计算出任天数N1 出任天数N1=出去次数N2/平均次数N3"},
		{"2. Calculate the number of sunny days N2 if all are sunny days N2=number of sunny days N3 * number of days N1",
		"2.计算如果全是晴天次数N2 如果全是晴天次数N2=晴天次数N3*出任天数N1"},
		{"3. Calculate the frequency difference N3, which is equal to the number of exits N2 minus the number of sunny days N2",
		"3.计算次数差N3 次数差N3=出去次数N2-如果全是晴天次数N2"},
		{"4. Calculate the number of rainy days N4=frequency difference N3/(sunny days N3- rainy days N4)",
		"4.计算雨天天数N4 雨天天数N4=次数差N3/(晴天次数N3-雨天次数N4)"},
		//变量表
		{"NumberofoutingsN2","出去次数N2"},
		{"AveragefrequencyN3","平均次数N3"},
		{"SunnyDaysN3","晴天次数N3"},
		{"NumberofrainydaysN4","雨天次数N4"},
		{"NumberofdaysinofficeN1","出任天数N1"},
		{"Ifit'sallsunnytimesN2","如果全是晴天次数N2"},
		{"NumberdifferenceN3","次数差N3"},
		{"NumberofrainydaysN4","雨天天数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(出去次数N2, 112);
	DefineLangVarInt(平均次数N3, 14);
	DefineLangVarInt(晴天次数N3, 20);
	DefineLangVarInt(雨天次数N4, 12);
	ColPrintf(PrintfCol::标题, Lang("P80 例三 鸡兔同笼普通法"));
	ColPrintf(PrintfCol::标题, Lang("题目：动物特种兵出去执行任务，晴天每天出20次，雨天出12次，共出112次，平均每天出14次，有多少天雨天?"));
	DefineLangVarInt(出任天数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算出任天数N1 出任天数N1=出去次数N2/平均次数N3"));
	出任天数N1 = 出去次数N2 / 平均次数N3;
	出任天数N1.PrintProcessLog(1);
	DefineLangVarInt(如果全是晴天次数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算如果全是晴天次数N2 如果全是晴天次数N2=晴天次数N3*出任天数N1"));
	如果全是晴天次数N2 = 晴天次数N3 * 出任天数N1;
	如果全是晴天次数N2.PrintProcessLog(2);
	DefineLangVarInt(次数差N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算次数差N3 次数差N3=出去次数N2-如果全是晴天次数N2"));
	次数差N3 = 出去次数N2 - 如果全是晴天次数N2;
	次数差N3.PrintProcessLog(3);
	DefineLangVarInt(雨天天数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算雨天天数N4 雨天天数N4=次数差N3/(晴天次数N3-雨天次数N4)"));
	雨天天数N4 = 次数差N3 / (晴天次数N3 - 雨天次数N4);
	雨天天数N4.PrintProcessLog(4);
}
void P80_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 cases of three chickens and rabbits in the same cage using common law","P80 例三 鸡兔同笼方程法"},
		{"Title: Animal special forces soldiers go out to carry out missions. They go out 20 times a day on sunny days and 12 times on rainy days, totaling 112 times. On average, they go out 14 times a day. How many rainy days are there?",
		"题目：动物特种兵出去执行任务，晴天每天出20次，雨天出12次，共出112次，平均每天出14次，有多少天雨天?"},
		{"Let the total number of days be t, the number of sunny days be x, and the number of cloudy days be y (y is the main target)",
		"设总天数为t，晴天天数为x，阴天天数为y(y是主要目标)"},
		{"1. List the equation for the number of days S1 14=112/t=>t=112/14=8",
		"1.列出天数方程S1 14=112/t=>t=112/14=8"},
		{"2. List the number of days equation S2 x+y=8",
		"2.列出天数方程S2 x+y=8"},
		{"3. List the number equation S3 20x+12y=112",
		"3.列出次数方程S3 20x+12y=112"},
		{"4. Simplify S2 to obtain S3 y=8-x",
		"4.化简S2得到S4 y=8-x"},
		{"5. Substitute S4 into S3 to obtain S5 20x+12 (8-x)=112",
		"5.把S4带入S3得到S5 20x+12(8-x)=112"},
		{"6. Simplify S5 to obtain S6 20x+96-12x=112",
		"6.化简S5得到S6 20x+96-12x=112"},
		{"7. Simplify S6 to obtain S7 20x-12x=16",
		"7.化简S6得到S7 20x-12x=16"},
		{"8. Simplify S7 to obtain S8 with 8x=16=>x=2",
		"8.化简S7得到S8 8x=16=>x=2"},
		{"9. Substitute S8 into S4 to obtain S5 y=8-2=6",
		"9.把S8带入S4得到S5 y=8-2=6"},

	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P80 例三 鸡兔同笼方程法"));
	ColPrintf(PrintfCol::标题, Lang("题目：动物特种兵出去执行任务，晴天每天出20次，雨天出12次，共出112次，平均每天出14次，有多少天雨天?"));
	ColPrintf(PrintfCol::方法, Lang("设总天数为t，晴天天数为x，阴天天数为y(y是主要目标)"));
	ColPrintf(PrintfCol::方法, Lang("1.列出天数方程S1 14=112/t=>t=112/14=8"));
	ColPrintf(PrintfCol::方法, Lang("2.列出天数方程S2 x+y=8"));
	ColPrintf(PrintfCol::方法, Lang("3.列出次数方程S3 20x+12y=112"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S2得到S4 y=8-x"));
	ColPrintf(PrintfCol::方法, Lang("5.把S4带入S3得到S5 20x+12(8-x)=112"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S5得到S6 20x+96-12x=112"));
	ColPrintf(PrintfCol::方法, Lang("7.化简S6得到S7 20x-12x=16"));
	ColPrintf(PrintfCol::方法, Lang("8.化简S7得到S8 8x=16=>x=2"));
	ColPrintf(PrintfCol::方法, Lang("9.把S8带入S4得到S5 y=8-2=6"));
}
void P80_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P80 cases of four chickens and rabbits in the same cage","P80 例四 鸡兔同笼"},
		{"Title: Locomotive A travels 200 kilometers per hour from point A to point B, while locomotive B travels 160 kilometers per hour from point B to point A. In the picture, locomotive A stops for 4 hours due to a malfunction, so it arrives at the destination one hour later than locomotive B. What is the distance between locomotive A and point B?",
		"题目：机车A队从甲开到乙地，每小时行200千米，与此同时机车B从乙到甲，每小时160千米，图中A队因故障停留4小时，所以比B队迟一小时到达目的地，求甲乙两地的距离?"},
		{"1. Calculate the time T1 that A uses less than B, which is equal to the time T1-A stays and the time T2 it is late",
		"1.计算A比B少用的时间T1 A比B少用的时间T1=A停留的时间T1-A迟到的时间T2"},
		{"2. Calculate the distance traveled by A without stopping, S1. If A does not stop, S1=the time T1 that A takes less than B * A speed V1",
		"2.计算如果A没有停留多走的路程S1 如果A没有停留多走的路程S1=A比B少用的时间T1*A速度V1"},
		{"3. Calculate the time T3 for A to travel to B and travel to B, where T3 equals the distance traveled by A without stopping, denoted as S1/(A speed V1-B speed V2)",
		"3.计算A到达B行驶的时间T3 A到达B行驶的时间T3=如果A没有停留多走的路程S1/(A速度V1-B速度V2)"},
		{"4. Calculate the distance between two places S4. The distance between two places S4=the time it takes for A to reach B and travel T3 * B speed V2",
		"4.计算两地距离S4 两地距离S4=A到达B行驶的时间T3*B速度V2"},
		//变量表
		{"A'sdwelltimeT1","A停留的时间T1"},
		{"AislateattimeT2","A迟到的时间T2"},
		{"AspeedV1","A速度V1"},
		{"BspeedV2","B速度V2"},
		{"AtakeslesstimeT1thanB","A比B少用的时间T1"},
		{"IfAdoesn'tstopandwalkanextradistanceS1","如果A没有停留多走的路程S1"},
		{"TimeT3forAtoreachBandtravel","A到达B行驶的时间T3"},
		{"DistancebetweentwolocationsS4","两地距离S4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(A停留的时间T1, 4);
	DefineLangVarInt(A迟到的时间T2, 1);
	DefineLangVarInt(A速度V1, 200);
	DefineLangVarInt(B速度V2, 160);
	ColPrintf(PrintfCol::标题, Lang("P80 例四 鸡兔同笼"));
	ColPrintf(PrintfCol::标题, Lang("题目：机车A队从甲开到乙地，每小时行200千米，与此同时机车B从乙到甲，每小时160千米，图中A队因故障停留4小时，所以比B队迟一小时到达目的地，求甲乙两地的距离?"));
	DefineLangVarInt(A比B少用的时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算A比B少用的时间T1 A比B少用的时间T1=A停留的时间T1-A迟到的时间T2"));
	A比B少用的时间T1 = A停留的时间T1 - A迟到的时间T2;
	A比B少用的时间T1.PrintProcessLog(1);
	DefineLangVarInt(如果A没有停留多走的路程S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算如果A没有停留多走的路程S1 如果A没有停留多走的路程S1=A比B少用的时间T1*A速度V1"));
	如果A没有停留多走的路程S1 = A比B少用的时间T1 * A速度V1;
	如果A没有停留多走的路程S1.PrintProcessLog(2);
	DefineLangVarInt(A到达B行驶的时间T3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算A到达B行驶的时间T3 A到达B行驶的时间T3=如果A没有停留多走的路程S1/(A速度V1-B速度V2)"));
	A到达B行驶的时间T3 = 如果A没有停留多走的路程S1 / (A速度V1 - B速度V2);
	A到达B行驶的时间T3.PrintProcessLog(3);
	DefineLangVarInt(两地距离S4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算两地距离S4 两地距离S4=A到达B行驶的时间T3*B速度V2"));
	两地距离S4 = A到达B行驶的时间T3 * B速度V2;
	两地距离S4.PrintProcessLog(4);
}

void P80()
{
	P80_1();
	ColPrintf(PrintfCol::方法, "");
	P80_1_2();
	ColPrintf(PrintfCol::方法, "");
	P80_2();
	ColPrintf(PrintfCol::方法, "");
	P80_2_2();
	ColPrintf(PrintfCol::方法, "");
	P80_3();
	ColPrintf(PrintfCol::方法, "");
	P80_3_2();
	ColPrintf(PrintfCol::方法, "");
	P80_4();
	ColPrintf(PrintfCol::方法, "");
	//P66_2();
	ColPrintf(PrintfCol::方法, "");
	//P66_3();
	ColPrintf(PrintfCol::方法, "");
	//P66_4();
	ColPrintf(PrintfCol::方法, "");
	//P77_5();
	ColPrintf(PrintfCol::方法, "");
}
void P80_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P80();
	Lang.SetCurLanguage(LanguageLib::English);
	P80();
	ColPrintf(PrintfCol::方法, "");

}