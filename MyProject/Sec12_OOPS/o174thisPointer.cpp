#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;
public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
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
    Rectangle r1(10,5);
    cout << r1.area() << endl;
    return 0;
}