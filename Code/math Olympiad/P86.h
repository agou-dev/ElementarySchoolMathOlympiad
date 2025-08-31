#pragma once
void P86_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 Case 1 Profit and Loss Issue","P86 例一 盈亏问题"},
		{"Question: How many people and how many exercise books will Xiaoming distribute? Each person will receive 3 books, 4 books less, and 2 books more than 40 books?",
		"题目：小明发练习册，每人发3本，少4本，每人发2本多40本，一共有多少个人，多少本练习册?"},
		{"1. Calculate the difference between the profit and loss of publishing a book N1. The difference between the profit and loss of publishing a book N1=the number of books N2+the number of books N4",
		"1.计算发本书盈亏之差N1 发本书盈亏之差N1=少的本书N2+多的本书N4"},
		{"2. Calculate the difference between the books distributed by each person N2=three books distributed by each person N5- two books distributed by each person N6",
		"2.计算每人发的本书之差N2 每人发的本书之差N2=每人发三本N5-每人发两本N6"},
		{"3. Calculate the total number of people N7=the difference between the profit and loss of publishing the book N1/the difference between the books published per person N2",
		"3.计算一共的人数N7 一共的人数N7=发本书盈亏之差N1/每人发的本书之差N2"},
		{"4. Calculate the number of exercise books N8. The number of exercise books N8=(total number of people N7 * three books per person N5) - the few books N2",
		"4.计算练习册数量N8 练习册数量N8=(一共的人数N7*每人发三本N5)-少的本书N2"},
		//变量表
		{"TheFewBooksN2","少的本书N2"},
		{"ManyBooksN4","多的本书N4"},
		{"EachPersonWillReceiveThreeN5Books","每人发三本N5"},
		{"EachPersonEillReceiveTwoN6Books","每人发两本N6"},
		{"ProfitAndLossDifferenceN1ForPublishingThisBook","发本书盈亏之差N1"},
		{"TheDifferenceInBooksDistributedByEachPersonN2","每人发的本书之差N2"},
		{"ThetotalnumberofpeopleisN7","一共的人数N7"},
		{"NumberofexercisebooksN8","练习册数量N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(少的本书N2, 4);
	DefineLangVarInt(多的本书N4, 40);
	DefineLangVarInt(每人发三本N5, 3);
	DefineLangVarInt(每人发两本N6, 2);
	ColPrintf(PrintfCol::标题, Lang("P86 例一 盈亏问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：小明发练习册，每人发3本，少4本，每人发2本多40本，一共有多少个人，多少本练习册?"));
	DefineLangVarInt(发本书盈亏之差N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算发本书盈亏之差N1 发本书盈亏之差N1=少的本书N2+多的本书N4"));
	发本书盈亏之差N1 = 少的本书N2 + 多的本书N4;
	发本书盈亏之差N1.PrintProcessLog(1);
	DefineLangVarInt(每人发的本书之差N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每人发的本书之差N2 每人发的本书之差N2=每人发三本N5-每人发两本N6"));
	每人发的本书之差N2 = 每人发三本N5 - 每人发两本N6;
	每人发的本书之差N2.PrintProcessLog(2);
	DefineLangVarInt(一共的人数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共的人数N7 一共的人数N7=发本书盈亏之差N1/每人发的本书之差N2"));
	一共的人数N7 = 发本书盈亏之差N1 / 每人发的本书之差N2;
	一共的人数N7.PrintProcessLog(3);
	DefineLangVarInt(练习册数量N8, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算练习册数量N8 练习册数量N8=(一共的人数N7*每人发三本N5)-少的本书N2"));
	练习册数量N8 = (一共的人数N7 * 每人发三本N5) - 少的本书N2;
	练习册数量N8.PrintProcessLog(4);
}
void P86_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 case two two two loss problem","P86 例二 两亏问题"},
		{"Title: How many students are there in the class and how many exercise books are there? If each person has six books, there will be a shortage of 94 books. If each person has four books, there will be a shortage of 2 books",
		"题目：老师发练习本，如果每人六本，少94本，如果每人4本，少2本，班里有多少个学生，多少个练习本"},
		{"1. Calculate the difference between the profit and loss of publishing a book N1. The difference between the profit and loss of publishing a book N1=the book with six fewer books N2- the book with four fewer books N4",
		"1.计算发本书盈亏之差N1 发本书盈亏之差N1=六本少的本书N2-四本少的本书N4"},
		{"2. Calculate the difference between the books distributed by each person N2=six books distributed by each person N5- four books distributed by each person N6",
		"2.计算每人发的本书之差N2 每人发的本书之差N2=每人发六本N5-每人发四本N6"},
		{"3. Calculate the total number of people N7=the difference between the profit and loss of publishing the book N1/the difference between the books published per person N2",
		"3.计算一共的人数N7 一共的人数N7=发本书盈亏之差N1/每人发的本书之差N2"},
		{"4. Calculate the number of exercise books N8=(total number of people N7 * four books per person N6) - the book with four fewer books N4",
		"4.计算练习册数量N8 练习册数量N8=(一共的人数N7*每人发四本N6)-四本少的本书N4"},
		//变量表
		{"SixFewBooksN2","六本少的本书N2"},
		{"FourFewBooksN4","四本少的本书N4"},
		{"EachpersonwillreceivesixN5books","每人发六本N5"},
		{"EachpersonwillreceivefourN6books","每人发四本N6"},
		{"ProfitandlossdifferenceN1forpublishingthisbook","发本书盈亏之差N1"},
		{"ThedifferenceinbooksdistributedbyeachpersonN2","每人发的本书之差N2"},
		{"ThetotalnumberofpeopleisN7","一共的人数N7"},
		{"NumberofexercisebooksN8","练习册数量N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(六本少的本书N2, 94);
	DefineLangVarInt(四本少的本书N4, 2);
	DefineLangVarInt(每人发六本N5, 6);
	DefineLangVarInt(每人发四本N6, 4);
	ColPrintf(PrintfCol::标题, Lang("P86 例二 两亏问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：老师发练习本，如果每人六本，少94本，如果每人4本，少2本，班里有多少个学生，多少个练习本"));
	DefineLangVarInt(发本书盈亏之差N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算发本书盈亏之差N1 发本书盈亏之差N1=六本少的本书N2-四本少的本书N4"));
	发本书盈亏之差N1 = 六本少的本书N2 - 四本少的本书N4;
	发本书盈亏之差N1.PrintProcessLog(1);
	DefineLangVarInt(每人发的本书之差N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每人发的本书之差N2 每人发的本书之差N2=每人发六本N5-每人发四本N6"));
	每人发的本书之差N2 = 每人发六本N5 - 每人发四本N6;
	每人发的本书之差N2.PrintProcessLog(2);
	DefineLangVarInt(一共的人数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共的人数N7 一共的人数N7=发本书盈亏之差N1/每人发的本书之差N2"));
	一共的人数N7 = 发本书盈亏之差N1 / 每人发的本书之差N2;
	一共的人数N7.PrintProcessLog(3);
	DefineLangVarInt(练习册数量N8, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算练习册数量N8 练习册数量N8=(一共的人数N7*每人发四本N6)-四本少的本书N4"));
	练习册数量N8 = (一共的人数N7 * 每人发四本N6) - 四本少的本书N4;
	练习册数量N8.PrintProcessLog(4);
}
void P86_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 case of three two surplus problem","P86 例三 两盈问题"},
		{"Title: How many people are there and how many colored pens are there if each person sends 5 and 12 more, and if each person sends 8 and 3 more?",
		"题目：发彩笔，如果每人发5只多12支，如果每人发8支多出3支，一共有几个人，一共有几支彩笔?"},
		{"1. Calculate the difference between the profit and loss of the pens N1=the difference between the profit and loss of more than five pens N2- the difference between the profit and loss of more than eight pens N4",
		"1.计算发支笔盈亏之差N1 发支笔盈亏之差N1=五支多的支笔N2-八支多的支笔N4"},
		{"2. Calculate the difference in pens distributed by each person N2=8 pens distributed by each person N6-5 pens distributed by each person N5",
		"2.计算每人发的支笔之差N2 每人发的支笔之差N2=每人发八支N6-每人发五支N5"},
		{"3. Calculate the total number of people N7=the difference between the profit and loss of pens distributed N1/the difference between pens distributed per person N2",
		"3.计算一共的人数N7 一共的人数N7=发支笔盈亏之差N1/每人发的支笔之差N2"},
		{"4. Calculate the number of exercise books N8=(total number of people N7 * pens over eight N4) - Each person will receive eight N6 pens",
		"4.计算练习册数量N8 练习册数量N8=(一共的人数N7*八支多的支笔N4)-每人发八支N6"},
		//变量表
		{"MorethanfivepensN2","五支多的支笔N2"},
		{"MorethaneightpensN4","八支多的支笔N4"},
		{"EachpersonwillreceiveeightN6tubes","每人发八支N6"},
		{"EachpersonwillreceivefiveN5s","每人发五支N5"},
		{"DifferencebetweenprofitandlossofpenN1","发支笔盈亏之差N1"},
		{"ThedifferenceinpensdistributedbyeachpersonN2","每人发的支笔之差N2"},
		{"ThetotalnumberofpeopleisN7","一共的人数N7"},
		{"NumberofexercisebooksN8","练习册数量N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(五支多的支笔N2, 12);
	DefineLangVarInt(八支多的支笔N4, 3);
	DefineLangVarInt(每人发八支N6, 8);
	DefineLangVarInt(每人发五支N5, 5);
	ColPrintf(PrintfCol::标题, Lang("P86 例三 两盈问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：发彩笔，如果每人发5只多12支，如果每人发8支多出3支，一共有几个人，一共有几支彩笔?"));
	DefineLangVarInt(发支笔盈亏之差N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算发支笔盈亏之差N1 发支笔盈亏之差N1=五支多的支笔N2-八支多的支笔N4"));
	发支笔盈亏之差N1 = 五支多的支笔N2 - 八支多的支笔N4;
	发支笔盈亏之差N1.PrintProcessLog(1);
	DefineLangVarInt(每人发的支笔之差N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每人发的支笔之差N2 每人发的支笔之差N2=每人发八支N6-每人发五支N5"));
	每人发的支笔之差N2 = 每人发八支N6 - 每人发五支N5;
	每人发的支笔之差N2.PrintProcessLog(2);
	DefineLangVarInt(一共的人数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共的人数N7 一共的人数N7=发支笔盈亏之差N1/每人发的支笔之差N2"));
	一共的人数N7 = 发支笔盈亏之差N1 / 每人发的支笔之差N2;
	一共的人数N7.PrintProcessLog(3);
	DefineLangVarInt(练习册数量N8, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算练习册数量N8 练习册数量N8=(一共的人数N7*八支多的支笔N4)-每人发八支N6"));
	练习册数量N8 = (一共的人数N7 * 八支多的支笔N4) - 每人发八支N6;
	练习册数量N8.PrintProcessLog(4);
}
void P86_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 Case Four Profit and Loss Issues","P86 例四 盈亏问题"},
		{"Title: A classmate goes on a spring outing, and if there are 60 people in each car, 15 people will not board; If there are 65 people and an extra car, how many students are there in total?",
		"题目：同学去春游，如果每车坐60人，有15人没上车；若是65人，多出一辆车，一共有多少学生?"},
		{"1. Calculate the difference between the profits and losses of the ride N1=65 people per ride N3- number of people who did not board N2",
		"1.计算坐车盈亏之差N1 坐车盈亏之差N1=每辆车65人N3-没上车人数N2"},
		{"2. Calculate the difference between vehicles N2=65 people per vehicle N3-60 people per vehicle N3",
		"2.计算坐车之差N2 坐车之差N2=每辆车65人N3-每辆车60人N3"},
		{"3. Calculate the total number of people N7. The total number of people N7 is equal to the difference in profits and losses of the ride N1 divided by the difference in ride N2",
		"3.计算一共的人数N7 一共的人数N7 = (一共的人数N7 * 每辆车65人N3) - 每辆车65人N3"},
		{"4. Calculate the number of vehicles N8=(total number of people N7 * 65 people per vehicle N3) -65 people per vehicle N3",
		"4.计算车数量N8 车数量N8 = 坐车盈亏之差N1 / 坐车之差N2"},
		//变量表
		{"65peoplepervehicleN3","每辆车65人N3"},
		{"65peoplepervehicleN3","每辆车65人N3"},
		{"NumberofpeoplewithoutboardingN2","没上车人数N2"},
		{"60peoplepervehicleN3","每辆车60人N3"},
		{"ProfitandlossdifferenceofrideN1","坐车盈亏之差N1"},
		{"DifferencebycarN2","坐车之差N2"},
		{"ThetotalnumberofpeopleisN7","一共的人数N7"},
		{"NumberofcarsN8","车数量N8"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(每辆车65人N3, 65);
	DefineLangVarInt(每辆车60人N3, 60);
	DefineLangVarInt(没上车人数N2, 15);

	ColPrintf(PrintfCol::标题, Lang("P86 例四 盈亏问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：同学去春游，如果每车坐60人，有15人没上车；若是65人，多出一辆车，一共有多少学生?"));
	DefineLangVarInt(坐车盈亏之差N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算坐车盈亏之差N1 坐车盈亏之差N1=每辆车65人N3-没上车人数N2"));
	坐车盈亏之差N1 = 每辆车65人N3 - 没上车人数N2;
	坐车盈亏之差N1.PrintProcessLog(1);
	DefineLangVarInt(坐车之差N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算坐车之差N2 坐车之差N2=每辆车65人N3-每辆车60人N3"));
	坐车之差N2 = 每辆车65人N3 - 每辆车60人N3;
	坐车之差N2.PrintProcessLog(2);
	DefineLangVarInt(一共的人数N7, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共的人数N7 一共的人数N7 = (一共的人数N7 * 每辆车65人N3) - 每辆车65人N3"));
	一共的人数N7 = (一共的人数N7 * 每辆车65人N3) - 每辆车65人N3;
	一共的人数N7.PrintProcessLog(3);
	DefineLangVarInt(车数量N8, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算车数量N8 车数量N8 = 坐车盈亏之差N1 / 坐车之差N2"));
	车数量N8 = 坐车盈亏之差N1 / 坐车之差N2;
	车数量N8.PrintProcessLog(4);
}
void P86_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 case of the five two surplus problem","P86 例五 两盈问题"},
		{"Title: According to school regulations, students arrive at school at 8am and Xiaofeng goes to school at a speed of 60 meters per minute. They arrive 10 minutes early at a speed of 50 meters per minute and arrive 8 minutes early. How far is the school and when did they leave home?",
		"题目：学校规定上午8点到校，小峰去上学，每分钟60米，提前10分钟到校，每分钟50米，提前8分钟到校，离学校多远，什么时候离开家的?"},
		{"1. Calculate the number of meters walked 10 minutes ahead of schedule N1=10 minutes ahead of schedule N1 * 60 meters per minute V1",
		"1.计算提前10分钟多走米数N1 提前10分钟多走米数N1=提前10分钟N1*每分钟60米V1"},
		{"2. Calculate the number of meters walked 8 minutes in advance N1=8 minutes in advance N2 * 50 meters per minute V2",
		"2.计算提前8分钟多走米数N1 提前8分钟多走米数N1=提前8分钟N2*每分钟50米V2"},
		{"3. Calculate the early departure time T1. The early departure time T1 is calculated as follows: (extra distance traveled 10 minutes in advance N1- extra distance traveled 8 minutes in advance N1)/(60 meters per minute V1-50 meters per minute V2)",
		"3.计算提前离家时间T1 提前离家时间T1=(提前10分钟多走米数N1-提前8分钟多走米数N1)/(每分钟60米V1-每分钟50米V2)"},
		{"4. Calculate the distance from the school S1=(early departure time T1-10 minutes early N1) * 60 meters per minute V1",
		"4.计算离学校的距离S1 离学校的距离S1=(提前离家时间T1-提前10分钟N1)*每分钟60米V1"},
		//变量表
		{"10minutesinadvanceN1","提前10分钟N1"},
		{"60metersperminuteV1","每分钟60米V1"},
		{"8minutesinadvanceN2","提前8分钟N2"},
		{"50metersperminuteV2","每分钟50米V2"},
		{"Walkmorethan10minutesinadvanceforN1meters","提前10分钟多走米数N1"},
		{"Walkmorethan8minutesinadvanceforN1meters","提前8分钟多走米数N1"},
		{"EarlydeparturetimeT1","提前离家时间T1"},
		{"DistancefromschoolS1","离学校的距离S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(提前10分钟N1, 10);
	DefineLangVarInt(每分钟60米V1, 60);
	DefineLangVarInt(提前8分钟N2, 8);
	DefineLangVarInt(每分钟50米V2, 50);
	ColPrintf(PrintfCol::标题, Lang("P86 例五 两盈问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：学校规定上午8点到校，小峰去上学，每分钟60米，提前10分钟到校，每分钟50米，提前8分钟到校，离学校多远，什么时候离开家的?"));
	DefineLangVarInt(提前10分钟多走米数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算提前10分钟多走米数N1 提前10分钟多走米数N1=提前10分钟N1*每分钟60米V1"));
	提前10分钟多走米数N1 = 提前10分钟N1 * 每分钟60米V1;
	提前10分钟多走米数N1.PrintProcessLog(1);
	DefineLangVarInt(提前8分钟多走米数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算提前8分钟多走米数N1 提前8分钟多走米数N1=提前8分钟N2*每分钟50米V2"));
	提前8分钟多走米数N1 = 提前8分钟N2 * 每分钟50米V2;
	提前8分钟多走米数N1.PrintProcessLog(2);
	DefineLangVarInt(提前离家时间T1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算提前离家时间T1 提前离家时间T1=(提前10分钟多走米数N1-提前8分钟多走米数N1)/(每分钟60米V1-每分钟50米V2)"));
	提前离家时间T1 = (提前10分钟多走米数N1 - 提前8分钟多走米数N1) / (每分钟60米V1 - 每分钟50米V2);
	提前离家时间T1.PrintProcessLog(3);
	DefineLangVarInt(离学校的距离S1, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算离学校的距离S1 离学校的距离S1=(提前离家时间T1-提前10分钟N1)*每分钟60米V1"));
	离学校的距离S1 = (提前离家时间T1 - 提前10分钟N1) * 每分钟60米V1;
	离学校的距离S1.PrintProcessLog(4);
}
void P86_6()
{
	LanguageLib::LanguageTableT Language = {
		{"P86 case six profit and loss issue","P86 例六 盈亏问题"},
		{"Title: Fangfang buys oranges for her family to eat. If two people eat 4 oranges and the rest eat 2 oranges, there will be an additional 4 oranges. If one person eats 6 oranges and the rest eat 4 oranges, there will be a shortage of 12 oranges. How many oranges did Fangfang buy and how many people are there?",
		"题目：芳芳买橘子给家人吃，如果有两个人吃4个，其余每人吃2个，多出4个，如果一人吃6个，其余人吃4个，则少12个，芳芳买了多少个橘子，有多少个人?"},
		{"1. Calculate the excess quantity N1 for each person to eat 2, which is equal to the excess quantity N2 plus the remaining 2, which is equal to N3",
		"1.计算每人吃2个多出数量N1 每人吃2个多出数量N1=多出数量N2+其余每人吃2个N3"},
		{"2. Calculate the excess quantity N2 for each person eating 4. The excess quantity N2 for each person eating 4 is equal to the excess quantity N3 minus (the excess quantity N3 divided by each person eating 6)",
		"2.计算每人吃4个多出数量N2 每人吃4个多出数量N2=少的数量N3-(少的数量N3/每人吃6个)"},
		{"3. Calculate the total number of people N3=(each person eats 2 extra pieces N1+each person eats 4 extra pieces N2)/(the rest of each person eats 4 pieces N3- the rest of each person eats 2 pieces N3)",
		"3.计算一共的人数N3 一共的人数N3=(每人吃2个多出数量N1+每人吃4个多出数量N2)/(其余每人吃4个N3-其余每人吃2个N3)"},
		{"4. Calculate how many oranges were bought N4=total number of people N3 * each other eating 2 N3+each person eating 2+extra quantity N1",
		"4.计算买了多少橘子N4 买了多少橘子N4=一共的人数N3*其余每人吃2个N3+每人吃2个多出数量N1"},
		//变量表
		{"ExcessquantityN2","多出数量N2"},
		{"Everyoneelsewilleat2N3","其余每人吃2个N3"},
		{"LessquantityN3","少的数量N3"},
		{"Eachpersoneats6","每人吃6个"},
		{"Everyoneelsewilleat4N3","其余每人吃4个N3"},
		{"Eachpersoneats2morethanthequantityN1","每人吃2个多出数量N1"},
		{"Eachpersoneats4morethanthequantityN2","每人吃4个多出数量N2"},
		{"ThetotalnumberofpeopleN3","一共的人数N3"},
		{"HowmanyorangesdidyoubuyN4","买了多少橘子N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(多出数量N2, 4);
	DefineLangVarInt(其余每人吃2个N3, 2);
	DefineLangVarInt(少的数量N3, 12);
	DefineLangVarInt(每人吃6个, 6);
	DefineLangVarInt(其余每人吃4个N3, 4);
	ColPrintf(PrintfCol::标题, Lang("P86 例六 盈亏问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：芳芳买橘子给家人吃，如果有两个人吃4个，其余每人吃2个，多出4个，如果一人吃6个，其余人吃4个，则少12个，芳芳买了多少个橘子，有多少个人?"));
	DefineLangVarInt(每人吃2个多出数量N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算每人吃2个多出数量N1 每人吃2个多出数量N1=多出数量N2+其余每人吃2个N3"));
	每人吃2个多出数量N1 = 多出数量N2 + 其余每人吃2个N3;
	每人吃2个多出数量N1.PrintProcessLog(1);
	DefineLangVarInt(每人吃4个多出数量N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算每人吃4个多出数量N2 每人吃4个多出数量N2=少的数量N3-(少的数量N3/每人吃6个)"));
	每人吃4个多出数量N2 = 少的数量N3 - (少的数量N3 / 每人吃6个);
	每人吃4个多出数量N2.PrintProcessLog(2);
	DefineLangVarInt(一共的人数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算一共的人数N3 一共的人数N3=(每人吃2个多出数量N1+每人吃4个多出数量N2)/(其余每人吃4个N3-其余每人吃2个N3)"));
	一共的人数N3 = (每人吃2个多出数量N1 + 每人吃4个多出数量N2) / (其余每人吃4个N3 - 其余每人吃2个N3);
	一共的人数N3.PrintProcessLog(3);
	DefineLangVarInt(买了多少橘子N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算买了多少橘子N4 买了多少橘子N4=一共的人数N3*其余每人吃2个N3+每人吃2个多出数量N1"));
	买了多少橘子N4 = 一共的人数N3 * 其余每人吃2个N3 + 每人吃2个多出数量N1;
	买了多少橘子N4.PrintProcessLog(4);
}
void P86()
{
	//P70_formula();
	ColPrintf(PrintfCol::方法, "");
	P86_1();
	ColPrintf(PrintfCol::方法, "");
	P86_2();
	ColPrintf(PrintfCol::方法, "");
	P86_3();
	ColPrintf(PrintfCol::方法, "");
	P86_4();
	ColPrintf(PrintfCol::方法, "");
	P86_5();
	ColPrintf(PrintfCol::方法, "");
	P86_6();
	ColPrintf(PrintfCol::方法, "");
	//P70_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_2();
	ColPrintf(PrintfCol::方法, "");
	//P69_3();
	ColPrintf(PrintfCol::方法, "");
}
void P86_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P86();
	Lang.SetCurLanguage(LanguageLib::English);
	P86();
	ColPrintf(PrintfCol::方法, "");

}