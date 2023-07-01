//
// Created by CST on 28-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n] , total = 0;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i = 0 ; i < n - 1 ; ++i)
        if(arr[i] != arr[i+1]-1)
            total += arr[i+1]-arr[i]-1;
    cout<<total;
}
