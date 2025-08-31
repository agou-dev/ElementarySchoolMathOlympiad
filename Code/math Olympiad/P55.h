#pragma once
/*struct TreeVex
{
	int nLevel; //���
	int nNodeIndex;
	ScanningLine<10, 10, 18, 8>::Point Vex;//��������
};*/
void P55_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Special A-level Course Question 4: Isometric Sequence","P55����ר��A���γ̵����� �Ȳ�����"},
		{"Question: Observe the number matrix below. What is the leftmost number in line 20, and what is the sum of all the numbers in line 20?",
		"��Ŀ���۲���������󣬵�20������ߵ����Ǽ����ڶ�ʮ�����е����ĺ��Ƕ���?"},
		{"1. List the arithmetic sequence 1+(1+3+5+7+...)",
		"1.�г��Ȳ����� 1+(1+3+5+7+����)"},
		{"2. Calculate the last number N1. The last number N1 is equal to the first item sequence N1+((N1- the number of items N2) multiplied by N3- the number of items N2",
		"2.�������һ����N1 ���һ����N1=(��������N1+((����N1-�������N2)))*����N3-�������N2"},
		{"3. Calculate the total number and N2 total number and N2=first number N1+((first term N2+last number N1) * number of terms N4/multiplier N3)",
		"3.�����ܹ�����N2 �ܹ�����N2=��һ����N1+((��һ��N2+���һ����N1)*(����N1 - �������N2)/����N3)"},
		//������
		{"ThefirstsequenceN1","��������N1"},
		{"NumberofitemsN1","����N1"},
		{"MultipleitemsN2","�������N2"},
		{"MagnificationN3","����N3"},
		{"ThefirstitemN2","��һ��N2"},
		{"ThelastnumberN1","���һ����N1"},
		{"TotalnumberandN2","�ܹ�����N2"},
	};
	Lang.AddLanguageTable(
		Language
	);

	DefineLangVarInt(��������N1, 1);
	DefineLangVarInt(����N1, 20);
	DefineLangVarInt(�������N2, 1);
	DefineLangVarInt(��һ��N2, 1);
	DefineLangVarInt(����N3, 2);

	ColPrintf(PrintfCol::����, Lang("P55����ר��A���γ̵����� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���۲���������󣬵�20������ߵ����Ǽ����ڶ�ʮ�����е����ĺ��Ƕ���?"));
	typedef ScanningLine<10, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	
	/*float off = 0.5;
	float offXY = 0.5;
	int k = 0;
	int k1 = 1;
	int l = 0.5;
	int o = 1;
	char* kkk = new char[255];
	for (int a = 1;a <= 5;a++)
	{
		for (int a1 = 0;a1 <= k;a1++)
		{
			if (a == 1)
			{
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, 0.5, 0.5, '*', 0);
				sprintf(kkk, "%d", o);
				test.AddText(PrintfCol::�����ע, k1, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, kkk);
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, 8 / 2 + 1 - offXY + a * 0.5 + 0.5, -0.5, -0.5, '*', 0);


			}
			else
			{
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5, 8 / 2 + 1 - offXY + a * 0.5, 0.5, 0.5, '*', 0);
				sprintf(kkk, "%d", o);
				test.AddText(PrintfCol::�����ע, k1, 8 / 2 + 1 - offXY + a * 0.5, kkk);
				test.AddScanLineByEdgeGradient(k1, 1.0, 8 / 2 + 1 - offXY + a * 0.5, 8 / 2 + 1 - offXY + a * 0.5, -0.5, -0.5, '*', 0);
			}
			o++;


			offXY = offXY + 1;
		}
		l = l + 0.5;
		offXY = 0;
		k1++;
		k++;
	}*/
	
	int jjj[26];
	for (int i = 1;i <= 25;i++)
	{
		jjj[i] = i;
	}
	float off = 0.5;
	float offXY = 0.5;
	int k = 1;
	int k1 = 1;
	int l = 1;
	int o = 1;
	int g = 2;
	int p = 0;
	int h1 = 0;
	char* kkk = new char[255];
	TreeVex VexArray[100];
	unsigned nMaxVexIndex=0;
	//��һ��ö�����в�Ķ��㣬����ʼ����������
	for (int a = 1;a <= 5;a++)
	{
		p = 0;
		h1 = 0;
		sprintf(kkk, "%d", o);
		//test.AddText(PrintfCol::�����ע, a, 8 / 2 +1, kkk);
		//test.AddScanLineByEdgeGradient(a, 1,8 / 2 + 1, 8 / 2 + 1, 0, 0, '*', 0);
		//��ʼ����������
		VexArray[o].nLevel = a;
		VexArray[o].Vex.fX = 8 / 2 + 1;
		VexArray[o].Vex.fY = a;
		//ö���ұߵĶ��㣬����ʼ����������
		for (int a1 = 1;a1 <= a;a1++)
		{
			ScanningLineT::Point Begin = { (float)8 / (float)2 + (float)1 + (float)h1,(float)a };
			ScanningLineT::Point End = { (float)8 / (float)2 + (float)1 + (float)h1 + (float)1,(float)a };
			sprintf(kkk, "%d", o+p);
			//test.AddText(PrintfCol::�����ע, a, 8 / 2 + 1+h1, kkk);
			//test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');
			
			VexArray[o + p].nLevel = a;
			VexArray[o + p].Vex.fX = Begin.fX;
			VexArray[o + p].Vex.fY = Begin.fY;

			h1++;
			p++;
			nMaxVexIndex = max((o + p), nMaxVexIndex);
		}
		h1 = 0;
		p = 0;
		//ö����ߵĶ��㣬����ʼ����������
		for (int a2 = 1;a2 <= a;a2++)
		{
			ScanningLineT::Point Begin = { (float)8 / (float)2 + (float)1 - (float)h1,(float)a };
			ScanningLineT::Point End = { (float)8 / (float)2 + (float)1 - (float)h1 + (float)1,(float)a };
			sprintf(kkk, "%d", o - p);
			//test.AddText(PrintfCol::�����ע, a, 8 / 2 + 1 - h1, kkk);
			//test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');
			VexArray[o - p].nLevel = a;
			VexArray[o - p].Vex.fX = Begin.fX;
			VexArray[o - p].Vex.fY = Begin.fY;
			nMaxVexIndex = max((o - p), nMaxVexIndex);

			h1++;
			p++;
		}
		o = o + g;
		g=g+2;
	}
	//���������Ҫ�ҵ�Ŀ�궥������ ���ز���������������һ�������ĸ��׽ڵ�
	std::function<int(int)> FindNearestVexIndex = [&](int nVexIndex)->int {
			float fMinDiss = 10;
			int nFindIndex = -1;
			for (int nIndex=1;nIndex<nMaxVexIndex;nIndex++)
			{
				float fL = sqrt(
					((VexArray[nVexIndex].Vex.fX- VexArray[nIndex].Vex.fX)* (VexArray[nVexIndex].Vex.fX - VexArray[nIndex].Vex.fX))+
					((VexArray[nVexIndex].Vex.fY - VexArray[nIndex].Vex.fY) * (VexArray[nVexIndex].Vex.fY - VexArray[nIndex].Vex.fY))
				);
				if ((fL > 0.1)&& VexArray[nVexIndex].nLevel> VexArray[nIndex].nLevel)
				{
					if (fMinDiss > fL)
					{
						//�ϲ����̾�������
						fMinDiss = fL;
						nFindIndex = nIndex;
					}
				}
			}
			return nFindIndex;
		};

	k = 1;
	k1 = 1;
	l = 1;
	o = 1;
	g = 2;
	p = 0;
	h1 = 0;
	//ö�����в�Ķ������飬������һ������ĸ��׽ڵ㣬���������ߣ��������ӵ�͸��׽ڵ�
	for (int a = 1;a <= 5;a++)
	{
		p = 0;
		h1 = 0;
		sprintf(kkk, "%d", o);
		test.AddText(PrintfCol::�����ע, a, 8 / 2 +1, kkk);
		//test.AddScanLineByEdgeGradient(a, 1,8 / 2 + 1, 8 / 2 + 1, 0, 0, '*', 0);
		int nNearestVexIndex = FindNearestVexIndex(o);
		if (nNearestVexIndex > 0)
		{
			test.AddLine(VexArray[o].Vex, VexArray[nNearestVexIndex].Vex, 0.07, ScanningLineT::FillMode::RealMode, '*');
		}
		for (int a1 = 1;a1 <= a;a1++)
		{
			ScanningLineT::Point Begin = { (float)8 / (float)2 + (float)1 + (float)h1,(float)a };
			ScanningLineT::Point End = { (float)8 / (float)2 + (float)1 + (float)h1 + (float)1,(float)a };
			sprintf(kkk, "%d", o + p);
			test.AddText(PrintfCol::�����ע, a, 8 / 2 + 1+h1, kkk);
			nNearestVexIndex = FindNearestVexIndex(o + p);
			if (nNearestVexIndex > 0)
			{
				test.AddLine(VexArray[o + p].Vex, VexArray[nNearestVexIndex].Vex, 0.07, ScanningLineT::FillMode::RealMode, '-');
			}
			

			h1++;
			p++;

		}
		h1 = 0;
		p = 0;
		for (int a2 = 1;a2 <= a;a2++)
		{
			ScanningLineT::Point Begin = { (float)8 / (float)2 + (float)1 - (float)h1,(float)a };
			ScanningLineT::Point End = { (float)8 / (float)2 + (float)1 - (float)h1 + (float)1,(float)a };
			sprintf(kkk, "%d", o - p);
			test.AddText(PrintfCol::�����ע, a, 8 / 2 + 1 - h1, kkk);
			//test.AddLine(Begin, End, 0.07, ScanningLineT::FillMode::RealMode, '+');
			nNearestVexIndex = FindNearestVexIndex(o - p);
			if (nNearestVexIndex > 0)
			{
				test.AddLine(VexArray[o - p].Vex, VexArray[nNearestVexIndex].Vex, 0.07, ScanningLineT::FillMode::RealMode, '+');
			}

			h1++;
			p++;
		}
		o = o + g;
		g = g + 2;
	}
	
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
	ColPrintf(PrintfCol::����, Lang("1.�г��Ȳ����� 1+(1+3+5+7+����)"));
	DefineLangVarInt(���һ����N1, 0);
	ColPrintf(PrintfCol::����, Lang("2.�������һ����N1 ���һ����N1=(��������N1+((����N1-�������N2)))*����N3-�������N2"));
	���һ����N1 = ( (����N1 - �������N2)) * ����N3 - �������N2;
	���һ����N1.PrintProcessLog(2);
	DefineLangVarInt(�ܹ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("3.�����ܹ�����N2 �ܹ�����N2=��һ����N1+((��һ��N2+���һ����N1)*(����N1 - �������N2)/����N3)"));
	�ܹ�����N2 = ��һ��N2 + ((��һ��N2 + ���һ����N1) * (����N1 - �������N2) / ����N3);
	�ܹ�����N2.PrintProcessLog(3);
}
void P55_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Special A-level Course Question 5, Question 1, Equal Difference Sequence","P55����ר��A���γ̵������һС�� �Ȳ�����"},
		{"Title: Given a sequence of numbers: 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3,..., may I ask:",
		"����Ŀ����֪��һ�����У�1��1��2��2��2��2��3��3��3��3��3��3�����������ʣ�"},
		{"(1) What is the position of 15 in this sequence?",
		"(1)15��������еĵڼ������ڼ�����"},
		{"1. Calculate the quantity N1 shared by fifteen, which is equal to the quantity N2 multiplied by the number of increases N3 each time",
		"1.����ʮ�干�е�����N1 ʮ�干�е�����N1=ʮ������N2*ÿ�����Ӵ���N3"},
		{"2. Calculate the total number N2 of the first fourteen numbers. The total number N2 of the first fourteen numbers is equal to (the number N4 of the first item+(the number N5 of fourteen multiplied by the number N3 of each increase) multiplied by the total number N6 of the previous items/multiplier ratio",
		"2.����ǰʮ������������N2 ǰʮ������������N2=(��һ�����N4+(ʮ������N5*ÿ�����Ӵ���N3))*ǰ��һ������N6/����"},
		{"3. Calculate the number of times starting from the 15th, N3. The number of times starting from the 15th is N3=the total number of the first fourteen, N2+the number of times starting from the 15th, N3",
		"3.����ʮ�忪ʼ����N3 ʮ�忪ʼ����N3=ǰʮ������������N2+ʮ�忪ʼ��������N3"},
		{"4. Calculate the number of ending times N4 for fifteen, which is equal to the number of starting times N3 and the total number N1 shared by fifteen",
		"4.����ʮ���������N4 ʮ���������N4=ʮ�忪ʼ����N3+ʮ�干�е�����N1"},
		//������
		{"FifteenQuantityN2","ʮ������N2"},
		{"IncreasethefrequencyN3eachtime","ÿ�����Ӵ���N3"},
		{"NumberN4forthefirstitem","��һ�����N4"},
		{"FourteenQuantityN5","ʮ������N5"},
		{"ThetotalnumberofitemsinthefrontisN6","ǰ��һ������N6"},
		{"Startingfromthe15th,increasethequantityN3","ʮ�忪ʼ��������N3"},
		{"Magnification","����"},
		{"FifteensharedquantitiesN1","ʮ�干�е�����N1"},
		{"ThefirstfourteennumbershaveatotalquantityofN2","ǰʮ������������N2"},
		{"Startingfromthe15th,thenumberoftimesN3","ʮ�忪ʼ����N3"},
		{"FifteenEndingTimesN4","ʮ���������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ʮ������N2, 15);
	DefineLangVarInt(ÿ�����Ӵ���N3, 2);
	DefineLangVarInt(��һ�����N4, 2);
	DefineLangVarInt(ʮ������N5, 14);
	DefineLangVarInt(ǰ��һ������N6, 14);
	DefineLangVarInt(ʮ�忪ʼ��������N3, 1);
	DefineLangVarInt(����, 2);
	ColPrintf(PrintfCol::����, Lang("P55����ר��A���γ̵������һС�� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("����Ŀ����֪��һ�����У�1��1��2��2��2��2��3��3��3��3��3��3�����������ʣ�"));
	DefineLangVarInt(ʮ�干�е�����N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ʮ�干�е�����N1 ʮ�干�е�����N1=ʮ������N2*ÿ�����Ӵ���N3"));
	ʮ�干�е�����N1 = ʮ������N2 * ÿ�����Ӵ���N3;
	ʮ�干�е�����N1.PrintProcessLog(1);
	DefineLangVarInt(ǰʮ������������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����ǰʮ������������N2 ǰʮ������������N2=(��һ�����N4+(ʮ������N5*ÿ�����Ӵ���N3))*ǰ��һ������N6/����"));
	ǰʮ������������N2 = (��һ�����N4 + (ʮ������N5 * ÿ�����Ӵ���N3)) * ǰ��һ������N6 / ����;
	ǰʮ������������N2.PrintProcessLog(2);
	DefineLangVarInt(ʮ�忪ʼ����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ʮ�忪ʼ����N3 ʮ�忪ʼ����N3=ǰʮ������������N2+ʮ�忪ʼ��������N3"));
	ʮ�忪ʼ����N3 = ǰʮ������������N2 + ʮ�忪ʼ��������N3;
	ʮ�忪ʼ����N3.PrintProcessLog(3);
	DefineLangVarInt(ʮ���������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ʮ���������N4 ʮ���������N4=ʮ�忪ʼ����N3+ʮ�干�е�����N1"));
	ʮ���������N4 = ʮ�忪ʼ����N3 + ʮ�干�е�����N1;
	ʮ���������N4.PrintProcessLog(3);
}
void P55_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Special A-level Course Question 5, Question 2, Equal Difference Sequence","P55����ר��A���γ̵�����ڶ�С�� �Ȳ�����"},
		{"Question: What is the 100th number in this sequence",
		"��Ŀ����������еĵ�һ�ٸ����Ƕ���"},
		{"1. Calculate the hundredth arithmetic sequence because in the previous question, if there are 28 items, it will reach 210. Therefore, we can halve it. If there are too many, we can remove them, and if there are too few, we can add more items",
		"1.�����һ�ٸ����Ȳ����� ��Ϊ��һ�⵽28����͵�210���������ǿ��Զ����۰�������ˣ�����ȥ����������˼�������"},
		{"2. If there are% d sequences, the sum is% d",
		"2.�����%d�� ���к;���%d"},
		{"3. Because the maximum number of enumeration is% d, the first term of the 100th number is% d",
		"3.��Ϊö�ٳ��������%d�������Ե�һ���������һ����%d"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P55����ר��A���γ̵�����ڶ�С�� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����������еĵ�һ�ٸ����Ƕ���"));
	int nFormula = 9;
	int k = 7;
	int h = 2;
	int j = 0;
	int h1 = 0;
	
		for (j = 0;j < 11;j++)
		{
			
			ColPrintf(PrintfCol::����, Lang("2.�����%d�� ���к;���%d"),j,h1);
			h1 = h1 + h;
			h = h + 2;
			
		}
		//h = 0;
	
	ColPrintf(PrintfCol::����, Lang("3.��Ϊö�ٳ��������%d�������Ե�һ���������һ����%d"), j-1, (j-1-1));
}
void P55_2_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Topic A-level Course Question 5, Question 3, Equal Difference Sequence","P55����ר��A���γ̵��������С�� �Ȳ�����"},
		{"Question: What is the sum of the first 100 numbers in this sequence?",
		"��Ŀ��������е�ǰһ�ٸ����ĺ��Ƕ���?"},
		{"1. List the arithmetic sequence, where each number is twice as large as the number itself. Based on the previous question, where the 100th digit is preceded by 90 digits, this is 18 and followed by a 10. Therefore, the previous question is 1 * 2+2 * 4+3 * 6+4 * 8...+9 * 18+10 * 10",
		"1.�г��Ȳ�����S1 ÿ�����ĸ�����������2�� �ָ�����һ���100�����ֵ�ǰһ����90����������18�����Һ������һ��10 ������ϵ��һ����1*2+2*4+3*6+4*8����+9*18+10*10"},
		{"2. Simplify equation S1 to obtain S2. Propose 2 * (1+4+9...+81)+100",
		"2.����ʽ��S1�õ�S2 ��2��� 2*(1+4+9����+81)+100"},
		{"3. Transform S2 into Sum of Squares Problem 2 * (1 ^ 2+2 ^ 2+3 ^ 2+4 ^ 2...+9 ^ 2)+100",
		"3.�任S2��ƽ�������� 2*(1^2+2^2+3^2+4^2����+9^2)+100"},
		{"4. Calculate the sum of the top 100 items N1=(total number of items N2 * (total number of items N2+missing items N3) * (multiplier N4 * total number of items N2+missing items N3)/Square multiplier N2",
		"4.����ǰһ�����ĺ�N1 ǰһ�����ĺ�N1=(�ܹ�������N2*(�ܹ�������N2+�ٵ�����N3))*(����N4*�ܹ�������N2+�ٵ�����N3)/ƽ������N2"},
		//������
		{"ThetotalnumberofitemsN2","�ܹ�������N2"},
		{"FewitemsN3","�ٵ�����N3"},
		{"MagnificationN4","����N4"},
		{"ThesumofthefirsthundrednumbersN1","ǰһ�����ĺ�N1"},
		{"Square multiplier N2","ƽ������N2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�ܹ�������N2, 9);
	DefineLangVarInt(�ٵ�����N3, 1);
	DefineLangVarInt(����N4, 2);
	DefineLangVarInt(ƽ������N2, 6);
	ColPrintf(PrintfCol::����, Lang("P55����ר��A���γ̵��������С�� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��������е�ǰһ�ٸ����ĺ��Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.�г��Ȳ�����S1 ÿ�����ĸ�����������2�� �ָ�����һ���100�����ֵ�ǰһ����90����������18�����Һ������һ��10 ������ϵ��һ����1*2+2*4+3*6+4*8����+9*18+10*10"));
	ColPrintf(PrintfCol::����, Lang("2.����ʽ��S1�õ�S2 ��2��� 2*(1+4+9����+81)+100"));
	ColPrintf(PrintfCol::����, Lang("3.�任S2��ƽ�������� 2*(1^2+2^2+3^2+4^2����+9^2)+100"));
	DefineLangVarInt(ǰһ�����ĺ�N1, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ǰһ�����ĺ�N1 ǰһ�����ĺ�N1=(�ܹ�������N2*(�ܹ�������N2+�ٵ�����N3))*(����N4*�ܹ�������N2+�ٵ�����N3)/ƽ������N2"));
	ǰһ�����ĺ�N1 = ((�ܹ�������N2 * (�ܹ�������N2 + �ٵ�����N3)) * (����N4 * �ܹ�������N2 + �ٵ�����N3)/ ƽ������N2)* ����N4;
	ǰһ�����ĺ�N1.PrintProcessLog(4);
}
void P55_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P55 Calculation Special A-level Course Question 6: Isometric Sequence","P55����ר��A���γ̵����� �Ȳ�����"},
		{"Question: Given sequences 2, 3, 4, 6, 6, 9, 8, 12..., what is the 2000th number in this sequence? What is the number 2013? Calculate the sum of the first 100 items?",
		"��Ŀ����֪����2��3��4��6��6��9��8��12��������������еĵ�2000�����Ƕ��٣���2013�����Ƕ��٣����ǰ100��ĺ�?"},
		{"1. Calculate the number of two thousand, N1. The number of two thousand is equal to the number of even digits at the beginning of the column, N2+((two thousand N3/magnification N4) - the number with more digits at the beginning, N5) * even digit tolerance, N6",
		"1.������ǧ�ĸ���N1 ��ǧ�ĸ���N1=ż��λ���п�ͷN2+((��ǧN3/����N4)-��ͷ�����N5)*ż��λ����N6"},
		{"2. Calculate two thousand and thirteen numbers N2. Two thousand and thirteen numbers N2=odd digit column beginning N2+((two thousand and thirteen N3/multiplier N4) - number with more beginning N5+remaining error N6) * odd digit tolerance N6",
		"2.������ǧ��ʮ������N2 ��ǧ��ʮ������N2=����λ���п�ͷN2+((��ǧ��ʮ��N3/����N4)-��ͷ�����N5+�������N6)*����λ����N6"},
		{"3. Calculate the first 100 even numbers N3. The first 100 even numbers N3=(the beginning of the even number column N2+(the beginning of the odd number column N2+the number of odd and even occupancy items M8) * the number of odd and even occupancy items M8/multiplier N4",
		"3.����ǰһ����ż��N3 ǰһ����ż��N3=(ż��λ���п�ͷN2+(����λ���п�ͷN2+��ż��ռ����M8))*��ż��ռ����M8/����N4"},
		{"4. Calculate the first 100 odd numbered items N3=(the beginning of the odd numbered column N2+the first 100 N7) * the number of odd and even occupying items M8/multiplier N4",
		"4.����ǰһ��������N3 ǰһ��������N3=(����λ���п�ͷN2+ǰһ��N7)*��ż��ռ����M8/����N4"},
		{"5. Calculate the first 100 items N4. The first 100 items N4=the first 100 even items N3+the first 100 odd items N3",
		"5.����ǰһ����N4 ǰһ����N4=ǰһ����ż��N3+ǰһ��������N3"},
		//������
		{"StartingwithanevendigitcolumnN2","ż��λ���п�ͷN2"},
		{"TwothousandN3","��ǧN3"},
		{"MagnificationN4","����N4"},
		{"NumberN5withmoreatthebeginning","��ͷ�����N5"},
		{"EvenbittoleranceN6","ż��λ����N6"},
		{"StartingwithanodddigitcolumnN2","����λ���п�ͷN2"},
		{"TwothousandthirteenN3","��ǧ��ʮ��N3"},
		{"RemainingerrorN6","�������N6"},
		{"OdddigittoleranceN6","����λ����N6"},
		{"Top100N7","ǰһ��N7"},
		{"NumberofoddandevenitemsM8","��ż��ռ����M8"},
		{"ThenumberoftwothousandN1","��ǧ�ĸ���N1"},
		{"TwothousandandthirteennumbersN2","��ǧ��ʮ������N2"},
		{"Thefirst100evennumbersN3","ǰһ����ż��N3"},
		{"Thefirst100oddnumbereditemsN3","ǰһ��������N3"},
		{"Top100itemsN4","ǰһ����N4"},

	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ż��λ���п�ͷN2, 3);
	DefineLangVarInt(��ǧN3, 2000);
	DefineLangVarInt(����N4, 2);
	DefineLangVarInt(��ͷ�����N5, 1);
	DefineLangVarInt(ż��λ����N6, 3);
	DefineLangVarInt(����λ���п�ͷN2, 2);
	DefineLangVarInt(��ǧ��ʮ��N3, 2013);
	DefineLangVarInt(�������N6, 1);
	DefineLangVarInt(����λ����N6, 2);
	DefineLangVarInt(ǰһ��N7, 100);
	DefineLangVarInt(��ż��ռ����M8, 50);
	ColPrintf(PrintfCol::����, Lang("P55����ר��A���γ̵����� �Ȳ�����"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����֪����2��3��4��6��6��9��8��12��������������еĵ�2000�����Ƕ��٣���2013�����Ƕ��٣����ǰ100��ĺ�?"));
	DefineLangVarInt(��ǧ�ĸ���N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.������ǧ�ĸ���N1 ��ǧ�ĸ���N1=ż��λ���п�ͷN2+((��ǧN3/����N4)-��ͷ�����N5)*ż��λ����N6"));
	��ǧ�ĸ���N1 = ż��λ���п�ͷN2 + ((��ǧN3 / ����N4) - ��ͷ�����N5) * ż��λ����N6;
	��ǧ�ĸ���N1.PrintProcessLog(1);
	DefineLangVarInt(��ǧ��ʮ������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ǧ��ʮ������N2 ��ǧ��ʮ������N2=����λ���п�ͷN2+((��ǧ��ʮ��N3/����N4)-��ͷ�����N5+�������N6)*����λ����N6"));
	��ǧ��ʮ������N2 = ����λ���п�ͷN2 + ((��ǧ��ʮ��N3 / ����N4) - ��ͷ�����N5 + �������N6) * ����λ����N6;
	��ǧ��ʮ������N2.PrintProcessLog(2);
	DefineLangVarInt(ǰһ����ż��N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ǰһ����ż��N3 ǰһ����ż��N3=(ż��λ���п�ͷN2+(����λ���п�ͷN2+��ż��ռ����M8))*��ż��ռ����M8/����N4"));
	ǰһ����ż��N3 = (ż��λ���п�ͷN2 + (����λ���п�ͷN2 + ��ż��ռ����M8)) * ��ż��ռ����M8 / ����N4;
	ǰһ����ż��N3.PrintProcessLog(3);
	DefineLangVarInt(ǰһ��������N3, 0);
	ColPrintf(PrintfCol::����, Lang("4.����ǰһ��������N3 ǰһ��������N3=(����λ���п�ͷN2+ǰһ��N7)*��ż��ռ����M8/����N4"));
	ǰһ��������N3 = (����λ���п�ͷN2 + ǰһ��N7) * ��ż��ռ����M8 / ����N4;
	ǰһ��������N3.PrintProcessLog(4);
	DefineLangVarInt(ǰһ����N4, 0);
	ColPrintf(PrintfCol::����, Lang("5.����ǰһ����N4 ǰһ����N4=ǰһ����ż��N3+ǰһ��������N3"));
	ǰһ����N4 = ǰһ����ż��N3 + ǰһ��������N3;
	ǰһ����N4.PrintProcessLog(5);
}
void P55()
{
	P55_1();
	ColPrintf(PrintfCol::����, "");
	P55_2_1();
	ColPrintf(PrintfCol::����, "");
	P55_2_2();
	ColPrintf(PrintfCol::����, "");
	P55_2_3();
	ColPrintf(PrintfCol::����, "");
	P55_3();
	ColPrintf(PrintfCol::����, "");
}
void P55_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P55();
	Lang.SetCurLanguage(LanguageLib::English);
	P55();
	ColPrintf(PrintfCol::����, "");

}