#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
        int roll;
        string name;
        static int addNo;
        Student(string n)
        {
            addNo++;
            roll=addNo;
            name=n;
        }
        void Display()
        {
            cout << "Name is " << name << endl << "Roll no is " << roll << endl;
        }
};

int Student::addNo=0;

int main()
{
    Student s1("john");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Khan");
    Student s5("Khan");
    Student s6("Khan");
    Student s7("Khan");

    s1.Display();
    s7.Display();
    cout << "Number of Admissions " << Student::addNo << endl;
    return 0;
}