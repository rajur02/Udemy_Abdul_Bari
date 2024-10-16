#include <iostream>
using namespace std;

#ifndef PI
    #define PI 3.142
#endif

#define max(x,y) (x>y?x:y)
#define msg(x)  #x

int main()
{
    cout << PI << endl;
    cout << max(12,4) << endl;
    cout << msg("Hello") << endl;
    return 0;
}