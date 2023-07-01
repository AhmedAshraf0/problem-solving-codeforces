//
// Created by CST on 26-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n < 2){
        cout<<0;
        return 0;
    }
    int arr[n] , mi , ma, ctr = 0;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
    }
    if(arr[0] != arr[1])
        ctr++;
    mi = min(arr[0] , arr[1]);
    ma = max(arr[0] , arr[1]);
    for(int i = 2 ; i < n ; ++i){
        if(arr[i] > ma){
            ctr++;
            ma = arr[i];
        }else if(arr[i] < mi){
            ctr++;
            mi = arr[i];
        }
    }
    cout<<ctr;
}
