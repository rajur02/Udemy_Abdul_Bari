#include <iostream>
using namespace std;

class Parent
{
    public:
        void Display()
        {
            cout << "Display of Parent" << endl;
        }
};

class Child : public Parent
{
    public:
        //void Display(int x)  //This is not function overriding as prototype is not same as Parent 
        void Display()  //Function Overriding with same function prototype as Parent class
        {
            cout << "Display of Child" << endl;
        }
};

int main()
{
    Child c;
    c.Display(); //This is overriding function call for child function

    c.Parent::Display();
}