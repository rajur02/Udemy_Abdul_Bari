#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Area of Circle
    /*float r, area;
    cout << "Enter the radius: ";
    cin>>r;
    //area = (float)22/7 * r * r;
    area = 22/7.0 * r * r;
    //area = (float)22/7 * pow(r,2);
    cout << "Area of Circle is: " << area << endl; */

    //Find Speed
    /*int u, v, d;
    float speed;
    cout << "Enter 3 numbers: ";
    cin>>u>>v>>d;
    speed = (v*v - u*u)/(2*d);
    cout << "Speed is: " << speed << endl; */

    //Calculte Simple Interest
    /* int p, t, r;
    float SI;
    cout << "Enter 3 numbers: ";
    cin>>p>>t>>r;
    SI = (p*t*r)/100;
    cout << "Simple Interest is: " << SI << endl; */

    //Volume of Cylinder
    /*int radius, height;
    float volume;
    cout << "Enter radius and height: ";
    cin>>radius>>height;
    volume = 3.142*radius*radius*height;
    cout << "Volume is: " << volume << endl; */

    //Distance between 2 points
    int x1, x2, y1, y2;
    float dist;
    cout << "Enter 4 values: ";
    cin>>x1>>x2>>y1>>y2;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout << "Distance between 2 points is: " << dist << endl;

    return 0;
}