#include <iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)
        throw 101;
    return a/b;
}

int main()
{
    int x=10, y=2, z;
    try
    {
        z=division(x,y);
        cout << z << endl;
    }
    catch(int e)
    {
        cout << "Division by zero, errorcode: " << e << endl;
    }
    cout << "Bye" << endl;
}