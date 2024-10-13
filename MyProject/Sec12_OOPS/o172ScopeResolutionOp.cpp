#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &rec);
        void setLength(int l);
        void setBreadth(int b);
        int getLength() { return length; }
        int getBreadth() { return breadth; }
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l)
{
    if(l<0)
        length = 1;
    else
        length = l;
}

void Rectangle::setBreadth(int b)
{
    if(b<0)
        breadth = 1;
    else
        breadth = b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

bool Rectangle::isSquare()
{
    return length==breadth;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle destroyed" << endl;
}

int main()
{
    Rectangle r1(10,10);
    cout << "Area is: " << r1.area() << endl;
    if(r1.isSquare())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}