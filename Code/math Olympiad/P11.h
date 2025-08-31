#pragma once
void P11_1_1()//****B
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Example 1 Hunting Dog Chasing Rabbit","P11例一方法一比例 猎狗追兔"},
		{"Title: There is a rabbit 26 steps away from the hunting dog. The hunting dog is chasing after it. It takes the rabbit 8 steps for the dog to walk 5 steps, and the distance covered by the rabbit 9 steps is equal to the distance covered by the dog 4 steps. How long does it take for the rabbit to be caught by the hunting dog? How many steps does the hunting dog run at this moment?",
		"题目：猎狗26步远处有一只兔子，猎狗追之，兔走8步的时间狗走5步，兔走9步的路程等于狗走4步的距离，兔跑多少步被猎狗抓住?此时猎狗跑多少步？"},
		{"1. Use the minimum common multiple to determine how many steps the dog and rabbit take before they meet",
		"1.用最小共倍数求出狗和兔走多少步后相遇"},
		{"2. Calculate the difference between dog and rabbit distances S1. The difference between dog and rabbit distances S1=the number of distances traveled by the dog N1- the number of distances traveled by the rabbit N2",
		"2.计算狗兔距离之差S1 狗兔距离之差S1=狗走的距离份数N1-兔走的距离份数N2"},
		{"3. Calculate the starting distance S2 between the dog and rabbit. The starting distance S2 between the dog and rabbit is equal to the dog steps N3 multiplied by the four steps taken by the hunting dog and the rabbit steps N4",
		"3.计算狗兔开始相距总份数S2 狗兔开始相距总份数S2=开始相距的狗步N3*猎狗四步兔走步数N4"},//**
		{"4. Calculate the time T1 for the dog to catch up with the rabbit (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the rabbit is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the rabbit",
		"4.计算狗追上兔时间T1(这个时间单位不是固定的但进率相同) 狗追上兔时间T1=狗兔开始相距距离S2/狗兔距离之差S1"},
		{"5. Calculate the total distance S3 of the rabbit's run. The total distance S3 of the rabbit's run is equal to the time it takes for the dog to\ncatch up with the rabbit, T1, multiplied by the number of steps taken by the rabbit at the same time, N5",
		"5.计算兔跑的总距离S3 兔跑的总距离S3=狗追上兔时间T1*相同时间兔走步数N5"},
		{"6. Calculate the total distance that the dog ran S4 and the total distance that the rabbit ran S4=the time it took for the dog to catch up with the rabbit T1 * the number of steps taken by the rabbit at the same time N6",
		"6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上兔时间T1*相同时间狗走步数N6"},
		//变量表
		{"NumberOfDogWalkingDistancesN1","狗走的距离份数N1"},
		{"DistanceTraveledByRabbitsN2","兔走的距离份数N2"},
		{"StartingWithDogStepsN3","开始相距的狗步N3"},
		{"HuntingDogFourStepsRabbitStepCountN4","猎狗四步兔走步数N4"},
		{"RabbitStepsN5AtTheSameTime","相同时间兔走步数N5"},
		{"DogStepsN6AtTheSameTime","相同时间狗走步数N6"},
		{"DifferenceInDistanceBetweenDogAndRabbitS1","狗兔距离之差S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","狗兔开始相距距离S2"},
		{"DogCatchingUpWithRabbitTimeT1","狗追上兔时间T1"},
		{"TheTotalDistanceOfRabbitRunningS3","兔跑的总距离S3"},
		{"TheTotalDistanceThatTheDogRanS4","狗跑的总距离S4"},
		{"MinimumMultiplierFactor","最小倍因数"},
		{"TheNumberOfStepsTakenByADogOnTheSameJourney","相同路程狗走的步数"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(开始相距的狗步N3, 26);
	DefineLangVarInt(猎狗四步兔走步数N4, 9);
	DefineLangVarInt(相同路程狗走的步数, 4);
	DefineLangVarInt(相同时间兔走步数N5, 8);
	DefineLangVarInt(相同时间狗走步数N6, 5);
	DefineLangVarInt(甲卡相遇时间T1, 12);
	ColPrintf(PrintfCol::标题, Lang("P11例一方法一比例 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：猎狗26步远处有一只兔子，猎狗追之，兔走8步的时间狗走5步，兔走9步的路程等于狗走4步的距离，兔跑多少步被猎狗抓住?此时猎狗跑多少步？"));
	DefineLangVarInt(狗走的距离份数N1, 0);
	DefineLangVarInt(兔走的距离份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("1.用最小共倍数求出狗和兔走多少步后相遇"));
	DefineLangVarInt(最小倍因数, MinCommonMultiple(猎狗四步兔走步数N4.Var, 相同路程狗走的步数.Var));
	狗走的距离份数N1 = (最小倍因数/ 相同路程狗走的步数)* 相同时间狗走步数N6;
	兔走的距离份数N2 = (最小倍因数/ 猎狗四步兔走步数N4)* 相同时间兔走步数N5;
	狗走的距离份数N1.PrintProcessLog(1);
	兔走的距离份数N2.PrintProcessLog(1);
	DefineLangVar(int, 狗兔距离之差S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算狗兔距离之差S1 狗兔距离之差S1=狗走的距离份数N1-兔走的距离份数N2"));
	狗兔距离之差S1 = 狗走的距离份数N1 - 兔走的距离份数N2;
	狗兔距离之差S1.PrintProcessLog(2);
	DefineLangVar(int, 狗兔开始相距距离S2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算狗兔开始相距距离S2 狗兔开始相距距离S2=开始相距的狗步N3*猎狗四步兔走步数N4"));
	狗兔开始相距距离S2 = 开始相距的狗步N3 * 猎狗四步兔走步数N4;
	狗兔开始相距距离S2.PrintProcessLog(3);
	DefineLangVar(int, 狗追上兔时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算狗追上兔时间T1(这个时间单位不是固定的但进率相同) 狗追上兔时间T1=狗兔开始相距距离S2/狗兔距离之差S1"));
	狗追上兔时间T1 = 狗兔开始相距距离S2 / 狗兔距离之差S1;
	狗追上兔时间T1.PrintProcessLog(4);
	DefineLangVar(int, 兔跑的总距离S3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算兔跑的总距离S3 兔跑的总距离S3=狗追上兔时间T1*相同时间兔走步数N5"));
	兔跑的总距离S3 = 狗追上兔时间T1 * 相同时间兔走步数N5;
	兔跑的总距离S3.PrintProcessLog(5);
	DefineLangVar(int, 狗跑的总距离S4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上兔时间T1*相同时间狗走步数N6"));
	狗跑的总距离S4 = 狗追上兔时间T1 * 相同时间狗走步数N6;
	狗跑的总距离S4.PrintProcessLog(6);
}
void P11_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Example 1 Method 2 Equation Hunting Dog Chasing Rabbit","P11例一方法二方程 猎狗追兔"},
		{"Title: There is a rabbit 26 steps away from the hunting dog. The hunting dog is chasing after it. It takes the rabbit 8 steps for the\ndog to walk 5 steps, and the distance covered by the rabbit 9 steps is equal to the distance covered by the\ndog 4 steps. How many steps did the rabbit run and get caught by the hunting dog? How many steps does the hunting dog\nrun at this moment?"
		,"题目：猎狗26步远处有一只兔子，猎狗追之，兔走8步的时间狗走5步，兔走9步的路程等于狗走4步的距离，兔跑多少步被猎狗抓住?此时猎狗跑多少步？"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 26 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗26步远追上兔子需要gc1步，兔子则跑了rc1步"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 4/9=rd/gd",
		"2.变形S1得到S2 4/9=rd/gd"},
		{"3. List the time relationship of equation S3 gc/rc1=(8/t)/(5/t)==>gc/rc1=8/5",
		"3.列出式子时间关系S3 gc/rc1=(8/t)/(5/t) ==> gc/rc1=8/5"},
		{"4. Enter the offset distance relationship S4 gd * gc1=rd * rc1+(26 * gd) based on the value of S3",
		"4.根据S3的数值带入加偏移路程关系S4 gd*gc1=rd*rc1+(26*gd)"},
		{"5. Divide the two sides of equation S4 by rd * rc1 and expand the equation to obtain S5 (gd/rd) * (gc1/rc1)=1+((26 * gd)/rd * rc1)",
		"5.把S4等式两边除rd*rc1变1展开式子得到S5 (gd/rd)*(gc1/rc1)=1+((26*gd)/rd*rc1)"},
		{"6. Substitute S2 and S3 into S5 to obtain S6 (9/4) * (5/8)=1+(234/4 * rc1)==>45/32=1+(234/4 * rc1)",
		"6.把S2和S3带入S5用值代入得到S6 (9/4)*(5/8)=1+(234/4*rc1) ==> 45/32=1+(234/4*rc1)"},
		{"7. Simplify equation S6 to obtain S7 45/32-1=234/(4 * rc1)",
		"7.化简式子S6得到S7 45/32-1=234/(4*rc1)"},
		{"8. Simplify equation S7 to obtain S8 (45-32)/32=13/32=234/(4 * rc1)==>13/32=234/(4 * rc1)",
		"8.化简式子S7得到S8 (45-32)/32=13/32=234/(4*rc1) ==> 13/32=234/(4*rc1)"},
		{"Multiplying both sides by 4 yields S9 13/32 * 4=13/8=234/rc1",
		"9.S8两边同乘4得到S9 13/32*4=13/8=234/rc1"},
		{"10. Simplify equation S9 to obtain S10 13 * rc1=234 * 8=1872",
		"10.化简式子S9得到S10 13*rc1=234*8=1872"},
		{"11. Simplify equation S10 to obtain S11 rc1=1872/13=144",
		"11.化简式子S10得到S11 rc1=1872/13=144"},
		{"12. According to S3 and S11, obtain S12 gc1/144=5/8",
		"12.根据S3和S11得到S12 gc1/144=5/8"},
		{"13. Simplify equation S12 to obtain S13, exchange 8gc1=5 * 144",
		"13.化简式子S12得到S13交换 8gc1=5*144"},
		{"14. Solve for gcgc1=90",
		"14.解出gc gc1=90"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P11例一方法二方程 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：猎狗26步远处有一只兔子，猎狗追之，兔走8步的时间狗走5步，兔走9步的路程等于狗走4步的距离，兔跑多少步被猎狗抓住?此时猎狗跑多少步？"));
	ColPrintf(PrintfCol::方法, Lang("设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗26步远追上兔子需要gc1步，兔子则跑了rc1步"));
	ColPrintf(PrintfCol::方法, Lang("1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::方法, Lang("2.变形S1得到S2 4/9=rd/gd"));
	ColPrintf(PrintfCol::方法, Lang("3.列出式子时间关系S3 gc/rc1=(8/t)/(5/t) ==> gc/rc1=8/5"));
	ColPrintf(PrintfCol::方法, Lang("4.根据S3的数值带入加偏移路程关系S4 gd*gc1=rd*rc1+(26*gd)"));
	ColPrintf(PrintfCol::方法, Lang("5.把S4等式两边除rd*rc1变1展开式子得到S5 (gd/rd)*(gc1/rc1)=1+((26*gd)/rd*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("6.把S2和S3带入S5用值代入得到S6 (9/4)*(5/8)=1+(234/4*rc1) ==> 45/32=1+(234/4*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("7.化简式子S6得到S7 45/32-1=234/(4*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("8.化简式子S7得到S8 (45-32)/32=13/32=234/(4*rc1) ==> 13/32=234/(4*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("9.S8两边同乘4得到S9 13/32*4=13/8=234/rc1"));
	ColPrintf(PrintfCol::方法, Lang("10.化简式子S9得到S10 13*rc1=234*8=1872"));
	ColPrintf(PrintfCol::方法, Lang("11.化简式子S10得到S11 rc1=1872/13=144"));
	ColPrintf(PrintfCol::方法, Lang("12.根据S3和S11得到S12 gc1/144=5/8"));
	ColPrintf(PrintfCol::方法, Lang("13.化简式子S12得到S13交换 8gc1=5*144"));
	ColPrintf(PrintfCol::方法, Lang("14.解出gc gc1=90"));
}
void P11_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method One Proportional Hunting Dog Chasing Rabbit","P11巩固方法一比例 猎狗追兔"},
		{"Title: There is a rabbit 9 steps away from the hunting dog. The hunting dog is chasing after it. It takes the rabbit\n3 steps for the dog to walk 2 steps. The distance covered by the rabbit 9 steps is equal to the\ndistance covered by the dog 5 steps. How many steps does the hunting dog run when it catches up with the rabbit?",
		"题目：猎狗9步远处有一只兔子，猎狗追之，兔走3步的时间狗走2步，兔走9步的路程等于狗走5步的距离，猎狗追上兔子时跑多少步？"},
		{"1. Use the minimum common multiple to determine how many steps the dog and rabbit take before they meet",
		"1.用最小共倍数求出狗和兔走多少步后相遇（路程份）"},
		{"2. Use the minimum common multiple to determine how many steps the dog and rabbit will take before meeting (time period)",
		"2.用最小共倍数求出狗和兔走多少步后相遇（时间份）"},
		{"3. Calculate the difference between dog and rabbit distances S1. The difference between dog and rabbit distances S1=the number of distances traveled by the dog N1- the number of distances traveled by the rabbit N2",
		"3.计算狗兔距离之差S1 狗兔距离之差S1=狗走的距离份数N1-兔走的距离份数N2"},
		{"4. Calculate the starting distance S2 between the dog and the rabbit. The starting distance S2 is equal to the number of dog steps N3 multiplied by the number of dog walks N1",
		"4.计算狗兔开始相距距离S2 狗兔开始相距距离S2=开始相距的狗步N3*狗走的时间份数N1"},//**
		{"5. Calculate the time T1 for the dog to catch up with the rabbit (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the rabbit is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the rabbit",
		"5.计算狗追上兔时间T1(这个时间单位不是固定的但进率相同) 狗追上兔时间T1=狗兔开始相距距离S2/狗兔距离之差S1"},
		{"6. Calculate the total distance traveled by the dog S4=the time it takes for the dog to catch up with the rabbit T1 * the number of steps taken by the dog at the same time N6",
		"6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上兔时间T1*相同时间狗走步数N6"},
		
		//变量表
		{"NumberOfDogWalkingDistancesN1","狗走的距离份数N1"},
		{"DistanceTraveledByRabbitsN2","兔走的距离份数N2"},
		{"StartingWithDogStepsN3","开始相距的狗步N3"},
		{"HuntingDogFourStepsRabbitStepCountN4","猎狗四步兔走步数N4"},
		{"RabbitStepsN5AtTheSameTime","相同时间兔走步数N5"},
		{"DogStepsN6AtTheSameTime","相同时间狗走步数N6"},
		{"DifferenceInDistanceBetweenDogAndRabbitS1","狗兔距离之差S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","狗兔开始相距距离S2"},
		{"DogCatchingUpWithRabbitTimeT1","狗追上兔时间T1"},
		{"TheTotalDistanceOfRabbitRunningS3","兔跑的总距离S3"},
		{"TheTotalDistanceThatTheDogRanS4","狗跑的总距离S4"},
		{"MinimumMultiplierFactor","最小倍因数"},
		{"TheNumberOfStepsTakenByADogOnTheSameJourney","相同路程狗走的步数"},
		{"NumberOfDogWalkingTimesN1","狗走的时间份数N1"},
		{"DistanceTraveledByRabbitsN2","兔走的时间份数N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(开始相距的狗步N3, 9);
	DefineLangVarInt(猎狗四步兔走步数N4, 9);
	DefineLangVarInt(相同路程狗走的步数, 5);
	DefineLangVarInt(相同时间兔走步数N5, 3);
	DefineLangVarInt(相同时间狗走步数N6, 2);
	ColPrintf(PrintfCol::标题, Lang("P11巩固方法一比例 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：猎狗9步远处有一只兔子，猎狗追之，兔走3步的时间狗走2步，兔走9步的路程等于狗走5步的距离，猎狗追上兔子时跑多少步？"));
	DefineLangVarInt(狗走的距离份数N1, 0);
	DefineLangVarInt(兔走的距离份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("1.用最小共倍数求出狗和兔走多少步后相遇（路程份）"));
	DefineLangVarInt(最小倍因数, MinCommonMultiple(猎狗四步兔走步数N4.Var, 相同路程狗走的步数.Var));
	狗走的距离份数N1 = (最小倍因数 / 相同路程狗走的步数) * 相同时间狗走步数N6;
	兔走的距离份数N2 = (最小倍因数 / 猎狗四步兔走步数N4) * 相同时间兔走步数N5;
	狗走的距离份数N1.PrintProcessLog(1);
	兔走的距离份数N2.PrintProcessLog(1);
	DefineLangVarInt(狗走的时间份数N1, 0);
	DefineLangVarInt(兔走的时间份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.用最小共倍数求出狗和兔走多少步后相遇（时间份）"));
	狗走的时间份数N1 = 最小倍因数 / 相同路程狗走的步数;
	兔走的时间份数N2 = 最小倍因数 / 猎狗四步兔走步数N4;
	狗走的时间份数N1.PrintProcessLog(2);
	兔走的时间份数N2.PrintProcessLog(2);
	DefineLangVar(int, 狗兔距离之差S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算狗兔距离之差S1 狗兔距离之差S1=狗走的距离份数N1-兔走的距离份数N2"));
	狗兔距离之差S1 = 狗走的距离份数N1 - 兔走的距离份数N2;
	狗兔距离之差S1.PrintProcessLog(3);
	DefineLangVar(int, 狗兔开始相距距离S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算狗兔开始相距距离S2 狗兔开始相距距离S2=开始相距的狗步N3*狗走的时间份数N1"));
	狗兔开始相距距离S2 = 开始相距的狗步N3 * 狗走的时间份数N1;
	狗兔开始相距距离S2.PrintProcessLog(4);
	DefineLangVar(int, 狗追上兔时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算狗追上兔时间T1(这个时间单位不是固定的但进率相同) 狗追上兔时间T1=狗兔开始相距距离S2/狗兔距离之差S1"));
	狗追上兔时间T1 = 狗兔开始相距距离S2 / 狗兔距离之差S1;
	狗追上兔时间T1.PrintProcessLog(5);
	DefineLangVar(int, 狗跑的总距离S4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上兔时间T1*相同时间狗走步数N6"));
	狗跑的总距离S4 = 狗追上兔时间T1 * 相同时间狗走步数N6;
	狗跑的总距离S4.PrintProcessLog(6);
}
void P11_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method Two Equation Hunting Dog Chasing Rabbit","P11巩固方法二方程 猎狗追兔"},
		{"Title: There is a rabbit 9 steps away from the hunting dog. The hunting dog is chasing after it. It\ntakes the rabbit 3 steps for the dog to walk 2 steps. The distance covered by the rabbit 9\nsteps is equal to the distance covered by the dog 5 steps. How many steps does the hunting dog run when it catches\nup with the rabbit?"
		,"题目：猎狗9步远处有一只兔子，猎狗追之，兔走3步的时间狗走2步，兔走9步的路程等于狗走5步的距离，猎狗追上兔子时跑多少步？"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 9 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗9步远追上兔子需要gc1步，兔子则跑了rc1步"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 5/9=rd/gd",//rd=5 gd=9
		"2.变形S1得到S2 5/9=rd/gd"},
		{"3. List the time relationship between equation S3 gc/rc1=(3/t)/(2/t)==>gc/rc1=3/2",
		"3.列出式子时间关系S3 gc/rc1=(3/t)/(2/t) ==> gc/rc1=3/2"},
		{"4. Enter the offset distance relationship S4 gd * gc1=rd * rc1+(9 * gd) based on the value of S3",
		"4.根据S3的数值带入加偏移路程关系S4 gd*gc1=rd*rc1+(9*gd)"},
		{"5. Divide the two sides of equation S4 by rd * rc1 and expand the equation to obtain S5 (gd/rd) * (gc1/rc1)=1+((9 * gd)/rd * rc1)",
		"5.把S4等式两边除rd*rc1变1展开式子得到S5 (gd/rd)*(gc1/rc1)=1+((9*gd)/rd*rc1)"},
		{"6. Substitute S2 and S3 into S5 to obtain S6 (9/5) * (2/3)=1+(81/5 * rc1)==>18/15-1=81/5 * rc1)",
		"6.把S2和S3带入S5用值代入得到S6 (9/5)*(2/3)=1+(81/5*rc1) ==> 18/15-1=81/5*rc1)"},
		{"7. Simplify equation S6 to obtain S7 18/15-1=81/(5 * rc1)",
		"7.化简式子S6得到S7 18/15-1=81/(5*rc1)"},
		{"8. Simplify equation S7 to obtain S8 (18-15)/15=3/15=81/(5 * rc1)==>3/15=81/(5 * rc1)",
		"8.化简式子S7得到S8 (18-15)/15=3/15=81/(5*rc1) ==> 3/15=81/(5*rc1)"},
		{"9.Multiplying both sides by 5 yields S9 3/15 * 5=3/3=81/rc1",
		"9.S8两边同乘5得到S9 3/15*5=3/3=81/rc1"},
		{"10. Simplify equation S9 to obtain S10 3rc1=81 * 3=243",
		"10.化简式子S9得到S10 3rc1=81*3=243"},
		{"11. Simplify equation S10 to obtain S11 rc1=243/3=81",
		"11.化简式子S10得到S11 rc1=243/3=81"},
		{"12.According to S3 and S11, obtain S12 gc1/81=2/3",
		"12.根据S3和S11得到S12 gc1/81=2/3"},
		{"13. Simplify equation S12 to obtain S13, exchange 3gc1=2 * 81",
		"13.化简式子S12得到S13交换 3gc1=2*81"},
		{"14. Solve for gc1=54",
		"14.解出gc gc1=54"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P11巩固方法二方程 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：猎狗9步远处有一只兔子，猎狗追之，兔走3步的时间狗走2步，兔走9步的路程等于狗走5步的距离，猎狗追上兔子时跑多少步？"));
	ColPrintf(PrintfCol::方法, Lang("设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗9步远追上兔子需要gc1步，兔子则跑了rc1步"));
	ColPrintf(PrintfCol::方法, Lang("1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::方法, Lang("2.变形S1得到S2 5/9=rd/gd"));
	ColPrintf(PrintfCol::方法, Lang("3.列出式子时间关系S3 gc/rc1=(3/t)/(2/t) ==> gc/rc1=3/2"));
	ColPrintf(PrintfCol::方法, Lang("4.根据S3的数值带入加偏移路程关系S4 gd*gc1=rd*rc1+(9*gd)"));
	ColPrintf(PrintfCol::方法, Lang("5.把S4等式两边除rd*rc1变1展开式子得到S5 (gd/rd)*(gc1/rc1)=1+((9*gd)/rd*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("6.把S2和S3带入S5用值代入得到S6 (9/5)*(2/3)=1+(81/5*rc1) ==> 18/15-1=81/5*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("7.化简式子S6得到S7 18/15-1=81/(5*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("8.化简式子S7得到S8 (18-15)/15=3/15=81/(5*rc1) ==> 3/15=81/(5*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("9.S8两边同乘5得到S9 3/15*5=3/3=81/rc1"));
	ColPrintf(PrintfCol::方法, Lang("10.化简式子S9得到S10 3rc1=81*3=243"));
	ColPrintf(PrintfCol::方法, Lang("11.化简式子S10得到S11 rc1=243/3=81"));
	ColPrintf(PrintfCol::方法, Lang("12.根据S3和S11得到S12 gc1/81=2/3"));
	ColPrintf(PrintfCol::方法, Lang("13.化简式子S12得到S13交换 3gc1=2*81"));
	ColPrintf(PrintfCol::方法, Lang("14.解出gc gc1=54"));
}
void P11_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method One Proportional Hunting Dog Chasing Rabbit","P11例二方法一比例 猎狗追兔"},
		{"Title: After running 80 steps, a rabbit is chased by a dog. It takes the rabbit 9 steps for the\ndog to walk 5 steps, and the distance covered by the rabbit 7 steps is equal to the distance covered by the dog 3 steps. How many steps does\nthe hunting dog run when it catches up with the rabbit?",
		"题目：一只兔子跑80步后狗开始追，兔走9步的时间狗走5步，兔走7步的路程等于狗走3步的距离，猎狗追上兔子时跑多少步？"},
		{"1. Use the minimum common multiple to determine how many steps the dog and rabbit take before they meet",
		"1.用最小共倍数求出狗和兔走多少步后相遇（路程份）"},
		{"2. Use the minimum common multiple to determine how many steps the dog and rabbit will take before meeting (time period)",
		"2.用最小共倍数求出狗和兔走多少步后相遇（时间份）"},
		{"3. Calculate the difference between the total number of dogs and rabbits S1=the distance traveled by the dog N1- the distance traveled by the rabbit N2",
		"3.计算狗兔总份数之差S1 狗兔总份数之差S1=狗走的距离份数N1-兔走的距离份数N2"},
		{"4. Calculate the total number of parts S2 that the dog and rabbit started to be apart from each other. S2=dog steps N3 * rabbit walking time N2",
		"4.计算狗兔开始相距总份数S2 狗兔开始相距总份数S2=开始相距的狗步N3*兔走的时间份数N2"},//**
		{"5. Calculate the time T1 for the dog to catch up with the rabbit (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the rabbit is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the rabbit",
		"5.计算狗追上兔时间T1(这个时间单位不是固定的但进率相同) 狗追上兔时间T1=狗兔开始相距距离S2/狗兔距离之差S1"},
		{"6. Calculate the total distance traveled by the dog S4=the time it takes for the dog to catch up with the rabbit T1 * the number of steps taken by the dog at the same time N6",
		"6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上兔时间T1*相同时间狗走步数N6"},

		//变量表
		{"NumberOfDogWalkingDistancesN1","狗走的距离份数N1"},
		{"DistanceTraveledByRabbitsN2","兔走的距离份数N2"},
		{"RabbitStepsN3AtTheBeginningOfDistance","开始相距的兔步N3"},
		{"RabbitStepsN4ForTheSameDistance","相同路程兔走步数N4"},
		{"RabbitStepsN5AtTheSameTime","相同时间兔走步数N4"},
		{"DogStepsN6AtTheSameTime","相同时间狗走步数N5"},
		{"DifferenceInDistanceBetweenDogAndRabbitS1","狗兔距离之差S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","狗兔开始相距距离S2"},
		{"DogCatchingUpWithRabbitTimeT1","狗追上兔时间T1"},
		{"TheTotalDistanceOfRabbitRunningS3","兔跑的总距离S3"},
		{"TheTotalDistanceThatTheDogRanS4","狗跑的总距离S4"},
		{"MinimumMultiplierFactor","最小倍因数"},
		{"TheNumberOfStepsTakenByADogOnTheSameJourneyN5","相同路程狗走的步数N5"},
		{"NumberOfDogWalkingTimesN1","狗走的时间份数N1"},
		{"DistanceTraveledByRabbitsN2","兔走的时间份数N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(开始相距的兔步N3, 80);
	DefineLangVarInt(相同路程兔走步数N4, 7);
	DefineLangVarInt(相同路程狗走的步数, 3);
	DefineLangVarInt(相同时间兔走步数N5, 9);
	DefineLangVarInt(相同时间狗走步数N6, 5);
	ColPrintf(PrintfCol::标题, Lang("P11巩固方法一比例 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：猎狗9步远处有一只兔子，猎狗追之，兔走3步的时间狗走2步，兔走9步的路程等于狗走5步的距离，猎狗追上兔子时跑多少步？"));
	DefineLangVarInt(狗走的距离份数N1, 0);
	DefineLangVarInt(兔走的距离份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("1.用最小共倍数求出狗和兔走多少步后相遇（路程份）"));
	DefineLangVarInt(最小倍因数, MinCommonMultiple(相同路程兔走步数N4.Var, 相同路程狗走的步数.Var));
	狗走的距离份数N1 = (最小倍因数 / 相同路程狗走的步数) * 相同时间狗走步数N6;
	兔走的距离份数N2 = (最小倍因数 / 相同路程兔走步数N4) * 相同时间兔走步数N5;
	狗走的距离份数N1.PrintProcessLog(1);
	兔走的距离份数N2.PrintProcessLog(1);
	DefineLangVarInt(狗走的时间份数N1, 0);
	DefineLangVarInt(兔走的时间份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.用最小共倍数求出狗和兔走多少步后相遇（时间份）"));
	狗走的时间份数N1 = 最小倍因数 / 相同路程狗走的步数;
	兔走的时间份数N2 = 最小倍因数 / 相同路程兔走步数N4;
	狗走的时间份数N1.PrintProcessLog(2);
	兔走的时间份数N2.PrintProcessLog(2);
	DefineLangVar(int, 狗兔距离之差S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算狗兔总份数之差S1 狗兔总份数之差S1=狗走的距离份数N1-兔走的距离份数N2"));
	狗兔距离之差S1 = 狗走的距离份数N1 - 兔走的距离份数N2;
	狗兔距离之差S1.PrintProcessLog(3);
	DefineLangVar(int, 狗兔开始相距距离S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算狗兔开始相距总份数S2 狗兔开始相距总份数S2=开始相距的狗步N3*兔走的时间份数N2"));
	狗兔开始相距距离S2 = 开始相距的兔步N3 * 兔走的时间份数N2;
	狗兔开始相距距离S2.PrintProcessLog(4);
	DefineLangVar(int, 狗追上兔时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算狗追上兔时间T1(这个时间单位不是固定的但进率相同) 狗追上兔时间T1=狗兔开始相距距离S2/狗兔距离之差S1"));
	狗追上兔时间T1 = 狗兔开始相距距离S2 / 狗兔距离之差S1;
	狗追上兔时间T1.PrintProcessLog(5);
	DefineLangVar(int, 狗跑的总距离S4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上兔时间T1*相同时间狗走步数N6"));
	狗跑的总距离S4 = 狗追上兔时间T1 * 相同时间狗走步数N6;
	狗跑的总距离S4.PrintProcessLog(6);
}
void P11_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method Two Equation Hunting Dog Chasing Rabbit","P11例二方法二方程 猎狗追兔"},
		{"Title: There is a rabbit 9 steps away from the hunting dog. The hunting dog is chasing after it. It\ntakes the rabbit 3 steps for the dog to walk 2 steps. The distance covered by the rabbit 9\nsteps is equal to the distance covered by the dog 5 steps. How many steps does the hunting dog run when it catches\nup with the rabbit?"
		,"题目：一只兔子跑80步后狗开始追，兔走9步的时间狗走5步，兔走7步的路程等于狗走3步的距离，猎狗追上兔子时跑多少步？"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 80 rabbit steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗80个兔步远追上兔子需要gc1步，兔子则跑了rc1步"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 3/7=rd/gd",
		"2.变形S1得到S2 3/7=rd/gd"},
		{"3. List the time relationship of equation S3 gc/rc1=(9/t)/(5/t)==>gc/rc1=9/5",
		"3.列出式子时间关系S3 gc/rc1=(9/t)/(5/t) ==> gc/rc1=9/5"},
		{"4. Enter the offset distance relationship S4 gd * gc1=rd * rc1+(80 * rd) based on the value of S3",
		"4.根据S3的数值带入加偏移路程关系S4 gd*gc1=rd*rc1+(80*rd)"},
		{"5. Divide the two sides of equation S4 by rd * rc1 and expand the equation to obtain S5 (gd * gc1)/(rd * rc1)=1+((80 * rd)/rd * rc1)",
		"5.把S4等式两边除rd*rc1变1展开式子得到S5 (gd*gc1)/(rd*rc1)=1+((80*rd)/rd*rc1)"},
		{"6. Substitute S2 and S3 into S5 to obtain S6 (7/5) * (3/9)=1+(240/(3 * rc1))==>35/27-1=240/(3 * rc1)",
		"6.把S2和S3带入S5用值代入得到S6 (7/5)*(3/9)=1+(240/(3*rc1)) ==> 35/27-1=240/(3*rc1)"},
		{"7. Simplify equation S6 to obtain S7 35/27-1=240/(3 * rc1)",
		"7.化简式子S6得到S7 35/27-1=240/(3*rc1)"},
		{"8. Simplify equation S7 to obtain S8 (35-27)/27=8/27=240/(3 * rc1)==>8/37=240/(3 * rc1)",
		"8.化简式子S7得到S8 (35-27)/27=8/27=240/(3*rc1) ==> 8/37=240/(3*rc1)"},
		{"9.Multiplying both sides by 5 yields S9 8/27 * 3=8/9=240/rc1",
		"9.S8两边同乘5得到S9 8/27*3=8/9=240/rc1"},
		{"10. Simplify equation S9 to obtain S10 8rc1=240 * 9=2160",
		"10.化简式子S9得到S10 8rc1=240*9=2160"},
		{"11. Simplify equation S10 to obtain S11 rc1=2160/8=270",
		"11.化简式子S10得到S11 rc1=2160/8=270"},
		{"12. According to S3 and S11, obtain S12 gc1/270=5/9",
		"12.根据S3和S11得到S12 gc1/270=5/9"},
		{"13. Simplify equation S12 to obtain S13, exchange 9gc1=5 * 270",
		"13.化简式子S12得到S13交换 9gc1=5*270"},
		{"14. Solve for gc1=150",
		"14.解出gc gc1=150"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P11例二方法二方程 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：一只兔子跑80步后狗开始追，兔走9步的时间狗走5步，兔走7步的路程等于狗走3步的距离，猎狗追上兔子时跑多少步？"));
	ColPrintf(PrintfCol::方法, Lang("设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗80个兔步远追上兔子需要gc1步，兔子则跑了rc1步"));
	ColPrintf(PrintfCol::方法, Lang("1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::方法, Lang("2.变形S1得到S2 3/7=rd/gd"));
	ColPrintf(PrintfCol::方法, Lang("3.列出式子时间关系S3 gc/rc1=(9/t)/(5/t) ==> gc/rc1=9/5"));
	ColPrintf(PrintfCol::方法, Lang("4.根据S3的数值带入加偏移路程关系S4 gd*gc1=rd*rc1+(80*rd)"));
	ColPrintf(PrintfCol::方法, Lang("5.把S4等式两边除rd*rc1变1展开式子得到S5 (gd*gc1)/(rd*rc1)=1+((80*rd)/rd*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("6.把S2和S3带入S5用值代入得到S6 (7/5)*(3/9)=1+(240/(3*rc1)) ==> 35/27-1=240/(3*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("7.化简式子S6得到S7 35/27-1=240/(3*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("8.化简式子S7得到S8 (35-27)/27=8/27=240/(3*rc1) ==> 8/37=240/(3*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("9.S8两边同乘5得到S9 8/27*3=8/9=240/rc1"));
	ColPrintf(PrintfCol::方法, Lang("10.化简式子S9得到S10 8rc1=240*9=2160"));
	ColPrintf(PrintfCol::方法, Lang("11.化简式子S10得到S11 rc1=2160/8=270"));
	ColPrintf(PrintfCol::方法, Lang("12.根据S3和S11得到S12 gc1/270=5/9"));
	ColPrintf(PrintfCol::方法, Lang("13.化简式子S12得到S13交换 9gc1=5*270"));
	ColPrintf(PrintfCol::方法, Lang("14.解出gc gc1=150"));
}
void P11_4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Two Methods One Proportional Hunting olderBrother Chasing Rabbit","P11巩固二方法一比例 猎狗追兔"},
		{"Title: After running 80 steps, a youngerBrother is chased by a olderBrother. It takes the youngerBrother 9 steps for the olderBrother to\nwalk 5 steps, and the distance covered by the youngerBrother 7 steps is equal to the distance covered by the olderBrother 3 steps\nHow many steps does the hunting olderBrother run when it catches up with the youngerBrother?",
		"题目：弟弟跑10步后哥哥开始追，弟弟走4步的时间哥哥走3步，弟弟7步的路程等于哥哥走5步的距离，哥哥追上弟弟时跑多少步？"},
		{"1. Use the minimum common multiple to determine how many steps the olderBrother and youngerBrother take before they meet",
		"1.用最小共倍数求出哥哥和弟弟走多少步后相遇（路程份）"},
		{"2. Use the minimum common multiple to determine how many steps the olderBrother and youngerBrother will take before meeting (time period)",
		"2.用最小共倍数求出哥哥和弟弟走多少步后相遇（时间份）"},
		{"3. Calculate the difference between the total number of dogs and rabbits S1=the distance traveled by the olderBrother N1- the distance traveled by the youngerBrother N2",
		"3.计算哥哥弟弟总份数之差S1 哥哥弟弟总份数之差S1=哥哥走的距离份数N1-弟弟走的距离份数N2"},
		{"4. Calculate the total number of parts S2 that the olderBrother and youngerBrother started to be apart from each other. S2=olderBrother steps N3 * youngerBrother walking time N2",
		"4.计算哥哥弟弟开始相距总份数S2 哥哥弟弟开始相距总份数S2=开始相距的哥哥步N3*弟弟走的时间份数N2"},//**
		{"5. Calculate the time T1 for the olderBrother to catch up with the youngerBrother (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe olderBrother to catch up with the youngerBrother is equal to the difference S1 between the distance S2 and the distance S1 between the olderBrother and the youngerBrother",
		"5.计算哥哥追上弟弟时间T1(这个时间单位不是固定的但进率相同) 哥哥追上弟弟时间T1=哥哥弟弟开始相距距离S2/哥哥弟弟距离之差S1"},
		{"6. Calculate the total distance traveled by the olderBrother S4=the time it takes for the olderBrother to catch up with the youngerBrother T1 * the number of steps taken by the olderBrother at the same time N6",
		"6.计算哥哥跑的总距离S4 哥哥跑的总距离S4=哥哥追上弟弟时间T1*相同时间哥哥走步数N6"},

		//变量表
		{"DistanceTraveledByBrotherN1","哥哥走的距离份数N1"},
		{"DistanceTraveledByYoungerBrotherN2","弟弟走的距离份数N2"},
		{"StepN3OfTheYoungerBrotherWhoStartedToDistanceThemselves","开始相距的弟弟步N3"},
		{"MyYoungerBrotherWalkedN4StepsOnTheSameJourney","相同路程弟弟走步数N4"},
		{"MyYoungerBrotherWalkedN4StepsAtTheSameTime","相同时间弟弟走步数N4"},
		{"Brother'sStepCountAtTheSameTimeIsN5","相同时间哥哥走步数N5"},
		{"DistanceDifferenceBetweenOlderBrotherAndYoungerBrotherS1","哥哥弟弟距离之差S1"},
		{"BrotherAndBrotherStartToDistanceS2","哥哥弟弟开始相距距离S2"},
		{"BrotherCatchingUpWithBrotherTimeT1","哥哥追上弟弟时间T1"},
		{"TheTotalDistanceCoveredByMyYoungerBrotherIsS3","弟弟跑的总距离S3"},
		{"BrotherRanATotalDistanceOfS4","哥哥跑的总距离S4"},
		{"MinimumMultiplierFactor","最小倍因数"},
		{"BrotherTookN5StepsOnTheSameJourney","相同路程哥哥走的步数N5"},
		{"NumberOfTimesMyBrotherLeftN1","哥哥走的时间份数N1"},
		{"NumberOfTimesMyYoungerBrotherLeftN2","弟弟走的时间份数N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(开始相距的弟弟步N3, 10);
	DefineLangVarInt(相同路程弟弟走步数N4, 7);
	DefineLangVarInt(相同路程哥哥走的步数, 5);
	DefineLangVarInt(相同时间弟弟走步数N5, 4);
	DefineLangVarInt(相同时间哥哥走步数N6, 3);
	ColPrintf(PrintfCol::标题, Lang("P11巩固二方法一比例 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：弟弟跑10步后哥哥开始追，弟弟走4步的时间哥哥走3步，弟弟7步的路程等于哥哥走5步的距离，哥哥追上弟弟时跑多少步？"));
	DefineLangVarInt(哥哥走的距离份数N1, 0);
	DefineLangVarInt(弟弟走的距离份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("1.用最小共倍数求出哥哥和弟弟走多少步后相遇（路程份）"));
	DefineLangVarInt(最小倍因数, MinCommonMultiple(相同路程弟弟走步数N4.Var, 相同路程哥哥走的步数.Var));
	哥哥走的距离份数N1 = (最小倍因数 / 相同路程哥哥走的步数) * 相同时间哥哥走步数N6;
	弟弟走的距离份数N2 = (最小倍因数 / 相同路程弟弟走步数N4) * 相同时间弟弟走步数N5;
	哥哥走的距离份数N1.PrintProcessLog(1);
	弟弟走的距离份数N2.PrintProcessLog(1);
	DefineLangVarInt(哥哥走的时间份数N1, 0);
	DefineLangVarInt(弟弟走的时间份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.用最小共倍数求出哥哥和弟弟走多少步后相遇（时间份）"));
	哥哥走的时间份数N1 = 最小倍因数 / 相同路程哥哥走的步数;
	弟弟走的时间份数N2 = 最小倍因数 / 相同路程弟弟走步数N4;
	哥哥走的时间份数N1.PrintProcessLog(2);
	弟弟走的时间份数N2.PrintProcessLog(2);
	DefineLangVar(int, 哥哥弟弟距离之差S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算哥哥弟弟总份数之差S1 哥哥弟弟总份数之差S1=哥哥走的距离份数N1-弟弟走的距离份数N2"));
	哥哥弟弟距离之差S1 = 哥哥走的距离份数N1 - 弟弟走的距离份数N2;
	哥哥弟弟距离之差S1.PrintProcessLog(3);
	DefineLangVar(int, 哥哥弟弟开始相距距离S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算哥哥弟弟开始相距总份数S2 哥哥弟弟开始相距总份数S2=开始相距的哥哥步N3*弟弟走的时间份数N2"));
	哥哥弟弟开始相距距离S2 = 开始相距的弟弟步N3 * 弟弟走的时间份数N2;
	哥哥弟弟开始相距距离S2.PrintProcessLog(4);
	DefineLangVar(int, 哥哥追上弟弟时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算哥哥追上弟弟时间T1(这个时间单位不是固定的但进率相同) 哥哥追上弟弟时间T1=哥哥弟弟开始相距距离S2/哥哥弟弟距离之差S1"));
	哥哥追上弟弟时间T1 = 哥哥弟弟开始相距距离S2 / 哥哥弟弟距离之差S1;
	哥哥追上弟弟时间T1.PrintProcessLog(5);
	DefineLangVar(int, 哥哥跑的总距离S4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算哥哥跑的总距离S4 哥哥跑的总距离S4=哥哥追上弟弟时间T1*相同时间哥哥走步数N6"));
	哥哥跑的总距离S4 = 哥哥追上弟弟时间T1 * 相同时间哥哥走步数N6;
	哥哥跑的总距离S4.PrintProcessLog(6);
}
void P11_4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method Two Equation Hunting Dog Chasing Rabbit","P11巩固二方法二方程 猎狗追兔"},
		{"Title: There is a youngerBrother 9 steps away from the hunting oldBrother. The hunting oldBrother is chasing after it. It\ntakes the youngerBrother 3 steps for the oldBrother to walk 2 steps. The distance covered by the youngerBrother 9\nsteps is equal to the distance covered by the oldBrother 5 steps. How many steps does the hunting oldBrother run when it catches\nup with the youngerBrother?"
		,"题目：弟弟跑10步后哥哥开始追，弟弟走4步的时间哥哥走3步，弟弟7步的路程等于哥哥走5步的距离，哥哥追上弟弟时跑多少步？"},
		{"Let the distance of one step for the older brother be GD, the distance of one step for\Nthe younger brother be RD, and let the distance of ten steps for the older brother be GC1 to catch up with the younger brother,\Nwhile the distance of one step for the older brother is RC1",
		"设哥哥一步的距离为gd，弟弟一步的距离为rd，  设哥哥10个弟弟步远追上弟弟需要gc1步，哥哥则跑了rc1步"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 5/7=rd/gd",
		"2.变形S1得到S2 5/7=rd/gd"},
		{"3. List the time relationship between equation S3 gc/rc1=(3/t)/(4/t)==>gc/rc1=3/4",
		"3.列出式子时间关系S3 gc/rc1=(3/t)/(4/t) ==> gc/rc1=3/4"},
		{"4. Enter the offset distance relationship S4 gd * gc1=rd * rc1+(10 * rd) based on the value of S3",
		"4.根据S3的数值带入加偏移路程关系S4 gd*gc1=rd*rc1+(10*rd)"},
		{"5. Divide the two sides of equation S4 by rd * rc1 and expand the equation to obtain S5 (gd * gc1)/(rd * rc1)=1+((10 * rd)/rd * rc1)",
		"5.把S4等式两边除rd*rc1变1展开式子得到S5 (gd*gc1)/(rd*rc1)=1+((10*rd)/rd*rc1)"},
		{"6. Substitute S2 and S3 into S5 to obtain S6 (7 * 3)/(5 * 4)=1+(50/(5 * rc1))==>21/20-1=50/(5 * rc1)",
		"6.把S2和S3带入S5用值代入得到S6 (7*3)/(5*4)=1+(50/(5*rc1)) ==> 21/20-1=50/(5*rc1)"},
		{"7. Simplify equation S6 to obtain S7 21/10-1=50/(5 * rc1)",
		"7.化简式子S6得到S7 21/20-1=50/(5*rc1)"},
		{"8. Simplify equation S7 to obtain S8 (21-20)/20=1/20=50/(5 * rc1)==>1/20=50/(5 * rc1)",
		"8.化简式子S7得到S8 (21-20)/20=1/20=50/(5*rc1) ==> 1/20=50/(5*rc1)"},
		{"9.Multiplying both sides by 5 yields S9 1/20 * 5=1/4=50/rc1",
		"9.S8两边同乘5得到S9 1/20*5=1/4=50/rc1"},
		{"10. Simplify equation S9 to obtain S10 rc1=50 * 4=200",
		"10.化简式子S9得到S10 rc1=50*4=200"},
		{"11. Simplify equation S10 to obtain S11 rc1=200",
		"11.化简式子S10得到S11 rc1=200"},
		{"12. According to S3 and S11, obtain S12 gc1/200=3/4",
		"12.根据S3和S11得到S12 gc1/200=3/4"},
		{"13. Simplify equation S12 to obtain S13, exchange 4Gc1=3 * 200",
		"13.化简式子S12得到S13交换 4gc1=3*200"},
		{"14. Solve for gc1=150",
		"14.解出gc gc1=150"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P11巩固二方法二方程 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：弟弟跑10步后哥哥开始追，弟弟走4步的时间哥哥走3步，弟弟7步的路程等于哥哥走5步的距离，哥哥追上弟弟时跑多少步？"));
	ColPrintf(PrintfCol::方法, Lang("设哥哥一步的距离为gd，弟弟一步的距离为rd，  设哥哥10个弟弟步远追上弟弟需要gc1步，哥哥则跑了rc1步"));
	ColPrintf(PrintfCol::方法, Lang("1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::方法, Lang("2.变形S1得到S2 5/7=rd/gd"));
	ColPrintf(PrintfCol::方法, Lang("3.列出式子时间关系S3 gc/rc1=(3/t)/(4/t) ==> gc/rc1=3/4"));
	ColPrintf(PrintfCol::方法, Lang("4.根据S3的数值带入加偏移路程关系S4 gd*gc1=rd*rc1+(10*rd)"));
	ColPrintf(PrintfCol::方法, Lang("5.把S4等式两边除rd*rc1变1展开式子得到S5 (gd*gc1)/(rd*rc1)=1+((10*rd)/rd*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("6.把S2和S3带入S5用值代入得到S6 (7*3)/(5*4)=1+(50/(5*rc1)) ==> 21/20-1=50/(5*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("7.化简式子S6得到S7 21/20-1=50/(5*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("8.化简式子S7得到S8 (21-20)/20=1/20=50/(5*rc1) ==> 1/20=50/(5*rc1)"));
	ColPrintf(PrintfCol::方法, Lang("9.S8两边同乘5得到S9 1/20*5=1/4=50/rc1"));
	ColPrintf(PrintfCol::方法, Lang("10.化简式子S9得到S10 rc1=50*4=200"));
	ColPrintf(PrintfCol::方法, Lang("11.化简式子S10得到S11 rc1=200"));
	ColPrintf(PrintfCol::方法, Lang("12.根据S3和S11得到S12 gc1/200=3/4"));
	ColPrintf(PrintfCol::方法, Lang("13.化简式子S12得到S13交换 4gc1=3*200"));
	ColPrintf(PrintfCol::方法, Lang("14.解出gc gc1=150"));
}
void P11()
{
	P11_1_1();
	ColPrintf(PrintfCol::方法, "");
	P11_1_2();
	ColPrintf(PrintfCol::方法, "");
	P11_2_1();
	ColPrintf(PrintfCol::方法, "");
	P11_2_2();
	ColPrintf(PrintfCol::方法, "");
	P11_3_1();
	ColPrintf(PrintfCol::方法, "");
	P11_3_2();
	ColPrintf(PrintfCol::方法, "");
	P11_4_1();
	ColPrintf(PrintfCol::方法, "");
	P11_4_2();
	ColPrintf(PrintfCol::方法, "");
	/*P3_3();
	ColPrintf(PrintfCol::方法, "");*/
}
void P11_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P11();
	Lang.SetCurLanguage(LanguageLib::English);
	P11();
	ColPrintf(PrintfCol::方法, "");

}