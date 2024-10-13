#include <iostream>
using namespace std;

int main() 
{
    float basic, percentAllow, percentDeduct, netSalary;

    cout << "Enter Basic Salary ";
    cin >> basic;
    cout << "Enter Percentage of Allowance ";
    cin >> percentAllow;
    cout << "Enter PErcentage of deduction ";
    cin >> percentDeduct;

    netSalary = basic + basic*percentAllow/100 - basic*percentDeduct/100;
    cout << "Net salary is: " << netSalary << endl;

    return 0;
}