#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //ifstream infile("my.txt");
    ifstream infile;
    infile.open("my.txt");
    //if(!infile)
    if(!infile.is_open())
        cout << "File does not exist" << endl;
    
    string name, branch;
    int roll;

    infile>>name>>roll>>branch;
    infile.close();

    cout << "Name " << name << endl;
    cout << "roll " << roll << endl;
    cout << "branch " << branch << endl;
    return 0;
}
 