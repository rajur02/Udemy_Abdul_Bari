#include <iostream>
using namespace std;

float fun()
{
    return 3.142f;
}

int main()
{
    //auto x=5*5.7+'a';
    auto x = fun();
    cout << x <<endl;

    int a=10;
    float b=90.5f;
    decltype(b) c = 12.3f;
    cout << c << endl;
}