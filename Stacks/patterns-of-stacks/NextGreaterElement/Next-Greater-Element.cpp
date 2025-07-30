#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr = {6, 8 ,0, 1, 3};
    int n = arr.size();
    vector<int>ans;
    stack<int>st;
    for(int i=n-1; i>=0; i--) {
        while(st.size() > 0 && st.top() <= arr[i]) {
            st.pop();
        }
        if(st.empty()) {
            ans.push_back(-1);
        } else {
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
}