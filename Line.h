#pragma once
#include "Point.h"

using namespace std;

class Line {
public:
	Line(Point pointA, Point pointB);
	double length();
	bool isPointOnLine(Point _point);
	bool isParallel(Line otherLine);
	bool isIntersecting(Line otherLine);
	string getString();
private:
	Point points[2];
};
