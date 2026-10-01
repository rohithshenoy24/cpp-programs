#include <iostream>
using namespace std;

double volume(double side) 
{
    return side * side * side;
}

double volume(double length, double width, double height) 
{
    return length * width * height;
}


double volume(double radius, double height) 
{
    return 3.141 * radius * radius * height;
}

int main() 
{
    cout << "Cube volume (side=3): " << volume(3.0) << endl;
    cout << "Cuboid volume (l=2, w=4, h=5): " << volume(2.0, 4.0, 5.0) << endl;
    cout << "Cylinder volume (r=3, h=7): " << volume(3.0, 7.0) << endl;
    return 0;
}
