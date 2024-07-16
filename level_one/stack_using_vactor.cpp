#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
        vector<int> nums;

    void push(int value) {
        nums.push_back(value);
    }

    // int kthValue(int k, int n){
    //     if (k <= 0 || k > nums.size()) {
    //         throw std::out_of_range("Invalid k value");
    //     }
    //     return nums[n-(n-k)-1];
    // }

};

int main() {
    Stack s;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        s.push(value);
    }
    // int k;
    // cin>>k;
    // cout<<s.kthValue(k,n)<<endl;

    return 0;
}
