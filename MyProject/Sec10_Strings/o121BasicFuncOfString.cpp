#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";
    cout << str.length() << endl;
    cout << str.size() << endl;
    cout << str.capacity() << endl;
    str.resize(50);
    cout << str.capacity() << endl;
    cout << str.max_size() << endl;
    str.clear();

    cout << str << endl;

    if(str.empty())
        cout << "String is empty";
    else
        cout << "String is: " << str << endl;
    return 0;
}
