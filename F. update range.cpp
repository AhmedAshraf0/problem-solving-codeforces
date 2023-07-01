//
// Created by CST on 27-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , q;
    cin>>n>>q;
    vector<int> v(n+1);
    vector<long long> v1(n+2);
    v[0] = 0; v1[0] = 0;
    for(int i = 1 ; i <= n ; ++i)
        cin>>v[i];
    while(q--){
        int l , r , val;
        cin>>l>>r>>val;
        v1[r+1] += -1 * val;
        v1[l] += val;
    }
    for(int i = 1 ; i <= n ; ++i){
        v1[i] += v1[i-1];
    }
    for(int i = 1 ; i <= n ; ++i){
        cout<<v1[i]+v[i]<<' ';
    }
}
