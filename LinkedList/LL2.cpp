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


int main()
{
    vector<int> array = {69,2,3,4,5};

    Node* head = convertArrtoLL(array);

    cout << head->data << endl;




}