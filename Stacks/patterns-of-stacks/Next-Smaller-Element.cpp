#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>nums = {4, 8, 5, 2, 25};
    int n = nums.size();
    vector<int>ans;
    stack<int>st;
    for(int i=n-1; i>=0; i--) {
        while(st.size() > 0 && st.top() >= nums[i]) {
            st.pop();
        }
        if(st.empty()) {
            ans.push_back(-1);
        } else {
            ans.push_back(st.top());
        }
    }
    reverse(ans.begin(), ans.end());
    for(auto it:ans) {
        cout << it << " ";
    }
}