#include <iostream>
using namespace std;

void fun()
{
    static int s=0;
    int v=0;
    v++; s++;
    cout << v << " " << s << endl;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}