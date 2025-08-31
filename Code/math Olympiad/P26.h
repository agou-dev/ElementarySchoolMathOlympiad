#pragma once
void P26_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P26 case one filling method","P26例一 填补法"},
		{"Title: As shown in the figure, calculate the shadow area",
		"题目：如图所示，计算阴影面积"},
		{"1. Calculate the shadow area S1. Shadow area S1=length A1 * width B1",
		"1.计算阴影面积S1 阴影面积S1=长A1*宽B1"},
		{"Answer: The shadow area S1 is %d cm",
		"答：阴影面积S1是%dcm"},
		//变量表
		{"Shadow area S1","阴影面积S1"},
		{"Long A1","长A1"},
		{"Width B1","宽B1"},
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
	DefineLangVarInt(长A1, 6);
	DefineLangVarInt(宽B1, 4);
	ColPrintf(PrintfCol::标题, Lang("P26例一 填补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示，计算阴影面积"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(阴影面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算阴影面积S1 阴影面积S1=长A1*宽B1"));
	阴影面积S1 = 长A1 * 宽B1;
	阴影面积S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::结果, Lang("答：阴影面积S1是%dcm"), (int)阴影面积S1);
}
void P26_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P26 case one filling method","P26例二 填补法"},
		{"Title: As shown in the figure, calculate the shadow area",
		"题目：如图所示，计算那个三角形的高"},
		{"1. Calculate the height H1 of a triangle. The height H1 of a triangle is equal to the area S1 divided by the base B1",
		"1.计算三角形的高H1 三角形的高H1=面积S1/底B1"},
		{"Answer: The shadow area S1 is %f cm",
		"答：三角形的高H1是%fcm"},
		//变量表
		{"Shadow area S1","三角形的高H1"},
		{"Long A1","面积S1"},
		{"Width B1","底B1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,面积S1, 38);
	DefineLangVar(float,底B1, 5);
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
	ColPrintf(PrintfCol::标题, Lang("P26例二 填补法"));
	ColPrintf(PrintfCol::标题, Lang("题目：如图所示，计算阴影面积"));
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVar(float,三角形的高H1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算三角形的高H1 三角形的高H1=面积S1/底B1"));
	三角形的高H1 = 面积S1 / 底B1;
	三角形的高H1.PrintProcessLog(1);
	ColPrintf(PrintfCol::结果, Lang("答：三角形的高H1是%fcm"), (float)三角形的高H1.Var);
}
void P26()
{
	P26_1();
	ColPrintf(PrintfCol::方法, "");
	P26_2();
	ColPrintf(PrintfCol::方法, "");
}
void P26_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P26();
	Lang.SetCurLanguage(LanguageLib::English);
	P26();
	ColPrintf(PrintfCol::方法, "");
}