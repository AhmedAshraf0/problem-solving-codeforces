//
// Created by CST on 01-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n] , total = 0 , ctr = 0;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        total += arr[i];
    }

    for(int i = 0 ; i < n ; ++i){
        if((total - arr[i]) % 2 == 0)
            ctr++;
    }
    cout<<ctr;
}
