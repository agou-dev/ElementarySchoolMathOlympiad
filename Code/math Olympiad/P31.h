#pragma once
void P31_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P31 Case 1 Auxiliary Line Method",
		"P31��һ �����߷�"},
		{"Title: AC=10cm BC=40cm, find the area of a square",
		"��Ŀ:AC=10cm BC=40cm�������������"},
		{"1. Calculate ABC area S1 ABC area S1=(AC length L1 * BC length L2)/triangle's multiple of square N1",
		"1.����ABC���S1 ABC���S1=(AC����L1*BC����L2)/�����ζ��������εı���N1"},
		{"1. List the equations and establish equation S1. ACD=Square edge length * AC/2. DCB=Square edge length * CB/2. Square edge length * AC/2+Square edge length * CB/2=ABC. Area S1",
		"1.�г���ʽ��������S1 ACD���=�����α߳�*AC/2 DCB���=�����α߳�*CB/2 ACD���+DCB���=�����α߳�*AC/2+�����α߳�*CB/2=ABC���S1"},
		{"2. Simplify equation S1 to obtain S2 square edge length * AC+square edge length * CB=ABC area S1 * 2",
		"2.����ʽ��S1�õ�S2 �����α߳�*AC+�����α߳�*CB=ABC���S1*2"},
		{"3. Simplify equation S2 to obtain S3 square edge length * (CB+AC)=ABC area S1 * 2",
		"3.����ʽ��S2�õ�S3 �����α߳�*(CB+AC)=ABC���S1*2"},
		{"4. Simplify equation S2 to obtain S3 square edge length=ABC area S1 * 2/(CB+AC)",
		"4.����ʽ��S3�õ�S4 �����α߳�=ABC���S1*2/(CB+AC)"},
		{"2. Calculate the side length L3 of a square. The side length L3 of a square is equal to the ABC area S1 multiplied by the triangle's multiple N1 of the square, divided by (AC length L1+BC length L2)",
		"2.���������α߳�L3 �����α߳�L3=ABC���S1*�����ζ��������εı���N1/(AC����L1+BC����L2)"},
		{"3. Calculate the square area S1. Square area S1=Square side length L3 * Square side length L3",
		"3.�������������S1 ���������S1=�����α߳�L3*�����α߳�L3"},
		{"Answer: The area of a square is% dcm",
		"�������������%dcm"},
		//������
		{"NACLengthL1","AC����L1"},
		{"NBCLengthL2","BC����L2"},
		{"NTheMultipleN1OfATriangleOverASquare","�����ζ��������εı���N1"},
		{"NABCAreaS1","ABC���S1"},
		{"NSquareSideLengthL3","�����α߳�L3"},
		{"NSquareAreaS1","���������S1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<8, 5, 9, 3> Screen;
	Screen.AddScanLineByEdgeGradient(1.0, 1.0, 1, 1, 0, 2.0 / 1.0, ' ');//������
	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 1, 3, 0, 0, '0');//������
	Screen.AddScanLineByEdgeGradient(2.0, 2.0, 3, 3, 0, 2.0 / 1.0, ' ');//������

	Screen.AddText(PrintfCol::�����ע, 1.3, 0.7, "A");
	Screen.AddText(PrintfCol::�����ע, 3.7, 6.5, "B");
	Screen.AddText(PrintfCol::�����ע, 3.7, 0.7, "C");
	Screen.AddText(PrintfCol::�����ע, 1.7, 3.0, "D");
	ScanLenHorizontalLine(Screen, 3.9, 3.24, 3, 0.3);
	DefineLangVarInt(AC����L1, 10);
	DefineLangVarInt(BC����L2, 40);
	DefineLangVarInt(�����ζ��������εı���N1, 2);
	ColPrintf(PrintfCol::����, Lang("P31��һ �����߷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ:AC=10cm BC=40cm�������������"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVarInt(ABC���S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ABC���S1 ABC���S1=(AC����L1*BC����L2)/�����ζ��������εı���N1"));
	ABC���S1 = AC����L1 * BC����L2 / �����ζ��������εı���N1;
	ABC���S1.PrintProcessLog(1);
	ColPrintf(PrintfCol::����, Lang("1.�г���ʽ��������S1 ACD���=�����α߳�*AC/2 DCB���=�����α߳�*CB/2 ACD���+DCB���=�����α߳�*AC/2+�����α߳�*CB/2=ABC���S1"));
	ColPrintf(PrintfCol::����, Lang("2.����ʽ��S1�õ�S2 �����α߳�*AC+�����α߳�*CB=ABC���S1*2"));
	ColPrintf(PrintfCol::����, Lang("3.����ʽ��S2�õ�S3 �����α߳�*(CB+AC)=ABC���S1*2"));
	ColPrintf(PrintfCol::����, Lang("4.����ʽ��S3�õ�S4 �����α߳�=ABC���S1*2/(CB+AC)"));
	DefineLangVarInt(�����α߳�L3, 0);
	ColPrintf(PrintfCol::����, Lang("2.���������α߳�L3 �����α߳�L3=ABC���S1*�����ζ��������εı���N1/(AC����L1+BC����L2)"));
	�����α߳�L3 = ABC���S1 * �����ζ��������εı���N1 / (AC����L1 + BC����L2);
	�����α߳�L3.PrintProcessLog(2);
	DefineLangVarInt(���������S1, 0);
	ColPrintf(PrintfCol::����, Lang("3.�������������S1 ���������S1=�����α߳�L3*�����α߳�L3"));
	���������S1 = �����α߳�L3 * �����α߳�L3;
	���������S1.PrintProcessLog(2);
	ColPrintf(PrintfCol::���, Lang("�������������%dcm"), (int)���������S1);
}
void P31_2_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P31 Case 2 Auxiliary Line Method",
		"P31��һ �����߷�"},
		{"Title: The side length of ABCD is 4cm, CG=3cm, DG=5cm, find the length of DE",
		"��Ŀ��ABCD�ı߳���4cm��CG=3cm��DG=5cm����DE����"},
		{"1. Calculate the AGD area S1. AGD area S1=side length L1 of ABCD * side length L1 of ABCD/triangle multiple N1 of square",
		"1.����AGD���S1 AGD���S1=ABCD�ı߳�L1*ABCD�ı߳�L1/�����ζ��������εı���N1"},
		{"2. Calculate the area of DEFG S2. The area of DEFG S2=the area of DEFG S2 * AGD multiplied by DEFG N1",
		"2.����DEFG�����S2 DEFG�����S2=AGD���S1*AGD����DEFG�ı���N1"},
		{"3. Calculate DE length S2, DE length S2=DEFG area S2/DG length L2",
		"3.����DE����S2 DE����S2=DEFG�����S2/DG����L2"},
		{"Answer: The length of DE is%fcm",
		"��DE������%fcm"},
		//������
		{"FTheSideLengthL1OfABCD","ABCD�ı߳�L1"},
		{"FTheMultipleN1OfATriangleOverASquare","�����ζ��������εı���N1"},
		{"FAGDIsAMultipleN1Of DEFG","AGD����DEFG�ı���N1"},
		{"FDGLengthL2","DG����L2"},
		{"FAGDAreaS1","AGD���S1"},
		{"FDEFGAreaS2","DEFG�����S2"},
		{"FDELengthS2","DE����S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<8, 8, 9, 3> Screen;
	//F(1.44,1.08+4) E(4.44��1.08)
	Screen.AddScanLineByEdgeGradient(1.08, 1.92, 4.44, 4.44, -(1.44/2.0), 2.56 / 2.0, ' ');//EAD������       
	Screen.AddScanLineByEdgeGradient(3.0, 2.0,3.0, 3.0, -(1.44 / 2.0), 0.5/2.0, ' ');//AF����ֱ��������
	
	Screen.AddScanLineByEdgeGradient(5.08, 1.92, 1.44, 3.5,2.56 / 1.92, 0.5 / 2.0, ' ');//FG������ֱ��������
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 7, 7, -(3.0/4.0), 0, ' ');//DGC������
	//Screen.AddScanLineByEdgeGradient(3.0, 3.0, 3.0, 3.0, 0, 1.0/4.0, ' ');

	//Screen.AddScanLineByEdgeGradient(6.5, 1.0, 3.0, 6.0, 0, 1.0 / 0.5, ' ');
	//Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 7, 0, 0, ' ');
	Screen.AddScanLineByEdgeGradient(3.0, 4.0,3.0, 7, 1.0 / 4.0, -(3.0 / 4.0), '0');//ADG������
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 3.0, -(0), 0, '*');//AB����
	ScanLenHorizontalLine(Screen, 1.0, 4.44, 2.56, 0.3);
	Screen.AddScanLineByEdgeGradient(1.0, 1.92, 7, 7, 0, 0, ' ');//xy��
	//Screen.AddScanLineByEdgeGradient(5.0, 2.0, 1.44, 3.0, 1.44 / 2.0, 0, ' ');
	//ScanLenHorizontalLine(Screen, 3.0, 2.7, 4.3, 0.3);
	ScanLenHorizontalLine(Screen, 7.0, 3.0, 4.0, 0.3);
	Screen.AddText(PrintfCol::�����ע,2.7,2.7, "A");
	Screen.AddText(PrintfCol::�����ע, 7.5, 2.7, "B");
	Screen.AddText(PrintfCol::�����ע, 7.6, 4.0, "G");
	Screen.AddText(PrintfCol::�����ע, 0.7, 4.44, "E");
	Screen.AddText(PrintfCol::�����ע, 3.3, 7.3, "D");
	Screen.AddText(PrintfCol::�����ע, 4.7, 1.0, "F");
	Screen.AddText(PrintfCol::�����ע, 7.3, 7.3, "C");
	Screen.AddText(PrintfCol::�����ע, 2.3, 7.3, "x");
	Screen.AddText(PrintfCol::�����ע, 0.7, 6.3, "y");
	/*                        
	* ��������Ƶ�����(���ù��ɶ�������������α�����ͬ)
	* ����E������
	*1.y/x��������4/3�����α�����ͬ�õ�S1 y/x=4/3 
	* 2.����ʽ��S1�õ�S2(��y) y= ��4/3��x
	* 3.S2���ù��ɶ���õ�S3 x^2+y^2=DE^2=3.2^2=10.24
	* 4.����ʽ��S3�õ�S4 x^2+(4/3x)^2=10.24
	* 5.S4ͨ��4/3�õ�S5 (16/9)x^2+x^2=10.24
	* 6.����ʽ��S5�õ�S6 (16+9/9)+x^2=10.24
	* 7.��S6����չ���õ�S7 10.24*9/25=x^2*25/9*9/25=x^2=y=2.56
	* 8.S7��x^2��ƽ�����õ�S8 x=1.92
	* E(4+(3-2.56),1+(2-1.92))
	* A(3,3)
	* F(1+(3-2.56),5+(2-1.92))
	* */
	
	DefineLangVar(float,ABCD�ı߳�L1, 4);
	DefineLangVar(float, �����ζ��������εı���N1, 2);
	DefineLangVar(float, AGD����DEFG�ı���N1, 2);
	DefineLangVar(float, DG����L2, 5);
	ColPrintf(PrintfCol::����, Lang("P31��һ �����߷�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ABCD�ı߳���4cm��CG=3cm��DG=5cm����DE����"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	DefineLangVar(float, AGD���S1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����AGD���S1 AGD���S1=ABCD�ı߳�L1*ABCD�ı߳�L1/�����ζ��������εı���N1"));
	AGD���S1 = ABCD�ı߳�L1 * ABCD�ı߳�L1 / �����ζ��������εı���N1;
	AGD���S1.PrintProcessLog(1);
	DefineLangVar(float, DEFG�����S2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����DEFG�����S2 DEFG�����S2=AGD���S1*AGD����DEFG�ı���N1"));
	DEFG�����S2 = AGD���S1 * AGD����DEFG�ı���N1;
	DEFG�����S2.PrintProcessLog(2);
	DefineLangVar(float, DE����S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.����DE����S2 DE����S2=DEFG�����S2/DG����L2"));
	DE����S2 = DEFG�����S2 / DG����L2;
	DE����S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("��DE������%fcm"), DE����S2.Var);
}
void P31_2_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P31 Case 2 Auxiliary Line Method",
		"P31���� �����߷�(���̷�)"},
		{"Title: The side length of ABCD is 4cm, CG=3cm, DG=5cm, find the length of DE",
		"��Ŀ��ABCD�ı߳���4cm��CG=3cm��DG=5cm����DE����"},
		{"According to the graph AGD, where AD and DG are equal, two area equations are derived to obtain S1. The unknown variable is ED (ED * DG)/2=(AD * DC)/2",
		"1.����ͼ��AGD���е�AD��DG�����������ʽ����ȵõ�S1�������̣�δ֪����ED (ED*DG)/2=(AD*DC)/2"},
		{"2. Simplify equation S1 to obtain S2 ED * DG=AD * DC",
		"2.����ʽ��S1�õ�S2 ED*DG=AD*DC"},
		{"3. Expand equation S2 to obtain S3 ED=(AD * DC)/DG",
		"3.չ��ʽ��S2�õ�S3 ED=(AD*DC)/DG"},
		{"4. Substitute numerical values to solve equation S3 and obtain S4 ED=(4 * 4)/5",
		"4.������ֵ�������S3�õ�S4 ED=(4*4)/5"},
		{"Answer: The length of DE is%fcm",
		"��DE������%fcm"},
		//������
		{"FTheSideLengthL1OfABCD","ABCD�ı߳�L1"},
		{"FDGLengthL2","DG����L2"},
		{"FDELengthS2","DE����S2"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ScanningLine<8, 8, 9, 3> Screen;
	//F(1.44,1.08+4) E(4.44��1.08)
	Screen.AddScanLineByEdgeGradient(1.08, 1.92, 4.44, 4.44, -(1.44 / 2.0), 2.56 / 2.0, ' ');//EAD������       
	Screen.AddScanLineByEdgeGradient(3.0, 2.0, 3.0, 3.0, -(1.44 / 2.0), 0.5 / 2.0, ' ');//AF����ֱ��������

	Screen.AddScanLineByEdgeGradient(5.08, 1.92, 1.44, 3.5, 2.56 / 1.92, 0.5 / 2.0, ' ');//FG������ֱ��������
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 7, 7, -(3.0 / 4.0), 0, ' ');//DGC������
	//Screen.AddScanLineByEdgeGradient(3.0, 3.0, 3.0, 3.0, 0, 1.0/4.0, ' ');

	//Screen.AddScanLineByEdgeGradient(6.5, 1.0, 3.0, 6.0, 0, 1.0 / 0.5, ' ');
	//Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 7, 0, 0, ' ');
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 7, 1.0 / 4.0, -(3.0 / 4.0), '0');//ADG������
	Screen.AddScanLineByEdgeGradient(3.0, 4.0, 3.0, 3.0, -(0), 0, '*');//AB����
	ScanLenHorizontalLine(Screen, 1.0, 4.44, 2.56, 0.3);
	Screen.AddScanLineByEdgeGradient(1.0, 1.92, 7, 7, 0, 0, ' ');//xy��
	//Screen.AddScanLineByEdgeGradient(5.0, 2.0, 1.44, 3.0, 1.44 / 2.0, 0, ' ');
	//ScanLenHorizontalLine(Screen, 3.0, 2.7, 4.3, 0.3);
	ScanLenHorizontalLine(Screen, 7.0, 3.0, 4.0, 0.3);
	Screen.AddText(PrintfCol::�����ע, 2.7, 2.7, "A");
	Screen.AddText(PrintfCol::�����ע, 7.5, 2.7, "B");
	Screen.AddText(PrintfCol::�����ע, 7.6, 4.0, "G");
	Screen.AddText(PrintfCol::�����ע, 0.7, 4.44, "E");
	Screen.AddText(PrintfCol::�����ע, 3.3, 7.3, "D");
	Screen.AddText(PrintfCol::�����ע, 4.7, 1.0, "F");
	Screen.AddText(PrintfCol::�����ע, 7.3, 7.3, "C");
	Screen.AddText(PrintfCol::�����ע, 2.3, 7.3, "x");
	Screen.AddText(PrintfCol::�����ע, 0.7, 6.3, "y");
	/*
	* ��������Ƶ�����(���ù��ɶ�������������α�����ͬ)
	* ����E������
	*1.y/x��������4/3�����α�����ͬ�õ�S1 y/x=4/3
	* 2.����ʽ��S1�õ�S2(��y) y= ��4/3��x
	* 3.S2���ù��ɶ���õ�S3 x^2+y^2=DE^2=3.2^2=10.24
	* 4.����ʽ��S3�õ�S4 x^2+(4/3x)^2=10.24
	* 5.S4ͨ��4/3�õ�S5 (16/9)x^2+x^2=10.24
	* 6.����ʽ��S5�õ�S6 (16+9/9)+x^2=10.24
	* 7.��S6����չ���õ�S7 10.24*9/25=x^2*25/9*9/25=x^2=y=2.56
	* 8.S7��x^2��ƽ�����õ�S8 x=1.92
	* E(4+(3-2.56),1+(2-1.92))
	* A(3,3)
	* F(1+(3-2.56),5+(2-1.92))
	* */

	DefineLangVar(float, ABCD�ı߳�L1, 4);
	DefineLangVar(float, DG����L2, 5);
	ColPrintf(PrintfCol::����, Lang("P31���� �����߷�(���̷�)"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ABCD�ı߳���4cm��CG=3cm��DG=5cm����DE����"));
	Screen.Clear();
	Screen.Draw();
	Screen.Printf(PrintfCol::����);
	ColPrintf(PrintfCol::����, Lang("1.����ͼ��AGD���е�AD��DG�����������ʽ����ȵõ�S1�������̣�δ֪����ED (ED*DG)/2=(AD*DC)/2"));
	
	ColPrintf(PrintfCol::����, Lang("2.����ʽ��S1�õ�S2 ED*DG=AD*DC"));
	
	DefineLangVar(float, DE����S2, 0);
	ColPrintf(PrintfCol::����, Lang("3.չ��ʽ��S2�õ�S3 ED=(AD*DC)/DG"));
	ColPrintf(PrintfCol::����, Lang("4.������ֵ�������S3�õ�S4 ED=(4*4)/5"));
	DE����S2 = (ABCD�ı߳�L1* ABCD�ı߳�L1) / DG����L2;
	DE����S2.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("��DE������%fcm"), DE����S2.Var);
}
void P31()
{
	P31_1();
	ColPrintf(PrintfCol::����, "");
	P31_2_1();
	ColPrintf(PrintfCol::����, "");
	P31_2_2();
	ColPrintf(PrintfCol::����, "");
}
void P31_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P31();
	Lang.SetCurLanguage(LanguageLib::English);
	P31();
	ColPrintf(PrintfCol::����, "");

}