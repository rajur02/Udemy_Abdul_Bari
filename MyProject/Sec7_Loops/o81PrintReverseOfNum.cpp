#include <iostream>
using namespace std;

int main()
{
    int n, rem=0, rev=0;
    cout << "Enter a number: ";
    cin>>n;

    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev= rev*10+rem;
    }
    cout << "Reversed Number is: " << rev;
    return 0;
}