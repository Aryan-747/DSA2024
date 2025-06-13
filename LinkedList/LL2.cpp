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

Node* insert(Node *head, int val, int pos)
{

    Node* temp = head;
    Node* prev = nullptr;
    int cnt = 1;

    int len = lengthofLL(head);

    //inserting at begining
    if(pos == 1)
    {
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        return head;

    }

    // inserting at an index larger than the number of nodes present, Inserts new node at the end by default, irrespective of how large the insert position is
    if(pos>len)
    {
        Node* newnode = new Node(val);

        while(temp->next!=nullptr)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        len = lengthofLL(head);

        return head;
    }

    // edgecase head is null
    if(temp == nullptr)
    {
        Node* newnode = new Node(val);
        
        temp = newnode;
        return temp;

    }

    // normal case
    while(temp!=nullptr)
    {

        if(cnt == pos)
        {
            break;
        }
        
        cnt++;
        prev = temp;
        temp = temp->next;
        
    }

    Node* newnode = new Node(val);
    prev->next = newnode;
    newnode->next = temp;
    return head;
}


int main()
{
    vector<int> array = {69,2,3,4,5};

    Node* head = convertArrtoLL(array);
    traversal(head);
    cout << "length: " << lengthofLL(head) << "\n";
    head = insert(head,55,5);
    traversal(head);
    cout << "length: " << lengthofLL(head) << "\n";



}