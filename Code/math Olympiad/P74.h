#pragma once
void P74_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P74 Example 1 Score Problem","P74 例一 分数问题"},
		{"Title: Given that School A has 40% of its students, School A has 30% of its students who are female, School B has 42% of its students who are male, and what percentage of its students are female?",
		"题目：已知甲校是乙校学生的40%，甲校女生是甲校学生的30%，乙校男生是乙校学生数的42%，两校女生是两校学生的百分之多少?"},
		{"1. Since School A has 40% of the students from School B, we use the number of students from School B as a unit, which is 100, while School A has 40. The total number of students from both schools is 140",
		"1.因为甲校是乙校学生的40%，所以我们以乙校学生数为单位一，也就是100份，甲校则为40份，两者总共是140份"},
		{"2. Female students from school A make up 30% of the total number of students, while female students from school A make up 40% of the total number of students. After selecting 30% from the top 40, the total number of students is 40 * 30%=12. Similarly, male students from school B make up 42% of the total number of students. If male students make up 42% of the total number of students, female students from school B make up 58% of the total number of students",
		"2.甲校女生是甲校学生的30%，甲校学生是%40，在40份离再选出30%，就是40*30%=12份，同理乙校男生就是100*42%=42，如果男生是42份，乙校女生就是100-42=58份"},
		{"After calculating the score, because the unit one is always the number of students from two schools, it is 58+12/140, which is 70/140. When converted into a percentage, it is 50%",
		"3.算出分数后，因为单位一始终是两校学生数，所以就是58+12/140，就是70/140，化为百分数是50%"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P74 例一 分数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：已知甲校是乙校学生的40%，甲校女生是甲校学生的30%，乙校男生是乙校学生数的42%，两校女生是两校学生的百分之多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.因为甲校是乙校学生的40%，所以我们以乙校学生数为单位一，也就是100份，甲校则为40份，两者总共是140份"));
	ColPrintf(PrintfCol::方法, Lang("2.甲校女生是甲校学生的30%，甲校学生是%40，在40份离再选出30%，就是40*30%=12份，同理乙校男生就是100*42%=42，如果男生是42份，乙校女生就是100-42=58份"));
	ColPrintf(PrintfCol::方法, Lang("3.算出分数后，因为单位一始终是两校学生数，所以就是58+12/140，就是70/140，化为百分数是50%"));
}
void P74_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P74 Example 2 Score Problem","P74 例二 分数问题"},
		{"Title: In the first semester of the sixth grade at Guangming Primary School, boys accounted for 55% of the total, but in the next semester, 3 boys transferred and 3 girls came. At this time, girls accounted for 48% of the total. How many girls were there at this time",
		"题目：光明小学六年级上学期男生总占比55%，下一学期男生转走了3人，女生来了3人，这时女生总站比48%，这时女生多少人"},
		{"1. Because three boys transferred and three girls came, the proportion of boys should be 1-48%=52%, compared to 55% -52%=3%. Three boys transferred, which is exactly 3%, so the ratio between them is 3:3",
		"1.因为男生转走了3人，女生来了3人，这时男生占比应该是1-48%=52%，相比之下55%-52%=3%，男生转走了三人，这三人正好是3%，所以它们之间的比率是3:3"},
		{"2. The ratio of 3:3 is 1:1, which is equivalent to 1% being 1 person. Therefore, there are 48 * 1=48 girls and 52 * 1=52 boys, making a total of 48+52=100 girls",
		"2.约分，3:3约掉后就是1：1的比率，就相当于1%就是1个人，所以女生有48*1=48人，还可知男生现在有52*1=52人，一共有48+52=100人"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P74 例二 分数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：光明小学六年级上学期男生总占比55%，下一学期男生转走了3人，女生来了3人，这时女生总站比48%，这时女生多少人"));
	ColPrintf(PrintfCol::方法, Lang("1.因为男生转走了3人，女生来了3人，这时男生占比应该是1-48%=52%，相比之下55%-52%=3%，男生转走了三人，这三人正好是3%，所以它们之间的比率是3:3"));
	ColPrintf(PrintfCol::方法, Lang("2.约分，3:3约掉后就是1：1的比率，就相当于1%就是1个人，所以女生有48*1=48人，还可知男生现在有52*1=52人，一共有48+52=100人"));
}
void P74_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P74 cases of three score problem individuals","P74 例三 分数问题"},
		{"Title: The school gate opens at 6:00 in the morning and closes at 6:40 in the evening. In the afternoon, a classmate came to ask for the time, and the teacher told him: 1/3 of the time from the opening of the gate to now, plus 1/4 of the time from now to the closing of the gate, is the current time. What is the current time?",
		"题目：学校早晨6：00开校门，晚上6：40关校门，下午有一个同学来问时间，老师告诉他：从开校门的时间到现在的时间的1/3，加上现在的时间到关校门的时间的1/4就是现在时间，问现在什么时间?"},
		{"Assuming that the time from 12 o'clock to now is x hours",
		"设12点到现在是x小时"},
		{"1. List the formula S1 (6+x) * 1/3+((6+2/3) - x) * 1/4=x",
		"1.列出式子S1 (6+x)*1/3+((6+2/3)-x)*1/4=x"},
		{"2. Simplify S1 to obtain S2 (6+x)/3+((6+2/3) - x)/4=x",
		"2.化简S1得到S2 (6+x)/3+((6+2/3)-x)/4=x"},
		{"3. Dividing S2 yields S3 12 * (6+x)/3+12 * ((6+2/3) - x)/4=12x",
		"3.通分S2得到S3 12*(6+x)/3+12*((6+2/3)-x)/4=12x"},
		{"4. Simplify S3 to obtain S4 4 * (6+x)+3 * ((6+2/3) - x)=12x",
		"4.化简S3得到S4 4*(6+x)+3*((6+2/3)-x)=12x"},
		{"5. Simplify S4 to obtain S5 24+4x+(18+2-3x)=12x",
		"5.化简S4得到S5 24+4x+(18+2-3x)=12x"},
		{"6. Simplify S5 to obtain S6 24+4x+20-3x=12x",
		"6.化简S5得到S6 24+4x+20-3x=12x"},
		{"7. Merge S6 to obtain S7 44+x=12x",
		"7.合并S6得到S7 44+x=12x"},
		{"8. Simplify S7 to obtain S8 11x=44=>x=4",
		"8.化简S7得到S8 11x=44=>x=4"},
		{"9.So it's 4:00 pm in the afternoon",
		"9.所以就是下午4点"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P74 例三 分数问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：学校早晨6：00开校门，晚上6：40关校门，下午有一个同学来问时间，老师告诉他：从开校门的时间到现在的时间的1/3，加上现在的时间到关校门的时间的1/4就是现在时间，问现在什么时间?"));
	ColPrintf(PrintfCol::方法, Lang("设12点到现在是x小时"));
	ColPrintf(PrintfCol::方法, Lang("1.列出式子S1 (6+x)*1/3+((6+2/3)-x)*1/4=x"));
	ColPrintf(PrintfCol::方法, Lang("2.化简S1得到S2 (6+x)/3+((6+2/3)-x)/4=x"));
	ColPrintf(PrintfCol::方法, Lang("3.通分S2得到S3 12*(6+x)/3+12*((6+2/3)-x)/4=12x"));
	ColPrintf(PrintfCol::方法, Lang("4.化简S3得到S4 4*(6+x)+3*((6+2/3)-x)=12x"));
	ColPrintf(PrintfCol::方法, Lang("5.化简S4得到S5 24+4x+(18+2-3x)=12x"));
	ColPrintf(PrintfCol::方法, Lang("6.化简S5得到S6 24+4x+20-3x=12x"));
	ColPrintf(PrintfCol::方法, Lang("7.合并S6得到S7 44+x=12x"));
	ColPrintf(PrintfCol::方法, Lang("8.化简S7得到S8 11x=44=>x=4"));
	ColPrintf(PrintfCol::方法, Lang("9.所以就是下午4点"));
}
void P74_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P74 Example Four Score Problem","P74 例四 分数问题"},
		{"Title: A monkey picked a pile of peaches. The first day he ate 1/7 of the peaches, the second day he ate the remaining 1/6, the third day he ate the remaining 1/5, the the?fourth?day he ate the remaining 1/4, the fifth day he ate the remaining 1/3, the sixth day he ate the remaining 1/2, and 12 peaches. What was the total number of peaches he ate the first day and the second day?",
		"题目：一只猴子摘了一堆桃子，第一天吃了这堆桃子的1/7，第二天吃了余下的1/6，第三天吃了余下的1/5，第四天吃了余下的1/4，第五天吃了余下的1/3，第六天吃了余下的1/2，还有12颗桃，第一天第二天吃桃子的总数是多少?"},
		
	};
}