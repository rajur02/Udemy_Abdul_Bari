#include <iostream>
using namespace std;

class MyException : exception
{

};

//int division(int x, int y) throw(int)
int division(int x, int y) throw(MyException)
{
    if(y==0)
        //throw 101;
        throw MyException();
    return x/y;
}

int main()
{
    int a=10, b=0, c;
    try{
        //if(b==0)
            //throw 101;
            //throw 1.5;
            //throw string("Div by zero");
            //throw MyException();
        //c=a/b;
        c=division(a,b);
        cout << c << endl;
    } 
    //catch(int e)
    //catch(double e)
    //catch(string e)
    catch(MyException e)
    {
        //cout << "Division by zero, errocode: " << e << endl;
        cout << "Division by zero, MyException class " << endl;
    }
    cout << "bye" << endl;
    return 0;
}