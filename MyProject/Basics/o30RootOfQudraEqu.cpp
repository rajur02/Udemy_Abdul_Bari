#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    float root=0;
    cout << "Enter a, b and c " << endl;
    cin>>a>>b>>c;
    root=(-b+sqrt(b*b+4*a*c))/(2*a);
    cout << "The root of Quadratic Equation is: " << root;
    return 0;
}