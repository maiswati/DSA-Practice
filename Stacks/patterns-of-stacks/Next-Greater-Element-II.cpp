#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>nums = {2, 10, 12, 1, 11};
    int n = nums.size();
    vector<int>ans;
    for(int i=0; i<n; i++) {
        bool found = false;
        for(int j=i+1; j<=i+n-1; j++) {
            if(nums[j] > nums[i]) {
                found = true;
                ans.push_back(nums[j]);
                break;
            }
        }
        if(found == false) {
            ans.push_back(-1);
        }
    }
    for(auto it:ans) {
        cout << it << " ";
    }
}