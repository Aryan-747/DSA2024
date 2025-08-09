#include<bits/stdc++.h>

using namespace std;


class Q
{
    public:
    int size = 10;
    int queue[10];
    int currsize = 0;
    int start = -1;
    int end = -1;


    void push(int val)
    {
        if(currsize == size)
        {
            cout << "Queue is Full!\n";
        }

        if(currsize == 0)
        {
            start = 0;
            end = 0;
        }

        else
        {
            end = (end+1)%size; // modularization to maintain circular array behaviour
        }

        queue[end] = val;
        currsize++;

        cout << val << " Inserted in queue.\n";
    }


    void pop()
    {
        if(currsize == 0)
        {
            cout << "Queue is Empty!\n";
        }

        int ele = queue[start];

        if(currsize == 1)
        {
            start = -1;
            end = -1;
        }
        
        else
        {
            start = (start+1)%size;
        }
        
        currsize--;

        cout << ele << " Removed from queue.\n";
    }


    int top()
    {
        if(currsize == 0)
        {
            cout << "Queue is empty.\n";
        }

        return queue[start]; // top element
    }

    int findsize()
    {
        return currsize;
    }


};


int main()
{

    Q q1;

    q1.push(10);
    q1.push(15);
    q1.push(20);
    q1.push(25);

    cout << "Top is: " << q1.top() << '\n';
    cout << "Size is: " << q1.findsize() << '\n';

    q1.pop();
    q1.pop();

    cout << "Top is: " << q1.top() << '\n';
    cout << "Size is: " << q1.findsize() << '\n';

    q1.push(22);
    q1.push(33);

    cout << "Top is: " << q1.top() << '\n';
    cout << "Size is: " << q1.findsize() << '\n';




}
