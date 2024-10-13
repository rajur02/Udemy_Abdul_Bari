#include <iostream>
using namespace std;

class Parent
{
    private: int a;
    protected: int b;
    public: int c;

    void funParent()
    {
        a=10; b=5; c=15;
    }
};

//class Child : protected Parent
class Child : private Parent
{
    protected:
    public:

    void funChild()
    {
        //a=10; 
        b=5; c=15;
    }
};

class GrandChild : public Child
{
    public:

    void funGrandChild()
    {
        //a=3;  //protected Parent
        //b=6; c=9;  //private Parent
    }
};

int main()
{
    Child c;
    //c.a=10;
    //c.b=15;
    //c.c=20;
    return 0;
}