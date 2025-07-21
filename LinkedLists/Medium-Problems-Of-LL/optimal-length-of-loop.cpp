#include<bits/stdc++.h>
using namespace std;

struct Node {
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

Node* convertArrayToLL(vector<int>arr, int pos) {
    int n = arr.size();
    if(n==0) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* current = head;
    Node* loopNode = nullptr;

    if(pos == 0) loopNode = head;

    for(int i=1; i<n; i++) {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;

        if(i==pos) {
            loopNode = temp;
        }
    }
    if(pos>=0) {
        current->next = loopNode;
    }

    return head;
}

int getLengthOfLoop(Node* head) {
    if(head == nullptr) return -1;
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=nullptr && fast!=nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) {
            int count = 1;
            fast = fast->next;
            while(slow!=fast) {
                count++;
                fast = fast->next;
            }
            return count;
        }
    }
    return -1;
}

int main() {
    vector<int>arr = {5, 9, 8, 7, 23, 11};
    int pos = 1;
    Node* head = convertArrayToLL(arr, pos);
    int length = getLengthOfLoop(head);
    if(length == -1) {
        cout << "The loop does not exist." << endl;
    } else {
        cout << "The length of the loop is : " << length << endl;
    }
}