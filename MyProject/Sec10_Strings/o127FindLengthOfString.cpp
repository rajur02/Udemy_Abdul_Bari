#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "WELCOME";
    //Uing just for loop
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    cout << "Length of String is: " << count << endl;

    //Using iterator
    int count1=0;
    string::iterator it;
    for(it=str.begin(); it!=str.end(); it++)
    {
        count1++;
    }
    cout << "Length of String is: " << count1 << endl;
    return 0;
}