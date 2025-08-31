#pragma once
void P83_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P83 Case 1 Age Issue","P83 例1 年龄问题"},
		{"Title: Grandpa Zhang has three grandchildren, the eldest grandson is 22 years old, the second grandson is 20 years old, and the youngest grandson is 15 years old. 25 years later, the three of them will be 60 years younger than Grandpa Zhang's age, which is twice his age. How old is Grandpa Zhang this year?",
		"题目：张爷爷有3个孙子，大孙子22岁，二孙子20岁，小孙子15岁，25年后，三人的年龄和比张爷爷年龄的2倍还少60岁，他今年多少岁?"},
		{"1. Calculate the age of this year's grandson and N1. The age of this year's grandson and N1=the age of the eldest grandson N2+the age of the second grandson N3+the age of the youngest grandson N4",
		"1.计算今年孙子岁数和N1 今年孙子岁数和N1=大孙子岁数N2+二孙子岁数N3+小孙子岁数N4"},
		{"2. Calculate the age of the grandson at that time and N2. The age of the grandson at that time and N2=the age of the grandson this year and N1+the number of years that have passed at that time N6 * the number of people N5",
		"2.计算那时孙子岁数和N2 那时孙子岁数和N2=今年孙子岁数和N1+那时过去的年数N6*人数N5"},
		{"3. Calculate the grandfather's age at that time and N3. The grandfather's age at that time and N3=(the grandson's age at that time and N2+the excess age N5)/For the grandfather's age multiple N4",
		"3.计算那时爷爷岁数和N3 那时爷爷岁数和N3=(那时孙子岁数和N2+多余的岁数N5)/对于爷爷岁数倍数N4"},
		{"4. Calculate the age of my grandfather this year and N4. The age of my grandfather this year and N4=the age of my grandfather at that time and N3- the number of years that have passed at that time N6",
		"4.计算今年爷爷岁数和N4 今年爷爷岁数和N4=那时爷爷岁数和N3-那时过去的年数N6"},
		//变量表
		{"Grandson'sageN2","大孙子岁数N2"},
		{"Secondgrandson'sageN3","二孙子岁数N3"},
		{"Littlegrandson'sageN4","小孙子岁数N4"},
		{"Atthattime,thenumberofyearspassedN6","那时过去的年数N6"},
		{"NumberofpeopleN5","人数N5"},
		{"ForGrandpa'sagemultipleN4","对于爷爷岁数倍数N4"},
		{"ExcessageN5","多余的岁数N5"},
		{"Mygrandson'sageandN1thisyear","今年孙子岁数和N1"},
		{"Atthattime,mygrandson'sageandN2","那时孙子岁数和N2"},
		{"Atthattime,Grandpa'sageandN3","那时爷爷岁数和N3"},
		{"Grandpa'sageandN4thisyear","今年爷爷岁数和N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(大孙子岁数N2, 22);
	DefineLangVarInt(二孙子岁数N3, 20);
	DefineLangVarInt(小孙子岁数N4, 15);
	DefineLangVarInt(那时过去的年数N6, 25);
	DefineLangVarInt(人数N5, 3);
	DefineLangVarInt(对于爷爷岁数倍数N4, 2);
	DefineLangVarInt(多余的岁数N5, 60);
	ColPrintf(PrintfCol::标题, Lang("P83 例1 年龄问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：张爷爷有3个孙子，大孙子22岁，二孙子20岁，小孙子15岁，25年后，三人的年龄和比张爷爷年龄的2倍还少60岁，他今年多少岁?"));
	DefineLangVarInt(今年孙子岁数和N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算今年孙子岁数和N1 今年孙子岁数和N1=大孙子岁数N2+二孙子岁数N3+小孙子岁数N4"));
	今年孙子岁数和N1 = 大孙子岁数N2 + 二孙子岁数N3 + 小孙子岁数N4;
	今年孙子岁数和N1.PrintProcessLog(1);
	DefineLangVarInt(那时孙子岁数和N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算那时孙子岁数和N2 那时孙子岁数和N2=今年孙子岁数和N1+那时过去的年数N6*人数N5"));
	那时孙子岁数和N2 = 今年孙子岁数和N1 + 那时过去的年数N6 * 人数N5;
	那时孙子岁数和N2.PrintProcessLog(2);
	DefineLangVarInt(那时爷爷岁数和N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算那时爷爷岁数和N3 那时爷爷岁数和N3=(那时孙子岁数和N2+多余的岁数N5)/对于爷爷岁数倍数N4"));
	那时爷爷岁数和N3 = (那时孙子岁数和N2 + 多余的岁数N5) / 对于爷爷岁数倍数N4;
	那时爷爷岁数和N3.PrintProcessLog(3);
	DefineLangVarInt(今年爷爷岁数和N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算今年爷爷岁数和N4 今年爷爷岁数和N4=那时爷爷岁数和N3-那时过去的年数N6"));
	今年爷爷岁数和N4 = 那时爷爷岁数和N3 - 那时过去的年数N6;
	今年爷爷岁数和N4.PrintProcessLog(4);
}
void P83_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P83 case 2 age issue","P83 例2 年龄问题"},
		{"Title: When a student asks a teacher how old they are, the teacher says: When I was your age, you were only 3 years old. When you grow up to my age, I will be 39 years old. What are the ages of the teacher and the student",
		"题目：学生问老师多少岁，老师说：我像你这么大时，你才3岁，当你长到我这个年龄，我当时就39了，老师多少岁，学生多少岁"},
		{"1. Calculate the maximum age difference N1 between students and teachers. The maximum age difference N1 between students and teachers is equal to the maximum age N2 stated by the teacher minus the minimum age N3 of the students",
		"1.计算学生与老师最大岁数差N1 学生与老师最大岁数差N1=老师说的最大岁数N2-学生的最小岁数N3"},
		{"2. Calculate the age of one sample N2, which is equal to the maximum age difference between the student and the teacher N1 divided by the maximum number of samples N3",
		"2.计算一份的岁数N2 一份的岁数N2=学生与老师最大岁数差N1/学生与老师最大岁数份数N3"},
		{"3. Calculate student age N3. Student age N3=student's minimum age N3+one's age N2",
		"3.计算学生岁数N3 学生岁数N3=学生的最小岁数N3+一份的岁数N2"},
		{"4. Calculate the age of the teacher N4, which is equal to the age of the student N3 plus the age of the student N2",
		"4.计算老师岁数N4 老师岁数N4=学生岁数N3+一份的岁数N2"},
		//变量表
		{"ThemaximumagementionedbytheteacherisN2","老师说的最大岁数N2"},
		{"MinimumageofstudentN3","学生的最小岁数N3"},
		{"MaximumageofstudentsandteachersN3","学生与老师最大岁数份数N3"},
		{"ThemaximumagedifferencebetweenstudentsandteachersisN1","学生与老师最大岁数差N1"},
		{"One'sageN2","一份的岁数N2"},
		{"StudentageN3","学生岁数N3"},
		{"Teacher'sageN4","老师岁数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(老师说的最大岁数N2, 39);
	DefineLangVarInt(学生的最小岁数N3, 3);
	DefineLangVarInt(学生与老师最大岁数份数N3, 3);
	ColPrintf(PrintfCol::标题, Lang("P83 例2 年龄问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：学生问老师多少岁，老师说：我像你这么大时，你才3岁，当你长到我这个年龄，我当时就39了，老师多少岁，学生多少岁"));	
	const char* pPic =
		"0岁  学生3岁  现在学生岁数    现在老师岁数    老师39岁\n"
		"|----|--------------|--------------|--------------|\n"
		;
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(学生与老师最大岁数差N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算学生与老师最大岁数差N1 学生与老师最大岁数差N1=老师说的最大岁数N2-学生的最小岁数N3"));
	学生与老师最大岁数差N1 = 老师说的最大岁数N2 - 学生的最小岁数N3;
	学生与老师最大岁数差N1.PrintProcessLog(1);
	DefineLangVarInt(一份的岁数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算一份的岁数N2 一份的岁数N2=学生与老师最大岁数差N1/学生与老师最大岁数份数N3"));
	一份的岁数N2 = 学生与老师最大岁数差N1 / 学生与老师最大岁数份数N3;
	一份的岁数N2.PrintProcessLog(2);
	DefineLangVarInt(学生岁数N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算学生岁数N3 学生岁数N3=学生的最小岁数N3+一份的岁数N2"));
	学生岁数N3 = 学生的最小岁数N3 + 一份的岁数N2;
	学生岁数N3.PrintProcessLog(3);
	DefineLangVarInt(老师岁数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算老师岁数N4 老师岁数N4=学生岁数N3+一份的岁数N2"));

	老师岁数N4 = 学生岁数N3 + 一份的岁数N2;
	老师岁数N4.PrintProcessLog(4);
}
void P83_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P83 case 3 age issue","P83 例3 年龄问题"},
		{"Title: A teenage boy writes his age after his father's age. His father's age is in his forties, forming a four digit number. Subtracting the age difference between father and son from this four digit number yields 4289. What are their ages?",
		"题目：一个十几岁的男孩，把自己的岁数写在爸爸年龄的后面，爸爸的年龄有四十几，组成一个四位数，再用这个四位数减去父子两的年龄差得到4289，他们的年龄是多少?"},
		{"1. Because the father's age is in his forties minus a dozen, the maximum is only 30, and because 4289+30 is at most 4319, the minimum is 4289+11=4300, the father's age is determined at the beginning, so the father's age is 43 years old",
		"1.因为父亲的年龄是四十几减去十几，最大也不过30，又因为4289+30最多也就4319，最少是4289+11=4300，爸爸的年龄在最前面以确定，所以爸爸的年龄是43岁"},
		{"2. Assuming that a few out of ten are A",
		"2.假设十几的几为A"},
		{"3. Split the four digit structure into four digits: 4000+300+10+A",
		"3.把四位数分拆结构 这个四位数=4000+300+10+A"},
		{"4. Father son two-year-old difference 43-10-A=33-A",
		"4.父子两岁数差 43-10-A=33-A"},
		{"5. List the age equation S1 4000+300+10+A - (33-A=)=4310+A - (33-A)=4289",
		"5.列出岁数方程S1 4000+300+10+A-(33-A=)=4310+A-(33-A)=4289"},
		{"6. Simplify S1 to obtain S2 4310+A-33+A=4289",
		"6.化简S1得到S2 4310+A-33+A=4289"},
		{"7. Simplify S2 to obtain S3 4310+2A-33=4289",
		"7.化简S2得到S3 4310+2A-33=4289"},
		{"8. Simplify S3 to obtain S4 4277+2A=4289",
		"8.化简S3得到S4 4277+2A=4289"},
		{"9. Simplify S4 to obtain S5 2A=4289-4277=12",
		"9.化简S4得到S5 2A=4289-4277=12"},
		{"10. Simplify S5 to obtain S6 A=6",
		"10.化简S5得到S6 A=6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P83 例3 年龄问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一个十几岁的男孩，把自己的岁数写在爸爸年龄的后面，爸爸的年龄有四十几，组成一个四位数，再用这个四位数减去父子两的年龄差得到4289，他们的年龄是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.因为父亲的年龄是四十几减去十几，最大也不过30，又因为4289+30最多也就4319，最少是4289+11=4300，爸爸的年龄在最前面以确定，所以爸爸的年龄是43岁"));
	ColPrintf(PrintfCol::方法, Lang("2.假设十几的几为A"));
	ColPrintf(PrintfCol::方法, Lang("3.把四位数分拆结构 这个四位数=4000+300+10+A"));
	ColPrintf(PrintfCol::方法, Lang("4.父子两岁数差 43-10-A=33-A"));
	ColPrintf(PrintfCol::方法, Lang("5.列出岁数方程S1 4000+300+10+A-(33-A=)=4310+A-(33-A)=4289"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S1得到S2 4310+A-33+A=4289"));
	ColPrintf(PrintfCol::方法, Lang("7.化简S2得到S3 4310+2A-33=4289"));
	ColPrintf(PrintfCol::方法, Lang("8.化简S3得到S4 4277+2A=4289"));
	ColPrintf(PrintfCol::方法, Lang("9.化简S4得到S5 2A=4289-4277=12"));
	ColPrintf(PrintfCol::方法, Lang("10.化简S5得到S6 A=6"));
}
void P83_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P83 case 4 age issue","P83 例4 年龄问题"},
		{"Title: The total age of Xiaoming's family of four is 179 years old. His grandfather is 28 years older than his father and his mother is 27 years older than Xiaoming. His grandfather's age is the sum of Xiaoming's and his mother's ages. What are the ages of the four members?",
		"题目：小明一家四口年龄总和是179岁，爷爷比爸爸大28岁，妈妈比小明大27岁，爷爷的年龄是小明和妈妈岁数之和，四口人的年龄分别是多少?"},
		{"1. Calculate the total age without relationship N1=total age N2+age older than dad N3- age older than Xiaoming N4- age older than Xiaoming N4- age older than Xiaoming N4",
		"1.计算不加关系总岁数N1 不加关系总岁数N1=年龄总和N2+比爸爸大的岁数N3-比小明大的岁数N4-比小明大的岁数N4-比小明大的岁数N4"},
		{"2. Calculate Xiaoming's age N4. Xiaoming's age N4=total age without relationship N1/number N7+excess number N8",
		"2.计算小明年龄N4 小明年龄N4=不加关系总岁数N1/(人数N7+多余的份数N8)"},
		{"3. Calculate the mother's age N5=Xiaoming's age N4+the age older than Xiaoming N4",
		"3.计算妈妈年龄N5 妈妈年龄N5=小明年龄N4+比小明大的岁数N4"},
		{"4. Calculate Grandpa's age N6 Grandpa's age N6=Xiaoming's age N4+Mom's age N5",
		"4.计算爷爷的年龄N6 爷爷的年龄N6=小明年龄N4+妈妈年龄N5"},
		{"5. Calculate dad's age N7, dad's age N7=grandpa's age N6- older than dad N3",
		"5.计算爸爸的年龄N7 爸爸的年龄N7=爷爷的年龄N6-比爸爸大的岁数N3"},
		//变量表
		{"TotalageN2","年龄总和N2"},
		{"OlderthanDadN3","比爸爸大的岁数N3"},
		{"OlderthanXiaomingN4","比小明大的岁数N4"},
		{"NumberofpeopleN7","人数N7"},
		{"ExcesscopiesN8","多余的份数N8"},
		{"TotalagewithoutrelationshipN1","不加关系总岁数N1"},
		{"Xiaoming,ageN4","小明年龄N4"},
		{"Mother'sageN5","妈妈年龄N5"},
		{"Grandpa'sageN6","爷爷的年龄N6"},
		{"Dad'sageisN7","爸爸的年龄N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(年龄总和N2, 179);
	DefineLangVarInt(比爸爸大的岁数N3, 28);
	DefineLangVarInt(比小明大的岁数N4, 27);
	DefineLangVarInt(人数N7, 4);
	DefineLangVarInt(多余的份数N8, 2);
	ColPrintf(PrintfCol::标题, Lang("P83 例4 年龄问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：小明一家四口年龄总和是179岁，爷爷比爸爸大28岁，妈妈比小明大27岁，爷爷的年龄是小明和妈妈岁数之和，四口人的年龄分别是多少?"));
	const char* pPic =
		"小明：|---------以小明年龄为一份-----------|\n"
		"妈妈：|---------以小明年龄为一份-----------|------27岁------|\n"
		"爷爷：|---------以小明年龄为一份-----------|------27岁------|--------27岁----|\n"
		"爸爸：|---------以小明年龄为一份-----------|-------------|--------28岁-------|\n"
		;
	ColPrintf(PrintfCol::标题, pPic);
	DefineLangVarInt(不加关系总岁数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算不加关系总岁数N1 不加关系总岁数N1=年龄总和N2+比爸爸大的岁数N3-比小明大的岁数N4-比小明大的岁数N4-比小明大的岁数N4"));
	不加关系总岁数N1 = 年龄总和N2 + 比爸爸大的岁数N3 - 比小明大的岁数N4 - 比小明大的岁数N4 - 比小明大的岁数N4;
	不加关系总岁数N1.PrintProcessLog(1);
	DefineLangVarInt(小明年龄N4, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算小明年龄N4 小明年龄N4=不加关系总岁数N1/(人数N7+多余的份数N8)"));
	小明年龄N4 = 不加关系总岁数N1 / (人数N7 + 多余的份数N8);
	小明年龄N4.PrintProcessLog(2);
	DefineLangVarInt(妈妈年龄N5, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算妈妈年龄N5 妈妈年龄N5=小明年龄N4+比小明大的岁数N4"));
	妈妈年龄N5 = 小明年龄N4 + 比小明大的岁数N4;
	妈妈年龄N5.PrintProcessLog(3);
	DefineLangVarInt(爷爷的年龄N6, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算爷爷的年龄N6 爷爷的年龄N6=小明年龄N4+妈妈年龄N5"));
	爷爷的年龄N6 = 小明年龄N4 + 妈妈年龄N5;
	爷爷的年龄N6.PrintProcessLog(4);
	DefineLangVarInt(爸爸的年龄N7, 0);
	ColPrintf(PrintfCol::方法, Lang("5.计算爸爸的年龄N7 爸爸的年龄N7=爷爷的年龄N6-比爸爸大的岁数N3"));
	爸爸的年龄N7 = 爷爷的年龄N6 - 比爸爸大的岁数N3;
	爸爸的年龄N7.PrintProcessLog(5);
}
void P83()
{
	P83_1();
	ColPrintf(PrintfCol::方法, "");
	P83_2();
	ColPrintf(PrintfCol::方法, "");
	P83_3();
	ColPrintf(PrintfCol::方法, "");
	P83_4();
	ColPrintf(PrintfCol::方法, "");
	//P82_3();
	ColPrintf(PrintfCol::方法, "");
	//P82_4();
	ColPrintf(PrintfCol::方法, "");
}
void P83_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P83();
	Lang.SetCurLanguage(LanguageLib::English);
	P83();
	ColPrintf(PrintfCol::方法, "");

}