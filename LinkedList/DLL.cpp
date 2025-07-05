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

// All Deletion Cases
Node* deleteatKpos(Node*head, int pos)
{
    int cnt = 0;
    Node* temp = head;

    if(head == nullptr)
    {
        return nullptr;
    }

    while(temp!=nullptr)
    {

        cnt++;
        if(cnt == pos)
        {
            break;
        }
        temp = temp->next;
    }

    if(temp == nullptr)
    {
        cout << "Position is Out Of Bounds! \n";
        return head; 
    }

    // single node
    else if(temp->back == nullptr && temp->next == nullptr)
    {
        delete temp;
        return nullptr;
    }

    // delete head
    else if(temp->back == nullptr)
    {
        Node* t2 = temp;
        temp = temp->next;
        temp->back = nullptr;
        t2->next = nullptr;

        delete t2;
        return temp;
    }

    // delete tail
    else if(temp->next == nullptr)
    {
        Node* t2 = temp;
        temp = temp->back;

        temp->next = nullptr;
        t2->back = nullptr;

        delete t2;
        return head;
    }

    // in between
    Node* t2 = temp;

    t2->back->next = t2->next;
    t2->next->back = t2->back;

    t2->next = nullptr;
    t2->back = nullptr;

    delete t2;
    return head;

}

// insert before head (Insert at position 1)
Node* insertbeforehead(Node* head,int val)
{
    Node* temp = new Node(val,head,nullptr);
    head->back = temp;

    return temp;
}

// insert after tail (Insert at Last)
Node* insertaftertail(Node* head, int val)
{
    Node* temp = head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }


    Node* newnode = new Node(val,nullptr,temp);
    temp->next = newnode;

    return head;

}

// All Insertion cases
Node* insertatpos(Node* head, int val, int pos)
{
    // insert at head
    if(head == nullptr)
    {
        Node* nn = new Node(val);

        return nn;
    }

    // insert at head
    if(pos == 1)
    {
        Node* nn = new Node(val,head,nullptr);
        head->back = nn;

        return nn;
    }

    Node* temp = head;
    int cnt = 0;

    while(temp->next!=nullptr)
    {   
        cnt++;

        if(cnt == pos)
        {
            break;
        }
        
        temp = temp->next;
    }

    // Position is out of bounds (By default adds element to the last, i.e after tail)
    if(temp->next == nullptr)
    {
        Node* nn = new Node(val,nullptr,temp);
        temp->next = nn;

        return head;
    }

    Node* prev = temp->back;

    Node* nn = new Node(val,temp,prev);
    prev->next = nn;
    temp->back = nn;

    return head;
}


int main()
{

    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2DLL(arr);
    head = insertatpos(head,100,2);
    traversal(head);
  


}