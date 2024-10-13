#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, img;
    
    public:
        Complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }

        friend ostream & operator<<(ostream &out, Complex c);
};

ostream & operator<<(ostream &out, Complex c)
{
    out << c.real << "+i" << c.img;
    return out;
}

int main()
{
    Complex c1(5,3);
    cout << c1 << endl;
    operator<<(cout, c1);
    return 0;
}