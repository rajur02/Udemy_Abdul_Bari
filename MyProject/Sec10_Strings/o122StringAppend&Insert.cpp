#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str = "Hello";

    //String Append
    cout << str.capacity() << endl;
    //cout << str.append("World, Welcome to India. Have a safe journey") << endl;
    cout << str.capacity() << " " << str.length() << endl;

    //String Insert
    cout << str.insert(3,"kk") << endl;
    string str1 = "How you";
    cout << str1.insert(3, " area", 4) << endl;
    return 0;
}