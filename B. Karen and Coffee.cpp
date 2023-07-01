//
// Created by CST on 02-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200002]  , arr2[200002];
int main(){
    int n , k , q;
    cin>>n>>k>>q;
    while(n--){
        int l , r;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    for(int i = 1 ; i <= 200000 ; ++i)//accumulate for first array
        arr[i] += arr[i-1];
    for(int i = 1 ; i <= 200000 ; ++i){
        if(arr[i] >= k)
            arr2[i] = 1;
        else
            arr2[i] = 0;
    }
    for(int i = 1 ; i <= 200001 ; ++i)
        arr2[i] += arr2[i-1];
    while(q--){
        int l , r;
        cin>>l>>r;
        cout<<arr2[r]-arr2[l-1]<<'\n';
    }
}