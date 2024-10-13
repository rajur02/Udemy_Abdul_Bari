#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string str = "WELCOME";
    // for(int i=0; str[i]!='\0';i++)
    // {
    //     if(str[i]>=67 && str[i]<=90)
    //     {
    //         str[i]+=32;
    //     }
    // }
    // cout << str << endl;

    string str = "WeLcomE7";
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout << str << endl;

    return 0;
}