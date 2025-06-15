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
        next = next1;
        back = back1;
    }

};

Node* convertArr2DLL(vector<int> arr)
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

Node* headtolast(Node* head)
{
    while(head->next!=nullptr)
    {
        head = head->next;
    }
    
    return head;
}

void backtraversal(Node* head)
{
    Node* temp = head;

    while(temp!=nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->back;
    }

    cout << "nullptr" << '\n';
}

Node* deletehead(Node *head)
{
    if(head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

Node *deletetail(Node* head)
{
    if(head == nullptr | head->next == nullptr)
    {
        return nullptr;
    }

    Node* temp = head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->back->next = nullptr;
    temp->back = nullptr;

    delete temp;
    return head;

}

int main()
{

    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2DLL(arr);
    head = deletehead(head);
    head = deletetail(head);
    traversal(head);
  


}