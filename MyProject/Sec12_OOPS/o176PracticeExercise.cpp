#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;
    }

    int total()
    {
        return mathMarks+phyMarks+chemMarks;
    }

    char grade()
    {
        float avg=total()/3;
        if(avg>60)
            return 'A';
        else if(avg>=40 && avg<=60)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int m,p,c;
    cout << "Enter the Roll number of a student: ";
    cin>>roll;
    cin.ignore();
    cout << "Enter Name of the student: ";
    //cin>>name;
    getline(cin, name);
    cout << "Enter marks in 3 subjects: ";
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout << "Total Marks: " << s.total() << endl;
    cout << "Grade of Student is: " <<s.grade() << endl; 
    return 0;
}