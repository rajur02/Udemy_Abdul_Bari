#include <iostream>
using namespace std;

int main()
{
    int A[2][3] = {1,2,3,4,5,6};
    int B[2][3] = {8,7,6,5,4,3};
    int C[2][3];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        cout << endl;
    }
    for(auto& x:C)
    {
        for(auto& y:x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}