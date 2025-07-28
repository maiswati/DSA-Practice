#include<bits/stdc++.h>
using namespace std;
class Stack {
    list<int>li;

    public:
        void push(int x) {
            li.push_back(x);
        }
        void pop(){
            li.pop_back();
        }
        int top(){
            int ele =li.back();
            return ele;
        }
        int Size(){
            return li.size();
        }
        bool empty() {
            return li.size() == 0;
        }
};
int main() {
    Stack s;
    s.push(111);
    s.push(12);
    s.push(23);
    cout << "top ele : " << s.top() << endl;
    cout << "size : " << s.Size() << endl;
    s.pop();
    cout << "size: " << s.Size() << endl;
}