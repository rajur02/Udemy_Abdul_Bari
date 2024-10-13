#include <iostream>
#include <string>

using namespace std;

int main()
{
    //String copy function
    string str = "Welcome";
    char s[10];

    //str.copy(s,str.length());
    str.copy(s,3);
    s[3]='\0';   //This is not required in C++14
    cout << s << endl;

    //String find, rfind, find_first_of and find_last_of
    string str1 = "How are you";
    //cout << str1.find("are") << endl;
    //cout << str1.find('o') << endl;
    //cout << str1.rfind('o') << endl;
    
    string str2 = "Hello World";
    cout << str2.find_first_of('l') << endl;
    cout << str2.find_first_of('l',4) << endl;
    cout << str2.find_first_of("le") << endl;
    cout << str2.find_last_of('l') << endl;
    
    return 0;
}