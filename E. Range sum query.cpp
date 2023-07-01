//
// Created by CST on 24-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , q;
    cin>>n>>q;
    vector<long long>v;
    vector<long long>v1;
    v.push_back(0);
    v1.push_back(0);
    for(int i = 1 ; i <= n ; ++i){
        int num;
        cin>>num;
        v.push_back(num);
    }
    for(int i = 1 ; i <= n ; ++i){
        v1.push_back(v[i]+v1[i-1]);
    }
    while(q--){
        int l , r;
        cin>>l>>r;
        if(l == 0)
            cout<<v1[r];
        else{
            cout<<v1[r]-v1[l-1];
        }
        cout<<'\n';
    }
}
