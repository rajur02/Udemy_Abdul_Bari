#include <iostream>
//#include <vector>
//#include <list>
//#include <forward_list>
#include <set>
using namespace std;

int main()
{
    //Using Vector 
    /* vector<int> v={2,4,6,8,10};
    v.push_back(20);
    v.push_back(30);
    //v.pop_back();

    vector<int>::iterator itr;  */

    //Using list(doubly linked list)
    /* list<int> v={2,4,6,8,10};
    v.push_back(20);
    v.push_back(30);

    list<int>::iterator itr; */

    //using forward_list(Singly linked list)
    /* forward_list<int> v={2,4,6,8,10};
    v.push_front(20);
    v.push_front(30);

    forward_list<int>::iterator itr; */

    //Using Set
    set<int> v={2,4,6,8,10,10};
    v.insert(20);
    v.insert(30);

    set<int>::iterator itr;

    cout << "Using iterator" << endl;
    for(itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << endl;
        //cout << ++*itr << endl;   //We cannot modify the set type data

    cout << "Using for each loop" << endl;
    for(int x:v)
        cout << x << endl;
}