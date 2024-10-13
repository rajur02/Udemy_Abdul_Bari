#include <iostream>
using namespace std;

class Car
{
    public:
        virtual void start()=0;
        // virtual void start()
        // {
        //     cout << "Car started" << endl;
        // }
};

class Innova : public Car
{
    public:
        void start()
        {
            cout << "Innova Started" << endl;
        }
};

class Swift : public Car
{
    public:
        void start()
        {
            cout << "Swift Started" << endl;
        }
};

int main()
{
    Car *c = new Innova();
    c->start();
    Swift s;
    c=&s;
    c->start();
    return 0;
}