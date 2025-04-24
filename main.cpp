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

}
