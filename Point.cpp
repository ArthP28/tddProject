#include "Point.h"
#include <iomanip>
#include <sstream>

Point::Point(double x, double y){
    xCoordinate = round(x);
    yCoordinate = round(y);
}

string Point::getCoordinate(){
    stringstream retVal;
    retVal << fixed << setprecision(1) << "X: " << xCoordinate << " Y: " << yCoordinate;
    return retVal.str();
}

double Point::round(double coordinateToRound) {
    int multipliedCoordinate = (coordinateToRound + 0.05) * 10.0;
    double roundedCoordinate = multipliedCoordinate / 10.0;
    return roundedCoordinate;
}