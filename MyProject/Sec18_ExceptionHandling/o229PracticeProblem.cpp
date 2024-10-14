#include<iostream>
using namespace std;

class StackOverFlow:exception{};
class StackUnderFlow:exception{};

class Stack
{
    private:
        int *stk;
        int top=-1;
        int size;
    public:
        Stack(int sz)
        {
            size=sz;
            stk=new int[size];
        }
        void push(int x)
        {
            if(top==size-1)
                throw StackOverFlow();
            top++;
            stk[top]=x;
        }
        int pop()
        {
            if(top==-1)
                throw StackUnderFlow();
            cout << stk[top] << endl;
            return stk[top--];
        }
};

int main()
{
    Stack s(5);
    try
    {
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(9);
        //s.push(8);
    }
    catch(StackOverFlow s)
    {
        cout << "Stack Overflow exception" << endl;
    }
    try
    {
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
    }
    catch(StackUnderFlow s)
    {
        cout << "Stack Underflow error" << endl;
    }
    
    return 0;
}