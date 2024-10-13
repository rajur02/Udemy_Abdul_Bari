#include<iostream>
using namespace std;

void Sign(int n)
{
    //write conditional statement here to print "positive" or "negative"
    if(n>=0)
        cout << "positive";
    else
        cout<< "negative";
    
}

int main() 
{
    int n;
    cout << "Enter a number " << endl;
    cin>>n;
    Sign(n);
    return 0;
}