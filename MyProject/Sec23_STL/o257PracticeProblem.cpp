#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int qty;

public:
    Item() {}
    Item(string n, float p, int q)
    {
        name=n;
        price=p;
        qty=q;
    }
    friend ofstream & operator<<(ofstream& fos, Item& i);
    friend ifstream & operator>>(ifstream& fis, Item& i);
    friend ostream & operator<<(ostream& out, Item& i);
};

ofstream & operator<<(ofstream& fos, Item& i)
{
    fos<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return fos;
}

ifstream & operator>>(ifstream& fis, Item& i)
{
    fis>>i.name;
    fis>>i.price;
    fis>>i.qty;
    return fis;
}

ostream & operator<<(ostream& os, Item& i)
{
    os << "Name is " << i.name << endl;
    os << "Price: " << i.price << endl;
    os << "Quantity: " << i.qty << endl;
    return os;
}

int main()
{
    string name;
    float price;
    int n, qty;
    cout << "Enter the number of Items: "; 
    cin>>n;

    vector<Item *> list;
    for(int i=1; i<=n; i++)
    {
        cout << "Enter " << i <<" item Name, Price and Quantiry: " << endl;
        cin>>name;
        cin>>price;
        cin>>qty;
        list.push_back(new Item(name, price, qty));
    }

    ofstream fos("Items.txt");
    vector<Item *>::iterator itr;
    for(itr=list.begin(); itr!=list.end(); itr++)
    {
        fos<<**itr;
    }

    Item item;
    ifstream fis("Items.txt");
    for(int i=1; i<=n; i++)
    {
        fis>>item;
        cout << "Item " << i << endl << item << endl;
    }
}

