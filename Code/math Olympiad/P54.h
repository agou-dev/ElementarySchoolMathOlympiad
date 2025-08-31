#pragma once
void P54_formula()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Formula Explanation for arithmetic sequences","P54����ר��A���γ̹�ʽ���� �Ȳ�����"},
		{"1. The arithmetic sequence literally means that the differences are equal. For example, 1, 2, 3, 4, and 5 have a tolerance of 1 and must be the same when subtracting the previous term from the latter term. It cannot be: 1, 0, 1, 0, 0 cannot subtract 1, so it is not an arithmetic sequence",
		"1.�Ȳ����� �������Ͼ��ǲ���� ���磺1��2��3��4��5������1 ���ұ����Ǻ�һ���ǰһ��Ĳ���һ���ģ������ǣ�1��0��1��0��0����ȥ1�����������ǵȲ�����"},
		{"2. The final formula sets the final term as' an ', the first term as' a1', the number of terms as' n ', and the tolerance as'd'. Therefore, we need to subtract one from the last term of 'n' before calculating the total difference. Since we\nremove one term, it becomes' (n-1) d '. Therefore, we need to add the first term to this difference an=a1+��n-1��d",
		"2.ĩ�ʽ ��ĩ��Ϊan ������a1 ������n ������d Ҫ��ĩβ������n��Ҫ��ȥһ ����������һ���Ĳ��Ϊȥ��һ�������ǣ�n-1��d ����һ�ʼ ��������Ҫ���ϵ�һ��an=a1+��n-1��d"},
		{"3. The formula for the number of terms is derived based on the last term: an=a1+(n-1) d=>an/d=a1+(n-1)=>(an-a1)/d -=n-1=>(an-a1)/d+1=n. In other words, it is the difference between the first and last terms plus the number of terms n=(an-a1)/d+1",
		"3.������ʽ ����ĩ���Ƶ� an=a1+��n-1��d=>an/d=a1+��n-1��=>(an-a1)/d-=n-1=>(an-a1)/d+1=n �û��������������ĩ��Ĳ���������ĩ������� n=(an-a1)/d+1"},
		{"4. Let's give an example of the Gaussian summation formula: 1, 2, 3, 4... 100. This is an arithmetic sequence, and the goal is to sum them up. We found that 1 and 100 combine to form 101, and 2 and 99 also form 101... Every two numbers can form the same sum. Since we already know this sum, we need to half the number of terms and multiply it by (a1+an) * n)/2",
		"4.��˹��͹�ʽ �Ⱦٸ����ӣ�1��2��3��4����100 ����һ���Ȳ����� Ŀ�������� ���Ƿ���1��100��ϳ�101��2��99Ҳ���101����ÿ���������������һ����ͬ�ĺͣ���Ȼ������Ѿ�֪�� ���Ǿ�Ҫ�������۰���ȥ������� ���Ծ��ǣ���a1+an��*n��/2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P54����ר��A���γ̹�ʽ���� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("1.�Ȳ����� �������Ͼ��ǲ���� ���磺1��2��3��4��5������1 ���ұ����Ǻ�һ���ǰһ��Ĳ���һ���ģ������ǣ�1��0��1��0��0����ȥ1�����������ǵȲ�����"));
	ColPrintf(PrintfCol::����, Lang("2.ĩ�ʽ ��ĩ��Ϊan ������a1 ������n ������d Ҫ��ĩβ������n��Ҫ��ȥһ ����������һ���Ĳ��Ϊȥ��һ�������ǣ�n-1��d ����һ�ʼ ��������Ҫ���ϵ�һ��an=a1+��n-1��d"));
	ColPrintf(PrintfCol::����, Lang("3.������ʽ ����ĩ���Ƶ� an=a1+��n-1��d=>an/d=a1+��n-1��=>(an-a1)/d-=n-1=>(an-a1)/d+1=n �û��������������ĩ��Ĳ���������ĩ������� n=(an-a1)/d+1"));
	ColPrintf(PrintfCol::����, Lang("4.��˹��͹�ʽ �Ⱦٸ����ӣ�1��2��3��4����100 ����һ���Ȳ����� Ŀ�������� ���Ƿ���1��100��ϳ�101��2��99Ҳ���101����ÿ���������������һ����ͬ�ĺͣ���Ȼ������Ѿ�֪�� ���Ǿ�Ҫ�������۰���ȥ������� ���Ծ��ǣ���a1+an��*n��/2"));
}
void P54_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Equal Difference Sequence","P54����ר��A���γ̵�һ���һС�� �Ȳ�����"},
		{"The known arithmetic sequence is: 1, 4, 7, 10",
		"��һ����Ŀ����֪�Ȳ������ǣ�1��4��7��10����"},
		{"Question: Is item 2013 a number in the sequence? If it is a request to find out which item it is, and if it is not to find the nearest number of that column",
		"��Ŀ�����2013��"},
		{"1. Calculate the 13th item N1, which is equal to the first item N2+(total number N3- excess items N4) multiplied by the tolerance N5",
		"1.�����2013��N1 ��2013��N1=��������N2+(��������N3-�������N4)*����N5"},
		//������
		{"ThefirsttermN2inthesequence","��������N2"},
		{"TotalnumberofsequencesN3","��������N3"},
		{"ExcessitemsN4","�������N4"},
		{"ToleranceN5","����N5"},
		{"Item2013N1","��2013��N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��������N2, 1);
	DefineLangVarInt(��������N3, 2013);
	DefineLangVarInt(�������N4, 1);
	DefineLangVarInt(����N5, 3);
	ColPrintf(PrintfCol::����, Lang("P54����ר��A���γ̵�һ���һС�� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��һ����Ŀ����֪�Ȳ������ǣ�1��4��7��10����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����2013��"));
	DefineLangVarInt(��2013��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����2013��N1 ��2013��N1=��������N2+(��������N3-�������N4)*����N5"));
	��2013��N1 = ��������N2 + (��������N3 - �������N4) * ����N5;
	��2013��N1.PrintProcessLog(1);
}
void P54_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Question 1, Question 2, Equal Difference Sequence","P54����ר��A���γ̵�һ��ڶ�С�� �Ȳ�����"},
		{"Question: Is 2013 a number in this sequence? If it is, which item is it? If it is not in this sequence, which number is closest to it?",
		"��Ŀ��2013����������е�������������ǵڼ������������������������������������Ǹ�?"},
		{"1. Calculate the number of items N1. The number of items N1=(first item N2+last item N2)/tolerance N3+fewer items N4",
		"1.�������ڵ�����N1 ���ڵ�����N1=(����ĩ��N2-��������N2)/����N3+�ٵ�����N4"},
		{"2. Because it cannot be divided by the number of items, 2013 is not part of this sequence. We calculate its remainder to be 2, which is very close to the next number. Therefore, we add one to it",
		"2.��Ϊ���ܱ���������������2013����������е� ����������������2�����ϴ����Էǳ�������һ������������һ"},
		{"3. Calculate the number of items N1 that are close to each other. The number of items N1 is equal to (the first item N2 of the sequence+the last item N2 after increasing) divided by the tolerance N3 and the number of items N4 that are less",
		"3.����������ڵ�����N1 ������ڵ�����N1=(���Ӻ�����ĩ��N2-��������N2)/����N3+�ٵ�����N4"},
		//������
		{"ThefirsttermN2inthesequence","��������N2"},
		{"LasttermN2ofthesequence","����ĩ��N2"},
		{"ToleranceN3","����N3"},
		{"feweritemsN4","�ٵ�����N4"},
		{"AddthelasttermN2tothesequenceafteraddition","���Ӻ�����ĩ��N2"},
		{"NumberofitemsN1","���ڵ�����N1"},
		{"NumberofsimilaritemsN1","������ڵ�����N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float,��������N2, 1);
	DefineLangVar(float,����ĩ��N2, 2013);
	DefineLangVar(float,�ٵ�����N4, 1);
	DefineLangVar(float,����N3, 3);
	DefineLangVar(float,���Ӻ�����ĩ��N2, 2014);
	ColPrintf(PrintfCol::����, Lang("P54����ר��A���γ̵�һ��ڶ�С�� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��2013����������е�������������ǵڼ������������������������������������Ǹ�?"));
	DefineLangVar(float,���ڵ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�������ڵ�����N1 ���ڵ�����N1=(����ĩ��N2-��������N2)/����N3+�ٵ�����N4"));
	���ڵ�����N1 = (����ĩ��N2 - ��������N2) / ����N3 + �ٵ�����N4;
	���ڵ�����N1.PrintProcessLog(1);
	ColPrintf(PrintfCol::����, Lang("2.��Ϊ���ܱ���������������2013����������е� ����������������2�����ϴ����Էǳ�������һ������������һ"));
	DefineLangVar(float, ������ڵ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("3.����������ڵ�����N1 ������ڵ�����N1=(���Ӻ�����ĩ��N2-��������N2)/����N3+�ٵ�����N4"));
	������ڵ�����N1 = (���Ӻ�����ĩ��N2 - ��������N2) / ����N3 + �ٵ�����N4;
	������ڵ�����N1.PrintProcessLog(3);
}
void P54_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Question 1, Question 3, Equal Difference Sequence","P54����ר��A���γ̵�һ�����С�� �Ȳ�����"},
		{"Title: Sum All Numbers from 28 to 2013",
		"��Ŀ����28��2013���������֮��"},
		{"1. Calculate the 28th item and N1. The 28th item and N1=the first item N2+(the 28th item N3- the excess item N4) * tolerance N5",
		"1.�����28������N1 ��28������N1=��������N2+(���е�28������N3-�������N4)*����N5"},
		{"2. Calculate the number of items 2028th and N2. The number of items 2028th and N2=the first item N2+(the number of items in the 2028th item N3 minus the number of items N4) * tolerance N5",
		"2.�����2028������N2 ��2028������N2=��������N2+(���е�2028������N3-�������N4)*����N5"},
		{"3. Calculate the sum of items N3. The sum of items N3=(28th item and N1+2028th item and N2) * (2028th item and N3-28th item and N3+N4)/multiplier N5",
		"3.��������֮��N3 ����֮��N3=(��28������N1+��2028������N2)*(���е�2028������N3-���е�28������N3+�������N4)/����N5"},
		//������
		{"ThefirsttermN2inthesequence","��������N2"},
		{"NumberN3ofitem28inthesequence","���е�28������N3"},
		{"ExcessitemsN4","�������N4"},
		{"ToleranceN5","����N5"},
		{"NumberofitemsN3inthe2028thitemofthesequence","���е�2028������N3"},
		{"MagnificationN5","����N5"},
		{"The28thitemandN1","��28������N1"},
		{"2028thitemandN2","��2028������N2"},
		{"SumofitemsN3","����֮��N3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ��������N2, 1);
	DefineLangVar(float, ���е�28������N3, 28);
	DefineLangVar(float, �������N4, 1);
	DefineLangVar(float, ����N5, 3);
	DefineLangVar(float, ���е�2028������N3, 2028);
	DefineLangVar(float, ����N5, 2);
	ColPrintf(PrintfCol::����, Lang("P54����ר��A���γ̵�һ�����С�� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����28��2013���������֮��"));
	DefineLangVar(float, ��28������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����28������N1 ��28������N1=��������N2+(���е�28������N3-�������N4)*����N5"));
	��28������N1 = ��������N2 + (���е�28������N3 - �������N4) * ����N5;
	��28������N1.PrintProcessLog(1);
	DefineLangVar(float, ��2028������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����2028������N2 ��2028������N2=��������N2+(���е�2028������N3-�������N4)*����N5"));
	��2028������N2 = ��������N2 + (���е�2028������N3 - �������N4) * ����N5;
	��2028������N2.PrintProcessLog(2);
	DefineLangVar(float, ����֮��N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.��������֮��N3 ����֮��N3=(��28������N1+��2028������N2)*(���е�2028������N3-���е�28������N3+�������N4)/����N5"));
	����֮��N3 = (��28������N1 + ��2028������N2) * (���е�2028������N3 - ���е�28������N3 + �������N4) / ����N5;
	����֮��N3.PrintProcessLog(3);
}
void P54_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Question 2: arithmetic sequence","P54����ר��A���γ̵ڶ��� �Ȳ�����"},
		{"Title: Calculation of 2012 * 2011-2011 * 2010+2010 * 2009-2009 * 2008+2008 * 2007-2007 * 2006...+4 * 3-3 * 2+2 * 1",
		"��Ŀ������2012*2011-2011*2010+2010*2009-2009*2008+2008*2007-2007*2006����+4*3-3*2+2*1"},
		{"1. Classification addition and subtraction subtraction classification: Look at the first and second items, put forward the middle 2011 as 2011 * (2012-2010)+2009 * (20010-2008)+...+3 * (4-2)+2 * 1",
		"1.����Ӽ��� �������ࣺ����һ��ڶ�����м�2011��� 2011*(2012-2010)+2009*(20010-2008)+����+3*(4-2)+2*1"},
		{"2. Simplify the first step equation to obtain S2 2011 * 2+2009 * 2+...+3 * 2+2 * 1",
		"2.�����һ��ʽ�ӵõ�S2 2011*2+2009*2+����+3*2+2*1"},
		{"3. Simplify S2 to obtain S3 (2011+2009+...+3+2 +1) * 2",
		"3.����S2�õ�S3 (2011+2009+����+3+2+1)*2"},
		{"4. Calculate the sum of sequences N4. The sum of sequences N4=(the first term N1+the last term N1) * (the total number of items N2+the few items N3/the parity ratio N4)/the multiplier N5*the multiplier N5",
		"4.��������֮��N4 ����֮��N4=(��������N1+����ĩ��N1)*((������N2+�ٵ�����N3)/��ż����N4)/����N5*����N5"},
		//������
		{"ThefirsttermN1inthesequence","��������N1"},
		{"LasttermN1ofthesequence","����ĩ��N1"},
		{"TotalnumberofitemsN2","������N2"},
		{"FewitemsN3","�ٵ�����N3"},
		{"ParityratioN4","��ż����N4"},
		{"MagnificationN5","����N5"},
		{"SumofsequencesN4","����֮��N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, ��������N1, 2011);
	DefineLangVar(float, ����ĩ��N1, 1);
	DefineLangVar(float, ������N2, 2011);
	DefineLangVar(float, �ٵ�����N3, 1);
	DefineLangVar(float, ��ż����N4, 2);
	DefineLangVar(float, ����N5, 2);
	ColPrintf(PrintfCol::����, Lang("P54����ר��A���γ̵ڶ��� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������2012*2011-2011*2010+2010*2009-2009*2008+2008*2007-2007*2006����+4*3-3*2+2*1"));

	ColPrintf(PrintfCol::����, Lang("1.����Ӽ��� �������ࣺ����һ��ڶ�����м�2011��� 2011*(2012-2010)+2009*(20010-2008)+����+3*(4-2)+2*1"));
	ColPrintf(PrintfCol::����, Lang("2.�����һ��ʽ�ӵõ�S2 2011*2+2009*2+����+3*2+2*1"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 (2011+2009+����+3+2+1)*2"));
	DefineLangVar(float, ����֮��N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������֮��N4 ����֮��N4=(��������N1+����ĩ��N1)*((������N2+�ٵ�����N3)/��ż����N4)/����N5*����N5"));
	����֮��N4 = (��������N1 + ����ĩ��N1) * ((������N2 + �ٵ�����N3) / ��ż����N4) / ����N5* ����N5;
	����֮��N4.PrintProcessLog(4);
	
}
void P54_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P54 Calculation Special A-level Course Question 3: Isometric Sequence","P54����ר��A���γ̵����� �Ȳ�����"},
		{"Title: There is a batch of bricks on the construction site. The top layer has 2 bricks, the second layer has 6 bricks, the third layer has 10 bricks, and so on. Each layer has 4 more bricks, and the bottom layer has 2106 bricks. How many bricks are there in this pile?",
		"��Ŀ��������һ��ש���ݳ���������2��ש���ڶ���6�飬������10�飬�Դ����ƣ�ÿ���4�飬���²���2106��ש���м�һ���ж��ٿ飬���ת���ж��ٿ�?"},
		{"1. Calculate the total number of layers N1=(total quantity N2- first layer quantity N3)/sequence tolerance N4+fewer layers N5",
		"1.����һ���Ĳ���N1 һ���Ĳ���N1=(�ܹ�����N2-��һ������N3)/���й���N4+�ٵĲ���N5"},
		{"2. Calculate the number of layers N2 in the middle. The number of layers N2 in the middle is equal to (the total number of layers N1+the odd number is not enough plus one N3) divided by the magnification N5",
		"2.�����м�Ĳ���N2 �м�Ĳ���N2=(һ���Ĳ���N1+������������һN3)/����N5"},
		{"3. Calculate the middle layer N3=the number of first layers N3+(the middle layer N2 minus the few layers N5) * the sequence tolerance N4",
		"3.�����м�һ��N3 �м�һ��N3=��һ������N3+(�м�Ĳ���N2-�ٵĲ���N5)*���й���N4"},
		{"4. Calculate the number of shared blocks N4=middle layer N3 * total number of layers N1",
		"4.���㹲�еĿ���N4 ���еĿ���N4=�м�һ��N3*һ���Ĳ���N1"},
		//������
		{"TotalquantityN2","�ܹ�����N2"},
		{"NumberoffirstlayerN3","��һ������N3"},
		{"Theoddnumberisnotenough,plusoneN3","������������һN3"},
		{"MagnificationN5","����N5"},
		{"SequencetoleranceN4","���й���N4"},
		{"FewerlayersN5","�ٵĲ���N5"},
		{"ThetotalnumberoflayersN1","һ���Ĳ���N1"},
		{"MiddlelayerN2","�м�Ĳ���N2"},
		{"MiddlelayerN3","�м�һ��N3"},
		{"NumberofsharedblocksN4","���еĿ���N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVar(float, �ܹ�����N2, 2106);
	DefineLangVar(float, ��һ������N3, 2);
	DefineLangVar(float, ������������һN3, 1);
	DefineLangVar(float, ���й���N4, 4);
	DefineLangVar(float, �ٵĲ���N5, 1);
	DefineLangVar(float, ����N5, 2);
	ColPrintf(PrintfCol::����, Lang("P54����ר��A���γ̵����� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������һ��ש���ݳ���������2��ש���ڶ���6�飬������10�飬�Դ����ƣ�ÿ���4�飬���²���2106��ש���м�һ���ж��ٿ飬���ת���ж��ٿ�?"));
	DefineLangVar(float, һ���Ĳ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ���Ĳ���N1 һ���Ĳ���N1=(�ܹ�����N2-��һ������N3)/���й���N4+�ٵĲ���N5"));
	һ���Ĳ���N1 = (�ܹ�����N2 - ��һ������N3) / ���й���N4 + �ٵĲ���N5;
	һ���Ĳ���N1.PrintProcessLog(1);
	DefineLangVar(float, �м�Ĳ���N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.�����м�Ĳ���N2 �м�Ĳ���N2=(һ���Ĳ���N1+������������һN3)/����N5"));
	�м�Ĳ���N2 = (һ���Ĳ���N1 + ������������һN3) / ����N5;
	�м�Ĳ���N2.PrintProcessLog(2);
	DefineLangVar(float, �м�һ��N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����м�һ��N3 �м�һ��N3=��һ������N3+(�м�Ĳ���N2-�ٵĲ���N5)*���й���N4"));
	�м�һ��N3 = ��һ������N3 + (�м�Ĳ���N2 - �ٵĲ���N5) * ���й���N4;
	�м�һ��N3.PrintProcessLog(3);
	DefineLangVar(float, ���еĿ���N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.���㹲�еĿ���N4 ���еĿ���N4=�м�һ��N3*һ���Ĳ���N1"));
	���еĿ���N4 = �м�һ��N3 * һ���Ĳ���N1;
	���еĿ���N4.PrintProcessLog(4);
}
void P54()
{
	P54_formula();
	ColPrintf(PrintfCol::����, "");
	P54_1();
	ColPrintf(PrintfCol::����, "");
	P54_2();
	ColPrintf(PrintfCol::����, "");
	P54_3();
	ColPrintf(PrintfCol::����, "");
	P54_4();
	ColPrintf(PrintfCol::����, "");
	P54_5();
	ColPrintf(PrintfCol::����, "");
}
void P54_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P54();
	Lang.SetCurLanguage(LanguageLib::English);
	P54();
	ColPrintf(PrintfCol::����, "");

}