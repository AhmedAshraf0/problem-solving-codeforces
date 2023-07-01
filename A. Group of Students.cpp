//
// Created by CST on 23-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m , x , y;
    cin>>m;
    int arr[m+1] , arr2[m+1];
    arr[0] = 0; arr2[0] = 0;
    for(int i = 1 ; i <= m ; ++i)
        cin>>arr[i];
    cin>>x>>y;
    for(int i = 1 ; i <= m ; ++i)
        arr2[i] = arr2[i-1] + arr[i];
    for(int i = 1 ; i <= m ; ++i){
        if(arr2[i] >= x && arr2[i] <= y){
            if(arr2[m]-arr2[i] >= x && arr2[m] - arr2[i] <= y){
                cout<<i+1;
                return 0;
            }
        }
    }
    cout<<0;
}