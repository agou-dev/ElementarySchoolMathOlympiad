#pragma once
void P12_1_1()
{
	
		LanguageLib::LanguageTableT Language = {
			{"P12 Example One Method One Proportional Method Hunting Dog Chasing Rabbit","P12��һ����һ������ �Թ�׷��"},
			{"Title: After running 80 steps, a rabbit is chased by a dog. It takes the rabbit 9 steps for the\ndog to walk 5 steps, and the distance covered by the rabbit 7 steps is equal to the distance covered by the dog 3 steps. How many steps does\nthe hunting dog run when it catches up with the rabbit?",
			"��Ŀ���Թ�15��Զ����һֻ���ӣ��Թ�׷֮������5����ʱ�乷��3��������7����·�̵��ڹ���4���ľ��룬�Թ�׷������ʱ�ܶ����ף�"},
			{"1. Use the minimum common multiple to determine how many steps the dog and rabbit take before they meet",
			"1.����С����������������߶��ٲ���������·�̷ݣ�"},
			{"3. Calculate the difference between the total number of dogs and rabbits S1=the distance traveled by the dog N1- the distance traveled by the rabbit N2",
			"3.���㹷���ܷ���֮��S1 �����ܷ���֮��S1=���ߵľ������N1-���ߵľ������N2"},
			{"4. Calculate the total number of parts S2 that the dog and rabbit started to be apart from each other. S2=dog steps N3 * rabbit walking time N2",
			"4.����һ�ݾ���S2 һ�ݾ���S2=�����ܷ���֮��S1*��ʼ��������N3"},//**
			{"5. Calculate the time T1 for the dog to catch up with the rabbit (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the rabbit is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the rabbit",
			"5.���㹷׷�����ܵľ���S3 ��׷�����ܵľ���S3=һ�ݾ���S2*���ߵľ������N1"},

			//������
			{"NumberOfDogWalkingDistancesN1","���ߵľ������N1"},
			{"DistanceTraveledByRabbitsN2","���ߵľ������N2"},
			{"StartingDistanceInMetersN3","��ʼ��������N3"},
			{"RabbitStepsN4ForTheSameDistance","��ͬ·�����߲���N4"},
			{"ADistanceFromS2","һ�ݾ���S2"},
			{"DogStepsN6AtTheSameTime","��ͬʱ�乷�߲���N5"},
			{"DifferenceInDistanceBetweenDogAndRabbitS1","���þ���֮��S1"},
			{"DogsAndRabbitsStartToDistanceFromEachOtherS2","���ÿ�ʼ������S2"},
			{"DogCatchingUpWithRabbitTimeT1","��׷����ʱ��T1"},
			{"TheTotalDistanceOfRabbitRunningS3","���ܵ��ܾ���S3"},
			{"TheTotalDistanceThatTheDogRanS4","���ܵ��ܾ���S4"},
			{"MinimumMultiplierFactor","��С������"},
			{"TheNumberOfStepsTakenByADogOnTheSameJourneyN5","��ͬ·�̹��ߵĲ���N5"},
			{"NumberOfDogWalkingTimesN1","���ߵ�ʱ�����N1"},
			{"DistanceTraveledByRabbitsN2","���ߵ�ʱ�����N2"},
			{"DifferenceInTotalNumberOfDogsAndRabbitsS1","�����ܷ���֮��S1"},
			{"TheDistanceThatTheDogCaughtUpWithTheRabbitRanS3","��׷�����ܵľ���S3"},
			{"DogStepsAtTheSameTimeN6","��ͬʱ�乷�߲���N6"},
			{"RabbitStepsAtTheSameTimeN5","��ͬʱ�����߲���N5"},
		};
		Lang.AddLanguageTable(
			Language
		);
		DefineLangVarInt(��ʼ��������N3, 15);
		DefineLangVarInt(��ͬ·�����߲���N4, 7);
		DefineLangVarInt(��ͬ·�̹��ߵĲ���N5, 4);
		DefineLangVarInt(��ͬʱ�����߲���N5, 5);
		DefineLangVarInt(��ͬʱ�乷�߲���N6, 3);
		ColPrintf(PrintfCol::����, Lang("P12��һ����һ������ �Թ�׷��"));
		ColPrintf(PrintfCol::����, Lang("��Ŀ���Թ�15��Զ����һֻ���ӣ��Թ�׷֮������5����ʱ�乷��3��������7����·�̵��ڹ���4���ľ��룬�Թ�׷������ʱ�ܶ����ף�"));
		DefineLangVarInt(���ߵľ������N1, 0);
		DefineLangVarInt(���ߵľ������N2, 0);
		ColPrintf(PrintfCol::����, Lang("1.����С����������������߶��ٲ���������·�̷ݣ�"));
		DefineLangVarInt(��С������, MinCommonMultiple(��ͬ·�����߲���N4.Var, ��ͬ·�̹��ߵĲ���N5.Var));
		���ߵľ������N1 = (��С������ / ��ͬ·�̹��ߵĲ���N5) * ��ͬʱ�乷�߲���N6;
		���ߵľ������N2 = (��С������ / ��ͬ·�����߲���N4) * ��ͬʱ�����߲���N5;
		���ߵľ������N1.PrintProcessLog(1);
		���ߵľ������N2.PrintProcessLog(1);
		DefineLangVarInt(���ߵ�ʱ�����N1, 0);
		DefineLangVarInt(���ߵ�ʱ�����N2, 0);
		DefineLangVar(int, �����ܷ���֮��S1, 0);
		ColPrintf(PrintfCol::����, Lang("3.���㹷���ܷ���֮��S1 �����ܷ���֮��S1=���ߵľ������N1-���ߵľ������N2"));
		�����ܷ���֮��S1 = ���ߵľ������N1 - ���ߵľ������N2;
		�����ܷ���֮��S1.PrintProcessLog(3);
		DefineLangVar(int, һ�ݾ���S2, 0);
		ColPrintf(PrintfCol::����, Lang("4.����һ�ݾ���S2 һ�ݾ���S2=�����ܷ���֮��S1*��ʼ��������N3"));
		һ�ݾ���S2 = �����ܷ���֮��S1 * ��ʼ��������N3;
		һ�ݾ���S2.PrintProcessLog(4);
		DefineLangVar(int, ��׷�����ܵľ���S3, 0);
		ColPrintf(PrintfCol::����, Lang("5.���㹷׷�����ܵľ���S3 ��׷�����ܵľ���S3=һ�ݾ���S2*���ߵľ������N1"));
		��׷�����ܵľ���S3 = һ�ݾ���S2 * ���ߵľ������N1;
		��׷�����ܵľ���S3.PrintProcessLog(5);
}
void P12_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method Two Equation Hunting Dog Chasing Rabbit","P12��һ���������̷� �Թ�׷��"},
		{"Title: After running 80 steps, a rabbit is chased by a dog. It takes the rabbit 9 steps for the\ndog to walk 5 steps, and the distance covered by the rabbit 7 steps is equal to the distance covered by the dog 3 steps. How many steps does\nthe hunting dog run when it catches up with the rabbit?"
		,"��Ŀ���Թ�15��Զ����һֻ���ӣ��Թ�׷֮������5����ʱ�乷��3��������7����·�̵��ڹ���4���ľ��룬�Թ�׷������ʱ�ܶ����ף�"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 9 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�9��Զ׷��������Ҫgc1��������������rc1�� ������S��"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 4/9=rd/gd",//rd=5 gd=9
		"2.����S1�õ�S2 4/9=rd/gd"},
		{"3. List the time relationship between equation S3 gc/rc1=(5/t)/(3/t)==>gc/rc1=5/3",
		"3.�г�ʽ��ʱ���ϵS3 gc/rc1=(5/t)/(3/t) ==> gc/rc1=5/3"},
		{"4. According to the list of dog routes, S4 gd * gc1=S",
		"4.�����г����е�·��S4 gd*gc1=S"},
		{"5. According to the list of rabbit routes, S5 gd * gc1=S-15",
		"5.�����г����е�·��S5 gd*gc1=S-15"},
		{"6. Compare S4 and S5 to obtain the difference S6 (gd * gc1)/(rd * rc1)=S/(S-15)",
		"6.��S4��S5��ȵõ���ֵS6 (gd*gc1)/(rd*rc1)=S/(S-15)"},
		{"7. Substitute S2 S3 into S6 to obtain S7 (3 * 7)/(4 * 5)=S/(S-15)",
		"7.��S2 S3����S6�õ�S7 (3*7)/(4*5)=S/(S-15)"},
		{"8. Simplify equation S7 to obtain S8 21/20=S/(S-15)",
		"8.����ʽ��S7�õ�S8 21/20=S/(S-15)"},
		{"9. Simplify equation S8 to obtain S9 20S=21 (S-15)",
		"9.����ʽ��S8�õ�S9 20S=21(S-15)"},
		{"10. Simplify equation S9 to obtain S10 20S=21S-315",
		"10.����ʽ��S9�õ�S10 20S=21S-315"},
		{"11. Simplify equation S10 to obtain S11 rc1=315",
		"11.����ʽ��S10�õ�S11 rc1=315"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P12��һ���������̷� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Թ�15��Զ����һֻ���ӣ��Թ�׷֮������5����ʱ�乷��3��������7����·�̵��ڹ���4���ľ��룬�Թ�׷������ʱ�ܶ����ף�"));
	ColPrintf(PrintfCol::����, Lang("���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�9��Զ׷��������Ҫgc1��������������rc1��"));
	ColPrintf(PrintfCol::����, Lang("1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 4/9=rd/gd"));
	ColPrintf(PrintfCol::����, Lang("3.�г�ʽ��ʱ���ϵS3 gc/rc1=(5/t)/(3/t) ==> gc/rc1=5/3"));
	ColPrintf(PrintfCol::����, Lang("4.�����г����е�·��S4 gd*gc1=S"));
	ColPrintf(PrintfCol::����, Lang("5.�����г����е�·��S5 gd*gc1=S-15"));
	ColPrintf(PrintfCol::����, Lang("6.��S4��S5��ȵõ���ֵS6 (gd*gc1)/(rd*rc1)=S/(S-15)"));
	ColPrintf(PrintfCol::����, Lang("7.��S2 S3����S6�õ�S7 (3*7)/(4*5)=S/(S-15)"));
	ColPrintf(PrintfCol::����, Lang("8.����ʽ��S7�õ�S8 21/20=S/(S-15)"));
	ColPrintf(PrintfCol::����, Lang("9.����ʽ��S8�õ�S9 20S=21(S-15)"));
	ColPrintf(PrintfCol::����, Lang("10.����ʽ��S9�õ�S10 20S=21S-315"));
	ColPrintf(PrintfCol::����, Lang("11.����ʽ��S10�õ�S11 rc1=315"));
}
void P12_2_1()//**
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method One Proportional Hunting Dog Chasing Rabbit","P12��������һ������ �Թ�׷��"},
		{"Title: There is a wolf 9 steps away from the hunting dog. The hunting dog is chasing after it. It takes the wolf\n3 steps for the dog to walk 2 steps. The distance covered by the wolf 9 steps is equal to the\ndistance covered by the dog 5 steps. How many steps does the hunting dog run when it catches up with the wolf?",
		"��Ŀ���Ǻ͹����568���ǲ���������У�����9����ʱ�乷��7��������5����·�̵��ڹ���4���ľ��룬����ʱ�����˼����������˼�����"},
		{"1. Use the minimum common multiple to determine how many steps the dog and wolf take before they meet",
		"1.����С����������������߶��ٲ���������·�̷ݣ�"},
		{"2. Use the minimum common multiple to determine how many steps the dog and wolf will take before meeting (time period)",
		"2.����С����������������߶��ٲ���������ʱ��ݣ�"},
		{"3. Calculate the difference between dog and wolf distances S1. The difference between dog and wolf distances S1=the number of distances traveled by the dog N1- the number of distances traveled by the wolf N2",
		"3.���㹷�Ǿ���֮��S1 ���Ǿ���֮��S1=���ߵľ������N1+���ߵľ������N2"},
		{"4. Calculate the starting distance S2 between the dog and the wolf. The starting distance S2 is equal to the number of dog steps N3 multiplied by the number of dog walks N1",
		"4.���㹷�ǿ�ʼ������S2 ���ǿ�ʼ������S2=��ʼ�����ǲ�N3*���ߵ�ʱ�����N2"},//**
		{"5. Calculate the time T1 for the dog to catch up with the wolf (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the wolf is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the wolf",
		"5.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ǿ�ʼ������S2/���Ǿ���֮��S1"},
		{"6. Calculate the total distance traveled by the dog S4=the time it takes for the dog to catch up with the wolf T1 * the number of steps taken by the dog at the same time N6",
		"6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"},

		//������
		{"NumberOfDogWalkingDistancesN1","���ߵľ������N1"},
		{"DistanceTraveledByRabbitsN2","���ߵľ������N2"},
		{"HuntingDogFourStepsRabbitStepCountN4","�Թ��Ĳ����߲���N4"},
		{"RabbitStepsN5AtTheSameTime","��ͬʱ�����߲���N5"},
		{"DogStepsN6AtTheSameTime","��ͬʱ�乷�߲���N6"},
		{"SumOfDogAndRabbitDistancesS1","���Ǿ���֮��S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","���ǿ�ʼ������S2"},
		{"DogCatchingUpWithRabbitTimeT1","��׷����ʱ��T1"},
		{"TheTotalDistanceOfRabbitRunningS3","���ܵ��ܾ���S3"},
		{"TheTotalDistanceThatTheDogRanS4","���ܵ��ܾ���S4"},
		{"MinimumMultiplierFactor","��С������"},
		{"TheNumberOfStepsTakenByADogOnTheSameJourney","��ͬ·�̹��ߵĲ���"},
		{"NumberOfDogWalkingTimesN1","���ߵ�ʱ�����N1"},
		{"DistanceTraveledByRabbitsN2","���ߵ�ʱ�����N2"},
		{"WolfStepsN3AtTheBeginningOfDistance","��ʼ�����ǲ�N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ʼ�����ǲ�N3, 568);
	DefineLangVarInt(�Թ��Ĳ����߲���N4, 5);
	DefineLangVarInt(��ͬ·�̹��ߵĲ���, 4);
	DefineLangVarInt(��ͬʱ�����߲���N5, 9);
	DefineLangVarInt(��ͬʱ�乷�߲���N6, 7);
	ColPrintf(PrintfCol::����, Lang("P12��������һ������ �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Ǻ͹����568���ǲ���������У�����9����ʱ�乷��7��������5����·�̵��ڹ���4���ľ��룬����ʱ�����˼����������˼�����"));
	DefineLangVarInt(���ߵľ������N1, 0);
	DefineLangVarInt(���ߵľ������N2, 0);
	ColPrintf(PrintfCol::����, Lang("1.����С����������������߶��ٲ���������·�̷ݣ�"));
	DefineLangVarInt(��С������, MinCommonMultiple(�Թ��Ĳ����߲���N4.Var, ��ͬ·�̹��ߵĲ���.Var));
	���ߵľ������N1 = (��С������ / ��ͬ·�̹��ߵĲ���) * ��ͬʱ�乷�߲���N6;
	���ߵľ������N2 = (��С������ / �Թ��Ĳ����߲���N4) * ��ͬʱ�����߲���N5;
	���ߵľ������N1.PrintProcessLog(1);
	���ߵľ������N2.PrintProcessLog(1);
	DefineLangVarInt(���ߵ�ʱ�����N1, 0);
	DefineLangVarInt(���ߵ�ʱ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����С����������������߶��ٲ���������ʱ��ݣ�"));
	���ߵ�ʱ�����N1 = ��С������ / ��ͬ·�̹��ߵĲ���;
	���ߵ�ʱ�����N2 = ��С������ / �Թ��Ĳ����߲���N4;
	���ߵ�ʱ�����N1.PrintProcessLog(2);
	���ߵ�ʱ�����N2.PrintProcessLog(2);
	DefineLangVar(int, ���Ǿ���֮��S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㹷�Ǿ���֮��S1 ���Ǿ���֮��S1=���ߵľ������N1+���ߵľ������N2"));
	���Ǿ���֮��S1 = ���ߵľ������N1 + ���ߵľ������N2;
	���Ǿ���֮��S1.PrintProcessLog(3);
	DefineLangVar(int, ���ǿ�ʼ������S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㹷�ǿ�ʼ������S2 ���ǿ�ʼ������S2=��ʼ�����ǲ�N3*���ߵ�ʱ�����N2"));
	���ǿ�ʼ������S2 = ��ʼ�����ǲ�N3 * ���ߵ�ʱ�����N2;
	���ǿ�ʼ������S2.PrintProcessLog(4);
	DefineLangVar(int, ��׷����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("5.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ǿ�ʼ������S2/���Ǿ���֮��S1"));
	��׷����ʱ��T1 = ���ǿ�ʼ������S2 / ���Ǿ���֮��S1;
	��׷����ʱ��T1.PrintProcessLog(5);
	DefineLangVar(int, ���ܵ��ܾ���S4, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"));
	���ܵ��ܾ���S4 = ��׷����ʱ��T1 * ��ͬʱ�乷�߲���N6;
	���ܵ��ܾ���S4.PrintProcessLog(6);
}
void P12_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P12 Example Two Method Two Equation Hunting Dog Chasing Rabbit","P12�������������̷� �Թ�׷��"},
		{"Title: Wolf and dog are 568 wolf steps apart, walking towards each other. It takes a wolf 9 steps for a dog to walk 7 steps, and a wolf 5 steps equals a dog 4 steps. When they meet, how many steps did the dog run and how many steps did the wolf run."
		,"��Ŀ���Ǻ͹����568���ǲ���������У�����9����ʱ�乷��7��������5����·�̵��ڹ���4���ľ��룬����ʱ�����˼����������˼�����"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 9 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�9��Զ׷��������Ҫgc1��������������rc1��"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 and input it into the distance value",//rd=5 gd=9
		"2.����S1�õ�S2������·����ֵ 5rd=4gd==>gd=(5/4)rd==>gd/rd=(5/4)"},
		{"3. Transform S1 to obtain S3 and bring it into the distance value rc1/gc1=(9/t)/(7/t)==>rc1/gc1=9/7==>gc1=(9/7) rc1",
		"3.����S1�õ�S3������·����ֵ rc1/gc1=(9/t)/(7/t)==>rc1/gc1=9/7==>gc1=(9/7)rc1"},
		{"4. List the distance relationship S4 (gc1 * gd)+(rc1 * rd)=568rd",
		"4.�г�·�̹�ϵS4 (gc1*gd)+(rc1*rd)=568rd"},
		{"5. Substitute S2 into S4 to obtain S5 (gc1 * (5/4) rd)+(rc1 * rd)=568rd",
		"5.����S2����S4�õ�S5 (gc1*(5/4)rd)+(rc1*rd)=568rd"},
		{"6. Simplify S5 to obtain S6 gc1 * (5/4)+(9/7) gc1=568",
		"6.����S5�õ�S6 gc1*(5/4)+(9/7)gc1=568"},
		{"7. Separate S6 to obtain S7 (35/28+36/28) gc1=568",
		"7.��S6ͨ�ֵõ�S7 (35/28+36/28)gc1=568"},
		{"8. Simplify equation S7 to obtain S8 71/28gc1=568",
		"8.����ʽ��S7�õ�S8 71/28gc1=568"},
		{"9. Simplify equation S8 to obtain S9 gc1=568 * (71/28)",
		"9.����ʽ��S8�õ�S9 gc1=568*(71/28)"},
		{"10. Simplify equation S9 to obtain S10 gc1=8 * 28=224",
		"10.����ʽ��S9�õ�S10 gc1=8*28=224"},
		{"11. Substitute S10 into S3 to obtain S11 rc1/224=9/7==>rc1=9 * 32=288",
		"11.��S10����S3�õ�S11 rc1/224=9/7==>rc1=9*32=288"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P12�������������̷� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Ǻ͹����568���ǲ���������У�����9����ʱ�乷��7��������5����·�̵��ڹ���4���ľ��룬����ʱ�����˼����������˼�����"));
	ColPrintf(PrintfCol::����, Lang("���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�9��Զ׷��������Ҫgc1��������������rc1��"));
	ColPrintf(PrintfCol::����, Lang("1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2������·����ֵ 5rd=4gd==>gd=(5/4)rd==>gd/rd=(5/4)"));
	ColPrintf(PrintfCol::����, Lang("3.����S1�õ�S3������·����ֵ rc1/gc1=(9/t)/(7/t)==>rc1/gc1=9/7==>gc1=(9/7)rc1"));
	ColPrintf(PrintfCol::����, Lang("4.�г�·�̹�ϵS4 (gc1*gd)+(rc1*rd)=568rd"));
	ColPrintf(PrintfCol::����, Lang("5.����S2����S4�õ�S5 (gc1*(5/4)rd)+(rc1*rd)=568rd"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ�S6 gc1*(5/4)+(9/7)gc1=568"));
	ColPrintf(PrintfCol::����, Lang("7.��S6ͨ�ֵõ�S7 (35/28+36/28)gc1=568"));
	ColPrintf(PrintfCol::����, Lang("8.����ʽ��S7�õ�S8 71/28gc1=568"));
	ColPrintf(PrintfCol::����, Lang("9.����ʽ��S8�õ�S9 gc1=568*(71/28)"));
	ColPrintf(PrintfCol::����, Lang("10.����ʽ��S9�õ�S10 gc1=8*28=224"));
	ColPrintf(PrintfCol::����, Lang("11.��S10����S3�õ�S11 rc1/224=9/7==>rc1=9*32=288"));
}
void P12_3_1()//**
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method One Proportional Hunting Dog Chasing Rabbit","P12���̷���һ������ �Թ�׷��"},
		{"Title: There is a wolf 9 steps away from the hunting dog. The hunting dog is chasing after it. It takes the wolf\n3 steps for the dog to walk 2 steps. The distance covered by the wolf 9 steps is equal to the\ndistance covered by the dog 5 steps. How many steps does the hunting dog run when it catches up with the wolf?",
		"��Ŀ���Ǻ͹����260���ǲ���������У�����9����ʱ�乷��5��������5����·�̵��ڹ���3���ľ��룬����ʱ�����˼����������˼�����"},
		{"1. Use the minimum common multiple to determine how many steps the dog and wolf take before they meet",
		"1.����С����������������߶��ٲ���������·�̷ݣ�"},
		{"2. Use the minimum common multiple to determine how many steps the dog and wolf will take before meeting (time period)",
		"2.����С����������������߶��ٲ���������ʱ��ݣ�"},
		{"3. Calculate the difference between dog and wolf distances S1. The difference between dog and wolf distances S1=the number of distances traveled by the dog N1- the number of distances traveled by the wolf N2",
		"3.���㹷�Ǿ���֮��S1 ���Ǿ���֮��S1=���ߵľ������N1+���ߵľ������N2"},
		{"4. Calculate the starting distance S2 between the dog and the wolf. The starting distance S2 is equal to the number of dog steps N3 multiplied by the number of dog walks N1",
		"4.���㹷�ǿ�ʼ������S2 ���ǿ�ʼ������S2=��ʼ���Ĺ���N3*���ߵ�ʱ�����N2"},//**
		{"5. Calculate the time T1 for the dog to catch up with the wolf (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the wolf is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the wolf",
		"5.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ǿ�ʼ������S2/���Ǿ���֮��S1"},
		{"6. Calculate the total distance traveled by the dog S4=the time it takes for the dog to catch up with the wolf T1 * the number of steps taken by the dog at the same time N6",
		"6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"},

		//������
		{"NumberOfDogWalkingDistancesN1","���ߵľ������N1"},
		{"DistanceTraveledByRabbitsN2","���ߵľ������N2"},
		{"StartingWithDogStepsN3","��ʼ���Ĺ���N3"},
		{"HuntingDogFourStepsRabbitStepCountN4","�Թ��Ĳ����߲���N4"},
		{"RabbitStepsN5AtTheSameTime","��ͬʱ�����߲���N5"},
		{"DogStepsN6AtTheSameTime","��ͬʱ�乷�߲���N6"},
		{"SumOfDogAndRabbitDistancesS1","���Ǿ���֮��S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","���ǿ�ʼ������S2"},
		{"DogCatchingUpWithRabbitTimeT1","��׷����ʱ��T1"},
		{"TheTotalDistanceOfRabbitRunningS3","���ܵ��ܾ���S3"},
		{"TheTotalDistanceThatTheDogRanS4","���ܵ��ܾ���S4"},
		{"MinimumMultiplierFactor","��С������"},
		{"TheNumberOfStepsTakenByADogOnTheSameJourney","��ͬ·�̹��ߵĲ���"},
		{"NumberOfDogWalkingTimesN1","���ߵ�ʱ�����N1"},
		{"DistanceTraveledByRabbitsN2","���ߵ�ʱ�����N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ʼ�����ǲ�N3, 260);
	DefineLangVarInt(�Թ��Ĳ����߲���N4, 5);
	DefineLangVarInt(��ͬ·�̹��ߵĲ���, 3);
	DefineLangVarInt(��ͬʱ�����߲���N5, 9);
	DefineLangVarInt(��ͬʱ�乷�߲���N6, 5);
	ColPrintf(PrintfCol::����, Lang("P12���̷���һ������ �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Ǻ͹����260���ǲ���������У�����9����ʱ�乷��5��������5����·�̵��ڹ���3���ľ��룬����ʱ�����˼����������˼�����"));
	DefineLangVarInt(���ߵľ������N1, 0);
	DefineLangVarInt(���ߵľ������N2, 0);
	ColPrintf(PrintfCol::����, Lang("1.����С����������������߶��ٲ���������·�̷ݣ�"));
	DefineLangVarInt(��С������, MinCommonMultiple(�Թ��Ĳ����߲���N4.Var, ��ͬ·�̹��ߵĲ���.Var));
	���ߵľ������N1 = (��С������ / ��ͬ·�̹��ߵĲ���) * ��ͬʱ�乷�߲���N6;
	���ߵľ������N2 = (��С������ / �Թ��Ĳ����߲���N4) * ��ͬʱ�����߲���N5;
	���ߵľ������N1.PrintProcessLog(1);
	���ߵľ������N2.PrintProcessLog(1);
	DefineLangVarInt(���ߵ�ʱ�����N1, 0);
	DefineLangVarInt(���ߵ�ʱ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����С����������������߶��ٲ���������ʱ��ݣ�"));
	���ߵ�ʱ�����N1 = ��С������ / ��ͬ·�̹��ߵĲ���;
	���ߵ�ʱ�����N2 = ��С������ / �Թ��Ĳ����߲���N4;
	���ߵ�ʱ�����N1.PrintProcessLog(2);
	���ߵ�ʱ�����N2.PrintProcessLog(2);
	DefineLangVar(int, ���Ǿ���֮��S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㹷�Ǿ���֮��S1 ���Ǿ���֮��S1=���ߵľ������N1+���ߵľ������N2"));
	���Ǿ���֮��S1 = ���ߵľ������N1 + ���ߵľ������N2;
	���Ǿ���֮��S1.PrintProcessLog(3);
	DefineLangVar(int, ���ǿ�ʼ������S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㹷�ǿ�ʼ������S2 ���ǿ�ʼ������S2=��ʼ�����ǲ�N3*���ߵ�ʱ�����N2"));
	���ǿ�ʼ������S2 = ��ʼ�����ǲ�N3 * ���ߵ�ʱ�����N2;
	���ǿ�ʼ������S2.PrintProcessLog(4);
	DefineLangVar(int, ��׷����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("5.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ǿ�ʼ������S2/���Ǿ���֮��S1"));
	��׷����ʱ��T1 = ���ǿ�ʼ������S2 / ���Ǿ���֮��S1;
	��׷����ʱ��T1.PrintProcessLog(5);
	DefineLangVar(int, ���ܵ��ܾ���S4, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"));
	���ܵ��ܾ���S4 = ��׷����ʱ��T1 * ��ͬʱ�乷�߲���N6;
	���ܵ��ܾ���S4.PrintProcessLog(6);
}
void P12_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P12 Example Three Method Two Equation Hunting Dog Chasing Rabbit","P12�������������̷� �Թ�׷��"},
		{"Title: Wolves and dogs are 260 wolf steps apart, walking towards each other. It takes a wolf 9 steps for a dog to walk 5 steps, and the distance covered by a wolf 5 steps is equal to the distance covered by a dog 3 steps. When they meet, how many steps did the dog run and how many steps did the wolf run."
		,"��Ŀ���Ǻ͹����260���ǲ���������У�����9����ʱ�乷��5��������5����·�̵��ڹ���3���ľ��룬����ʱ�����˼����������˼�����"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 9 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�9��Զ׷��������Ҫgc1��������������rc1��"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 and input it into the distance value 5rd=3gd==>gd=(5/3)rd==>gd/rd=(5/3)",//rd=5 gd=9
		"2.����S1�õ�S2������·����ֵ 5rd=3gd==>gd=(5/3)rd==>gd/rd=(5/3)"},
		{"3. Transform S1 to obtain S3 and bring it into the distance value rc1/gc1=(9/t)/(5/t)==>rc1/gc1=9/5==>gc1=(9/5) rc1",
		"3.����S1�õ�S3������·����ֵ rc1/gc1=(9/t)/(5/t)==>rc1/gc1=9/5==>gc1=(9/5)rc1"},
		{"4. List the distance relationship S4 (gc1 * gd)+(rc1 * rd)=260rd",
		"4.�г�·�̹�ϵS4 (gc1*gd)+(rc1*rd)=260rd"},
		{"5. Substitute S2 into S4 to obtain S5 (gc1 * (5/3) rd)+(rc1 * rd)=260rd",
		"5.����S2����S4�õ�S5 (gc1*(5/3)rd)+(rc1*rd)=260rd"},
		{"6. Simplify S5 to obtain S6 gc1 * (5/3)+(9/5) gc1=260",
		"6.����S5�õ�S6 gc1*(5/3)+(9/5)gc1=260"},
		{"7. Separate S6 to obtain S7 (25/15+37/15) gc1=260",
		"7.��S6ͨ�ֵõ�S7 (25/15+37/15)gc1=260"},
		{"8. Simplify equation S7 to obtain S8 52/15gc1=260",
		"8.����ʽ��S7�õ�S8 52/15gc1=260"},
		{"9. Simplify equation S8 to obtain S9 gc1=260 * (52/15)",
		"9.����ʽ��S8�õ�S9 gc1=260*(52/15)"},
		{"10. Simplify equation S9 to obtain S10 gc1=5 * 15=75",
		"10.����ʽ��S9�õ�S10 gc1=5*15=75"},
		{"11. Substitute S10 into S3 to obtain S11 rc1/75=9/5==>rc1=9 * 15=135",
		"11.��S10����S3�õ�S11 rc1/75=9/5==>rc1=9*15=135"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P12�������������̷� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Ǻ͹����260���ǲ���������У�����9����ʱ�乷��5��������5����·�̵��ڹ���3���ľ��룬����ʱ�����˼����������˼�����"));
	ColPrintf(PrintfCol::����, Lang("���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�9��Զ׷��������Ҫgc1��������������rc1��"));
	ColPrintf(PrintfCol::����, Lang("1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2������·����ֵ 5rd=3gd==>gd=(5/3)rd==>gd/rd=(5/3)"));
	ColPrintf(PrintfCol::����, Lang("3.����S1�õ�S3������·����ֵ rc1/gc1=(9/t)/(5/t)==>rc1/gc1=9/5==>gc1=(9/5)rc1"));
	ColPrintf(PrintfCol::����, Lang("4.�г�·�̹�ϵS4 (gc1*gd)+(rc1*rd)=260rd"));
	ColPrintf(PrintfCol::����, Lang("5.����S2����S4�õ�S5 (gc1*(5/3)rd)+(rc1*rd)=260rd"));
	ColPrintf(PrintfCol::����, Lang("6.����S5�õ�S6 gc1*(5/3)+(9/5)gc1=260"));
	ColPrintf(PrintfCol::����, Lang("7.��S6ͨ�ֵõ�S7 (25/15+37/15)gc1=260"));
	ColPrintf(PrintfCol::����, Lang("8.����ʽ��S7�õ�S8 52/15gc1=260"));
	ColPrintf(PrintfCol::����, Lang("9.����ʽ��S8�õ�S9 gc1=260*(52/15)"));
	ColPrintf(PrintfCol::����, Lang("10.����ʽ��S9�õ�S10 gc1=5*15=75"));
	ColPrintf(PrintfCol::����, Lang("11.��S10����S3�õ�S11 rc1/75=9/5==>rc1=9*15=135"));
}
void P12()
{
	P12_1_1();
	ColPrintf(PrintfCol::����, "");
	P12_1_2();
	ColPrintf(PrintfCol::����, "");
	P12_2_1();
	ColPrintf(PrintfCol::����, "");
	P12_2_2();
	ColPrintf(PrintfCol::����, "");
	P12_3_1();
	ColPrintf(PrintfCol::����, "");
	P12_3_2();
	ColPrintf(PrintfCol::����, "");
}
void P12_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P12();
	Lang.SetCurLanguage(LanguageLib::English);
	P12();
	ColPrintf(PrintfCol::����, "");

}