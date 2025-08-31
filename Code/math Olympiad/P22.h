#pragma once
#include "LanguageLib.h"

void P22_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P22 English version","P22 ���İ�"},
		{"Example 1 Method 1: Calculate using midpoint (velocity difference method)","ʾ��1����1��ʹ���е���㣨�ٶȲ��"},
		{"Title: Xiaoxin, two people are heading towards each other in the south. Xiaoxin is driving at a speed of 300 meters per minute, and after 5 minutes, Xiaoxin will pass the midpoint of 150 meters. At this time, Zhengnan was still 90 meters away from Xiaoxin. How many meters did Xiaoxin run per minute?",
		"С������������У�С���ٶ�300�ף�5���Ӻ�С�¹��е�150�ף���ʱ�����90�ף�����ÿ���Ӷ�����?"},
		{"1.Calculate the distance between due south and the midpoint, which is equal to the distance between due south and the midpoint plus the distance between due south and the midpoint",
		"1.�����������е�֮��ľ���S���������ߵ�·��S = С�¹��е��·��S + �������·��S"},


		{"2.Calculate the distance traveled by Xiaoxin, which is equal to the distance traveled by Xiaoxin from the midpoint due south plus the distance traveled by Xiaoxin over the midpoint",
		"2.����С���н��ľ��룬С�±����϶���·��S = �������ߵ�·��S + С�¹��е��·��S;"},
		{"3. Calculate the speed difference between Xiaoxin and Zhengnan. Xiaoxin and Zhengnan speed difference=Xiaoxin's extra distance traveled/cycling time",
		"3.����С�º�����֮����ٶȲ� ÿ����С�±����϶���·��S = С�±����϶���·��S / ����ʱ��T;"},
		{"4. Calculate the speed to the south. The speed to the south is equal to the riding speed of Xiaoxin minus the speed difference between Xiaoxin and Zhengnan",
		"4.�������ϵ��ٶȡ������ٶ�V = С���ٶ�V - ÿ����С�±����϶���·��S"},
		//������
		{"XiaoxinCyclingSpeed","С���ٶ�V"},
		{"XiaoxinJourneyPastTheMidpoint","С�¹��е��·��S"},
		{"RIDETIME","����ʱ��T"},
		{"DistanceFromZhengnanToXiaoxin","�������·��S"},
		{"TakeLessDistanceFromTheMidpointToTheSouth","�������ߵ�·��S"},
		{"XiaoXinGoMoreDistance","С�±����϶���·��S"},
		{"SpeedDifferenceBetweenXiaoxinAndZhengnan","ÿ����С�±����϶���·��S"},
		{"SouthSpeed","�����ٶ�V"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);

	DefineLangVar(int, С���ٶ�V, 300);
	DefineLangVar(int, С�¹��е��·��S, 150);
	DefineLangVar(int, ����ʱ��T, 5);
	DefineLangVar(int, �������·��S, 90);
	ColPrintf(PrintfCol::����,Lang("P22 ���İ�"));
	ColPrintf(PrintfCol::����,Lang("ʾ��1����1��ʹ���е���㣨�ٶȲ��"));
	ColPrintf(PrintfCol::����,Lang("С������������У�С���ٶ�300�ף�5���Ӻ�С�¹��е�150�ף���ʱ�����90�ף�����ÿ���Ӷ�����?"));
	DefineLangVar(int, �������ߵ�·��S, 0);
	ColPrintf(PrintfCol::����,Lang("1.�����������е�֮��ľ���S���������ߵ�·��S = С�¹��е��·��S + �������·��S"));
	�������ߵ�·��S = С�¹��е��·��S + �������·��S;
	
	�������ߵ�·��S.PrintProcessLog(1);
	
	DefineLangVar(int, С�±����϶���·��S, 0);
	ColPrintf(PrintfCol::����,Lang("2.����С���н��ľ��룬С�±����϶���·��S = �������ߵ�·��S + С�¹��е��·��S;"));
	С�±����϶���·��S = �������ߵ�·��S + С�¹��е��·��S;
	С�±����϶���·��S.PrintProcessLog(2);
	DefineLangVar(int, ÿ����С�±����϶���·��S, 0);
	ColPrintf(PrintfCol::����,Lang("3.����С�º�����֮����ٶȲ� ÿ����С�±����϶���·��S = С�±����϶���·��S / ����ʱ��T;"));
	ÿ����С�±����϶���·��S = С�±����϶���·��S / ����ʱ��T;
	ÿ����С�±����϶���·��S.PrintProcessLog(3);
	DefineLangVar(int, �����ٶ�V, 0);
	ColPrintf(PrintfCol::����,Lang("4.�������ϵ��ٶȡ������ٶ�V = С���ٶ�V - ÿ����С�±����϶���·��S"));
	�����ٶ�V = С���ٶ�V - ÿ����С�±����϶���·��S;
	�����ٶ�V.PrintProcessLog(4);
	
	//�߶�ʾ��ͼ
	/*
	*          				�е�   150��  90��         
	* |-----------------------|--------|-----|----------|
	* |             С���ߵ�·��       |	 | ����·�� |
	**/
	
	
	
	

	
	Language = {
		{"Answer: Xiaoxin��meters per minutem %d",
		"��С��ÿ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::���, Lang("��С��ÿ����%d��"), �����ٶ�V.Var);

}
void P22_1_2()
{
	
	LanguageLib::LanguageTableT Language = {
		{"P22 English version","P22 ���İ�"},
		{"Example 1, Method 2: Calculate using the midpoint method (path method)",
		"ʾ��1������2��ʹ���е㷨��·����������"},
		{"Title: Xiaoxin, two people are heading towards each other in the south. Xiaoxin is driving at a speed of 300 meters per minute, and after 5 minutes, Xiaoxin will pass the midpoint of 150 meters. At this time, Zhengnan was still 90 meters away from Xiaoxin. How many meters did Xiaoxin run per minute?",
		"С������������У�С���ٶ�300�ף�5���Ӻ�С�¹��е�150�ף���ʱ�����90�ף�����ÿ���Ӷ�����?"},
		{"1. Calculate the distance of Xiaoxin's ride. Xiaoxin's ride distance=ride time * Xiaoxin ride speed ",
		"1.����С�����еľ���S С�����о���S=����ʱ��T*С�������ٶ�V"},
		{"2. Calculate the midpoint distance. The midpoint distance \nis calculated as the distance traveled by Xiaoxin's bike ride minus the distance traveled \nby Xiaoxin passing through the midpoint ",
		"2.�����е���� �е����=(����ʱ��T * С���ٶ�V)- С�¹��е��·��S"},
		{"3. Calculate the distance from due south to the midpoint. \nThe distance from due south to the midpoint is equal to \nthe midpoint distance minus (the distance that Xiaoxin crosses the midpoint plus the distance from due south to Xiaoxin) ",
		"3.��������ϵ��е�ľ���S �����ϵ��е�ľ���S=�е�����ȥС�´����е�ľ���S+���ϵ�С�µľ���S"},
		{"4. Calculate the due south speed, which is equal to the distance from the midpoint of due south divided by the cycling time ",
		"4.�����ٶ�V = ������ʻ·��S / ����ʱ��T"},
		//������
		{"XiaoxinCyclingSpeed","С���ٶ�V"},
		{"XiaoxinJourneyPastTheMidpoint","С�¹��е��·��S"},
		{"RIDETIME","����ʱ��T"},
		{"DistanceFromZhengnanToXiaoxin","�������·��S"},
		{"TakeLessDistanceFromTheMidpointToTheSouth","�������ߵ�·��S"},
		{"XiaoxinCyclingJourney","�е�·��S"},
		{"DistanceFromTheMidpointToTheSouth","������ʻ·��S"},
		{"SouthSpeed","�����ٶ�V"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(int, С���ٶ�V, 300);
	DefineLangVar(int, С�¹��е��·��S, 150);
	DefineLangVar(int, ����ʱ��T, 5);
	DefineLangVar(int, �������·��S, 90);
	ColPrintf(PrintfCol::����,Lang("P22 ���İ�"));
	ColPrintf(PrintfCol::����,Lang("ʾ��1������2��ʹ���е㷨��·����������"));
	ColPrintf(PrintfCol::����,Lang("С������������У�С���ٶ�300�ף�5���Ӻ�С�¹��е�150�ף���ʱ�����90�ף�����ÿ���Ӷ�����?"));
	DefineLangVar(int, �������ߵ�·��S, 0);
	ColPrintf(PrintfCol::����,Lang("1.����С�����еľ���S С�����о���S=����ʱ��T*С�������ٶ�V"));
	�������ߵ�·��S = С�¹��е��·��S + �������·��S;
	�������ߵ�·��S.PrintProcessLog(1);
	DefineLangVar(int, �е�·��S, 0);
	ColPrintf(PrintfCol::����,Lang("2.�����е���� �е����=(����ʱ��T * С���ٶ�V)- С�¹��е��·��S"));
	�е�·��S = (����ʱ��T * С���ٶ�V)- С�¹��е��·��S;
	�е�·��S.PrintProcessLog(2);
	DefineLangVar(int, ������ʻ·��S, 0);
	ColPrintf(PrintfCol::����,Lang("3.��������ϵ��е�ľ���S �����ϵ��е�ľ���S=�е�����ȥС�´����е�ľ���S+���ϵ�С�µľ���S"));
	������ʻ·��S = �е�·��S -�������ߵ�·��S;
	������ʻ·��S.PrintProcessLog(3);
	DefineLangVar(int, �����ٶ�V, 0);
	ColPrintf(PrintfCol::����,Lang("4.�����ٶ�V = ������ʻ·��S / ����ʱ��T"));
	�����ٶ�V = ������ʻ·��S / ����ʱ��T;
	�����ٶ�V.PrintProcessLog(4);
	
	//�߶�ʾ��ͼ
	/*
	*          				�е�   150��  90��
	* |-----------------------|--------|-----|----------|
	* |             С���ߵ�·��       |	 | ����·�� |
	**/
	
	
	
	
	Language = {
		{"Answer: Xiaoxin��meters per minutem %d",
		"��С��ÿ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::���,Lang("��С��ÿ����%d��"), �����ٶ�V.Var);
}

void P22()
{
	P22_1_1();
	ColPrintf(PrintfCol::����,"");
	P22_1_2();
	ColPrintf(PrintfCol::����,"");
}
void P22_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P22();
	Lang.SetCurLanguage(LanguageLib::English);
	P22();
	ColPrintf(PrintfCol::����,"");
	
}