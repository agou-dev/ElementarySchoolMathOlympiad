#pragma once
void P24_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P24Example 1: Problem of perimeter area","P24例一周长面积问题"},
		{"Title: There is a rice field, calculate its circumference based\non the view（Pay attention to the view in the code comments）",
		"题目：有一块稻田，根据视图计算它的周长(注意视图在代码注释里)"},
		{"Solution idea: We can use the translation method to calculate the circumference. \nAfter the translation is completed, we can calculate the circumference",
		"解题思路：我们可以用平移法来计算周长，平移完后，就可以计算周长"},
		{"1.Calculate the length of a rectangle, where the length of the rectangle is equal to the position\nof the rectangle after translation",
		"1.计算长方形的长a 长方形的长a=平移后所有在长的位置"},
		{"2.Calculate the width of a rectangle. The width of a rectangle is equal \nto all positions in the width after translation",
		"2.计算长方形的宽b 长方形的宽b=平移后所有在宽的位置"},
		{"3.Calculate the perimeter of a rectangle. The perimeter of \na rectangle is equal to (length+width) multiplied by 2",
		"3.计算长方形的周长 长方形的周长=（长+宽）*2"},
		{"Answer: The circumference of rice paddies is %d meters;",
		"答：稻田的周长是%d米;"},
		//变量表
		{"LongLength1A1","长的长度1a1"},
		{"LongLength2A2","长的长度2a2"},
		{"LongLength3A1","长的长度3a3"},
		{"wideLength1b1","宽的长度1b1"},
		{"wideb","宽b"},
		{"Longb","长b"},
		{"perimeter","周长"},
		{"TotalQuantityOfLengthAndWidth","长宽总数量"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(长的长度1a1, 10);
	DefineLangVarInt(长的长度2a2, 5);
	DefineLangVarInt(长的长度3a3, 15);
	DefineLangVarInt(宽的长度1b1, 10);
	DefineLangVarInt(长宽总数量, 2);

	/*平移前
	*单位：m
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
	* 平移后
	* |--------------------------|
	* |							 |
	* |							 |
	* |							 |
	* |							 |
	* |							 |
	* |--------------------------|
	* */
	ColPrintf(PrintfCol::标题, Lang("P24例一周长面积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：有一块稻田，根据视图计算它的周长(注意视图在代码注释里)"));
	ColPrintf(PrintfCol::标题, Lang("解题思路：我们可以用平移法来计算周长，平移完后，就可以计算周长"));
	DefineLangVarInt(宽b, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算长方形的长a 长方形的长a=平移后所有在长的位置"));
	宽b = 宽的长度1b1 + 宽的长度1b1 + 宽的长度1b1;
	宽b.PrintProcessLog(1);
	DefineLangVarInt(长b, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算长方形的宽b 长方形的宽b=平移后所有在宽的位置"));
	长b = 长的长度3a3 + 长的长度2a2 + 长的长度1a1+ 长的长度2a2;
	长b.PrintProcessLog(2);
	DefineLangVarInt(周长, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算长方形的周长 长方形的周长=（长+宽）*2"));
	周长 = (宽b + 长b) * 长宽总数量;
	周长.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：稻田的周长是%d米;"), (int)周长);
}
void P24_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P24Example 2: Problem of perimeter area","P24例二周长面积问题"},
		{"Title: A mountain shaped vegetable field, calculate its circumference as shown in the view",
		"题目：一块山字型菜地，如视图所示计算它的周长"},
		{"Solution idea: We can use the translation method to calculate the circumference. \nAfter the translation is completed, we can calculate the circumference",
		"解题思路：我们可以用平移法来计算周长，平移完后，就可以计算周长"},
		{"1.Calculate the length of a rectangle, where the length of the rectangle is equal to the position\nof the rectangle after translation",
		"1.计算长方形无法平移的周长 长方形无法平移的周长=（无法平移的宽+无法平移的长）*2"},
		{"2.Calculate the width of a rectangle. The width of a rectangle is equal \nto all positions in the width after translation",
		"2.计算长方形的长b 长方形的宽b=平移后所有在宽的位置"},
		{"3.Calculate the perimeter of a rectangle. The perimeter of \na rectangle is equal to (length+width) multiplied by 2",
		"3.计算长方形的周长 长方形的周长=（长+宽）*2+长方形无法平移的周长"},
		{"Answer: The circumference of rice paddies is %d meters;",
		"答：菜地的周长是%d米;"},
		//变量表
		{"LongLength1A1","长的长度1a1"},
		{"LongLength2A2","长的长度2a2"},
		{"LongLength3A1","长的长度3a3"},
		{"LongLength4A4","长的长度4a4"},
		{"wideLength1b1","宽的长度b"},

		{"wideb","宽b"},
		{"Longb","长b"},
		{"TheCircumferenceOfARectangleThatCannotBeTranslated","长方形无法平移的周长"},
		{"perimeter","周长"},
		{"TotalQuantityOfLengthAndWidth","长宽总数量"},
		{"NULL","NULL"}
	};
	Lang.AddLanguageTable(
		Language
	);
	DefineLangVarInt(长的长度1a1, 2);
	DefineLangVarInt(长的长度2a2, 8);
	DefineLangVarInt(长的长度3a3, 5);
	DefineLangVarInt(长的长度4a4, 9);
	DefineLangVarInt(宽的长度b, 20);
	DefineLangVarInt(长宽总数量, 2);
	/*
	单位：m
	平移前
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

	平移后
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
	ColPrintf(PrintfCol::标题, Lang("P24例二周长面积问题"));
	ColPrintf(PrintfCol::标题, Lang("题目：一块山字型菜地，如视图所示计算它的周长"));
	ColPrintf(PrintfCol::标题, Lang("解题思路：我们可以用平移法来计算周长，平移完后，就可以计算周长"));
	DefineLangVarInt(长方形无法平移的周长, 0);
	ColPrintf(PrintfCol::方法, Lang("1.计算长方形无法平移的周长 长方形无法平移的周长=（无法平移的宽+无法平移的长）*2"));
	长方形无法平移的周长 = (长的长度1a1 + 长的长度3a3) * 长宽总数量;
	长方形无法平移的周长.PrintProcessLog(1);
	DefineLangVarInt(长b, 0);
	ColPrintf(PrintfCol::方法, Lang("2.计算长方形的长b 长方形的宽b=平移后所有在宽的位置"));
	长b = 长的长度4a4 + (长的长度2a2 - 长的长度3a3);
	长b.PrintProcessLog(2);
	DefineLangVarInt(周长, 0);
	ColPrintf(PrintfCol::方法, Lang("3.计算长方形的周长 长方形的周长=（长+宽）*2+长方形无法平移的周长"));
	周长 = (宽的长度b + 长b)* 长宽总数量+ 长方形无法平移的周长;
	周长.PrintProcessLog(3);
	ColPrintf(PrintfCol::结果, Lang("答：菜地的周长是%d米;"), (int)周长);
}
void P24()
{
	P24_1();
	ColPrintf(PrintfCol::方法, "");
	P24_2();
	ColPrintf(PrintfCol::方法, "");
}
void P24_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P24();
	Lang.SetCurLanguage(LanguageLib::English);
	P24();
	ColPrintf(PrintfCol::方法, "");
}
