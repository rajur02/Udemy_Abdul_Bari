#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    //Object Creation in stack
    //Rectangle r1;
    //Rectangle *ptr;
    //ptr = &r1;
    //Rectangle *ptr1 = &r1;

    //Object Creation on heap
    Rectangle *ptr1 = new Rectangle;
    
    ptr1->length = 10; 
    ptr1->breadth = 5;
    cout << ptr1->area() << endl;
    cout << ptr1->perimeter() << endl;
    return 0;
}