#include<bits/stdc++.h>

using namespace std;

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


class Q
{

    public:

    Node* start = nullptr;
    Node* end = nullptr;
    int cursize = 0;

    void push(int val)
    {
        if(start == nullptr) // first node being inserted
        {
            Node* newnode = new Node(val);
            end = newnode;
            start = newnode;
            cursize++;
        }

        else
        {
            Node* newnode = new Node(val);
            end->next = newnode;
            end = newnode;
            cursize++;
        }

        cout << val << " Pushed in Queue.\n";
    }


    void pop()
    {

        if(start == nullptr)
        {
            cout << "Queue is Empty!\n";
        }

        else
        {
            Node* temp = start;
            start = start->next;
            cursize--;
            cout << temp->data << " Popped from Queue.\n";
            delete temp;
        }
    }


    int topis()
    {
        if(start == nullptr && end == nullptr)
        {
            cout << " Error: Queue is Empty! ";
            return 0;
        }

        return start->data;
    }

    int findsize()
    {
        return cursize;
    }

};


int main()
{

    Q q1;

    q1.push(10);
    q1.push(15);
    q1.push(20);
    q1.push(25);

    cout << "Top is: " << q1.topis() << '\n';
    cout << "Size is: " << q1.findsize() << '\n';

    q1.pop();
    q1.pop();

    cout << "Top is: " << q1.topis() << '\n';
    cout << "Size is: " << q1.findsize() << '\n';

    q1.push(22);
    q1.push(33);

    cout << "Top is: " << q1.topis() << '\n';
    cout << "Size is: " << q1.findsize() << '\n';


    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();

    q1.push(10);
    q1.push(15);
    q1.push(20);
    q1.push(25);

    q1.pop();

    cout << "Top is: " << q1.topis() << '\n';
    cout << "Size is: " << q1.findsize() << '\n';


}