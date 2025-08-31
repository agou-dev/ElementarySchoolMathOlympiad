#pragma once
void P29_1()
{
	LanguageLib::LanguageTableT Language = {
		{"Example of P29: Numerical Method","P29����һ ������"},
		{"Title: As shown in the figure, in ABC, BC=4BD��AE=ED, The shaded area is 250.75cm. What is the area of ABC?",
		"��Ŀ����ͼ��ʾ��ABC�У�BC=4BD��AE=ED,��Ӱ���������250.75cm��ABC������Ƕ��٣�"},
		{"1. Calculate the area S1 of the segment after segmentation. The area S1 of the segment after segmentation is equal to the area of\nthe shaded area multiplied by the shaded area multiplied by a multiple of the shaded area",
		"1.����ֶκ�һ�ݵ����S1 �ֶκ�һ�ݵ����S1=��Ӱ���ֵ����S2*��Ӱ�����������һ�ݵı���N1"},
		{"2. Calculate the area S3 of triangle ABC. The area S3 of triangle ABC is equal to the area of the next segment S1 multiplied by the number of segments N2",
		"2.����������ABC�����S3 ������ABC�����S3=�ֶκ�һ�ݵ����S1*�ֶεķ���N2"},
		{"Answer: The area of ABC is%fcm",
		"��ABC�������%fcm"},
		//������
		{"TheAreaOfTheShadedAreaS2","��Ӱ���ֵ����S2"},
		{"TheAreaOfTheShadedAreaIsAMultipleOfN1","��Ӱ�����������һ�ݵı���N1"},
		{"NumberOfSegmentsN2","�ֶεķ���N2"},
		{"TheAreaS1OfTheNextSectionAfterSegmentation","�ֶκ�һ�ݵ����S1"},
		{"TheAreaS3OfTriangleABC","������ABC�����S3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<6, 7, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 2.0, 3.0, 3.0, -(1.0 / 2.0), -(0.5 / 2.0),' ');
	Screen.AddScanLineByEdgeGradient(3.0, 2.0, 2.0, 2.5, -(1.0 / 2.0), -(1.5 / 2.0), ' ');
	Screen.AddScanLineByEdgeGradient(3.0, 2.0, 2.5, 2.5, -(1.5 / 2.0), -(0.5 / 2.0));
	Screen.AddScanLineByEdgeGradient(1.0, 4.0, 3.0, 3.0, -(1.0 / 4.0), 2.0 / 4.0,' ');
	//�ױ�
	Screen.AddScanLineByEdgeGradient(5.0, 1.0, 1.0, 5.0, 4.0 / 0.1, -(4.0 / 0.1), '*');

	Screen.AddText(PrintfCol::�����ע, 0.7, 3.3, "A");
	Screen.AddText(PrintfCol::�����ע, 5.3, 0.7, "B");
	Screen.AddText(PrintfCol::�����ע, 5.3, 5.3, "C");
	Screen.AddText(PrintfCol::�����ע, 5.5, 1.7, "D");
	Screen.AddText(PrintfCol::�����ע, 3.5, 2.7, "E");
	DefineLangVar(float, ��Ӱ���ֵ����S2, 250.75);
	DefineLangVar(float, ��Ӱ�����������һ�ݵı���N1, 2);
	DefineLangVar(float, �ֶεķ���N2, 4);
	ColPrintf(PrintfCol::����, Lang("P29����һ ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ��ABC�У�BC=4BD��AE=ED,��Ӱ���������250.75cm��ABC������Ƕ��٣�"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVar(float, �ֶκ�һ�ݵ����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ֶκ�һ�ݵ����S1 �ֶκ�һ�ݵ����S1=��Ӱ���ֵ����S2*��Ӱ�����������һ�ݵı���N1"));
	�ֶκ�һ�ݵ����S1 = ��Ӱ���ֵ����S2 * ��Ӱ�����������һ�ݵı���N1;
	�ֶκ�һ�ݵ����S1.PrintProcessLog(1);
	DefineLangVar(float, ������ABC�����S3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����������ABC�����S3 ������ABC�����S3=�ֶκ�һ�ݵ����S1*�ֶεķ���N2"));
	������ABC�����S3 = �ֶκ�һ�ݵ����S1 * �ֶεķ���N2;
	������ABC�����S3.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("��ABC�������%fcm"), (float)������ABC�����S3);
}
void P29_2()
{ 
	LanguageLib::LanguageTableT Language = {
		{"Example of P29: Two part Number Method","P29������ ������"},
		{"Title: As shown in the figure, DB=3AB, 2AB=CD. Given that the area of ABC is 3cm, what is the area of ADE?",
		"��Ŀ����ͼ��ʾDB=3AB��2AB=CD����֪ABC�������3cm��ADE������Ƕ���?"},
		{"1. Calculate the area S1 of ABE. The area S1 of ABE is equal to the area S2 of ABE multiplied by the number of parts N1 divided by the triangle",
		"1.����ABC�����S1 ABC�����S1=ABE�����S2*ABE�ֳɵķ���N1"},
		{"2. Calculate the area S3 of ADE=the area S1 of ABE * the number of parts N2 that the entire graph is divided into",
		"2.����ADE�����S3 ADE�����S3=ABC�����S1*����ͼ�ηֳɵķ���N2"},
		{"Answer: The area of ADE is%dcm",
		"��ADE�������%dcm"},
		//������
		{"ABEAreaS2","ABE�����S2"},
		{"NumberOfABESharesN1","ABE�ֳɵķ���N1"},
		{"ABCAreaS3","ABC�����S1"},
		{"TheEntireGraphicIsDividedIntoN2Parts","����ͼ�ηֳɵķ���N2"},
		{"ADEAreaS3","ADE�����S3"},
	};
	Lang.AddLanguageTable(
		Language
	);

	ScanningLine<4, 4, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(0.0, 2.0, 3.0, 3.0, -(2.0 / 2.0), 1.0 / 3.0, ' ');
	Screen.AddScanLineByEdgeGradient(2.0, 1.0, 1, 3.7, 1.0 / 1.0, 1.0 / 3.0, ' ');

	Screen.AddScanLineByEdgeGradient(2.0, 1.0, 1.0, 1.0, -(1.0 / 1.0), 1.0 / 1.0, '0');

	Screen.AddScanLineByEdgeGradient(3.0, 1.0, 0.0, 4.0, 4.0 / 0.1, -(4.0 / 0.1), '*');
	DefineLangVarInt(ABE�����S2, 3);
	DefineLangVarInt(ABE�ֳɵķ���N1, 3);
	DefineLangVarInt(����ͼ�ηֳɵķ���N2, 4);
	ColPrintf(PrintfCol::����, Lang("P29������ ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ��ABC�У�BC=4BD��AE=ED,��Ӱ���������250.75cm��ABC������Ƕ��٣�"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(ABC�����S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ABC�����S1 ABC�����S1=ABE�����S2*ABE�ֳɵķ���N1"));
	ABC�����S1 = ABE�����S2 * ABE�ֳɵķ���N1;
	ABC�����S1.PrintProcessLog(1);
	DefineLangVarInt(ADE�����S3, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ADE�����S3 ADE�����S3=ABC�����S1*����ͼ�ηֳɵķ���N2"));
	ADE�����S3 = ABC�����S1 * ����ͼ�ηֳɵķ���N2;
	ADE�����S3.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("��ADE�������%dcm"), (int)ADE�����S3);
}
void P29()
{
	P29_1();
	ColPrintf(PrintfCol::����, "");
	P29_2();
	ColPrintf(PrintfCol::����, "");
}
void P29_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P29();
	Lang.SetCurLanguage(LanguageLib::English);
	P29();
	ColPrintf(PrintfCol::����, "");

}