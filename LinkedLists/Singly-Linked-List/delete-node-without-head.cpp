//Delete Node in a Linked List
//You are given the node to be deleted node. You will not be given access to the first node of head.



#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
int main() {
    class Solution {
    public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
}


