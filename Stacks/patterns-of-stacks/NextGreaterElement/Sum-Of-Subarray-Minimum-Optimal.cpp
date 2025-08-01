#include<bits/stdc++.h>
using namespace std;

vector<int>findNSE(vector<int>nums) {
    int n = nums.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1; i>=0; i--) {
        while(!st.empty() && nums[st.top()] >= nums[i]) {
            st.pop();
        }
        ans[i] = st.empty() ? nums.size() : st.top();
        st.push(i);
    }
    return ans;
}

vector<int>findPSE(vector<int>nums) {
    int n = nums.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=0; i<n; i++) {
        while(!st.empty() && nums[st.top()] > nums[i]) {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return ans;
}

int main() {
    vector<int>nums = {4,-2,-3,4,1};
    int n = nums.size();
    vector<int>nse = findNSE(nums);
    vector<int>pse = findPSE(nums);
    long long sum = 0;

    for(int i=0; i<n; i++) {
        int left = i - pse[i];
        int right = nse[i] - i;
        sum += left * right * nums[i];
    }
    cout << sum << endl;
}