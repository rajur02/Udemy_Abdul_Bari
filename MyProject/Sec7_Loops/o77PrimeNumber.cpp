#include <iostream>
using namespace std;

int main()
{
    int n, i, count=0;
    cout << "Enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++) 
    {
        if(n%i == 0) {
             count++;
        }
    }
    if(count==2) cout << "Prime Number" << endl;
    else cout << "Not Prime Number";
    return 0;
}