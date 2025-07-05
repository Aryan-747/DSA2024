#include<bits/stdc++.h>

using namespace std;

class Node{

    public:

    int data;
    Node* next;

    // default cons
    Node()
    {
        this->data = data;
        this->next = nullptr;
    }

    // parameterized

    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};


// array to linkedlist
Node* arrtoLL(vector<int> arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1 ; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp; // pointing prev node to newly created node
        mover = temp; // moving mover to present node
    }

    return head;
}

// print
void printLL(Node* head)
{
    Node* temp = head;

    while(temp!=nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << " NULL\n";
}


// delete all cases

Node* deletenode(Node* head, int pos)
{
    // single node or empty linkedlist
    if(head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }


    if(pos == 1) // delete head
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }


    int cnt = 0;
    Node *prev = nullptr;
    Node *curr = head;

    while(curr!=nullptr)
    {

        if(cnt == pos-1)
        {
            prev->next = curr->next;
            delete curr;
            return head;
        }

        cnt++;
        prev = curr;
        curr = curr->next;
    }

    // if above conditions are not met, it means position is out of bounds
    return head;
}

// insertion all cases

Node* insertnode(Node* head, int pos, int val)
{
    // insert at head

    if(pos == 1 || head == nullptr)
    {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        return head;
    }

    int cnt = 0;
    Node* prev = nullptr;
    Node* curr = head;

    while(curr!=nullptr)
    { 
        
        if(cnt == pos-1)
        {
            Node* temp = new Node(val);

            prev->next = temp;
            temp->next = curr;
            return head;
        }

        cnt++;
        prev = curr;
        curr = curr->next;
    }

    // if above cases don't execute, it means the position is out of bounds
    // so we add the element at last

    Node* temp = new Node(val);
    prev->next = temp; // since curr is at nullptr
    return head;


}




int main()
{

    vector<int> arry = {15,13,22,10,43};
    Node* head = arrtoLL(arry);
    printLL(head);
    //head = deletenode(head,6);
    //printLL(head);
    head = insertnode(head,7,69);
    printLL(head);
}