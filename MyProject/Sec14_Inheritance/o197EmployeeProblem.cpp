#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        int empid;
        string name;
    public:
        Employee(int e, string n)
        {
            empid=e;
            name=n;
        }
        int getEmpID() { return empid; }
        string getEmpName() { return name; } 
};

class FullTimeEmployee : public Employee
{
    private:
        int salary;
    public:
        FullTimeEmployee(int e, string n, int s):Employee(e,n)
        {
            salary=s;
        }
        int getSalary() { return salary; }
};

class PartTimeEmployee : public Employee
{
    private:
        int wage;
    public:
        PartTimeEmployee(int e, string n, int w):Employee(e,n)
        {
            wage=w;
        }
        int getWage() { return wage; }
};

int main()
{
    FullTimeEmployee p1(1, "Raj", 300);
    PartTimeEmployee p2(2, "john", 100);
    cout << "Salary of: " << p1.getEmpName() << " is " << p1.getSalary() << endl;
    cout << "Wage of: " << p2.getEmpName() <<" is " << p2.getWage() << endl;
    return 0;
}