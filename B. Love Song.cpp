//
// Created by CST on 01-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int arr[26];
long long arr2[100002];
int main(){
    int n , q;
    cin>>n>>q;
    string str;
    cin>>str;
    for(int i = 0 ; i < 26 ; ++i){
        arr[i] = i + 1;
    }
    for(int i = 0 ; i < n ; ++i)
        arr2[i+1] = arr[str[i]-97];
    for(int i = 1 ; i <= n ; ++i)
        arr2[i] += arr2[i-1];
    while(q--){
        int l , r;
        cin>>l>>r;
        cout<<arr2[r]-arr2[l-1]<<'\n';
    }
}
