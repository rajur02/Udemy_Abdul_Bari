#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int Max(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else return c;
}

//write a pow() function here 
int pow(int m, int n)
{
    int p=1;
    for(int i=1; i<=n; i++)
    {
        p*=m;
    }
    return p;
}

int main()
{
    cout << "Result is: " << add(10,15) << endl;
    cout << "Max number is: " << Max(7,10,5) << endl;
    cout << "Power is: " << pow(2,5) << endl;
    return 0;
}