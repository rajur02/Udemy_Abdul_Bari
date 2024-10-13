#include <iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        //cout << n <<  endl; //output 5,4,3,2,1
        fun(n-1);
        cout << n <<  endl; //output 1,2,3,4,5
    }
}

int main()
{
    fun(5);
    return 0;
}