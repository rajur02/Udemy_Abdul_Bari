#include <iostream>
using namespace std;

class Base
{
    public:
        //void fun() //if not made virtual this fun is called
        virtual void fun()
        {
            cout << "Fun of Base" << endl;
        }
};

class Derived : public Base
{
    public:
        void fun() //when the base class fun is made virtual Derived class fun is called 
        {
            cout << "Fun of Derived" << endl;
        }
};

int main()
{
    Derived d;
    Base *ptr = &d;  //Base class pointer assigned to derived class object 
    ptr->fun();
    return 0;
}
