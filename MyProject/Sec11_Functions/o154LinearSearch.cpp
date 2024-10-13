#include <iostream>
using namespace std;

int Search(int A[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(key==A[i])
            return i;
    }
    return 0;
}

int main()
{
    int A[] = {2,3,5,6,8,10,11,13,15,17};
    int k;
    cout << "Enter the key to be searched: ";
    cin>>k;
    int index = Search(A,10,k);
    cout << "key is found at index: " << index << endl;
    return 0;
}