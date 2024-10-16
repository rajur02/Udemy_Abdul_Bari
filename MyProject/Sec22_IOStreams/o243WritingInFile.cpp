#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("my.txt", ios::trunc);
    outfile << "John" << endl;
    outfile << 25 << endl;
    outfile << "CS" << endl;
    outfile.close();
    return 0;
}