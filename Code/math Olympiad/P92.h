#pragma once
void P92_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P92 case one factor multiple","P92 例一 因数倍数"},
		{"Question: Two natural numbers are not in a multiple relationship. Their greatest common factor is 18 and their least common multiple is 216. What are these two numbers?",
		"题目：两个自然数不成倍数关系，他们的最大公因数是18，最小公倍数是216，这两个数分别是多少?"},
		{"1. Because both of these numbers can be divided by their greatest common factor, we can divide the two numbers into their greatest common factor and another number with a multiple relationship",
		"1.因为这两个数都可以被最大共因数整除，我们可以把两个数分别分成最大公因数，和另一个倍数关系的数"},
		{"2. So we can write it as follows: let the greatest common factor be m, another multiple is associated with a and b, and the two numbers are A and B. Then: A=m * a, B=m * b",
		"2.所以我们可以写成，设最大公因数为m，另一个倍数关联这的分别为a和b，两个数为A和B，那么：A=m*a，B=m*b"},
		{"3. Inputting the values into the equation is: A=18 * a, B=18 * b",
		"3.把值带入到式子中就是：A=18*a，B=18*b"},
		{"If it is the least common multiple, the method to calculate the least common multiple based on the decomposition prime factor is: [a, b]=m * a * b=18 * a * b=216, and the factor relationship is: (a, b)=m=18",
		"4.如果是最小公倍数根据分解质因数求最小公倍数的办法就是：[a,b]=m*a*b=18*a*b=216,因数关系就是：(a,b)=m=18"},
		{"If 5. m is derived, then a * b can be derived: 18 * a * b=216=>a * b=216/18=12",
		"5.m推出来了，那么a*b就可以推出：18*a*b=216=>a*b=216/18=12"},
		{"In the question, it was mentioned that there cannot be a multiple relationship because the factors have one term that is the same, so it depends on whether a and b have a multiple relationship. Only 3 * 4=12 is satisfied, so these two numbers are 18 * 3=54 and 18 * 4=72, respectively",
		"6.题目中说了不成倍数关系，因为因数有一项相同，所以就要看a和b是否是倍数关系，满足的只有3*4=12，所以这两个数分别是18*3=54和18*4=72"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P92 例一 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：两个自然数不成倍数关系，他们的最大公因数是18，最小公倍数是216，这两个数分别是多少?"));
	ColPrintf(PrintfCol::方法, Lang("1.因为这两个数都可以被最大共因数整除，我们可以把两个数分别分成最大公因数，和另一个倍数关系的数"));
	ColPrintf(PrintfCol::方法, Lang("2.所以我们可以写成，设最大公因数为m，另一个倍数关联这的分别为a和b，两个数为A和B，那么：A=m*a，B=m*b"));
	ColPrintf(PrintfCol::方法, Lang("3.把值带入到式子中就是：A=18*a，B=18*b"));
	ColPrintf(PrintfCol::方法, Lang("4.如果是最小公倍数根据分解质因数求最小公倍数的办法就是：[a,b]=m*a*b=18*a*b=216,因数关系就是：(a,b)=m=18"));
	ColPrintf(PrintfCol::方法, Lang("5.m推出来了，那么a*b就可以推出：18*a*b=216=>a*b=216/18=12"));
	ColPrintf(PrintfCol::方法, Lang("6.题目中说了不成倍数关系，因为因数有一项相同，所以就要看a和b是否是倍数关系，满足的只有3*4=12，所以这两个数分别是18*3=54和18*4=72"));
}
void P92_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P92 cases with two factor multiples","P92 例二 因数倍数"},
		{"Question: The least common multiple of two numbers is 420, the greatest common factor is 6, and the difference between the two numbers is 18. What is the smaller number?",
		"题目：两个数的最小公倍数是420，最大公因数是6，两数相差18，较小的数是多少？"},
		{"1. This question is basically the same as the previous one, except for a difference of 18. We will still list the greatest common factor and common multiple before calculating",
		"1.这一题和上一题基本一样，只不过后面相差18，我们还是把最大公因数和公倍数列出再来计算"},
		{"2. Let the greatest common factor be m, and the other multiples associated with it are a and b, respectively. The two numbers are A and B. Therefore, A=m * a, B=m * b",
		"2.还是设最大公因数为m，另一个倍数关联这的分别为a和b，两个数为A和B，那么：A=m*a，B=m*b"},
		{"3. Substitute the numerical values into the equation, as m is the greatest common factor: (a, b)=m=6. Substitute m into the equation: A=6 * a, B=6 * b",
		"3.把数值带入当中，因为m是最大公因数所以：(a,b)=m=6,把m带入式子当中：A=6*a，B=6*b"},
		{"4. According to the decomposition prime factor acting on the equation, then: [a, b]=m * a * b=6 * a * b=420",
		"4.根据分解质因数作用于式子当中，那么：[a,b]=m*a*b=6*a*b=420"},
		{"5. Simplify the equation from the previous step to obtain: 6 * a * b=420=>a * b=420/6=70",
		"5.化简上一步的式子得到：6*a*b=420=>a*b=420/6=70"},
		{"6. Because the relationship still requires a and b, and 6 * a-6 * b=18=>a-b=18/6=3, the factors of 70 are 1, 2, 5, 7, 10, 35, 70, which only match 7 * 10",
		"6.因为关系还是需要a和b的，而且6*a-6*b=18=>a-b=18/6=3，70的因数有1，2，5，7，10，35，70，所符合的只有7*10"},
		{"7. We can calculate two numbers, the first one is 6 * 7=42, the second one is 6 * 10=60, and the smaller one is 42",
		"7.我们就可以计算两个数了，第一个就是6*7=42，第二个是6*10=60，较小的是42"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P92 例二 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：两个数的最小公倍数是420，最大公因数是6，两数相差18，较小的数是多少？"));
	ColPrintf(PrintfCol::方法, Lang("1.这一题和上一题基本一样，只不过后面相差18，我们还是把最大公因数和公倍数列出再来计算"));
	ColPrintf(PrintfCol::方法, Lang("2.还是设最大公因数为m，另一个倍数关联这的分别为a和b，两个数为A和B，那么：A=m*a，B=m*b"));
	ColPrintf(PrintfCol::方法, Lang("3.把数值带入当中，因为m是最大公因数所以：(a,b)=m=6,把m带入式子当中：A=6*a，B=6*b"));
	ColPrintf(PrintfCol::方法, Lang("4.根据分解质因数作用于式子当中，那么：[a,b]=m*a*b=6*a*b=420"));
	ColPrintf(PrintfCol::方法, Lang("5.化简上一步的式子得到：6*a*b=420=>a*b=420/6=70"));
	ColPrintf(PrintfCol::方法, Lang("6.因为关系还是需要a和b的，而且6*a-6*b=18=>a-b=18/6=3，70的因数有1，2，5，7，10，35，70，所符合的只有7*10"));
	ColPrintf(PrintfCol::方法, Lang("7.我们就可以计算两个数了，第一个就是6*7=42，第二个是6*10=60，较小的是42"));
}
void P92_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P92 cases with three factor multiples","P92 例三 因数倍数"},
		{"Title: Some children form a line and distribute an apple every two from the left and an orange every four from the right. There are 10 people who receive both apples and oranges. How many people are there in total?",
		"题目：有些小朋友拍成一行，从左边开始每隔两个发一个苹果，从右开始每隔4个发一个橘子，苹果橘子都拿到的有10人，那么共有多少人?"},
		{"1. Let's start by looking at the one from the left, which is divided as follows: 1, 2, 3, 4, 5, 6... If we send one after the other two, then the ones we send are 1, 4, 7... ",
		"1.我们开始先看从左的，它是这样分的：1，2，3，4，5，6……其中隔上两个发一个那么发到的就是1，4，7……"},
		{"2. It was found that one in every 2+1 people has an apple, where 1 is the person who sent it and 2 is separated by two people. Therefore, the image becomes like this: | 1, 2, 3 |, | 4, 5, 6 |",
		"2.其中发现每2+1个人中就有一个人有苹果，其中1就是发到的那个人，2就是隔上两个人，所以图就变成这样：|1，2，3|，|4，5，6|……"},
		{"3. Going from right to left is also the same principle. Every four people send an orange, it's like this... 7, 6, 5, 4, 3, 2, 1",
		"3.从右往左也是一个道理，每隔4个人发一个橘子，是这样的……7，6，5，4，3，2，1"},
		{"4. Similarly, there is one person every four people, so it is a group of 4+1 people. Each group sends one person, where 1 is the person to whom it is sent and 4 is separated by 4 people. Therefore, the graph becomes like this:... 7, 6, 5 |, | 4, 3, 2, 1|",
		"4.同理每隔四个人就有一个，那么就是4+1个人一组，一组发一个，其中的1就是发到的那个人，4就是隔上4个人，所以图就变成这样：……7，6，5|，|4，3，2，1|"},
		{"When left and right intersect, the number of people at that time can definitely be divided by the number of people in these two groups, which is their least common multiple [3,5]=15",
		"5.左和右相交时，当时的人数肯定可以整除这两边组的人数，就是它们之间的最小公倍数[3,5]=15"},
		{"Because 10 people received apples and oranges, and each group received 15 people, there are 150 people in 10 * 15=150 people",
		"6.因为苹果橘子都拿到的有10人，每组都拿到的有15人所以就有10*15=150人"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P92 例三 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：有些小朋友拍成一行，从左边开始每隔两个发一个苹果，从右开始每隔4个发一个橘子，苹果橘子都拿到的有10人，那么共有多少人?"));
	ColPrintf(PrintfCol::方法, Lang("1.我们开始先看从左的，它是这样分的：1，2，3，4，5，6……其中隔上两个发一个那么发到的就是1，4，7……"));
	ColPrintf(PrintfCol::方法, Lang("2.其中发现每2+1个人中就有一个人有苹果，其中1就是发到的那个人，2就是隔上两个人，所以图就变成这样：|1，2，3|，|4，5，6|……"));
	ColPrintf(PrintfCol::方法, Lang("3.从右往左也是一个道理，每隔4个人发一个橘子，是这样的……7，6，5，4，3，2，1"));
	ColPrintf(PrintfCol::方法, Lang("4.同理每隔四个人就有一个，那么就是4+1个人一组，一组发一个，其中的1就是发到的那个人，4就是隔上4个人，所以图就变成这样：……7，6，5|，|4，3，2，1|"));
	ColPrintf(PrintfCol::方法, Lang("5.左和右相交时，当时的人数肯定可以整除这两边组的人数，就是它们之间的最小公倍数[3,5]=15"));
	ColPrintf(PrintfCol::方法, Lang("6.因为苹果橘子都拿到的有10人，每组都拿到的有15人所以就有10*15=150人"));
}
void P92_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P92 cases with four factor multiples","P92 例四 因数倍数"},
		{"Question: In an exam, one seventh of the students who participated were excellent, one fourth were good, one third were successful, and the rest were poor. Given that there are less than 100 students, how many of them are poor",
		"题目：一次考试，参加的学生中有七分之一得优，四分之一得良，三分之一得中，其余的为差，已知学生不满100人，那么差的人数是多少"},
		{"1. We know that the denominator is obtained by dividing the unit into equal parts, and there is no specific number of people here. We set unit one as the total number of people, and the total number of people must be divisible by the denominator in order to do so",
		"1.我们知道分母是把单位以平均分成多少份得来的，在这里没有具体的人数，我们把单位一设为总人数，总人数必须要能被分母整除才行"},
		{"2. Because Unit One must be divided by the denominator, and one seventh is preferred, the total number of people must be a multiple of seven",
		"2.因为单位一必须被分母整除，七分之一得优所以总人数必须是7的倍数"},
		{"3. Because Unit One must be divided by the denominator, and one quarter is good, the total number of people must be a multiple of 4",
		"3.因为单位一必须被分母整除，四分之一得良所以总人数必须是4的倍数"},
		{"4. Because Unit One must be divided by the denominator, one-third must be in the middle, so the total number of people must be a multiple of 3",
		"4.因为单位一必须被分母整除，三分之一得中所以总人数必须是3的倍数"},
		{"5.So the total number of people must meet these conditions: multiples of 7, multiples of 4, multiples of 3, which are common multiples of 7, 4, and 3, and this common multiple must be within 100",
		"5.所以总人数必须满足这几个条件：7的倍数，4的倍数，3的倍数，就是7，4，3的公倍数，且这个公倍数必须在100以内"},
		{"6. First, find the least common multiple: [7,4,3]=84. We see that this number is very close to one hundred. To find another one, we must multiply it by 2. Multiplying by 2 would exceed 100, so the total number of people is 84",
		"6.先求最小公倍数：[7,4,3]=84，我们看到这个数非常接近于一百，要再找出一个，必须乘2，乘2就超过100了，所以总人数为84"},
		{"7. If you know the number of units one is, then it's easy to find the number of three. One seventh gets good: 84/7=12 people, one fourth gets good: 84/4=21 people, and one third gets right: 84/3=28 people",
		"7.知道了单位一是几，那么三者人数就好求了，七分之一得优：84/7=12人，四分之一得良：84/4=21人，三分之一得中：84/3=28人"},
		{"8. Knowing the number of the three, the next step is to subtract the number of the three from the total number, and the difference is 23 people: 84-21-12-28=23 people",
		"8.三者的人数知道了，下来就是用总人数减去三者的人数，就是差的人数：84-21-12-28=23人"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P92 例四 因数倍数"));
	ColPrintf(PrintfCol::标题, Lang("题目：一次考试，参加的学生中有七分之一得优，四分之一得良，三分之一得中，其余的为差，已知学生不满100人，那么差的人数是多少"));
	ColPrintf(PrintfCol::方法, Lang("1.我们知道分母是把单位以平均分成多少份得来的，在这里没有具体的人数，我们把单位一设为总人数，总人数必须要能被分母整除才行"));
	ColPrintf(PrintfCol::方法, Lang("2.因为单位一必须被分母整除，七分之一得优所以总人数必须是7的倍数"));
	ColPrintf(PrintfCol::方法, Lang("3.因为单位一必须被分母整除，四分之一得良所以总人数必须是4的倍数"));
	ColPrintf(PrintfCol::方法, Lang("4.因为单位一必须被分母整除，三分之一得中所以总人数必须是3的倍数"));
	ColPrintf(PrintfCol::方法, Lang("5.所以总人数必须满足这几个条件：7的倍数，4的倍数，3的倍数，就是7，4，3的公倍数，且这个公倍数必须在100以内"));
	ColPrintf(PrintfCol::方法, Lang("6.先求最小公倍数：[7,4,3]=84，我们看到这个数非常接近于一百，要再找出一个，必须乘2，乘2就超过100了，所以总人数为84"));
	ColPrintf(PrintfCol::方法, Lang("7.知道了单位一是几，那么三者人数就好求了，七分之一得优：84/7=12人，四分之一得良：84/4=21人，三分之一得中：84/3=28人"));
	ColPrintf(PrintfCol::方法, Lang("8.三者的人数知道了，下来就是用总人数减去三者的人数，就是差的人数：84-21-12-28=23人"));
}
void P92()
{
	P92_1();
	ColPrintf(PrintfCol::方法, "");
	P92_2();
	ColPrintf(PrintfCol::方法, "");
	P92_3();
	ColPrintf(PrintfCol::方法, "");
	P92_4();
	ColPrintf(PrintfCol::方法, "");
}
void P92_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P92();
	Lang.SetCurLanguage(LanguageLib::English);
	P92();
	ColPrintf(PrintfCol::方法, "");
}