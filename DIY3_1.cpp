#include <iostream>
using namespace std;

class Rectangle 
{
private:
    double length;
    double width;

public:
   
    Rectangle(double l, double w) 
    {
        setLength(l);
        setWidth(w);
    }

    void setLength(double l) 
    {
        if (l < 0.0) 
        {
            cout << "Length cannot be negative." << endl;
            exit(1); 
        }
        length = l;
    }

    void setWidth(double w) 
    {
        if (w < 0.0) 
        {
            cout << "Width cannot be negative." << endl;    
            exit(1);
        }
        width = w;
    }
   
    double area() const 
    {
        return length * width;
    }

    double perimeter() const 
    {
        return 2.0 * (length + width);
    }   
};

int main()
{
  double length, width;
  cout << "Enter length of the rectangle: "<<endl;
  cin >> length;
  cout << "Enter width of the rectangle: "<<endl;
  cin >> width;
  Rectangle rect(length, width);

    cout << "Area of the rectangle: " << rect.area() << endl;
    cout << "Perimeter of the rectangle: " << rect.perimeter() << endl;

    return 0;
}
