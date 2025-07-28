#include<bits/stdc++.h>
using namespace std;
class MinStack {
    public:
        stack<pair<int,int>>s;
        MinStack() {

        }
        void push(int val) {
            if(s.empty()) {
                s.push({val, val});
            } else {
                s.push({val, min(val, s.top().second)});
            }
        }
        void pop() {
            s.pop();
        }
        int Top() {
            return s.top().first;
        } 
        int getMin() {
            return s.top().second;
        }
};
int main() {
    MinStack s;
    s.push(-2);
    s.push(0);
    s.push(-3);
    cout << "Get min : " << s.getMin() << endl;
    cout << "get top : " << s.Top() << endl;
    s.pop(); 
    cout << "Get min : " << s.getMin() << endl;
}