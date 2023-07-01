//
// Created by CST on 05-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , total = 0;
    cin>>n;
    int arr[n] , max = -1;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    for(int i = 0 ; i < n ; ++i){
        if(arr[i] < max)
            total += max - arr[i];
    }
    cout<<total;
}
