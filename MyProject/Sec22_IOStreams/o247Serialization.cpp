#include <iostream>
//#include<bits/stdc++.h>
#include <fstream>
using namespace std;

/* class Student
{
public:
    int roll;
    string name, branch;
    friend ofstream & operator<<(ofstream& out, Student s);
    friend ifstream & operator>>(ifstream& in, Student s);
};

ofstream & operator<<(ofstream& out, Student s)
{
    out<<s.name<<endl;
    out<<s.roll<<endl;
    out<<s.branch<<endl;
    return out;
}

ifstream & operator>>(ifstream& ifs, Student s)
{
    ifs>>s.name>>s.roll;
    ifs>>s.branch;
    return ifs;
}

int main()
{
    Student s1;

    //Creating and wriring an object state to a file using operator overloading 
    // s1.name="Khan"; s1.roll=1; s1.branch="CS";

    // ofstream outfile("Student.txt", ios::trunc);
    // outfile<<s1;
   // outfile.close();

    //Reading object state from a file using operator overloading 
    ifstream infile("Student.txt");
    infile>>s1;
    cout << "Name " << s1.name << endl;
    cout << "Roll " << s1.roll << endl;
    cout << "Branch " << s1.branch << endl;
    infile.close();
    return 0;
} */
 


class Student
{
private:
    string name;
    int roll;
    string branch;
public:
    Student(){}
    Student(string n,int r,string b)
    {
        name=n;
        roll=r;
        branch=b;
    }
    friend ofstream & operator<<(ofstream &ofs,Student s);
    friend ifstream & operator>>(ifstream &ifs,Student &s);
    friend ostream & operator<<(ostream &os,Student &s);
};
ofstream & operator<<(ofstream &ofs,Student s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.name;
    ifs>>s.roll;
    ifs>>s.branch;
    return ifs;
}

ostream & operator<<(ostream &os,Student &s)
{
    os<<"Name "<<s.name<<endl;
    os<<"Roll "<<s.roll<<endl;
    os<<"Branch "<<s.branch<<endl;
    return os;
}
int main()
{
    ofstream ofs("Test.txt");
    Student s1("John",10,"CS");
    ofs<<s1;
    ofs.close();
    Student s2;
    ifstream ifs("Test.txt");
    ifs>>s1;
    cout<<s1;
} 