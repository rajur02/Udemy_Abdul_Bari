#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout << "Enter 2 numbers: ";
    cin>>a>>b;

    if(b==0) 
    {
        cout << "Denominator is zero";
    }
    else
    {
        c=a/b;
        cout << "The value of c is: " << c;
    }
    return 0;
}