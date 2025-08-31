#pragma once
void P84_1()
{
	LanguageLib::LanguageTableT Language = { 
		{"P84 Case 1: Cattle grazing problem","P84 例一 牛吃草问题"},
		{"Title: There is a pasture in Qingqing with a lot of grass. 27 cows are grazed and the grass is eaten up in 6 weeks. 23 cows are grazed and the grass is eaten up in 9 weeks. If 21 cows are grazed, the grass will be eaten up in a few days.",
		"题目：青青有一个牧场，牧场里有很多草，放牛27只，6周把草吃光，放牛23，9周吃完，如果养21牛，牧草几天吃完。"},
		{"1. Calculate the number of grazing for 27 cows N1=27 cows N2 * 27 cows grazing time T1",
		"1.计算牛27只食草数N1 牛27只食草数N1=牛27只N2*牛27只吃草时间T1"},
		{"2. Calculate the number of grazing for 23 cows N2=23 cows N2 * 23 cows grazing time T2",
		"2.计算牛23只食草数N2 牛23只食草数N2=牛23只N2*牛23只吃草时间T2"},
		{"3. Calculate the rate of grass growth V1. The rate of grass growth V1 is calculated as (the number of grass fed by 27 cows N1- the number of grass fed by 23 cows N2) divided by (the grazing time of 27 cows T1- the grazing time of 23 cows T2)",
		"3.计算生草数速度V1 生草数速度V1=(牛27只食草数N1-牛23只食草数N2)/(牛27只吃草时间T1-牛23只吃草时间T2)"},
		{"4. Calculate the original grass amount N3. The original grass amount N3 is equal to the number of 27 cows feeding on grass N1 divided by the grazing time T1 of 27 cows multiplied by the grass growth rate V1",
		"4.计算原有草量N3 原有草量N3=牛27只食草数N1-(牛27只吃草时间T1*生草数速度V1)"},
		{"5. Set 21 cows to be eaten in x days",
		"5.设21头牛x天吃完"},
		{"1. List the equation S1 72+(15x)=21x",
		"1.列出式子S1 72+(15x)=21x"},
		{"2. Simplify S1 to obtain S2 21x-15x=72",
		"2.化简S1得到S2 21x-15x=72"},
		{"3. Simplify S2 to obtain S3 6x=72",
		"3.化简S2得到S3 6x=72"},
		{"4. Simplify S3 to obtain S4 x=12",
		"4.化简S3得到S4 x=12"},
		//变量表
		{"27cowsN2","牛27只N2"},
		{"27cowsgrazingtimeT1","牛27只吃草时间T1"},
		{"23cowsN2","牛23只N2"},
		{"23cowsgrazingtimeT2","牛23只吃草时间T2"},
		{"27cowsfeedingongrassN1","牛27只食草数N1"},
		{"23herbivoresN2","牛23只食草数N2"},
		{"GrassgrowthrateV1","生草数速度V1"},
		{"OriginalgrassquantityN3","原有草量N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(牛27只N2, 27);
	DefineLangVarInt(牛27只吃草时间T1, 6);
	DefineLangVarInt(牛23只N2, 23);
	DefineLangVarInt(牛23只吃草时间T2, 9);
	ColPrintf(PrintfCol::标题, Lang("P84 例一 牛吃草问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：青青有一个牧场，牧场里有很多草，放牛27只，6周把草吃光，放牛23，9周吃完，如果养21牛，牧草几天吃完。"));
	DefineLangVarInt(牛27只食草数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算牛27只食草数N1 牛27只食草数N1=牛27只N2*牛27只吃草时间T1"));
	牛27只食草数N1 = 牛27只N2 * 牛27只吃草时间T1;
	牛27只食草数N1.PrintProcessLog(1);
	DefineLangVarInt(牛23只食草数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算牛23只食草数N2 牛23只食草数N2=牛23只N2*牛23只吃草时间T2"));
	牛23只食草数N2 = 牛23只N2 * 牛23只吃草时间T2;
	牛23只食草数N2.PrintProcessLog(2);
	DefineLangVarInt(生草数速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算生草数速度V1 生草数速度V1=(牛27只食草数N1-牛23只食草数N2)/(牛27只吃草时间T1-牛23只吃草时间T2)"));
	生草数速度V1 = (牛27只食草数N1 - 牛23只食草数N2) / (牛27只吃草时间T1 - 牛23只吃草时间T2);
	生草数速度V1.PrintProcessLog(3);
	DefineLangVarInt(原有草量N3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算原有草量N3 原有草量N3=牛27只食草数N1-(牛27只吃草时间T1*生草数速度V1)"));
	原有草量N3 = 牛27只食草数N1 - (牛27只吃草时间T1 * 生草数速度V1);
	原有草量N3.PrintProcessLog(4);
	ColPrintf(PrintfCol::方法, Lang("5.设21头牛x天吃完"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 72+(15x)=21x"));
	ColPrintf(PrintfCol::方法, Lang("2.化简S1得到S2 21x-15x=72"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 6x=72"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 x=12"));
}
void P84_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P84 Example One Variation Practice on Cattle Eating Grass Problem","P84 例一变式练习 牛吃草问题"},
		{"Title: There is a lot of grass in the pasture. If you herd 10 cows, it will take 20 days to finish the grass. If you herd 15 cows, it will take 10 days to finish the grass. If you herd 25 cows, it will take a few days to finish the grass.",
		"题目：牧场里有很多草，放牛10只，20天把草吃光，放牛15，10天吃完，如果养25牛，牧草几天吃完。"},
		{"1. Calculate the number of grazing for 10 cows N1=10 cows N2 * 10 cows grazing time T1",
		"1.计算牛10只食草数N1 牛10只食草数N1=牛10只N2*牛10只吃草时间T1"},
		{"2. Calculate the number of grazing for 15 cows N2=15 cows N2 * 15 cows grazing time T2",
		"2.计算牛15只食草数N2 牛15只食草数N2=牛15只N2*牛15只吃草时间T2"},
		{"3. Calculate the rate of grass growth V1. The rate of grass growth V1 is calculated as (the number of grass fed by 10 cows N1- the number of grass fed by 15 cows N2) divided by (the grazing time of 10 cows T1- the grazing time of 15 cows T2)",
		"3.计算生草数速度V1 生草数速度V1=(牛10只食草数N1-牛15只食草数N2)/(牛10只吃草时间T1-牛15只吃草时间T2)"},
		{"4. Calculate the original grass amount N3. The original grass amount N3 is equal to the number of 10 cows feeding on grass N1 divided by the grazing time T1 of 10 cows multiplied by the grass growth rate V1",
		"4.计算原有草量N3 原有草量N3=牛10只食草数N1-(牛10只吃草时间T1*生草数速度V1)"},
		{"5. Set 25 cows to be eaten in x days",
		"5.设25头牛x天吃完"},
		{"1. List the equation S1 100+(5x)=25x",
		"1.列出式子S1 100+(5x)=25x"},
		{"2. Simplify S1 to obtain S2 25x-5x=100",
		"2.化简S1得到S2 25x-5x=100"},
		{"3. Simplify S2 to obtain S3 20x=100",
		"3.化简S2得到S3 20x=100"},
		{"4. Simplify S3 to obtain S4 x=5",
		"4.化简S3得到S4 x=5"},
		//变量表
		{"10cowsN2","牛10只N2"},
		{"10cowsgrazingtimeT1","牛10只吃草时间T1"},
		{"15cowsN2","牛15只N2"},
		{"15cowsgrazingtimeT2","牛15只吃草时间T2"},
		{"10cowsfeedingongrassN1","牛10只食草数N1"},
		{"15herbivoresN2","牛15只食草数N2"},
		{"GrassgrowthrateV1","生草数速度V1"},
		{"OriginalgrassquantityN3","原有草量N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(牛10只N2, 10);
	DefineLangVarInt(牛10只吃草时间T1, 20);
	DefineLangVarInt(牛15只N2, 15);
	DefineLangVarInt(牛15只吃草时间T2, 10);
	ColPrintf(PrintfCol::标题, Lang("P84 例一 牛吃草问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：牧场里有很多草，放牛10只，20天把草吃光，放牛15，10天吃完，如果养25牛，牧草几天吃完。"));
	DefineLangVarInt(牛10只食草数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算牛10只食草数N1 牛10只食草数N1=牛10只N2*牛10只吃草时间T1"));
	牛10只食草数N1 = 牛10只N2 * 牛10只吃草时间T1;
	牛10只食草数N1.PrintProcessLog(1);
	DefineLangVarInt(牛15只食草数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算牛15只食草数N2 牛15只食草数N2=牛15只N2*牛15只吃草时间T2"));
	牛15只食草数N2 = 牛15只N2 * 牛15只吃草时间T2;
	牛15只食草数N2.PrintProcessLog(2);
	DefineLangVarInt(生草数速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算生草数速度V1 生草数速度V1=(牛10只食草数N1-牛15只食草数N2)/(牛10只吃草时间T1-牛15只吃草时间T2)"));
	生草数速度V1 = (牛10只食草数N1 - 牛15只食草数N2) / (牛10只吃草时间T1 - 牛15只吃草时间T2);
	生草数速度V1.PrintProcessLog(3);
	DefineLangVarInt(原有草量N3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算原有草量N3 原有草量N3=牛10只食草数N1-(牛10只吃草时间T1*生草数速度V1)"));
	原有草量N3 = 牛10只食草数N1 - (牛10只吃草时间T1 * 生草数速度V1);
	原有草量N3.PrintProcessLog(4);
	ColPrintf(PrintfCol::方法, Lang("5.设25头牛x天吃完"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 100+(5x)=25x"));
	ColPrintf(PrintfCol::方法, Lang("2.化简S1得到S2 25x-5x=100"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 20x=100"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 x=5"));
}
void P84_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P84 Case 2: Cattle grazing problem","P84 例二 牛吃草问题"},
		{"Title: When a ship discovers a leak, some water has already entered the ship at a constant speed. If 6 people are sent to clean the water outside, it will take 18 hours. If 10 people are sent, it will take 6 hours. If 6 people are sent to clean the water in the first 3 hours, how many more hours will it take to send another 10 people?",
		"题目：一只船发现漏水时，已进了一些水，水匀速进入船中，如果派6个人往外淘水，要18小时，如果10个人，要6小时，如果前3个小时6人淘水，后面再派10个人还要多少个小时?"},
		{"1. Calculate the amount of water spent by ten people N1=ten people N2 * ten people spend time T1",
		"1.计算十人淘水量N1 十人淘水量N1=十人N2*十人淘水需要时间T1"},
		{"2. Calculate the amount of water collected by six people N2=the amount of water collected by six people N4 * the time required for six people to collect water T2",
		"2.计算六人淘水量N2 六人淘水量N2=六人N4*六人淘水需要时间T2"},
		{"3. Calculate the inflow velocity V1. The inflow velocity V1 is calculated as (the amount of water collected by six people N2 minus the amount of water collected by ten people N1) divided by (the time required for six people to collect water T2 minus the time required for ten people to collect water T1)",
		"3.计算进水速度V1 进水速度V1=(六人淘水量N2-十人淘水量N1)/(六人淘水需要时间T2-十人淘水需要时间T1)"},
		{"4. Calculate the original water volume N6, which is equal to the amount of water collected by ten people N1 divided by (the time required for ten people to collect water T1 multiplied by the inflow velocity V1)",
		"4.计算原有的水量N6 原有的水量N6=十人淘水量N1-(十人淘水需要时间T1*进水速度V1)"},
		{"5. Calculate the amount N7 of six people who first washed water and then washed water. The amount N7 of six people who washed water first and then=(original water amount N6+(water inlet speed V1 * time T1 of first washing) - (time T1 of first washing * time N4 of six people)",
		"5.计算六人先淘水后的量N7 六人先淘水后的量N7=(原有的水量N6+(进水速度V1*先淘的时间T1))-(先淘的时间T1*六人N4)"},
		{"6. Calculate the amount of water collected by sixteen people N8=the amount of water collected by six people first and then N7/(ten people N2+six people N4- inflow velocity V1)",
		"6.计算十六人淘水量N8 十六人淘水量N8=六人先淘水后的量N7/(十人N2+六人N4-进水速度V1)"},
		//变量表
		{"TenpeopleN2","十人N2"},
		{"TenpeopleneedtimetosearchforwaterT1","十人淘水需要时间T1"},
		{"SixpeopleN4","六人N4"},
		{"SixpeopleneedtimetosearchforwaterT2","六人淘水需要时间T2"},
		{"TimeT1forfirstshopping","先淘的时间T1"},
		{"Tenpeople'swaterconsumptionN1","十人淘水量N1"},
		{"SixpeoplewashingwaterN2","六人淘水量N2"},
		{"InletvelocityV1","进水速度V1"},
		{"TheoriginalwatervolumeN6","原有的水量N6"},
		{"TheamountofwatercollectedbysixpeoplefirstisN7","六人先淘水后的量N7"},
		{"SixteenpeopleshoppingforwaterN8","十六人淘水量N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarFloat(十人N2, 10);
	DefineLangVarFloat(十人淘水需要时间T1, 6);
	DefineLangVarFloat(六人N4, 6);
	DefineLangVarFloat(六人淘水需要时间T2, 18);
	DefineLangVarFloat(先淘的时间T1, 3);
	ColPrintf(PrintfCol::标题, Lang("P84 例二 牛吃草问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一只船发现漏水时，已进了一些水，水匀速进入船中，如果派6个人往外淘水，要18小时，如果10个人，要6小时，如果前3个小时6人淘水，后面再派10个人还要多少个小时?"));
	DefineLangVarFloat(十人淘水量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算十人淘水量N1 十人淘水量N1=十人N2*十人淘水需要时间T1"));
	十人淘水量N1 = 十人N2 * 十人淘水需要时间T1;
	十人淘水量N1.PrintProcessLog(1);
	DefineLangVarFloat(六人淘水量N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算六人淘水量N2 六人淘水量N2=六人N4*六人淘水需要时间T2"));
	六人淘水量N2 = 六人N4 * 六人淘水需要时间T2;
	六人淘水量N2.PrintProcessLog(2);
	DefineLangVarFloat(进水速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算进水速度V1 进水速度V1=(六人淘水量N2-十人淘水量N1)/(六人淘水需要时间T2-十人淘水需要时间T1)"));
	进水速度V1 = (六人淘水量N2 - 十人淘水量N1) / (六人淘水需要时间T2 - 十人淘水需要时间T1);
	进水速度V1.PrintProcessLog(3);
	DefineLangVarFloat(原有的水量N6, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算原有的水量N6 原有的水量N6=十人淘水量N1-(十人淘水需要时间T1*进水速度V1)"));
	原有的水量N6 = 十人淘水量N1 - (十人淘水需要时间T1 * 进水速度V1);
	原有的水量N6.PrintProcessLog(4);
	DefineLangVarFloat(六人先淘水后的量N7, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算六人先淘水后的量N7 六人先淘水后的量N7=(原有的水量N6+(进水速度V1*先淘的时间T1))-(先淘的时间T1*六人N4)"));
	六人先淘水后的量N7 = (原有的水量N6 + (进水速度V1 * 先淘的时间T1)) - (先淘的时间T1 * 六人N4);
	六人先淘水后的量N7.PrintProcessLog(5);
	DefineLangVarFloat(十六人淘水量N8, 0);
	ColPrintf(PrintfCol::方法, Lang("6.计算十六人淘水量N8 十六人淘水量N8=六人先淘水后的量N7/(十人N2+六人N4-进水速度V1)"));
	十六人淘水量N8 = 六人先淘水后的量N7 / (十人N2 + 六人N4 - 进水速度V1);
	十六人淘水量N8.PrintProcessLog(5);
}
void P84_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P84 Cases of Three Cattle Eating Grass Problem","P84 例三 牛吃草问题"},
		{"Title: Before ticket checking at the station, there are several passengers waiting. It takes 30 minutes for 4 ticket checking machines, 20 minutes for 5 ticket checking machines, and how many minutes for 7 ticket checking machines?",
		"题目：车站检票前就有若干名乘客等待，4个检票机要30分钟，5个检票机要20分钟，7个检票机要多少分钟?"},
		{"1. Calculate the processing quantity N1 of the five ticket checking machines. The processing quantity N1 of the five ticket checking machines is equal to the N2 of the five ticket checking machines multiplied by the time T1 of the five ticket checking machines",
		"1.计算五检票机处理数量N1 五检票机处理数量N1=五检票机N2*五检票机时间T1"},
		{"2. Calculate the processing quantity N1 of the four ticket checking machines. The processing quantity N1 of the four ticket checking machines is equal to the four ticket checking machines N2 multiplied by the four ticket checking machine time T1",
		"2.计算四检票机处理数量N1 四检票机处理数量N1=四检票机N2*四检票机时间T1"},
		{"3. Calculate the entry speed V1. Entry speed V1=(number of ticket machines processed by four ticket machines N1- number of ticket machines processed by five ticket machines N1)/(time of four ticket machines T1- time of five ticket machines T1)",
		"3.计算进入速度V1 进入速度V1=(四检票机处理数量N1-五检票机处理数量N1)/(四检票机时间T1-五检票机时间T1)"},
		{"4. Calculate the original number of people N6=Five ticket checking machine processing quantity N1- (entry speed V1 * Five ticket checking machine time T1)",
		"4.计算原有人数N6 原有人数N6=五检票机处理数量N1-(进入速度V1*五检票机时间T1)"},
		{"5. Calculation requires time T2=original number of people N6/(seven ticket checking machines N2- entry speed V1)",
		"5.计算需要时间T2 需要时间T2=原有人数N6/(七检票机N2-进入速度V1)"},
		//变量表
		{"FiveticketcheckingmachinesN2","五检票机N2"},
		{"FiveticketcheckingmachinetimeT1","五检票机时间T1"},
		{"FourticketcheckingmachinesN2","四检票机N2"},
		{"TicketcheckingmachinetimeT1","四检票机时间T1"},
		{"SeventicketcheckingmachineN2","七检票机N2"},
		{"NumberofticketcheckingmachinesprocessedN1","五检票机处理数量N1"},
		{"NumberofticketcheckingmachinesprocessedN1","四检票机处理数量N1"},
		{"EnteringspeedV1","进入速度V1"},
		{"OriginalnumberN6","原有人数N6"},
		{"TimerequiredT2","需要时间T2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarFloat(五检票机N2, 5);
	DefineLangVarFloat(五检票机时间T1, 20);
	DefineLangVarFloat(四检票机N2, 4);
	DefineLangVarFloat(四检票机时间T1, 30);
	DefineLangVarFloat(七检票机N2, 7);
	ColPrintf(PrintfCol::标题, Lang("P84 例三 牛吃草问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：车站检票前就有若干名乘客等待，4个检票机要30分钟，5个检票机要20分钟，7个检票机要多少分钟?"));
	DefineLangVarFloat(五检票机处理数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算五检票机处理数量N1 五检票机处理数量N1=五检票机N2*五检票机时间T1"));
	五检票机处理数量N1 = 五检票机N2 * 五检票机时间T1;
	五检票机处理数量N1.PrintProcessLog(1);
	DefineLangVarFloat(四检票机处理数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算四检票机处理数量N1 四检票机处理数量N1=四检票机N2*四检票机时间T1"));
	四检票机处理数量N1 = 四检票机N2 * 四检票机时间T1;
	四检票机处理数量N1.PrintProcessLog(2);
	DefineLangVarFloat(进入速度V1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算进入速度V1 进入速度V1=(四检票机处理数量N1-五检票机处理数量N1)/(四检票机时间T1-五检票机时间T1)"));
	进入速度V1 = (四检票机处理数量N1 - 五检票机处理数量N1) / (四检票机时间T1 - 五检票机时间T1);
	进入速度V1.PrintProcessLog(3);
	DefineLangVarFloat(原有人数N6, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算原有人数N6 原有人数N6=五检票机处理数量N1-(进入速度V1*五检票机时间T1)"));
	原有人数N6 = 五检票机处理数量N1 - (进入速度V1 * 五检票机时间T1);
	原有人数N6.PrintProcessLog(4);
	DefineLangVarFloat(需要时间T2, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算需要时间T2 需要时间T2=原有人数N6/(七检票机N2-进入速度V1)"));
	需要时间T2 = 原有人数N6 / (七检票机N2 - 进入速度V1);
	需要时间T2.PrintProcessLog(5);
}
void P84()
{
	P84_1();
	ColPrintf(PrintfCol::方法, "");
	P84_2();
	ColPrintf(PrintfCol::方法, "");
	P84_3();
	ColPrintf(PrintfCol::方法, "");
	P84_4();
	ColPrintf(PrintfCol::方法, "");
	//P77_4();
	ColPrintf(PrintfCol::方法, "");
	//P77_5();
	ColPrintf(PrintfCol::方法, "");
}
void P84_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P84();
	Lang.SetCurLanguage(LanguageLib::English);
	P84();
	ColPrintf(PrintfCol::方法, "");

}