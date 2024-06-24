#include <bits/stdc++.h>
using namespace std;

void sub(int i, vector<int> &a, vector<int> &v, vector<vector<int>> &ans) {
    if(i==a.size()) {
        ans.push_back(v);
        return;
    }

    v.push_back(a[i]);
    sub(i+1, a, v, ans);
    v.pop_back();
    if(v.size()!=0)
        ans.push_back(v);
}

int main () {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = a.size();
    vector<int> v;
    vector<vector<int>> ans;

    for(int i=0; i<n; i++)
        sub(i, a, v, ans);
    for(auto i: ans) {
        for(auto j: i)
            cout<<j<<" ";
        cout<<endl;
    }
}