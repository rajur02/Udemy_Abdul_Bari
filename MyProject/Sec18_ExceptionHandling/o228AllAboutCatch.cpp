#include <iostream>
using namespace std;

class MyException1
{

};

class MyException2 : MyException1
{

};

int main()
{
    try
    {
        //throw 1;
        //throw 1.5;
        //throw MyException1();
        //throw MyException2();
        //throw 'a';
        throw "how are you";
    }
    catch(MyException2 e)
    {
        cout << "MyException2 Catch" << endl;
    }
    catch(MyException1 e)
    {
        cout << "MyException1 Catch" << endl;
    }
    catch(int e)
    {
        cout <<"int catch" << endl;
    }
    catch(double e)
    {
        cout <<"double catch" << endl;
    }
    catch(...)
    {
        cout <<"All catch" << endl;
    }

    return 0;
}