#pragma once
#include "LanguageLib.h"

void P22_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P22 English version","P22 中文版"},
		{"Example 1 Method 1: Calculate using midpoint (velocity difference method)","示例1方法1：使用中点计算（速度差法）"},
		{"Title: Xiaoxin, two people are heading towards each other in the south. Xiaoxin is driving at a speed of 300 meters per minute, and after 5 minutes, Xiaoxin will pass the midpoint of 150 meters. At this time, Zhengnan was still 90 meters away from Xiaoxin. How many meters did Xiaoxin run per minute?",
		"小新正南相向而行，小新速度300米，5分钟后小新过中点150米，此时还相距90米，正南每分钟多少米?"},
		{"1.Calculate the distance between due south and the midpoint, which is equal to the distance between due south and the midpoint plus the distance between due south and the midpoint",
		"1.计算正南与中点之间的距离S，正南少走的路程S = 小新过中点的路程S + 两人相距路程S"},


		{"2.Calculate the distance traveled by Xiaoxin, which is equal to the distance traveled by Xiaoxin from the midpoint due south plus the distance traveled by Xiaoxin over the midpoint",
		"2.计算小新行进的距离，小新比正南多走路程S = 正南少走的路程S + 小新过中点的路程S;"},
		{"3. Calculate the speed difference between Xiaoxin and Zhengnan. Xiaoxin and Zhengnan speed difference=Xiaoxin's extra distance traveled/cycling time",
		"3.计算小新和正南之间的速度差 每分钟小新比正南多走路程S = 小新比正南多走路程S / 骑行时间T;"},
		{"4. Calculate the speed to the south. The speed to the south is equal to the riding speed of Xiaoxin minus the speed difference between Xiaoxin and Zhengnan",
		"4.计算正南的速度。正南速度V = 小新速度V - 每分钟小新比正南多走路程S"},
		//变量表
		{"XiaoxinCyclingSpeed","小新速度V"},
		{"XiaoxinJourneyPastTheMidpoint","小新过中点的路程S"},
		{"RIDETIME","骑行时间T"},
		{"DistanceFromZhengnanToXiaoxin","两人相距路程S"},
		{"TakeLessDistanceFromTheMidpointToTheSouth","正南少走的路程S"},
		{"XiaoXinGoMoreDistance","小新比正南多走路程S"},
		{"SpeedDifferenceBetweenXiaoxinAndZhengnan","每分钟小新比正南多走路程S"},
		{"SouthSpeed","正南速度V"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);

	DefineLangVar(int, 小新速度V, 300);
	DefineLangVar(int, 小新过中点的路程S, 150);
	DefineLangVar(int, 骑行时间T, 5);
	DefineLangVar(int, 两人相距路程S, 90);
	ColPrintf(PrintfCol::标题,Lang("P22 中文版"));
	ColPrintf(PrintfCol::标题,Lang("示例1方法1：使用中点计算（速度差法）"));
	ColPrintf(PrintfCol::标题,Lang("小新正南相向而行，小新速度300米，5分钟后小新过中点150米，此时还相距90米，正南每分钟多少米?"));
	DefineLangVar(int, 正南少走的路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("1.计算正南与中点之间的距离S，正南少走的路程S = 小新过中点的路程S + 两人相距路程S"));
	正南少走的路程S = 小新过中点的路程S + 两人相距路程S;
	
	正南少走的路程S.PrintProcessLog(1);
	
	DefineLangVar(int, 小新比正南多走路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("2.计算小新行进的距离，小新比正南多走路程S = 正南少走的路程S + 小新过中点的路程S;"));
	小新比正南多走路程S = 正南少走的路程S + 小新过中点的路程S;
	小新比正南多走路程S.PrintProcessLog(2);
	DefineLangVar(int, 每分钟小新比正南多走路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("3.计算小新和正南之间的速度差 每分钟小新比正南多走路程S = 小新比正南多走路程S / 骑行时间T;"));
	每分钟小新比正南多走路程S = 小新比正南多走路程S / 骑行时间T;
	每分钟小新比正南多走路程S.PrintProcessLog(3);
	DefineLangVar(int, 正南速度V, 0);
	ColPrintf(PrintfCol::方法,Lang("4.计算正南的速度。正南速度V = 小新速度V - 每分钟小新比正南多走路程S"));
	正南速度V = 小新速度V - 每分钟小新比正南多走路程S;
	正南速度V.PrintProcessLog(4);
	
	//线段示意图
	/*
	*          				中点   150米  90米         
	* |-----------------------|--------|-----|----------|
	* |             小新走的路程       |	 | 正南路程 |
	**/
	
	
	
	

	
	Language = {
		{"Answer: Xiaoxin，meters per minutem %d",
		"答：小新每分钟%d米"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::结果, Lang("答：小新每分钟%d米"), 正南速度V.Var);

}
void P22_1_2()
{
	
	LanguageLib::LanguageTableT Language = {
		{"P22 English version","P22 中文版"},
		{"Example 1, Method 2: Calculate using the midpoint method (path method)",
		"示例1，方法2：使用中点法（路径法）计算"},
		{"Title: Xiaoxin, two people are heading towards each other in the south. Xiaoxin is driving at a speed of 300 meters per minute, and after 5 minutes, Xiaoxin will pass the midpoint of 150 meters. At this time, Zhengnan was still 90 meters away from Xiaoxin. How many meters did Xiaoxin run per minute?",
		"小新正南相向而行，小新速度300米，5分钟后小新过中点150米，此时还相距90米，正南每分钟多少米?"},
		{"1. Calculate the distance of Xiaoxin's ride. Xiaoxin's ride distance=ride time * Xiaoxin ride speed ",
		"1.计算小新骑行的距离S 小新骑行距离S=骑行时间T*小新骑行速度V"},
		{"2. Calculate the midpoint distance. The midpoint distance \nis calculated as the distance traveled by Xiaoxin's bike ride minus the distance traveled \nby Xiaoxin passing through the midpoint ",
		"2.计算中点距离 中点距离=(骑行时间T * 小新速度V)- 小新过中点的路程S"},
		{"3. Calculate the distance from due south to the midpoint. \nThe distance from due south to the midpoint is equal to \nthe midpoint distance minus (the distance that Xiaoxin crosses the midpoint plus the distance from due south to Xiaoxin) ",
		"3.计算从正南到中点的距离S 从正南到中点的距离S=中点距离减去小新穿过中点的距离S+正南到小新的距离S"},
		{"4. Calculate the due south speed, which is equal to the distance from the midpoint of due south divided by the cycling time ",
		"4.正南速度V = 正南行驶路程S / 骑行时间T"},
		//变量表
		{"XiaoxinCyclingSpeed","小新速度V"},
		{"XiaoxinJourneyPastTheMidpoint","小新过中点的路程S"},
		{"RIDETIME","骑行时间T"},
		{"DistanceFromZhengnanToXiaoxin","两人相距路程S"},
		{"TakeLessDistanceFromTheMidpointToTheSouth","正南少走的路程S"},
		{"XiaoxinCyclingJourney","中点路程S"},
		{"DistanceFromTheMidpointToTheSouth","正南行驶路程S"},
		{"SouthSpeed","正南速度V"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(int, 小新速度V, 300);
	DefineLangVar(int, 小新过中点的路程S, 150);
	DefineLangVar(int, 骑行时间T, 5);
	DefineLangVar(int, 两人相距路程S, 90);
	ColPrintf(PrintfCol::标题,Lang("P22 中文版"));
	ColPrintf(PrintfCol::标题,Lang("示例1，方法2：使用中点法（路径法）计算"));
	ColPrintf(PrintfCol::标题,Lang("小新正南相向而行，小新速度300米，5分钟后小新过中点150米，此时还相距90米，正南每分钟多少米?"));
	DefineLangVar(int, 正南少走的路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("1.计算小新骑行的距离S 小新骑行距离S=骑行时间T*小新骑行速度V"));
	正南少走的路程S = 小新过中点的路程S + 两人相距路程S;
	正南少走的路程S.PrintProcessLog(1);
	DefineLangVar(int, 中点路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("2.计算中点距离 中点距离=(骑行时间T * 小新速度V)- 小新过中点的路程S"));
	中点路程S = (骑行时间T * 小新速度V)- 小新过中点的路程S;
	中点路程S.PrintProcessLog(2);
	DefineLangVar(int, 正南行驶路程S, 0);
	ColPrintf(PrintfCol::方法,Lang("3.计算从正南到中点的距离S 从正南到中点的距离S=中点距离减去小新穿过中点的距离S+正南到小新的距离S"));
	正南行驶路程S = 中点路程S -正南少走的路程S;
	正南行驶路程S.PrintProcessLog(3);
	DefineLangVar(int, 正南速度V, 0);
	ColPrintf(PrintfCol::方法,Lang("4.正南速度V = 正南行驶路程S / 骑行时间T"));
	正南速度V = 正南行驶路程S / 骑行时间T;
	正南速度V.PrintProcessLog(4);
	
	//线段示意图
	/*
	*          				中点   150米  90米
	* |-----------------------|--------|-----|----------|
	* |             小新走的路程       |	 | 正南路程 |
	**/
	
	
	
	
	Language = {
		{"Answer: Xiaoxin，meters per minutem %d",
		"答：小新每分钟%d米"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::结果,Lang("答：小新每分钟%d米"), 正南速度V.Var);
}

void P22()
{
	P22_1_1();
	ColPrintf(PrintfCol::方法,"");
	P22_1_2();
	ColPrintf(PrintfCol::方法,"");
}
void P22_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P22();
	Lang.SetCurLanguage(LanguageLib::English);
	P22();
	ColPrintf(PrintfCol::方法,"");
	
}