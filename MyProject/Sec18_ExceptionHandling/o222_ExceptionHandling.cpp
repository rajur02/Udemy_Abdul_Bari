#include <iostream>
using namespace std;

int main()
{
    int a=10, b=0, c;
    try{
        if(b==0)
            throw 101;
        c=a/b;
        cout << c << endl;
    } 
    catch(int e)
    {
        cout << "Division by zero, errocode: " << e << endl;
    }
    cout << "bye" << endl;
    return 0;
}