#include <iostream>
using namespace std;

class Base
{
    public:
        int a=1;
        void fun1()
        {
            cout << "Base class fun1" << endl;
            cout << "Value of a is " << a << endl;
        }
};

class Derived : public Base
{
    public:
        int b=2;
        void fun2()
        {
            cout << "Derived class fun2" << endl;
            cout << "Value of b is " << b << endl;
        }
};

int main()
{
    Derived d;
    Base *b = &d;
    b->a = 10;
    b->fun1();
    return 0;
}