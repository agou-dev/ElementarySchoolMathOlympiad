#pragma once
void P24_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P24Example 1: Problem of perimeter area","P24��һ�ܳ��������"},
		{"Title: There is a rice field, calculate its circumference based\non the view��Pay attention to the view in the code comments��",
		"��Ŀ����һ�鵾�������ͼ���������ܳ�(ע����ͼ�ڴ���ע����)"},
		{"Solution idea: We can use the translation method to calculate the circumference. \nAfter the translation is completed, we can calculate the circumference",
		"����˼·�����ǿ�����ƽ�Ʒ��������ܳ���ƽ����󣬾Ϳ��Լ����ܳ�"},
		{"1.Calculate the length of a rectangle, where the length of the rectangle is equal to the position\nof the rectangle after translation",
		"1.���㳤���εĳ�a �����εĳ�a=ƽ�ƺ������ڳ���λ��"},
		{"2.Calculate the width of a rectangle. The width of a rectangle is equal \nto all positions in the width after translation",
		"2.���㳤���εĿ�b �����εĿ�b=ƽ�ƺ������ڿ��λ��"},
		{"3.Calculate the perimeter of a rectangle. The perimeter of \na rectangle is equal to (length+width) multiplied by 2",
		"3.���㳤���ε��ܳ� �����ε��ܳ�=����+��*2"},
		{"Answer: The circumference of rice paddies is %d meters;",
		"�𣺵�����ܳ���%d��;"},
		//������
		{"LongLength1A1","���ĳ���1a1"},
		{"LongLength2A2","���ĳ���2a2"},
		{"LongLength3A1","���ĳ���3a3"},
		{"wideLength1b1","��ĳ���1b1"},
		{"wideb","��b"},
		{"Longb","��b"},
		{"perimeter","�ܳ�"},
		{"TotalQuantityOfLengthAndWidth","����������"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ĳ���1a1, 10);
	DefineLangVarInt(���ĳ���2a2, 5);
	DefineLangVarInt(���ĳ���3a3, 15);
	DefineLangVarInt(��ĳ���1b1, 10);
	DefineLangVarInt(����������, 2);

	/*ƽ��ǰ
	*��λ��m
	*
	*
	*			15
			| -----------|
			|			 |   5
		10	|			 |------|
			|					|
		----					|
	   |10			     |------|
	 10|				 |
	   |------|		|----|
		10	  |		|
			  |		|
			  ------|
	*
	*
	*
	*
	*
	*/
	/*
	* ƽ�ƺ�
	* |--------------------------|
	* |							 |
	* |							 |
	* |							 |
	* |							 |
	* |							 |
	* |--------------------------|
	* */
	ColPrintf(PrintfCol::����, Lang("P24��һ�ܳ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����һ�鵾�������ͼ���������ܳ�(ע����ͼ�ڴ���ע����)"));
	ColPrintf(PrintfCol::����, Lang("����˼·�����ǿ�����ƽ�Ʒ��������ܳ���ƽ����󣬾Ϳ��Լ����ܳ�"));
	DefineLangVarInt(��b, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳤���εĳ�a �����εĳ�a=ƽ�ƺ������ڳ���λ��"));
	��b = ��ĳ���1b1 + ��ĳ���1b1 + ��ĳ���1b1;
	��b.PrintProcessLog(1);
	DefineLangVarInt(��b, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㳤���εĿ�b �����εĿ�b=ƽ�ƺ������ڿ��λ��"));
	��b = ���ĳ���3a3 + ���ĳ���2a2 + ���ĳ���1a1+ ���ĳ���2a2;
	��b.PrintProcessLog(2);
	DefineLangVarInt(�ܳ�, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳤���ε��ܳ� �����ε��ܳ�=����+��*2"));
	�ܳ� = (��b + ��b) * ����������;
	�ܳ�.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("�𣺵�����ܳ���%d��;"), (int)�ܳ�);
}
void P24_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P24Example 2: Problem of perimeter area","P24�����ܳ��������"},
		{"Title: A mountain shaped vegetable field, calculate its circumference as shown in the view",
		"��Ŀ��һ��ɽ���Ͳ˵أ�����ͼ��ʾ���������ܳ�"},
		{"Solution idea: We can use the translation method to calculate the circumference. \nAfter the translation is completed, we can calculate the circumference",
		"����˼·�����ǿ�����ƽ�Ʒ��������ܳ���ƽ����󣬾Ϳ��Լ����ܳ�"},
		{"1.Calculate the length of a rectangle, where the length of the rectangle is equal to the position\nof the rectangle after translation",
		"1.���㳤�����޷�ƽ�Ƶ��ܳ� �������޷�ƽ�Ƶ��ܳ�=���޷�ƽ�ƵĿ�+�޷�ƽ�Ƶĳ���*2"},
		{"2.Calculate the width of a rectangle. The width of a rectangle is equal \nto all positions in the width after translation",
		"2.���㳤���εĳ�b �����εĿ�b=ƽ�ƺ������ڿ��λ��"},
		{"3.Calculate the perimeter of a rectangle. The perimeter of \na rectangle is equal to (length+width) multiplied by 2",
		"3.���㳤���ε��ܳ� �����ε��ܳ�=����+��*2+�������޷�ƽ�Ƶ��ܳ�"},
		{"Answer: The circumference of rice paddies is %d meters;",
		"�𣺲˵ص��ܳ���%d��;"},
		//������
		{"LongLength1A1","���ĳ���1a1"},
		{"LongLength2A2","���ĳ���2a2"},
		{"LongLength3A1","���ĳ���3a3"},
		{"LongLength4A4","���ĳ���4a4"},
		{"wideLength1b1","��ĳ���b"},

		{"wideb","��b"},
		{"Longb","��b"},
		{"TheCircumferenceOfARectangleThatCannotBeTranslated","�������޷�ƽ�Ƶ��ܳ�"},
		{"perimeter","�ܳ�"},
		{"TotalQuantityOfLengthAndWidth","����������"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(���ĳ���1a1, 2);
	DefineLangVarInt(���ĳ���2a2, 8);
	DefineLangVarInt(���ĳ���3a3, 5);
	DefineLangVarInt(���ĳ���4a4, 9);
	DefineLangVarInt(��ĳ���b, 20);
	DefineLangVarInt(����������, 2);
	/*
	��λ��m
	ƽ��ǰ
				----|
				|	|
	            |   |
				|	|	  -----|
			   8|	|	  |	   |
	|----		|	|	  |	   |
	|	 |		|	|	5 |	   |
	|	 |2		|	|	  |	   |9
	|	 |		|	|	  |	   |
	|----|------|---|-----|----|
	|						   |
	|--------------------------|
				20

	ƽ�ƺ�
	|--------------------------|
	|						   |
	|						   |
	|		|-----------|	   |
	|		|			|	   |
	|		|			|	   |
	|		|			|	   |
	|		|			|	   |
	|		|-----------|	   |
	|						   |
	|						   |
	|--------------------------|						   
	*/
	ColPrintf(PrintfCol::����, Lang("P24�����ܳ��������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ��һ��ɽ���Ͳ˵أ�����ͼ��ʾ���������ܳ�"));
	ColPrintf(PrintfCol::����, Lang("����˼·�����ǿ�����ƽ�Ʒ��������ܳ���ƽ����󣬾Ϳ��Լ����ܳ�"));
	DefineLangVarInt(�������޷�ƽ�Ƶ��ܳ�, 0);
	ColPrintf(PrintfCol::����, Lang("1.���㳤�����޷�ƽ�Ƶ��ܳ� �������޷�ƽ�Ƶ��ܳ�=���޷�ƽ�ƵĿ�+�޷�ƽ�Ƶĳ���*2"));
	�������޷�ƽ�Ƶ��ܳ� = (���ĳ���1a1 + ���ĳ���3a3) * ����������;
	�������޷�ƽ�Ƶ��ܳ�.PrintProcessLog(1);
	DefineLangVarInt(��b, 0);
	ColPrintf(PrintfCol::����, Lang("2.���㳤���εĳ�b �����εĿ�b=ƽ�ƺ������ڿ��λ��"));
	��b = ���ĳ���4a4 + (���ĳ���2a2 - ���ĳ���3a3);
	��b.PrintProcessLog(2);
	DefineLangVarInt(�ܳ�, 0);
	ColPrintf(PrintfCol::����, Lang("3.���㳤���ε��ܳ� �����ε��ܳ�=����+��*2+�������޷�ƽ�Ƶ��ܳ�"));
	�ܳ� = (��ĳ���b + ��b)* ����������+ �������޷�ƽ�Ƶ��ܳ�;
	�ܳ�.PrintProcessLog(3);
	ColPrintf(PrintfCol::���, Lang("�𣺲˵ص��ܳ���%d��;"), (int)�ܳ�);
}
void P24()
{
	P24_1();
	ColPrintf(PrintfCol::����, "");
	P24_2();
	ColPrintf(PrintfCol::����, "");
}
void P24_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P24();
	Lang.SetCurLanguage(LanguageLib::English);
	P24();
	ColPrintf(PrintfCol::����, "");
}
