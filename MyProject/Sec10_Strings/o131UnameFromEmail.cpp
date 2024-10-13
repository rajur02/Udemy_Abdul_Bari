#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "john123@gmail.com";
    int i = str.find('@');
    string uname = str.substr(0,i);
    cout << "Usename is: " << uname << endl;
    return 0;
}