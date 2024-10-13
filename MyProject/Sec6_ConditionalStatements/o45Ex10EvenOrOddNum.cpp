#include<iostream>
using namespace std;

void OddEven(int n)
{
    
    //write condition here to check "odd" or "even"
    if(n%2==0)
        cout<<"even";
    else
        cout<<"odd";
}

int main() 
{
    int n;
    cout << "Enter a number " << endl;
    cin>>n;
    OddEven(n);
    return 0;
}