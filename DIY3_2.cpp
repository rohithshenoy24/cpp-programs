#include <iostream>
using namespace std;

class Counter 
{
private:
    int count;

public:
    // Constructor initializes the count to 0
    Counter() : count(0) {}
   
    void increment() 
    {
        count++;
    }

    void reset() 
    {
        count = 0;
    }

  
    int get() const 
    {
        return count;
    }
};

int main() 
{
    
    Counter c[3];

   
    c[0].increment();
    c[0].increment();

    c[1].increment();
    c[1].increment();
    c[1].increment();
    c[1].reset();

    c[2].increment();

    
    for (int i = 0; i < 3; ++i) 
    {
        cout << "Counter " << i << " value: " << c[i].get() << endl;
    }

    return 0;
}
