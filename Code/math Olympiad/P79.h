#pragma once
void P79_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study of One Chicken and Rabbit in the Same Cage","P79 例一 鸡兔同笼假设法"},
		{"Title: There are 100 chickens and rabbits in the cage, with 248 feet. How many chickens and rabbits each have",
		"题目：笼中有鸡兔一百只，有248只脚，问鸡兔各有多少只"},
		{"1. Calculate if all are rabbit legs N1 if all are rabbit legs N1=total number of chickens and rabbits N2 * number of rabbit feet N3",
		"1.计算如果全是兔子腿数N1 如果全是兔子腿数N1=鸡兔共有数量N2*兔子的脚数N3"},
		{"2. Calculate the difference between the actual number of legs N4 and the actual number of legs N4=if all are rabbit legs N1- actual number of legs N2",
		"2.计算与实际腿数差N4 与实际腿数差N4=如果全是兔子腿数N1-实际腿数N2"},
		{"3. Calculate the number of chickens N5. The number of chickens N5=the difference between the actual number of legs N4/(the number of rabbit legs N3- the number of chicken legs N3)",
		"3.计算鸡的数量N5 鸡的数量N5=与实际腿数差N4/(兔子的脚数N3-鸡的脚数N3)"},
		{"4. Calculate the number of rabbits N6=the total number of chickens and rabbits N2- the number of chickens N5",
		"4.计算兔的数量N6 兔的数量N6=鸡兔共有数量N2-鸡的数量N5"},
		//变量表
		{"TotalnumberofchickensandrabbitsN2","鸡兔共有数量N2"},
		{"Rabbit'sfootcountN3","兔子的脚数N3"},
		{"ActualnumberoflegsN2","实际腿数N2"},
		{"ThenumberofchickenfeetN3","鸡的脚数N3"},
		{"IfallarerabbitlegsN1","如果全是兔子腿数N1"},
		{"DifferencefromactualnumberoflegsN4","与实际腿数差N4"},
		{"NumberofchickensN5","鸡的数量N5"},
		{"NumberofrabbitsN6","兔的数量N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(鸡兔共有数量N2, 100);
	DefineLangVarInt(兔子的脚数N3, 4);
	DefineLangVarInt(实际腿数N2, 248);
	DefineLangVarInt(鸡的脚数N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P79 例一 鸡兔同笼假设法"));
	ColPrintf(PrintfCol::标题, Lang("题目：笼中有鸡兔一百只，有248只脚，问鸡兔各有多少只"));
	DefineLangVarInt(如果全是兔子腿数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算如果全是兔子腿数N1 如果全是兔子腿数N1=鸡兔共有数量N2*兔子的脚数N3"));
	如果全是兔子腿数N1 = 鸡兔共有数量N2 * 兔子的脚数N3;
	如果全是兔子腿数N1.PrintProcessLog(1);
	DefineLangVarInt(与实际腿数差N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算与实际腿数差N4 与实际腿数差N4=如果全是兔子腿数N1-实际腿数N2"));
	与实际腿数差N4 = 如果全是兔子腿数N1 - 实际腿数N2;
	与实际腿数差N4.PrintProcessLog(2);
	DefineLangVarInt(鸡的数量N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算鸡的数量N5 鸡的数量N5=与实际腿数差N4/(兔子的脚数N3-鸡的脚数N3)"));
	鸡的数量N5 = 与实际腿数差N4 / (兔子的脚数N3 - 鸡的脚数N3);
	鸡的数量N5.PrintProcessLog(3);
	DefineLangVarInt(兔的数量N6, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算兔的数量N6 兔的数量N6=鸡兔共有数量N2-鸡的数量N5"));
	兔的数量N6 = 鸡兔共有数量N2 - 鸡的数量N5;
	兔的数量N6.PrintProcessLog(4);
}
void P79_1_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study: Equation Method for Chicken and Rabbit in the Same Cage","P79 例一 鸡兔同笼方程法"},
		{"Title: There are 100 chickens and rabbits in the cage, with 248 feet. How many chickens and rabbits each have",
		"题目：笼中有鸡兔一百只，有248只脚，问鸡兔各有多少只"},
		{"If the number of chickens is x, then the number of rabbits is (100-x)",
		"设鸡的数量为x，则兔子的数量为(100-x)只"},
		{"1. List the equation S1 2x+4 (100-x)=248",
		"1.列出式子S1 2x+4(100-x)=248"},
		{"2. Expand equation S1 to obtain S2 2x+400-4x=248",
		"2.展开式子S1得到S2 2x+400-4x=248"},
		{"3. Simplify S2 to obtain S3-2x+400=248",
		"3.化简S2得到S3 -2x+400=248"},
		{"4. Simplify S3 to obtain S4-2x=248-400=-152",
		"4.化简S3得到S4 -2x=248-400=-152"},
		{"5. Simplify S4 to obtain S5- x=-76=>x=76",
		"5.化简S4得到S5 -x=-76=>x=76"},
		{"6. According to S5, the number of rabbits in S6 is 24, ranging from 100 to 76",
		"6.根据S5得到兔的只数S6 100-76=24"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P79 例一 鸡兔同笼方程法"));
	ColPrintf(PrintfCol::标题, Lang("题目：笼中有鸡兔一百只，有248只脚，问鸡兔各有多少只"));
	ColPrintf(PrintfCol::方法, Lang("设鸡的数量为x，则兔子的数量为(100-x)只"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 2x+4(100-x)=248"));
	ColPrintf(PrintfCol::方法, Lang("2.展开式子S1得到S2 2x+400-4x=248"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 -2x+400=248"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 -2x=248-400=-152"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S4得到S5 -x=-76=>x=76"));
	ColPrintf(PrintfCol::方法, Lang("6.根据S5得到兔的只数S6 100-76=24"));
}
void P79_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case One Variation Practice Chicken and Rabbit in the Same Cage Fake Method","P79 例一变式练习 鸡兔同笼假设法"},
		{"Title: The class bought 50 tickets, with 15 tickets each and 20 yuan each. The total ticket price is 880 yuan. How many tickets do each have",
		"题目：班级买来50张票，有15一张的，有20元一张的，总票价是880元，问各有几张"},
		{"1. Calculate if all are 20 N1=number of tickets N2 * 20 yuan N3",
		"1.计算如果全是二十N1 如果全是二十N1=票数量N2*二十元N3"},
		{"2. Calculate the difference between the actual amount of money N4 and the actual amount of money N4=if all are twenty N1- actual amount of money N2",
		"2.计算与实际钱数差N4 与实际钱数差N4=如果全是二十N1-实际钱数N2"},
		{"3. Calculate the number of chickens N5. The number of chickens N5=the difference between the actual number of legs N4/(the number of rabbit legs N3- the number of chicken legs N3)",
		"3.计算十五的数量N5 十五的数量N5=与实际钱数差N4/(二十元N3-十五元N3)"},
		{"4. Calculate the quantity of twenty N6=the quantity of tickets N2 minus the quantity of fifteen N5",
		"4.计算二十的数量N6 二十的数量N6=票数量N2-十五的数量N5"},
		//变量表
		{"NumberofticketsN2","票数量N2"},
		{"TwentyyuanN3","二十元N3"},
		{"FifteenyuanN3","十五元N3"},
		{"ActualamountN2","实际钱数N2"},
		{"Ifallare20N1","如果全是二十N1"},
		{"DifferencefromactualamountN4","与实际钱数差N4"},
		{"NumberofFifteenN5","十五的数量N5"},
		{"NumberofTwentyN6","二十的数量N6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(票数量N2, 50);
	DefineLangVarInt(二十元N3, 20);
	DefineLangVarInt(十五元N3, 15);
	DefineLangVarInt(实际钱数N2, 880);
	ColPrintf(PrintfCol::标题, Lang("P79 例二 鸡兔同笼假设法"));
	ColPrintf(PrintfCol::标题, Lang("题目：班级买来50张票，有15一张的，有20元一张的，总票价是880元，问各有几张"));
	DefineLangVarInt(如果全是二十N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算如果全是二十N1 如果全是二十N1=票数量N2*二十元N3"));
	如果全是二十N1 = 票数量N2 * 二十元N3;
	如果全是二十N1.PrintProcessLog(1);
	DefineLangVarInt(与实际钱数差N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算与实际钱数差N4 与实际钱数差N4=如果全是二十N1-实际钱数N2"));
	与实际钱数差N4 = 如果全是二十N1 - 实际钱数N2;
	与实际钱数差N4.PrintProcessLog(2);
	DefineLangVarInt(十五的数量N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算十五的数量N5 十五的数量N5=与实际钱数差N4/(二十元N3-十五元N3)"));
	十五的数量N5 = 与实际钱数差N4 / (二十元N3 - 十五元N3);
	十五的数量N5.PrintProcessLog(3);
	DefineLangVarInt(二十的数量N6, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算二十的数量N6 二十的数量N6=票数量N2-十五的数量N5"));
	二十的数量N6 = 票数量N2 - 十五的数量N5;
	二十的数量N6.PrintProcessLog(4);
}
void P79_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Example One Variation Practice Chicken Rabbit Same Cage Equation Method","P79 例一变式练习 鸡兔同笼方程法"},
		{"Title: The class bought 50 tickets, with 15 tickets each and 20 yuan each. The total ticket price is 880 yuan. How many tickets do each have",
		"题目：班级买来50张票，有15一张的，有20元一张的，总票价是880元，问各有几张"},
		{"If the quantity of fifteen yuan is x, then the quantity of twenty yuan is (100-x) only",
		"设十五元的数量为x，则二十元的数量为(100-x)只"},
		{"1. List the equation S1 15x+20 (50-x)=880",
		"1.列出式子S1 15x+20(50-x)=880"},
		{"2. Expand equation S1 to obtain S2 15x+1000-20x=880",
		"2.展开式子S1得到S2 15x+1000-20x=880"},
		{"3. Simplify S2 to obtain S3-5x+1000=880",
		"3.化简S2得到S3 -5x+1000=880"},
		{"4. Simplify S3 to obtain S4-5x=880-1000=-120",
		"4.化简S3得到S4 -5x=880-1000=-120"},
		{"5. Simplify S4 to obtain S5- x=-24=>x=24",
		"5.化简S4得到S5 -x=-24=>x=24"},
		{"6. According to S5, the number of twenty yuan pieces is S6 50-24=26",
		"6.根据S5得到二十元只数S6 50-24=26"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P79 例一变式练习 鸡兔同笼方程法"));
	ColPrintf(PrintfCol::标题, Lang("题目：班级买来50张票，有15一张的，有20元一张的，总票价是880元，问各有几张"));
	ColPrintf(PrintfCol::方法, Lang("设十五元的数量为x，则二十元的数量为(100-x)只"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 15x+20(50-x)=880"));
	ColPrintf(PrintfCol::方法, Lang("2.展开式子S1得到S2 15x+1000-20x=880"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 -5x+1000=880"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 -5x=880-1000=-120"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S4得到S5 -x=-24=>x=24"));
	ColPrintf(PrintfCol::方法, Lang("6.根据S5得到二十元的只数S6 50-24=26"));
}
void P79_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study of Two Chickens and Rabbits in the Same Cage","P79 例二 鸡兔同笼假设法"},
		{"Title: Sika deer and ostrich have a total of 208 legs, with ostriches having 20 more legs than Sika deer. How many Sika deer and ostriches each have?",
		"题目：梅花鹿和鸵鸟共有腿数208只，鸵鸟比梅花鹿多20只，梅花鹿和鸵鸟各多少只?"},
		{"1. Calculate if the number of legs is the same as that of the spotted deer N1. If the number of legs is the same as that of the spotted deer N1=actual number of legs N1- (the number of ostriches more than spotted deer N3 * ostrich legs N4)",
		"1,计算如果数量和梅花鹿相同脚数N1 如果数量和梅花鹿相同脚数N1=实际脚数N1-(鸵鸟比梅花鹿多的只数N3*鸵鸟腿数N4)"},
		{"2. Calculate the number of legs and N5. The number of legs and N5=the number of ostrich legs N4+the number of sika deer legs N5",
		"2.计算脚数和N5 脚数和N5=鸵鸟腿数N4+梅花鹿腿数N5"},
		{"3. Calculate the number of sika deer N6=if the number is the same as that of sika deer, the number of legs N1 divided by the number of legs and N5",
		"3.计算梅花鹿只数N6 梅花鹿只数N6=如果数量和梅花鹿相同脚数N1/脚数和N5"},
		{"4. Calculate the number of ostriches N7=actual number of feet N1- number of sika deer N6",
		"4.计算鸵鸟只数N7 鸵鸟只数N7 = 梅花鹿只数N6 - 鸵鸟比梅花鹿多的只数N3"},
		//变量表
		{"ActualnumberoffeetN1","实际脚数N1"},
		{"OstrichlegcountN4","鸵鸟腿数N4"},
		{"TherearemoreostrichesthansikadeerN3","鸵鸟比梅花鹿多的只数N3"},
		{"SikadeerlegcountN5","梅花鹿腿数N5"},
		{"Ifthenumberoflegsisthesameasthatofthespotteddeer,N1","如果数量和梅花鹿相同脚数N1"},
		{"FootcountandN5","脚数和N5"},
		{"NumberofspotteddeerN6","梅花鹿只数N6"},
		{"NumberofostrichesN7","鸵鸟只数N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(实际脚数N1, 208);
	DefineLangVarInt(鸵鸟腿数N4, 2);
	DefineLangVarInt(鸵鸟比梅花鹿多的只数N3, 20);
	DefineLangVarInt(梅花鹿腿数N5, 4);
	ColPrintf(PrintfCol::标题, Lang("P79 例二 鸡兔同笼假设法"));
	ColPrintf(PrintfCol::标题, Lang("题目：梅花鹿和鸵鸟共有腿数208只，鸵鸟比梅花鹿多20只，梅花鹿和鸵鸟各多少只?"));
	DefineLangVarInt(如果数量和梅花鹿相同脚数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1,计算如果数量和梅花鹿相同脚数N1 如果数量和梅花鹿相同脚数N1=实际脚数N1-(鸵鸟比梅花鹿多的只数N3*鸵鸟腿数N4)"));
	如果数量和梅花鹿相同脚数N1 = 实际脚数N1 - (鸵鸟比梅花鹿多的只数N3 * 鸵鸟腿数N4);
	如果数量和梅花鹿相同脚数N1.PrintProcessLog(1);
	DefineLangVarInt(脚数和N5, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算脚数和N5 脚数和N5=鸵鸟腿数N4+梅花鹿腿数N5"));
	脚数和N5 = 鸵鸟腿数N4 + 梅花鹿腿数N5;
	脚数和N5.PrintProcessLog(2);
	DefineLangVarInt(梅花鹿只数N6, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算梅花鹿只数N6 梅花鹿只数N6=如果数量和梅花鹿相同脚数N1/脚数和N5"));
	梅花鹿只数N6 = 如果数量和梅花鹿相同脚数N1 / 脚数和N5;
	梅花鹿只数N6.PrintProcessLog(3);
	DefineLangVarInt(鸵鸟只数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算鸵鸟只数N7 鸵鸟只数N7 = 梅花鹿只数N6 - 鸵鸟比梅花鹿多的只数N3"));
	鸵鸟只数N7 = 梅花鹿只数N6 - 鸵鸟比梅花鹿多的只数N3;
	鸵鸟只数N7.PrintProcessLog(4);
}
void P79_3_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 cases of two chickens and rabbits in the same cage equation method","P79 例二 鸡兔同笼方程法"},
		{"Title: Sika deer and ostrich have a total of 208 legs, with ostriches having 20 more legs than Sika deer. How many Sika deer and ostriches each have?",
		"题目：梅花鹿和鸵鸟共有腿数208只，鸵鸟比梅花鹿多20只，梅花鹿和鸵鸟各多少只?"},
		{"If the quantity of fifteen yuan is x, then the quantity of twenty yuan is (100-x) only",
		"设梅花鹿的数量为x，则鸵鸟的数量为(x+20)只"},
		{"1. List the equation S1 4x+2 (x+20)=208",
		"1.列出式子S1 4x+2(x+20)=208"},
		{"2. Expand equation S1 to obtain S2 4x+2x+40=208",
		"2.展开式子S1得到S2 4x+2x+40=208"},
		{"3. Simplify S2 to obtain S3 4x+2x=208-40=168",
		"3.化简S2得到S3 4x+2x=208-40=168"},
		{"4. Simplify S3 to obtain S4 6x=168",
		"4.化简S3得到S4 6x=168"},
		{"5. Simplify S4 to obtain S5 x=28",
		"5.化简S4得到S5 x=28"},
		{"6. According to S5, the number of twenty yuan pieces is S6 28+20=48",
		"6.根据S5得到鸵鸟只数S6 28+20=48"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P79 例二 鸡兔同笼方程法"));
	ColPrintf(PrintfCol::标题, Lang("题目：梅花鹿和鸵鸟共有腿数208只，鸵鸟比梅花鹿多20只，梅花鹿和鸵鸟各多少只?"));
	ColPrintf(PrintfCol::方法, Lang("设梅花鹿的数量为x，则鸵鸟的数量为(x+20)只"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 4x+2(x+20)=208"));
	ColPrintf(PrintfCol::方法, Lang("2.展开式子S1得到S2 4x+2x+40=208"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 4x+2x=208-40=168"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 6x=168"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S4得到S5 x=28"));
	ColPrintf(PrintfCol::方法, Lang("6.根据S5得到鸵鸟只数S6 28+20=48"));
}
void P79_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study on the Practice of Two Variations of Chicken and Rabbit in the Same Cage","P79 例二变式练习 鸡兔同笼假设法"},
		{"Title: Roosters and rabbits in the same cage, there are a total of 107 chickens and rabbits, and the number of legs of rabbits is 56 more than that of chickens. How many chickens and rabbits are there in each cage",
		"题目：鸡兔同笼，鸡兔共有107只，兔的脚数比鸡的脚数多56只，鸡兔各有多少只"},
		{"1. Calculate if all are rabbit feet N1=rabbit legs N2 * chicken and rabbit N3",
		"1.计算如果都是兔子脚数N1 如果都是兔子脚数N1=兔子腿数N2*鸡兔数量N3"},
		{"2. Calculate the difference between the actual and calculated values N2 and N2=if both are the number of rabbit legs N1- the number of legs that rabbits have more than chickens N2",
		"2.计算与实际差N2 与实际差N2=如果都是兔子脚数N1-兔比鸡多的腿数N2"},
		{"3. Calculate the number of chickens N3. The number of chickens N3=the difference from the actual N2/(the number of rabbit feet N3+the number of chicken feet N4)",
		"3.计算鸡的数量N3 鸡的数量N3=与实际差N2/(兔子腿数N2+鸡的脚数N4)"},
		{"4. Calculate the number of rabbits N4. The number of rabbits N4=the number of chickens N3- the number of chickens N3",
		"4.计算兔的数量N4 兔的数量N4=鸡兔数量N3-鸡的数量N3"},
		//变量表
		{"RabbitlegcountN2","兔子腿数N2"},
		{"NumberofchickensandrabbitsN3","鸡兔数量N3"},
		{"RabbithasmorelegsthanchickenN2","兔比鸡多的腿数N2"},
		{"Chicken'sFootCountN4","鸡的脚数N4"},
		{"IftheyareallrabbitfeetN1","如果都是兔子脚数N1"},
		{"DifferencefromactualN2","与实际差N2"},
		{"ThenumberofchickensN3","鸡的数量N3"},
		{"ThenumberofrabbitsN4","兔的数量N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(兔子腿数N2, 4);
	DefineLangVarInt(鸡兔数量N3, 107);
	DefineLangVarInt(兔比鸡多的腿数N2, 56);
	DefineLangVarInt(鸡的脚数N4, 2);
	ColPrintf(PrintfCol::标题, Lang("P79 例二变式练习 鸡兔同笼假设法"));
	ColPrintf(PrintfCol::标题, Lang("题目：鸡兔同笼，鸡兔共有107只，兔的脚数比鸡的脚数多56只，鸡兔各有多少只"));
	DefineLangVarInt(如果都是兔子脚数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算如果都是兔子脚数N1 如果都是兔子脚数N1=兔子腿数N2*鸡兔数量N3"));
	如果都是兔子脚数N1 = 兔子腿数N2 * 鸡兔数量N3;
	如果都是兔子脚数N1.PrintProcessLog(1);
	DefineLangVarInt(与实际差N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算与实际差N2 与实际差N2=如果都是兔子脚数N1-兔比鸡多的腿数N2"));
	与实际差N2 = 如果都是兔子脚数N1 - 兔比鸡多的腿数N2;
	与实际差N2.PrintProcessLog(2);
	DefineLangVarInt(鸡的数量N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算鸡的数量N3 鸡的数量N3=与实际差N2/(兔子腿数N2+鸡的脚数N4)"));
	鸡的数量N3 = 与实际差N2 / (兔子腿数N2 + 鸡的脚数N4);
	鸡的数量N3.PrintProcessLog(3);
	DefineLangVarInt(兔的数量N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算兔的数量N4 兔的数量N4=鸡兔数量N3-鸡的数量N3"));
	兔的数量N4 = 鸡兔数量N3 - 鸡的数量N3;
	兔的数量N4.PrintProcessLog(4);
}
void P79_4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P79 Case Study on the Two Variation Exercise of Chicken Rabbit Same Cage Equation Method","P79 例二变式练习 鸡兔同笼方程法"},
		{"Title: Roosters and rabbits in the same cage, there are a total of 107 chickens and rabbits, and the number of legs of rabbits is 56 more than that of chickens. How many chickens and rabbits are there in each cage",
		"题目：鸡兔同笼，鸡兔共有107只，兔的脚数比鸡的脚数多56只，鸡兔各有多少只"},
		{"If the quantity of fifteen yuan is x, then the quantity of twenty yuan is (100-x) only",
		"设兔的数量为x，则鸡的数量为y只"},
		{"1. List the equation S1 x+y=107",
		"1.列出式子S1 x+y=107"},
		{"2. List equation S2 4x-2y=56",
		"2.列出式子S2 4x-2y=56"},
		{"3. Simplify S2 to obtain S3 (4x-2y)/2=(56)/2",
		"3.化简S2得到S3 (4x-2y)/2=(56)/2"},
		{"4. Simplify S3 to obtain S4 2x-y=28",
		"4.化简S3得到S4 2x-y=28"},
		{"5. Combining S4 and S1, obtain S5 x+y+2x-y=107+28=135",
		"5.结合S4和S1得到S5 x+y+2x-y=107+28=135"},
		{"6. Simplify S5 to obtain S6 x+2x=135=>3x=135=>x=45",
		"6.化简S5得到S6 x+2x=135=>3x=135=>x=45"},
		{"7. Insert S6 into S1 to obtain S7 45+y=107=>y=62",
		"7.将S6套入S1得到S7 45+y=107=>y=62"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P79 例二变式练习 鸡兔同笼方程法"));
	ColPrintf(PrintfCol::标题, Lang("题目：鸡兔同笼，鸡兔共有107只，兔的脚数比鸡的脚数多56只，鸡兔各有多少只"));
	ColPrintf(PrintfCol::方法, Lang("设兔的数量为x，则鸡的数量为y只"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 x+y=107"));
	ColPrintf(PrintfCol::方法, Lang("2.列出式子S2 4x-2y=56"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 (4x-2y)/2=(56)/2"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 2x-y=28"));
	ColPrintf(PrintfCol::方法, Lang("5.结合S4和S1得到S5 x+y+2x-y=107+28=135"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S5得到S6 x+2x=135=>3x=135=>x=45"));
	ColPrintf(PrintfCol::方法, Lang("7.将S6套入S1得到S7 45+y=107=>y=62"));
}
void P79()
{
	P79_1();
	ColPrintf(PrintfCol::方法, "");
	P79_1_2();
	ColPrintf(PrintfCol::方法, "");
	P79_2();
	ColPrintf(PrintfCol::方法, "");
	P79_2_2();
	ColPrintf(PrintfCol::方法, "");
	P79_3();
	ColPrintf(PrintfCol::方法, "");
	P79_3_2();
	ColPrintf(PrintfCol::方法, "");
	P79_4();
	ColPrintf(PrintfCol::方法, "");
	P79_4_2();
	ColPrintf(PrintfCol::方法, "");
}
void P79_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P79();
	Lang.SetCurLanguage(LanguageLib::English);
	P79();
	ColPrintf(PrintfCol::方法, "");

}