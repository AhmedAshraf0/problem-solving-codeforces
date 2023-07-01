//
// Created by CST on 26-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n , m , test = INT_MAX;
    cin>>n>>m;
    int arr[m];
    for(int i = 0 ; i < m ; ++i)
        cin>>arr[i];
    sort(arr,arr+m);reverse(arr,arr+m);
    for(int i = 0 ; i <= m-n ; i++){
        int val = arr[i]-arr[i+n-1];
        if(val < test)
            test = val;
    }
    cout<<test;
}
