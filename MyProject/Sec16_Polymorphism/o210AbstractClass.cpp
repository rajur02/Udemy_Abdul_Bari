#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void fun1()=0;
        virtual void fun2()=0;
};

class Derived : public Base
{
    public:
        void fun1()
        {
            cout << "fun1 of derived" << endl;
        }
        void fun2()
        {
            cout << "fun2 of derived" << endl;
        }
};

int main()
{
    Derived d;
    d.fun1();
    d.fun2();
    Base *ptr = &d;
    ptr->fun1();
    return 0;
}