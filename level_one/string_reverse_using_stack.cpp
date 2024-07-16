#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> sv;
    string s;
    cin>>s;
    for (char c:s){
        sv.push_back(c);
    }
    for(char c:sv){
        cout<<c<<" ";
    }

    return 0;
}
