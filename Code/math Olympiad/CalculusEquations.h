#pragma once
void picture()
{
	typedef ScanningLine<9, 9, 18, 8> ScanningLineT;
	ScanningLineT test;
	ScanLenHorizontalLine(test, 8.0, 1, 7.0, 0.1);
	test.AddScanLineByEdgeGradient(3.0, 5.0, 1.0, 1.0, 0, 0, '*');
	std::vector<ScanningLineT::Point> Vex1 = { {float(1),float(6)},{float(5),float(6.0)},{float(5),float(8.0)} };
	test.AddPolygon(ScanningLineT::Point(float(1.0), float(8.0)), Vex1, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex2 = { {float(5),float(6)},{float(8),float(6.0)},{float(8),float(8.0)} };
	test.AddPolygon(ScanningLineT::Point(float(5.0), float(8.0)), Vex2, ScanningLineT::FillMode::RealMode, '-');
	std::vector<ScanningLineT::Point> Vex5 = { {float(5),float(6)},{float(8),float(6.0)},{float(8),float(8.0)} };
	test.AddPolygon(ScanningLineT::Point(float(5.0), float(8.0)), Vex5, ScanningLineT::FillMode::EdgeMode, '*');

	std::vector<ScanningLineT::Point> Vex3 = { {float(5),float(3)},{float(8),float(3.0)},{float(8),float(6.0)} };
	test.AddPolygon(ScanningLineT::Point(float(5.0), float(6.0)), Vex3, ScanningLineT::FillMode::RealMode, '+');
	std::vector<ScanningLineT::Point> Vex6 = { {float(5),float(3)},{float(8),float(3.0)},{float(8),float(6.0)} };
	test.AddPolygon(ScanningLineT::Point(float(5.0), float(6.0)), Vex6, ScanningLineT::FillMode::EdgeMode, '*');

	test.AddTriangle(ScanningLineT::Point(1.0, 6.0 ), ScanningLineT::Point(5, 3 ), ScanningLineT::Point(5, 6 ), ScanningLineT::FillMode::EdgeMode, '*');

	test.AddTriangle(ScanningLineT::Point(5, 3), ScanningLineT::Point(8, 1), ScanningLineT::Point(8, 3), ScanningLineT::FillMode::RealMode, '+');
	test.AddTriangle(ScanningLineT::Point(5,3), ScanningLineT::Point(8, 1), ScanningLineT::Point(8, 3), ScanningLineT::FillMode::EdgeMode, '*');
	ScanLenHorizontalLine(test, 3, 5, 3.0, 0.1);
	test.AddText(PrintfCol::Blue, 2.9, 0.9, "V(t)");
	test.AddText(PrintfCol::Blue, 8.2, 8.2, "t");
	test.AddText(PrintfCol::Blue, 6.5, 6.5, "S1");
	test.AddText(PrintfCol::Blue, 4.5, 6.5, "S21");
	test.AddText(PrintfCol::Blue, 2.5, 6.5, "S22");
	test.AddText(PrintfCol::Blue, 0.9, 7.9, "V(t+dt)");
	test.AddText(PrintfCol::Blue, 2,8.1, "a*dt");
	test.AddText(PrintfCol::Blue, 4, 8.1, "a*t");
	test.AddText(PrintfCol::Blue, 7, 8.1, "V0");
	test.AddText(PrintfCol::Blue, 2.9, 4.9, "V(t)");
	test.Clear(' ');
	test.Draw();
	test.Printf(PrintfCol::Green);
}