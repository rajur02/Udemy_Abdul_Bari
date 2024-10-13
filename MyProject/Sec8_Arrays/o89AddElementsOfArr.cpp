#include <iostream>
using namespace std;

int main()
{
    int A[7] = {2,4,1,7,9,3,6};
    int n=7, sum=0;
    for(int i=0; i<7; i++)
    {
        sum+=A[i];
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}