#include <bits/stdc++.h>
using namespace std;

void printReverse(vector<char> sv){
    if(sv.size()<1) return;
    char c=sv.back();
    sv.pop_back();
    cout<<c;
    printReverse(sv);
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
