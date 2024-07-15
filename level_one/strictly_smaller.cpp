#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> lst(n);
    for (int i = 0; i < n; i++)
    {
        cin>>lst[i];
    }
    
    for (size_t i = 1; i < lst.size() - 1; ++i) {
        if (lst[i] < lst[i - 1] && lst[i] < lst[i + 1]) {
            cout<<lst[i]<<endl;
        }
    }
    
    return 0;
}
