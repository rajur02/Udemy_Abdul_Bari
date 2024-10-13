#include <iostream>
using namespace std;

int main()
{
    int n, rem=0, rev=0;
    cout << "Enter a number: ";
    cin>>n;

    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev= rev*10+rem;
    }
    cout << "Reversed Number is: " << rev << endl;
    while(rev>0)
    {
        rem=rev%10;
        rev=rev/10;
        switch (rem)
        {
        case 1:
            cout << "one ";
            break;
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        default:
            break;
        }
    }
    return 0;
}