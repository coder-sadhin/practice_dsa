#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    vector <int> v;
    void push(int val){
        v.push_back(val);
    }

    void delete_nth_value(int p){
        if (p >= 0 && p < v.size()) {
            v.erase(v.begin() + (p-1));
        }
    }

    void print(){
        for (int value:v){
            cout<<value<<" ";
        }
    }
};


int main() {
    Queue Q;
    int n,p;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        Q.push(val);
    }
    cin>>p;
    Q.delete_nth_value(p);
    Q.print();
    return 0;
}
