#include <iostream>
#include <fstream>
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
        name = n;
        price = p;
        qty = q;
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
    os << "Name: " << i.name << endl;
    os << "Price: " << i.price << endl;
    os << "Quantity: " << i.qty << endl;
    return os;
}

int main()
{
    int n;
    string name;
    float price;
    int qty;
    cout <<"Enter number of items: ";
    cin>>n;
    Item *list[n];
    cout << "Enter all items" << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Enter " << i+1 << " Name, Price and Quantity" << endl;
        cin>>name;
        cin>>price;
        cin>>qty;
        list[i] = new Item(name, price, qty);
    }

    ofstream fos("Items.txt");
    for(int i=0; i<n; i++)
    {
        fos<<*list[i];
    }

    Item item;
    ifstream fis("Items.txt");
    for(int i=0; i<n; i++)
    {
        fis>>item;
        cout <<"Item " << i << endl << item << endl;
    }
}