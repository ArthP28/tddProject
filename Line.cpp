#include "Line.h"
#include <cmath>

Line::Line(Point pointA, Point pointB) {
	points[0] = new Point(pointA);
	points[1] = new Point(pointB);
}

Line::~Line() {
	delete points[0];
	delete points[1];
	points[0] = NULL;
	points[1] = NULL;
}

// TODO: Implement and test all other methods of the line class!

string Line::getString() {
	return "Point 1: [" + points[0]->getCoordinate() + "], Point 2: [" + points[1]->getCoordinate() + "]";
}
double Line::length() {
	double lengthX = points[1]->getX() - points[0]->getX();
	double lengthY = points[1]->getY() - points[0]->getY();
	double hypotenuse = sqrt(pow(lengthX, 2.0) + pow(lengthY, 2.0));
	return hypotenuse;
}

bool Line::isPointOnLine(Point _point) {
	return true;
}
bool Line::isParallel(Line otherLine) {
	return true;
}
bool Line::isIntersecting(Line otherLine) {
	return true;
}
