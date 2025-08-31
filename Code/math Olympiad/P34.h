#pragma once
void P34_1()
{
	LanguageLib::LanguageTableT Language = {
		{"Example 1 of P34: Graph segmentation and line segment segmentation","P34����һ ͼ�ηָ��߶ηָ�"},
		{"Title: How many segments are there in the following picture?",
		"��Ŀ:��ͼһ���ж��ٶ�?"},
		{"Solution idea: This line segment appears to have only four small segments when viewed with the naked eye, but we can divide it into small segments every other segment. For example, if we divide the line segment into A, B, C, D, E, F, we can combine different segments together, such as AC, AD",
		"����˼·�������߶�������ȥֻ������С�Σ������ǿ��԰Ѹ�һ���߶γ�һС�Σ��������ǰ��߶η�ΪA��B��C��D��E�����ǿ��԰Ѳ�ͬ�Ķ��������������AC��AD"},
		{"1. Calculate the total number of line segments N1. The total number of line segments N1=number of individual segments N1+(number of individual segments N2- number of segments\nN3 in each group)+(number of individual segments N2- number of segments N3 in each group - number of segments N3 in each group)+(number of individual segments N2- number\nof segments N3 in each group - number of segments N3 in each group)+(number of individual segments N2- number of segments N3 in each group - number of\nsegments N3 in each group - number of segments N3 in each group)",
		"1.����һ�����߶���N1 һ�����߶���N1=����С����N1+(����С����N1-ÿ���ٵĶ���N3)+(����С����N1-ÿ���ٵĶ���N3-\nÿ���ٵĶ���N3)+(����С����N1-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3)+(����С����N1-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3)"},
		//������
		{"NumberOfIndividualSegmentsN1","����С����N1"},
		{"NumberOfSegmentsInEachGroupN3","ÿ���ٵĶ���N3"},
		{"TheTotalNumberOfLineSegmentsN1","һ�����߶���N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(����С����N1, 5);
	DefineLangVarInt(ÿ���ٵĶ���N3, 1);
	ColPrintf(PrintfCol::����, Lang("P34����һ ͼ�ηָ��߶ηָ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:��ͼһ���ж��ٶ�?"));
	const char* pPic =
		"         A        B     C      D      E\n"
		"---------|---------|----|-------|-----|----------\n"
		;
	ColPrintf(PrintfCol::����, pPic);
	ColPrintf(PrintfCol::����, Lang("����˼·�������߶�������ȥֻ������С�Σ������ǿ��԰Ѹ�һ���߶γ�һС�Σ��������ǰ��߶η�ΪA��B��C��D��E�����ǿ��԰Ѳ�ͬ�Ķ��������������AC��AD"));
	DefineLangVarInt(һ�����߶���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ�����߶���N1 һ�����߶���N1=����С����N1+(����С����N1-ÿ���ٵĶ���N3)+(����С����N1-ÿ���ٵĶ���N3-\nÿ���ٵĶ���N3)+(����С����N1-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3)+(����С����N1-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3-ÿ���ٵĶ���N3)"));
	һ�����߶���N1 = ����С����N1 + (����С����N1 - ÿ���ٵĶ���N3) + (����С����N1 - ÿ���ٵĶ���N3 - ÿ���ٵĶ���N3) + (����С����N1 - ÿ���ٵĶ���N3 - ÿ���ٵĶ���N3 - ÿ���ٵĶ���N3) + (����С����N1 - ÿ���ٵĶ���N3 - ÿ���ٵĶ���N3 - ÿ���ٵĶ���N3 - ÿ���ٵĶ���N3);
	һ�����߶���N1.PrintProcessLog(1);
}
void P34_2()
{
	LanguageLib::LanguageTableT Language = {
		{"Example 2 of P34: Graph segmentation and line segment segmentation","P34������ ͼ�ηָ��߶ηָ�"},
		{"Title: How many segments are there in the following picture?",
		"��Ŀ:��ͼһ���ж��ٶ�?"},
		{"Solution idea: These line segments are interspersed together. We can separate the two line segments and calculate their addition",
		"����˼·����Щ�߶δ���һ�����ǿ��԰������߶β������������"},
		{"1. Calculate the number of first line segments N1=the number of first individual segments N1+(the number of first individual segments N1 minus the number of segments N3 in each group)",
		"1.�����һ���߶���N1 ��һ���߶���N1=��һ������С����N1+(��һ������С����N1-ÿ���ٵĶ���N3)"},
		{"2. Calculate the number of second line segments N4. The number of second line segments N4 is equal to the number of individual segments N5 in the second line plus (the number of individual segments N5 in the second line minus the number of segments N3 in each group) plus (the number of individual segments N5 in the second line minus the number of segments N3 in each group minus the number of segments N3 in each group)",
		"2.����ڶ����߶���N4 �ڶ����߶���N4=�ڶ�������С����N5+(�ڶ�������С����N5-ÿ���ٵĶ���N3)+(�ڶ�������С����N5-ÿ���ٵĶ���N3-\nÿ���ٵĶ���N3)"},
		{"3. Calculate the total number of line segments N5=the first line segment N1+the second line segment N4",
		"3.����һ�����߶���N5 һ�����߶���N5=��һ���߶���N1+�ڶ����߶���N4"},
		//������
		{"TheFirstIndividualSegmentNumberN1","��һ������С����N1"},
		{"NumberOfSegmentsInEachGroupN3","ÿ���ٵĶ���N3"},
		{"Article2NumberOfIndividualSegmentsN5","�ڶ�������С����N5"},
		{"NumberOfFirstLineSegmentsN1","��һ���߶���N1"},
		{"TheSecondLineSegmentMumberN4","�ڶ����߶���N4"},
		{"TheTotalNumberOfLineSegmentsN5","һ�����߶���N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��һ������С����N1, 2);
	DefineLangVarInt(ÿ���ٵĶ���N3, 1);
	DefineLangVarInt(�ڶ�������С����N5, 3);
	ColPrintf(PrintfCol::����, Lang("P34����һ ͼ�ηָ��߶ηָ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:��ͼһ���ж��ٶ�?"));
	ScanningLine<6, 6,18,8> test;
	test.AddScanLineByEdgeGradient(2, 4.0, 2, 2, 4.0/4.0, 4.0 / 4.0, ' ', 0);
	test.AddScanLineByEdgeGradient(1, 5.0, 5, 5, -(5.0 / 5.0), -(5.0 / 5.0), ' ', 0);
	test.AddScanLineByEdgeGradient(2.35, 0.3, 2.5, 2.5, -(5.0 / 5.0), -(5.0 / 5.0), ' ', 0);
	test.AddScanLineByEdgeGradient(2.35, 0.3, 3.5, 3.5, 5.0 / 5.0, 5.0 / 5.0, ' ', 0);
	test.AddScanLineByEdgeGradient(3.35, 0.3, 3.5, 3.5, -(5.0 / 5.0), -(5.0 / 5.0), ' ', 0);
	test.AddScanLineByEdgeGradient(4.35, 0.3, 4.5, 4.5, -(5.0 / 5.0), -(5.0 / 5.0), ' ', 0);
	test.AddScanLineByEdgeGradient(5.35, 0.3, 0.5, 0.5, 5.0 / 5.0, 5.0 / 5.0, ' ', 0);
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Yellow);
	ColPrintf(PrintfCol::����, Lang("����˼·����Щ�߶δ���һ�����ǿ��԰������߶β������������"));
	DefineLangVarInt(��һ���߶���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����һ���߶���N1 ��һ���߶���N1=��һ������С����N1+(��һ������С����N1-ÿ���ٵĶ���N3)"));
	��һ���߶���N1 = ��һ������С����N1 + (��һ������С����N1 - ÿ���ٵĶ���N3);
	��һ���߶���N1.PrintProcessLog(1);
	DefineLangVarInt(�ڶ����߶���N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ڶ����߶���N4 �ڶ����߶���N4=�ڶ�������С����N5+(�ڶ�������С����N5-ÿ���ٵĶ���N3)+(�ڶ�������С����N5-ÿ���ٵĶ���N3-\nÿ���ٵĶ���N3)"));
	�ڶ����߶���N4 = �ڶ�������С����N5 + (�ڶ�������С����N5 - ÿ���ٵĶ���N3) + (�ڶ�������С����N5 - ÿ���ٵĶ���N3 - ÿ���ٵĶ���N3);
	�ڶ����߶���N4.PrintProcessLog(2);
	DefineLangVarInt(һ�����߶���N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.����һ�����߶���N5 һ�����߶���N5=��һ���߶���N1+�ڶ����߶���N4"));
	һ�����߶���N5 = ��һ���߶���N1 + �ڶ����߶���N4;
	һ�����߶���N5.PrintProcessLog(3);
}
void P34_3()
{
	LanguageLib::LanguageTableT Language = {
		{"Example 3 of P34: Graph segmentation and line segment segmentation","P34������ ͼ�ηָ��߶ηָ�"},
		{"Question: How many segments of graphics are there in the following picture?",
		"��Ŀ:��ͼһ���ж��ٶ�ͼ��?"},
		{"1. Calculate the number of first line segments N1=the number of first individual segments N1+(the number of first individual segments N1- the number of segments in each group N3)+(the number of first individual segments N1- the number of segments in each group N3- the number of segments in each group N3)",
		"����˼·������Ը����߶ε�˼�룬һ��һ�ε���������"},
		{"1. Calculate the total number of line segments N1. The total number of line segments N1=number of individual segments N1+(number of individual segments N2- number of segments\nN3 in each group)+(number of individual segments N2- number of segments N3 in each group - number of segments N3 in each group)+(number of individual segments N2- number\nof segments N3 in each group - number of segments N3 in each group)+(number of individual segments N2- number of segments N3 in each group - number of\nsegments N3 in each group - number of segments N3 in each group)",
		"1.�����һ��ͼ������N1 ��һ��ͼ������N1=��һ������Сͼ����N1+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3)"},
		{"2. Calculate the number of second layer graphics N2. The number of second layer graphics N2 is equal to the first single small graphics N1+(first single small graphics N1- number of fewer graphics N3 in each group)+(first single small graphics N1- number of fewer graphics N3 in each group - number of fewer graphics N3 in each group)+(first single small graphics N1- number of fewer graphics N3 in each group - number of fewer graphics N3 in each group)+(first single small graphics N1- number of fewer graphics N3 in each group - number of fewer graphics N3 in each group - number of fewer graphics N3 in each group)",
		"2.����ڶ���ͼ������N2 �ڶ���ͼ������N2=��һ������Сͼ����N1+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3)"},
		{"3. Calculate the total number of segments N3=the number of first layer graphics N1 * the number of rows in minutes N4",
		"3.�����ܹ�����N3 �ܹ�����N3=��һ��ͼ������N1*�ֵ�����N4"},
		//������
		{"TheFirstSmallFigureNumberN1","��һ������Сͼ����N1"},
		{"NumberOfRowsN4","�ֵ�����N4"},
		{"NumberOfGraphicsInEachGroupN3","ÿ���ٵ�ͼ����N3"},
		{"NumberN1InTheFirstLayerOfGraphics","��һ��ͼ������N1"},
		{"NumberN2InTheSecondLayerOfGraphics","�ڶ���ͼ������N2"},
		{"TotalNumberOfSegmentsN3","�ܹ�����N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��һ������Сͼ����N1, 5);
	DefineLangVarInt(ÿ���ٵ�ͼ����N3, 1);
	DefineLangVarInt(�ڶ�������С����N5, 3);
	DefineLangVarInt(�ֵ�����N4, 3);
	ColPrintf(PrintfCol::����, Lang("P34������ ͼ�ηָ��߶ηָ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:��ͼһ���ж��ٶ�ͼ��?"));
	ScanningLine<10, 10> test;
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, -(5.0 / 9.0), 4.0 / 9.0, ' ', 0);
	ScanLenHorizontalLine(test, 3.0, 3.5, 2.8, 0.3);
	ScanLenHorizontalLine(test, 6.0, 1.6, 6.0, 0.3);
	ScanLenHorizontalLine(test, 9, 0, 8.9, 0.3);
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, -(2.0 / 9.0), -(2.0 / 9.0), ' ', 0);
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, 0, 0, ' ', 0);
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, -(1.0 / 9.0), -(1.0 / 9.0), ' ', 0);
	test.AddScanLineByEdgeGradient(0, 9.0, 5, 5, -(-1.0 / 9.0), -(-1.0 / 9.0), ' ', 0);
	test.AddText(PrintfCol::�����ע, 0.3, 4.7, "A");
	test.AddText(PrintfCol::�����ע, 9.5, 0.3, "B");
	test.AddText(PrintfCol::�����ע, 9.5, 3, "C");
	test.AddText(PrintfCol::�����ע, 9.5, 4, "D");
	test.AddText(PrintfCol::�����ע, 9.5, 5, "E");
	test.AddText(PrintfCol::�����ע, 9.5, 6, "F");
	test.AddText(PrintfCol::�����ע, 9.5, 9, "G");
	test.Clear();
	test.Draw();
	test.Printf(PrintfCol::Green);
	DefineLangVarInt(��һ��ͼ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����һ��ͼ������N1 ��һ��ͼ������N1=��һ������Сͼ����N1+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3)"));
	��һ��ͼ������N1 = ��һ������Сͼ����N1 + (��һ������Сͼ����N1 - ÿ���ٵ�ͼ����N3) + (��һ������Сͼ����N1 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3) + (��һ������Сͼ����N1 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3) + (��һ������Сͼ����N1 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3);
	��һ��ͼ������N1.PrintProcessLog(1);
	DefineLangVarInt(�ڶ���ͼ������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ڶ���ͼ������N2 �ڶ���ͼ������N2=��һ������Сͼ����N1+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3)+(��һ������Сͼ����N1-ÿ���ٵ�ͼ����N3-\nÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3-ÿ���ٵ�ͼ����N3)"));
	�ڶ���ͼ������N2 = ��һ������Сͼ����N1 + (��һ������Сͼ����N1 - ÿ���ٵ�ͼ����N3) + (��һ������Сͼ����N1 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3) + (��һ������Сͼ����N1 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3) + (��һ������Сͼ����N1 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3 - ÿ���ٵ�ͼ����N3);
	�ڶ���ͼ������N2.PrintProcessLog(2);
	DefineLangVarInt(�ܹ�����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ܹ�����N3 �ܹ�����N3=��һ��ͼ������N1*�ֵ�����N4"));
	�ܹ�����N3 = ��һ��ͼ������N1 * �ֵ�����N4;
	�ܹ�����N3.PrintProcessLog(3);
}
void P34()
{
	P34_1();
	ColPrintf(PrintfCol::����, "");
	P34_2();
	ColPrintf(PrintfCol::����, "");
	P34_3();
	ColPrintf(PrintfCol::����, "");
}
void P34_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P34();
	Lang.SetCurLanguage(LanguageLib::English);
	P34();
	ColPrintf(PrintfCol::����, "");

}