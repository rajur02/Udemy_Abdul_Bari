#include <iostream>
using namespace std;

int max(int x, int y)
{
    return x>y?x:y;
}

int min(int x, int y)
{
    return x<y?x:y;
}

int main()
{
    int (*fp) (int, int); //Declaration of Function pointer
    fp = max; //Initialization of Function pointer
    int max = (*fp)(10,5); //calling the function
    cout << "Maximum is: " << max << endl;

    fp = min;
    int min = (*fp)(10,5);
    cout << "Minimum is: " << min << endl;
    return 0;
}