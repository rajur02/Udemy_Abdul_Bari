#include <iostream>
using namespace std;

//Pass by address
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;    
} 

//Pass by reference
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;    
}

int main()
{
    int x=10, y=20;
    swap(&x,&y);
    cout << x << " " << y << endl;
    swap(x,y);
    cout << x << " " << y << endl;
    return 0;
}