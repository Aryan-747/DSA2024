#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};


Node* convertArrtoLL(vector<int> array)
{
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

void traversal(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << '\n';

}

int lengthofLL(Node* head)
{
    Node* temp = head;
    int len = 0;

    while(temp!=NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

Node* insert(Node* head, int val, int pos) {
    Node* newnode = new Node(val);

    // Inserting in empty list or at position 1
    if (pos <= 1 || head == nullptr) {
        newnode->next = head;
        return newnode;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the (pos-1)th node or the last node
    while (cnt < pos - 1 && temp->next != nullptr) {
        temp = temp->next;
        cnt++;
    }

    // Insert newnode after temp
    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}


int main()
{
    vector<int> array = {69,2,3,4,5};

    Node* head = convertArrtoLL(array);
    traversal(head);
    cout << "length: " << lengthofLL(head) << "\n";
    head = insert(head,55,1);
    traversal(head);
    cout << "length: " << lengthofLL(head) << "\n";



}