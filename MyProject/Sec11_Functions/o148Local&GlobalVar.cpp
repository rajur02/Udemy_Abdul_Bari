#include <iostream>
using namespace std;

int g=10;

void fun()
{
    int g=20;
    {
        int g=0;
        g++;
        cout << g << endl;
    }
    g++;
    cout << g << endl;
}

int main()
{
    cout << g << endl;
    fun();
    cout << g << endl;
    return 0;
}