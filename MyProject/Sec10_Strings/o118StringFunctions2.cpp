#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //Substring(strstr(main,sub))
    //char s1[20]="Programming";
    // char s2[20]="gram";
    // if(strstr(s1,s2)!=NULL)
    //     cout << strstr(s1,s2) << endl;
    // else
    //     cout << "Not found" << endl;

    //string character(strchr(main, char))
    //char s1[20]="Programming";
    // cout << strchr(s1,'m') << endl;
    // cout << strrchr(s1,'m') << endl;

    //String compare
    //char s1[10]= "Hello";
    //char s2[10]= "Hello";
    //char s2[10]= "HellO";
    char s1[10]= "minor";
    char s2[10]= "elder";

    cout << strcmp(s1,s2) << endl;

    return 0;
}