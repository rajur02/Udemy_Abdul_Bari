#include <iostream>
using namespace std;

int main()
{
    char s[20];
    cout << "Enter a name: ";
    cin>>s;
    cout << s << endl;

    cin.ignore();

    char r[40];
    cout << "Enter second name: ";
    cin.get(r,40);
    cout << r << endl;

    cin.ignore();

    char p[60];
    cout << "Enter third name: ";
    cin.getline(p,60);
    cout << p << endl;
    return 0;
}