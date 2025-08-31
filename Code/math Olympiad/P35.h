#pragma once
void P35_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P35 Example 1 Graphic Segmentation","P35��һ ͼ�ηָ�"},
		{"Title: A small square with a side length of 3cm and a red surface. Each face is cut equally with two cuts, and the cut surface is white. How many cubes can be cut in total? How many faces are three red, two red, and one red?",
		"��Ŀ���߳�Ϊ3cmС�����Σ������Ǻ�ɫ��ÿ����Ⱦ����������������Ϊ��ɫ��һ�����ж��ٸ�1cm�������壬���죬���죬һ�����һ���ж��ٸ�?"},
		{"1. Calculate the total number of squares N1=the number of small cubes on each edge N2 * the number of small cubes on each edge N2 * the number of small cubes on each edge N2",
		"1.����һ����������N1 һ����������N1=ÿ������С��������N2*ÿ������С��������N2*ÿ������С��������N2"},
		{"2. Calculate the number of red faces N3. The number of red faces N3 is equal to the number of small cubes at the vertex, which is 8",
		"2.�����������N3 �������N3=�ڶ�����С��������=8"},
		{"3. Calculate the number of dihedra N4=the number of square edges N5 * (the number of small cubes N2 on each edge minus the number of vertices N6 on each edge)",
		"3.����������N4 �������N4=����������N5*(ÿ������С��������N2-ÿ�����϶�����N6)"},
		{"4. Calculate the number of red squares on one side N7=the number of square faces N8 * (the number of\nsmall cubes on each edge N2- the number of vertices on each edge N6) * (the number of small cubes on\neach edge N2- the number of vertices on each edge N6)",
		"4.����һ�����N7 һ�����N7=����������N8*(ÿ������С��������N2-ÿ�����϶�����N6)*(ÿ������С��������N2-ÿ�����϶�����N6)"},
		//������
		{"NumberOfSmallCubesOnEachEdgeN2","ÿ������С��������N2"},
		{"SquareEdgeCountN5","����������N5"},
		{"NumberOfVerticesOnEachEdgeN6","ÿ�����϶�����N6"},
		{"NumberOfSquareFacesN8","����������N8"},
		{"ATotalOfSquaresN1","һ����������N1"},
		{"ThreeSidedRednessN3","�������N3"},
		{"TwoSidedRedNumberN4","�������N4"},
		{"RedNumberN7OnOneSide","һ�����N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(ÿ������С��������N2, 3);
	DefineLangVarInt(����������N5, 12);
	DefineLangVarInt(ÿ�����϶�����N6, 2);
	DefineLangVarInt(����������N8, 6);
	ColPrintf(PrintfCol::����, Lang("P35��һ ͼ�ηָ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ���߳�Ϊ3cmС�����Σ������Ǻ�ɫ��ÿ����Ⱦ����������������Ϊ��ɫ��һ�����ж��ٸ�1cm�������壬���죬���죬һ�����һ���ж��ٸ�?"));
	DefineLangVarInt(һ����������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����һ����������N1 һ����������N1=ÿ������С��������N2*ÿ������С��������N2*ÿ������С��������N2"));
	һ����������N1 = ÿ������С��������N2 * ÿ������С��������N2 * ÿ������С��������N2;
	һ����������N1.PrintProcessLog(1);
	DefineLangVarInt(�������N3, 8);
	ColPrintf(PrintfCol::����, Lang("2.�����������N3 �������N3=�ڶ�����С��������=8"));
	�������N3 = �������N3;
	�������N3.PrintProcessLog(2);
	DefineLangVarInt(�������N4, 8);
	ColPrintf(PrintfCol::����, Lang("3.����������N4 �������N4=����������N5*(ÿ������С��������N2-ÿ�����϶�����N6)"));
	�������N4 = ����������N5 * (ÿ������С��������N2 - ÿ�����϶�����N6);
	�������N4.PrintProcessLog(3);
	DefineLangVarInt(һ�����N7, 8);
	ColPrintf(PrintfCol::����, Lang("4.����һ�����N7 һ�����N7=����������N8*(ÿ������С��������N2-ÿ�����϶�����N6)*(ÿ������С��������N2-ÿ�����϶�����N6)"));
	һ�����N7 = ����������N8 * (ÿ������С��������N2 - ÿ�����϶�����N6) * (ÿ������С��������N2 - ÿ�����϶�����N6);
	һ�����N7.PrintProcessLog(4);
}
void P35_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P35 Example 2 Graphic Segmentation","P35���� ͼ�ηָ�"},
		{"Title: A square coated with red paint, cut into equidistant small cubes. Among them, there are 60 cubes painted on two sides, and how many cubes painted on one side?",
		"��Ŀ��һ��Ϳ����ɫ����������Σ��гɵȾ����С����������ж���Ϳɫ����60�飬һ��Ϳɫ���ж��ٿ飿"},
		{"Cut an edge into n pieces",
		"��һ�����г�n��"},
		{"1. According to the previous question, calculate the method of coloring two sides and bring it in to obtain S1 12 * (n-1)=60",
		"1.������һ��������Ϳɫ�ķ�������õ�S1 12*(n-1)=60"},
		{"2. Simplify S1 to obtain S2 (n-1)=60/12=>n-1=5",
		"2.����S1�õ�S2 (n-2)=60/12=>n-2=5"},
		{"3. Simplify S2 to obtain S3 n=7",
		"3.����S2�õ�S3 n=7"},
		{"4. Calculate the number of squares N1 on a face. The number of squares N1 on a face is equal to the number of\nsquare faces N2 * (the number of small cubes N3 on each edge minus the number of vertices N6 on each edge) *\n(the number of small cubes N3 on each edge minus the number of vertices N6 on each edge)",
		"4.����һ�������������N1 һ�������������N1=����������N2*(ÿ������С��������N3-ÿ�����϶�����N6)*(ÿ������С��������N3-ÿ�����϶�����N6)"},
		//������
		{"SquareFacesN2","����������N2"},
		{"NumberOfSmallCubesN3OnEachEdge","ÿ������С��������N3"},
		{"NumberOfVerticesOnEachEdgeN6","ÿ�����϶�����N6"},
		{"NumberOfSquaresOnOneFaceN1","һ�������������N1"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(����������N2,6);
	DefineLangVarInt(ÿ������С��������N3, 7);
	DefineLangVarInt(ÿ�����϶�����N6, 2);
	ColPrintf(PrintfCol::����, Lang("P35���� ͼ�ηָ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ��Ϳ����ɫ����������Σ��гɵȾ����С����������ж���Ϳɫ����60�飬һ��Ϳɫ���ж��ٿ飿"));
	ColPrintf(PrintfCol::����, Lang("��һ�����г�n��"));
	ColPrintf(PrintfCol::����, Lang("1.������һ��������Ϳɫ�ķ�������õ�S1 12*(n-1)=60"));
	ColPrintf(PrintfCol::����, Lang("2.����S1�õ�S2 (n-2)=60/12=>n-2=5"));
	ColPrintf(PrintfCol::����, Lang("3.����S2�õ�S3 n=7"));
	DefineLangVarInt(һ�������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("4.����һ�������������N1 һ�������������N1=����������N2*(ÿ������С��������N3-ÿ�����϶�����N6)*(ÿ������С��������N3-ÿ�����϶�����N6)"));
	һ�������������N1 = ����������N2 * (ÿ������С��������N3 - ÿ�����϶�����N6) * (ÿ������С��������N3 - ÿ�����϶�����N6);
	һ�������������N1.PrintProcessLog(4);
}
void P35_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P35 Example 3 Graphic Segmentation","P35���� ͼ�ηָ�"},
		{"Question: After a rectangular prism is painted red and cut into equidistant small cubes, how many faces are there in three red, two red, and one red?",
		"��Ŀ��һ��������Ϳ�Ϻ�ɫ���гɵȾ����С������󣨳���߷ֱ�Ϊ5��3��4�������죬���죬һ�����һ���ж��ٸ�?"},
		{"1. Calculate the number of red faces N1. The number of red faces N1 is equal to the number of small cubes at the vertex, which is 8",
		"1.�����������N1 �������N1=�ڶ�����С��������=8"},
		{"2. Calculate the number of square faces N2. The number of square faces N2=(((the number of long squares N3- the number of vertices on each edge N6)+(the\nnumber of wide squares N4- the number of vertices on each edge N6)+(the number of high squares N5- the number of vertices on each edge N6)\n* the number of edges in each group of rectangular prisms N7",
		"2.����������N2 �������N2=((������������N3-ÿ�����϶�����N6)+(�����������N4-ÿ�����϶�����N6)+(�ߵ���������N5-ÿ�����϶�����N6))*������ÿ������N7"},
		{"3. Calculate the number of red dots on both sides N3=((the number of long squares N3- the number of vertices N6 on each edge) * (the number of tall squares N5- the number of vertices N6 on each edge) * multiplier N1",
		"3.��������һ�����N3 ����һ�����N3=((������������N3-ÿ�����϶�����N6)*(�ߵ���������N5-ÿ�����϶�����N6))*����N1"},
		{"4. Calculate the number of red dots on the upper and lower sides N3. The number of red dots on one side N3=((the number of long squares N3- the number of vertices N6 on each edge) * (the number of wide squares N4- the number of vertices N6 on each edge) * multiplier N1",
		"4.��������һ�����N4 ����һ�����N4=((������������N3-ÿ�����϶�����N6)*(�����������N4-ÿ�����϶�����N6))*����N1"},
		{"5. Calculate the number of red dots on the left and right sides N5. The number of red dots on the left and right sides N5=((the number of high squares N5- the number of vertices N6 on each edge) * (the number of wide squares N4- the number of vertices N6 on each edge) * multiplier N1",
		"5.��������һ�����N5 ����һ�����N5=((�ߵ���������N5-ÿ�����϶�����N6)*(�����������N4-ÿ�����϶�����N6))*����N1"},
		{"6. Calculate the number of sides N9, where N9 is equal to the red number of the positive and negative sides N3+the red number of the upper and lower sides N4+the red number of the left and right sides N5",
		"6.����һ����N9 һ����N9=����һ�����N3+����һ�����N4+����һ�����N5"},
		//������
		{"TheNumberOfLongSquaresN3","������������N3"},
		{"TheNumberOfWideSquaresN4","�����������N4"},
		{"HighNumberOfSquaresN5","�ߵ���������N5"},
		{"NumberOfVrticesOnEachEdgeN6","ÿ�����϶�����N6"},
		{"TheNumberOfEdgesPerGroupOfRectangularPrismIsN7","������ÿ������N7"},
		{"MagnificationN1","����N1"},
		{"ThreeSidedRednessN1","�������N1"},
		{"TwoSidedRedNumberN2","�������N2"},
		{"PositiveAndNegativeSideRedNumberN3","����һ�����N3"},
		{"RedNumberN4OnTheUpperAndLowerSides","����һ�����N4"},
		{"TheRedNumberOnTheLeftAndRightSidesIsN5","����һ�����N5"},
		{"NumberN9OnOneSide","һ����N9"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(������������N3,5);
	DefineLangVarInt(�����������N4, 3);
	DefineLangVarInt(�ߵ���������N5, 4);
	DefineLangVarInt(ÿ�����϶�����N6, 2);
	DefineLangVarInt(������ÿ������N7,4)
	DefineLangVarInt(����N1, 2);
	ColPrintf(PrintfCol::����, Lang("P35���� ͼ�ηָ�"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ��������Ϳ�Ϻ�ɫ���гɵȾ����С������󣨳���߷ֱ�Ϊ5��3��4�������죬���죬һ�����һ���ж��ٸ�?"));
	DefineLangVarInt(�������N1, 8);
	ColPrintf(PrintfCol::����, Lang("1.�����������N1 �������N1=�ڶ�����С��������=8"));
	�������N1 = �������N1;
	�������N1.PrintProcessLog(1);
	DefineLangVarInt(�������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����������N2 �������N2=((������������N3-ÿ�����϶�����N6)+(�����������N4-ÿ�����϶�����N6)+(�ߵ���������N5-ÿ�����϶�����N6))*������ÿ������N7"));
	�������N2 = ((������������N3 - ÿ�����϶�����N6) + (�����������N4 - ÿ�����϶�����N6) + (�ߵ���������N5 - ÿ�����϶�����N6)) * ������ÿ������N7;
	�������N2.PrintProcessLog(2);
	DefineLangVarInt(����һ�����N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.��������һ�����N3 ����һ�����N3=((������������N3-ÿ�����϶�����N6)*(�ߵ���������N5-ÿ�����϶�����N6))*����N1"));
	����һ�����N3 = ((������������N3 - ÿ�����϶�����N6) * (�ߵ���������N5 - ÿ�����϶�����N6)) * ����N1;
	����һ�����N3.PrintProcessLog(3);
	DefineLangVarInt(����һ�����N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.��������һ�����N4 ����һ�����N4=((������������N3-ÿ�����϶�����N6)*(�����������N4-ÿ�����϶�����N6))*����N1"));
	����һ�����N4 = ((������������N3 - ÿ�����϶�����N6) * (�����������N4 - ÿ�����϶�����N6)) * ����N1;
	����һ�����N4.PrintProcessLog(4);
	DefineLangVarInt(����һ�����N5, 0);
	ColPrintf(PrintfCol::����, Lang("5.��������һ�����N5 ����һ�����N5=((�ߵ���������N5-ÿ�����϶�����N6)*(�����������N4-ÿ�����϶�����N6))*����N1"));
	����һ�����N5 = ((�ߵ���������N5 - ÿ�����϶�����N6) * (�����������N4 - ÿ�����϶�����N6)) * ����N1;
	����һ�����N5.PrintProcessLog(5);
	DefineLangVarInt(һ����N9, 0);
	ColPrintf(PrintfCol::����, Lang("6.����һ����N9 һ����N9=����һ�����N3+����һ�����N4+����һ�����N5"));
	һ����N9 = ����һ�����N3 + ����һ�����N4 + ����һ�����N5;
	һ����N9.PrintProcessLog(6);
}
void P35()
{
	P35_1();
	ColPrintf(PrintfCol::����, "");
	P35_2();
	ColPrintf(PrintfCol::����, "");
	P35_3();
	ColPrintf(PrintfCol::����, "");
}
void P35_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P35();
	Lang.SetCurLanguage(LanguageLib::English);
	P35();
	ColPrintf(PrintfCol::����, "");

}