#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //Substring
    string str = "Programming";
    //cout << str1.substr(3) << endl;
    //cout << str1.substr(3,4) << endl;

    //String Compare
    string str1 = "Hello";
    string str2 = "hello";
    //cout << str1.compare(str2) << endl;

    //String operators
    string s = "Holiday";
    //cout << s.at(4) << endl;
    //s[4] = 'M';
    //cout << s << endl;
    string s1 = "Hello";
    string s2 = " World";
    //s1 = s1 + s2;
    s1 = s1 + " World"; 
    s1=s2;
    cout << s1 << endl;
    
    return 0;
}