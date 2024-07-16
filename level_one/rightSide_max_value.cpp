#include <bits/stdc++.h>
using namespace std;

void rightMaxValue(vector<int> nums, int p){
    if(nums.size() == p) return;
    int val=nums[p+1];
    for (int i = p+1; i < nums.size(); i++)
    {
        val=max(val,nums[i]);
    }
    if(p==nums.size()-1){
        cout<<0;
    }else{
        cout<<val<<" ";
    }
    rightMaxValue(nums,p+1);
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        nums.push_back(value);
    }
    // rightMaxValue(nums,0);

    return 0;
}
