#include <iostream>
using namespace std;

class Demo
{
    public:
        int x=10;
        int y=20;

        void Display() const  //Function becomes read-only for data members
        {
            //x++; //cannot modify the data member when the function is declared as const
            cout << x << " " << y << endl; 
        }
};


void fun(const int &a, int &b)  //call by reference acts as inline function
{
    cout << a << " " << b << endl;
    //a++
}

int main()
{
    //1. constant identifier
    //const int x=10; //1. integer constant
    //int const x=10; //1.1 constant integer both are same
    //x++; //cannot modify above two

    //2.Constant integer pointer which cannot modify the data 
    int x=10;
    const int *ptr=&x;  //Pointer of type integer constant, constant pointer but not constant variable
    int const *ptr=&x;  //Pointer cannot modify the data
    //++*ptr; // we cannot modify using pointer
    x++;  //but we can modify the variable itself
    ptr=&y;  //pointer can be assigned to different data 
    *ptr++; //but the data cannot be modified
    cout << *ptr << endl; 

    //3.pointer is constant of type integer
    int x=10;
    int * const ptr=&x; //pointer is constant of type integer, this pointer cannot be assigned to other variable
    ++*ptr; //Possible to change the data, but cannot moved to another variable
    int y=20;
    ptr=&y; //it cannot be done

    //4. Here cannot modify the data and cannot assign the pointer to different data/variable
    int x=10;
    const int * const ptr=&x;  //constant pointer to the integer constant
    ++*ptr; //cannot modify the data
    int y=20;
    ptr=&y; //Also cannot assign the pointer to another variable

    //5. Member function can be made const so it cannot modify the data members of class 
    Demo d;
    d.Display();

    //6. In call by reference we can make the formal parameters as const so the function cannot modify the values
    int x=10;
    int b=20;
    fun(x,y);

    return 0;
}