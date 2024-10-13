#include <iostream>
using namespace std;

class BaseCar
{
    public:
        virtual void start() { cout << "Base car start" << endl; }
};

class AdvanceCar : public BaseCar
{
    public:
        void start() { cout << "Advance car start" << endl; }
};

int main()
{
    BaseCar *b = new AdvanceCar();
    b->start();
    return 0;
}