#pragma once
void P5_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 1","P5�𳵹��� ���1"},
		{"Situation: Train passing through trees Problem: Trains have length and speed, trees have no length and speed",
		"������𳵹������⣺���г������ٶȣ���û����û�ٶ�"},
		{"Solution idea: Because this problem calculates the total distance traveled by the train, we use a punctuation point without length to calculate.\nFor example, if the locomotive touches a tree and leaves the tree at the end of the train, find a punctuation point at the end of the train.\nThe distance traveled from the previous train end to the current train end is the distance traveled",
		"����˼·����Ϊ��������Ǽ���Ļ��߹�����·�̣�����������һ��û�г��ȵı�������㣬�����ͷ�ִ���������β�뿪������һ������β����֮ǰ�Ļ�β�����ڵĻ�β�������߹��ľ���"},
		{"Conclusion formula: The distance traveled by the train (train length) S1=Train speed V1 * Train tail passing time T1 through the tree",
		"���۹�ʽ�����߹���·�̣��𳵳�����S1=���ٶ�V1*��βͨ������ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"\n"
		"           tain              tree\n"
		"|--------------------------->||\n"
		"\n"
		"                               tree          tain\n"
		"                               || |--------------------------->\n"
		;
	ColPrintf(PrintfCol::����, Lang("P5�𳵹��� ���1"));
	ColPrintf(PrintfCol::����, Lang("������𳵹������⣺���г������ٶȣ���û����û�ٶ�"));
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("����˼·����Ϊ��������Ǽ���Ļ��߹�����·�̣�����������һ��û�г��ȵı�������㣬�����ͷ�ִ���������β�뿪������һ������β����֮ǰ�Ļ�β�����ڵĻ�β�������߹��ľ���"));
	ColPrintf(PrintfCol::����, Lang("���۹�ʽ�����߹���·�̣��𳵳�����S1=���ٶ�V1*��βͨ������ʱ��T1"));
}
void P5_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 2","P5�𳵹��� ���2"},
		{"Situation: Trains and people: Trains have length and speed, while people have speed but no length",
		"�������׷�ˣ����г������ٶȣ������ٶ�û����"},
		{"Solution idea: This is a typical pursuit problem, and the method of calculating the total distance requires calculating the speed difference.\nSince a person also has to walk a certain distance, in order to make them stationary, their speed must be\nsubtracted, so the speed difference needs to be calculated",
		"����˼·:����һ�����͵�׷�����⣬��������·�̵ķ�����Ҫ���ٶȲ����ҲҪ��һ��·������Ҫʹ�˱侲ֹ�͵ü�ȥ�����ٶȣ�����Ҫ���ٶȲ�"},
		{"Conclusion formula: The distance traveled by the train (train length) S1=(train speed V1- person speed V2) * time exceeded by the person T1",
		"���۹�ʽ:���߹���·�̣��𳵳�����S1=(�𳵵��ٶ�V1-�˵��ٶ�V2)*�����˵�ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"\n"
		"           tain              people\n"
		"|--------------------------->||\n"
		"\n"
		"                                         people          tain\n"
		"                                         || |--------------------------->\n"
		;
	ColPrintf(PrintfCol::����, Lang("P5�𳵹��� ���2"));
	ColPrintf(PrintfCol::����, Lang("�������׷�ˣ����г������ٶȣ������ٶ�û����"));
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("����˼·:����һ�����͵�׷�����⣬��������·�̵ķ�����Ҫ���ٶȲ����ҲҪ��һ��·������Ҫʹ�˱侲ֹ�͵ü�ȥ�����ٶȣ�����Ҫ���ٶȲ�"));
	ColPrintf(PrintfCol::����, Lang("���۹�ʽ:���߹���·�̣��𳵳�����S1=(�𳵵��ٶ�V1-�˵��ٶ�V2)*�����˵�ʱ��T1"));
}
void P5_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 3","P5�𳵹��� ���3"},
		{"Situation: Train crossing bridge: The train has length and speed, while the bridge has length without speed",
		"������𳵹��ţ����г������ٶȣ���û�ٶ��г���"},
		{"Solution idea: This is a typical train crossing a bridge problem. It has a bridge, where the train's head touches the bridge first and the train's\ntail leaves the bridge, or is it calculated based on a punctuation mark on the train. So the total distance traveled\nby the train is the length of the train plus the length of the bridge",
		"����˼·:����һ�����͵Ļ𳵹������⣬�����ţ��𳵵�ͷ�������ţ���β���뿪��,�����Ի��ϵ�һ�������㡣���Ի��й�����·�̾��ǻ𳵳��ȼ����ŵĳ���"},
		{"Conclusion formula: The distance traveled by the train (train length) S1=Train speed V1 * Bridge crossing time T1 or the distance traveled by the train (train length) S1=Train length L1+Bridge length L2",
		"���۹�ʽ:���߹���·�̣��𳵳�����S1=���ٶ�V1*ͨ���ŵ�ʱ��T1 �� ���߹���·�̣��𳵳�����S1=�𳵳���L1+�ŵĳ���L2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"\n"
		"           tain                            bridge\n"
		"|--------------------------->|---------------------------------|\n"
		"\n"
		"                                               bridge                            tain\n"
		"                             |---------------------------------||--------------------------->\n"
		;
	ColPrintf(PrintfCol::����, Lang("P5�𳵹��� ���3"));
	ColPrintf(PrintfCol::����, Lang("�������׷�ˣ����г������ٶȣ������ٶ�û����"));
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("����˼·:����һ�����͵Ļ𳵹������⣬�����ţ��𳵵�ͷ�������ţ���β���뿪��,�����Ի��ϵ�һ�������㡣���Ի��й�����·�̾��ǻ𳵳��ȼ����ŵĳ���"));
	ColPrintf(PrintfCol::����, Lang("���۹�ʽ:���߹���·�̣��𳵳�����S1=���ٶ�V1*ͨ���ŵ�ʱ��T1 �� ���߹���·�̣��𳵳�����S1=�𳵳���L1+�ŵĳ���L2"));
}
void P5_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 3","P5�𳵺ͻ� ���4"},
		{"Situation: Train crossing bridge: The train has length and speed",
		"������𳵺ͻ𳵣����г������ٶ�"},
		{"Solution idea: This is a typical problem of traveling in opposite directions, which requires the use of speed and. Because of the mismatch, the distance\ntraveled will definitely be faster than when stationary. At the beginning, the front of the car is level, and at\nthe end, the rear of the car is level. They both have speed, so the speed and can\nbe calculated",
		"����˼·:����һ�����͵�����������⣬�������Ҫ�õ��ٶȺͣ���Ϊ����߹���·�̿϶��Ⱦ�ֹ��Ҫ�죬��ʼʱ��ͷƽ�룬����ʱ��βƽ�룬���Ƕ����ٶȣ�����Ҫ���ٶȺͣ�Ȼ��Ϳ��Լ��������"},
		{"Conclusion formula: The total length (total distance) of the two vehicles S1=the speed of the two vehicles and SUM1 * the time it takes to complete the wrong phase T1",
		"���۹�ʽ:�������ܳ��ȣ���·�̣�S1=�����ٶȺ�SUM1*�����ɵ�ʱ��T1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		"\n"
		"           tain1                            tain2\n"
		"|---------------------------><---------------------------------|\n"
		"\n"
		"       tain2                            tain1\n"
		"<---------------------------------||--------------------------->\n"
		;
	ColPrintf(PrintfCol::����, Lang("P5�𳵺ͻ� ���4"));
	ColPrintf(PrintfCol::����, Lang("������𳵺ͻ𳵣����г������ٶ�"));
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("����˼·:����һ�����͵�����������⣬�������Ҫ�õ��ٶȺͣ���Ϊ����߹���·�̿϶��Ⱦ�ֹ��Ҫ�죬��ʼʱ��ͷƽ�룬����ʱ��βƽ�룬���Ƕ����ٶȣ�����Ҫ���ٶȺͣ�Ȼ��Ϳ��Լ��������"));
	ColPrintf(PrintfCol::����, Lang("���۹�ʽ:�������ܳ��ȣ���·�̣�S1=�����ٶȺ�SUM1*�����ɵ�ʱ��T1"));
}
void P5_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P5 Train Crossing Situation 3","P5�𳵹��� ���5"},
		{"Situation: Train crossing bridge: The train has length and speed",
		"���������ȫ�����ϵ����⣺���г������ٶȣ���û�ٶ��г���"},
		{"Solution idea: This is a typical train crossing a bridge problem, but the goal is for the train to travel completely on the bridge. This is also very simple\nbecause it has the rear of the train on the bridge and the rear of the train on the bridge. Therefore, the\ndistance it travels is the length of the bridge minus the length of the train, which\ncan be easily calculated",
		"����˼·:����һ�����͵Ļ𳵹������⣬������ǻ���ȫ�������ߵ�·�̣������Ҳ�ǳ��򵥣���Ϊ�����ֳ�β���ţ���ͷ���ţ��������ߵ�·�̾����ŵĳ���-�𳵳��ȣ���Ϳ��������������"},
		{"Conclusion formula: The distance traveled by the train (train length) S1=Train speed V1 * Time to cross the bridge T1 or the distance traveled by the train (train length) S1=Bridge length L1- Train length L2",
		"���۹�ʽ:���߹���·�̣��𳵳�����S1=���ٶ�V1*�����ŵ�ʱ��T1 �� ���߹���·�̣��𳵳�����S1=�ŵĳ���L1-�𳵳���L2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic = 
		"\n"
		"     tain\n"
		"|------------------>\n"
		"|---------------------------------bridge---------------------------------|\n"
		"\n"
		"                                                          tain\n"
		"                                                     |------------------>\n"
		"|---------------------------------bridge---------------------------------|\n"

		;
	ColPrintf(PrintfCol::����, Lang("P5�𳵹��� ���5"));
	ColPrintf(PrintfCol::����, Lang("���������ȫ�����ϵ����⣺���г������ٶȣ���û�ٶ��г���"));
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("����˼·:����һ�����͵Ļ𳵹������⣬������ǻ���ȫ�������ߵ�·�̣������Ҳ�ǳ��򵥣���Ϊ�����ֳ�β���ţ���ͷ���ţ��������ߵ�·�̾����ŵĳ���-�𳵳��ȣ���Ϳ��������������"));
	ColPrintf(PrintfCol::����, Lang("���۹�ʽ:���߹���·�̣��𳵳�����S1=���ٶ�V1*�����ŵ�ʱ��T1 �� ���߹���·�̣��𳵳�����S1=�ŵĳ���L1-�𳵳���L2"));
}

void P5()
{
	P5_1();
	ColPrintf(PrintfCol::����, "");
	P5_2();
	ColPrintf(PrintfCol::����, "");
	P5_3();
	ColPrintf(PrintfCol::����, "");
	P5_4();
	ColPrintf(PrintfCol::����, "");
	P5_5();
	ColPrintf(PrintfCol::����, "");
}
void P5_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P5();
	Lang.SetCurLanguage(LanguageLib::English);
	P5();
	ColPrintf(PrintfCol::����, "");

}