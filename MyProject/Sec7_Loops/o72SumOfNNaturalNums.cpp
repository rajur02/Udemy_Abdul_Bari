#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter a number: ";
    cin>>n;
    //using for loop
    // for(int i=1; i<=n; i++)
    // {
    //     sum+=i;
    // }

    //using while loop
    int i=1;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}