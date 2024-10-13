#include <iostream>
using namespace std;

int main()
{
    int A[5]{2,4,6,8,10};
    int *p=A, *q=&A[4];
    // cout << *p << endl;
    // p++;
    // cout << *p << endl;
    // p--;
    // cout << *p << endl;

    // cout << p << endl;
    // cout << p+2 << endl;
    // cout << *p << endl;
    // cout << *(p+2) << endl;

    cout << p << endl;
    for(int i=0; i<5; i++)
    {
        //cout << A[i] << endl; //1
        //cout << i[A] << endl;  //2
        //cout << *(A+i) << endl;  //3
        //cout << A+i << endl;  //4 Addresses
        //cout << *(p+i) << endl;  //5
        //cout << p+i << endl;  //6
        //cout << p[i] << endl;  //7
        
        // cout << *p << endl; //8
        // p++;
    }
    cout << p << endl;

    cout << q-p << endl;
    cout << p-q << endl;
    return 0;
}