#include <iostream>
using namespace std;

int main() 
{
    int i=5, j;
    j = i++;
    cout << i << " " << j << endl;
    j = ++i;
    cout << i << " " << j << endl;
    i=5;
    j = 2 * i++ + 2 * i++;
    cout << i << " " << j << endl;
    return 0;
}