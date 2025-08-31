#pragma once
void P23_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P23 Example 1","P23 例一"},
		{"A and B are walking towards each other and will meet in 10 hours. \nIf they walk an additional 10 kilometers per hour and meet 16 kilometers from the midpoint after 8 hours, it is known that A is faster than B. What was A's original speed?",
		"甲乙两人相向而行，10小时后相遇，若两人每小时多走10千米，8小时后离中点16千米相遇，已知甲比乙快，甲原来的速度是多少?"},
		{"1. Calculate the distance traveled by A over B=the distance traveled by B less+the distance traveled by A over B",
		"1.计算甲比乙多走路程S 甲比乙多走路程S=乙少走的路程S+甲多走的路程S"},
		{"2. Calculate the speed of A compared to B, and the speed of A compared to B equals the distance difference between A and B divided by time",
		"2.计算甲比乙多多的速度V 甲比乙多多的速度V=甲比乙多走路程S/时间T" },
		{"3. Calculate the distance traveled by two people per hour. The distance traveled by two people per hour is \nequal to 2 times the distance traveled per hour",
		"3.计算两人每小时多走路程S 两人每小时多走路程S=2*每小时多走路程S"},
		{"4.Calculate the total extra distance traveled by two people=extra distance traveled by two people per hour *  time",
		"4.计算两人总共多走的路程S 两人总共多走的路程S=两人每小时多走路程S*时间T"},
		{"5. Calculate the original speed of two people per hour and the sum of their original speeds per hour=the total distance traveled by two people divided by (original time - time)",
		"5.计算两人每小时原速度和V 两人每小时原速度和V=两人总共多走的路程V/(原时间T-时间T)"},
		{"6. Calculate the speed of A=(the original speed of two people per hour plus the speed of A compared to B)/number of people",
		"6.计算甲速度 甲速度V=（两人每小时原速度和V+甲比乙多多的速度V）/人数"},
		//变量表
		{"OriginalTime","原时间T"},
		{"CurrentExtraHourlySpeed","每小时多走路程S"},
		{"Time","时间T"},
		{"TheDistanceFromTheMidpointWhenMeeting","相遇时距离中点的路S程"},
		{"ATravelsMoreDistanceThanB","甲比乙多走路程S"},
		{"AIsFasterThanBDuo","甲比乙多多的速度V"},
		{"TwoPeopleWalkMoreDistancesPerHour","两人每小时多走路程S"},
		{"TheTotalDistanceTraveledByTheTwoOfFhem","两人总共多走的路程S"},
		{"TwoPeople'sOriginalSpeedPerHourAnd","两人每小时原速度和V"},
		{"A speed","甲速度V"},
		{"NumberOfPeople","人数"},
		{"Answer: What is the speed of A %d",
		"答：甲的速度是%d"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(int, 原时间T, 10);
	DefineLangVar(int, 每小时多走路程S,10);
	DefineLangVar(int, 时间T,8);
	DefineLangVar(int, 相遇时距离中点的路程S,16);
	DefineLangVar(int, 人数,2)
	ColPrintf(PrintfCol::标题,Lang("P23 例一"));
	ColPrintf(PrintfCol::标题,Lang("甲乙两人相向而行，10小时后相遇，若两人每小时多走10千米，8小时后离中点16千米相遇，已知甲比乙快，甲原来的速度是多少?"));
	DefineLangVar(int, 甲比乙多走路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("1.计算甲比乙多走路程S 甲比乙多走路程S=乙少走的路程S+甲多走的路程S"));
	甲比乙多走路程S = 相遇时距离中点的路程S + 相遇时距离中点的路程S;
	甲比乙多走路程S.PrintProcessLog(1);
	DefineLangVar(int, 甲比乙多多的速度V, 0);
	ColPrintf(PrintfCol::方法,Lang("2.计算甲比乙多多的速度V 甲比乙多多的速度V=甲比乙多走路程S/时间T"));
	甲比乙多多的速度V = 甲比乙多走路程S / 时间T;
	甲比乙多多的速度V.PrintProcessLog(2);
	DefineLangVar(int, 两人每小时多走路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("3.计算两人每小时多走路程S 两人每小时多走路程S=2*每小时多走路程S"));
	两人每小时多走路程S = 人数 * 每小时多走路程S;
	两人每小时多走路程S.PrintProcessLog(3);
	DefineLangVar(int, 两人总共多走的路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("4.计算两人总共多走的路程S 两人总共多走的路程S=两人每小时多走路程S*时间T"));
	两人总共多走的路程S = 两人每小时多走路程S * 时间T;
	两人总共多走的路程S.PrintProcessLog(4);
	DefineLangVar(int, 两人每小时原速度和V, 0);
	ColPrintf(PrintfCol::方法,Lang("5.计算两人每小时原速度和V 两人每小时原速度和V=两人总共多走的路程V/(原时间T-时间T)"));
	两人每小时原速度和V = 两人总共多走的路程S / (原时间T - 时间T);
	两人每小时原速度和V.PrintProcessLog(5);
	DefineLangVar(int, 甲速度V, 0);
	ColPrintf(PrintfCol::方法,Lang("6.计算甲速度 甲速度V=（两人每小时原速度和V+甲比乙多多的速度V）/人数"));
	甲速度V = (两人每小时原速度和V + 甲比乙多多的速度V) / 人数;
	甲速度V.PrintProcessLog(6);
	
	ColPrintf(PrintfCol::结果,Lang("答：甲的速度是%d"), (int)甲速度V);
	//ColPrintf(PrintfCol::方法"%d", 甲速度.Var);
}
void P23_2()
{
	/*
	*
	* 汽车
	* |------------------------->
	* ------------------------------------------
	*					中点	108千米
	* |--------------------|-----|---------------|
	* 摩托车
	* ------------------------------------------										
	*							 <-------------|
	* 
	*
	*/
	LanguageLib::LanguageTableT Language = {
		{"P23 Example 2","P23 例二"},
		{"Title: A motorcycle and a car are traveling in the opposite direction, with the motorcycle traveling at 54 kilometers per hour and the car traveling at 48 kilometers per hour. After reaching the opposite direction, the two cars return and meet \nat a distance of 108 kilometers from the midpoint, asking for the total distance?",
		"题目：摩托车和汽车相向而行，摩托车54千米每小时，汽车48千米每小时，两车到对面后返回，他们在离中点108千米相遇，问总路程?"},
		{"1. Calculate the distance difference. Distance difference=number of vehicles * distance from the midpoint",
		"1.计算路程差V 路程差V=车数辆*离中点的距离S"},
		{"2. Calculate time=distance difference/(motorcycle speed - car speed)",
		"2.计算总时间 时间T=路程差S/（摩托车速度V-汽车速度V）"},
		{"3. Calculate the total time of a journey. The total time of a journey is equal to the time divided by the number of journeys",
		"3.计算一个全程的时间T 一个全程的时间T=时间T/全程数"},
		{"4. Calculate the entire journey=the time of one journey * (motorcycle speed+car speed)",
		"4.计算全程 全程S=一个全程的时间T*（摩托车速度V+汽车速度V）"},
		//变量表
		{"MotorcycleSpeed","摩托车速度V"},
		{"carSpeed","汽车速度V"},
		{"DistanceFromTheMidpoint","离中点的距离S"},
		{"pathDifference","路程差S"},
		{"Time","总时间T"},
		{"AFullDurationOfTime","一个全程的时间T"},
		{"wholeCourse","全程S"},
		{"TotalNumberOfJourneys","全程数"},
		{"NumberOfVehicles","车数量"},
		{"Answer: The whole process is %d","答：全程是 %d"},
		{"kilometre","千米"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(int, 摩托车速度V, 54);
	DefineLangVar(int, 汽车速度V, 48);
	DefineLangVar(int, 离中点的距离S, 108);
	DefineLangVar(int, 车数量, 2);
	DefineLangVar(int, 全程数, 3);
	ColPrintf(PrintfCol::标题,Lang("P23 例二"));
	ColPrintf(PrintfCol::标题,Lang("题目：摩托车和汽车相向而行，摩托车54千米每小时，汽车48千米每小时，两车到对面后返回，他们在离中点108千米相遇，问总路程?"));
	DefineLangVar(int, 路程差S, 0);
	ColPrintf(PrintfCol::方法,Lang ("1.计算路程差V 路程差V=车数辆*离中点的距离S"));
	路程差S = 车数量 * 离中点的距离S;
	路程差S.PrintProcessLog(1);
	DefineLangVar(int, 总时间T, 0);
	ColPrintf(PrintfCol::方法,Lang ("2.计算总时间 时间T=路程差S/（摩托车速度V-汽车速度V）"));
	总时间T = 路程差S / (摩托车速度V - 汽车速度V);
	总时间T.PrintProcessLog(2);
	DefineLangVar(int, 一个全程的时间T, 0);
	ColPrintf(PrintfCol::方法,Lang("3.计算一个全程的时间T 一个全程的时间T=时间T/全程数"));
	一个全程的时间T = 总时间T / 全程数;
	一个全程的时间T.PrintProcessLog(3);
	DefineLangVar(int, 全程S, 0);
	ColPrintf(PrintfCol::方法,Lang("4.计算全程 全程S=一个全程的时间T*（摩托车速度V+汽车速度V）"));
	全程S = 一个全程的时间T * (摩托车速度V + 汽车速度V);
	全程S.PrintProcessLog(4);
	ColPrintf(PrintfCol::结果, Lang("答：全程是 %d"), (int)全程S);
}
void P23()
{
	P23_1();
	ColPrintf(PrintfCol::方法,"");
	P23_2();
	ColPrintf(PrintfCol::方法,"");
}
void P23_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P23();
	Lang.SetCurLanguage(LanguageLib::English);
	P23();
	ColPrintf(PrintfCol::方法,"");

}