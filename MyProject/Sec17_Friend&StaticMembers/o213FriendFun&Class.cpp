#include <iostream>
using namespace std;

//Friend Function
/* class Test
{
    private: int a;
    protected: int b;
    public: int c;
        friend void fun();
};

void fun()
{
    Test t;
    t.a=15;
    t.b=10;
    t.c=5;
} */

//Friend class
class Your;
class My
{
    private: int a;
    protected: int b;
    public: int c;
        friend Your;
};

class Your
{
    public:
        My m;
        void fun()
        {
            m.a=15;
            m.b=10;
            m.c=5;
        }
};

int main()
{
    return 0;
}