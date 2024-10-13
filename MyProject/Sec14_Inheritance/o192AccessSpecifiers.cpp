#include <iostream>
using namespace std;

class Rectange
{
    private:
        int length, breadth;
    public:
        void setLength(int l)
        {
            if(l>0)
                length=l;
            else 
                length=1;
        }  
        void setBreadth(int b)
        {
            if(b>0)
                breadth=b;
            else 
                breadth=1;
        }  
        int getLength() { return length; }
        int getBreadth() { return breadth; }

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
    Rectange r;
    r.setLength(10);
    r.setBreadth(5);
    cout << "Area is: " << r.area() << endl;
    cout << "Length is: " << r.getLength() << endl;
    cout << "Breadth is: " << r.getBreadth() << endl;
    return 0;
}