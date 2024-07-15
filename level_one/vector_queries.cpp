#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> nums;

//  int q;
//     cin >> q;
//     vector<int> nums;

    while (q--) {
        int x,val;
        cin >> x >> val;

        if (x == 1) {
            if (nums.empty()) {
                nums.push_back(val);
            } else {
                nums.insert((nums.begin() + 1), val);
            }
        } else if (x == 2) {
            if (nums.empty()) {
                nums.push_back(val);
            } else {
                nums.insert((nums.end() - 1), val);
            }
        }
    }

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}