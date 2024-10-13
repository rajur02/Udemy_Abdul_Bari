#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount: ";
    cin>>amount;
    float disAmount;
    
    //write nested onditions to print discounted amount 
    if(amount>=5000)
    {
        disAmount=amount-(amount*20)/100.0;
        cout << disAmount;
    }
    else if(amount>=2000 && amount<5000)
    {
        disAmount=amount-(amount*10)/100.0;
        cout << disAmount;
    }
    else
    {
        disAmount=amount-(amount*5)/100.0;
        cout << disAmount;
    }
    return 0;
}