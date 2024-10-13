#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float A[100], sum=0.0, Average;
    cout << "Enter the number of Elements: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cout << i << ". Enter the number: ";
        cin>>A[i];
        sum+=A[i];
    }
    Average = sum/n;
    cout << "Average of " << n << " elements is: " << Average << endl;
    return 0;
}