#include <bits/stdc++.h>
using namespace std;

void printReverse(vector<char> sv){
    for(char c:sv){
        cout<<c<<" ";
    }
}

int main() {
    vector<char> sv;
    string s;
    cin>>s;
    for (char c:s){
        sv.push_back(c);
    }
    printReverse(sv);
    return 0;
}
