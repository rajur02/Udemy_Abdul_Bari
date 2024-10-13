#include <iostream>
using namespace std;

class Base
{
    public: 
        Base() { cout << "Default of Base" << endl; }
        Base(int x) { cout << "Paream of Base " << x << endl; }
        ~Base() { cout << "Destructor of Base" << endl;}
};

class Derived : public Base
{
    public:
        Derived() { cout << "Default of Derived" << endl; }
        Derived(int y) { cout << "Default of Derived " << y << endl;}
        Derived(int x, int y):Base(x) { cout << "Default of Base and Derived " << y << endl;}
        ~Derived() { cout << "Destructor of Derived" << endl;}
};

int main()
{
    Derived d;
    cout << endl;
    Derived d1(10);
    cout << endl;
    Derived d2(5,3);
    cout << endl;
    return 0;
}