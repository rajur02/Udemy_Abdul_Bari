#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Programming";
    string str2 = "language";
    //str1.replace(3,6,"H");
    //str1.erase();
    //str1.push_back('A');
    //str1.pop_back();
    str1.swap(str2);
    cout << str1 << endl;
    return 0;
}