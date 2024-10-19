#include <iostream>
using namespace std;

class Test
{
    //In class initialization
    int x=10;
    int y=13;

    public:
        Test(int a, int b)
        {
            x=a;
            y=b;
        }
        Test():Test(1,1)  //Delegation of Constructor
        {}
        void show()
        {
            cout << x << " " << y << endl;
        }
};

int main()
{
    Test t;
    t.show();
}