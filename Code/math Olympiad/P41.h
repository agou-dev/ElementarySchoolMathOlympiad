#pragma once
void P41_1()
{
	LanguageLib::LanguageTableT Language = {
		
		{"P41 Example 1: Addition and multiplication problem","P41��һ �ӳ�����"},
		{"Question: How many combinations of RMB 5 cents, 2 cents, and 1 cent make up 1 yuan?",
		"��Ŀ������ҵ�5�ǣ�2�ǣ�1���ж�������ϳ�1Ԫ?"},
		{"Analysis: For this problem, we can first enumerate the cases where 5 corners are 0 and 2 corners are 0. Increasing the number of 2 corners by\n 1 will result in a decrease. After enumerating the cases where 5 corners are 0, we can add the number of 5 corners and add the total count to\nobtain the result.",
		"����:����������⣬���ǿ����Ȱ�5��Ϊ0��2��Ϊ0��ö�ٳ�����2������1�Ǿͻ���٣���5��Ϊ0��ö�ٳ�����Ϳ������5����������ͳ�Ƶĸ�����ӵõ���"},
		{"Five corners with 0: 0 with 2 corners, 10 with 1 corner; 1 with 2 corners, 8 with 1 corner; 2 pieces with 2 corners, 6 pieces with 1 corner;\n 3 pieces with 2 corners, 4 pieces with 1 corner; 4 pieces with 2 corners, 2 pieces with 1 corner;\n5 pieces with 2 corners, 0 pieces with 1 corner;",
		"���Ϊ0�ģ�0��2�ǵģ�10��1�ǵģ�1��2�ǵģ�8��1�ǵģ�2��2�ǵģ�6��1�ǵģ�3��2�ǵģ�4��1�ǵģ�4��2�ǵģ�2��1�ǵģ�5��2�ǵģ�0��1�ǵ�"},
		{"Five corners with 1: 0 with 2 corners, 5 with 1 corner; 1 with 2 corners, 3 with 1 corner; 2 pieces with 2 corners, 1 piece with 1 corner;",
		"���Ϊ1�ģ�0��2�ǵģ�5��1�ǵģ�1��2�ǵģ�3��1�ǵģ�2��2�ǵģ�1��1�ǵģ�"},
		{"The pentagon is 2: 0 with 2 angles, 0 with 1 angle;",
		"���Ϊ2�ģ�0��2�ǵģ�0��1�ǵģ�" },
		{"1. Calculate the total number of combinations N1=the total number of pentagons with 0, N2+the total number of pentagons with 1, N2+the total number of pentagons with 1, N2",
		"1.����һ���������N1 һ���������N1=���Ϊ0��������N2+���Ϊ1��������N2+���Ϊ2��������N3" },
		//������
		{"Thetotalnumberofpentagonswith0isN2","���Ϊ0��������N2"},
		{"ThetotalnumberN2withonepentagon","���Ϊ1��������N2"},
		{"ThetotalnumberN2with2pentagon","���Ϊ2��������N3"},
		{"ThetotalnumberofcombinationsN1","һ���������N1"},
		
	};
	Lang.AddLanguageTable(
		Language
	);
	
	DefineLangVarInt(���Ϊ0��������N2, 6);
	DefineLangVarInt(���Ϊ1��������N2, 3);
	DefineLangVarInt(���Ϊ2��������N3, 1);
	ColPrintf(PrintfCol::����, Lang("P41��һ �ӳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������ҵ�5�ǣ�2�ǣ�1���ж�������ϳ�1Ԫ?"));
	ColPrintf(PrintfCol::����, Lang("����:����������⣬���ǿ����Ȱ�5��Ϊ0��2��Ϊ0��ö�ٳ�����2������1�Ǿͻ���٣���5��Ϊ0��ö�ٳ�����Ϳ������5����������ͳ�Ƶĸ�����ӵõ���"));
	ColPrintf(PrintfCol::����, Lang("���Ϊ0�ģ�0��2�ǵģ�10��1�ǵģ�1��2�ǵģ�8��1�ǵģ�2��2�ǵģ�6��1�ǵģ�3��2�ǵģ�4��1�ǵģ�4��2�ǵģ�2��1�ǵģ�5��2�ǵģ�0��1�ǵ�"));
	ColPrintf(PrintfCol::����, Lang("���Ϊ1�ģ�0��2�ǵģ�5��1�ǵģ�1��2�ǵģ�3��1�ǵģ�2��2�ǵģ�1��1�ǵģ�"));
	ColPrintf(PrintfCol::����, Lang("���Ϊ2�ģ�0��2�ǵģ�0��1�ǵģ�"));
	DefineLangVarInt(һ���������N1, 0);
	

	ColPrintf(PrintfCol::����, Lang("1.����һ���������N1 һ���������N1=���Ϊ0��������N2+���Ϊ1��������N2+���Ϊ2��������N3"));
	һ���������N1 = ���Ϊ0��������N2 + ���Ϊ1��������N2 + ���Ϊ2��������N3;
	һ���������N1.PrintProcessLog(1);
	
}
void P41_2()
{

	LanguageLib::LanguageTableT Language = {
		
		{"P41 Example 2: Addition and multiplication problem","P41���� �ӳ�����"},
		{"Question: How many three digit numbers are there that add up to 24?",
		"��Ŀ����λ����λ��֮����24���м�����λ����"},
		{"analysis; When we do this question, we can start by looking at the numbers in the hundreds, starting from 9, and continue to calculate downwards like the previous question",
		"����;�����������ʱ��������һ����һ���ȿ���λ�ϵ�������9��ʼ��һֱ��������Ϳɵó�"},
		{"When the hundredth digit is 9: 24-9=15=the tenth digit is 9+the sixth digit is 6; Ten digits are 6+and six digits are 9; Ten digits are 8+seven digits are 7; Ten digits are 7+and one digit is 8",
		"��λ��9ʱ��24-9=15=ʮλ��9+��λ��6��ʮλ��6+��λ��9��ʮλ��8+��λ��7��ʮλ��7+��λ��8"},
		{"When the hundredth digit is 8 o'clock: 24-8=16=the tenth digit is 9+the tenth digit is 7; Ten digits are 7+and nine digits are 9; Ten digits are 8+one digit is 8",
		"��λ��8ʱ��24-8=16=ʮλ��9+��λ��7��ʮλ��7+��λ��9��ʮλ��8+��λ��8"},
		{"When the hundredth digit is 7: 24-7=17=the tenth digit is 9+the tenth digit is 8; Ten digits are 8+and nine digits are 9",
		"��λ��7ʱ��24-7=17=ʮλ��9+��λ��8��ʮλ��8+��λ��9"},
		{"When the hundredth digit is 6: 24-6=18=the tenth digit is 9+the tenth digit is 9;",
		"��λ��6ʱ��24-6=18=ʮλ��9+��λ��9��"},
		{"When the hundredth digit is 5: 24-6=19, without any digit added up, it is 19",
		"��λ��5ʱ��24-6=19û���κ�һλ�����19"},
		{"1. Calculate the total number of three digits N1. The total number of three digits N1=when the hundredth\ndigit is 9, the number of species N1+when the hundredth digit is 8, the number of species N2+when the hundredth digit is 7, the number of species N3+when\nthe hundredth digit is 6, the number of species N4",
		"1.����һ������λ��N1 һ������λ��N1=��λ��9ʱ����N1+��λ��8ʱ����N2+��λ��7ʱ����N3+��λ��6ʱ����N4"},
		//������
		{"ThehundredthdigitisthenumberofspeciesN1at9o'clock","��λ��9ʱ����N1"},
		{"HundreddigitisthenumberofspeciesN2at8o'clock","��λ��8ʱ����N2"},
		{"AhundreddigitsisthenumberN3at7o'clock","��λ��7ʱ����N3"},
		{"Hundreddigitisthe6thdigitofN4","��λ��6ʱ����N4"},
		{"A total of three digits N1","һ������λ��N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��λ��9ʱ����N1, 4);
	DefineLangVarInt(��λ��8ʱ����N2, 3);
	DefineLangVarInt(��λ��7ʱ����N3, 2);
	DefineLangVarInt(��λ��6ʱ����N4, 1);
	ColPrintf(PrintfCol::����, Lang("P41���� �ӳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����λ����λ��֮����24���м�����λ����"));
	ColPrintf(PrintfCol::����, Lang("����;�����������ʱ��������һ����һ���ȿ���λ�ϵ�������9��ʼ��һֱ��������Ϳɵó�"));
	ColPrintf(PrintfCol::����, Lang("��λ��9ʱ��24-9=15=ʮλ��9+��λ��6��ʮλ��6+��λ��9��ʮλ��8+��λ��7��ʮλ��7+��λ��8"));
	ColPrintf(PrintfCol::����, Lang("��λ��8ʱ��24-8=16=ʮλ��9+��λ��7��ʮλ��7+��λ��9��ʮλ��8+��λ��8"));
	ColPrintf(PrintfCol::����, Lang("��λ��7ʱ��24-7=17=ʮλ��9+��λ��8��ʮλ��8+��λ��9"));
	ColPrintf(PrintfCol::����, Lang("��λ��6ʱ��24-6=18=ʮλ��9+��λ��9��"));
	ColPrintf(PrintfCol::����, Lang("��λ��5ʱ��24-6=19û���κ�һλ�����19"));
	DefineLangVarInt(һ������λ��N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ������λ��N1 һ������λ��N1=��λ��9ʱ����N1+��λ��8ʱ����N2+��λ��7ʱ����N3+��λ��6ʱ����N4"));
	һ������λ��N1 = ��λ��9ʱ����N1 + ��λ��8ʱ����N2 + ��λ��7ʱ����N3 + ��λ��6ʱ����N4;
	һ������λ��N1.PrintProcessLog(1);
}
void P41_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P41 Example 3: Addition and multiplication problem","P41���� �ӳ�����"},
		{"Title: How many combinations are there for 4 meat dishes, 3 vegetable dishes, and 2 soups?",
		"��Ŀ��4�ֻ�ˣ�3���زˣ�2������ѡһ����һ���ж����ִ���?"},
		{"Analysis: We can cross sort this question, but we can also look at the first two rankings and add the ones that come after them. For example,\nwe can number the first two, 0, 1, 2, 3..., and sort them in order to get 0-0, 0-1, 0-2, 0-3... We can observe that these are just a few digits,\nand multiplying them yields",
		"��������������ǿ��Զ����������򣬵�Ҳ�����ȿ�ǰ�������򣬰Ѻ���ļ��Ͼ����ˣ��������ǰ�ǰ�������Ϻţ�0��1��2��3��������˳���ž���0-0��0-1��0-2��0-3�������ǹ۲���Է�������Ǽ���������˿ɵ�"},
		{"When the meat dishes are% d, the vegetable dishes are% d, and the soup is% d",
		"�����%dʱ���ز���%d������%d"},
		{"1. Calculate the total number of combinations N1=number of meat dishes N2 * number of vegetables N3 * number of soups N4",
		"1.����һ���Ĵ�����N1 һ���Ĵ�����N1=�������N2*�ز�����N3*������N4"},
		//������
		{"NumberofmeatdishesN2","�������N2"},
		{"NumberofvegetariandishesN3","�ز�����N3"},
		{"SouptypeN4","������N4"},
		{"ThetotalnumberofcombinationsN1","һ���Ĵ�����N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�������N2, 4);
	DefineLangVarInt(�ز�����N3, 3);
	DefineLangVarInt(������N4, 2);
	ColPrintf(PrintfCol::����, Lang("P41���� �ӳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��4�ֻ�ˣ�3���زˣ�2������ѡһ����һ���ж����ִ���?"));
	ColPrintf(PrintfCol::����, Lang("��������������ǿ��Զ����������򣬵�Ҳ�����ȿ�ǰ�������򣬰Ѻ���ļ��Ͼ����ˣ��������ǰ�ǰ�������Ϻţ�0��1��2��3��������˳���ž���0-0��0-1��0-2��0-3�������ǹ۲���Է�������Ǽ���������˿ɵ�"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1;i <= 4;i++)
	{
		for ( j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 2;k++)
			{
				ColPrintf(PrintfCol::����, Lang("�����%dʱ���ز���%d������%d"),i,j,k);
				h++;
			}
		}
	};
	DefineLangVarInt(һ���Ĵ�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ���Ĵ�����N1 һ���Ĵ�����N1=�������N2*�ز�����N3*������N4"));
	һ���Ĵ�����N1 = �������N2 * �ز�����N3 * ������N4;
	һ���Ĵ�����N1.PrintProcessLog(1);
}
void P41_4_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P41 Example 4 First question: Addition and multiplication problem","P41���ĵ�һС�� �ӳ�����"},
		{"Title: Use numbers 0, 2, 4, 5, and 7 to form a unique four digit number",
		"��Ŀ����0��2��4��5��7��Щ����������ظ�����λ��"},
		{"When the thousand bit is% s, the hundred bit is% s, the ten bit is% s, and the single bit is% s",
		"��ǧλʱ%sʱ����λ��%s��ʮλ��%s����λ��%s"},
		{"There are a total of %d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P41���ĵ�һС�� �ӳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����0��2��4��5��7��Щ����������ظ�����λ��"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int n1 = 0;
	int k1 = 0;
	char col[6][16];
	for (i = 1;i <= 5;i++)
	{
		if (i == 1)
		{
			strcpy(&col[i][0], "0 ");
		}
		if (i == 2)
		{
			strcpy(&col[i][0], "2 ");
		}
		if (i == 3)
		{
			strcpy(&col[i][0], "4 ");
		}
		if (i == 4)
		{
			strcpy(&col[i][0], "5 "); ;
		}
		if (i == 5)
		{
			strcpy(&col[i][0], "7 "); ;
		}
	}
	n1 = 0;
	
	for (i = 2;i <= 5;i++)
	{


		for (j = 1;j <= 4;j++)
		{
			for (k = 1;k <= 3;k++)
			{
				for (k1 = 1;k1 <= 2;k1++)
				{
					
					
						ColPrintf(PrintfCol::����, Lang("��ǧλʱ%sʱ����λ��%s��ʮλ��%s����λ��%s"), &col[i][0],&col[j][0], &col[k][0], &col[k1][0]);
						n1++;
						h++;
					
					
				}

			}
		}
	};
	ColPrintf(PrintfCol::����, Lang("һ����%d��"), h);
}
void P41_4_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P41 Example 4 Second question: Addition and multiplication problem","P41���ĵڶ�С�� �ӳ�����"},
		{"Title: Use numbers 0, 2, 4, 5, and 7 to form an even four digit number without repetition",
		"��Ŀ����0��2��4��5��7��Щ����������ظ�����λż��"},
		{"When the parity is% s in the thousands, the hundreds are% s, the tens are% s, and the units are% s",
		"��ż��ǧλʱ%sʱ����λ��%s��ʮλ��%s����λ��%s"},
		{"When the thousand bit is% s, the hundred bit is% s, the ten bit is% s, and the single bit is% s",
		"�浱ǧλʱ%sʱ����λ��%s��ʮλ��%s����λ��%s"},
		{"There are a total of% d types of parity",
		"��żһ����%d��"},
		{"There are a total of% d odd numbers",
		"����һ����%d��"},
		{"There are a total of% d types",
		"һ����%d��"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P41���ĵڶ�С�� �ӳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����0��2��4��5��7��Щ����������ظ�����λż��"));
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int n1 = 0;
	int k1 = 0;
	int MeThis=0;
	char col[6][16];
	for (i = 1;i <= 5;i++)
	{
		if (i == 1)
		{
			strcpy(&col[i][0], "0 ");
		}
		if (i == 2)
		{
			strcpy(&col[i][0], "2 ");
		}
		if (i == 3)
		{
			strcpy(&col[i][0], "4 ");
		}
		if (i == 4)
		{
			strcpy(&col[i][0], "5 "); ;
		}
		if (i == 5)
		{
			strcpy(&col[i][0], "7 "); ;
		}
	}
	n1 = 0;

	for (i = 2;i <= 5;i++)
	{


		for (j = 1;j <= 4;j++)
		{
			for (k = 1;k <= 3;k++)
			{
				for (k1 = 1;k1 <= 2;k1++)
				{


					ColPrintf(PrintfCol::����, Lang("��ż��ǧλʱ%sʱ����λ��%s��ʮλ��%s����λ��%s"), &col[i][0], &col[j][0], &col[k][0], &col[k1][0]);
					n1++;
					h++;


				}

			}
		}
	};
	n1 = 0;
	
	ColPrintf(PrintfCol::����, Lang("��żһ����%d��"), h);
	n1 = 0;

	for (i = 2;i <= 4;i++)
	{


		for (j = 1;j <= 3;j++)
		{
			for (k = 1;k <= 2;k++)
			{
				for (k1 = 5;k1 >= 4;k1--)
				{


					ColPrintf(PrintfCol::����, Lang("�浱ǧλʱ%sʱ����λ��%s��ʮλ��%s����λ��%s"), &col[i][0], &col[j][0], &col[k][0], &col[k1][0]);
					n1++;
					MeThis++;


				}

			}
		}
	};
	ColPrintf(PrintfCol::����, Lang("����һ����%d��"), MeThis);
	ColPrintf(PrintfCol::����, Lang("һ����%d��"),h- MeThis);
}
void P41()
{
	P41_1();
	ColPrintf(PrintfCol::����, "");
	P41_2();
	ColPrintf(PrintfCol::����, "");
	P41_3();
	ColPrintf(PrintfCol::����, "");
	P41_4_1();
	ColPrintf(PrintfCol::����, "");
	P41_4_2();
	ColPrintf(PrintfCol::����, "");
}
void P41_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P41();
	Lang.SetCurLanguage(LanguageLib::English);
	P41();
	ColPrintf(PrintfCol::����, "");

}