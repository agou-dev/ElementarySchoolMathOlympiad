#pragma once
void P23_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P23 Example 1","P23 ��һ"},
		{"A and B are walking towards each other and will meet in 10 hours. \nIf they walk an additional 10 kilometers per hour and meet 16 kilometers from the midpoint after 8 hours, it is known that A is faster than B. What was A's original speed?",
		"��������������У�10Сʱ��������������ÿСʱ����10ǧ�ף�8Сʱ�����е�16ǧ����������֪�ױ��ҿ죬��ԭ�����ٶ��Ƕ���?"},
		{"1. Calculate the distance traveled by A over B=the distance traveled by B less+the distance traveled by A over B",
		"1.����ױ��Ҷ���·��S �ױ��Ҷ���·��S=�����ߵ�·��S+�׶��ߵ�·��S"},
		{"2. Calculate the speed of A compared to B, and the speed of A compared to B equals the distance difference between A and B divided by time",
		"2.����ױ��Ҷ����ٶ�V �ױ��Ҷ����ٶ�V=�ױ��Ҷ���·��S/ʱ��T" },
		{"3. Calculate the distance traveled by two people per hour. The distance traveled by two people per hour is \nequal to 2 times the distance traveled per hour",
		"3.��������ÿСʱ����·��S ����ÿСʱ����·��S=2*ÿСʱ����·��S"},
		{"4.Calculate the total extra distance traveled by two people=extra distance traveled by two people per hour *  time",
		"4.���������ܹ����ߵ�·��S �����ܹ����ߵ�·��S=����ÿСʱ����·��S*ʱ��T"},
		{"5. Calculate the original speed of two people per hour and the sum of their original speeds per hour=the total distance traveled by two people divided by (original time - time)",
		"5.��������ÿСʱԭ�ٶȺ�V ����ÿСʱԭ�ٶȺ�V=�����ܹ����ߵ�·��V/(ԭʱ��T-ʱ��T)"},
		{"6. Calculate the speed of A=(the original speed of two people per hour plus the speed of A compared to B)/number of people",
		"6.������ٶ� ���ٶ�V=������ÿСʱԭ�ٶȺ�V+�ױ��Ҷ����ٶ�V��/����"},
		//������
		{"OriginalTime","ԭʱ��T"},
		{"CurrentExtraHourlySpeed","ÿСʱ����·��S"},
		{"Time","ʱ��T"},
		{"TheDistanceFromTheMidpointWhenMeeting","����ʱ�����е��·S��"},
		{"ATravelsMoreDistanceThanB","�ױ��Ҷ���·��S"},
		{"AIsFasterThanBDuo","�ױ��Ҷ����ٶ�V"},
		{"TwoPeopleWalkMoreDistancesPerHour","����ÿСʱ����·��S"},
		{"TheTotalDistanceTraveledByTheTwoOfFhem","�����ܹ����ߵ�·��S"},
		{"TwoPeople'sOriginalSpeedPerHourAnd","����ÿСʱԭ�ٶȺ�V"},
		{"A speed","���ٶ�V"},
		{"NumberOfPeople","����"},
		{"Answer: What is the speed of A %d",
		"�𣺼׵��ٶ���%d"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(int, ԭʱ��T, 10);
	DefineLangVar(int, ÿСʱ����·��S,10);
	DefineLangVar(int, ʱ��T,8);
	DefineLangVar(int, ����ʱ�����е��·��S,16);
	DefineLangVar(int, ����,2)
	ColPrintf(PrintfCol::����,Lang("P23 ��һ"));
	ColPrintf(PrintfCol::����,Lang("��������������У�10Сʱ��������������ÿСʱ����10ǧ�ף�8Сʱ�����е�16ǧ����������֪�ױ��ҿ죬��ԭ�����ٶ��Ƕ���?"));
	DefineLangVar(int, �ױ��Ҷ���·��S, 0);
	ColPrintf(PrintfCol::����,Lang("1.����ױ��Ҷ���·��S �ױ��Ҷ���·��S=�����ߵ�·��S+�׶��ߵ�·��S"));
	�ױ��Ҷ���·��S = ����ʱ�����е��·��S + ����ʱ�����е��·��S;
	�ױ��Ҷ���·��S.PrintProcessLog(1);
	DefineLangVar(int, �ױ��Ҷ����ٶ�V, 0);
	ColPrintf(PrintfCol::����,Lang("2.����ױ��Ҷ����ٶ�V �ױ��Ҷ����ٶ�V=�ױ��Ҷ���·��S/ʱ��T"));
	�ױ��Ҷ����ٶ�V = �ױ��Ҷ���·��S / ʱ��T;
	�ױ��Ҷ����ٶ�V.PrintProcessLog(2);
	DefineLangVar(int, ����ÿСʱ����·��S, 0);
	ColPrintf(PrintfCol::����,Lang("3.��������ÿСʱ����·��S ����ÿСʱ����·��S=2*ÿСʱ����·��S"));
	����ÿСʱ����·��S = ���� * ÿСʱ����·��S;
	����ÿСʱ����·��S.PrintProcessLog(3);
	DefineLangVar(int, �����ܹ����ߵ�·��S, 0);
	ColPrintf(PrintfCol::����,Lang("4.���������ܹ����ߵ�·��S �����ܹ����ߵ�·��S=����ÿСʱ����·��S*ʱ��T"));
	�����ܹ����ߵ�·��S = ����ÿСʱ����·��S * ʱ��T;
	�����ܹ����ߵ�·��S.PrintProcessLog(4);
	DefineLangVar(int, ����ÿСʱԭ�ٶȺ�V, 0);
	ColPrintf(PrintfCol::����,Lang("5.��������ÿСʱԭ�ٶȺ�V ����ÿСʱԭ�ٶȺ�V=�����ܹ����ߵ�·��V/(ԭʱ��T-ʱ��T)"));
	����ÿСʱԭ�ٶȺ�V = �����ܹ����ߵ�·��S / (ԭʱ��T - ʱ��T);
	����ÿСʱԭ�ٶȺ�V.PrintProcessLog(5);
	DefineLangVar(int, ���ٶ�V, 0);
	ColPrintf(PrintfCol::����,Lang("6.������ٶ� ���ٶ�V=������ÿСʱԭ�ٶȺ�V+�ױ��Ҷ����ٶ�V��/����"));
	���ٶ�V = (����ÿСʱԭ�ٶȺ�V + �ױ��Ҷ����ٶ�V) / ����;
	���ٶ�V.PrintProcessLog(6);
	
	ColPrintf(PrintfCol::���,Lang("�𣺼׵��ٶ���%d"), (int)���ٶ�V);
	//ColPrintf(PrintfCol::����"%d", ���ٶ�.Var);
}
void P23_2()
{
	/*
	*
	* ����
	* |------------------------->
	* ------------------------------------------
	*					�е�	108ǧ��
	* |--------------------|-----|---------------|
	* Ħ�г�
	* ------------------------------------------										
	*							 <-------------|
	* 
	*
	*/
	LanguageLib::LanguageTableT Language = {
		{"P23 Example 2","P23 ����"},
		{"Title: A motorcycle and a car are traveling in the opposite direction, with the motorcycle traveling at 54 kilometers per hour and the car traveling at 48 kilometers per hour. After reaching the opposite direction, the two cars return and meet \nat a distance of 108 kilometers from the midpoint, asking for the total distance?",
		"��Ŀ��Ħ�г�������������У�Ħ�г�54ǧ��ÿСʱ������48ǧ��ÿСʱ������������󷵻أ����������е�108ǧ������������·��?"},
		{"1. Calculate the distance difference. Distance difference=number of vehicles * distance from the midpoint",
		"1.����·�̲�V ·�̲�V=������*���е�ľ���S"},
		{"2. Calculate time=distance difference/(motorcycle speed - car speed)",
		"2.������ʱ�� ʱ��T=·�̲�S/��Ħ�г��ٶ�V-�����ٶ�V��"},
		{"3. Calculate the total time of a journey. The total time of a journey is equal to the time divided by the number of journeys",
		"3.����һ��ȫ�̵�ʱ��T һ��ȫ�̵�ʱ��T=ʱ��T/ȫ����"},
		{"4. Calculate the entire journey=the time of one journey * (motorcycle speed+car speed)",
		"4.����ȫ�� ȫ��S=һ��ȫ�̵�ʱ��T*��Ħ�г��ٶ�V+�����ٶ�V��"},
		//������
		{"MotorcycleSpeed","Ħ�г��ٶ�V"},
		{"carSpeed","�����ٶ�V"},
		{"DistanceFromTheMidpoint","���е�ľ���S"},
		{"pathDifference","·�̲�S"},
		{"Time","��ʱ��T"},
		{"AFullDurationOfTime","һ��ȫ�̵�ʱ��T"},
		{"wholeCourse","ȫ��S"},
		{"TotalNumberOfJourneys","ȫ����"},
		{"NumberOfVehicles","������"},
		{"Answer: The whole process is %d","��ȫ���� %d"},
		{"kilometre","ǧ��"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(int, Ħ�г��ٶ�V, 54);
	DefineLangVar(int, �����ٶ�V, 48);
	DefineLangVar(int, ���е�ľ���S, 108);
	DefineLangVar(int, ������, 2);
	DefineLangVar(int, ȫ����, 3);
	ColPrintf(PrintfCol::����,Lang("P23 ����"));
	ColPrintf(PrintfCol::����,Lang("��Ŀ��Ħ�г�������������У�Ħ�г�54ǧ��ÿСʱ������48ǧ��ÿСʱ������������󷵻أ����������е�108ǧ������������·��?"));
	DefineLangVar(int, ·�̲�S, 0);
	ColPrintf(PrintfCol::����,Lang ("1.����·�̲�V ·�̲�V=������*���е�ľ���S"));
	·�̲�S = ������ * ���е�ľ���S;
	·�̲�S.PrintProcessLog(1);
	DefineLangVar(int, ��ʱ��T, 0);
	ColPrintf(PrintfCol::����,Lang ("2.������ʱ�� ʱ��T=·�̲�S/��Ħ�г��ٶ�V-�����ٶ�V��"));
	��ʱ��T = ·�̲�S / (Ħ�г��ٶ�V - �����ٶ�V);
	��ʱ��T.PrintProcessLog(2);
	DefineLangVar(int, һ��ȫ�̵�ʱ��T, 0);
	ColPrintf(PrintfCol::����,Lang("3.����һ��ȫ�̵�ʱ��T һ��ȫ�̵�ʱ��T=ʱ��T/ȫ����"));
	һ��ȫ�̵�ʱ��T = ��ʱ��T / ȫ����;
	һ��ȫ�̵�ʱ��T.PrintProcessLog(3);
	DefineLangVar(int, ȫ��S, 0);
	ColPrintf(PrintfCol::����,Lang("4.����ȫ�� ȫ��S=һ��ȫ�̵�ʱ��T*��Ħ�г��ٶ�V+�����ٶ�V��"));
	ȫ��S = һ��ȫ�̵�ʱ��T * (Ħ�г��ٶ�V + �����ٶ�V);
	ȫ��S.PrintProcessLog(4);
	ColPrintf(PrintfCol::���, Lang("��ȫ���� %d"), (int)ȫ��S);
}
void P23()
{
	P23_1();
	ColPrintf(PrintfCol::����,"");
	P23_2();
	ColPrintf(PrintfCol::����,"");
}
void P23_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P23();
	Lang.SetCurLanguage(LanguageLib::English);
	P23();
	ColPrintf(PrintfCol::����,"");

}