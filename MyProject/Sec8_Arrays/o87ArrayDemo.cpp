#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2,3,5,6,8};
    for(int i=0; i<5; i++)
        cout << A[i] << " ";
        cout << endl;

    float B[] = {1.0f, 2.5f, 4.3f, 8, 9};
    for(float x: B) 
       cout << x << " ";
       cout << endl;

    char C[4] = {'A', 66, 'C', 68};
    for(auto x: C)
        cout << x << " ";
        cout << endl;

    return 0;
}