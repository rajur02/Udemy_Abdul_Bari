#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //String to long int and float
    // char s1[10]="235";
    // char s2[10]="54.78";
    // cout << s1 << endl << s2 << endl;
    // long int x=strtol(s1,NULL,10);
    // float y=strtof(s2,NULL);
    // cout << x+10 << endl << y-5 << endl;

    //Tokenising a string
    char s1[20]="x=10;y=20;z=35";
    char *token = strtok(s1,";");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL,";");
    }
    return 0;
}