#pragma once
//��8����
void P37_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 1 Volume Problem","P37��һ �������"},
		{"Title: Three rectangular water pools with side lengths of 5cm, 3cm, and 2cm. If two piles of crushed stones are placed in the middle and small\npools respectively, the water level will rise by 6cm and 4cm. If two piles of\ncrushed stones are placed in the large pool, how much will the water level rise by?",
		"��Ŀ������С����������ˮ���ڱ߳�Ϊ5cm��3cm��2cm����������ʯ�ֱ�����У�Сˮ�أ�ˮ������6cm��4cm�������������ʯ�����ˮ���ˮ�����߶���cm?"},
		{"1. Unified unit 5m=500cm 3m=300cm 2m=200cm",
		"1.ͳһ��λ 5m=500cm 3m=300cm 2m=200cm"},
		{"2. Calculate the volume V1 of the first pile of crushed stones. The volume V1 of the first pile of\ncrushed stones is equal to the side length A2 of the middle water tank multiplied by the side length A2 of the middle water\ntank multiplied by the water level rise H1 of the middle water tank",
		"2.�����һ����ʯ���V1 ��һ����ʯ���V1=��ˮ�ر߳�A2*��ˮ�ر߳�A2*��ˮ��ˮ������H1"},
		{"3. Calculate the volume V2 of the second pile of crushed stones. The volume V2 of\nthe second pile of crushed stones is equal to the side length A3 of the small water tank * the side length A3 of the\nsmall water tank * the water level rise H2 of the small water tank",
		"3.����ڶ�����ʯ���V2 �ڶ�����ʯ���V2=Сˮ�ر߳�A3*Сˮ�ر߳�A3*Сˮ��ˮ������H2"},
		{"4. Calculate the total volume of crushed stones V3=the volume of the first pile of crushed stones V1+the volume of the second pile of crushed stones V2",
		"4.����һ����ʯ���V3 һ����ʯ���V3=��һ����ʯ���V1+�ڶ�����ʯ���V2"},
		{"5. Calculate the water level rise H3 when placed in the large water tank. The water level rise H3 when placed\nin the large water tank is equal to the total volume of crushed stones V3 divided by\n(the side length A1 of the large water tank * the side length A1 of the large water tank)",
		"5.��������ˮ��ʱˮ������H3 �����ˮ��ʱˮ������H3=һ����ʯ���V3/(��ˮ�ر߳�A1*��ˮ�ر߳�A1)"},
		//������
		{"ThesidelengthofthemiddlewatertankisA2","��ˮ�ر߳�A2"},
		{"ThewaterlevelofthemiddlewatertankrisesH1","��ˮ��ˮ������H1"},
		{"SmallpoolwithsidelengthA3","Сˮ�ر߳�A3"},
		{"ThewaterlevelofthesmallpoolrisesbyH2","Сˮ��ˮ������H2"},
		{"ThesidelengthofthelargewatertankisA1","��ˮ�ر߳�A1"},
		{"VolumeV1ofthefirstpileofcrushedstones","��һ����ʯ���V1"},
		{"VolumeV2ofthesecondpileofcrushedstones","�ڶ�����ʯ���V2"},
		{"TotalgravelvolumeV3","һ����ʯ���V3"},
		{"Whenplacedinthelargepool,thewaterlevelrisesbyH3","�����ˮ��ʱˮ������H3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,��ˮ�ر߳�A2, 3);
	DefineLangVar(float,��ˮ��ˮ������H1, 6);
	DefineLangVar(float,Сˮ�ر߳�A3, 2);
	DefineLangVar(float,Сˮ��ˮ������H2, 4);
	DefineLangVar(float,��ˮ�ر߳�A1, 5);
	ColPrintf(PrintfCol::����, Lang("P37��һ �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������С����������ˮ���ڱ߳�Ϊ5cm��3cm��2cm����������ʯ�ֱ�����У�Сˮ�أ�ˮ������6cm��4cm�������������ʯ�����ˮ���ˮ�����߶���cm?"));
	ColPrintf(PrintfCol::����, Lang("1.ͳһ��λ 5m=500cm 3m=300cm 2m=200cm"));
	��ˮ�ر߳�A1.Var = 500;
	��ˮ�ر߳�A2.Var = 300;
	Сˮ�ر߳�A3.Var = 200;
	DefineLangVar(float, ��һ����ʯ���V1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����һ����ʯ���V1 ��һ����ʯ���V1=��ˮ�ر߳�A2*��ˮ�ر߳�A2*��ˮ��ˮ������H1"));
	��һ����ʯ���V1 = ��ˮ�ر߳�A2 * ��ˮ�ر߳�A2 * ��ˮ��ˮ������H1;
	��һ����ʯ���V1.PrintProcessLog(2);
	DefineLangVar(float, �ڶ�����ʯ���V2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ڶ�����ʯ���V2 �ڶ�����ʯ���V2=Сˮ�ر߳�A3*Сˮ�ر߳�A3*Сˮ��ˮ������H2"));
	�ڶ�����ʯ���V2 = Сˮ�ر߳�A3 * Сˮ�ر߳�A3 * Сˮ��ˮ������H2;
	�ڶ�����ʯ���V2.PrintProcessLog(3);
	DefineLangVar(float, һ����ʯ���V3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����һ����ʯ���V3 һ����ʯ���V3=��һ����ʯ���V1+�ڶ�����ʯ���V2"));
	һ����ʯ���V3 = ��һ����ʯ���V1 + �ڶ�����ʯ���V2;
	һ����ʯ���V3.PrintProcessLog(4);
	DefineLangVar(float, �����ˮ��ʱˮ������H3, 0);
	ColPrintf(PrintfCol::����, Lang("5.��������ˮ��ʱˮ������H3 �����ˮ��ʱˮ������H3=һ����ʯ���V3/(��ˮ�ر߳�A1*��ˮ�ر߳�A1)"));
	�����ˮ��ʱˮ������H3 = һ����ʯ���V3 / (��ˮ�ر߳�A1 * ��ˮ�ر߳�A1);
	�����ˮ��ʱˮ������H3.PrintProcessLog(5);
}
void P37_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 1 Volume Problem","P37��һ�ı�ʽ��ϰ �������"},
		{"Title: Three rectangular water pools with side lengths of 5cm, 3cm, and 2cm. If two piles of crushed stones are placed in the middle and small\npools respectively, the water level will rise by 6cm and 4cm. If two piles of\ncrushed stones are placed in the large pool, how much will the water level rise by?",
		"��Ŀ������С����������ˮ���ڱ߳�Ϊ4cm��3cm��2cm����������ʯ�ֱ�����У�Сˮ�أ�ˮ������4cm��11cm�������������ʯ�����ˮ���ˮ�����߶���cm?"},
		{"1. Unified unit 4m=400cm 3m=300cm 2m=200cm",
		"1.ͳһ��λ 4m=400cm 3m=300cm 2m=200cm"},
		{"2. Calculate the volume V1 of the first pile of crushed stones. The volume V1 of the first pile of\ncrushed stones is equal to the side length A2 of the middle water tank multiplied by the side length A2 of the middle water\ntank multiplied by the water level rise H1 of the middle water tank",
		"2.�����һ����ʯ���V1 ��һ����ʯ���V1=��ˮ�ر߳�A2*��ˮ�ر߳�A2*��ˮ��ˮ������H1"},
		{"3. Calculate the volume V2 of the second pile of crushed stones. The volume V2 of\nthe second pile of crushed stones is equal to the side length A3 of the small water tank * the side length A3 of the\nsmall water tank * the water level rise H2 of the small water tank",
		"3.����ڶ�����ʯ���V2 �ڶ�����ʯ���V2=Сˮ�ر߳�A3*Сˮ�ر߳�A3*Сˮ��ˮ������H2"},
		{"4. Calculate the total volume of crushed stones V3=the volume of the first pile of crushed stones V1+the volume of the second pile of crushed stones V2",
		"4.����һ����ʯ���V3 һ����ʯ���V3=��һ����ʯ���V1+�ڶ�����ʯ���V2"},
		{"5. Calculate the water level rise H3 when placed in the large water tank. The water level rise H3 when placed\nin the large water tank is equal to the total volume of crushed stones V3 divided by\n(the side length A1 of the large water tank * the side length A1 of the large water tank)",
		"5.��������ˮ��ʱˮ������H3 �����ˮ��ʱˮ������H3=һ����ʯ���V3/(��ˮ�ر߳�A1*��ˮ�ر߳�A1)"},
		//������
		{"ThesidelengthofthemiddlewatertankisA2","��ˮ�ر߳�A2"},
		{"ThewaterlevelofthemiddlewatertankrisesH1","��ˮ��ˮ������H1"},
		{"SmallpoolwithsidelengthA3","Сˮ�ر߳�A3"},
		{"ThewaterlevelofthesmallpoolrisesbyH2","Сˮ��ˮ������H2"},
		{"ThesidelengthofthelargewatertankisA1","��ˮ�ر߳�A1"},
		{"VolumeV1ofthefirstpileofcrushedstones","��һ����ʯ���V1"},
		{"VolumeV2ofthesecondpileofcrushedstones","�ڶ�����ʯ���V2"},
		{"TotalgravelvolumeV3","һ����ʯ���V3"},
		{"Whenplacedinthelargepool,thewaterlevelrisesbyH3","�����ˮ��ʱˮ������H3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ��ˮ�ر߳�A2, 3);
	DefineLangVar(float, ��ˮ��ˮ������H1, 4);
	DefineLangVar(float, Сˮ�ر߳�A3, 2);
	DefineLangVar(float, Сˮ��ˮ������H2, 11);
	DefineLangVar(float, ��ˮ�ر߳�A1, 4);
	ColPrintf(PrintfCol::����, Lang("P37��һ �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������С����������ˮ���ڱ߳�Ϊ5cm��3cm��2cm����������ʯ�ֱ�����У�Сˮ�أ�ˮ������6cm��4cm�������������ʯ�����ˮ���ˮ�����߶���cm?"));
	ColPrintf(PrintfCol::����, Lang("1.ͳһ��λ 4m=400cm 3m=300cm 2m=200cm"));
	��ˮ�ر߳�A1.Var = 400;
	��ˮ�ر߳�A2.Var = 300;
	Сˮ�ر߳�A3.Var = 200;
	DefineLangVar(float, ��һ����ʯ���V1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����һ����ʯ���V1 ��һ����ʯ���V1=��ˮ�ر߳�A2*��ˮ�ر߳�A2*��ˮ��ˮ������H1"));
	��һ����ʯ���V1 = ��ˮ�ر߳�A2 * ��ˮ�ر߳�A2 * ��ˮ��ˮ������H1;
	��һ����ʯ���V1.PrintProcessLog(2);
	DefineLangVar(float, �ڶ�����ʯ���V2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ڶ�����ʯ���V2 �ڶ�����ʯ���V2=Сˮ�ر߳�A3*Сˮ�ر߳�A3*Сˮ��ˮ������H2"));
	�ڶ�����ʯ���V2 = Сˮ�ر߳�A3 * Сˮ�ر߳�A3 * Сˮ��ˮ������H2;
	�ڶ�����ʯ���V2.PrintProcessLog(3);
	DefineLangVar(float, һ����ʯ���V3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����һ����ʯ���V3 һ����ʯ���V3=��һ����ʯ���V1+�ڶ�����ʯ���V2"));
	һ����ʯ���V3 = ��һ����ʯ���V1 + �ڶ�����ʯ���V2;
	һ����ʯ���V3.PrintProcessLog(4);
	DefineLangVar(float, �����ˮ��ʱˮ������H3, 0);
	ColPrintf(PrintfCol::����, Lang("5.��������ˮ��ʱˮ������H3 �����ˮ��ʱˮ������H3=һ����ʯ���V3/(��ˮ�ر߳�A1*��ˮ�ر߳�A1)"));
	�����ˮ��ʱˮ������H3 = һ����ʯ���V3 / (��ˮ�ر߳�A1 * ��ˮ�ر߳�A1);
	�����ˮ��ʱˮ������H3.PrintProcessLog(5);
}
void P37_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 2 Volume Problem","P37���� �������"},
		{"Title: In a cylinder with a bottom radius of 10cm and a water depth of 8cm, place an iron block with a length and width of 8cm and a height of 15cm inside the bottle. The iron block is placed vertically, and how much has it risen?",
		"��Ŀ��һ������뾶Ϊ10cm��Բ����ˮ��8cm����ƿ�ڷ���һ��������8cm������15cm�����飬���������ŷŵģ������˶��٣�"},
		{"1. Calculate the original volume V1 of water, which is equal to pi * cylinder radius N1 * cylinder radius N1 * water depth H1",
		"1.����ԭ��ˮ�����V1 ԭ��ˮ�����V1=Բ����PI*Բ���װ뾶N1*Բ���װ뾶N1*ˮ��H1"},
		{"2. Calculate the remaining bottom area S1 after inserting the iron block. The remaining bottom area S1 after inserting\nthe iron block is calculated as (pi * cylinder radius N1 * cylinder radius N1) - (iron block\nlength and width A1 * iron block length and width A1)",
		"2.������������ʣ�µ����S1 ��������ʣ�µ����S1=(Բ����PI*Բ���װ뾶N1*Բ���װ뾶N1)-(���鳤��A1*���鳤��A1)"},
		{"3. Calculate the height H1 after the water surface rises. The height H1 after the water surface rises is equal to the original volume V1 of the water divided by the remaining bottom area S1 after the iron block is placed",
		"3.����ˮ��������ĸ߶�H1 ˮ��������ĸ߶�H1=ԭ��ˮ�����V1/��������ʣ�µ����S1"},
		{"4. Calculate the rise height H2. Rise height H2=height after the water surface rises H1- water depth H1",
		"4.���������߶�H2 �����߶�H2=ˮ��������ĸ߶�H1-ˮ��H1"},
		//������
		{"Pi(pi)","Բ����PI"},
		{"CylinderradiusN1","Բ���װ뾶N1"},
		{"DepthH1","ˮ��H1"},
		{"IronblocklengthandwidthA1","���鳤��A1"},
		{"TheoriginalvolumeofwaterV1","ԭ��ˮ�����V1"},
		{"Afterinsertingtheironblock,theremainingbottomareaisS1","��������ʣ�µ����S1"},
		{"HeightH1afterthewatersurfacerises","ˮ��������ĸ߶�H1"},
		{"ElevationH2","�����߶�H2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, Բ����PI, 3.14);
	DefineLangVar(float, Բ���װ뾶N1, 10);
	DefineLangVar(float, ˮ��H1, 8);
	DefineLangVar(float, ���鳤��A1, 8);
	ColPrintf(PrintfCol::����, Lang("P37���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ������뾶Ϊ10cm��Բ����ˮ��8cm����ƿ�ڷ���һ��������8cm������15cm�����飬���������ŷŵģ������˶��٣�"));
	DefineLangVar(float, ԭ��ˮ�����V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ԭ��ˮ�����V1 ԭ��ˮ�����V1=Բ����PI*Բ���װ뾶N1*Բ���װ뾶N1*ˮ��H1"));
	ԭ��ˮ�����V1 = Բ����PI * Բ���װ뾶N1 * Բ���װ뾶N1 * ˮ��H1;
	ԭ��ˮ�����V1.PrintProcessLog(1);
	DefineLangVar(float, ��������ʣ�µ����S1, 0);
	ColPrintf(PrintfCol::����, Lang("2.������������ʣ�µ����S1 ��������ʣ�µ����S1=(Բ����PI*Բ���װ뾶N1*Բ���װ뾶N1)-(���鳤��A1*���鳤��A1)"));
	��������ʣ�µ����S1 = (Բ����PI * Բ���װ뾶N1 * Բ���װ뾶N1) - (���鳤��A1 * ���鳤��A1);
	��������ʣ�µ����S1.PrintProcessLog(2);
	DefineLangVar(float, ˮ��������ĸ߶�H1, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ˮ��������ĸ߶�H1 ˮ��������ĸ߶�H1=ԭ��ˮ�����V1/��������ʣ�µ����S1"));
	ˮ��������ĸ߶�H1 = ԭ��ˮ�����V1 / ��������ʣ�µ����S1;
	ˮ��������ĸ߶�H1.PrintProcessLog(3);
	DefineLangVar(float, �����߶�H2, 0);
	ColPrintf(PrintfCol::����, Lang("4.���������߶�H2 �����߶�H2=ˮ��������ĸ߶�H1-ˮ��H1"));
	�����߶�H2 = ˮ��������ĸ߶�H1 - ˮ��H1;
	�����߶�H2.PrintProcessLog(4);
}
void P37_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example Two Variation Practice Volume Problem","P37������ʽ��ϰ �������"},
		{"Title: In a glass with a bottom area of 15cm ^ 2, the height of water is 3cm. Now, place a cylinder with a bottom radius of 1cm and a height of 5cm. How many centimeters has the water level risen? (Pi is 3)",
		"��Ŀ��һ�������Ϊ15cm^2�Ĳ�������ˮ�ĸ߶���3cm�����ڷ���һ������뾶��1cm���߶�Ϊ5���׵�Բ��������ˮ�������˶�������?(PiΪ3)"},
		{"1. Calculate the volume of drainage V1. The volume of drainage V1=pi * cylinder radius N1 * cylinder radius N1 * cylinder height H1",
		"1.������ˮ�����V1 ��ˮ�����V1=Բ����PI*Բ���뾶N1*Բ���뾶N1*Բ���ĸ�H1"},
		{"2. Calculate the original water volume V2 of the glass cup. The original water volume V2 of the glass cup is equal to the bottom area V3 of the glass cup multiplied by the water height H2",
		"2.���㲣����ԭ��ˮ���V2 ������ԭ��ˮ���V2=�����������V3*ˮ�߶�H2"},
		{"3. Calculate the bottom area of the glass cup in contact with water S1=the volume of drainage V1- (pi * cylinder radius N1 * cylinder radius N1)",
		"3.����ˮ�Ӵ��Ĳ����������S1 ˮ�Ӵ��Ĳ����������S1=��ˮ�����V1-(Բ����PI*Բ���뾶N1*Բ���뾶N1)"},
		{"4. Calculate the height H3 after the water rises, which is equal to the original water volume V2 of the glass cup divided by the bottom area S1 of the glass cup in contact with water",
		"4.����ˮ������ĸ߶�H3 ˮ������ĸ߶�H3=������ԭ��ˮ���V2/ˮ�Ӵ��Ĳ����������S1"},
		{"5. Calculate the rise height H4. Rise height H4=height of water after rising H3- water height H2",
		"5.���������߶�H4 �����߶�H4=ˮ������ĸ߶�H3-ˮ�߶�H2"},
		//������
		{"Pi(pi)","Բ����PI"},
		{"CylinderradiusN1","Բ���뾶N1"},
		{"CylinderheightH1","Բ���ĸ�H1"},
		{"GlassbottomareaV3","�����������V3"},
		{"WaterheightH2","ˮ�߶�H2"},
		{"DrainagevolumeV1","��ˮ�����V1"},
		{"TheoriginalwatervolumeoftheglasscupisV2","������ԭ��ˮ���V2"},
		{"HeightH3afterwaterrises","ˮ������ĸ߶�H3"},
		{"RisingheightH4","�����߶�H4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, Բ����PI, 3);
	DefineLangVar(float, Բ���뾶N1, 1);
	DefineLangVar(float, Բ���ĸ�H1, 5);
	DefineLangVar(float, �����������V3, 15);
	DefineLangVar(float, ˮ�߶�H2, 3);
	ColPrintf(PrintfCol::����, Lang("P37���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ������뾶Ϊ10cm��Բ����ˮ��8cm����ƿ�ڷ���һ��������8cm������15cm�����飬���������ŷŵģ������˶��٣�"));
	DefineLangVar(float, ��ˮ�����V1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ˮ�����V1 ��ˮ�����V1=Բ����PI*Բ���뾶N1*Բ���뾶N1*Բ���ĸ�H1"));
	��ˮ�����V1 = Բ����PI * Բ���뾶N1 * Բ���뾶N1 * Բ���ĸ�H1;
	��ˮ�����V1.PrintProcessLog(1);
	DefineLangVar(float, ������ԭ��ˮ���V2, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㲣����ԭ��ˮ���V2 ������ԭ��ˮ���V2=�����������V3*ˮ�߶�H2"));
	������ԭ��ˮ���V2 = �����������V3 * ˮ�߶�H2;
	������ԭ��ˮ���V2.PrintProcessLog(2);
	DefineLangVar(float, ˮ�Ӵ��Ĳ����������S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ˮ�Ӵ��Ĳ����������S1 ˮ�Ӵ��Ĳ����������S1=��ˮ�����V1-(Բ����PI*Բ���뾶N1*Բ���뾶N1)"));
	ˮ�Ӵ��Ĳ����������S1 = ��ˮ�����V1 - (Բ����PI * Բ���뾶N1 * Բ���뾶N1);
	ˮ�Ӵ��Ĳ����������S1.PrintProcessLog(3);
	DefineLangVar(float, ˮ������ĸ߶�H3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ˮ������ĸ߶�H3 ˮ������ĸ߶�H3=������ԭ��ˮ���V2/ˮ�Ӵ��Ĳ����������S1"));
	ˮ������ĸ߶�H3 = ������ԭ��ˮ���V2 / ˮ�Ӵ��Ĳ����������S1;
	ˮ������ĸ߶�H3.PrintProcessLog(4);
	DefineLangVar(float, �����߶�H4, 0);
	ColPrintf(PrintfCol::����, Lang("5.���������߶�H4 �����߶�H4=ˮ������ĸ߶�H3-ˮ�߶�H2"));
	�����߶�H4 = ˮ������ĸ߶�H3 - ˮ�߶�H2;
	�����߶�H4.PrintProcessLog(5);
}
/*void P37_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 3 Volume Problem","P37���� �������"},
		{"Title: The flour mill has a 24 cubic meter energy tank, which is twice the length, width, or height. When it is stacked in a semi conical shape with its largest side, what is the volume of flour?",
		"��Ŀ����۳���һ��24�����������أ����ĳ��ǿ��ߵ�2����������������ѳ�һ����Բ׶�Σ���۵�����Ƕ��٣�"},
		{"Let the height be x, the length be 2x, the width be x, and the radius be x",
		"���Ϊx����Ϊ2x����Ϊx���뾶Ϊx"},
		{"1. List equation S1: Cylinder volume 3.14 * (1/3) * x ^ 2 * x/2",
		"1.�г�ʽ��S1Բ������� 3.14*(1/3)*x^2*x/2"},
		{"2. Simplify equation S1 to obtain cylindrical volume S2 3.14 * (1/6) * x ^ 3",
		"2.����ʽ��S1�õ�Բ�������S2 3.14*(1/6)*x^3"},
		{"3. Rectangular volume 2x * x * x=2x ^ 3=>S3: 2x ^ 3=24=>S4: x ^ 3=12",
		"3.��������� 2x*x*x=2x^3=>S3:2x^3=24=>S4:x^3=12"},
		{"4. Substitute S4 into S2 to obtain the cylindrical volume S5 3.14 * (1/6) * 12",
		"4.��S4����S2�õ�Բ�������S5 3.14*(1/6)*12"},
		//������
		{"PI","Բ����PI"},
		{"VolumeV1ofFlour","��۵����V1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, Բ����PI, 3.14);
	ColPrintf(PrintfCol::����, Lang("P37���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����۳���һ��24�����������أ����ĳ��ǿ��ߵ�2����������������ѳ�һ����Բ׶�Σ���۵�����Ƕ��٣�"));
	ColPrintf(PrintfCol::����, Lang("���Ϊx����Ϊ2x����Ϊx���뾶Ϊx"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1Բ������� 3.14*(1/3)*x^2*x/2"));
	ColPrintf(PrintfCol::����, Lang("2.����ʽ��S1�õ�Բ�������S2 3.14*(1/6)*x^3"));
	ColPrintf(PrintfCol::����, Lang("3.��������� 2x*x*x=2x^3=>S3:2x^3=24=>S4:x^3=12"));

	ColPrintf(PrintfCol::����, Lang("4.��S4����S2�õ�Բ�������S5 3.14*(1/6)*12"));
}*/
void P37_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Example 3 Volume Problem","P37���� �������"},
		{"Title: The flour mill has a 24 cubic meter energy tank, which is twice the length, width, or height. When it is stacked in a semi conical shape with its largest side, what is the volume of flour?",
		"��Ŀ����۳���һ��24�����������أ����ĳ��ǿ��ߵ�2����������������ѳ�һ����Բ׶�Σ���۵�����Ƕ��٣�"},
		{"Let the height be x, the length be 2x, the width be x, and the radius be x",
		"���Ϊx����Ϊ2x����Ϊx���뾶Ϊx"},
		{"1. List equation S1: Cylinder volume 3.14 * (1/3) * x ^ 2 * x/2",
		"1.�г�ʽ��S1Բ������� 3.14*(1/3)*x^2*x/2"},
		{"2. Simplify equation S1 to obtain cylindrical volume S2 3.14 * (1/6) * x ^ 3",
		"2.����ʽ��S1�õ�Բ�������S2 3.14*(1/6)*x^3"},
		{"3. Rectangular volume 2x * x * x=2x ^ 3=>S3: 2x ^ 3=24=>S4: x ^ 3=12",
		"3.��������� 2x*x*x=2x^3=>S3:2x^3=24=>S4:x^3=12"},
		{"4. Substitute S4 into S2 to obtain the cylindrical volume S5 3.14 * (1/6) * 12",
		"4.��S4����S2�õ�Բ�������S5 3.14*(1/6)*12"},
		{"5. Simplify calculation S5 to obtain S6 3.14 * 1/6 * 12=>S6:3.14/6 * 12=>S6:37.68/6=>S6:6.28",
		"5.�������S5�õ�S6 3.14*1/6*12=>S6:3.14/6*12=>S6:37.68/6=>S6:6.28"},
		//������
		{"PI","Բ����PI"},
		{"VolumeV1ofFlour","��۵����V1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, Բ����PI, 3.14);
	ColPrintf(PrintfCol::����, Lang("P37���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����۳���һ��24�����������أ����ĳ��ǿ��ߵ�2����������������ѳ�һ����Բ׶�Σ���۵�����Ƕ��٣�"));
	ColPrintf(PrintfCol::����, Lang("���Ϊx����Ϊ2x����Ϊx���뾶Ϊx"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1Բ������� 3.14*(1/3)*x^2*x/2"));
	ColPrintf(PrintfCol::����, Lang("2.����ʽ��S1�õ�Բ�������S2 3.14*(1/6)*x^3"));
	ColPrintf(PrintfCol::����, Lang("3.��������� 2x*x*x=2x^3=>S3:2x^3=24=>S4:x^3=12"));

	ColPrintf(PrintfCol::����, Lang("4.��S4����S2�õ�Բ�������S5 3.14*(1/6)*12"));
	ColPrintf(PrintfCol::����, Lang("5.�������S5�õ�S6 3.14*1/6*12=>S6:3.14/6*12=>S6:37.68/6=>S6:6.28"));
}
void P37_3_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Three Variations Practice Volume Problem","P37������ʽ��ϰ �������"},
		{"Title: The flour mill has a 24 cubic meter energy tank, which is twice the length, width, or height. When it is stacked in a semi conical shape with its largest side, what is the volume of flour?",
		"��Ŀ����֪һ��׶�εĵ���뾶�͸ߵ��������ε��ⳤ����������ε������216dm^2,�����Բ׶��������"},
		{"Let the height be x, the length be 2x, the width be x, and the radius be x",
		"���Ϊx����Ϊ2x����Ϊx���뾶Ϊx"},
		{"1. List equation S1: Cylinder volume 3.14 * (1/3) * 2x ^ 2",
		"1.�г�ʽ��S1Բ������� 3.14*(1/3)*2x^2"},
		{"2. Simplify equation S1 to obtain cylindrical volume S2 3.14 * (1/3) * 2x ^ 3",
		"2.����ʽ��S1�õ�Բ�������S2 3.14*(1/3)*2x^3"},
		{"3. Rectangular volume 2x * x * x=2x ^ 3=>S3: 2x ^ 3=216",
		"3.��������� 2x*x*x=2x^3=>S3:2x^3=216"},
		{"4. Substitute S4 into S2 to obtain the cylindrical volume S5 3.14 * (1/3) * 216",
		"4.��S4����S2�õ�Բ�������S5 3.14*(1/3)*216"},
		{"5. Simplify the calculation of S5 to obtain S6 3.14 * 1/3 * 216=>S6:3.14/3 * 216=>S6:678.24/3=>S6:226.08",
		"5.�������S5�õ�S6 3.14*1/3*216=>S6:3.14/3*216=>S6:678.24/3=>S6:226.08"},
		//������
		{"PI","Բ����PI"},
		{"VolumeV1ofFlour","��۵����V1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, Բ����PI, 3.14);
	ColPrintf(PrintfCol::����, Lang("P37������ʽ��ϰ �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����۳���һ��24�����������أ����ĳ��ǿ��ߵ�2����������������ѳ�һ����Բ׶�Σ���۵�����Ƕ��٣�"));
	ColPrintf(PrintfCol::����, Lang("���Ϊx����Ϊ2x����Ϊx���뾶Ϊx"));
	ColPrintf(PrintfCol::����, Lang("1.�г�ʽ��S1Բ������� 3.14*(1/3)*2x^2"));
	ColPrintf(PrintfCol::����, Lang("2.����ʽ��S1�õ�Բ�������S2 3.14*(1/3)*2x^3"));
	ColPrintf(PrintfCol::����, Lang("3.��������� 2x*x*x=2x^3=>S3:2x^3=216"));
	ColPrintf(PrintfCol::����, Lang("4.��S4����S2�õ�Բ�������S5 3.14*(1/3)*216"));
	ColPrintf(PrintfCol::����, Lang("5.�������S5�õ�S6 3.14*1/3*216=>S6:3.14/3*216=>S6:678.24/3=>S6:226.08"));
}
void P37_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 case four volume problem","P37���� �������"},
		{"Question: How many packaging methods are there to pack 12 identical rectangular prisms into a large package? How is the area of Da Bao the smallest?",
		"��Ŀ�������12����ͬ�ĳ����������γ�һ����İ�װ��м��ְ�װ��������ô�������С?"},
		{"1. If the length, width, and height of a rectangular prism are a, b, and c, and a>b>c, two comparison methods, 2 * 6 and 3 * 4, can be formed",
		"1.�賤���峤���Ϊa��b��c��a>b>c,���γ�2*6��3*4���ֱȽϷ���"},
		{"2.If it is the first type, then the surface area is (2ab+6ac+12bc) * 2=>4ab+12ac+24bc",
		"2.����ǵ�һ�֣���ô�������(2ab+6ac+12bc)*2=>4ab+12ac+24bc�õ�S1"},
		{"3.If it is the second type, then the surface area is (3ab+4ac+12bc) * 2=>6ab+8ac+24bc",
		"3.����ǵڶ��֣���ô�������(3ab+4ac+12bc)*2=>6ab+8ac+24bc�õ�S2"},
		{"4. Compare equations S1 and S2 by removing similar terms 4ab+12ac 6ab+8ac",
		"4.�Ƚ�S1��S2ʽ��ȥ��ͬ����S3 4ab+12ac 6ab+8ac"},
		{"5. Offset items 4ac 2ab with different values of S3",
		"5.����S3��ֵ��ͬ����S4 4ac 2ab"},
		{"6. Simplify S4 to obtain S5 2c b",
		"6.����S4�õ�S5 2c b"},
		{"7. According to the conditions in the question, they cannot be equal. 2c!=b",
		"7��������Ŀ���������ǲ�������� 2c!=b"},
		{"8. If 2c<b, the second type has a smaller surface area",
		"8,���2c<b�ڶ��ֱ����С"},
		{"9.If 2c>b, the first type has a smaller surface area",
		"9,���2c>b��һ�ֱ����С"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P37���� �������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�������12����ͬ�ĳ����������γ�һ����İ�װ��м��ְ�װ��������ô�������С?"));
	ColPrintf(PrintfCol::����, Lang("1.�賤���峤���Ϊa��b��c��a>b>c,���γ�2*6��3*4���ֱȽϷ���"));
	ColPrintf(PrintfCol::����, Lang("2.����ǵ�һ�֣���ô�������(2ab+6ac+12bc)*2=>4ab+12ac+24bc�õ�S1"));
	ColPrintf(PrintfCol::����, Lang("3.����ǵڶ��֣���ô�������(3ab+4ac+12bc)*2=>6ab+8ac+24bc�õ�S2"));
	ColPrintf(PrintfCol::����, Lang("4.�Ƚ�S1��S2ʽ��ȥ��ͬ����S3 4ab+12ac 6ab+8ac"));
	ColPrintf(PrintfCol::����, Lang("5.����S3��ֵ��ͬ����S4 4ac 2ab"));
	ColPrintf(PrintfCol::����, Lang("6.����S4�õ�S5 2c b"));
	ColPrintf(PrintfCol::����, Lang("8,���2c<b�ڶ��ֱ����С"));
	ColPrintf(PrintfCol::����, Lang("9,���2c>b��һ�ֱ����С"));
}
void P37_4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P37 Practice Volume Problem with Four Variations","P37���ı�ʽ��ϰ �������"},
		{"Quoting the calculation result from the previous question",
		"������һ�������"},
		{"Title: How many packaging methods are there for packing 12 identical rectangular prisms with dimensions of 8cm, 7cm, and 3cm to form a large package? How is the area of Da Bao the smallest?",
		"��Ŀ����Ŀ������ѳ����Ϊ8cm��7cm��3cm12����ͬ�ĳ����������γ�һ����İ�װ��м��ְ�װ��������ô�������С?"},
		{"The first type has a smaller surface area of 2cm= %d b= %d 2cm>b",
		"��һ�ֱ����С 2c=%d b=%d 2c>b"},
		{"The second type has a smaller surface area of 2cm=% d b=% d 2cm<b",
		"�ڶ��ֱ����С 2c=%d b=%d 2c<b"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(c, 3);
	DefineLangVarInt(b, 7);
	if (2 * c.Var > b.Var)
	{
		ColPrintf(PrintfCol::����, Lang("��һ�ֱ����С 2c=%d b=%d 2c>b"), 2 * c.Var, b.Var);
	}
	else
	{
		ColPrintf(PrintfCol::����, Lang("�ڶ��ֱ����С 2c=%d b=%d 2c<b"), 2 * c.Var, b.Var);
	}
}
void P37()
{
	//��8����
	P37_1();
	ColPrintf(PrintfCol::����, "");
	P37_1_2();
	ColPrintf(PrintfCol::����, "");
	P37_2();
	ColPrintf(PrintfCol::����, "");
	P37_2_1();
	ColPrintf(PrintfCol::����, "");
	P37_3();
	ColPrintf(PrintfCol::����, "");
	P37_3_1();
	ColPrintf(PrintfCol::����, "");
	P37_4();
	ColPrintf(PrintfCol::����, "");
	P37_4_1();
	ColPrintf(PrintfCol::����, "");
	
}
void P37_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P37();
	Lang.SetCurLanguage(LanguageLib::English);
	P37();
	ColPrintf(PrintfCol::����, "");

}