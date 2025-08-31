#pragma once
void P26_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P26 case one filling method","P26��һ ���"},
		{"Title: As shown in the figure, calculate the shadow area",
		"��Ŀ����ͼ��ʾ��������Ӱ���"},
		{"1. Calculate the shadow area S1. Shadow area S1=length A1 * width B1",
		"1.������Ӱ���S1 ��Ӱ���S1=��A1*��B1"},
		{"Answer: The shadow area S1 is %d cm",
		"����Ӱ���S1��%dcm"},
		//������
		{"Shadow area S1","��Ӱ���S1"},
		{"Long A1","��A1"},
		{"Width B1","��B1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	const char* pPic =
		" +\n"
		" |  0\n"
		" |    0\n"
		" |      0\n"
		"4|        0\n"
		" |          0\n"
		" |            0\n"
		" |              0\n"
		" +--------------+ 0\n"
		" |              |   0\n"
		" |              |     0\n"
		" |              |       0\n"
		" |              |         0\n"
		" |              |           0\n"
		" |              |             0\n"
		" +--------------+---------------0\n"
		"                        6\n"
		
		;
	DefineLangVarInt(��A1, 6);
	DefineLangVarInt(��B1, 4);
	ColPrintf(PrintfCol::����, Lang("P26��һ ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ��������Ӱ���"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(��Ӱ���S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������Ӱ���S1 ��Ӱ���S1=��A1*��B1"));
	��Ӱ���S1 = ��A1 * ��B1;
	��Ӱ���S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::���, Lang("����Ӱ���S1��%dcm"), (int)��Ӱ���S1);
}
void P26_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P26 case one filling method","P26���� ���"},
		{"Title: As shown in the figure, calculate the shadow area",
		"��Ŀ����ͼ��ʾ�������Ǹ������εĸ�"},
		{"1. Calculate the height H1 of a triangle. The height H1 of a triangle is equal to the area S1 divided by the base B1",
		"1.���������εĸ�H1 �����εĸ�H1=���S1/��B1"},
		{"Answer: The shadow area S1 is %f cm",
		"�������εĸ�H1��%fcm"},
		//������
		{"Shadow area S1","�����εĸ�H1"},
		{"Long A1","���S1"},
		{"Width B1","��B1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,���S1, 38);
	DefineLangVar(float,��B1, 5);
	const char* pPic =
		" +\n"
		" |  0\n"
		" |    0\n"
		" |      0\n"
		"5|        0\n"
	    " |          0\n"
		" |            0\n"
		" |              0\n"
		" +--------------+ 0\n"
		" |              |   0\n"
		" |              |     0\n"
		" |     38       |       0\n"
		" |              |         0\n"
		" |              |           0\n"
		" |              |             0\n"
		" +--------------+---------------0\n"
		;
	ColPrintf(PrintfCol::����, Lang("P26���� ���"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ��ʾ��������Ӱ���"));
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVar(float,�����εĸ�H1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���������εĸ�H1 �����εĸ�H1=���S1/��B1"));
	�����εĸ�H1 = ���S1 / ��B1;
	�����εĸ�H1.PrintProcessLog(1);
	ColPrintf(PrintfCol::���, Lang("�������εĸ�H1��%fcm"), (float)�����εĸ�H1.Var);
}
void P26()
{
	P26_1();
	ColPrintf(PrintfCol::����, "");
	P26_2();
	ColPrintf(PrintfCol::����, "");
}
void P26_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P26();
	Lang.SetCurLanguage(LanguageLib::English);
	P26();
	ColPrintf(PrintfCol::����, "");
}