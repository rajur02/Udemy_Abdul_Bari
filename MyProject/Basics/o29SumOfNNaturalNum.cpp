#include <iostream>
using namespace std;

int main()
{
    int sum, n;
    cout << "Enter a natural number" << endl;
    cin >> n;
    sum = n*(n+1)/2;
    cout << "The sum is: " << sum;
    return 0;
}