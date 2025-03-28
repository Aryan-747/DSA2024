#include<bits/stdc++.h>

using namespace std;

// rewwrite


class Node
{
    public:

    int data;
    Node* next;

    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};


Node* ConvertArrtoLL(vector<int> &arr)
{
    Node* head =  new Node(arr[0]);
    Node* mover = head;


    for(int i=1 ; i<arr.size() ; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }


    return head;
}




int main()
{

        vector<int> arr ={69,5,8,7};

        Node *head = ConvertArrtoLL(arr);

        cout << "Head is: " << head->data << endl;



}