#include <iostream>
#include "rectangle.hpp"
using namespace std;

int main()
{
    Rectangle r = Rectangle(5,4) ;
    cout << r.getWidth() << endl;
    cout << r.getHeight() << endl;
    cout << r.area() << endl;
    return 0;
}