#include <iostream>
using namespace std;

inline int minVal(int a, int b) 
{
    return (a < b) ? a : b;
}

inline int minVal(int a, int b, int c) 
{
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}


int main() 
{
    cout << "Minimum of 3 and 5: " << minVal(3, 5) << endl;
    cout << "Minimum of 7, 2 and 9: " << minVal(7, 2, 9) << endl;
    return 0;
}
