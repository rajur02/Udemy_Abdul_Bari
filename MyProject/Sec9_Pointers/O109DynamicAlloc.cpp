#include <iostream>
using namespace std;

int main()
{
    //memory allocated in stack
    int size;
    cout << "Enter size of array: ";
    cin>>size;
    int A[size];
    // for(int i=0; i<size; i++)
    // {
    //     cin>>A[i];
    // }
    // cout << endl;
    // for(int i=0; i<size; i++)
    // {
    //     cout<<A[i]<<" ";
    // }

    //Dynamic Allocation of memory
    int *p = new int[size];
    for(int i=0; i<size; i++)
    {
        cin>>p[i];
    }
    cout << endl;
    for(int i=0; i<size; i++)
    {
        cout<<p[i]<<" ";
    }
    cout << endl;
    delete []p;

    cout << "Enter new size: ";
    cin>>size;
    p = new int[size];
    for(int i=0; i<size; i++)
    {
        cin>>p[i];
    }
    cout << endl;
    for(int i=0; i<size; i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}