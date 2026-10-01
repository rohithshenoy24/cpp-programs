#include <iostream>
using namespace std;

class Complex 
{
private:
    double real;
    double imag;

public:
    void setData(double r, double i) 
    {
        real = r;
        imag = i;
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() 
{
    Complex A[3];

    A[0].setData(3.5, 4.5);
    A[1].setData(-1.2, 7.8);
    A[2].setData(0.0, 2.5);

    for (int i = 0; i < 3; ++i) 
    {
        cout << "Complex number " << i << ": ";
        A[i].display();
    }

    return 0;
}
