#include<bits/stdc++.h>

using namespace std;


// implementing stack using linked list

class Node
{
    public:
    
    int data;
    Node* next;

    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }

};

class Stack
{
    public:

    int size = 0;
    Node* top = nullptr;


    void push(int val)
    {
        Node* newnode = new Node(val);
        newnode->next = top;
        top = newnode;
        size++;

        cout << val << " Inserted into stack.\n";
    }

    void pop()
    {
        if(top == nullptr)
        {
            cout << "Stack is Empty!\n";
        }

        else
        {
        Node* temp = top;
        top = top->next;

        cout << temp->data << " Popped from stack.\n";
        delete temp;
        size--;
        }
    }

    int findtop()
    {
        if(top == nullptr)
        {
            cout << "Stack is Empty! ";
            return 0;
        }

        return top->data;
    }

    int sizeis()
    {
        return size;
    }
};

int main()
{
    Stack s1;

    s1.push(10);
    s1.push(15);
    s1.push(20);
    s1.push(25);

    cout << "Top is: " << s1.findtop() << '\n';
    cout << "Size is: " << s1.sizeis() << '\n';

    s1.pop();
    s1.pop();

    cout << "Top is: " << s1.findtop() << '\n';
    cout << "Size is: " << s1.sizeis() << '\n';

    s1.push(22);
    s1.push(33);

    cout << "Top is: " << s1.findtop() << '\n';
    cout << "Size is: " << s1.sizeis() << '\n';

}