#include <iostream>
using namespace std;

template <class T>
class Stack
{
    private:
        T *stk;
        int top;
        int size;
    
    public:
        Stack(int sz)
        {
            size=sz;
            top=-1;
            stk = new T[size];
        }
        void push(T x);
        T pop();
};

template <class T>
void Stack<T>::push(T x)
{
    if(top==size-1)
        cout << "Stack is full" << endl;
    else   
        top++;
        stk[top]=x;
        cout << "After pushing stack element at " << top << " is " << stk[top] << endl; 
}

template <class T>
T Stack<T>::pop()
{
    T x;
    if(top==-1)
        cout << "Stack is empty" << endl;
    else
        x=stk[top];
        cout << "After popping stack element at " << top << " is " << x << endl;
        top--;
    return x;
}

int main()
{
    Stack<int> s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}