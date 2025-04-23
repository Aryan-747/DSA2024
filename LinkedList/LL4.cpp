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
        this->next = NULL;
    }
};


Node* arraytoLL(vector<int> array)
{

    if(array.size() == 0)
    {
        return NULL;
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

    cout << '\n';
}


Node* deleteinll(Node *head,int pos)
{
    if(head == NULL)
    {
        return nullptr;
    }

    if(pos == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;

        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;
    int cnt = 1;

    while(temp!=nullptr)
    {
        if(cnt == pos)
        {
            prev->next = temp->next;
            delete temp;
            return head;
        }

        cnt++;
        prev = temp;
        temp = temp->next;
    }

    return head;

}



int main()
{

    vector<int> array = {1,2,3,4,5};
    Node *head = arraytoLL(array);
    print(head);
    head = deleteinll(head,100);
    print(head);


}