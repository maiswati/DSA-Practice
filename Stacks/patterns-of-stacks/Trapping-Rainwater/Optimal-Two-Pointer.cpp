#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>height = {4, 2, 0, 3, 2, 5};
    int n = height.size();
    int l = 0, r = n-1;
    int lmax = 0, rmax = 0;
    int ans = 0;
    while(l < r) {
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);

        if(lmax < rmax) {
            ans += lmax - height[l];
            l++; 
        } else {
            ans += rmax - height[r];
            r--;
        }
    }
    cout << ans << endl;
}