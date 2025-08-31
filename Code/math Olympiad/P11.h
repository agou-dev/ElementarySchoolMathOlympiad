#pragma once
void P11_1_1()//****B
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Example 1 Hunting Dog Chasing Rabbit","P11��һ����һ���� �Թ�׷��"},
		{"Title: There is a rabbit 26 steps away from the hunting dog. The hunting dog is chasing after it. It takes the rabbit 8 steps for the dog to walk 5 steps, and the distance covered by the rabbit 9 steps is equal to the distance covered by the dog 4 steps. How long does it take for the rabbit to be caught by the hunting dog? How many steps does the hunting dog run at this moment?",
		"��Ŀ���Թ�26��Զ����һֻ���ӣ��Թ�׷֮������8����ʱ�乷��5��������9����·�̵��ڹ���4���ľ��룬���ܶ��ٲ����Թ�ץס?��ʱ�Թ��ܶ��ٲ���"},
		{"1. Use the minimum common multiple to determine how many steps the dog and rabbit take before they meet",
		"1.����С����������������߶��ٲ�������"},
		{"2. Calculate the difference between dog and rabbit distances S1. The difference between dog and rabbit distances S1=the number of distances traveled by the dog N1- the number of distances traveled by the rabbit N2",
		"2.���㹷�þ���֮��S1 ���þ���֮��S1=���ߵľ������N1-���ߵľ������N2"},
		{"3. Calculate the starting distance S2 between the dog and rabbit. The starting distance S2 between the dog and rabbit is equal to the dog steps N3 multiplied by the four steps taken by the hunting dog and the rabbit steps N4",
		"3.���㹷�ÿ�ʼ����ܷ���S2 ���ÿ�ʼ����ܷ���S2=��ʼ���Ĺ���N3*�Թ��Ĳ����߲���N4"},//**
		{"4. Calculate the time T1 for the dog to catch up with the rabbit (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the rabbit is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the rabbit",
		"4.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ÿ�ʼ������S2/���þ���֮��S1"},
		{"5. Calculate the total distance S3 of the rabbit's run. The total distance S3 of the rabbit's run is equal to the time it takes for the dog to\ncatch up with the rabbit, T1, multiplied by the number of steps taken by the rabbit at the same time, N5",
		"5.�������ܵ��ܾ���S3 ���ܵ��ܾ���S3=��׷����ʱ��T1*��ͬʱ�����߲���N5"},
		{"6. Calculate the total distance that the dog ran S4 and the total distance that the rabbit ran S4=the time it took for the dog to catch up with the rabbit T1 * the number of steps taken by the rabbit at the same time N6",
		"6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"},
		//������
		{"NumberOfDogWalkingDistancesN1","���ߵľ������N1"},
		{"DistanceTraveledByRabbitsN2","���ߵľ������N2"},
		{"StartingWithDogStepsN3","��ʼ���Ĺ���N3"},
		{"HuntingDogFourStepsRabbitStepCountN4","�Թ��Ĳ����߲���N4"},
		{"RabbitStepsN5AtTheSameTime","��ͬʱ�����߲���N5"},
		{"DogStepsN6AtTheSameTime","��ͬʱ�乷�߲���N6"},
		{"DifferenceInDistanceBetweenDogAndRabbitS1","���þ���֮��S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","���ÿ�ʼ������S2"},
		{"DogCatchingUpWithRabbitTimeT1","��׷����ʱ��T1"},
		{"TheTotalDistanceOfRabbitRunningS3","���ܵ��ܾ���S3"},
		{"TheTotalDistanceThatTheDogRanS4","���ܵ��ܾ���S4"},
		{"MinimumMultiplierFactor","��С������"},
		{"TheNumberOfStepsTakenByADogOnTheSameJourney","��ͬ·�̹��ߵĲ���"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ʼ���Ĺ���N3, 26);
	DefineLangVarInt(�Թ��Ĳ����߲���N4, 9);
	DefineLangVarInt(��ͬ·�̹��ߵĲ���, 4);
	DefineLangVarInt(��ͬʱ�����߲���N5, 8);
	DefineLangVarInt(��ͬʱ�乷�߲���N6, 5);
	DefineLangVarInt(�׿�����ʱ��T1, 12);
	ColPrintf(PrintfCol::����, Lang("P11��һ����һ���� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Թ�26��Զ����һֻ���ӣ��Թ�׷֮������8����ʱ�乷��5��������9����·�̵��ڹ���4���ľ��룬���ܶ��ٲ����Թ�ץס?��ʱ�Թ��ܶ��ٲ���"));
	DefineLangVarInt(���ߵľ������N1, 0);
	DefineLangVarInt(���ߵľ������N2, 0);
	ColPrintf(PrintfCol::����, Lang("1.����С����������������߶��ٲ�������"));
	DefineLangVarInt(��С������, MinCommonMultiple(�Թ��Ĳ����߲���N4.Var, ��ͬ·�̹��ߵĲ���.Var));
	���ߵľ������N1 = (��С������/ ��ͬ·�̹��ߵĲ���)* ��ͬʱ�乷�߲���N6;
	���ߵľ������N2 = (��С������/ �Թ��Ĳ����߲���N4)* ��ͬʱ�����߲���N5;
	���ߵľ������N1.PrintProcessLog(1);
	���ߵľ������N2.PrintProcessLog(1);
	DefineLangVar(int, ���þ���֮��S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㹷�þ���֮��S1 ���þ���֮��S1=���ߵľ������N1-���ߵľ������N2"));
	���þ���֮��S1 = ���ߵľ������N1 - ���ߵľ������N2;
	���þ���֮��S1.PrintProcessLog(2);
	DefineLangVar(int, ���ÿ�ʼ������S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㹷�ÿ�ʼ������S2 ���ÿ�ʼ������S2=��ʼ���Ĺ���N3*�Թ��Ĳ����߲���N4"));
	���ÿ�ʼ������S2 = ��ʼ���Ĺ���N3 * �Թ��Ĳ����߲���N4;
	���ÿ�ʼ������S2.PrintProcessLog(3);
	DefineLangVar(int, ��׷����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ÿ�ʼ������S2/���þ���֮��S1"));
	��׷����ʱ��T1 = ���ÿ�ʼ������S2 / ���þ���֮��S1;
	��׷����ʱ��T1.PrintProcessLog(4);
	DefineLangVar(int, ���ܵ��ܾ���S3, 0);
	ColPrintf(PrintfCol::����, Lang("5.�������ܵ��ܾ���S3 ���ܵ��ܾ���S3=��׷����ʱ��T1*��ͬʱ�����߲���N5"));
	���ܵ��ܾ���S3 = ��׷����ʱ��T1 * ��ͬʱ�����߲���N5;
	���ܵ��ܾ���S3.PrintProcessLog(5);
	DefineLangVar(int, ���ܵ��ܾ���S4, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"));
	���ܵ��ܾ���S4 = ��׷����ʱ��T1 * ��ͬʱ�乷�߲���N6;
	���ܵ��ܾ���S4.PrintProcessLog(6);
}
void P11_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Example 1 Method 2 Equation Hunting Dog Chasing Rabbit","P11��һ���������� �Թ�׷��"},
		{"Title: There is a rabbit 26 steps away from the hunting dog. The hunting dog is chasing after it. It takes the rabbit 8 steps for the\ndog to walk 5 steps, and the distance covered by the rabbit 9 steps is equal to the distance covered by the\ndog 4 steps. How many steps did the rabbit run and get caught by the hunting dog? How many steps does the hunting dog\nrun at this moment?"
		,"��Ŀ���Թ�26��Զ����һֻ���ӣ��Թ�׷֮������8����ʱ�乷��5��������9����·�̵��ڹ���4���ľ��룬���ܶ��ٲ����Թ�ץס?��ʱ�Թ��ܶ��ٲ���"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 26 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�26��Զ׷��������Ҫgc1��������������rc1��"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 4/9=rd/gd",
		"2.����S1�õ�S2 4/9=rd/gd"},
		{"3. List the time relationship of equation S3 gc/rc1=(8/t)/(5/t)==>gc/rc1=8/5",
		"3.�г�ʽ��ʱ���ϵS3 gc/rc1=(8/t)/(5/t) ==> gc/rc1=8/5"},
		{"4. Enter the offset distance relationship S4 gd * gc1=rd * rc1+(26 * gd) based on the value of S3",
		"4.����S3����ֵ�����ƫ��·�̹�ϵS4 gd*gc1=rd*rc1+(26*gd)"},
		{"5. Divide the two sides of equation S4 by rd * rc1 and expand the equation to obtain S5 (gd/rd) * (gc1/rc1)=1+((26 * gd)/rd * rc1)",
		"5.��S4��ʽ���߳�rd*rc1��1չ��ʽ�ӵõ�S5 (gd/rd)*(gc1/rc1)=1+((26*gd)/rd*rc1)"},
		{"6. Substitute S2 and S3 into S5 to obtain S6 (9/4) * (5/8)=1+(234/4 * rc1)==>45/32=1+(234/4 * rc1)",
		"6.��S2��S3����S5��ֵ����õ�S6 (9/4)*(5/8)=1+(234/4*rc1) ==> 45/32=1+(234/4*rc1)"},
		{"7. Simplify equation S6 to obtain S7 45/32-1=234/(4 * rc1)",
		"7.����ʽ��S6�õ�S7 45/32-1=234/(4*rc1)"},
		{"8. Simplify equation S7 to obtain S8 (45-32)/32=13/32=234/(4 * rc1)==>13/32=234/(4 * rc1)",
		"8.����ʽ��S7�õ�S8 (45-32)/32=13/32=234/(4*rc1) ==> 13/32=234/(4*rc1)"},
		{"Multiplying both sides by 4 yields S9 13/32 * 4=13/8=234/rc1",
		"9.S8����ͬ��4�õ�S9 13/32*4=13/8=234/rc1"},
		{"10. Simplify equation S9 to obtain S10 13 * rc1=234 * 8=1872",
		"10.����ʽ��S9�õ�S10 13*rc1=234*8=1872"},
		{"11. Simplify equation S10 to obtain S11 rc1=1872/13=144",
		"11.����ʽ��S10�õ�S11 rc1=1872/13=144"},
		{"12. According to S3 and S11, obtain S12 gc1/144=5/8",
		"12.����S3��S11�õ�S12 gc1/144=5/8"},
		{"13. Simplify equation S12 to obtain S13, exchange 8gc1=5 * 144",
		"13.����ʽ��S12�õ�S13���� 8gc1=5*144"},
		{"14. Solve for gcgc1=90",
		"14.���gc gc1=90"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P11��һ���������� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Թ�26��Զ����һֻ���ӣ��Թ�׷֮������8����ʱ�乷��5��������9����·�̵��ڹ���4���ľ��룬���ܶ��ٲ����Թ�ץס?��ʱ�Թ��ܶ��ٲ���"));
	ColPrintf(PrintfCol::����, Lang("���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�26��Զ׷��������Ҫgc1��������������rc1��"));
	ColPrintf(PrintfCol::����, Lang("1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 4/9=rd/gd"));
	ColPrintf(PrintfCol::����, Lang("3.�г�ʽ��ʱ���ϵS3 gc/rc1=(8/t)/(5/t) ==> gc/rc1=8/5"));
	ColPrintf(PrintfCol::����, Lang("4.����S3����ֵ�����ƫ��·�̹�ϵS4 gd*gc1=rd*rc1+(26*gd)"));
	ColPrintf(PrintfCol::����, Lang("5.��S4��ʽ���߳�rd*rc1��1չ��ʽ�ӵõ�S5 (gd/rd)*(gc1/rc1)=1+((26*gd)/rd*rc1)"));
	ColPrintf(PrintfCol::����, Lang("6.��S2��S3����S5��ֵ����õ�S6 (9/4)*(5/8)=1+(234/4*rc1) ==> 45/32=1+(234/4*rc1)"));
	ColPrintf(PrintfCol::����, Lang("7.����ʽ��S6�õ�S7 45/32-1=234/(4*rc1)"));
	ColPrintf(PrintfCol::����, Lang("8.����ʽ��S7�õ�S8 (45-32)/32=13/32=234/(4*rc1) ==> 13/32=234/(4*rc1)"));
	ColPrintf(PrintfCol::����, Lang("9.S8����ͬ��4�õ�S9 13/32*4=13/8=234/rc1"));
	ColPrintf(PrintfCol::����, Lang("10.����ʽ��S9�õ�S10 13*rc1=234*8=1872"));
	ColPrintf(PrintfCol::����, Lang("11.����ʽ��S10�õ�S11 rc1=1872/13=144"));
	ColPrintf(PrintfCol::����, Lang("12.����S3��S11�õ�S12 gc1/144=5/8"));
	ColPrintf(PrintfCol::����, Lang("13.����ʽ��S12�õ�S13���� 8gc1=5*144"));
	ColPrintf(PrintfCol::����, Lang("14.���gc gc1=90"));
}
void P11_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method One Proportional Hunting Dog Chasing Rabbit","P11���̷���һ���� �Թ�׷��"},
		{"Title: There is a rabbit 9 steps away from the hunting dog. The hunting dog is chasing after it. It takes the rabbit\n3 steps for the dog to walk 2 steps. The distance covered by the rabbit 9 steps is equal to the\ndistance covered by the dog 5 steps. How many steps does the hunting dog run when it catches up with the rabbit?",
		"��Ŀ���Թ�9��Զ����һֻ���ӣ��Թ�׷֮������3����ʱ�乷��2��������9����·�̵��ڹ���5���ľ��룬�Թ�׷������ʱ�ܶ��ٲ���"},
		{"1. Use the minimum common multiple to determine how many steps the dog and rabbit take before they meet",
		"1.����С����������������߶��ٲ���������·�̷ݣ�"},
		{"2. Use the minimum common multiple to determine how many steps the dog and rabbit will take before meeting (time period)",
		"2.����С����������������߶��ٲ���������ʱ��ݣ�"},
		{"3. Calculate the difference between dog and rabbit distances S1. The difference between dog and rabbit distances S1=the number of distances traveled by the dog N1- the number of distances traveled by the rabbit N2",
		"3.���㹷�þ���֮��S1 ���þ���֮��S1=���ߵľ������N1-���ߵľ������N2"},
		{"4. Calculate the starting distance S2 between the dog and the rabbit. The starting distance S2 is equal to the number of dog steps N3 multiplied by the number of dog walks N1",
		"4.���㹷�ÿ�ʼ������S2 ���ÿ�ʼ������S2=��ʼ���Ĺ���N3*���ߵ�ʱ�����N1"},//**
		{"5. Calculate the time T1 for the dog to catch up with the rabbit (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the rabbit is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the rabbit",
		"5.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ÿ�ʼ������S2/���þ���֮��S1"},
		{"6. Calculate the total distance traveled by the dog S4=the time it takes for the dog to catch up with the rabbit T1 * the number of steps taken by the dog at the same time N6",
		"6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"},
		
		//������
		{"NumberOfDogWalkingDistancesN1","���ߵľ������N1"},
		{"DistanceTraveledByRabbitsN2","���ߵľ������N2"},
		{"StartingWithDogStepsN3","��ʼ���Ĺ���N3"},
		{"HuntingDogFourStepsRabbitStepCountN4","�Թ��Ĳ����߲���N4"},
		{"RabbitStepsN5AtTheSameTime","��ͬʱ�����߲���N5"},
		{"DogStepsN6AtTheSameTime","��ͬʱ�乷�߲���N6"},
		{"DifferenceInDistanceBetweenDogAndRabbitS1","���þ���֮��S1"},
		{"DogsAndRabbitsStartToDistanceFromEachOtherS2","���ÿ�ʼ������S2"},
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
	DefineLangVarInt(��ʼ���Ĺ���N3, 9);
	DefineLangVarInt(�Թ��Ĳ����߲���N4, 9);
	DefineLangVarInt(��ͬ·�̹��ߵĲ���, 5);
	DefineLangVarInt(��ͬʱ�����߲���N5, 3);
	DefineLangVarInt(��ͬʱ�乷�߲���N6, 2);
	ColPrintf(PrintfCol::����, Lang("P11���̷���һ���� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Թ�9��Զ����һֻ���ӣ��Թ�׷֮������3����ʱ�乷��2��������9����·�̵��ڹ���5���ľ��룬�Թ�׷������ʱ�ܶ��ٲ���"));
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
	DefineLangVar(int, ���þ���֮��S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㹷�þ���֮��S1 ���þ���֮��S1=���ߵľ������N1-���ߵľ������N2"));
	���þ���֮��S1 = ���ߵľ������N1 - ���ߵľ������N2;
	���þ���֮��S1.PrintProcessLog(3);
	DefineLangVar(int, ���ÿ�ʼ������S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㹷�ÿ�ʼ������S2 ���ÿ�ʼ������S2=��ʼ���Ĺ���N3*���ߵ�ʱ�����N1"));
	���ÿ�ʼ������S2 = ��ʼ���Ĺ���N3 * ���ߵ�ʱ�����N1;
	���ÿ�ʼ������S2.PrintProcessLog(4);
	DefineLangVar(int, ��׷����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("5.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ÿ�ʼ������S2/���þ���֮��S1"));
	��׷����ʱ��T1 = ���ÿ�ʼ������S2 / ���þ���֮��S1;
	��׷����ʱ��T1.PrintProcessLog(5);
	DefineLangVar(int, ���ܵ��ܾ���S4, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"));
	���ܵ��ܾ���S4 = ��׷����ʱ��T1 * ��ͬʱ�乷�߲���N6;
	���ܵ��ܾ���S4.PrintProcessLog(6);
}
void P11_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method Two Equation Hunting Dog Chasing Rabbit","P11���̷��������� �Թ�׷��"},
		{"Title: There is a rabbit 9 steps away from the hunting dog. The hunting dog is chasing after it. It\ntakes the rabbit 3 steps for the dog to walk 2 steps. The distance covered by the rabbit 9\nsteps is equal to the distance covered by the dog 5 steps. How many steps does the hunting dog run when it catches\nup with the rabbit?"
		,"��Ŀ���Թ�9��Զ����һֻ���ӣ��Թ�׷֮������3����ʱ�乷��2��������9����·�̵��ڹ���5���ľ��룬�Թ�׷������ʱ�ܶ��ٲ���"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 9 steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�9��Զ׷��������Ҫgc1��������������rc1��"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 5/9=rd/gd",//rd=5 gd=9
		"2.����S1�õ�S2 5/9=rd/gd"},
		{"3. List the time relationship between equation S3 gc/rc1=(3/t)/(2/t)==>gc/rc1=3/2",
		"3.�г�ʽ��ʱ���ϵS3 gc/rc1=(3/t)/(2/t) ==> gc/rc1=3/2"},
		{"4. Enter the offset distance relationship S4 gd * gc1=rd * rc1+(9 * gd) based on the value of S3",
		"4.����S3����ֵ�����ƫ��·�̹�ϵS4 gd*gc1=rd*rc1+(9*gd)"},
		{"5. Divide the two sides of equation S4 by rd * rc1 and expand the equation to obtain S5 (gd/rd) * (gc1/rc1)=1+((9 * gd)/rd * rc1)",
		"5.��S4��ʽ���߳�rd*rc1��1չ��ʽ�ӵõ�S5 (gd/rd)*(gc1/rc1)=1+((9*gd)/rd*rc1)"},
		{"6. Substitute S2 and S3 into S5 to obtain S6 (9/5) * (2/3)=1+(81/5 * rc1)==>18/15-1=81/5 * rc1)",
		"6.��S2��S3����S5��ֵ����õ�S6 (9/5)*(2/3)=1+(81/5*rc1) ==> 18/15-1=81/5*rc1)"},
		{"7. Simplify equation S6 to obtain S7 18/15-1=81/(5 * rc1)",
		"7.����ʽ��S6�õ�S7 18/15-1=81/(5*rc1)"},
		{"8. Simplify equation S7 to obtain S8 (18-15)/15=3/15=81/(5 * rc1)==>3/15=81/(5 * rc1)",
		"8.����ʽ��S7�õ�S8 (18-15)/15=3/15=81/(5*rc1) ==> 3/15=81/(5*rc1)"},
		{"9.Multiplying both sides by 5 yields S9 3/15 * 5=3/3=81/rc1",
		"9.S8����ͬ��5�õ�S9 3/15*5=3/3=81/rc1"},
		{"10. Simplify equation S9 to obtain S10 3rc1=81 * 3=243",
		"10.����ʽ��S9�õ�S10 3rc1=81*3=243"},
		{"11. Simplify equation S10 to obtain S11 rc1=243/3=81",
		"11.����ʽ��S10�õ�S11 rc1=243/3=81"},
		{"12.According to S3 and S11, obtain S12 gc1/81=2/3",
		"12.����S3��S11�õ�S12 gc1/81=2/3"},
		{"13. Simplify equation S12 to obtain S13, exchange 3gc1=2 * 81",
		"13.����ʽ��S12�õ�S13���� 3gc1=2*81"},
		{"14. Solve for gc1=54",
		"14.���gc gc1=54"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P11���̷��������� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Թ�9��Զ����һֻ���ӣ��Թ�׷֮������3����ʱ�乷��2��������9����·�̵��ڹ���5���ľ��룬�Թ�׷������ʱ�ܶ��ٲ���"));
	ColPrintf(PrintfCol::����, Lang("���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�9��Զ׷��������Ҫgc1��������������rc1��"));
	ColPrintf(PrintfCol::����, Lang("1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 5/9=rd/gd"));
	ColPrintf(PrintfCol::����, Lang("3.�г�ʽ��ʱ���ϵS3 gc/rc1=(3/t)/(2/t) ==> gc/rc1=3/2"));
	ColPrintf(PrintfCol::����, Lang("4.����S3����ֵ�����ƫ��·�̹�ϵS4 gd*gc1=rd*rc1+(9*gd)"));
	ColPrintf(PrintfCol::����, Lang("5.��S4��ʽ���߳�rd*rc1��1չ��ʽ�ӵõ�S5 (gd/rd)*(gc1/rc1)=1+((9*gd)/rd*rc1)"));
	ColPrintf(PrintfCol::����, Lang("6.��S2��S3����S5��ֵ����õ�S6 (9/5)*(2/3)=1+(81/5*rc1) ==> 18/15-1=81/5*rc1)"));
	ColPrintf(PrintfCol::����, Lang("7.����ʽ��S6�õ�S7 18/15-1=81/(5*rc1)"));
	ColPrintf(PrintfCol::����, Lang("8.����ʽ��S7�õ�S8 (18-15)/15=3/15=81/(5*rc1) ==> 3/15=81/(5*rc1)"));
	ColPrintf(PrintfCol::����, Lang("9.S8����ͬ��5�õ�S9 3/15*5=3/3=81/rc1"));
	ColPrintf(PrintfCol::����, Lang("10.����ʽ��S9�õ�S10 3rc1=81*3=243"));
	ColPrintf(PrintfCol::����, Lang("11.����ʽ��S10�õ�S11 rc1=243/3=81"));
	ColPrintf(PrintfCol::����, Lang("12.����S3��S11�õ�S12 gc1/81=2/3"));
	ColPrintf(PrintfCol::����, Lang("13.����ʽ��S12�õ�S13���� 3gc1=2*81"));
	ColPrintf(PrintfCol::����, Lang("14.���gc gc1=54"));
}
void P11_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method One Proportional Hunting Dog Chasing Rabbit","P11��������һ���� �Թ�׷��"},
		{"Title: After running 80 steps, a rabbit is chased by a dog. It takes the rabbit 9 steps for the\ndog to walk 5 steps, and the distance covered by the rabbit 7 steps is equal to the distance covered by the dog 3 steps. How many steps does\nthe hunting dog run when it catches up with the rabbit?",
		"��Ŀ��һֻ������80���󹷿�ʼ׷������9����ʱ�乷��5��������7����·�̵��ڹ���3���ľ��룬�Թ�׷������ʱ�ܶ��ٲ���"},
		{"1. Use the minimum common multiple to determine how many steps the dog and rabbit take before they meet",
		"1.����С����������������߶��ٲ���������·�̷ݣ�"},
		{"2. Use the minimum common multiple to determine how many steps the dog and rabbit will take before meeting (time period)",
		"2.����С����������������߶��ٲ���������ʱ��ݣ�"},
		{"3. Calculate the difference between the total number of dogs and rabbits S1=the distance traveled by the dog N1- the distance traveled by the rabbit N2",
		"3.���㹷���ܷ���֮��S1 �����ܷ���֮��S1=���ߵľ������N1-���ߵľ������N2"},
		{"4. Calculate the total number of parts S2 that the dog and rabbit started to be apart from each other. S2=dog steps N3 * rabbit walking time N2",
		"4.���㹷�ÿ�ʼ����ܷ���S2 ���ÿ�ʼ����ܷ���S2=��ʼ���Ĺ���N3*���ߵ�ʱ�����N2"},//**
		{"5. Calculate the time T1 for the dog to catch up with the rabbit (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe dog to catch up with the rabbit is equal to the difference S1 between the distance S2 and the distance S1 between the dog and the rabbit",
		"5.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ÿ�ʼ������S2/���þ���֮��S1"},
		{"6. Calculate the total distance traveled by the dog S4=the time it takes for the dog to catch up with the rabbit T1 * the number of steps taken by the dog at the same time N6",
		"6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"},

		//������
		{"NumberOfDogWalkingDistancesN1","���ߵľ������N1"},
		{"DistanceTraveledByRabbitsN2","���ߵľ������N2"},
		{"RabbitStepsN3AtTheBeginningOfDistance","��ʼ�����ò�N3"},
		{"RabbitStepsN4ForTheSameDistance","��ͬ·�����߲���N4"},
		{"RabbitStepsN5AtTheSameTime","��ͬʱ�����߲���N4"},
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
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ʼ�����ò�N3, 80);
	DefineLangVarInt(��ͬ·�����߲���N4, 7);
	DefineLangVarInt(��ͬ·�̹��ߵĲ���, 3);
	DefineLangVarInt(��ͬʱ�����߲���N5, 9);
	DefineLangVarInt(��ͬʱ�乷�߲���N6, 5);
	ColPrintf(PrintfCol::����, Lang("P11���̷���һ���� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���Թ�9��Զ����һֻ���ӣ��Թ�׷֮������3����ʱ�乷��2��������9����·�̵��ڹ���5���ľ��룬�Թ�׷������ʱ�ܶ��ٲ���"));
	DefineLangVarInt(���ߵľ������N1, 0);
	DefineLangVarInt(���ߵľ������N2, 0);
	ColPrintf(PrintfCol::����, Lang("1.����С����������������߶��ٲ���������·�̷ݣ�"));
	DefineLangVarInt(��С������, MinCommonMultiple(��ͬ·�����߲���N4.Var, ��ͬ·�̹��ߵĲ���.Var));
	���ߵľ������N1 = (��С������ / ��ͬ·�̹��ߵĲ���) * ��ͬʱ�乷�߲���N6;
	���ߵľ������N2 = (��С������ / ��ͬ·�����߲���N4) * ��ͬʱ�����߲���N5;
	���ߵľ������N1.PrintProcessLog(1);
	���ߵľ������N2.PrintProcessLog(1);
	DefineLangVarInt(���ߵ�ʱ�����N1, 0);
	DefineLangVarInt(���ߵ�ʱ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����С����������������߶��ٲ���������ʱ��ݣ�"));
	���ߵ�ʱ�����N1 = ��С������ / ��ͬ·�̹��ߵĲ���;
	���ߵ�ʱ�����N2 = ��С������ / ��ͬ·�����߲���N4;
	���ߵ�ʱ�����N1.PrintProcessLog(2);
	���ߵ�ʱ�����N2.PrintProcessLog(2);
	DefineLangVar(int, ���þ���֮��S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㹷���ܷ���֮��S1 �����ܷ���֮��S1=���ߵľ������N1-���ߵľ������N2"));
	���þ���֮��S1 = ���ߵľ������N1 - ���ߵľ������N2;
	���þ���֮��S1.PrintProcessLog(3);
	DefineLangVar(int, ���ÿ�ʼ������S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㹷�ÿ�ʼ����ܷ���S2 ���ÿ�ʼ����ܷ���S2=��ʼ���Ĺ���N3*���ߵ�ʱ�����N2"));
	���ÿ�ʼ������S2 = ��ʼ�����ò�N3 * ���ߵ�ʱ�����N2;
	���ÿ�ʼ������S2.PrintProcessLog(4);
	DefineLangVar(int, ��׷����ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("5.���㹷׷����ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ��׷����ʱ��T1=���ÿ�ʼ������S2/���þ���֮��S1"));
	��׷����ʱ��T1 = ���ÿ�ʼ������S2 / ���þ���֮��S1;
	��׷����ʱ��T1.PrintProcessLog(5);
	DefineLangVar(int, ���ܵ��ܾ���S4, 0);
	ColPrintf(PrintfCol::����, Lang("6.���㹷�ܵ��ܾ���S4 ���ܵ��ܾ���S4=��׷����ʱ��T1*��ͬʱ�乷�߲���N6"));
	���ܵ��ܾ���S4 = ��׷����ʱ��T1 * ��ͬʱ�乷�߲���N6;
	���ܵ��ܾ���S4.PrintProcessLog(6);
}
void P11_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method Two Equation Hunting Dog Chasing Rabbit","P11�������������� �Թ�׷��"},
		{"Title: There is a rabbit 9 steps away from the hunting dog. The hunting dog is chasing after it. It\ntakes the rabbit 3 steps for the dog to walk 2 steps. The distance covered by the rabbit 9\nsteps is equal to the distance covered by the dog 5 steps. How many steps does the hunting dog run when it catches\nup with the rabbit?"
		,"��Ŀ��һֻ������80���󹷿�ʼ׷������9����ʱ�乷��5��������7����·�̵��ڹ���3���ľ��룬�Թ�׷������ʱ�ܶ��ٲ���"},
		{"Assuming that the distance between a hunting dog and a rabbit is GD and RD respectively, and that the hunting dog takes 80 rabbit steps to catch up with the rabbit, it takes GC1 step, while the rabbit takes RC1 step",
		"���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�80���ò�Զ׷��������Ҫgc1��������������rc1��"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 3/7=rd/gd",
		"2.����S1�õ�S2 3/7=rd/gd"},
		{"3. List the time relationship of equation S3 gc/rc1=(9/t)/(5/t)==>gc/rc1=9/5",
		"3.�г�ʽ��ʱ���ϵS3 gc/rc1=(9/t)/(5/t) ==> gc/rc1=9/5"},
		{"4. Enter the offset distance relationship S4 gd * gc1=rd * rc1+(80 * rd) based on the value of S3",
		"4.����S3����ֵ�����ƫ��·�̹�ϵS4 gd*gc1=rd*rc1+(80*rd)"},
		{"5. Divide the two sides of equation S4 by rd * rc1 and expand the equation to obtain S5 (gd * gc1)/(rd * rc1)=1+((80 * rd)/rd * rc1)",
		"5.��S4��ʽ���߳�rd*rc1��1չ��ʽ�ӵõ�S5 (gd*gc1)/(rd*rc1)=1+((80*rd)/rd*rc1)"},
		{"6. Substitute S2 and S3 into S5 to obtain S6 (7/5) * (3/9)=1+(240/(3 * rc1))==>35/27-1=240/(3 * rc1)",
		"6.��S2��S3����S5��ֵ����õ�S6 (7/5)*(3/9)=1+(240/(3*rc1)) ==> 35/27-1=240/(3*rc1)"},
		{"7. Simplify equation S6 to obtain S7 35/27-1=240/(3 * rc1)",
		"7.����ʽ��S6�õ�S7 35/27-1=240/(3*rc1)"},
		{"8. Simplify equation S7 to obtain S8 (35-27)/27=8/27=240/(3 * rc1)==>8/37=240/(3 * rc1)",
		"8.����ʽ��S7�õ�S8 (35-27)/27=8/27=240/(3*rc1) ==> 8/37=240/(3*rc1)"},
		{"9.Multiplying both sides by 5 yields S9 8/27 * 3=8/9=240/rc1",
		"9.S8����ͬ��5�õ�S9 8/27*3=8/9=240/rc1"},
		{"10. Simplify equation S9 to obtain S10 8rc1=240 * 9=2160",
		"10.����ʽ��S9�õ�S10 8rc1=240*9=2160"},
		{"11. Simplify equation S10 to obtain S11 rc1=2160/8=270",
		"11.����ʽ��S10�õ�S11 rc1=2160/8=270"},
		{"12. According to S3 and S11, obtain S12 gc1/270=5/9",
		"12.����S3��S11�õ�S12 gc1/270=5/9"},
		{"13. Simplify equation S12 to obtain S13, exchange 9gc1=5 * 270",
		"13.����ʽ��S12�õ�S13���� 9gc1=5*270"},
		{"14. Solve for gc1=150",
		"14.���gc gc1=150"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P11�������������� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һֻ������80���󹷿�ʼ׷������9����ʱ�乷��5��������7����·�̵��ڹ���3���ľ��룬�Թ�׷������ʱ�ܶ��ٲ���"));
	ColPrintf(PrintfCol::����, Lang("���Թ�һ���ľ���Ϊgd����һ���ľ���Ϊrd��  ���Թ�80���ò�Զ׷��������Ҫgc1��������������rc1��"));
	ColPrintf(PrintfCol::����, Lang("1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 3/7=rd/gd"));
	ColPrintf(PrintfCol::����, Lang("3.�г�ʽ��ʱ���ϵS3 gc/rc1=(9/t)/(5/t) ==> gc/rc1=9/5"));
	ColPrintf(PrintfCol::����, Lang("4.����S3����ֵ�����ƫ��·�̹�ϵS4 gd*gc1=rd*rc1+(80*rd)"));
	ColPrintf(PrintfCol::����, Lang("5.��S4��ʽ���߳�rd*rc1��1չ��ʽ�ӵõ�S5 (gd*gc1)/(rd*rc1)=1+((80*rd)/rd*rc1)"));
	ColPrintf(PrintfCol::����, Lang("6.��S2��S3����S5��ֵ����õ�S6 (7/5)*(3/9)=1+(240/(3*rc1)) ==> 35/27-1=240/(3*rc1)"));
	ColPrintf(PrintfCol::����, Lang("7.����ʽ��S6�õ�S7 35/27-1=240/(3*rc1)"));
	ColPrintf(PrintfCol::����, Lang("8.����ʽ��S7�õ�S8 (35-27)/27=8/27=240/(3*rc1) ==> 8/37=240/(3*rc1)"));
	ColPrintf(PrintfCol::����, Lang("9.S8����ͬ��5�õ�S9 8/27*3=8/9=240/rc1"));
	ColPrintf(PrintfCol::����, Lang("10.����ʽ��S9�õ�S10 8rc1=240*9=2160"));
	ColPrintf(PrintfCol::����, Lang("11.����ʽ��S10�õ�S11 rc1=2160/8=270"));
	ColPrintf(PrintfCol::����, Lang("12.����S3��S11�õ�S12 gc1/270=5/9"));
	ColPrintf(PrintfCol::����, Lang("13.����ʽ��S12�õ�S13���� 9gc1=5*270"));
	ColPrintf(PrintfCol::����, Lang("14.���gc gc1=150"));
}
void P11_4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Two Methods One Proportional Hunting olderBrother Chasing Rabbit","P11���̶�����һ���� �Թ�׷��"},
		{"Title: After running 80 steps, a youngerBrother is chased by a olderBrother. It takes the youngerBrother 9 steps for the olderBrother to\nwalk 5 steps, and the distance covered by the youngerBrother 7 steps is equal to the distance covered by the olderBrother 3 steps\nHow many steps does the hunting olderBrother run when it catches up with the youngerBrother?",
		"��Ŀ���ܵ���10�����翪ʼ׷���ܵ���4����ʱ������3�����ܵ�7����·�̵��ڸ����5���ľ��룬���׷�ϵܵ�ʱ�ܶ��ٲ���"},
		{"1. Use the minimum common multiple to determine how many steps the olderBrother and youngerBrother take before they meet",
		"1.����С������������͵ܵ��߶��ٲ���������·�̷ݣ�"},
		{"2. Use the minimum common multiple to determine how many steps the olderBrother and youngerBrother will take before meeting (time period)",
		"2.����С������������͵ܵ��߶��ٲ���������ʱ��ݣ�"},
		{"3. Calculate the difference between the total number of dogs and rabbits S1=the distance traveled by the olderBrother N1- the distance traveled by the youngerBrother N2",
		"3.������ܵ��ܷ���֮��S1 ���ܵ��ܷ���֮��S1=����ߵľ������N1-�ܵ��ߵľ������N2"},
		{"4. Calculate the total number of parts S2 that the olderBrother and youngerBrother started to be apart from each other. S2=olderBrother steps N3 * youngerBrother walking time N2",
		"4.������ܵܿ�ʼ����ܷ���S2 ���ܵܿ�ʼ����ܷ���S2=��ʼ���ĸ�粽N3*�ܵ��ߵ�ʱ�����N2"},//**
		{"5. Calculate the time T1 for the olderBrother to catch up with the youngerBrother (this time unit is not fixed but the rate of progress is the same). The time T1 for\nthe olderBrother to catch up with the youngerBrother is equal to the difference S1 between the distance S2 and the distance S1 between the olderBrother and the youngerBrother",
		"5.������׷�ϵܵ�ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ���׷�ϵܵ�ʱ��T1=���ܵܿ�ʼ������S2/���ܾܵ���֮��S1"},
		{"6. Calculate the total distance traveled by the olderBrother S4=the time it takes for the olderBrother to catch up with the youngerBrother T1 * the number of steps taken by the olderBrother at the same time N6",
		"6.�������ܵ��ܾ���S4 ����ܵ��ܾ���S4=���׷�ϵܵ�ʱ��T1*��ͬʱ�����߲���N6"},

		//������
		{"DistanceTraveledByBrotherN1","����ߵľ������N1"},
		{"DistanceTraveledByYoungerBrotherN2","�ܵ��ߵľ������N2"},
		{"StepN3OfTheYoungerBrotherWhoStartedToDistanceThemselves","��ʼ���ĵܵܲ�N3"},
		{"MyYoungerBrotherWalkedN4StepsOnTheSameJourney","��ͬ·�̵ܵ��߲���N4"},
		{"MyYoungerBrotherWalkedN4StepsAtTheSameTime","��ͬʱ��ܵ��߲���N4"},
		{"Brother'sStepCountAtTheSameTimeIsN5","��ͬʱ�����߲���N5"},
		{"DistanceDifferenceBetweenOlderBrotherAndYoungerBrotherS1","���ܾܵ���֮��S1"},
		{"BrotherAndBrotherStartToDistanceS2","���ܵܿ�ʼ������S2"},
		{"BrotherCatchingUpWithBrotherTimeT1","���׷�ϵܵ�ʱ��T1"},
		{"TheTotalDistanceCoveredByMyYoungerBrotherIsS3","�ܵ��ܵ��ܾ���S3"},
		{"BrotherRanATotalDistanceOfS4","����ܵ��ܾ���S4"},
		{"MinimumMultiplierFactor","��С������"},
		{"BrotherTookN5StepsOnTheSameJourney","��ͬ·�̸���ߵĲ���N5"},
		{"NumberOfTimesMyBrotherLeftN1","����ߵ�ʱ�����N1"},
		{"NumberOfTimesMyYoungerBrotherLeftN2","�ܵ��ߵ�ʱ�����N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ʼ���ĵܵܲ�N3, 10);
	DefineLangVarInt(��ͬ·�̵ܵ��߲���N4, 7);
	DefineLangVarInt(��ͬ·�̸���ߵĲ���, 5);
	DefineLangVarInt(��ͬʱ��ܵ��߲���N5, 4);
	DefineLangVarInt(��ͬʱ�����߲���N6, 3);
	ColPrintf(PrintfCol::����, Lang("P11���̶�����һ���� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ܵ���10�����翪ʼ׷���ܵ���4����ʱ������3�����ܵ�7����·�̵��ڸ����5���ľ��룬���׷�ϵܵ�ʱ�ܶ��ٲ���"));
	DefineLangVarInt(����ߵľ������N1, 0);
	DefineLangVarInt(�ܵ��ߵľ������N2, 0);
	ColPrintf(PrintfCol::����, Lang("1.����С������������͵ܵ��߶��ٲ���������·�̷ݣ�"));
	DefineLangVarInt(��С������, MinCommonMultiple(��ͬ·�̵ܵ��߲���N4.Var, ��ͬ·�̸���ߵĲ���.Var));
	����ߵľ������N1 = (��С������ / ��ͬ·�̸���ߵĲ���) * ��ͬʱ�����߲���N6;
	�ܵ��ߵľ������N2 = (��С������ / ��ͬ·�̵ܵ��߲���N4) * ��ͬʱ��ܵ��߲���N5;
	����ߵľ������N1.PrintProcessLog(1);
	�ܵ��ߵľ������N2.PrintProcessLog(1);
	DefineLangVarInt(����ߵ�ʱ�����N1, 0);
	DefineLangVarInt(�ܵ��ߵ�ʱ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����С������������͵ܵ��߶��ٲ���������ʱ��ݣ�"));
	����ߵ�ʱ�����N1 = ��С������ / ��ͬ·�̸���ߵĲ���;
	�ܵ��ߵ�ʱ�����N2 = ��С������ / ��ͬ·�̵ܵ��߲���N4;
	����ߵ�ʱ�����N1.PrintProcessLog(2);
	�ܵ��ߵ�ʱ�����N2.PrintProcessLog(2);
	DefineLangVar(int, ���ܾܵ���֮��S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.������ܵ��ܷ���֮��S1 ���ܵ��ܷ���֮��S1=����ߵľ������N1-�ܵ��ߵľ������N2"));
	���ܾܵ���֮��S1 = ����ߵľ������N1 - �ܵ��ߵľ������N2;
	���ܾܵ���֮��S1.PrintProcessLog(3);
	DefineLangVar(int, ���ܵܿ�ʼ������S2, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ܵܿ�ʼ����ܷ���S2 ���ܵܿ�ʼ����ܷ���S2=��ʼ���ĸ�粽N3*�ܵ��ߵ�ʱ�����N2"));
	���ܵܿ�ʼ������S2 = ��ʼ���ĵܵܲ�N3 * �ܵ��ߵ�ʱ�����N2;
	���ܵܿ�ʼ������S2.PrintProcessLog(4);
	DefineLangVar(int, ���׷�ϵܵ�ʱ��T1, 0);
	ColPrintf(PrintfCol::����, Lang("5.������׷�ϵܵ�ʱ��T1(���ʱ�䵥λ���ǹ̶��ĵ�������ͬ) ���׷�ϵܵ�ʱ��T1=���ܵܿ�ʼ������S2/���ܾܵ���֮��S1"));
	���׷�ϵܵ�ʱ��T1 = ���ܵܿ�ʼ������S2 / ���ܾܵ���֮��S1;
	���׷�ϵܵ�ʱ��T1.PrintProcessLog(5);
	DefineLangVar(int, ����ܵ��ܾ���S4, 0);
	ColPrintf(PrintfCol::����, Lang("6.�������ܵ��ܾ���S4 ����ܵ��ܾ���S4=���׷�ϵܵ�ʱ��T1*��ͬʱ�����߲���N6"));
	����ܵ��ܾ���S4 = ���׷�ϵܵ�ʱ��T1 * ��ͬʱ�����߲���N6;
	����ܵ��ܾ���S4.PrintProcessLog(6);
}
void P11_4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P11 Consolidation Method Two Equation Hunting Dog Chasing Rabbit","P11���̶����������� �Թ�׷��"},
		{"Title: There is a youngerBrother 9 steps away from the hunting oldBrother. The hunting oldBrother is chasing after it. It\ntakes the youngerBrother 3 steps for the oldBrother to walk 2 steps. The distance covered by the youngerBrother 9\nsteps is equal to the distance covered by the oldBrother 5 steps. How many steps does the hunting oldBrother run when it catches\nup with the youngerBrother?"
		,"��Ŀ���ܵ���10�����翪ʼ׷���ܵ���4����ʱ������3�����ܵ�7����·�̵��ڸ����5���ľ��룬���׷�ϵܵ�ʱ�ܶ��ٲ���"},
		{"Let the distance of one step for the older brother be GD, the distance of one step for\Nthe younger brother be RD, and let the distance of ten steps for the older brother be GC1 to catch up with the younger brother,\Nwhile the distance of one step for the older brother is RC1",
		"����һ���ľ���Ϊgd���ܵ�һ���ľ���Ϊrd��  ����10���ܵܲ�Զ׷�ϵܵ���Ҫgc1�������������rc1��"},
		{"1. Based on the same distance, derive the formula for the distance relationship S1: gc * gd=rc * rd",
		"1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"},
		{"2. Transform S1 to obtain S2 5/7=rd/gd",
		"2.����S1�õ�S2 5/7=rd/gd"},
		{"3. List the time relationship between equation S3 gc/rc1=(3/t)/(4/t)==>gc/rc1=3/4",
		"3.�г�ʽ��ʱ���ϵS3 gc/rc1=(3/t)/(4/t) ==> gc/rc1=3/4"},
		{"4. Enter the offset distance relationship S4 gd * gc1=rd * rc1+(10 * rd) based on the value of S3",
		"4.����S3����ֵ�����ƫ��·�̹�ϵS4 gd*gc1=rd*rc1+(10*rd)"},
		{"5. Divide the two sides of equation S4 by rd * rc1 and expand the equation to obtain S5 (gd * gc1)/(rd * rc1)=1+((10 * rd)/rd * rc1)",
		"5.��S4��ʽ���߳�rd*rc1��1չ��ʽ�ӵõ�S5 (gd*gc1)/(rd*rc1)=1+((10*rd)/rd*rc1)"},
		{"6. Substitute S2 and S3 into S5 to obtain S6 (7 * 3)/(5 * 4)=1+(50/(5 * rc1))==>21/20-1=50/(5 * rc1)",
		"6.��S2��S3����S5��ֵ����õ�S6 (7*3)/(5*4)=1+(50/(5*rc1)) ==> 21/20-1=50/(5*rc1)"},
		{"7. Simplify equation S6 to obtain S7 21/10-1=50/(5 * rc1)",
		"7.����ʽ��S6�õ�S7 21/20-1=50/(5*rc1)"},
		{"8. Simplify equation S7 to obtain S8 (21-20)/20=1/20=50/(5 * rc1)==>1/20=50/(5 * rc1)",
		"8.����ʽ��S7�õ�S8 (21-20)/20=1/20=50/(5*rc1) ==> 1/20=50/(5*rc1)"},
		{"9.Multiplying both sides by 5 yields S9 1/20 * 5=1/4=50/rc1",
		"9.S8����ͬ��5�õ�S9 1/20*5=1/4=50/rc1"},
		{"10. Simplify equation S9 to obtain S10 rc1=50 * 4=200",
		"10.����ʽ��S9�õ�S10 rc1=50*4=200"},
		{"11. Simplify equation S10 to obtain S11 rc1=200",
		"11.����ʽ��S10�õ�S11 rc1=200"},
		{"12. According to S3 and S11, obtain S12 gc1/200=3/4",
		"12.����S3��S11�õ�S12 gc1/200=3/4"},
		{"13. Simplify equation S12 to obtain S13, exchange 4Gc1=3 * 200",
		"13.����ʽ��S12�õ�S13���� 4gc1=3*200"},
		{"14. Solve for gc1=150",
		"14.���gc gc1=150"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P11���̶����������� �Թ�׷��"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���ܵ���10�����翪ʼ׷���ܵ���4����ʱ������3�����ܵ�7����·�̵��ڸ����5���ľ��룬���׷�ϵܵ�ʱ�ܶ��ٲ���"));
	ColPrintf(PrintfCol::����, Lang("����һ���ľ���Ϊgd���ܵ�һ���ľ���Ϊrd��  ����10���ܵܲ�Զ׷�ϵܵ���Ҫgc1�������������rc1��"));
	ColPrintf(PrintfCol::����, Lang("1.����·����ͬ�ó��г�ʽ��·�̹�ϵS1 gc*gd=rc*rd"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 5/7=rd/gd"));
	ColPrintf(PrintfCol::����, Lang("3.�г�ʽ��ʱ���ϵS3 gc/rc1=(3/t)/(4/t) ==> gc/rc1=3/4"));
	ColPrintf(PrintfCol::����, Lang("4.����S3����ֵ�����ƫ��·�̹�ϵS4 gd*gc1=rd*rc1+(10*rd)"));
	ColPrintf(PrintfCol::����, Lang("5.��S4��ʽ���߳�rd*rc1��1չ��ʽ�ӵõ�S5 (gd*gc1)/(rd*rc1)=1+((10*rd)/rd*rc1)"));
	ColPrintf(PrintfCol::����, Lang("6.��S2��S3����S5��ֵ����õ�S6 (7*3)/(5*4)=1+(50/(5*rc1)) ==> 21/20-1=50/(5*rc1)"));
	ColPrintf(PrintfCol::����, Lang("7.����ʽ��S6�õ�S7 21/20-1=50/(5*rc1)"));
	ColPrintf(PrintfCol::����, Lang("8.����ʽ��S7�õ�S8 (21-20)/20=1/20=50/(5*rc1) ==> 1/20=50/(5*rc1)"));
	ColPrintf(PrintfCol::����, Lang("9.S8����ͬ��5�õ�S9 1/20*5=1/4=50/rc1"));
	ColPrintf(PrintfCol::����, Lang("10.����ʽ��S9�õ�S10 rc1=50*4=200"));
	ColPrintf(PrintfCol::����, Lang("11.����ʽ��S10�õ�S11 rc1=200"));
	ColPrintf(PrintfCol::����, Lang("12.����S3��S11�õ�S12 gc1/200=3/4"));
	ColPrintf(PrintfCol::����, Lang("13.����ʽ��S12�õ�S13���� 4gc1=3*200"));
	ColPrintf(PrintfCol::����, Lang("14.���gc gc1=150"));
}
void P11()
{
	P11_1_1();
	ColPrintf(PrintfCol::����, "");
	P11_1_2();
	ColPrintf(PrintfCol::����, "");
	P11_2_1();
	ColPrintf(PrintfCol::����, "");
	P11_2_2();
	ColPrintf(PrintfCol::����, "");
	P11_3_1();
	ColPrintf(PrintfCol::����, "");
	P11_3_2();
	ColPrintf(PrintfCol::����, "");
	P11_4_1();
	ColPrintf(PrintfCol::����, "");
	P11_4_2();
	ColPrintf(PrintfCol::����, "");
	/*P3_3();
	ColPrintf(PrintfCol::����, "");*/
}
void P11_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P11();
	Lang.SetCurLanguage(LanguageLib::English);
	P11();
	ColPrintf(PrintfCol::����, "");

}