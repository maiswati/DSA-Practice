#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int total = 0;
    int n = height.size();
    int leftMaxes[n];
    int rightMaxes[n];
    for(int i=0; i<n; i++) {
        if(i == 0 || i == n-1) {
            leftMaxes[i] = 0;
            rightMaxes[i] = 0;
            continue;
        }
        int leftMax = height[i];
        int rightMax = height[i];
        for(int j=0; j<i; j++) {
            leftMax = max(leftMax, height[j]);
        }
        leftMaxes[i] = leftMax;
        for(int k=i+1; k<n; k++) {
            rightMax = max(rightMax, height[k]);
        }
        rightMaxes[i] = rightMax;
    }

    for(int i=0; i<n; i++) {
        int trapped = min(leftMaxes[i], rightMaxes[i]) - height[i];
        if(trapped > 0) total += trapped;
    }
    cout << total << endl;
}