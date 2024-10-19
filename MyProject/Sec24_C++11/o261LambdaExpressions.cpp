#include <iostream>
using namespace std;

//Lambda expression can be sent to a function as parameter
template <typename T>
void fun(T p)
{
    p();
}

int main()
{
    //[](){ cout << "Hello" << endl; }();
    //[](int x, int y){ cout << "Sum is " << x+y << endl;}(10,20); 
    //cout << ([](int x, int y){ return x+y;}(10,20));
    /* int a = [](int x, int y)->int{ return x+y;}(10,20);
    cout << a << endl; */
    
    
    int a=10;
    //accessing the variblea which is within the scope
    //[a](){cout << a << endl;} ();

    //access 'a' by assigning it to a variable f and call it by f()
    // auto f=[a](){cout << a << endl;};
    // f();
    // f();

    //make it reference to modify the value of a
    // auto f=[&a](){cout << ++a << endl;};
    // f();
    // a++;
    // f();

    auto f=[&a](){cout << a++ << endl;};
    fun(f);
    fun(f);
}