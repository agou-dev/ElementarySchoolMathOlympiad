#pragma once
void P39_1()
{
	LanguageLib::LanguageTableT Language = {
		{"P39 case one standard method","P39��һ ������"},
		{"Title: How many shortest paths are there from A to B",
		"��Ŀ����A��B�����·���м���"},
		{"Analysis: The shortest path cannot go back, otherwise it will automatically add steps, so we can only go up or right. We can first\ncount the shortest path number of each node and add them up to get the total number of next punctuation points.\n(Number represents the shortest path number of nodes)",
		"���������·�����������ߣ���Ȼ�����ԼӲ�������������ֻ�����ϻ����ң�������ͳ�Ƴ�ÿ���ڵ�����·��������ӵõ���һ�����������(���ִ���ڵ����·����)"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P39��һ ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����A��B�����·���м���"));
	ColPrintf(PrintfCol::����, Lang("���������·�����������ߣ���Ȼ�����ԼӲ�������������ֻ�����ϻ����ң�������ͳ�Ƴ�ÿ���ڵ�����·��������ӵõ���һ�����������(���ִ���ڵ����·����)"));
	typedef ScanningLine<8, 7, 18, 8> ScanningLineT;
	ScanningLineT test;
	/*std::vector<ScanningLineT::Point> Vex1 = {{float(1),float(1)},{float(7),float(1)},{float(7),float(5)}};
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
	ScanLenHorizontalLine(test, 3,  1, 6.0, 0.1);
	test.AddScanLineByEdgeGradient(1.0, 4,  3,  3.0,0, 0);
	test.AddScanLineByEdgeGradient(1.0, 4, 5, 5.0, 0, 0);*/
	int offX = 0;
	int offY = 0;
	for (int i = 0;i <= 1;i++)
	{
		for (int j = 0;j <= 2;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(1 + offY)},{float(3 + offX),float(1 + offY)},{float(3 + offX),float(3+ offY)} };
			test.AddPolygon(ScanningLineT::Point(float(1+ offX), float(3+ offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	}

	test.AddText(PrintfCol::�����ע, 5, 0.7, "A");
	test.AddText(PrintfCol::�����ע, 0.7, 7, "B");
	test.AddText(PrintfCol::�����ע, 3, 0.77, "1");
	test.AddText(PrintfCol::�����ע, 1, 0.77, "1");
	test.AddText(PrintfCol::�����ע, 5.3, 3.0, "1");
	test.AddText(PrintfCol::�����ע, 3.3, 3.3, "2");
	test.AddText(PrintfCol::�����ע, 1.3, 3.3, "3");
	test.AddText(PrintfCol::�����ע, 3.3, 5.3, "3");
	test.AddText(PrintfCol::�����ע, 3.3, 7.3, "4");
	test.AddText(PrintfCol::�����ע, 1.3, 5.3, "6");
	test.AddText(PrintfCol::�����ע, 1, 7, "10");
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
}
void P39_2()
{
	LanguageLib::LanguageTableT Language = {
		{"P39 case two standard method","P39���� ������"},
		{"Title: How many shortest paths are there from A to B","��Ŀ����A��B�����·���м���"},
		{"Analysis: Although the position has changed, it can still be solved using the same thinking as the previous question, but only up or to the right",
		"��������Ȼλ�ñ��˵�Ҳ��������һ���˼ά���⣬ֻ����ֻ�����ϻ�����"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P39���� ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����A��B�����·���м���"));
	ColPrintf(PrintfCol::����, Lang("��������Ȼλ�ñ��˵�Ҳ��������һ���˼ά���⣬ֻ����ֻ�����ϻ�����"));
	typedef ScanningLine<8, 7, 18, 8> ScanningLineT;
	ScanningLineT test;
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(1)},{float(2),float(1)},{float(2),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(3)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex2 = { {float(1),float(3)},{float(2),float(3)},{float(2),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(1), float(5)), Vex2, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex3 = { {float(2),float(1)},{float(4),float(1)},{float(4),float(2)} };
	test.AddPolygon(ScanningLineT::Point(float(2), float(2)), Vex3, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex4 = { {float(2),float(2)},{float(4),float(2)},{float(4),float(4)} };
	test.AddPolygon(ScanningLineT::Point(float(2), float(4)), Vex4, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex5 = { {float(2),float(4)},{float(4),float(4)},{float(4),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(2), float(5)), Vex5, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex6 = { {float(4),float(1)},{float(5),float(1)},{float(5),float(3)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(3)), Vex6, ScanningLineT::FillMode::EdgeMode, '+', 0);

	std::vector<ScanningLineT::Point> Vex7 = { {float(4),float(3)},{float(5),float(3)},{float(5),float(5)} };
	test.AddPolygon(ScanningLineT::Point(float(4), float(5)), Vex7, ScanningLineT::FillMode::EdgeMode, '+', 0);
	test.AddText(PrintfCol::�����ע, 0.7, 0.7, "A");
	test.AddText(PrintfCol::�����ע, 5.3, 5.3, "B");
	test.AddText(PrintfCol::�����ע, 0.7, 2, "1");
	test.AddText(PrintfCol::�����ע, 0.7, 4, "1");
	test.AddText(PrintfCol::�����ע, 0.7, 5, "1");
	test.AddText(PrintfCol::�����ע, 3, 0.7, "1");
	test.AddText(PrintfCol::�����ע, 5, 0.7, "1");
	test.AddText(PrintfCol::�����ע, 2, 1.9, "1");

	test.AddText(PrintfCol::�����ע, 3.2, 1.9, "2");
	test.AddText(PrintfCol::�����ע, 1.9, 3.9, "2");
	test.AddText(PrintfCol::�����ע, 2.9, 3.9, "2");
	test.AddText(PrintfCol::�����ע, 4.2, 1.9, "2");


	test.AddText(PrintfCol::�����ע, 5.2, 1.9, "3");
	test.AddText(PrintfCol::�����ע, 2.9, 4.9, "3");
	test.AddText(PrintfCol::�����ע, 4.2, 3.9, "4");
	test.AddText(PrintfCol::�����ע, 5.2, 3.9, "7");
	test.AddText(PrintfCol::�����ע, 5.2, 4.9, "10");
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
}
void P39_3()
{
	LanguageLib::LanguageTableT Language = {
		{"P39 cases using the three standard method","P39���� ������"},
		{"Title: Da Mei is planning to visit her grandmother at a nursing home, but a road is being built in the city center (as shown in the picture). How many shortest paths are there from the nursing home?",
		"��Ŀ������׼��ȥ����Ժ�������̣�����������������·����ͼ�������Ǵ�����Ժ�����·���м���?"},
		{"Analysis: Because there is a path in the middle that cannot be crossed, we cannot mark it, so we can fill it with 0 so that there will be no path leading to it later.",
		"��������Ϊ�м�����·���ܹ��������ǲ��ܶ������б������������ǿ��Զ�����0��������ͨ������·��Ҳ��û�С�"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P39���� ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ������׼��ȥ����Ժ�������̣�����������������·����ͼ�������Ǵ�����Ժ�����·���м���?"));
	ColPrintf(PrintfCol::����, Lang("��������Ϊ�м�����·���ܹ��������ǲ��ܶ������б������������ǿ��Զ�����0��������ͨ������·��Ҳ��û�С�"));
	typedef ScanningLine<12, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	

	int offX = 0;
	int offY = 0;
	for (int i = 0;i <= 3;i++)
	{
		for (int j = 0;j <= 4;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(1 + offY)},{float(3 + offX),float(1 + offY)},{float(3 + offX),float(3 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(1 + offX), float(3 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	}

	test.AddText(PrintfCol::�����ע, 9, 0.7, "ѧУ");
	test.AddText(PrintfCol::�����ע, 0.9, 10.9, "����Ժ");
	test.AddText(PrintfCol::�����ע, 4.9, 6.9, "������");
	test.AddText(PrintfCol::�����ע, 8.9, 2.9, "1");
	test.AddText(PrintfCol::�����ע, 8.9, 4.9, "1");
	test.AddText(PrintfCol::�����ע, 8.9, 6.9, "1");
	test.AddText(PrintfCol::�����ע, 8.9, 8.9, "1");
	test.AddText(PrintfCol::�����ע, 8.9, 10.7, "1");
	test.AddText(PrintfCol::�����ע, 7, 0.7, "1");
	test.AddText(PrintfCol::�����ע, 6.9, 2.9, "2");
	test.AddText(PrintfCol::�����ע, 5, 0.7, "1");
	test.AddText(PrintfCol::�����ע, 4.9, 2.9, "3");
	test.AddText(PrintfCol::�����ע, 3, 0.7, "1");
	test.AddText(PrintfCol::�����ע, 2.9, 2.9, "4");
	test.AddText(PrintfCol::�����ע, 1, 0.7, "1");
	test.AddText(PrintfCol::�����ע, 0.9, 2.9, "4");
	test.AddText(PrintfCol::�����ע, 6.9, 4.9, "3");
	test.AddText(PrintfCol::�����ע, 4.9, 4.9, "6");
	test.AddText(PrintfCol::�����ע, 2.9, 4.9, "10");
	test.AddText(PrintfCol::�����ע, 0.9, 4.9, "15");

	test.AddText(PrintfCol::�����ע, 6.9, 6.9, "4");
	test.AddText(PrintfCol::�����ע, 4.9, 6.7, "0");
	test.AddText(PrintfCol::�����ע, 0.9, 6.9, "25");
	test.AddText(PrintfCol::�����ע, 2.9, 6.9, "10");

	test.AddText(PrintfCol::�����ע, 6.9, 8.9, "5");
	test.AddText(PrintfCol::�����ע, 4.9, 8.9, "5");
	test.AddText(PrintfCol::�����ע, 2.9, 8.9, "15");
	test.AddText(PrintfCol::�����ע, 0.9, 8.9, "40");

	test.AddText(PrintfCol::�����ע, 6.9, 10.7, "6");
	test.AddText(PrintfCol::�����ע, 4.9, 10.7, "11");
	test.AddText(PrintfCol::�����ע, 2.9, 10.7, "26");
	test.AddText(PrintfCol::�����ע, 0.9, 10.7, "66");
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
}
void P39_4()
{
	LanguageLib::LanguageTableT Language = {
		{"P39 cases using the four standard method","P39���� ������"},
		{"Title: As shown in the picture, this is the floor plan of the residential area near Xiaohua School. Today, Xiaohua is going to G intersection to do something. How many different shortest paths are there for Xiaohua to go home from G intersection",
		"��Ŀ����ͼ����С��ѧУ����С����ƽ��ͼ������С����ѧ�ؼ�ҪȥG·�ڰ���£�����С����G·�ڻؼ��ж����ֲ�ͬ���·��?"},
		{"Analysis: Applying the same process as the previous question, it can be concluded that","������������һ�����ͬ��ɵ�"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P39���� ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ����ͼ����С��ѧУ����С����ƽ��ͼ������С��ҪȥG·�ڰ���£�����С����G·�ڻؼ��ж����ֲ�ͬ���·��?"));
	ColPrintf(PrintfCol::����, Lang("������������һ�����ͬ��ɵ�"));
	typedef ScanningLine<10, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	int offX = 0;
	int offY = 0;
	for (int i = 0;i <= 2;i++)
	{
		for (int j = 0;j <= 2;j++)
		{
			std::vector<ScanningLineT::Point> Vex1 = { {float(1 + offX),float(1 + offY)},{float(3 + offX),float(1 + offY)},{float(3 + offX),float(3 + offY)} };
			test.AddPolygon(ScanningLineT::Point(float(1 + offX), float(3 + offY)), Vex1, ScanningLineT::FillMode::EdgeMode, '+', 0);
			offX = offX + 2;
		}
		offX = 0;
		offY = offY + 2;
	}

	test.AddText(PrintfCol::�����ע, 4.9, 6.9, "3");
	test.AddText(PrintfCol::�����ע, 2.9, 6.9, "6");
	
	test.AddText(PrintfCol::�����ע, 7, 0.7, "��");
	test.AddText(PrintfCol::�����ע, 6.9, 2.9, "1");
	test.AddText(PrintfCol::�����ע, 5, 0.7, "1");
	test.AddText(PrintfCol::�����ע, 4.9, 2.9, "2");
	test.AddText(PrintfCol::�����ע, 3, 0.7, "0");
	test.AddText(PrintfCol::�����ע, 2.9, 2.9, "0");
	test.AddText(PrintfCol::�����ע, 1, 0.7, "0");
	test.AddText(PrintfCol::�����ע, 0.9, 2.9, "0");
	test.AddText(PrintfCol::�����ע, 6.9, 4.9, "1");
	test.AddText(PrintfCol::�����ע, 6.9, 6.9, "0");
	test.AddText(PrintfCol::�����ע, 4.9, 4.8, "3");
	test.AddText(PrintfCol::�����ע, 2.9, 4.9, "3");
	test.AddText(PrintfCol::�����ע, 0.9, 4.9, "3");
	test.AddText(PrintfCol::�����ע, 0.9, 6.9, "ѧУ");
	test.AddText(PrintfCol::�����ע, 0.8, 6.9, "9");
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
}
void P39_5()
{
	LanguageLib::LanguageTableT Language = {
		{"P39 case five standard method","P39���� ������"},
		{"Title: How many different pronunciations are there for \"I Love Teacher Yang\"",
		"��Ŀ�����Ұ�����ʦ��һ���ж����ֲ�ͬ�Ķ���"},
		{"Analysis: The five words\"I love Teacher Yang\" must be in order and cannot be said to be \"I love Teacher Yang\". Therefore, when calculating the next number of times, we must find the one that matches it in order to calculate it",
		"���������Ұ�����ʦ�������������Ҫ��˳�����ģ�����˵�ǡ��Ұ�����ʦ���������Ǽ�����һ������ʱ�������ҵ�����ƥ��Ĳ��ܼ������"},
	};
	Lang.AddLanguageTable(
		Language
	);
	ColPrintf(PrintfCol::����, Lang("P39���� ������"));
	ColPrintf(PrintfCol::����, Lang("��Ŀ�����Ұ�����ʦ��һ���ж����ֲ�ͬ�Ķ���"));
	ColPrintf(PrintfCol::����, Lang("���������Ұ�����ʦ�������������Ҫ��˳�����ģ�����˵�ǡ��Ұ�����ʦ���������Ǽ�����һ������ʱ�������ҵ�����ƥ��Ĳ��ܼ������"));
	typedef ScanningLine<10, 10, 18, 8> ScanningLineT;
	ScanningLineT test;
	float off = 0.5;
	float offXY = 0.5;
	//
	/*for (int i = 0;i <= 4;i++)
	{
		ScanLenHorizontalLine(test, 1.0, off+offXY+(i* off), 0.5, 0.1);
		
		
			test.AddScanLineByEdgeGradient(1, 1.0, off + offXY + (i * off)-0.25, off + offXY + (i * off)-0.25, 0.5, 0.5, '*', 0);
			test.AddScanLineByEdgeGradient(1, 1.0, off + offXY + (i * off) + off+ off-0.25, off + offXY + (i * off) + off+ off-0.25, -0.5, -0.5, '*', 0);
		
		
		offXY = offXY + 0.5;
	}
	off = 0.5;
	offXY = 0.5;
	for (int i = 0;i <= 3;i++)
	{
		ScanLenHorizontalLine(test, 2.0, 0.5+(off + offXY + (i * off)), 0.5, 0.1);
		test.AddScanLineByEdgeGradient(2, 1.0, off + offXY + (i * off) - 0.25+0.5, off + offXY + (i * off) - 0.25+0.5, 0.5, 0.5, '*', 0);
		test.AddScanLineByEdgeGradient(2, 1.0, off + offXY + (i * off) + off + off - 0.25 + 0.5, off + offXY + (i * off) + off + off - 0.25 + 0.5, -0.5, -0.5, '*', 0);
		offXY = offXY + 0.5;
	}
	off = 0.5;
	offXY = 0.5;
	for (int i = 0;i <= 2;i++)
	{
		ScanLenHorizontalLine(test, 3.0, 1 + (off + offXY + (i * off)), 0.5, 0.1);
		test.AddScanLineByEdgeGradient(3, 1.0, off + offXY + (i * off) - 0.25 + 0.5 + 0.5, off + offXY + (i * off) - 0.25 + 0.5 + 0.5, 0.5, 0.5, '*', 0);
		test.AddScanLineByEdgeGradient(3, 1.0, off + offXY + (i * off) + off + off - 0.25 + 0.5 + 0.5, off + offXY + (i * off) + off + off - 0.25 + 0.5 + 0.5, -0.5, -0.5, '*', 0);
		offXY = offXY + 0.5;
	}
	off = 0.5;
	offXY = 0.5;
	for (int i = 0;i <= 1;i++)
	{
		ScanLenHorizontalLine(test, 4.0, 1.5 + (off + offXY + (i * off)), 0.5, 0.1);
		test.AddScanLineByEdgeGradient(4, 1.0, off + offXY + (i * off) - 0.25 + 0.5 + 0.5 + 0.5, off + offXY + (i * off) - 0.25 + 0.5 + 0.5 + 0.5, 0.5, 0.5, '*', 0);
		test.AddScanLineByEdgeGradient(4, 1.0, off + offXY + (i * off) + off + off - 0.25 + 0.5 + 0.5 + 0.5, off + offXY + (i * off) + off + off - 0.25 + 0.5 + 0.5 + 0.5, -0.5, -0.5, '*', 0);
		offXY = offXY + 0.5;
	}
	off = 0.5;
	offXY = 0.5;
	for (int i = 0;i <= 0;i++)
	{
		ScanLenHorizontalLine(test, 5.0, 2 + (off + offXY + (i * off)), 0.5, 0.1);
		test.AddScanLineByEdgeGradient(5, 1.0, off + offXY + (i * off) - 0.25 + 0.5 + 0.5 + 0.5 + 0.5, off + offXY + (i * off) - 0.25 + 0.5 + 0.5 + 0.5 + 0.5, 0.5, 0.5, '*', 0);
		test.AddScanLineByEdgeGradient(5, 1.0, off + offXY + (i * off) + off + off - 0.25 + 0.5 + 0.5 + 0.5 + 0.5, off + offXY + (i * off) + off + off - 0.25 + 0.5 + 0.5 + 0.5 + 0.5, -0.5, -0.5, '*', 0);
		offXY = offXY + 0.5;
	}*/
	//
	int k = 4;
	int k1 = 1;
	for (int a = 0;a <= 4;a++)
	{
		for (int a1 = 0;a1 <= k;a1++)
		{
			ScanLenHorizontalLine(test, k1, a*0.5+off + offXY + (a1 * off), 0.5, 0.1);


			test.AddScanLineByEdgeGradient(k1, 1.0, off + offXY + (a1 * off) - 0.25+a*0.5, off + offXY + (a1 * off) - 0.25 + a * 0.5, 0.5, 0.5, '*', 0);
			test.AddScanLineByEdgeGradient(k1, 1.0, off + offXY + (a1 * off) + off + off - 0.25 + a * 0.5, off + offXY + (a1 * off) + off + off - 0.25 + a * 0.5, -0.5, -0.5, '*', 0);


			offXY = offXY + 0.5;
		}
		offXY = 0.5;
		k1++;
		k--;
	}
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
}
void P39()
{

	P39_1();
	ColPrintf(PrintfCol::����, "");
	P39_2();
	ColPrintf(PrintfCol::����, "");
	P39_3();
	ColPrintf(PrintfCol::����, "");
	P39_4();
	ColPrintf(PrintfCol::����, "");
	P39_5();
	ColPrintf(PrintfCol::����, "");
}
void P39_mian()
{
	Lang.SetCurLanguage(LanguageLib::Chinese);
	P39();
	Lang.SetCurLanguage(LanguageLib::English);
	P39();
	ColPrintf(PrintfCol::����, "");

}