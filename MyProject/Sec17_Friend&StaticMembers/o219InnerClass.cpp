#include <iostream>
using namespace std;

class Outer
{
    public: 
        void fun()
        {
            i.Display();
        }
        class Inner
        {
            public: 
                void Display()
                {
                    cout << "Inner Class" << endl;
                }
        };
        Inner i;
};

int main()
{
    Outer::Inner i;  //If we want don't want Inner class to access outside of Outer class we can make the inner class as private in outer class
    i.Display();
    Outer o;
    o.fun();
    return 0;
}
