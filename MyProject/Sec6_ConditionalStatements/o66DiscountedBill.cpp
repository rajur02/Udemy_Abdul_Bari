#include <iostream>
using namespace std;

int main()
{
    float billAmount, discAmount=0.0;
    cout << "Enter bill amount: ";
    cin >> billAmount;
    if(billAmount>=500)
    {
        discAmount = billAmount*20/100;
    }
    else if(billAmount>=100 && billAmount<500) 
    {
        discAmount = billAmount*10/100;
    }
    cout << "Bill Amount is: " << billAmount << endl;
    cout << "Discounted amount is: " << discAmount << endl;
    cout << "Bill to be paid is: " << billAmount-discAmount << endl;
    return 0;
}