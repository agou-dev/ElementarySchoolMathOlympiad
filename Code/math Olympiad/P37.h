#pragma once
//共8道题
void P37_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 1 Volume Problem","P37例一 体积问题"},
		{"Title: Three rectangular water pools with side lengths of 5cm, 3cm, and 2cm. If two piles of crushed stones are placed in the middle and small\npools respectively, the water level will rise by 6cm and 4cm. If two piles of\ncrushed stones are placed in the large pool, how much will the water level rise by?",
		"题目：大中小三个长方形水池内边长为5cm，3cm，2cm，把两堆碎石分别放入中，小水池，水面升高6cm，4cm，如果把两堆碎石放入大水池里，水面升高多少cm?"},
		{"1. Unified unit 5m=500cm 3m=300cm 2m=200cm",
		"1.统一单位 5m=500cm 3m=300cm 2m=200cm"},
		{"2. Calculate the volume V1 of the first pile of crushed stones. The volume V1 of the first pile of\ncrushed stones is equal to the side length A2 of the middle water tank multiplied by the side length A2 of the middle water\ntank multiplied by the water level rise H1 of the middle water tank",
		"2.计算第一堆碎石体积V1 第一堆碎石体积V1=中水池边长A2*中水池边长A2*中水池水面升高H1"},
		{"3. Calculate the volume V2 of the second pile of crushed stones. The volume V2 of\nthe second pile of crushed stones is equal to the side length A3 of the small water tank * the side length A3 of the\nsmall water tank * the water level rise H2 of the small water tank",
		"3.计算第二堆碎石体积V2 第二堆碎石体积V2=小水池边长A3*小水池边长A3*小水池水面升高H2"},
		{"4. Calculate the total volume of crushed stones V3=the volume of the first pile of crushed stones V1+the volume of the second pile of crushed stones V2",
		"4.计算一共碎石体积V3 一共碎石体积V3=第一堆碎石体积V1+第二堆碎石体积V2"},
		{"5. Calculate the water level rise H3 when placed in the large water tank. The water level rise H3 when placed\nin the large water tank is equal to the total volume of crushed stones V3 divided by\n(the side length A1 of the large water tank * the side length A1 of the large water tank)",
		"5.计算放入大水池时水面升高H3 放入大水池时水面升高H3=一共碎石体积V3/(大水池边长A1*大水池边长A1)"},
		//变量表
		{"ThesidelengthofthemiddlewatertankisA2","中水池边长A2"},
		{"ThewaterlevelofthemiddlewatertankrisesH1","中水池水面升高H1"},
		{"SmallpoolwithsidelengthA3","小水池边长A3"},
		{"ThewaterlevelofthesmallpoolrisesbyH2","小水池水面升高H2"},
		{"ThesidelengthofthelargewatertankisA1","大水池边长A1"},
		{"VolumeV1ofthefirstpileofcrushedstones","第一堆碎石体积V1"},
		{"VolumeV2ofthesecondpileofcrushedstones","第二堆碎石体积V2"},
		{"TotalgravelvolumeV3","一共碎石体积V3"},
		{"Whenplacedinthelargepool,thewaterlevelrisesbyH3","放入大水池时水面升高H3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,中水池边长A2, 3);
	DefineLangVar(float,中水池水面升高H1, 6);
	DefineLangVar(float,小水池边长A3, 2);
	DefineLangVar(float,小水池水面升高H2, 4);
	DefineLangVar(float,大水池边长A1, 5);
	ColPrintf(PrintfCol::标题, Lang("P37例一 体积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：大中小三个长方形水池内边长为5cm，3cm，2cm，把两堆碎石分别放入中，小水池，水面升高6cm，4cm，如果把两堆碎石放入大水池里，水面升高多少cm?"));
	ColPrintf(PrintfCol::方法, Lang("1.统一单位 5m=500cm 3m=300cm 2m=200cm"));
	大水池边长A1.Var = 500;
	中水池边长A2.Var = 300;
	小水池边长A3.Var = 200;
	DefineLangVar(float, 第一堆碎石体积V1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第一堆碎石体积V1 第一堆碎石体积V1=中水池边长A2*中水池边长A2*中水池水面升高H1"));
	第一堆碎石体积V1 = 中水池边长A2 * 中水池边长A2 * 中水池水面升高H1;
	第一堆碎石体积V1.PrintProcessLog(2);
	DefineLangVar(float, 第二堆碎石体积V2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算第二堆碎石体积V2 第二堆碎石体积V2=小水池边长A3*小水池边长A3*小水池水面升高H2"));
	第二堆碎石体积V2 = 小水池边长A3 * 小水池边长A3 * 小水池水面升高H2;
	第二堆碎石体积V2.PrintProcessLog(3);
	DefineLangVar(float, 一共碎石体积V3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算一共碎石体积V3 一共碎石体积V3=第一堆碎石体积V1+第二堆碎石体积V2"));
	一共碎石体积V3 = 第一堆碎石体积V1 + 第二堆碎石体积V2;
	一共碎石体积V3.PrintProcessLog(4);
	DefineLangVar(float, 放入大水池时水面升高H3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算放入大水池时水面升高H3 放入大水池时水面升高H3=一共碎石体积V3/(大水池边长A1*大水池边长A1)"));
	放入大水池时水面升高H3 = 一共碎石体积V3 / (大水池边长A1 * 大水池边长A1);
	放入大水池时水面升高H3.PrintProcessLog(5);
}
void P37_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 1 Volume Problem","P37例一的变式练习 体积问题"},
		{"Title: Three rectangular water pools with side lengths of 5cm, 3cm, and 2cm. If two piles of crushed stones are placed in the middle and small\npools respectively, the water level will rise by 6cm and 4cm. If two piles of\ncrushed stones are placed in the large pool, how much will the water level rise by?",
		"题目：大中小三个长方形水池内边长为4cm，3cm，2cm，把两堆碎石分别放入中，小水池，水面升高4cm，11cm，如果把两堆碎石放入大水池里，水面升高多少cm?"},
		{"1. Unified unit 4m=400cm 3m=300cm 2m=200cm",
		"1.统一单位 4m=400cm 3m=300cm 2m=200cm"},
		{"2. Calculate the volume V1 of the first pile of crushed stones. The volume V1 of the first pile of\ncrushed stones is equal to the side length A2 of the middle water tank multiplied by the side length A2 of the middle water\ntank multiplied by the water level rise H1 of the middle water tank",
		"2.计算第一堆碎石体积V1 第一堆碎石体积V1=中水池边长A2*中水池边长A2*中水池水面升高H1"},
		{"3. Calculate the volume V2 of the second pile of crushed stones. The volume V2 of\nthe second pile of crushed stones is equal to the side length A3 of the small water tank * the side length A3 of the\nsmall water tank * the water level rise H2 of the small water tank",
		"3.计算第二堆碎石体积V2 第二堆碎石体积V2=小水池边长A3*小水池边长A3*小水池水面升高H2"},
		{"4. Calculate the total volume of crushed stones V3=the volume of the first pile of crushed stones V1+the volume of the second pile of crushed stones V2",
		"4.计算一共碎石体积V3 一共碎石体积V3=第一堆碎石体积V1+第二堆碎石体积V2"},
		{"5. Calculate the water level rise H3 when placed in the large water tank. The water level rise H3 when placed\nin the large water tank is equal to the total volume of crushed stones V3 divided by\n(the side length A1 of the large water tank * the side length A1 of the large water tank)",
		"5.计算放入大水池时水面升高H3 放入大水池时水面升高H3=一共碎石体积V3/(大水池边长A1*大水池边长A1)"},
		//变量表
		{"ThesidelengthofthemiddlewatertankisA2","中水池边长A2"},
		{"ThewaterlevelofthemiddlewatertankrisesH1","中水池水面升高H1"},
		{"SmallpoolwithsidelengthA3","小水池边长A3"},
		{"ThewaterlevelofthesmallpoolrisesbyH2","小水池水面升高H2"},
		{"ThesidelengthofthelargewatertankisA1","大水池边长A1"},
		{"VolumeV1ofthefirstpileofcrushedstones","第一堆碎石体积V1"},
		{"VolumeV2ofthesecondpileofcrushedstones","第二堆碎石体积V2"},
		{"TotalgravelvolumeV3","一共碎石体积V3"},
		{"Whenplacedinthelargepool,thewaterlevelrisesbyH3","放入大水池时水面升高H3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 中水池边长A2, 3);
	DefineLangVar(float, 中水池水面升高H1, 4);
	DefineLangVar(float, 小水池边长A3, 2);
	DefineLangVar(float, 小水池水面升高H2, 11);
	DefineLangVar(float, 大水池边长A1, 4);
	ColPrintf(PrintfCol::标题, Lang("P37例一 体积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：大中小三个长方形水池内边长为5cm，3cm，2cm，把两堆碎石分别放入中，小水池，水面升高6cm，4cm，如果把两堆碎石放入大水池里，水面升高多少cm?"));
	ColPrintf(PrintfCol::方法, Lang("1.统一单位 4m=400cm 3m=300cm 2m=200cm"));
	大水池边长A1.Var = 400;
	中水池边长A2.Var = 300;
	小水池边长A3.Var = 200;
	DefineLangVar(float, 第一堆碎石体积V1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第一堆碎石体积V1 第一堆碎石体积V1=中水池边长A2*中水池边长A2*中水池水面升高H1"));
	第一堆碎石体积V1 = 中水池边长A2 * 中水池边长A2 * 中水池水面升高H1;
	第一堆碎石体积V1.PrintProcessLog(2);
	DefineLangVar(float, 第二堆碎石体积V2, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算第二堆碎石体积V2 第二堆碎石体积V2=小水池边长A3*小水池边长A3*小水池水面升高H2"));
	第二堆碎石体积V2 = 小水池边长A3 * 小水池边长A3 * 小水池水面升高H2;
	第二堆碎石体积V2.PrintProcessLog(3);
	DefineLangVar(float, 一共碎石体积V3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算一共碎石体积V3 一共碎石体积V3=第一堆碎石体积V1+第二堆碎石体积V2"));
	一共碎石体积V3 = 第一堆碎石体积V1 + 第二堆碎石体积V2;
	一共碎石体积V3.PrintProcessLog(4);
	DefineLangVar(float, 放入大水池时水面升高H3, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算放入大水池时水面升高H3 放入大水池时水面升高H3=一共碎石体积V3/(大水池边长A1*大水池边长A1)"));
	放入大水池时水面升高H3 = 一共碎石体积V3 / (大水池边长A1 * 大水池边长A1);
	放入大水池时水面升高H3.PrintProcessLog(5);
}
void P37_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 2 Volume Problem","P37例二 体积问题"},
		{"Title: In a cylinder with a bottom radius of 10cm and a water depth of 8cm, place an iron block with a length and width of 8cm and a height of 15cm inside the bottle. The iron block is placed vertically, and how much has it risen?",
		"题目：一个底面半径为10cm的圆柱中水深8cm，在瓶内放入一个长宽都是8cm，高是15cm，铁块，铁块是竖着放的，上升了多少？"},
		{"1. Calculate the original volume V1 of water, which is equal to pi * cylinder radius N1 * cylinder radius N1 * water depth H1",
		"1.计算原本水的体积V1 原本水的体积V1=圆周率PI*圆柱缸半径N1*圆柱缸半径N1*水深H1"},
		{"2. Calculate the remaining bottom area S1 after inserting the iron block. The remaining bottom area S1 after inserting\nthe iron block is calculated as (pi * cylinder radius N1 * cylinder radius N1) - (iron block\nlength and width A1 * iron block length and width A1)",
		"2.计算铁块放入后剩下底面积S1 铁块放入后剩下底面积S1=(圆周率PI*圆柱缸半径N1*圆柱缸半径N1)-(铁块长宽A1*铁块长宽A1)"},
		{"3. Calculate the height H1 after the water surface rises. The height H1 after the water surface rises is equal to the original volume V1 of the water divided by the remaining bottom area S1 after the iron block is placed",
		"3.计算水面上升后的高度H1 水面上升后的高度H1=原本水的体积V1/铁块放入后剩下底面积S1"},
		{"4. Calculate the rise height H2. Rise height H2=height after the water surface rises H1- water depth H1",
		"4.计算上升高度H2 上升高度H2=水面上升后的高度H1-水深H1"},
		//变量表
		{"Pi(pi)","圆周率PI"},
		{"CylinderradiusN1","圆柱缸半径N1"},
		{"DepthH1","水深H1"},
		{"IronblocklengthandwidthA1","铁块长宽A1"},
		{"TheoriginalvolumeofwaterV1","原本水的体积V1"},
		{"Afterinsertingtheironblock,theremainingbottomareaisS1","铁块放入后剩下底面积S1"},
		{"HeightH1afterthewatersurfacerises","水面上升后的高度H1"},
		{"ElevationH2","上升高度H2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 圆周率PI, 3.14);
	DefineLangVar(float, 圆柱缸半径N1, 10);
	DefineLangVar(float, 水深H1, 8);
	DefineLangVar(float, 铁块长宽A1, 8);
	ColPrintf(PrintfCol::标题, Lang("P37例二 体积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个底面半径为10cm的圆柱中水深8cm，在瓶内放入一个长宽都是8cm，高是15cm，铁块，铁块是竖着放的，上升了多少？"));
	DefineLangVar(float, 原本水的体积V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算原本水的体积V1 原本水的体积V1=圆周率PI*圆柱缸半径N1*圆柱缸半径N1*水深H1"));
	原本水的体积V1 = 圆周率PI * 圆柱缸半径N1 * 圆柱缸半径N1 * 水深H1;
	原本水的体积V1.PrintProcessLog(1);
	DefineLangVar(float, 铁块放入后剩下底面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算铁块放入后剩下底面积S1 铁块放入后剩下底面积S1=(圆周率PI*圆柱缸半径N1*圆柱缸半径N1)-(铁块长宽A1*铁块长宽A1)"));
	铁块放入后剩下底面积S1 = (圆周率PI * 圆柱缸半径N1 * 圆柱缸半径N1) - (铁块长宽A1 * 铁块长宽A1);
	铁块放入后剩下底面积S1.PrintProcessLog(2);
	DefineLangVar(float, 水面上升后的高度H1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算水面上升后的高度H1 水面上升后的高度H1=原本水的体积V1/铁块放入后剩下底面积S1"));
	水面上升后的高度H1 = 原本水的体积V1 / 铁块放入后剩下底面积S1;
	水面上升后的高度H1.PrintProcessLog(3);
	DefineLangVar(float, 上升高度H2, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算上升高度H2 上升高度H2=水面上升后的高度H1-水深H1"));
	上升高度H2 = 水面上升后的高度H1 - 水深H1;
	上升高度H2.PrintProcessLog(4);
}
void P37_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example Two Variation Practice Volume Problem","P37例二变式练习 体积问题"},
		{"Title: In a glass with a bottom area of 15cm ^ 2, the height of water is 3cm. Now, place a cylinder with a bottom radius of 1cm and a height of 5cm. How many centimeters has the water level risen? (Pi is 3)",
		"题目：一个底面积为15cm^2的玻璃杯中水的高度是3cm，现在放入一个底面半径是1cm，高度为5厘米的圆柱，请问水面上升了多少厘米?(Pi为3)"},
		{"1. Calculate the volume of drainage V1. The volume of drainage V1=pi * cylinder radius N1 * cylinder radius N1 * cylinder height H1",
		"1.计算排水的体积V1 排水的体积V1=圆周率PI*圆柱半径N1*圆柱半径N1*圆柱的高H1"},
		{"2. Calculate the original water volume V2 of the glass cup. The original water volume V2 of the glass cup is equal to the bottom area V3 of the glass cup multiplied by the water height H2",
		"2.计算玻璃杯原有水体积V2 玻璃杯原有水体积V2=玻璃杯底面积V3*水高度H2"},
		{"3. Calculate the bottom area of the glass cup in contact with water S1=the volume of drainage V1- (pi * cylinder radius N1 * cylinder radius N1)",
		"3.计算水接触的玻璃杯底面积S1 水接触的玻璃杯底面积S1=排水的体积V1-(圆周率PI*圆柱半径N1*圆柱半径N1)"},
		{"4. Calculate the height H3 after the water rises, which is equal to the original water volume V2 of the glass cup divided by the bottom area S1 of the glass cup in contact with water",
		"4.计算水上升后的高度H3 水上升后的高度H3=玻璃杯原有水体积V2/水接触的玻璃杯底面积S1"},
		{"5. Calculate the rise height H4. Rise height H4=height of water after rising H3- water height H2",
		"5.计算上升高度H4 上升高度H4=水上升后的高度H3-水高度H2"},
		//变量表
		{"Pi(pi)","圆周率PI"},
		{"CylinderradiusN1","圆柱半径N1"},
		{"CylinderheightH1","圆柱的高H1"},
		{"GlassbottomareaV3","玻璃杯底面积V3"},
		{"WaterheightH2","水高度H2"},
		{"DrainagevolumeV1","排水的体积V1"},
		{"TheoriginalwatervolumeoftheglasscupisV2","玻璃杯原有水体积V2"},
		{"HeightH3afterwaterrises","水上升后的高度H3"},
		{"RisingheightH4","上升高度H4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 圆周率PI, 3);
	DefineLangVar(float, 圆柱半径N1, 1);
	DefineLangVar(float, 圆柱的高H1, 5);
	DefineLangVar(float, 玻璃杯底面积V3, 15);
	DefineLangVar(float, 水高度H2, 3);
	ColPrintf(PrintfCol::标题, Lang("P37例二 体积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个底面半径为10cm的圆柱中水深8cm，在瓶内放入一个长宽都是8cm，高是15cm，铁块，铁块是竖着放的，上升了多少？"));
	DefineLangVar(float, 排水的体积V1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算排水的体积V1 排水的体积V1=圆周率PI*圆柱半径N1*圆柱半径N1*圆柱的高H1"));
	排水的体积V1 = 圆周率PI * 圆柱半径N1 * 圆柱半径N1 * 圆柱的高H1;
	排水的体积V1.PrintProcessLog(1);
	DefineLangVar(float, 玻璃杯原有水体积V2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算玻璃杯原有水体积V2 玻璃杯原有水体积V2=玻璃杯底面积V3*水高度H2"));
	玻璃杯原有水体积V2 = 玻璃杯底面积V3 * 水高度H2;
	玻璃杯原有水体积V2.PrintProcessLog(2);
	DefineLangVar(float, 水接触的玻璃杯底面积S1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算水接触的玻璃杯底面积S1 水接触的玻璃杯底面积S1=排水的体积V1-(圆周率PI*圆柱半径N1*圆柱半径N1)"));
	水接触的玻璃杯底面积S1 = 排水的体积V1 - (圆周率PI * 圆柱半径N1 * 圆柱半径N1);
	水接触的玻璃杯底面积S1.PrintProcessLog(3);
	DefineLangVar(float, 水上升后的高度H3, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算水上升后的高度H3 水上升后的高度H3=玻璃杯原有水体积V2/水接触的玻璃杯底面积S1"));
	水上升后的高度H3 = 玻璃杯原有水体积V2 / 水接触的玻璃杯底面积S1;
	水上升后的高度H3.PrintProcessLog(4);
	DefineLangVar(float, 上升高度H4, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算上升高度H4 上升高度H4=水上升后的高度H3-水高度H2"));
	上升高度H4 = 水上升后的高度H3 - 水高度H2;
	上升高度H4.PrintProcessLog(5);
}
/*void P37_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 3 Volume Problem","P37例三 体积问题"},
		{"Title: The flour mill has a 24 cubic meter energy tank, which is twice the length, width, or height. When it is stacked in a semi conical shape with its largest side, what is the volume of flour?",
		"题目：面粉厂有一个24立方米能量池，它的长是宽或高的2倍，当它以最大侧面堆成一个半圆锥形，面粉的体积是多少？"},
		{"Let the height be x, the length be 2x, the width be x, and the radius be x",
		"设高为x，长为2x，宽为x，半径为x"},
		{"1. List equation S1: Cylinder volume 3.14 * (1/3) * x ^ 2 * x/2",
		"1.列出式子S1圆柱体体积 3.14*(1/3)*x^2*x/2"},
		{"2. Simplify equation S1 to obtain cylindrical volume S2 3.14 * (1/6) * x ^ 3",
		"2.化简式子S1得到圆柱体体积S2 3.14*(1/6)*x^3"},
		{"3. Rectangular volume 2x * x * x=2x ^ 3=>S3: 2x ^ 3=24=>S4: x ^ 3=12",
		"3.长方形体积 2x*x*x=2x^3=>S3:2x^3=24=>S4:x^3=12"},
		{"4. Substitute S4 into S2 to obtain the cylindrical volume S5 3.14 * (1/6) * 12",
		"4.把S4带入S2得到圆柱体体积S5 3.14*(1/6)*12"},
		//变量表
		{"PI","圆周率PI"},
		{"VolumeV1ofFlour","面粉的体积V1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 圆周率PI, 3.14);
	ColPrintf(PrintfCol::标题, Lang("P37例三 体积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：面粉厂有一个24立方米能量池，它的长是宽或高的2倍，当它以最大侧面堆成一个半圆锥形，面粉的体积是多少？"));
	ColPrintf(PrintfCol::方法, Lang("设高为x，长为2x，宽为x，半径为x"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1圆柱体体积 3.14*(1/3)*x^2*x/2"));
	ColPrintf(PrintfCol::方法, Lang("2.化简式子S1得到圆柱体体积S2 3.14*(1/6)*x^3"));
	ColPrintf(PrintfCol::方法, Lang("3.长方形体积 2x*x*x=2x^3=>S3:2x^3=24=>S4:x^3=12"));

	ColPrintf(PrintfCol::方法, Lang("4.把S4带入S2得到圆柱体体积S5 3.14*(1/6)*12"));
}*/
void P37_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 3 Volume Problem","P37例三 体积问题"},
		{"Title: The flour mill has a 24 cubic meter energy tank, which is twice the length, width, or height. When it is stacked in a semi conical shape with its largest side, what is the volume of flour?",
		"题目：面粉厂有一个24立方米能量池，它的长是宽或高的2倍，当它以最大侧面堆成一个半圆锥形，面粉的体积是多少？"},
		{"Let the height be x, the length be 2x, the width be x, and the radius be x",
		"设高为x，长为2x，宽为x，半径为x"},
		{"1. List equation S1: Cylinder volume 3.14 * (1/3) * x ^ 2 * x/2",
		"1.列出式子S1圆柱体体积 3.14*(1/3)*x^2*x/2"},
		{"2. Simplify equation S1 to obtain cylindrical volume S2 3.14 * (1/6) * x ^ 3",
		"2.化简式子S1得到圆柱体体积S2 3.14*(1/6)*x^3"},
		{"3. Rectangular volume 2x * x * x=2x ^ 3=>S3: 2x ^ 3=24=>S4: x ^ 3=12",
		"3.长方形体积 2x*x*x=2x^3=>S3:2x^3=24=>S4:x^3=12"},
		{"4. Substitute S4 into S2 to obtain the cylindrical volume S5 3.14 * (1/6) * 12",
		"4.把S4带入S2得到圆柱体体积S5 3.14*(1/6)*12"},
		{"5. Simplify calculation S5 to obtain S6 3.14 * 1/6 * 12=>S6:3.14/6 * 12=>S6:37.68/6=>S6:6.28",
		"5.化简计算S5得到S6 3.14*1/6*12=>S6:3.14/6*12=>S6:37.68/6=>S6:6.28"},
		//变量表
		{"PI","圆周率PI"},
		{"VolumeV1ofFlour","面粉的体积V1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 圆周率PI, 3.14);
	ColPrintf(PrintfCol::标题, Lang("P37例三 体积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：面粉厂有一个24立方米能量池，它的长是宽或高的2倍，当它以最大侧面堆成一个半圆锥形，面粉的体积是多少？"));
	ColPrintf(PrintfCol::方法, Lang("设高为x，长为2x，宽为x，半径为x"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1圆柱体体积 3.14*(1/3)*x^2*x/2"));
	ColPrintf(PrintfCol::方法, Lang("2.化简式子S1得到圆柱体体积S2 3.14*(1/6)*x^3"));
	ColPrintf(PrintfCol::方法, Lang("3.长方形体积 2x*x*x=2x^3=>S3:2x^3=24=>S4:x^3=12"));

	ColPrintf(PrintfCol::方法, Lang("4.把S4带入S2得到圆柱体体积S5 3.14*(1/6)*12"));
	ColPrintf(PrintfCol::方法, Lang("5.化简计算S5得到S6 3.14*1/6*12=>S6:3.14/6*12=>S6:37.68/6=>S6:6.28"));
}
void P37_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Three Variations Practice Volume Problem","P37例三变式练习 体积问题"},
		{"Title: The flour mill has a 24 cubic meter energy tank, which is twice the length, width, or height. When it is stacked in a semi conical shape with its largest side, what is the volume of flour?",
		"题目：已知一个锥形的底面半径和高等于正方形的棱长，这个正方形的体积是216dm^2,求这个圆锥体的体积。"},
		{"Let the height be x, the length be 2x, the width be x, and the radius be x",
		"设高为x，长为2x，宽为x，半径为x"},
		{"1. List equation S1: Cylinder volume 3.14 * (1/3) * 2x ^ 2",
		"1.列出式子S1圆柱体体积 3.14*(1/3)*2x^2"},
		{"2. Simplify equation S1 to obtain cylindrical volume S2 3.14 * (1/3) * 2x ^ 3",
		"2.化简式子S1得到圆柱体体积S2 3.14*(1/3)*2x^3"},
		{"3. Rectangular volume 2x * x * x=2x ^ 3=>S3: 2x ^ 3=216",
		"3.长方形体积 2x*x*x=2x^3=>S3:2x^3=216"},
		{"4. Substitute S4 into S2 to obtain the cylindrical volume S5 3.14 * (1/3) * 216",
		"4.把S4带入S2得到圆柱体体积S5 3.14*(1/3)*216"},
		{"5. Simplify the calculation of S5 to obtain S6 3.14 * 1/3 * 216=>S6:3.14/3 * 216=>S6:678.24/3=>S6:226.08",
		"5.化简计算S5得到S6 3.14*1/3*216=>S6:3.14/3*216=>S6:678.24/3=>S6:226.08"},
		//变量表
		{"PI","圆周率PI"},
		{"VolumeV1ofFlour","面粉的体积V1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 圆周率PI, 3.14);
	ColPrintf(PrintfCol::标题, Lang("P37例三变式练习 体积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：面粉厂有一个24立方米能量池，它的长是宽或高的2倍，当它以最大侧面堆成一个半圆锥形，面粉的体积是多少？"));
	ColPrintf(PrintfCol::方法, Lang("设高为x，长为2x，宽为x，半径为x"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1圆柱体体积 3.14*(1/3)*2x^2"));
	ColPrintf(PrintfCol::方法, Lang("2.化简式子S1得到圆柱体体积S2 3.14*(1/3)*2x^3"));
	ColPrintf(PrintfCol::方法, Lang("3.长方形体积 2x*x*x=2x^3=>S3:2x^3=216"));
	ColPrintf(PrintfCol::方法, Lang("4.把S4带入S2得到圆柱体体积S5 3.14*(1/3)*216"));
	ColPrintf(PrintfCol::方法, Lang("5.化简计算S5得到S6 3.14*1/3*216=>S6:3.14/3*216=>S6:678.24/3=>S6:226.08"));
}
void P37_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 case four volume problem","P37例四 体积问题"},
		{"Question: How many packaging methods are there to pack 12 identical rectangular prisms into a large package? How is the area of Da Bao the smallest?",
		"题目：如果把12件相同的长方体打包，形成一个大的包装物，有几种包装方法？怎么大宝面积最小?"},
		{"1. If the length, width, and height of a rectangular prism are a, b, and c, and a>b>c, two comparison methods, 2 * 6 and 3 * 4, can be formed",
		"1.设长方体长宽高为a，b，c且a>b>c,可形成2*6，3*4两种比较方法"},
		{"2.If it is the first type, then the surface area is (2ab+6ac+12bc) * 2=>4ab+12ac+24bc",
		"2.如果是第一种，那么表面积是(2ab+6ac+12bc)*2=>4ab+12ac+24bc得到S1"},
		{"3.If it is the second type, then the surface area is (3ab+4ac+12bc) * 2=>6ab+8ac+24bc",
		"3.如果是第二种，那么表面积是(3ab+4ac+12bc)*2=>6ab+8ac+24bc得到S2"},
		{"4. Compare equations S1 and S2 by removing similar terms 4ab+12ac 6ab+8ac",
		"4.比较S1，S2式子去除同类项S3 4ab+12ac 6ab+8ac"},
		{"5. Offset items 4ac 2ab with different values of S3",
		"5.抵消S3数值不同的项S4 4ac 2ab"},
		{"6. Simplify S4 to obtain S5 2c b",
		"6.化简S4得到S5 2c b"},
		{"7. According to the conditions in the question, they cannot be equal. 2c!=b",
		"7，根据题目上条件它们不可能相等 2c!=b"},
		{"8. If 2c<b, the second type has a smaller surface area",
		"8,如果2c<b第二种表面积小"},
		{"9.If 2c>b, the first type has a smaller surface area",
		"9,如果2c>b第一种表面积小"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P37例四 体积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：如果把12件相同的长方体打包，形成一个大的包装物，有几种包装方法？怎么大宝面积最小?"));
	ColPrintf(PrintfCol::方法, Lang("1.设长方体长宽高为a，b，c且a>b>c,可形成2*6，3*4两种比较方法"));
	ColPrintf(PrintfCol::方法, Lang("2.如果是第一种，那么表面积是(2ab+6ac+12bc)*2=>4ab+12ac+24bc得到S1"));
	ColPrintf(PrintfCol::方法, Lang("3.如果是第二种，那么表面积是(3ab+4ac+12bc)*2=>6ab+8ac+24bc得到S2"));
	ColPrintf(PrintfCol::方法, Lang("4.比较S1，S2式子去除同类项S3 4ab+12ac 6ab+8ac"));
	ColPrintf(PrintfCol::方法, Lang("5.抵消S3数值不同的项S4 4ac 2ab"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S4得到S5 2c b"));
	ColPrintf(PrintfCol::方法, Lang("8,如果2c<b第二种表面积小"));
	ColPrintf(PrintfCol::方法, Lang("9,如果2c>b第一种表面积小"));
}
void P37_4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Practice Volume Problem with Four Variations","P37例四变式练习 体积问题"},
		{"Quoting the calculation result from the previous question",
		"引用上一题计算结果"},
		{"Title: How many packaging methods are there for packing 12 identical rectangular prisms with dimensions of 8cm, 7cm, and 3cm to form a large package? How is the area of Da Bao the smallest?",
		"题目：题目：如果把长宽高为8cm，7cm，3cm12件相同的长方体打包，形成一个大的包装物，有几种包装方法？怎么大宝面积最小?"},
		{"The first type has a smaller surface area of 2cm= %d b= %d 2cm>b",
		"第一种表面积小 2c=%d b=%d 2c>b"},
		{"The second type has a smaller surface area of 2cm=% d b=% d 2cm<b",
		"第二种表面积小 2c=%d b=%d 2c<b"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(c, 3);
	DefineLangVarInt(b, 7);
	if (2 * c.Var > b.Var)
	{
		ColPrintf(PrintfCol::方法, Lang("第一种表面积小 2c=%d b=%d 2c>b"), 2 * c.Var, b.Var);
	}
	else
	{
		ColPrintf(PrintfCol::方法, Lang("第二种表面积小 2c=%d b=%d 2c<b"), 2 * c.Var, b.Var);
	}
}
void P37()
{
	//共8道题
	P37_1();
	ColPrintf(PrintfCol::方法, "");
	P37_1_2();
	ColPrintf(PrintfCol::方法, "");
	P37_2();
	ColPrintf(PrintfCol::方法, "");
	P37_2_1();
	ColPrintf(PrintfCol::方法, "");
	P37_3();
	ColPrintf(PrintfCol::方法, "");
	P37_3_1();
	ColPrintf(PrintfCol::方法, "");
	P37_4();
	ColPrintf(PrintfCol::方法, "");
	P37_4_1();
	ColPrintf(PrintfCol::方法, "");
	
}
void P37_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P37();
	Lang.SetCurLanguage(LanguageLib::English);
	P37();
	ColPrintf(PrintfCol::方法, "");

}