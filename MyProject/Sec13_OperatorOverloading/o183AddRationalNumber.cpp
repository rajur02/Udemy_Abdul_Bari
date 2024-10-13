#include <iostream>
using namespace std;

class Rational
{
    private:
        int p,q;
    public:
        Rational(int p=0, int q=0)
        {
            this->p = p;
            this->q = q;
        }

        Rational operator+(Rational &r)
        {
            Rational temp;
            temp.p = p*r.q + r.p*q;
            temp.q = q*r.q;
            return temp;
        }
        // void display()
        // {
        //     cout << p << "/" << q << endl;
        //}
        friend ostream & operator<<(ostream &out, Rational &r); 
};

ostream & operator<<(ostream &out, Rational &r)
{
    out << r.p << "/" << r.q;
    return out;
}

int main()
{
    Rational r1(3,4), r2(2,5), r3;
    r3=r1+r2;
    //r3.dispaly();
    cout<<r3;
    return 0;
}