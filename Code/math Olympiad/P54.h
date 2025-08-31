#pragma once
void P54_formula()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Formula Explanation for arithmetic sequences","P54计算专题A级课程公式讲解 等差数列"},
		{"1. The arithmetic sequence literally means that the differences are equal. For example, 1, 2, 3, 4, and 5 have a tolerance of 1 and must be the same when subtracting the previous term from the latter term. It cannot be: 1, 0, 1, 0, 0 cannot subtract 1, so it is not an arithmetic sequence",
		"1.等差数列 从字面上就是差相等 比如：1，2，3，4，5公差是1 而且必须是后一项减前一项的差是一样的，不能是：1，0，1，0，0减不去1，所以它不是等差数列"},
		{"2. The final formula sets the final term as' an ', the first term as' a1', the number of terms as' n ', and the tolerance as'd'. Therefore, we need to subtract one from the last term of 'n' before calculating the total difference. Since we\nremove one term, it becomes' (n-1) d '. Therefore, we need to add the first term to this difference an=a1+（n-1）d",
		"2.末项公式 设末项为an 首项是a1 项数是n 公差是d 要求末尾的所以n项要减去一 我们再来求一共的差，因为去掉一项所以是（n-1）d 最后第一项开始 所以这个差还要加上第一项an=a1+（n-1）d"},
		{"3. The formula for the number of terms is derived based on the last term: an=a1+(n-1) d=>an/d=a1+(n-1)=>(an-a1)/d -=n-1=>(an-a1)/d+1=n. In other words, it is the difference between the first and last terms plus the number of terms n=(an-a1)/d+1",
		"3.项数公式 根据末项推导 an=a1+（n-1）d=>an/d=a1+（n-1）=>(an-a1)/d-=n-1=>(an-a1)/d+1=n 用话来讲就是首项和末项的差除公差加上末项的项数 n=(an-a1)/d+1"},
		{"4. Let's give an example of the Gaussian summation formula: 1, 2, 3, 4... 100. This is an arithmetic sequence, and the goal is to sum them up. We found that 1 and 100 combine to form 101, and 2 and 99 also form 101... Every two numbers can form the same sum. Since we already know this sum, we need to half the number of terms and multiply it by (a1+an) * n)/2",
		"4.高斯求和公式 先举个例子：1，2，3，4……100 这是一个等差数列 目标就是求和 我们发现1和100组合成101，2和99也组成101……每两个数都可以组成一个相同的和，既然这个和已经知道 我们就要把项数折半再去乘这个和 所以就是（（a1+an）*n）/2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::标题, Lang("P54计算专题A级课程公式讲解 等差数列"));
	ColPrintf(PrintfCol::方法, Lang("1.等差数列 从字面上就是差相等 比如：1，2，3，4，5公差是1 而且必须是后一项减前一项的差是一样的，不能是：1，0，1，0，0减不去1，所以它不是等差数列"));
	ColPrintf(PrintfCol::方法, Lang("2.末项公式 设末项为an 首项是a1 项数是n 公差是d 要求末尾的所以n项要减去一 我们再来求一共的差，因为去掉一项所以是（n-1）d 最后第一项开始 所以这个差还要加上第一项an=a1+（n-1）d"));
	ColPrintf(PrintfCol::方法, Lang("3.项数公式 根据末项推导 an=a1+（n-1）d=>an/d=a1+（n-1）=>(an-a1)/d-=n-1=>(an-a1)/d+1=n 用话来讲就是首项和末项的差除公差加上末项的项数 n=(an-a1)/d+1"));
	ColPrintf(PrintfCol::方法, Lang("4.高斯求和公式 先举个例子：1，2，3，4……100 这是一个等差数列 目标就是求和 我们发现1和100组合成101，2和99也组成101……每两个数都可以组成一个相同的和，既然这个和已经知道 我们就要把项数折半再去乘这个和 所以就是（（a1+an）*n）/2"));
}
void P54_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Equal Difference Sequence","P54计算专题A级课程第一题第一小题 等差数列"},
		{"The known arithmetic sequence is: 1, 4, 7, 10",
		"第一题题目：已知等差数列是：1，4，7，10……"},
		{"Question: Is item 2013 a number in the sequence? If it is a request to find out which item it is, and if it is not to find the nearest number of that column",
		"题目：求第2013项"},
		{"1. Calculate the 13th item N1, which is equal to the first item N2+(total number N3- excess items N4) multiplied by the tolerance N5",
		"1.计算第2013项N1 第2013项N1=数列首项N2+(数列总数N3-多出项数N4)*公差N5"},
		//变量表
		{"ThefirsttermN2inthesequence","数列首项N2"},
		{"TotalnumberofsequencesN3","数列总数N3"},
		{"ExcessitemsN4","多出项数N4"},
		{"ToleranceN5","公差N5"},
		{"Item2013N1","第2013项N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(数列首项N2, 1);
	DefineLangVarInt(数列总数N3, 2013);
	DefineLangVarInt(多出项数N4, 1);
	DefineLangVarInt(公差N5, 3);
	ColPrintf(PrintfCol::标题, Lang("P54计算专题A级课程第一题第一小题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("第一题题目：已知等差数列是：1，4，7，10……"));
	ColPrintf(PrintfCol::标题, Lang("题目：求第2013项"));
	DefineLangVarInt(第2013项N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算第2013项N1 第2013项N1=数列首项N2+(数列总数N3-多出项数N4)*公差N5"));
	第2013项N1 = 数列首项N2 + (数列总数N3 - 多出项数N4) * 公差N5;
	第2013项N1.PrintProcessLog(1);
}
void P54_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Question 1, Question 2, Equal Difference Sequence","P54计算专题A级课程第一题第二小题 等差数列"},
		{"Question: Is 2013 a number in this sequence? If it is, which item is it? If it is not in this sequence, which number is closest to it?",
		"题目：2013是这个数列中的数吗？如果是它是第几项，如果不是在这个数列中最与它相近的数是那个?"},
		{"1. Calculate the number of items N1. The number of items N1=(first item N2+last item N2)/tolerance N3+fewer items N4",
		"1.计算所在的项数N1 所在的项数N1=(数列末项N2-数列首项N2)/公差N3+少的项数N4"},
		{"2. Because it cannot be divided by the number of items, 2013 is not part of this sequence. We calculate its remainder to be 2, which is very close to the next number. Therefore, we add one to it",
		"2.因为不能被项数整除，所以2013不是这个数列的 我们求它的余数是2，相差较大，所以非常靠近下一个数，对它加一"},
		{"3. Calculate the number of items N1 that are close to each other. The number of items N1 is equal to (the first item N2 of the sequence+the last item N2 after increasing) divided by the tolerance N3 and the number of items N4 that are less",
		"3.计算相近所在的项数N1 相近所在的项数N1=(增加后数列末项N2-数列首项N2)/公差N3+少的项数N4"},
		//变量表
		{"ThefirsttermN2inthesequence","数列首项N2"},
		{"LasttermN2ofthesequence","数列末项N2"},
		{"ToleranceN3","公差N3"},
		{"feweritemsN4","少的项数N4"},
		{"AddthelasttermN2tothesequenceafteraddition","增加后数列末项N2"},
		{"NumberofitemsN1","所在的项数N1"},
		{"NumberofsimilaritemsN1","相近所在的项数N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,数列首项N2, 1);
	DefineLangVar(float,数列末项N2, 2013);
	DefineLangVar(float,少的项数N4, 1);
	DefineLangVar(float,公差N3, 3);
	DefineLangVar(float,增加后数列末项N2, 2014);
	ColPrintf(PrintfCol::标题, Lang("P54计算专题A级课程第一题第二小题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：2013是这个数列中的数吗？如果是它是第几项，如果不是在这个数列中最与它相近的数是那个?"));
	DefineLangVar(float,所在的项数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算所在的项数N1 所在的项数N1=(数列末项N2-数列首项N2)/公差N3+少的项数N4"));
	所在的项数N1 = (数列末项N2 - 数列首项N2) / 公差N3 + 少的项数N4;
	所在的项数N1.PrintProcessLog(1);
	ColPrintf(PrintfCol::方法, Lang("2.因为不能被项数整除，所以2013不是这个数列的 我们求它的余数是2，相差较大，所以非常靠近下一个数，对它加一"));
	DefineLangVar(float, 相近所在的项数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算相近所在的项数N1 相近所在的项数N1=(增加后数列末项N2-数列首项N2)/公差N3+少的项数N4"));
	相近所在的项数N1 = (增加后数列末项N2 - 数列首项N2) / 公差N3 + 少的项数N4;
	相近所在的项数N1.PrintProcessLog(3);
}
void P54_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Question 1, Question 3, Equal Difference Sequence","P54计算专题A级课程第一题第三小题 等差数列"},
		{"Title: Sum All Numbers from 28 to 2013",
		"题目：求28到2013项的所有数之和"},
		{"1. Calculate the 28th item and N1. The 28th item and N1=the first item N2+(the 28th item N3- the excess item N4) * tolerance N5",
		"1.计算第28项数和N1 第28项数和N1=数列首项N2+(数列第28项项数N3-多出项数N4)*公差N5"},
		{"2. Calculate the number of items 2028th and N2. The number of items 2028th and N2=the first item N2+(the number of items in the 2028th item N3 minus the number of items N4) * tolerance N5",
		"2.计算第2028项数和N2 第2028项数和N2=数列首项N2+(数列第2028项项数N3-多出项数N4)*公差N5"},
		{"3. Calculate the sum of items N3. The sum of items N3=(28th item and N1+2028th item and N2) * (2028th item and N3-28th item and N3+N4)/multiplier N5",
		"3.计算项数之和N3 项数之和N3=(第28项数和N1+第2028项数和N2)*(数列第2028项项数N3-数列第28项项数N3+多出项数N4)/倍率N5"},
		//变量表
		{"ThefirsttermN2inthesequence","数列首项N2"},
		{"NumberN3ofitem28inthesequence","数列第28项项数N3"},
		{"ExcessitemsN4","多出项数N4"},
		{"ToleranceN5","公差N5"},
		{"NumberofitemsN3inthe2028thitemofthesequence","数列第2028项项数N3"},
		{"MagnificationN5","倍率N5"},
		{"The28thitemandN1","第28项数和N1"},
		{"2028thitemandN2","第2028项数和N2"},
		{"SumofitemsN3","项数之和N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 数列首项N2, 1);
	DefineLangVar(float, 数列第28项项数N3, 28);
	DefineLangVar(float, 多出项数N4, 1);
	DefineLangVar(float, 公差N5, 3);
	DefineLangVar(float, 数列第2028项项数N3, 2028);
	DefineLangVar(float, 倍率N5, 2);
	ColPrintf(PrintfCol::标题, Lang("P54计算专题A级课程第一题第三小题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：求28到2013项的所有数之和"));
	DefineLangVar(float, 第28项数和N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算第28项数和N1 第28项数和N1=数列首项N2+(数列第28项项数N3-多出项数N4)*公差N5"));
	第28项数和N1 = 数列首项N2 + (数列第28项项数N3 - 多出项数N4) * 公差N5;
	第28项数和N1.PrintProcessLog(1);
	DefineLangVar(float, 第2028项数和N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算第2028项数和N2 第2028项数和N2=数列首项N2+(数列第2028项项数N3-多出项数N4)*公差N5"));
	第2028项数和N2 = 数列首项N2 + (数列第2028项项数N3 - 多出项数N4) * 公差N5;
	第2028项数和N2.PrintProcessLog(2);
	DefineLangVar(float, 项数之和N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算项数之和N3 项数之和N3=(第28项数和N1+第2028项数和N2)*(数列第2028项项数N3-数列第28项项数N3+多出项数N4)/倍率N5"));
	项数之和N3 = (第28项数和N1 + 第2028项数和N2) * (数列第2028项项数N3 - 数列第28项项数N3 + 多出项数N4) / 倍率N5;
	项数之和N3.PrintProcessLog(3);
}
void P54_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Question 2: arithmetic sequence","P54计算专题A级课程第二题 等差数列"},
		{"Title: Calculation of 2012 * 2011-2011 * 2010+2010 * 2009-2009 * 2008+2008 * 2007-2007 * 2006...+4 * 3-3 * 2+2 * 1",
		"题目：计算2012*2011-2011*2010+2010*2009-2009*2008+2008*2007-2007*2006……+4*3-3*2+2*1"},
		{"1. Classification addition and subtraction subtraction classification: Look at the first and second items, put forward the middle 2011 as 2011 * (2012-2010)+2009 * (20010-2008)+...+3 * (4-2)+2 * 1",
		"1.分类加减法 减法分类：看第一项第二项把中间2011提出 2011*(2012-2010)+2009*(20010-2008)+……+3*(4-2)+2*1"},
		{"2. Simplify the first step equation to obtain S2 2011 * 2+2009 * 2+...+3 * 2+2 * 1",
		"2.化简第一步式子得到S2 2011*2+2009*2+……+3*2+2*1"},
		{"3. Simplify S2 to obtain S3 (2011+2009+...+3+2 +1) * 2",
		"3.化简S2得到S3 (2011+2009+……+3+2+1)*2"},
		{"4. Calculate the sum of sequences N4. The sum of sequences N4=(the first term N1+the last term N1) * (the total number of items N2+the few items N3/the parity ratio N4)/the multiplier N5*the multiplier N5",
		"4.计算数列之和N4 数列之和N4=(数列首项N1+数列末项N1)*((总项数N2+少的项数N3)/奇偶比例N4)/倍率N5*倍率N5"},
		//变量表
		{"ThefirsttermN1inthesequence","数列首项N1"},
		{"LasttermN1ofthesequence","数列末项N1"},
		{"TotalnumberofitemsN2","总项数N2"},
		{"FewitemsN3","少的项数N3"},
		{"ParityratioN4","奇偶比例N4"},
		{"MagnificationN5","倍率N5"},
		{"SumofsequencesN4","数列之和N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 数列首项N1, 2011);
	DefineLangVar(float, 数列末项N1, 1);
	DefineLangVar(float, 总项数N2, 2011);
	DefineLangVar(float, 少的项数N3, 1);
	DefineLangVar(float, 奇偶比例N4, 2);
	DefineLangVar(float, 倍率N5, 2);
	ColPrintf(PrintfCol::标题, Lang("P54计算专题A级课程第二题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：计算2012*2011-2011*2010+2010*2009-2009*2008+2008*2007-2007*2006……+4*3-3*2+2*1"));

	ColPrintf(PrintfCol::方法, Lang("1.分类加减法 减法分类：看第一项第二项把中间2011提出 2011*(2012-2010)+2009*(20010-2008)+……+3*(4-2)+2*1"));
	ColPrintf(PrintfCol::方法, Lang("2.化简第一步式子得到S2 2011*2+2009*2+……+3*2+2*1"));
	ColPrintf(PrintfCol::方法, Lang("3.化简S2得到S3 (2011+2009+……+3+2+1)*2"));
	DefineLangVar(float, 数列之和N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算数列之和N4 数列之和N4=(数列首项N1+数列末项N1)*((总项数N2+少的项数N3)/奇偶比例N4)/倍率N5*倍率N5"));
	数列之和N4 = (数列首项N1 + 数列末项N1) * ((总项数N2 + 少的项数N3) / 奇偶比例N4) / 倍率N5* 倍率N5;
	数列之和N4.PrintProcessLog(4);
	
}
void P54_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Question 3: Isometric Sequence","P54计算专题A级课程第三题 等差数列"},
		{"Title: There is a batch of bricks on the construction site. The top layer has 2 bricks, the second layer has 6 bricks, the third layer has 10 bricks, and so on. Each layer has 4 more bricks, and the bottom layer has 2106 bricks. How many bricks are there in this pile?",
		"题目：工地有一批砖，垒成最上面有2块砖，第二层6块，第三层10块，以此类推，每层多4块，最下层有2106块砖，中间一层有多少块，这堆转共有多少块?"},
		{"1. Calculate the total number of layers N1=(total quantity N2- first layer quantity N3)/sequence tolerance N4+fewer layers N5",
		"1.计算一共的层数N1 一共的层数N1=(总共数量N2-第一层数量N3)/数列公差N4+少的层数N5"},
		{"2. Calculate the number of layers N2 in the middle. The number of layers N2 in the middle is equal to (the total number of layers N1+the odd number is not enough plus one N3) divided by the magnification N5",
		"2.计算中间的层数N2 中间的层数N2=(一共的层数N1+奇数不够加上一N3)/倍率N5"},
		{"3. Calculate the middle layer N3=the number of first layers N3+(the middle layer N2 minus the few layers N5) * the sequence tolerance N4",
		"3.计算中间一层N3 中间一层N3=第一层数量N3+(中间的层数N2-少的层数N5)*数列公差N4"},
		{"4. Calculate the number of shared blocks N4=middle layer N3 * total number of layers N1",
		"4.计算共有的块数N4 共有的块数N4=中间一层N3*一共的层数N1"},
		//变量表
		{"TotalquantityN2","总共数量N2"},
		{"NumberoffirstlayerN3","第一层数量N3"},
		{"Theoddnumberisnotenough,plusoneN3","奇数不够加上一N3"},
		{"MagnificationN5","倍率N5"},
		{"SequencetoleranceN4","数列公差N4"},
		{"FewerlayersN5","少的层数N5"},
		{"ThetotalnumberoflayersN1","一共的层数N1"},
		{"MiddlelayerN2","中间的层数N2"},
		{"MiddlelayerN3","中间一层N3"},
		{"NumberofsharedblocksN4","共有的块数N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, 总共数量N2, 2106);
	DefineLangVar(float, 第一层数量N3, 2);
	DefineLangVar(float, 奇数不够加上一N3, 1);
	DefineLangVar(float, 数列公差N4, 4);
	DefineLangVar(float, 少的层数N5, 1);
	DefineLangVar(float, 倍率N5, 2);
	ColPrintf(PrintfCol::标题, Lang("P54计算专题A级课程第三题 等差数列"));
	ColPrintf(PrintfCol::标题, Lang("题目：工地有一批砖，垒成最上面有2块砖，第二层6块，第三层10块，以此类推，每层多4块，最下层有2106块砖，中间一层有多少块，这堆转共有多少块?"));
	DefineLangVar(float, 一共的层数N1, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算一共的层数N1 一共的层数N1=(总共数量N2-第一层数量N3)/数列公差N4+少的层数N5"));
	一共的层数N1 = (总共数量N2 - 第一层数量N3) / 数列公差N4 + 少的层数N5;
	一共的层数N1.PrintProcessLog(1);
	DefineLangVar(float, 中间的层数N2, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算中间的层数N2 中间的层数N2=(一共的层数N1+奇数不够加上一N3)/倍率N5"));
	中间的层数N2 = (一共的层数N1 + 奇数不够加上一N3) / 倍率N5;
	中间的层数N2.PrintProcessLog(2);
	DefineLangVar(float, 中间一层N3, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算中间一层N3 中间一层N3=第一层数量N3+(中间的层数N2-少的层数N5)*数列公差N4"));
	中间一层N3 = 第一层数量N3 + (中间的层数N2 - 少的层数N5) * 数列公差N4;
	中间一层N3.PrintProcessLog(3);
	DefineLangVar(float, 共有的块数N4, 0);
	ColPrintf(PrintfCol::方法, Lang("4.计算共有的块数N4 共有的块数N4=中间一层N3*一共的层数N1"));
	共有的块数N4 = 中间一层N3 * 一共的层数N1;
	共有的块数N4.PrintProcessLog(4);
}
void P54()
{
	P54_formula();
	ColPrintf(PrintfCol::方法, "");
	P54_1();
	ColPrintf(PrintfCol::方法, "");
	P54_2();
	ColPrintf(PrintfCol::方法, "");
	P54_3();
	ColPrintf(PrintfCol::方法, "");
	P54_4();
	ColPrintf(PrintfCol::方法, "");
	P54_5();
	ColPrintf(PrintfCol::方法, "");
}
void P54_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P54();
	Lang.SetCurLanguage(LanguageLib::English);
	P54();
	ColPrintf(PrintfCol::方法, "");

}