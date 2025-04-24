#pragma once
#include <string>
using namespace std;

class Point
{
public:
	Point(double x, double y);

	string getX();
	string getY();
	string getCoordinate();
	double round(double coordinateToRound);

private:
	double xCoordinate;
	double yCoordinate;
};