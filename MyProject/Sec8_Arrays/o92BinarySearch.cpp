#include <iostream>
using namespace std;

int main()
{
    int A[10] = {6,8,13,17,20,22,25,28,30,35};
    int key, l=0, h=9, mid;
    cout << "Enter the key: ";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout << "Found key at: " << mid << endl;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout << "Key not found" << endl;
    return 0;
}