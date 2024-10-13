#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        //Default Constructor
        // Rectangle()
        // {
        //     length = 1;
        //     breadth = 1;
        // }

        //Parameterized constructor
        //Rectangle(int l, int b)
        //Constructor with Default arguments, So it is also used as default constructor when no parameters passed to it while object creation 
        Rectangle(int l=1, int b=1)
        {
            setLength(l);
            setBreadth(b);
        }
        
        //Copy Constructor
        Rectangle(Rectangle &rec)
        {
            length = rec.length;
            breadth = rec.breadth;
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

};

int main()
{   
    Rectangle r;  //Call Default constructor
    Rectangle r2(10,5); //Call Parameterized constructor
    Rectangle r1(r);  //Call copy constructor
    cout << "Area is: " << r.area() << endl;
    cout << "Area is: " << r2.area() << endl;
    cout << "Area is: " << r1.area() << endl;
    return 0;
}