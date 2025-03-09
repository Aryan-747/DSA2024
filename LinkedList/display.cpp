#include<bits/stdc++.h>

using namespace std;


class Node
{
    public:

    int data;
    Node *next;

};

Node* first = NULL;

void create(int A[], int n)
{
    int i;
    Node* temp;
    Node* last;

    first = new Node;
    first->data = A[0];
    last = first;

    for(int i=1 ; i<n ; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

}

void display(Node *p)
{

    while(p!=NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }

}



int main()
{

    int A[] = {1,2,3,4,5};
    int n = 5;

    create(A,n);
    display(first);


}