#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cout << "Enter two numbers: ";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else if(n>m)
        {
            n=n-m;
        }
    }
    cout << "GCD of 2 numbers is: " << m << endl;
    return 0;
}