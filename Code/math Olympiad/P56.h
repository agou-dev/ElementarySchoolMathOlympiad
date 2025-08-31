#pragma once
void P56_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P56 Elementary School Olympiad Math A-level Course Example Seven arithmetic sequence","P56Сѧ����A���γ� ���� �Ȳ�����"},
		{"Question: Xiaoming practices abacus. He sums up natural numbers from the beginning. When he adds a certain number, the sum is 2013, but he finds that one number is missing. What is this number?",
		"��Ŀ��С����ϰ�����̣���������Ȼ����˳���һ��ʼ��ͣ����ӵ�ĳ����ʱ������2013�����������ټ���һ������������Ƕ���?"},
		{"1. Let the end and number of items be n, and this number be x",
		"1.��ĩβ������Ϊn �����Ϊx"},
		{"2. List the arithmetic sequence 1+2+3+4+...+n",
		"2.�г��Ȳ����� 1+2+3+4+����+n"},
		{"3. List the equation S1 n * (n+1)=2013+x based on the arithmetic sequence and formula",
		"3.���ݵȲ����к͹�ʽ�г�ʽ��S1 n*(n+1)/2=2013+x"},
		{"4. Expand equation S1 to obtain S2 n * (n+1)=(2013+x) * 2",
		"4.չ��ʽ��S1�õ�S2 n*(n+1)=(2013+x)*2"},
		{"5. Simplify S2 to obtain S3 n * (n+1)=4026+2x",
		"5.����S2�õ�S3 n*(n+1)=4026+2x"},
		{"6. Because the calculation is missing, the correct value must be greater than n * n, which must be greater than 4026. Assuming n=63, 63 * 63=3969, 64 * 64=4096, take the middle value of 63 * 64=4032, so 4032-4026=6",
		"6.��Ϊ������������ȷ�ı���Ҫ�� n*n�����4026�� ��Ϊ����n=63 63*63=3969 64*64=4096 ȡ�м�ֵ 63*64=4032 ����4032-4026=6"},
		{"7. Simplify S7 by listing equation S8 4032=4026+2x=>2x=4032-4026=>x=6/2=>3",
		"7.����S7�г�ʽ��S8 4032=4026+2x=>2x=4032-4026=>x=6/2=>3"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P56Сѧ����A���γ� ���� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��С����ϰ�����̣���������Ȼ����˳���һ��ʼ��ͣ����ӵ�ĳ����ʱ������2013�����������ټ���һ������������Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.��ĩβ������Ϊn �����Ϊx"));
	ColPrintf(PrintfCol::����, Lang("2.�г��Ȳ����� 1+2+3+4+����+n"));
	ColPrintf(PrintfCol::����, Lang("3.���ݵȲ����к͹�ʽ�г�ʽ��S1 n*(n+1)/2=2013+x"));
	ColPrintf(PrintfCol::����, Lang("4.չ��ʽ��S1�õ�S2 n*(n+1)=(2013+x)*2"));
	ColPrintf(PrintfCol::����, Lang("5.����S2�õ�S3 n*(n+1)=4026+2x"));
	ColPrintf(PrintfCol::����, Lang("6.��Ϊ������������ȷ�ı���Ҫ�� n*n�����4026�� ��Ϊ����n=63 63*63=3969 64*64=4096 ȡ�м�ֵ 63*64=4032 ����4032-4026=6"));
	ColPrintf(PrintfCol::����, Lang("7.����S7�г�ʽ��S8 4032=4026+2x=>2x=4032-4026=>x=6/2=>3"));
}
void P56_1_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P56 Primary School Olympiad Math A - level Course Example Seven : Extended arithmetic sequence","P56Сѧ����A���γ� ������չ �Ȳ�����"},
		{"Title: Ning Ning practices mental arithmetic. He sums natural numbers in the order they are added from the beginning. When he adds a certain number, the sum is 888. However, he finds that he has repeated the addition of another number. What is this number?",
		"��Ŀ��������ϰ���㣬��������Ȼ����˳���һ��ʼ��ͣ����ӵ�ĳ����ʱ������888�����������ظ�����һ������������Ƕ���?"},
		{"1. Let the end and number of items be n, and this number be x",
		"1.��ĩβ������Ϊn �����Ϊx"},
		{"2. List the arithmetic sequence 1+2+3+4+...+n",
		"2.�г��Ȳ����� 1+2+3+4+����+n"},
		{"3. List the equation S1 n * (n+1)/2=888-x based on the arithmetic sequence and formula",
		"3.���ݵȲ����к͹�ʽ�г�ʽ��S1 n*(n+1)/2=888-x"},
		{"4. Expand equation S1 to obtain S2 n * (n+1)=(888-x) * 2",
		"4.չ��ʽ��S1�õ�S2 n*(n+1)=(888-x)*2"},
		{"5. Simplify S2 to obtain S3 n * (n+1)=1776-2x",
		"5.����S2�õ�S3 n*(n+1)=1776-2x"},
		{"6. Because there are too many calculations, the correct one must be smaller. n * n must be smaller than 1776 because the trial calculation is 40 * 41=1640, 41 * 42=1772, so 1776-1772=4",
		"6.��Ϊ�����������ȷ�ı���ҪС n*n�����1776С ��Ϊ���� 40*41=1640 41*42=1772 ����1776-1772=4"},
		{"7. Simplify S7 by listing equation S8 1772=1776-2x=>2x=1776-1772=>x=4/2=>2",
		"7.����S7�г�ʽ��S8 1772=1776-2x=>2x=1776-1772=>x=4/2=>2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P56Сѧ����A���γ� ������չ �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������ϰ���㣬��������Ȼ����˳���һ��ʼ��ͣ����ӵ�ĳ����ʱ������888�����������ظ�����һ������������Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.��ĩβ������Ϊn �����Ϊx"));
	ColPrintf(PrintfCol::����, Lang("2.�г��Ȳ����� 1+2+3+4+����+n"));
	ColPrintf(PrintfCol::����, Lang("3.���ݵȲ����к͹�ʽ�г�ʽ��S1 n*(n+1)/2=888-x"));
	ColPrintf(PrintfCol::����, Lang("4.չ��ʽ��S1�õ�S2 n*(n+1)=(888-x)*2"));
	ColPrintf(PrintfCol::����, Lang("5.����S2�õ�S3 n*(n+1)=1776-2x"));
	ColPrintf(PrintfCol::����, Lang("6.��Ϊ�����������ȷ�ı���ҪС n*n�����1776С ��Ϊ���� 40*41=1640 41*42=1772 ����1776-1772=4"));
	ColPrintf(PrintfCol::����, Lang("7.����S7�г�ʽ��S8 1772=1776-2x=>2x=1776-1772=>x=4/2=>2"));
}
void P56_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P56 Primary School Olympiad Math A-level Course Example 8: Extended arithmetic sequence","P56Сѧ����A���γ� ������չ �Ȳ�����"},
		{"Title: Several small boxes are placed in a row. Xiao Ming puts 50 chess pieces into a box, and one box has no chess pieces. Xiao Guang takes one chess piece from each box with chess pieces and puts it in the box. Xiao Ming comes back to check the box and doesn't find anyone moving it. How many boxes are there?",
		"��Ŀ�����ɸ�С���ӷų�һ�ţ�С����50������ӷ�������У�һ������û�����ӣ�С��������ӵĺ��Ӹ�����һֻ���ӷ�������������λ�ã�С����������˺��Ӳ��޷������˶��������Ӹ����м���?"},
		{"1. According to the question, the number of boxes must be 1. After taking it, the empty box will be swapped, and the number of chess pieces in each box will be reduced by one. After taking the empty box, it must be the number of boxes. Otherwise, the condition cannot be met",
		"1.�������⣬��һ�����ӵĸ����ض���1�����������Ǹ��պ��ӵ���λ�ã�ÿһ���������Ӹ�����Ҫ��һ���պ��������ض����Ǻ��ӵĸ�������Ȼ�����޷�����"},
		{"According to the condition established in the first step, it is an arithmetic sequence: 1+2+3+4+...+n",
		"2.���ݵ�һ��������������������һ���Ȳ����У�1+2+3+4+����+n"},
		{"3. List the sequence of n+0+1+2+3+... n-1 after swapping chess pieces",
		"3.�г����ӵ���������� n+0+1+2+3+����n-1"},
		{"4. After listing the sequence, the arithmetic sequence must be over 50. Below are the arithmetic sequences from 1 to n",
		"4.�г����к�Ȳ����бض���50�� ������ö��1��n�Ȳ�����"},
		{"5. There are a total of% d results:% d",
		"5.һ����%d�� �����%d"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P56Сѧ����A���γ� ������չ �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����ɸ�С���ӷų�һ�ţ�С����50������ӷ�������У�һ������û�����ӣ�С��������ӵĺ��Ӹ�����һֻ���ӷ�������������λ�ã�С����������˺��Ӳ��޷������˶��������Ӹ����м���?"));
	ColPrintf(PrintfCol::����, Lang("1.�������⣬��һ�����ӵĸ����ض���1�����������Ǹ��պ��ӵ���λ�ã�ÿһ���������Ӹ�����Ҫ��һ���պ��������ض����Ǻ��ӵĸ�������Ȼ�����޷�����"));
	ColPrintf(PrintfCol::����, Lang("2.���ݵ�һ��������������������һ���Ȳ����У�1+2+3+4+����+n"));
	ColPrintf(PrintfCol::����, Lang("3.�г����ӵ���������� n+0+1+2+3+����n-1"));
	ColPrintf(PrintfCol::����, Lang("4.�г����к�Ȳ����бض���50�� ������ö��1��n�Ȳ�����"));
	int i = 0;
	int j = 0;
	int h = 0;
	int k = 0;
	int k1 = 0;
	int u = -1;
	bool bOK=0;
	for (;;)
	{
		for (;i <= h;i++)
		{
			k = k+1;
			k1 = k1 + k;
			ColPrintf(PrintfCol::����, Lang("5.һ����%d�� �����%d"), i, k1);
			if (k1 >= 50)
			{
				bOK = 1;
				break;

			}
			
			
			
		}
		if (bOK == 1)
		{
			break;
		}

		h++;
	}
}
void P56()
{
	P56_1();
	ColPrintf(PrintfCol::����, "");
	P56_1_1();
	ColPrintf(PrintfCol::����, "");
	P56_2();
	ColPrintf(PrintfCol::����, "");
}
void P56_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P56();
	Lang.SetCurLanguage(LanguageLib::English);
	P56();
	ColPrintf(PrintfCol::����, "");

}