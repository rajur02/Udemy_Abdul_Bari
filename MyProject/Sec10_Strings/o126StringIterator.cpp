#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "today";
    // string::iterator it;
    // for(it=str.begin(); it!=str.end(); it++)
    // {
    //     //cout << *it;
    //     *it-=32;
    // }
    //cout << str << endl;

    string::reverse_iterator it;
    for(it=str.rbegin(); it!=str.rend(); it++)
    {
        cout << *it;
    }
    cout << endl;

    //Using for loop
    for(int i=0; str[i]!='\0'; i++)
    {
        //cout << str[i];
        str[i]-=32;
    }
    cout << str << endl;
    return 0;
}