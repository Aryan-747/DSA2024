#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:

    int data;
    Node *next;

    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }


};

int main()
{

    int arr[5] = {1,2,3,4,5};

    Node* node1 = new Node(arr[2],nullptr);
    Node* node2 = new Node(arr[1]);

    cout << node1->data << endl;
    cout << node1->next << endl;

    cout << node2->data << endl;
    cout << node2->next << endl;

}