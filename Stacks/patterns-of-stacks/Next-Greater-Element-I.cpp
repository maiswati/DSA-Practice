#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>nums1 = {4, 1, 2};
    vector<int>nums2 = {1, 3, 4, 2};
    int n1 = nums1.size();
    int n2 = nums2.size();
    stack<int>st;
    unordered_map<int, int>hashMap;
    for(int i=n2-1; i>=0; i--) {
        while(st.size() > 0 && st.top() <= nums2[i]) {
            st.pop();
        }
        if(st.empty()) {
            hashMap[nums2[i]] = -1;
        } else {
            hashMap[nums2[i]] = st.top();
        }
        st.push(nums2[i]);
    }
    vector<int>ans;
    for(int i=0; i<n1; i++) {
        ans.push_back(hashMap[nums1[i]]);
    }
    for(auto it:ans) {
        cout << it << " ";
    }
    cout << endl;
}