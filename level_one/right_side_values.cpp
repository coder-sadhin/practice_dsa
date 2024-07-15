#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    vector<int> sums;
    int sum=0;
    for (int i = nums.size() - 1; i >= 0; --i) {
        sums.push_back(sum);
        sum += nums[i];
    }
    for (int i = sums.size() - 1; i >= 0; --i) {
        cout<<sums[i]<<" ";
    }
    return 0;
}
