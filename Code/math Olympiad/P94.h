#pragma once
void P94_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P93 Determine whether a number can be divided by a composite number","P93 判断一个数是不是可以被合数整除 数的整除"},
		{"1. To determine whether it can be divided by a composite number, which may be a very large number, we need to divide it into two multiplication cases and then see if they can be divided separately",
		"1.要判断它是不是可以被合数整除，这个合数可能是一个非常大的一个数，所以我们要把它分成两个数相乘的情况，再分别看是不是能整除"},
		{"2. However, it needs to be added that if the two numbers divided are the same, and one of them is a factor of this number, then the other is also the same.",
		"2.但是还需要补充，如果分成的这两个数相同如果，其中一个是这个这个数的因数，那么另外一个也是一样的。"},
		{"3. This is a special case where the number being split may be its factor, but in reality, the composite number is not its factor. For example, the factor of 36, where 6 * 6=36, but this number is 42, cannot be divided by 36",
		"3.这就是一种特殊的情况，有可能分拆的这个数是它的因数，但实际上这个合数不是它的因数，比如36的因数其中6*6=36，但这一个数是42，42整除不了36"},
		{"4. Therefore, there cannot be any relationship between the two numbers that are split, which is coprime. Since the two numbers are not related, then 36 is still equal to 3 * 12. How can we explain this",
		"4.所以分拆的两个数之间不能有任何关系，就是互质，既然说两个数没有关系，那么36还等于3*12，这个怎么解释"},
		{"5. Because a multiple of 3 is 12, and 12 can contain 3, then if it is a multiple of 12, it is also a multiple of three, which is equivalent to the same, so we can only be coprime",
		"5.因为3的倍数是12，而12可以包含了3，那么如果是12的倍数，那么就也是三的倍数，这是相当于相同的，所以我们只能互质"},
		{"6. Give an example: Can 1980 be divided by 36",
		"6.举一个例子：1980它可不可以被36整除"},
		{"7. List the factors of 36 and split them: The factors of 36 are 1 * 36, 2 * 18, 3 * 12, 4 * 9. Among them, the coprime is 4 * 9, so it is split into 4 * 9",
		"7.列出36的因数并分拆它：36的因数：1*36，2*18，3*12，4*9。其中互质的是4*9，所以分拆成4*9"},
		{"8. Determine whether 4 is a factor of 1980, because 4 only involves dividing the last two bits by the last two potentials, so 100 can also divide 4. Therefore, we only look at the last two bits: 80/4=20, so it is",
		"8.判断4是否是1980的因数，因为4只涉及到后两位后两位能整除了，那么100也可以整除4，所以我们只看后两位：80/4=20，所以是"},
		{"9. Determine whether 9 is a factor of 1980. 1980/9=220, so 1980 can be divided by 4.",
		"9.判断9是否是1980的因数，1980/9=220所以1980可以整除4。"},
		{"10.So 1980 can be divided by 36",
		"10.所以1980可以被36整除"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P93 判断一个数是不是可以被合数整除 数的整除"));
	ColPrintf(PrintfCol::方法, Lang("1.要判断它是不是可以被合数整除，这个合数可能是一个非常大的一个数，所以我们要把它分成两个数相乘的情况，再分别看是不是能整除"));
	ColPrintf(PrintfCol::方法, Lang("2.但是还需要补充，如果分成的这两个数相同如果，其中一个是这个这个数的因数，那么另外一个也是一样的。"));
	ColPrintf(PrintfCol::方法, Lang("3.这就是一种特殊的情况，有可能分拆的这个数是它的因数，但实际上这个合数不是它的因数，比如36的因数其中6*6=36，但这一个数是42，42整除不了36"));
	ColPrintf(PrintfCol::方法, Lang("4.所以分拆的两个数之间不能有任何关系，就是互质，既然说两个数没有关系，那么36还等于3*12，这个怎么解释"));
	ColPrintf(PrintfCol::方法, Lang("5.因为3的倍数是12，而12可以包含了3，那么如果是12的倍数，那么就也是三的倍数，这是相当于相同的，所以我们只能互质"));
	ColPrintf(PrintfCol::方法, Lang("6.举一个例子：1980它可不可以被36整除"));
	ColPrintf(PrintfCol::方法, Lang("7.列出36的因数并分拆它：36的因数：1*36，2*18，3*12，4*9。其中互质的是4*9，所以分拆成4*9"));
	ColPrintf(PrintfCol::方法, Lang("8.判断4是否是1980的因数，因为4只涉及到后两位后两位能整除了，那么100也可以整除4，所以我们只看后两位：80/4=20，所以是"));
	ColPrintf(PrintfCol::方法, Lang("9.判断9是否是1980的因数，1980/9=220所以1980可以整除4。"));
	ColPrintf(PrintfCol::方法, Lang("10.所以1980可以被36整除"));
}
void P94_2()
{
	LanguageLib::LanguageTableT Language = {
		{"The relationship between multiples of P93 and the division of numbers","P93 数倍数之间的关系 数的整除"},
		{"If a number a can be divided by b, and b can be divided by c, then a can be divided by c",
		"1.如果一个数a可以被b整除，b又可以被c整除，那么a就可以整除c"},
		{"2. We can imagine that because a can be divided by b, we assume that there are n b's in a",
		"2.我们可以设想：因为a可以被b整除，所以假设a里面有n个b"},
		{"3. We can also imagine that because b can be divided by c, we assume that there are x c in each b",
		"3.我们还可以设想：因为b又可以被c整除，所以假设每个b里面有x个c"},
		{"4. Because there are n b's in a and x c's in b, 2 b's make 2x c's, n b's make nx c's, and n b's can be written as a",
		"4.我们因为a里面有n个b，b里面又有x个c，2个b就有2x个c，n个b就有nx个c，n个b可以写为a"},
		{"5.Since there is an integer c in a, then a can be divided by c",
		"5.既然a里面有是整数的c，那么a就可以除c"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P93 数倍数之间的关系 数的整除"));
	ColPrintf(PrintfCol::方法, Lang("1.如果一个数a可以被b整除，b又可以被c整除，那么a就可以整除c"));
	ColPrintf(PrintfCol::方法, Lang("2.我们可以设想：因为a可以被b整除，所以假设a里面有n个b"));
	ColPrintf(PrintfCol::方法, Lang("3.我们还可以设想：因为b又可以被c整除，所以假设每个b里面有x个c"));
	ColPrintf(PrintfCol::方法, Lang("4.我们因为a里面有n个b，b里面又有x个c，2个b就有2x个c，n个b就有nx个c，n个b可以写为a"));
	ColPrintf(PrintfCol::方法, Lang("5.既然a里面有是整数的c，那么a就可以除c"));
}
void P94_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P93 Division of trial division numbers","P93 试除法 数的整除"},
		{"1. This method can be used when he gives a number, but some bits are not given, and then says that he can divide it by one number. He asks what the number you give is",
		"1.这种方法可以使用在，他给了一个数，其中有一部分位没有给，然后说用一个数可以整除它，问你给的这个数是多少"},
		{"2. Let's start by taking the big picture, for example, if someone doesn't give us a digit, we set a digit to 9 and then use that number to remove it.",
		"2.我们先说从大了算，比如人家没有给个位，我们就设个位是9，然后用那个数去除。"},
		{"3.If there is a remainder, then we have learned before how to remove the remainder. Directly subtracting the remainder from the dividend is the final correct answer",
		"3.如果有余数的话，那么我们之前学过如何去掉余数，直接从被除数里减掉余数，就是最后的正确答案"},
		{"4. If we start counting from a small number, let the number of digits be 0. If there is a remainder, subtract the remainder from the divisor to obtain the number of digits that cannot form a group.",
		"4.如果从小的开始算，那么现设这个位数为0，如果有余数，就用除数减去余数，就是剩下不能构成一组的需要个数。"},
		{"5. If we add the required number to the dividend, the remainder will be equal to the divisor, which will add one, and there will be no remainder",
		"5.我们再把被除数加上需要个数，那么余数就会等于除数，商会加一，且没有余数"},
		{"6. For example: What should be filled in the _ part to make 201_ divisible by 9",
		"6.举个例子：使201_能被9整除，_部分要填什么"},
		{"7. Starting from the big picture, assuming that _ is 9, then 2019/9... 3",
		"7.从大开始算，先假设_为9，那么2019/9……3"},
		{"8. Because it cannot be added up, the divisor is increased by 3, resulting in 2019-3=2016-9=224",
		"8.因为不能往上加了，所以被除数多了3，就要2019-3=2016，2016/9=224"},
		{"7. Starting from the big picture, assuming that _ is 9, then 2019/9... 3",
		"9.从小开始算，先假设_为0，那么2010/9……3"},
		{"10. Since it cannot be reduced downwards, the dividend is reduced by 9-3=6, resulting in 2010+6=2016, 2016/9=224",
		"10.因为不能往下减了，所以被除数少了9-3=6，就要2010+6=2016，2016/9=224"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P93 试除法 数的整除"));
	ColPrintf(PrintfCol::方法, Lang("1.这种方法可以使用在，他给了一个数，其中有一部分位没有给，然后说用一个数可以整除它，问你给的这个数是多少"));
	ColPrintf(PrintfCol::方法, Lang("2.我们先说从大了算，比如人家没有给个位，我们就设个位是9，然后用那个数去除。"));
	ColPrintf(PrintfCol::方法, Lang("3.如果有余数的话，那么我们之前学过如何去掉余数，直接从被除数里减掉余数，就是最后的正确答案"));
	ColPrintf(PrintfCol::方法, Lang("4.如果从小的开始算，那么现设这个位数为0，如果有余数，就用除数减去余数，就是剩下不能构成一组的需要个数。"));
	ColPrintf(PrintfCol::方法, Lang("5.我们再把被除数加上需要个数，那么余数就会等于除数，商会加一，且没有余数"));
	ColPrintf(PrintfCol::方法, Lang("6.举个例子：使201_能被9整除，_部分要填什么"));
	ColPrintf(PrintfCol::方法, Lang("7.从大开始算，先假设_为9，那么2019/9……3"));
	ColPrintf(PrintfCol::方法, Lang("8.因为不能往上加了，所以被除数多了3，就要2019-3=2016，2016/9=224"));
	ColPrintf(PrintfCol::方法, Lang("9.从小开始算，先假设_为0，那么2010/9……3"));
	ColPrintf(PrintfCol::方法, Lang("10.因为不能往下减了，所以被除数少了9-3=6，就要2010+6=2016，2016/9=224"));
}
void P94_4()
{
	LanguageLib::LanguageTableT Language = {
		{"The properties of P93 integers and the division of numbers","P93 整数的性质 数的整除"},
		{"1. Relationship between bits: We all know that multiplying a bit by 1000 means adding three zeros at the end, multiplying it by 100 means adding two zeros... This way, we can calculate the relationship between bits",
		"1.位之间的关系：我们都知道一个个位乘上1000就是在后面加上三个0，乘上100，就是加上两个零……，我们这样便可以计算位之间的关系"},
		{"2. abcd are all single digits, a is one digit, b is also one digit, so 1000 a's, adding 3 zeros after a is: four digit a 000",
		"2.abcd均为一个个位数，a是一位，b也是一位，那么1000个a，在a后面加上3个零就是：四位数a000"},
		{"3. Adding two zeros after b is: the three digit b00, and adding it to the four digit a000 is ab00",
		"3.b在后面加上两个0就是：三位数b00，和四位数a000相加就是ab00"},
		{"4. Adding a 0 after c is: the three digit c0, and adding it to the four digit ab00 is abc0",
		"4.c在后面加上1个0就是：三位数c0，和四位数ab00相加就是abc0"},
		{"5. When we add d, we get: abc0+c=abcd, so a multi digit number can be written as multiplying the digits of each digit in this multi digit number, and then adding the digits together",
		"5.我们在与d相加就得到了：abc0+c=abcd，所以一个多位数，可以写成各位在这个多位数的位数相乘，然后给位相加的形式"},
		{"6. Then list the formula: four digit abcd=a * 1000+b * 100+c * 10+d",
		"6.然后列出式子：四位数abcd=a*1000+b*100+c*10+d"},
		{"7.For example: 6789=6 * 1000+7 * 100+8 * 10+9",
		"7.举个例子：6789=6*1000+7*100+8*10+9"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P93 整数的性质 数的整除"));
	ColPrintf(PrintfCol::方法, Lang("1.位之间的关系：我们都知道一个个位乘上1000就是在后面加上三个0，乘上100，就是加上两个零……，我们这样便可以计算位之间的关系"));
	ColPrintf(PrintfCol::方法, Lang("2.abcd均为一个个位数，a是一位，b也是一位，那么1000个a，在a后面加上3个零就是：四位数a000"));
	ColPrintf(PrintfCol::方法, Lang("3.b在后面加上两个0就是：三位数b00，和四位数a000相加就是ab00"));
	ColPrintf(PrintfCol::方法, Lang("4.c在后面加上1个0就是：三位数c0，和四位数ab00相加就是abc0"));
	ColPrintf(PrintfCol::方法, Lang("5.我们在与d相加就得到了：abc0+c=abcd，所以一个多位数，可以写成各位在这个多位数的位数相乘，然后给位相加的形式"));
	ColPrintf(PrintfCol::方法, Lang("6.然后列出式子：四位数abcd=a*1000+b*100+c*10+d"));
	ColPrintf(PrintfCol::方法, Lang("7.举个例子：6789=6*1000+7*100+8*10+9"));
}
void P94()
{
	P94_1();
	ColPrintf(PrintfCol::方法, "");
	P94_2();
	ColPrintf(PrintfCol::方法, "");
	P94_3();
	ColPrintf(PrintfCol::方法, "");
	P94_4();
	ColPrintf(PrintfCol::方法, "");
	//P89_2();
	ColPrintf(PrintfCol::方法, "");
	//P89_3();
	ColPrintf(PrintfCol::方法, "");
	//P89_4();
	ColPrintf(PrintfCol::方法, "");
	//P89_5();
	ColPrintf(PrintfCol::方法, "");
	//P73_2();
	ColPrintf(PrintfCol::方法, "");
	//P73_3();
	ColPrintf(PrintfCol::方法, "");
	//P73_4();
	ColPrintf(PrintfCol::方法, "");
	/*P55_2_3();
	ColPrintf(PrintfCol::方法, "");
	P55_3();
	ColPrintf(PrintfCol::方法, "");*/
}
void P94_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P94();
	Lang.SetCurLanguage(LanguageLib::English);
	P94();
	ColPrintf(PrintfCol::方法, "");

}