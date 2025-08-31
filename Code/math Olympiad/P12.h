#pragma once
void P12_1_1()
{
	
		LanguageLib::LanguageTableT Language = {
			{"P12 Example One Method One Proportional Method Hunting Dog Chasing Rabbit","P12例一方法一比例法 猎狗追兔"},
			{"Title: After running 80 steps, a rabbit is chased by a dog. It takes the rabbit 9 steps for the\ndog to walk 5 steps, and the distance covered by the rabbit 7 steps is equal to the distance covered by the dog 3 steps. How many steps does\nthe hunting dog run when it catches up with the rabbit?",
			"题目：猎狗15米远处有一只兔子，猎狗追之，兔走5步的时间狗走3步，兔走7步的路程等于狗走4步的距离，猎狗追上兔子时跑多少米？"},
			{"1. Use the minimum common multiple to determine how many steps the dog and rabbit take before they meet",
			"1.用最小共倍数求出狗和兔走多少步后相遇（路程份）"},
			{"3. Calculate the difference between the total number of dogs and rabbits S1=the distance traveled by the dog N1- the distance traveled by the rabbit N2",
			"3.计算狗兔总份数之差S1 狗兔总份数之差S1=狗走的距离份数N1-兔走的距离份数N2"},
			{"4. Calculate the total number of parts S2 that the dog and rabbit started to be apart from each other. S2=dog steps N3 * rabbit walking time N2",
			"4.计算一份距离S2 一份距离S2=狗兔总份数之差S1*开始相距的米数N3"},//**
			{"5. Calculate the time T1 for the dog to catch up with the rabbit (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the rabbit is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the rabbit",
			"5.计算狗追上兔跑的距离S3 狗追上兔跑的距离S3=一份距离S2*狗走的距离份数N1"},

			//变量表
			{"NumberOfDogWalkingDistancesN1","狗走的距离份数N1"},
			{"DistanceTraveledByRabbitsN2","兔走的距离份数N2"},
			{"StartingDistanceInMetersN3","开始相距的米数N3"},
			{"RabbitStepsN4ForTheSameDistance","相同路程兔走步数N4"},
			{"ADistanceFromS2","一份距离S2"},
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
			{"DifferenceInTotalNumberOfDogsAndRabbitsS1","狗兔总份数之差S1"},
			{"TheDistanceThatTheDogCaughtUpWithTheRabbitRanS3","狗追上兔跑的距离S3"},
			{"DogStepsAtTheSameTimeN6","相同时间狗走步数N6"},
			{"RabbitStepsAtTheSameTimeN5","相同时间兔走步数N5"},
		};
		Lang.AddLanguageTable(
			Language
		);
		DefineLangVarInt(开始相距的米数N3, 15);
		DefineLangVarInt(相同路程兔走步数N4, 7);
		DefineLangVarInt(相同路程狗走的步数N5, 4);
		DefineLangVarInt(相同时间兔走步数N5, 5);
		DefineLangVarInt(相同时间狗走步数N6, 3);
		ColPrintf(PrintfCol::标题, Lang("P12例一方法一比例法 猎狗追兔"));
		ColPrintf(PrintfCol::标题, Lang("题目：猎狗15米远处有一只兔子，猎狗追之，兔走5步的时间狗走3步，兔走7步的路程等于狗走4步的距离，猎狗追上兔子时跑多少米？"));
		DefineLangVarInt(狗走的距离份数N1, 0);
		DefineLangVarInt(兔走的距离份数N2, 0);
		ColPrintf(PrintfCol::方法, Lang("1.用最小共倍数求出狗和兔走多少步后相遇（路程份）"));
		DefineLangVarInt(最小倍因数, MinCommonMultiple(相同路程兔走步数N4.Var, 相同路程狗走的步数N5.Var));
		狗走的距离份数N1 = (最小倍因数 / 相同路程狗走的步数N5) * 相同时间狗走步数N6;
		兔走的距离份数N2 = (最小倍因数 / 相同路程兔走步数N4) * 相同时间兔走步数N5;
		狗走的距离份数N1.PrintProcessLog(1);
		兔走的距离份数N2.PrintProcessLog(1);
		DefineLangVarInt(狗走的时间份数N1, 0);
		DefineLangVarInt(兔走的时间份数N2, 0);
		DefineLangVar(int, 狗兔总份数之差S1, 0);
		ColPrintf(PrintfCol::方法, Lang("3.计算狗兔总份数之差S1 狗兔总份数之差S1=狗走的距离份数N1-兔走的距离份数N2"));
		狗兔总份数之差S1 = 狗走的距离份数N1 - 兔走的距离份数N2;
		狗兔总份数之差S1.PrintProcessLog(3);
		DefineLangVar(int, 一份距离S2, 0);
		ColPrintf(PrintfCol::方法, Lang("4.计算一份距离S2 一份距离S2=狗兔总份数之差S1*开始相距的米数N3"));
		一份距离S2 = 狗兔总份数之差S1 * 开始相距的米数N3;
		一份距离S2.PrintProcessLog(4);
		DefineLangVar(int, 狗追上兔跑的距离S3, 0);
		ColPrintf(PrintfCol::方法, Lang("5.计算狗追上兔跑的距离S3 狗追上兔跑的距离S3=一份距离S2*狗走的距离份数N1"));
		狗追上兔跑的距离S3 = 一份距离S2 * 狗走的距离份数N1;
		狗追上兔跑的距离S3.PrintProcessLog(5);
}
void P12_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method Two Equation Hunting Dog Chasing Rabbit","P12例一方法二方程法 猎狗追兔"},
		{"Title: After running 80 steps, a rabbit is chased by a dog. It takes the rabbit 9 steps for the\ndog to walk 5 steps, and the distance covered by the rabbit 7 steps is equal to the distance covered by the dog 3 steps. How many steps does\nthe hunting dog run when it catches up with the rabbit?"
		,"题目：猎狗15米远处有一只兔子，猎狗追之，兔走5步的时间狗走3步，兔走7步的路程等于狗走4步的距离，猎狗追上兔子时跑多少米？"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 9 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗9步远追上兔子需要gc1步，兔子则跑了rc1步 狗跑了S米"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 4/9=rd/gd",//rd=5 gd=9
		"2.变形S1得到S2 4/9=rd/gd"},
		{"3. List the time relationship between equation S3 gc/rc1=(5/t)/(3/t)==>gc/rc1=5/3",
		"3.列出式子时间关系S3 gc/rc1=(5/t)/(3/t) ==> gc/rc1=5/3"},
		{"4. According to the list of dog routes, S4 gd * gc1=S",
		"4.根据列出狗行的路程S4 gd*gc1=S"},
		{"5. According to the list of rabbit routes, S5 gd * gc1=S-15",
		"5.根据列出兔行的路程S5 gd*gc1=S-15"},
		{"6. Compare S4 and S5 to obtain the difference S6 (gd * gc1)/(rd * rc1)=S/(S-15)",
		"6.把S4和S5相比得到差值S6 (gd*gc1)/(rd*rc1)=S/(S-15)"},
		{"7. Substitute S2 S3 into S6 to obtain S7 (3 * 7)/(4 * 5)=S/(S-15)",
		"7.将S2 S3带入S6得到S7 (3*7)/(4*5)=S/(S-15)"},
		{"8. Simplify equation S7 to obtain S8 21/20=S/(S-15)",
		"8.化简式子S7得到S8 21/20=S/(S-15)"},
		{"9. Simplify equation S8 to obtain S9 20S=21 (S-15)",
		"9.化简式子S8得到S9 20S=21(S-15)"},
		{"10. Simplify equation S9 to obtain S10 20S=21S-315",
		"10.化简式子S9得到S10 20S=21S-315"},
		{"11. Simplify equation S10 to obtain S11 rc1=315",
		"11.化简式子S10得到S11 rc1=315"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P12例一方法二方程法 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：猎狗15米远处有一只兔子，猎狗追之，兔走5步的时间狗走3步，兔走7步的路程等于狗走4步的距离，猎狗追上兔子时跑多少米？"));
	ColPrintf(PrintfCol::方法, Lang("设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗9步远追上兔子需要gc1步，兔子则跑了rc1步"));
	ColPrintf(PrintfCol::方法, Lang("1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::方法, Lang("2.变形S1得到S2 4/9=rd/gd"));
	ColPrintf(PrintfCol::方法, Lang("3.列出式子时间关系S3 gc/rc1=(5/t)/(3/t) ==> gc/rc1=5/3"));
	ColPrintf(PrintfCol::方法, Lang("4.根据列出狗行的路程S4 gd*gc1=S"));
	ColPrintf(PrintfCol::方法, Lang("5.根据列出兔行的路程S5 gd*gc1=S-15"));
	ColPrintf(PrintfCol::方法, Lang("6.把S4和S5相比得到差值S6 (gd*gc1)/(rd*rc1)=S/(S-15)"));
	ColPrintf(PrintfCol::方法, Lang("7.将S2 S3带入S6得到S7 (3*7)/(4*5)=S/(S-15)"));
	ColPrintf(PrintfCol::方法, Lang("8.化简式子S7得到S8 21/20=S/(S-15)"));
	ColPrintf(PrintfCol::方法, Lang("9.化简式子S8得到S9 20S=21(S-15)"));
	ColPrintf(PrintfCol::方法, Lang("10.化简式子S9得到S10 20S=21S-315"));
	ColPrintf(PrintfCol::方法, Lang("11.化简式子S10得到S11 rc1=315"));
}
void P12_2_1()//**
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method One Proportional Hunting Dog Chasing Rabbit","P12例二方法一比例法 猎狗追狼"},
		{"Title: There is a wolf 9 steps away from the hunting dog. The hunting dog is chasing after it. It takes the wolf\n3 steps for the dog to walk 2 steps. The distance covered by the wolf 9 steps is equal to the\ndistance covered by the dog 5 steps. How many steps does the hunting dog run when it catches up with the wolf?",
		"题目：狼和狗相距568个狼步，相向而行，狼走9步的时间狗走7步，狼走5步的路程等于狗走4步的距离，相遇时狗跑了几步，狼跑了几步。"},
		{"1. Use the minimum common multiple to determine how many steps the dog and wolf take before they meet",
		"1.用最小共倍数求出狗和狼走多少步后相遇（路程份）"},
		{"2. Use the minimum common multiple to determine how many steps the dog and wolf will take before meeting (time period)",
		"2.用最小共倍数求出狗和狼走多少步后相遇（时间份）"},
		{"3. Calculate the difference between dog and wolf distances S1. The difference between dog and wolf distances S1=the number of distances traveled by the dog N1- the number of distances traveled by the wolf N2",
		"3.计算狗狼距离之和S1 狗狼距离之和S1=狗走的距离份数N1+狼走的距离份数N2"},
		{"4. Calculate the starting distance S2 between the dog and the wolf. The starting distance S2 is equal to the number of dog steps N3 multiplied by the number of dog walks N1",
		"4.计算狗狼开始相距距离S2 狗狼开始相距距离S2=开始相距的狼步N3*狼走的时间份数N2"},//**
		{"5. Calculate the time T1 for the dog to catch up with the wolf (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the wolf is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the wolf",
		"5.计算狗追上狼时间T1(这个时间单位不是固定的但进率相同) 狗追上狼时间T1=狗狼开始相距距离S2/狗狼距离之和S1"},
		{"6. Calculate the total distance traveled by the dog S4=the time it takes for the dog to catch up with the wolf T1 * the number of steps taken by the dog at the same time N6",
		"6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上狼时间T1*相同时间狗走步数N6"},

		//变量表
		{"NumberOfDogWalkingDistancesN1","狗走的距离份数N1"},
		{"DistanceTraveledByRabbitsN2","狼走的距离份数N2"},
		{"HuntingDogFourStepsRabbitStepCountN4","猎狗四步狼走步数N4"},
		{"RabbitStepsN5AtTheSameTime","相同时间狼走步数N5"},
		{"DogStepsN6AtTheSameTime","相同时间狗走步数N6"},
		{"SumOfDogAndRabbitDistancesS1","狗狼距离之和S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","狗狼开始相距距离S2"},
		{"DogCatchingUpWithRabbitTimeT1","狗追上狼时间T1"},
		{"TheTotalDistanceOfRabbitRunningS3","狼跑的总距离S3"},
		{"TheTotalDistanceThatTheDogRanS4","狗跑的总距离S4"},
		{"MinimumMultiplierFactor","最小倍因数"},
		{"TheNumberOfStepsTakenByADogOnTheSameJourney","相同路程狗走的步数"},
		{"NumberOfDogWalkingTimesN1","狗走的时间份数N1"},
		{"DistanceTraveledByRabbitsN2","狼走的时间份数N2"},
		{"WolfStepsN3AtTheBeginningOfDistance","开始相距的狼步N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(开始相距的狼步N3, 568);
	DefineLangVarInt(猎狗四步狼走步数N4, 5);
	DefineLangVarInt(相同路程狗走的步数, 4);
	DefineLangVarInt(相同时间狼走步数N5, 9);
	DefineLangVarInt(相同时间狗走步数N6, 7);
	ColPrintf(PrintfCol::标题, Lang("P12例二方法一比例法 猎狗追狼"));
	ColPrintf(PrintfCol::标题, Lang("题目：狼和狗相距568个狼步，相向而行，狼走9步的时间狗走7步，狼走5步的路程等于狗走4步的距离，相遇时狗跑了几步，狼跑了几步。"));
	DefineLangVarInt(狗走的距离份数N1, 0);
	DefineLangVarInt(狼走的距离份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("1.用最小共倍数求出狗和狼走多少步后相遇（路程份）"));
	DefineLangVarInt(最小倍因数, MinCommonMultiple(猎狗四步狼走步数N4.Var, 相同路程狗走的步数.Var));
	狗走的距离份数N1 = (最小倍因数 / 相同路程狗走的步数) * 相同时间狗走步数N6;
	狼走的距离份数N2 = (最小倍因数 / 猎狗四步狼走步数N4) * 相同时间狼走步数N5;
	狗走的距离份数N1.PrintProcessLog(1);
	狼走的距离份数N2.PrintProcessLog(1);
	DefineLangVarInt(狗走的时间份数N1, 0);
	DefineLangVarInt(狼走的时间份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.用最小共倍数求出狗和狼走多少步后相遇（时间份）"));
	狗走的时间份数N1 = 最小倍因数 / 相同路程狗走的步数;
	狼走的时间份数N2 = 最小倍因数 / 猎狗四步狼走步数N4;
	狗走的时间份数N1.PrintProcessLog(2);
	狼走的时间份数N2.PrintProcessLog(2);
	DefineLangVar(int, 狗狼距离之和S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算狗狼距离之和S1 狗狼距离之和S1=狗走的距离份数N1+狼走的距离份数N2"));
	狗狼距离之和S1 = 狗走的距离份数N1 + 狼走的距离份数N2;
	狗狼距离之和S1.PrintProcessLog(3);
	DefineLangVar(int, 狗狼开始相距距离S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算狗狼开始相距距离S2 狗狼开始相距距离S2=开始相距的狼步N3*狼走的时间份数N2"));
	狗狼开始相距距离S2 = 开始相距的狼步N3 * 狼走的时间份数N2;
	狗狼开始相距距离S2.PrintProcessLog(4);
	DefineLangVar(int, 狗追上狼时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算狗追上狼时间T1(这个时间单位不是固定的但进率相同) 狗追上狼时间T1=狗狼开始相距距离S2/狗狼距离之和S1"));
	狗追上狼时间T1 = 狗狼开始相距距离S2 / 狗狼距离之和S1;
	狗追上狼时间T1.PrintProcessLog(5);
	DefineLangVar(int, 狗跑的总距离S4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上狼时间T1*相同时间狗走步数N6"));
	狗跑的总距离S4 = 狗追上狼时间T1 * 相同时间狗走步数N6;
	狗跑的总距离S4.PrintProcessLog(6);
}
void P12_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P12 Example Two Method Two Equation Hunting Dog Chasing Rabbit","P12例二方法二方程法 猎狗追兔"},
		{"Title: Wolf and dog are 568 wolf steps apart, walking towards each other. It takes a wolf 9 steps for a dog to walk 7 steps, and a wolf 5 steps equals a dog 4 steps. When they meet, how many steps did the dog run and how many steps did the wolf run."
		,"题目：狼和狗相距568个狼步，相向而行，狼走9步的时间狗走7步，狼走5步的路程等于狗走4步的距离，相遇时狗跑了几步，狼跑了几步。"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 9 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗9步远追上兔子需要gc1步，兔子则跑了rc1步"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 and input it into the distance value",//rd=5 gd=9
		"2.变形S1得到S2并带入路程数值 5rd=4gd==>gd=(5/4)rd==>gd/rd=(5/4)"},
		{"3. Transform S1 to obtain S3 and bring it into the distance value rc1/gc1=(9/t)/(7/t)==>rc1/gc1=9/7==>gc1=(9/7) rc1",
		"3.变形S1得到S3并带入路程数值 rc1/gc1=(9/t)/(7/t)==>rc1/gc1=9/7==>gc1=(9/7)rc1"},
		{"4. List the distance relationship S4 (gc1 * gd)+(rc1 * rd)=568rd",
		"4.列出路程关系S4 (gc1*gd)+(rc1*rd)=568rd"},
		{"5. Substitute S2 into S4 to obtain S5 (gc1 * (5/4) rd)+(rc1 * rd)=568rd",
		"5.根据S2带入S4得到S5 (gc1*(5/4)rd)+(rc1*rd)=568rd"},
		{"6. Simplify S5 to obtain S6 gc1 * (5/4)+(9/7) gc1=568",
		"6.化简S5得到S6 gc1*(5/4)+(9/7)gc1=568"},
		{"7. Separate S6 to obtain S7 (35/28+36/28) gc1=568",
		"7.把S6通分得到S7 (35/28+36/28)gc1=568"},
		{"8. Simplify equation S7 to obtain S8 71/28gc1=568",
		"8.化简式子S7得到S8 71/28gc1=568"},
		{"9. Simplify equation S8 to obtain S9 gc1=568 * (71/28)",
		"9.化简式子S8得到S9 gc1=568*(71/28)"},
		{"10. Simplify equation S9 to obtain S10 gc1=8 * 28=224",
		"10.化简式子S9得到S10 gc1=8*28=224"},
		{"11. Substitute S10 into S3 to obtain S11 rc1/224=9/7==>rc1=9 * 32=288",
		"11.将S10带入S3得到S11 rc1/224=9/7==>rc1=9*32=288"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P12例二方法二方程法 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：狼和狗相距568个狼步，相向而行，狼走9步的时间狗走7步，狼走5步的路程等于狗走4步的距离，相遇时狗跑了几步，狼跑了几步。"));
	ColPrintf(PrintfCol::方法, Lang("设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗9步远追上兔子需要gc1步，兔子则跑了rc1步"));
	ColPrintf(PrintfCol::方法, Lang("1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::方法, Lang("2.变形S1得到S2并带入路程数值 5rd=4gd==>gd=(5/4)rd==>gd/rd=(5/4)"));
	ColPrintf(PrintfCol::方法, Lang("3.变形S1得到S3并带入路程数值 rc1/gc1=(9/t)/(7/t)==>rc1/gc1=9/7==>gc1=(9/7)rc1"));
	ColPrintf(PrintfCol::方法, Lang("4.列出路程关系S4 (gc1*gd)+(rc1*rd)=568rd"));
	ColPrintf(PrintfCol::方法, Lang("5.根据S2带入S4得到S5 (gc1*(5/4)rd)+(rc1*rd)=568rd"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S5得到S6 gc1*(5/4)+(9/7)gc1=568"));
	ColPrintf(PrintfCol::方法, Lang("7.把S6通分得到S7 (35/28+36/28)gc1=568"));
	ColPrintf(PrintfCol::方法, Lang("8.化简式子S7得到S8 71/28gc1=568"));
	ColPrintf(PrintfCol::方法, Lang("9.化简式子S8得到S9 gc1=568*(71/28)"));
	ColPrintf(PrintfCol::方法, Lang("10.化简式子S9得到S10 gc1=8*28=224"));
	ColPrintf(PrintfCol::方法, Lang("11.将S10带入S3得到S11 rc1/224=9/7==>rc1=9*32=288"));
}
void P12_3_1()//**
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method One Proportional Hunting Dog Chasing Rabbit","P12巩固方法一比例法 猎狗追狼"},
		{"Title: There is a wolf 9 steps away from the hunting dog. The hunting dog is chasing after it. It takes the wolf\n3 steps for the dog to walk 2 steps. The distance covered by the wolf 9 steps is equal to the\ndistance covered by the dog 5 steps. How many steps does the hunting dog run when it catches up with the wolf?",
		"题目：狼和狗相距260个狼步，相向而行，狼走9步的时间狗走5步，狼走5步的路程等于狗走3步的距离，相遇时狗跑了几步，狼跑了几步。"},
		{"1. Use the minimum common multiple to determine how many steps the dog and wolf take before they meet",
		"1.用最小共倍数求出狗和狼走多少步后相遇（路程份）"},
		{"2. Use the minimum common multiple to determine how many steps the dog and wolf will take before meeting (time period)",
		"2.用最小共倍数求出狗和狼走多少步后相遇（时间份）"},
		{"3. Calculate the difference between dog and wolf distances S1. The difference between dog and wolf distances S1=the number of distances traveled by the dog N1- the number of distances traveled by the wolf N2",
		"3.计算狗狼距离之和S1 狗狼距离之和S1=狗走的距离份数N1+狼走的距离份数N2"},
		{"4. Calculate the starting distance S2 between the dog and the wolf. The starting distance S2 is equal to the number of dog steps N3 multiplied by the number of dog walks N1",
		"4.计算狗狼开始相距距离S2 狗狼开始相距距离S2=开始相距的狗步N3*狼走的时间份数N2"},//**
		{"5. Calculate the time T1 for the dog to catch up with the wolf (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the wolf is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the wolf",
		"5.计算狗追上狼时间T1(这个时间单位不是固定的但进率相同) 狗追上狼时间T1=狗狼开始相距距离S2/狗狼距离之和S1"},
		{"6. Calculate the total distance traveled by the dog S4=the time it takes for the dog to catch up with the wolf T1 * the number of steps taken by the dog at the same time N6",
		"6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上狼时间T1*相同时间狗走步数N6"},

		//变量表
		{"NumberOfDogWalkingDistancesN1","狗走的距离份数N1"},
		{"DistanceTraveledByRabbitsN2","狼走的距离份数N2"},
		{"StartingWithDogStepsN3","开始相距的狗步N3"},
		{"HuntingDogFourStepsRabbitStepCountN4","猎狗四步狼走步数N4"},
		{"RabbitStepsN5AtTheSameTime","相同时间狼走步数N5"},
		{"DogStepsN6AtTheSameTime","相同时间狗走步数N6"},
		{"SumOfDogAndRabbitDistancesS1","狗狼距离之和S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","狗狼开始相距距离S2"},
		{"DogCatchingUpWithRabbitTimeT1","狗追上狼时间T1"},
		{"TheTotalDistanceOfRabbitRunningS3","狼跑的总距离S3"},
		{"TheTotalDistanceThatTheDogRanS4","狗跑的总距离S4"},
		{"MinimumMultiplierFactor","最小倍因数"},
		{"TheNumberOfStepsTakenByADogOnTheSameJourney","相同路程狗走的步数"},
		{"NumberOfDogWalkingTimesN1","狗走的时间份数N1"},
		{"DistanceTraveledByRabbitsN2","狼走的时间份数N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(开始相距的狼步N3, 260);
	DefineLangVarInt(猎狗四步狼走步数N4, 5);
	DefineLangVarInt(相同路程狗走的步数, 3);
	DefineLangVarInt(相同时间狼走步数N5, 9);
	DefineLangVarInt(相同时间狗走步数N6, 5);
	ColPrintf(PrintfCol::标题, Lang("P12巩固方法一比例法 猎狗追狼"));
	ColPrintf(PrintfCol::标题, Lang("题目：狼和狗相距260个狼步，相向而行，狼走9步的时间狗走5步，狼走5步的路程等于狗走3步的距离，相遇时狗跑了几步，狼跑了几步。"));
	DefineLangVarInt(狗走的距离份数N1, 0);
	DefineLangVarInt(狼走的距离份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("1.用最小共倍数求出狗和狼走多少步后相遇（路程份）"));
	DefineLangVarInt(最小倍因数, MinCommonMultiple(猎狗四步狼走步数N4.Var, 相同路程狗走的步数.Var));
	狗走的距离份数N1 = (最小倍因数 / 相同路程狗走的步数) * 相同时间狗走步数N6;
	狼走的距离份数N2 = (最小倍因数 / 猎狗四步狼走步数N4) * 相同时间狼走步数N5;
	狗走的距离份数N1.PrintProcessLog(1);
	狼走的距离份数N2.PrintProcessLog(1);
	DefineLangVarInt(狗走的时间份数N1, 0);
	DefineLangVarInt(狼走的时间份数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.用最小共倍数求出狗和狼走多少步后相遇（时间份）"));
	狗走的时间份数N1 = 最小倍因数 / 相同路程狗走的步数;
	狼走的时间份数N2 = 最小倍因数 / 猎狗四步狼走步数N4;
	狗走的时间份数N1.PrintProcessLog(2);
	狼走的时间份数N2.PrintProcessLog(2);
	DefineLangVar(int, 狗狼距离之和S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算狗狼距离之和S1 狗狼距离之和S1=狗走的距离份数N1+狼走的距离份数N2"));
	狗狼距离之和S1 = 狗走的距离份数N1 + 狼走的距离份数N2;
	狗狼距离之和S1.PrintProcessLog(3);
	DefineLangVar(int, 狗狼开始相距距离S2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算狗狼开始相距距离S2 狗狼开始相距距离S2=开始相距的狼步N3*狼走的时间份数N2"));
	狗狼开始相距距离S2 = 开始相距的狼步N3 * 狼走的时间份数N2;
	狗狼开始相距距离S2.PrintProcessLog(4);
	DefineLangVar(int, 狗追上狼时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算狗追上狼时间T1(这个时间单位不是固定的但进率相同) 狗追上狼时间T1=狗狼开始相距距离S2/狗狼距离之和S1"));
	狗追上狼时间T1 = 狗狼开始相距距离S2 / 狗狼距离之和S1;
	狗追上狼时间T1.PrintProcessLog(5);
	DefineLangVar(int, 狗跑的总距离S4, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算狗跑的总距离S4 狗跑的总距离S4=狗追上狼时间T1*相同时间狗走步数N6"));
	狗跑的总距离S4 = 狗追上狼时间T1 * 相同时间狗走步数N6;
	狗跑的总距离S4.PrintProcessLog(6);
}
void P12_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P12 Example Three Method Two Equation Hunting Dog Chasing Rabbit","P12例三方法二方程法 猎狗追兔"},
		{"Title: Wolves and dogs are 260 wolf steps apart, walking towards each other. It takes a wolf 9 steps for a dog to walk 5 steps, and the distance covered by a wolf 5 steps is equal to the distance covered by a dog 3 steps. When they meet, how many steps did the dog run and how many steps did the wolf run."
		,"题目：狼和狗相距260个狼步，相向而行，狼走9步的时间狗走5步，狼走5步的路程等于狗走3步的距离，相遇时狗跑了几步，狼跑了几步。"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 9 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗9步远追上兔子需要gc1步，兔子则跑了rc1步"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 and input it into the distance value 5rd=3gd==>gd=(5/3)rd==>gd/rd=(5/3)",//rd=5 gd=9
		"2.变形S1得到S2并带入路程数值 5rd=3gd==>gd=(5/3)rd==>gd/rd=(5/3)"},
		{"3. Transform S1 to obtain S3 and bring it into the distance value rc1/gc1=(9/t)/(5/t)==>rc1/gc1=9/5==>gc1=(9/5) rc1",
		"3.变形S1得到S3并带入路程数值 rc1/gc1=(9/t)/(5/t)==>rc1/gc1=9/5==>gc1=(9/5)rc1"},
		{"4. List the distance relationship S4 (gc1 * gd)+(rc1 * rd)=260rd",
		"4.列出路程关系S4 (gc1*gd)+(rc1*rd)=260rd"},
		{"5. Substitute S2 into S4 to obtain S5 (gc1 * (5/3) rd)+(rc1 * rd)=260rd",
		"5.根据S2带入S4得到S5 (gc1*(5/3)rd)+(rc1*rd)=260rd"},
		{"6. Simplify S5 to obtain S6 gc1 * (5/3)+(9/5) gc1=260",
		"6.化简S5得到S6 gc1*(5/3)+(9/5)gc1=260"},
		{"7. Separate S6 to obtain S7 (25/15+37/15) gc1=260",
		"7.把S6通分得到S7 (25/15+37/15)gc1=260"},
		{"8. Simplify equation S7 to obtain S8 52/15gc1=260",
		"8.化简式子S7得到S8 52/15gc1=260"},
		{"9. Simplify equation S8 to obtain S9 gc1=260 * (52/15)",
		"9.化简式子S8得到S9 gc1=260*(52/15)"},
		{"10. Simplify equation S9 to obtain S10 gc1=5 * 15=75",
		"10.化简式子S9得到S10 gc1=5*15=75"},
		{"11. Substitute S10 into S3 to obtain S11 rc1/75=9/5==>rc1=9 * 15=135",
		"11.将S10带入S3得到S11 rc1/75=9/5==>rc1=9*15=135"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P12例三方法二方程法 猎狗追兔"));
	ColPrintf(PrintfCol::标题, Lang("题目：狼和狗相距260个狼步，相向而行，狼走9步的时间狗走5步，狼走5步的路程等于狗走3步的距离，相遇时狗跑了几步，狼跑了几步。"));
	ColPrintf(PrintfCol::方法, Lang("设猎狗一步的距离为gd，兔一步的距离为rd，  设猎狗9步远追上兔子需要gc1步，兔子则跑了rc1步"));
	ColPrintf(PrintfCol::方法, Lang("1.根据路程相同得出列出式子路程关系S1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::方法, Lang("2.变形S1得到S2并带入路程数值 5rd=3gd==>gd=(5/3)rd==>gd/rd=(5/3)"));
	ColPrintf(PrintfCol::方法, Lang("3.变形S1得到S3并带入路程数值 rc1/gc1=(9/t)/(5/t)==>rc1/gc1=9/5==>gc1=(9/5)rc1"));
	ColPrintf(PrintfCol::方法, Lang("4.列出路程关系S4 (gc1*gd)+(rc1*rd)=260rd"));
	ColPrintf(PrintfCol::方法, Lang("5.根据S2带入S4得到S5 (gc1*(5/3)rd)+(rc1*rd)=260rd"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S5得到S6 gc1*(5/3)+(9/5)gc1=260"));
	ColPrintf(PrintfCol::方法, Lang("7.把S6通分得到S7 (25/15+37/15)gc1=260"));
	ColPrintf(PrintfCol::方法, Lang("8.化简式子S7得到S8 52/15gc1=260"));
	ColPrintf(PrintfCol::方法, Lang("9.化简式子S8得到S9 gc1=260*(52/15)"));
	ColPrintf(PrintfCol::方法, Lang("10.化简式子S9得到S10 gc1=5*15=75"));
	ColPrintf(PrintfCol::方法, Lang("11.将S10带入S3得到S11 rc1/75=9/5==>rc1=9*15=135"));
}
void P12()
{
	P12_1_1();
	ColPrintf(PrintfCol::方法, "");
	P12_1_2();
	ColPrintf(PrintfCol::方法, "");
	P12_2_1();
	ColPrintf(PrintfCol::方法, "");
	P12_2_2();
	ColPrintf(PrintfCol::方法, "");
	P12_3_1();
	ColPrintf(PrintfCol::方法, "");
	P12_3_2();
	ColPrintf(PrintfCol::方法, "");
}
void P12_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P12();
	Lang.SetCurLanguage(LanguageLib::English);
	P12();
	ColPrintf(PrintfCol::方法, "");

}