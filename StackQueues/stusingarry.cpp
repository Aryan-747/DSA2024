#include<bits/stdc++.h>

using namespace std;

class Stackimpl
{

    public:
    
    int top = -1; // top
    int st[100] = {0}; // stack that can at max store 100 elements; 0 to 99;


       
    void push(int val) // push element into stack
    {

        if(top>=100)
        {
            cout << "Stack is Overflow.\n";
        }

        top++;
        st[top] = val;

        cout << "Inserted " << val << " in stack.\n";
    }

    int topele()
    {
        if(top == -1)
        {
            cout << "Stack is Empty.\n";
            return top;
        }

        return st[top];
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Stack is Empty.\n";
        }

        cout << "Popped " << st[top] << " from stack.\n";
        st[top] = 0;
        top--;
    }
    

    int size()
    {
        return top+1;
    }

};



int main()
{
    Stackimpl st1;

    st1.push(10);
    st1.push(15);
    st1.push(12);
    st1.push(23);

    cout << "Top element is: "<<st1.topele() << '\n';
    cout << "Size of stack is: "<< st1.size() << '\n';

    st1.pop();
    st1.pop();

    cout << "Top element is: "<<st1.topele() << '\n';
    cout << "Size of stack is: "<< st1.size() << '\n';




}