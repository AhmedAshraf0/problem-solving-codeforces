//
// Created by CST on 29-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int si , q;
    string s;
    cin>>s>>q;
    si = s.size();
    int arr[si+1];
    arr[0] = 0;
    for(int i = 1 ; i <= si ; ++i){
        if(s[i-1] == 'a')
            arr[i] = arr[i-1] + 1;
        else
            arr[i] = arr[i-1];
    }
    while(q--){
        int l , r;
        cin>>l>>r;
        cout<<arr[r]-arr[l-1]<<'\n';
    }
}
