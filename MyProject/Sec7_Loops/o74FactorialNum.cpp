#include <iostream>
using namespace std;

int main()
{
    int n,i, fact=1;
    cout << "enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        fact*=i;
    }
    cout <<"Factorial of n is: " << fact;
    return 0;
}