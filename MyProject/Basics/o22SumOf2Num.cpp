// MyProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the name: ";
    getline(cin, str);
    cout << "Your name is: " << str << endl;

    int a, b, c;
    cout << "Enter two numbers";
    cin >> a >> b;
    c = a + b;
    cout << "Sum is :" << c << endl;

    return 0;
}

