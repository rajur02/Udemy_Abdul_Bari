#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, rem=0, sum=0, temp;
    cout << "Enter a number: ";
    cin>>n;
    temp=n;

    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum+=pow(rem,3);
    }
    if(sum==temp) cout<<"Armstrong Number";
    else cout << "Not Armstrong Number";
    return 0;
}