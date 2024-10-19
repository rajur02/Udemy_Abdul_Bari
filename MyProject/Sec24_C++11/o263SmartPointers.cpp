#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b)
        {
            length=l;
            breadth=b;
        }
        int area()
        {
            return length*breadth;
        }
};

int main()
{

    //unique_ptr can have only only one pointer at a time on an object
    /* unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout << ptr->area() << endl;

    unique_ptr<Rectangle> ptr2;
    ptr2=move(ptr);  //moving the pointer on the object from ptr to ptr2
    cout << ptr2->area() << endl; */

    //shared_ptr - 2 pinters can share the same object at a time
    shared_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout << ptr->area() << endl;

    shared_ptr<Rectangle> ptr2;
    ptr2=ptr;  //assigning the ptr to ptr2
    cout << "ptr2 is: " << ptr2->area() << endl;
    cout << "ptr is:" << ptr->area() << endl;
    cout << ptr.use_count() << endl; // number of pointers pointing on the same object(reference_counter)
    
}