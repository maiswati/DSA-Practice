//1. Print elements of a singly linked list
//Traverse the list from head to end, printing the data at each node until NULL is reached.

#include<bits/stdc++.h>
using namespace std;
struct Node {
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node* convertArrToLinkedList(vector<int>arr) {
    int n = arr.size();
    if(n==0) return 0;

    Node* head = new Node(arr[0]);  //first node
    Node* current = head;

    cout << "From convert to array function" << endl;

    for(int i=0; i<n; i++)
    {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}
int main()
{
    vector<int>arr = {5, 4, 10, 8, 2};

    Node* head = convertArrToLinkedList(arr);
    Node* temp = head;

    cout << "From Main function itself" << endl;

    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}