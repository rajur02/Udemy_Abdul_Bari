#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //String length
    //char s[100] = "Hello";
    //cout << strlen(s) << endl;
    // char s[50];
    // char *S=s;
    // cout << "Enter a string: ";
    // cin.getline(S,50);
    // cout << "Length is: " << strlen(S) << endl;

    //String Concatenation
    char s1[20]="Good";
    char s2[10]="Morning";
    // strcat(s1,s2);
    // cout << s1 << endl;
    // strncat(s1,s2,3);
    // cout << s1 << endl;

    //String Copy
    char s3[10]="";
    //strcpy(s3,s2);
    strncpy(s3,s2,3);
    cout << s3 << endl;
    return 0;
}