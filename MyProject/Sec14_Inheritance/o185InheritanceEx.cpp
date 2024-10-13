#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle(int l=1, int b=1)
        {
            setLength(l);
            setBreadth(b);
        }

        void setLength(int l)
        {
            if(l<0)
                length = 1;
            else
                length = l;
        }
        void setBreadth(int b)
        {
            if(b<0)
                breadth = 1;
            else
                breadth = b;
        }
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
        int area()
        {
            return length*breadth;
        }

        int perimeter()
        {
            return 2*(length+breadth);
        }
        ~Rectangle()
        {
            cout << "Destructor of Rectangle" << endl;
        }
};

class Cuboid : public Rectangle
{
    private:
        int height;
    public:
        Cuboid(int h)
        {
            height = h;
        }

        int getHeight()
        {
            return height;
        }

        void setHeight(int h)
        {
            if(h<0)
                height = 1;
            else
                height = h;
        }

        int volume()
        {
            return getLength()*getBreadth()*height;
        }

        friend ostream & operator<<(ostream &out, Cuboid &c);

        ~Cuboid()
        {
            cout << "Destructor of Cuboid" << endl;
        }
};

ostream & operator<<(ostream &out, Cuboid &c)
{
    out << c.getLength() << " " << c.getBreadth() << " " << c.getHeight();
    return out;
}

int main()
{
    Cuboid c(3);
    //cout << c.getLength() << endl;
    c.setLength(10);
    c.setBreadth(5);
    cout << c.area() << endl;
    cout << c.volume() << endl;
    cout << c << endl;
    return 0;
}