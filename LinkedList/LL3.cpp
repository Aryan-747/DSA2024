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

// deletes at tail and front aswell
Node* deleteatpos(Node* head, int k)
{
    if(head == NULL)
    {
        return NULL;
    }

    if(k == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;
    int cnt = 1;

    while(temp!=NULL)
    {
        if(cnt == k)
        {
            prev->next = temp->next;
            delete temp;
            return head;
        }

        prev = temp;
        temp = temp->next;
        cnt++;
    }

    return head;
}

// Insertion (All types of testcases (front,last,in between))
Node* insertinll(Node*head,int pos,int val)
{

    if(pos == 1)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;

        return head;
    }

    int cnt = 1;
    Node *prev = nullptr;
    Node *temp = head;

    while(temp!=nullptr)
    {
        if(cnt == pos)
        {
            Node *nn = new Node(val);
            prev->next = nn;
            nn->next = temp;

            return head;
        }

        prev = temp;
        temp = temp->next;
        cnt++;
    }

    if(pos == cnt)
    {
        Node* nn = new Node(val);
        prev->next = nn;
        return head;
    }


    return head;



}


int main()
{

    vector<int> array = {10,19,25,43,123};
    Node* head = arrtoll(array);
    //head = deletehead(head);
    //print(head);
    //head = deletetail(head);
    //head = deleteatpos(head,4);
    head = insertinll(head,6,100);

    print(head);

}