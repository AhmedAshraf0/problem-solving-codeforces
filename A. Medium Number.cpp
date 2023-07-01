/*
CST
21-Nov-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        vector<int>v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        cout<<v[1]<<'\n';
    }
}
