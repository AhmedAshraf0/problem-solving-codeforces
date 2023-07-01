//
// Created by CST on 02-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , q;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        arr[v]++;
    }
    for(int i = 1 ; i <= 100001 ; ++i)
        arr[i] += arr[i-1];
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        if(t > 100001){
            cout<<arr[100000]<<'\n';
            continue;
        }
        cout<<arr[t]<<'\n';
    }
}