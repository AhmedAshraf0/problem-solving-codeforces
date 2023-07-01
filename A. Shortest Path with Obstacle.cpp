//
// Created by CST on 28-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a[2] , b[2] , f[2];
        cin>>a[1]>>a[0]>>b[1]>>b[0]>>f[1]>>f[0];
        int ans = abs(a[0]-b[0])+abs(a[1]-b[1]);
        if(a[1]==b[1] && b[1]==f[1] && min(a[0],b[0]) < f[0] && max(a[0],b[0]) > f[0]
            || a[0]==b[0] && b[0] == f[0] && min(a[1],b[1]) < f[1] && max(a[1],b[1]) > f[1]
        )
            cout<<ans+2;
        else
            cout<<ans;
        cout<<'\n';
    }
}
