//
// Created by CST on 10-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int>v1(n+1);
    v1[0] = 0;
    for(int i = 1 ; i <= n ; ++i)
        cin>>v1[i];
    vector<bool>v2(n+1);
    v2[0] = false;
    int maxNum = n;
    for(int i = 1  ; i <= n ; ++i){
        v2[v1[i]] = true;
        while(v2[maxNum] && maxNum > 0)
            cout<<maxNum--<<' ';
        cout<<'\n';
    }
}