#include <iostream>
using namespace std;

int main()
{
    int n, rem=0, rev=0, temp;
    cout << "Enter a number: ";
    cin>>n;
    temp=n;

    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev= rev*10+rem;
    }
    if(rev==temp) cout << "Palindrome number";
    else cout << "Not Palindrome number";
    return 0;
}