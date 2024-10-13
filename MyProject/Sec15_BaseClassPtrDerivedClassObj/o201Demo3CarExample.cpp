#include <iostream>
using namespace std;

class BasicCar
{
    public:
        void start()
        {
            cout << "Car started" << endl;
        }
};

class AdvanceCar : public BasicCar
{
    public:
        void playMusic()
        {
            cout << "Music Playing" << endl;
        }
};

int main()
{
    AdvanceCar a;
    BasicCar *ptr=&a;
    ptr->start();
    return 0;
}