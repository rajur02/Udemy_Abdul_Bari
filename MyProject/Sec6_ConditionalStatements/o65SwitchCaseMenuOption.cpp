#include <iostream>
using namespace std;

int main()
{
    int option;
    int a,b,c;
    cout << "Menu Options\n";
    cout << "1. Add\n" << "2. Substract\n" << "3. Multify\n" << "4. Divide\n";
    cout << "Enter Menu Option: " << endl;
    cin>>option;
    cout << "Enter 2 numbers:" << endl;
    cin>>a>>b;

    switch(option) 
    {
        case 1: c=a+b;
            break;
        case 2: c=a-b;
            break;
        case 3: c=a*b;
            break;
        case 4: c=a/b;
            break;
        default: cout << "invalid input" << endl;
    }
    cout << "The value is: " << c << endl;
    return 0;
}