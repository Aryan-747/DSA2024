#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:

    int data;
    Node *next;
    Node *back;


    // Most used (default constructor)
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    Node(int data1, Node* next1, Node* back1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};

Node* inserttoDLL(vector<int> arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1 ; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;

        prev = temp;
    }

    return head;
}

void traversal(Node* head)
{
    Node* temp = head;

    while(temp!=nullptr)
    {
        cout << temp->data << " -> ";

        temp = temp->next;
    }

    cout << " nullptr"  << '\n';
}

int main()
{

    vector<int> arr = {1,2,3,4,5};
    Node* head = inserttoDLL(arr);
    traversal(head);


}