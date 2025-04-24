#include <iostream>
#include <assert.h>
#include <iomanip>
#include "Point.h"
using namespace std;

void pointTest();


int main()
{
    pointTest();
    cout << "All tests passed" << endl;
    return 0;
}
//--
void pointTest() {
    Point p1(1.034567, 2.0789);
    assert(p1.getCoordinate() == "X: 1.0 Y: 2.1");
    Point p2(1.634567, 2.0389);
    assert(p2.getCoordinate() == "X: 1.6 Y: 2.0");
    Point p3(0.00000, 0.00000);
    assert(p3.getCoordinate() == "X: 0.0 Y: 0.0");
    Point p4(5.41, 8.35);
    assert(p4.getCoordinate() == "X: 5.4 Y: 8.4");
    Point p5(5.045, 8.05);
    assert(p5.getCoordinate() == "X: 5.0 Y: 8.1");

}
