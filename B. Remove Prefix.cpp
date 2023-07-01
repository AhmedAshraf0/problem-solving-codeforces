/*
CST
23-Oct-22
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
        int n;
        cin>>n;
        vector<int>v1(n);
        set<int>s;
        for(int i = 0 ; i < n ; ++i)
            cin>>v1[i];
        for(int i = n-1 ; i >= 0 ; --i){
            int si = s.size();
            s.insert(v1[i]);
            if(si == s.size()){
                cout<<i+1;
                i = -1;
            }else if(i == 0){
                cout<<0;
            }
        }
        cout<<'\n';
    }
}
