#include "Line.h"

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

