#include<iostream>
using namespace std;

void max(int x,int y)
{
    //write conditions here to print maximum of 2 numbers
    if(x>y) {
        cout<<x;
    } else {
        cout<<y;
    }
}

int main()
{
    int a, b;
    cout << "Enter 2 numbers: " << endl;
    cin>>a>>b;
    max(a,b);
    return 0;
}