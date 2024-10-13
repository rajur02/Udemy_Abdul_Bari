#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3;
    float Total,Avg;
    cout << "Enter 3 marks: ";
    cin>>m1>>m2>>m3; 
    Total = m1+m2+m3;
    Avg = Total/3.0;
    //write nested if statements to print grades
    if(Avg>=60)
    {
        cout<<'A';
    }
    else if(Avg>=35 && Avg<60)
    {
        cout<<'B';
    }
    else
    {
        cout<<'C';
    }
    return 0;
}