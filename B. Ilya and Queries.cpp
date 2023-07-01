/*
CST
11-Dec-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    int q;
    cin>>str>>q;
    vector<int>v1(str.size()+1,0);
    v1[str.size()] = -1;
    for(int i = 0 ; i < str.size()-1 ; ++i)
        if(str[i] == str[i+1])
            v1[i+1] = 1;
    for(int i = 1 ; i <= str.size() ; ++i){
        v1[i]+= v1[i-1];
    }
    while(q--){
        int l , r;
        cin>>l>>r;
        cout<<v1[r-1]-v1[l-1]<<'\n';
    }
}
