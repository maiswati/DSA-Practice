#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>nums = {2, 10, 12, 1, 11};
    int n = nums.size();
    vector<int>ans;
    stack<int>st;
    for(int i=2*n-1; i>=0; i--) {
        int idx = i%n;
        while(st.size() > 0 && st.top() <= nums[idx]){
            st.pop();
        }
        if(i<n) {
            if(st.empty()) {
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
        }
        st.push(nums[idx]);
    }
    for(auto it:ans) {
        cout << it << " ";
    }
}