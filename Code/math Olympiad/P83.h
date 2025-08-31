#pragma once
void P83_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P83 Case 1 Age Issue","P83 ��1 ��������"},
		{"Title: Grandpa Zhang has three grandchildren, the eldest grandson is 22 years old, the second grandson is 20 years old, and the youngest grandson is 15 years old. 25 years later, the three of them will be 60 years younger than Grandpa Zhang's age, which is twice his age. How old is Grandpa Zhang this year?",
		"��Ŀ����үү��3�����ӣ�������22�꣬������20�꣬С����15�꣬25������˵�����ͱ���үү�����2������60�꣬�����������?"},
		{"1. Calculate the age of this year's grandson and N1. The age of this year's grandson and N1=the age of the eldest grandson N2+the age of the second grandson N3+the age of the youngest grandson N4",
		"1.�����������������N1 ��������������N1=����������N2+����������N3+С��������N4"},
		{"2. Calculate the age of the grandson at that time and N2. The age of the grandson at that time and N2=the age of the grandson this year and N1+the number of years that have passed at that time N6 * the number of people N5",
		"2.������ʱ����������N2 ��ʱ����������N2=��������������N1+��ʱ��ȥ������N6*����N5"},
		{"3. Calculate the grandfather's age at that time and N3. The grandfather's age at that time and N3=(the grandson's age at that time and N2+the excess age N5)/For the grandfather's age multiple N4",
		"3.������ʱүү������N3 ��ʱүү������N3=(��ʱ����������N2+���������N5)/����үү��������N4"},
		{"4. Calculate the age of my grandfather this year and N4. The age of my grandfather this year and N4=the age of my grandfather at that time and N3- the number of years that have passed at that time N6",
		"4.�������үү������N4 ����үү������N4=��ʱүү������N3-��ʱ��ȥ������N6"},
		//������
		{"Grandson'sageN2","����������N2"},
		{"Secondgrandson'sageN3","����������N3"},
		{"Littlegrandson'sageN4","С��������N4"},
		{"Atthattime,thenumberofyearspassedN6","��ʱ��ȥ������N6"},
		{"NumberofpeopleN5","����N5"},
		{"ForGrandpa'sagemultipleN4","����үү��������N4"},
		{"ExcessageN5","���������N5"},
		{"Mygrandson'sageandN1thisyear","��������������N1"},
		{"Atthattime,mygrandson'sageandN2","��ʱ����������N2"},
		{"Atthattime,Grandpa'sageandN3","��ʱүү������N3"},
		{"Grandpa'sageandN4thisyear","����үү������N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(����������N2, 22);
	DefineLangVarInt(����������N3, 20);
	DefineLangVarInt(С��������N4, 15);
	DefineLangVarInt(��ʱ��ȥ������N6, 25);
	DefineLangVarInt(����N5, 3);
	DefineLangVarInt(����үү��������N4, 2);
	DefineLangVarInt(���������N5, 60);
	ColPrintf(PrintfCol::����, Lang("P83 ��1 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����үү��3�����ӣ�������22�꣬������20�꣬С����15�꣬25������˵�����ͱ���үү�����2������60�꣬�����������?"));
	DefineLangVarInt(��������������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.�����������������N1 ��������������N1=����������N2+����������N3+С��������N4"));
	��������������N1 = ����������N2 + ����������N3 + С��������N4;
	��������������N1.PrintProcessLog(1);
	DefineLangVarInt(��ʱ����������N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.������ʱ����������N2 ��ʱ����������N2=��������������N1+��ʱ��ȥ������N6*����N5"));
	��ʱ����������N2 = ��������������N1 + ��ʱ��ȥ������N6 * ����N5;
	��ʱ����������N2.PrintProcessLog(2);
	DefineLangVarInt(��ʱүү������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.������ʱүү������N3 ��ʱүү������N3=(��ʱ����������N2+���������N5)/����үү��������N4"));
	��ʱүү������N3 = (��ʱ����������N2 + ���������N5) / ����үү��������N4;
	��ʱүү������N3.PrintProcessLog(3);
	DefineLangVarInt(����үү������N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.�������үү������N4 ����үү������N4=��ʱүү������N3-��ʱ��ȥ������N6"));
	����үү������N4 = ��ʱүү������N3 - ��ʱ��ȥ������N6;
	����үү������N4.PrintProcessLog(4);
}
void P83_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P83 case 2 age issue","P83 ��2 ��������"},
		{"Title: When a student asks a teacher how old they are, the teacher says: When I was your age, you were only 3 years old. When you grow up to my age, I will be 39 years old. What are the ages of the teacher and the student",
		"��Ŀ��ѧ������ʦ�����꣬��ʦ˵����������ô��ʱ�����3�꣬���㳤����������䣬�ҵ�ʱ��39�ˣ���ʦ�����꣬ѧ��������"},
		{"1. Calculate the maximum age difference N1 between students and teachers. The maximum age difference N1 between students and teachers is equal to the maximum age N2 stated by the teacher minus the minimum age N3 of the students",
		"1.����ѧ������ʦ���������N1 ѧ������ʦ���������N1=��ʦ˵���������N2-ѧ������С����N3"},
		{"2. Calculate the age of one sample N2, which is equal to the maximum age difference between the student and the teacher N1 divided by the maximum number of samples N3",
		"2.����һ�ݵ�����N2 һ�ݵ�����N2=ѧ������ʦ���������N1/ѧ������ʦ�����������N3"},
		{"3. Calculate student age N3. Student age N3=student's minimum age N3+one's age N2",
		"3.����ѧ������N3 ѧ������N3=ѧ������С����N3+һ�ݵ�����N2"},
		{"4. Calculate the age of the teacher N4, which is equal to the age of the student N3 plus the age of the student N2",
		"4.������ʦ����N4 ��ʦ����N4=ѧ������N3+һ�ݵ�����N2"},
		//������
		{"ThemaximumagementionedbytheteacherisN2","��ʦ˵���������N2"},
		{"MinimumageofstudentN3","ѧ������С����N3"},
		{"MaximumageofstudentsandteachersN3","ѧ������ʦ�����������N3"},
		{"ThemaximumagedifferencebetweenstudentsandteachersisN1","ѧ������ʦ���������N1"},
		{"One'sageN2","һ�ݵ�����N2"},
		{"StudentageN3","ѧ������N3"},
		{"Teacher'sageN4","��ʦ����N4"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(��ʦ˵���������N2, 39);
	DefineLangVarInt(ѧ������С����N3, 3);
	DefineLangVarInt(ѧ������ʦ�����������N3, 3);
	ColPrintf(PrintfCol::����, Lang("P83 ��2 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��ѧ������ʦ�����꣬��ʦ˵����������ô��ʱ�����3�꣬���㳤����������䣬�ҵ�ʱ��39�ˣ���ʦ�����꣬ѧ��������"));	
	const char* pPic =
		"0��  ѧ��3��  ����ѧ������    ������ʦ����    ��ʦ39��\n"
		"|----|--------------|--------------|--------------|\n"
		;
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(ѧ������ʦ���������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.����ѧ������ʦ���������N1 ѧ������ʦ���������N1=��ʦ˵���������N2-ѧ������С����N3"));
	ѧ������ʦ���������N1 = ��ʦ˵���������N2 - ѧ������С����N3;
	ѧ������ʦ���������N1.PrintProcessLog(1);
	DefineLangVarInt(һ�ݵ�����N2, 0);
	ColPrintf(PrintfCol::����, Lang("2.����һ�ݵ�����N2 һ�ݵ�����N2=ѧ������ʦ���������N1/ѧ������ʦ�����������N3"));
	һ�ݵ�����N2 = ѧ������ʦ���������N1 / ѧ������ʦ�����������N3;
	һ�ݵ�����N2.PrintProcessLog(2);
	DefineLangVarInt(ѧ������N3, 0);
	ColPrintf(PrintfCol::����, Lang("3.����ѧ������N3 ѧ������N3=ѧ������С����N3+һ�ݵ�����N2"));
	ѧ������N3 = ѧ������С����N3 + һ�ݵ�����N2;
	ѧ������N3.PrintProcessLog(3);
	DefineLangVarInt(��ʦ����N4, 0);
	ColPrintf(PrintfCol::����, Lang("4.������ʦ����N4 ��ʦ����N4=ѧ������N3+һ�ݵ�����N2"));

	��ʦ����N4 = ѧ������N3 + һ�ݵ�����N2;
	��ʦ����N4.PrintProcessLog(4);
}
void P83_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P83 case 3 age issue","P83 ��3 ��������"},
		{"Title: A teenage boy writes his age after his father's age. His father's age is in his forties, forming a four digit number. Subtracting the age difference between father and son from this four digit number yields 4289. What are their ages?",
		"��Ŀ��һ��ʮ������к������Լ�������д�ڰְ�����ĺ��棬�ְֵ���������ʮ�������һ����λ�������������λ����ȥ�������������õ�4289�����ǵ������Ƕ���?"},
		{"1. Because the father's age is in his forties minus a dozen, the maximum is only 30, and because 4289+30 is at most 4319, the minimum is 4289+11=4300, the father's age is determined at the beginning, so the father's age is 43 years old",
		"1.��Ϊ���׵���������ʮ����ȥʮ�������Ҳ����30������Ϊ4289+30���Ҳ��4319��������4289+11=4300���ְֵ���������ǰ����ȷ�������԰ְֵ�������43��"},
		{"2. Assuming that a few out of ten are A",
		"2.����ʮ���ļ�ΪA"},
		{"3. Split the four digit structure into four digits: 4000+300+10+A",
		"3.����λ���ֲ�ṹ �����λ��=4000+300+10+A"},
		{"4. Father son two-year-old difference 43-10-A=33-A",
		"4.������������ 43-10-A=33-A"},
		{"5. List the age equation S1 4000+300+10+A - (33-A=)=4310+A - (33-A)=4289",
		"5.�г���������S1 4000+300+10+A-(33-A=)=4310+A-(33-A)=4289"},
		{"6. Simplify S1 to obtain S2 4310+A-33+A=4289",
		"6.����S1�õ�S2 4310+A-33+A=4289"},
		{"7. Simplify S2 to obtain S3 4310+2A-33=4289",
		"7.����S2�õ�S3 4310+2A-33=4289"},
		{"8. Simplify S3 to obtain S4 4277+2A=4289",
		"8.����S3�õ�S4 4277+2A=4289"},
		{"9. Simplify S4 to obtain S5 2A=4289-4277=12",
		"9.����S4�õ�S5 2A=4289-4277=12"},
		{"10. Simplify S5 to obtain S6 A=6",
		"10.����S5�õ�S6 A=6"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P83 ��3 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ��ʮ������к������Լ�������д�ڰְ�����ĺ��棬�ְֵ���������ʮ�������һ����λ�������������λ����ȥ�������������õ�4289�����ǵ������Ƕ���?"));
	ColPrintf(PrintfCol::����, Lang("1.��Ϊ���׵���������ʮ����ȥʮ�������Ҳ����30������Ϊ4289+30���Ҳ��4319��������4289+11=4300���ְֵ���������ǰ����ȷ�������԰ְֵ�������43��"));
	ColPrintf(PrintfCol::����, Lang("2.����ʮ���ļ�ΪA"));
	ColPrintf(PrintfCol::����, Lang("3.����λ���ֲ�ṹ �����λ��=4000+300+10+A"));
	ColPrintf(PrintfCol::����, Lang("4.������������ 43-10-A=33-A"));
	ColPrintf(PrintfCol::����, Lang("5.�г���������S1 4000+300+10+A-(33-A=)=4310+A-(33-A)=4289"));
	ColPrintf(PrintfCol::����, Lang("6.����S1�õ�S2 4310+A-33+A=4289"));
	ColPrintf(PrintfCol::����, Lang("7.����S2�õ�S3 4310+2A-33=4289"));
	ColPrintf(PrintfCol::����, Lang("8.����S3�õ�S4 4277+2A=4289"));
	ColPrintf(PrintfCol::����, Lang("9.����S4�õ�S5 2A=4289-4277=12"));
	ColPrintf(PrintfCol::����, Lang("10.����S5�õ�S6 A=6"));
}
void P83_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P83 case 4 age issue","P83 ��4 ��������"},
		{"Title: The total age of Xiaoming's family of four is 179 years old. His grandfather is 28 years older than his father and his mother is 27 years older than Xiaoming. His grandfather's age is the sum of Xiaoming's and his mother's ages. What are the ages of the four members?",
		"��Ŀ��С��һ���Ŀ������ܺ���179�꣬үү�Ȱְִ�28�꣬�����С����27�꣬үү��������С������������֮�ͣ��Ŀ��˵�����ֱ��Ƕ���?"},
		{"1. Calculate the total age without relationship N1=total age N2+age older than dad N3- age older than Xiaoming N4- age older than Xiaoming N4- age older than Xiaoming N4",
		"1.���㲻�ӹ�ϵ������N1 ���ӹ�ϵ������N1=�����ܺ�N2+�Ȱְִ������N3-��С���������N4-��С���������N4-��С���������N4"},
		{"2. Calculate Xiaoming's age N4. Xiaoming's age N4=total age without relationship N1/number N7+excess number N8",
		"2.����С������N4 С������N4=���ӹ�ϵ������N1/(����N7+����ķ���N8)"},
		{"3. Calculate the mother's age N5=Xiaoming's age N4+the age older than Xiaoming N4",
		"3.������������N5 ��������N5=С������N4+��С���������N4"},
		{"4. Calculate Grandpa's age N6 Grandpa's age N6=Xiaoming's age N4+Mom's age N5",
		"4.����үү������N6 үү������N6=С������N4+��������N5"},
		{"5. Calculate dad's age N7, dad's age N7=grandpa's age N6- older than dad N3",
		"5.����ְֵ�����N7 �ְֵ�����N7=үү������N6-�Ȱְִ������N3"},
		//������
		{"TotalageN2","�����ܺ�N2"},
		{"OlderthanDadN3","�Ȱְִ������N3"},
		{"OlderthanXiaomingN4","��С���������N4"},
		{"NumberofpeopleN7","����N7"},
		{"ExcesscopiesN8","����ķ���N8"},
		{"TotalagewithoutrelationshipN1","���ӹ�ϵ������N1"},
		{"Xiaoming,ageN4","С������N4"},
		{"Mother'sageN5","��������N5"},
		{"Grandpa'sageN6","үү������N6"},
		{"Dad'sageisN7","�ְֵ�����N7"},
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(�����ܺ�N2, 179);
	DefineLangVarInt(�Ȱְִ������N3, 28);
	DefineLangVarInt(��С���������N4, 27);
	DefineLangVarInt(����N7, 4);
	DefineLangVarInt(����ķ���N8, 2);
	ColPrintf(PrintfCol::����, Lang("P83 ��4 ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��С��һ���Ŀ������ܺ���179�꣬үү�Ȱְִ�28�꣬�����С����27�꣬үү��������С������������֮�ͣ��Ŀ��˵�����ֱ��Ƕ���?"));
	const char* pPic =
		"С����|---------��С������Ϊһ��-----------|\n"
		"���裺|---------��С������Ϊһ��-----------|------27��------|\n"
		"үү��|---------��С������Ϊһ��-----------|------27��------|--------27��----|\n"
		"�ְ֣�|---------��С������Ϊһ��-----------|-------------|--------28��-------|\n"
		;
	ColPrintf(PrintfCol::����, pPic);
	DefineLangVarInt(���ӹ�ϵ������N1, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㲻�ӹ�ϵ������N1 ���ӹ�ϵ������N1=�����ܺ�N2+�Ȱְִ������N3-��С���������N4-��С���������N4-��С���������N4"));
	���ӹ�ϵ������N1 = �����ܺ�N2 + �Ȱְִ������N3 - ��С���������N4 - ��С���������N4 - ��С���������N4;
	���ӹ�ϵ������N1.PrintProcessLog(1);
	DefineLangVarInt(С������N4, 0);
	ColPrintf(PrintfCol::����, Lang("2.����С������N4 С������N4=���ӹ�ϵ������N1/(����N7+����ķ���N8)"));
	С������N4 = ���ӹ�ϵ������N1 / (����N7 + ����ķ���N8);
	С������N4.PrintProcessLog(2);
	DefineLangVarInt(��������N5, 0);
	ColPrintf(PrintfCol::����, Lang("3.������������N5 ��������N5=С������N4+��С���������N4"));
	��������N5 = С������N4 + ��С���������N4;
	��������N5.PrintProcessLog(3);
	DefineLangVarInt(үү������N6, 0);
	ColPrintf(PrintfCol::����, Lang("4.����үү������N6 үү������N6=С������N4+��������N5"));
	үү������N6 = С������N4 + ��������N5;
	үү������N6.PrintProcessLog(4);
	DefineLangVarInt(�ְֵ�����N7, 0);
	ColPrintf(PrintfCol::����, Lang("5.����ְֵ�����N7 �ְֵ�����N7=үү������N6-�Ȱְִ������N3"));
	�ְֵ�����N7 = үү������N6 - �Ȱְִ������N3;
	�ְֵ�����N7.PrintProcessLog(5);
}
void P83()
{
	P83_1();
	ColPrintf(PrintfCol::����, "");
	P83_2();
	ColPrintf(PrintfCol::����, "");
	P83_3();
	ColPrintf(PrintfCol::����, "");
	P83_4();
	ColPrintf(PrintfCol::����, "");
	//P82_3();
	ColPrintf(PrintfCol::����, "");
	//P82_4();
	ColPrintf(PrintfCol::����, "");
}
void P83_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P83();
	Lang.SetCurLanguage(LanguageLib::English);
	P83();
	ColPrintf(PrintfCol::����, "");

}