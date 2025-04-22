#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};


Node* arrtoll(vector<int> array)
{

    if(array.size() == 0)
    {
        return nullptr;
    }

    Node* head = new Node(array[0]);
    Node* mover = head;
    for(int i=1 ; i<array.size() ; i++)
    {
        Node* temp = new Node(array[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;

}

void print(Node* head)
{

    Node* temp = head;

    while(temp!=nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* deletehead(Node* head)
{

    if(head == NULL)
    {
        return head;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node* deletetail(Node* head)
{
    Node* temp = head;

    if(head == NULL || head->next == NULL)
    {
        delete head;
        return nullptr;
    }

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = NULL;
    delete temp->next;

    return head;

}


int main()
{

    vector<int> array = {10,19,25,43,123};
    Node* head = arrtoll(array);
    //head = deletehead(head);
    //print(head);
    head = deletetail(head);
    print(head);

}