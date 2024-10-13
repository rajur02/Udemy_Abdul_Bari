#include <iostream>
using namespace std;

int main() 
{
    int rollno;
    cout << "Enter a roll number: ";
    cin>>rollno;

    if(rollno<1)
        cout << "Invalid roll no";
    else
        cout << "Valid roll no";

    return 0;
}