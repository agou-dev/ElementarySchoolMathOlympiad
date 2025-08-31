#pragma once
void P75_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 1 Score Clever Calculation","P75 例1 分数巧算"},
		{"Title: There is a teacher whose age is multiplied by 2, subtracted by 18, divided by 2, and added to 8. The result is 38 years old. How old is this teacher this year?",
		"题目：有一位老师，他的年龄乘2，减去18后，再除以2，加上8，结果是38岁，这个老师今年多少岁?"},
		{"1. Calculate the age before addition N1=calculated age N2- added age N3",
		"1.计算加前的年龄N1 加前的年龄N1=计算后的岁数N2-加上的岁数N3"},
		{"2. Calculate the age before division N1 divided by the age before division N1=add the age before division N1 * divide the age before division N3",
		"2.计算除前的年龄N1 除前的年龄N1=加前的年龄N1*除的岁数N3"},
		{"3. Calculate the age before subtraction N1 minus the age before subtraction N1=divide the age before subtraction N1+subtract the age before subtraction N3",
		"3.计算减前的年龄N1 减前的年龄N1=除前的年龄N1+减的岁数N3"},
		{"4. Calculate the original age N1, which is equal to the age before subtraction N1 divided by the multiplied age N3",
		"4.计算原年龄N1 原年龄N1=减前的年龄N1/乘的岁数N3"},
		//变量表
		{"CalculatedageN2","计算后的岁数N2"},
		{"AddedageN3","加上的岁数N3"},
		{"ExceptforageN3","除的岁数N3"},
		{"ReducedageN3","减的岁数N3"},
		{"AgeofrideN3","乘的岁数N3"},
		{"AgebeforeadditionN1","加前的年龄N1"},
		{"ExceptforthepreviousageN1","除前的年龄N1"},
		{"AgebeforereductionN1","减前的年龄N1"},
		{"OriginalageN1","原年龄N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(计算后的岁数N2, 38);
	DefineLangVarInt(加上的岁数N3, 8);
	DefineLangVarInt(除的岁数N3, 2);
	DefineLangVarInt(减的岁数N3, 18);
	DefineLangVarInt(乘的岁数N3, 2);
	ColPrintf(PrintfCol::标题, Lang("P75 例1 分数巧算"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一位老师，他的年龄乘2，减去18后，再除以2，加上8，结果是38岁，这个老师今年多少岁?"));
	DefineLangVarInt(加前的年龄N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算加前的年龄N1 加前的年龄N1=计算后的岁数N2-加上的岁数N3"));
	加前的年龄N1 = 计算后的岁数N2 - 加上的岁数N3;
	加前的年龄N1.PrintProcessLog(1);
	DefineLangVarInt(除前的年龄N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算除前的年龄N1 除前的年龄N1=加前的年龄N1*除的岁数N3"));
	除前的年龄N1 = 加前的年龄N1 * 除的岁数N3;
	除前的年龄N1.PrintProcessLog(2);
	DefineLangVarInt(减前的年龄N1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算减前的年龄N1 减前的年龄N1=除前的年龄N1+减的岁数N3"));
	减前的年龄N1 = 除前的年龄N1 + 减的岁数N3;
	减前的年龄N1.PrintProcessLog(3);
	DefineLangVarInt(原年龄N1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算原年龄N1 原年龄N1=减前的年龄N1/乘的岁数N3"));
	原年龄N1 = 减前的年龄N1 / 乘的岁数N3;
	原年龄N1.PrintProcessLog(4);
}
void P75_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 2 Score Clever Calculation","P75 例2 分数巧算"},
		{"Title: The building sells televisions. In the first half of the year, more than half of the total number of televisions sold was 10, and in the second half, more than half of the remaining 20 were sold. At this time, there are still 95 televisions left. How many were there in total?",
		"题目：大厦出售电视机，上半年出售总数的一半多10台，下半年售出剩下的一半多20台此时还剩95台，原来一共有多少台?"},
		{"1. Calculate the remaining half N1. The remaining half N1=the current number of units N1+the remaining half sold N2",
		"1.计算剩下的一半N1 剩下的一半N1=此时的台数N1+剩下一半多卖出的N2"},
		{"2. Calculate half of the total number of sales without adding N2, which is equal to the remaining half N1 multiplied by N3",
		"2.计算不加多卖出总数的一半N2 不加多卖出总数的一半N2=剩下的一半N1*倍率N3"},
		{"3. Calculate half of the total N4, half of the total N4=half of the total sales without adding more N2+half of the total sales N3",
		"3,计算总数的一半N4 总数的一半N4=不加多卖出总数的一半N2+总数的一半多卖出的N3"},
		{"4. Calculate the total number N5=half of the total number N4 * multiplier N3",
		"4.计算总数N5 总数N5=总数的一半N4*倍率N3"},
		//变量表
		{"Atthistime,thenumberofunitsN1","此时的台数N1"},
		{"MagnificationN3","倍率N3"},
		{"MorethanhalfoftheN2soldremains","剩下一半多卖出的N2"},
		{"MorethanhalfofthetotalN3sold","总数的一半多卖出的N3"},
		{"TheremaininghalfN1","剩下的一半N1"},
		{"NotaddinghalfofthetotalsalesN2","不加多卖出总数的一半N2"},
		{"HalfofthetotalN4","总数的一半N4"},
		{"TotalN5","总数N5"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(此时的台数N1, 95);
	DefineLangVarInt(剩下一半多卖出的N2, 20);
	DefineLangVarInt(倍率N3, 2);
	DefineLangVarInt(总数的一半多卖出的N3, 10);
	ColPrintf(PrintfCol::标题, Lang("P75 例2 分数巧算"));
	ColPrintf(PrintfCol::标题, Lang("题目：大厦出售电视机，上半年出售总数的一半多10台，下半年售出剩下的一半多20台此时还剩95台，原来一共有多少台?"));
	DefineLangVarInt(剩下的一半N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算剩下的一半N1 剩下的一半N1=此时的台数N1+剩下一半多卖出的N2"));
	剩下的一半N1 = 此时的台数N1 + 剩下一半多卖出的N2;
	剩下的一半N1.PrintProcessLog(1);
	DefineLangVarInt(不加多卖出总数的一半N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算不加多卖出总数的一半N2 不加多卖出总数的一半N2=剩下的一半N1*倍率N3"));
	不加多卖出总数的一半N2 = 剩下的一半N1 * 倍率N3;
	不加多卖出总数的一半N2.PrintProcessLog(2);
	DefineLangVarInt(总数的一半N4, 0);
	ColPrintf(PrintfCol::方法, Lang("3,计算总数的一半N4 总数的一半N4=不加多卖出总数的一半N2+总数的一半多卖出的N3"));
	总数的一半N4 = 不加多卖出总数的一半N2 + 总数的一半多卖出的N3;
	总数的一半N4.PrintProcessLog(3);
	DefineLangVarInt(总数N5, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算总数N5 总数N5=总数的一半N4*倍率N3"));
	总数N5 = 总数的一半N4 * 倍率N3;
	总数N5.PrintProcessLog(4);
}
void P75_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 3 Score Clever Calculation","P75 例3 分数巧算"},
		{"Title: The People's Liberation Army participates in disaster relief activities. Half of the first team is drawn to the second team, 35 people are drawn to the third team, the remaining half is drawn to the fourth team, and 8 people are drawn in.At this time, there are 30 people， How many people were originally in the first team at this time",
		"题目：解放军参加救灾活动，从第一队中抽出1半给第2队，抽调35人给第3队，抽调剩下的一半给第4队，又调进8人，此时有30人，此时第一队原来多少人"},
		{"1. Calculate the quantity N1 before the transfer, which is equal to the current number of people N2 minus the number of people transferred N3",
		"1.计算调进前的数量N1 调进前的数量N1=现在人数N2-调进人数N3"},
		{"2. Calculate the quantity before half adjustment N2=quantity before adjustment N1 * multiplier N4",
		"2.计算调剩下一半前数量N2 调剩下一半前数量N2=调进前的数量N1*倍率N4"},
		{"3. Calculate the quantity before transfer N3. The quantity before transfer N3=half of the quantity before transfer N2+the quantity before transfer N3",
		"3.计算调出前数量N3 调出前数量N3=调剩下一半前数量N2+调出数量N3"},
		{"4. Calculate the original team size N4, which is equal to the pre transfer quantity N3 multiplied by the multiplier N4",
		"4.计算原队伍人数N4 原队伍人数N4=调出前数量N3*倍率N4"},
		//变量表
		{"ThecurrentnumberofpeopleisN2","现在人数N2"},
		{"NumberoftransferredpersonnelN3","调进人数N3"},
		{"MagnificationN4","倍率N4"},
		{"TransferquantityN3","调出数量N3"},
		{"QuantitybeforeadjustmentN1","调进前的数量N1"},
		{"AdjusttheremaininghalfofthequantitytoN2","调剩下一半前数量N2"},
		{"QuantityN3beforeretrieval","调出前数量N3"},
		{"OriginalteamsizeN4","原队伍人数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(现在人数N2, 30);
	DefineLangVarInt(调进人数N3, 8);
	DefineLangVarInt(倍率N4, 2);
	DefineLangVarInt(调出数量N3, 35);
	ColPrintf(PrintfCol::标题, Lang("P75 例3 分数巧算"));
	ColPrintf(PrintfCol::标题, Lang("题目：解放军参加救灾活动，从第一队中抽出1半给第2队，抽调35人给第3队，抽调剩下的一半给第4队，又调进8人，此时有30人，此时第一队原来多少人"));
	DefineLangVarInt(调进前的数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算调进前的数量N1 调进前的数量N1=现在人数N2-调进人数N3"));
	调进前的数量N1 = 现在人数N2 - 调进人数N3;
	调进前的数量N1.PrintProcessLog(1);
	DefineLangVarInt(调剩下一半前数量N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算调剩下一半前数量N2 调剩下一半前数量N2=调进前的数量N1*倍率N4"));
	调剩下一半前数量N2 = 调进前的数量N1 * 倍率N4;
	调剩下一半前数量N2.PrintProcessLog(2);
	DefineLangVarInt(调出前数量N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算调出前数量N3 调出前数量N3=调剩下一半前数量N2+调出数量N3"));
	调出前数量N3 = 调剩下一半前数量N2 + 调出数量N3;
	调出前数量N3.PrintProcessLog(3);
	DefineLangVarInt(原队伍人数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算原队伍人数N4 原队伍人数N4=调出前数量N3*倍率N4"));
	原队伍人数N4 = 调出前数量N3 * 倍率N4;
	原队伍人数N4.PrintProcessLog(4);
}
void P75_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 4 Score Clever Calculation","P75 例4 分数巧算"},
		{"Title: A, B, and C have a total of 90 books. If B borrows 3 books from C and then gives C 5 books, then the books of A, B, and C are equal. How many books did A, B, and C have in total?",
		"题目：甲乙丙三者共有90本图书，如果乙向丙借了3书后，又送给丙5本书，此时甲乙丙三者的书都相等，原来甲乙丙共有多少本书?"},
		{"1. Calculate the current number of books per person N1=shared books N2/number of people N3",
		"1.计算现在每人的书数N1 现在每人的书数N1=共有的书N2/人数N3"},
		{"2. Calculate the original number of books for C, N2. The original number of books for C is N2=the current number of books per person, N1- the number of books given to C by B, N2",
		"2.计算丙原来书数N2 丙原来书数N2=现在每人的书数N1-乙送丙的书数量N2"},
		{"3. Calculate the original number of books for A, N3. The original number of books for A, N3, is equal to the total number of books owned by A, N2, and the number of books borrowed by C, N3",
		"3.计算甲原来书数N3 甲原来书数N3=现在每人的书数N1+丙借乙的本数N3"},
		{"4. Calculate the original number of books for B, N4. The original number of books for B is N4=shared books N2- the number of books borrowed by C from B N3+the number of books given by B to C N2",
		"4.计算乙原来的书数N4 乙原来的书数N4=现在每人的书数N1-丙借乙的本数N3+乙送丙的书数量N2"},
		//变量表
		{"SharedBooksN2","共有的书N2"},
		{"peopleNumberN3","人数N3"},
		{"CborrowsB'soriginalnumberN3","丙借乙的本数N3"},
		{"ThenumberofbookssentbyBtoCisN2","乙送丙的书数量N2"},
		{"ThenumberofbooksperpersonnowisN1","现在每人的书数N1"},
		{"NumberoforiginalbooksN2","丙原来书数N2"},
		{"NumberoforiginalbooksN3","甲原来书数N3"},
		{"TheoriginalnumberofbooksforBisN4","乙原来的书数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(共有的书N2, 90);
	DefineLangVarInt(人数N3, 3);
	DefineLangVarInt(丙借乙的本数N3, 3);
	DefineLangVarInt(乙送丙的书数量N2, 5);
	ColPrintf(PrintfCol::标题, Lang("P75 例4 分数巧算"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙丙三者共有90本图书，如果乙向丙借了3书后，又送给丙5本书，此时甲乙丙三者的书都相等，原来甲乙丙共有多少本书?"));
	DefineLangVarInt(现在每人的书数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算现在每人的书数N1 现在每人的书数N1=共有的书N2/人数N3"));
	现在每人的书数N1 = 共有的书N2 / 人数N3;
	现在每人的书数N1.PrintProcessLog(1);
	DefineLangVarInt(丙原来书数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算丙原来书数N2 丙原来书数N2=现在每人的书数N1-乙送丙的书数量N2"));
	丙原来书数N2 = 现在每人的书数N1 - 乙送丙的书数量N2;
	丙原来书数N2.PrintProcessLog(2);
	DefineLangVarInt(甲原来书数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲原来书数N3 甲原来书数N3=现在每人的书数N1+丙借乙的本数N3"));
	甲原来书数N3 = 现在每人的书数N1 + 丙借乙的本数N3;
	甲原来书数N3.PrintProcessLog(3);
	DefineLangVarInt(乙原来的书数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算乙原来的书数N4 乙原来的书数N4=现在每人的书数N1-丙借乙的本数N3+乙送丙的书数量N2"));
	乙原来的书数N4 = 现在每人的书数N1 - 丙借乙的本数N3 + 乙送丙的书数量N2;
	乙原来的书数N4.PrintProcessLog(4);
}
void P75_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 5 Score Clever Calculation","P75 例5 分数巧算"},
		{"Title: A and B each have several kilograms of oil. If A pours out the same amount of oil as B and puts it into B, and B puts an equivalent amount of oil from A into A, then both are 24 kilograms. How many kilograms did they originally have",
		"题目：甲乙各有若干千克油，如果甲倒出和乙同样多的油放入乙，乙把甲油相当的油放入甲中，此时两者都是24千克，原来多少千克"},
		{"1. Calculate the amount of oil in front of the nail N1=current oil N2/multiplier N1",
		"1.计算放入甲前甲油数N1 放入甲前甲油数N1=现在的油数N2/倍率N1"},
		{"2. Calculate the total oil quantity N2 between the two, which is equal to the current oil quantity N2 multiplied by the multiplier N1",
		"2.计算两者总共油数N2 两者总共油数N2=现在的油数N2*倍率N1"},
		{"3. Calculate the number of nail polish N3. The number of nail polish N3 is equal to (the total number of nail polish N2 minus the number of nail polish N1 before putting in the nail polish) divided by the ratio N1",
		"3.计算甲油数N3 甲油数N3=(两者总共油数N2-放入甲前甲油数N1)/倍率N1"},
		{"4. Calculate the number of gasoline N4, which is equal to the current number of gasoline N2 minus the number of gasoline N3",
		"4.计算乙油数N4 乙油数N4=现在的油数N2-甲油数N3"},
		//变量表
		{"ThecurrentoillevelisN2","现在的油数N2"},
		{"MagnificationN1","倍率N1"},
		{"NumberofnailpolishbeforeinsertionN1","放入甲前甲油数N1"},
		{"ThetotaloilquantityofthetwoisN2","两者总共油数N2"},
		{"OilcontentN3","甲油数N3"},
		{"OilnumberN4","乙油数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(现在的油数N2, 24);
	DefineLangVarInt(倍率N1, 2);
	ColPrintf(PrintfCol::标题, Lang("P75 例5 分数巧算"));
	ColPrintf(PrintfCol::标题, Lang("题目：甲乙各有若干千克油，如果甲倒出和乙同样多的油放入乙，乙把甲油相当的油放入甲中，此时两者都是24千克，原来多少千克"));
	DefineLangVarInt(放入甲前甲油数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算放入甲前甲油数N1 放入甲前甲油数N1=现在的油数N2/倍率N1"));
	放入甲前甲油数N1 = 现在的油数N2 / 倍率N1;
	放入甲前甲油数N1.PrintProcessLog(1);
	DefineLangVarInt(两者总共油数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算两者总共油数N2 两者总共油数N2=现在的油数N2*倍率N1"));
	两者总共油数N2 = 现在的油数N2 * 倍率N1;
	两者总共油数N2.PrintProcessLog(2);
	DefineLangVarInt(甲油数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算甲油数N3 甲油数N3=(两者总共油数N2-放入甲前甲油数N1)/倍率N1"));
	甲油数N3 = (两者总共油数N2 - 放入甲前甲油数N1) / 倍率N1;
	甲油数N3.PrintProcessLog(3);
	DefineLangVarInt(乙油数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算乙油数N4 乙油数N4=现在的油数N2-甲油数N3"));
	乙油数N4 = 现在的油数N2 - 甲油数N3;
	乙油数N4.PrintProcessLog(4);
}
void P75_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P75 Case 6 Score Clever Calculation","P75 例6 分数巧算"},
		{"Title: The school brought 36 saplings, and Dongdong and Lili competed to plant them. Dongdong took some first, and Lili saw them and snatched 10 from Dongdong. Dongdong was not convinced and snatched 5. At this point, Dongdong was twice as many as Lili. What were Dongdong's first few saplings?",
		"题目：学校运来36颗树苗，东东和丽丽两人争着去栽，东东先拿了一些，丽丽看到就从东东那抢了10颗，东东不服气抢了5颗，这时东东是丽丽的2倍，东东最初那几颗?"},
		{"Because the total number is 36, Xiaodong and Lili must be 36, and Xiaodong is twice as many as Lili. Therefore, now Xiaodong has 24 and Lili has 12",
		"因为总数是36颗，所以小东加丽丽就必须是36，且小东是丽丽的两倍，所以，现在小东24颗，丽丽12颗"},
		{"1. Calculate the number of Dongdong trees N1=the final number of Dongdong trees N2- the tree that Dongdong snatched N3+the tree that Lili snatched N4",
		"1.计算东东棵数N1 东东棵数N1=东东最终颗数N2-东东抢的棵树N3+丽丽抢的棵树N4"},
		//变量表
		{"ThefinalnumberofparticlesinDongdongisN2","东东最终颗数N2"},
		{"TreeN3snatchedbyDongdong","东东抢的棵树N3"},
		{"Lili'sTreeN4Robbed","丽丽抢的棵树N4"},
		{"NumberoftreesinDongdongN1","东东棵数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(东东最终颗数N2, 24);
	DefineLangVarInt(东东抢的棵树N3, 5);
	DefineLangVarInt(丽丽抢的棵树N4, 10);
	ColPrintf(PrintfCol::标题, Lang("P75 例6 分数巧算"));
	ColPrintf(PrintfCol::标题, Lang("题目：学校运来36颗树苗，东东和丽丽两人争着去栽，东东先拿了一些，丽丽看到就从东东那抢了10颗，东东不服气抢了5颗，这时东东是丽丽的2倍，东东最初那几颗?"));
	ColPrintf(PrintfCol::方法, Lang("因为总数是36颗，所以小东加丽丽就必须是36，且小东是丽丽的两倍，所以，现在小东24颗，丽丽12颗"));
	DefineLangVarInt(东东棵数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算东东棵数N1 东东棵数N1=东东最终颗数N2-东东抢的棵树N3+丽丽抢的棵树N4"));
	东东棵数N1 = 东东最终颗数N2 - 东东抢的棵树N3 + 丽丽抢的棵树N4;
	东东棵数N1.PrintProcessLog(4);
}
void P75()
{
	P75_1();
	ColPrintf(PrintfCol::方法, "");
	P75_2();
	ColPrintf(PrintfCol::方法, "");
	P75_3();
	ColPrintf(PrintfCol::方法, "");
	P75_4();
	ColPrintf(PrintfCol::方法, "");
	P75_5();
	ColPrintf(PrintfCol::方法, "");
	P75_6();
	ColPrintf(PrintfCol::方法, "");
}
void P75_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P75();
	Lang.SetCurLanguage(LanguageLib::English);
	P75();
	ColPrintf(PrintfCol::方法, "");
}