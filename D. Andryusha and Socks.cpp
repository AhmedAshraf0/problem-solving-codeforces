//
// Created by CST on 27-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
const int num = 10e5;
int arr1[num];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    n *= 2;
    int arr[n] , arr3[n];arr3[0] = 0;
    for(int i = 0 ; i < n; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i){
        if(!arr1[arr[i]]){
            arr3[i] = 1;
            arr1[arr[i]] = 1;
        }else{
            arr3[i] = -1;
            arr1[arr[i]] = 0;
        }
    }
    for(int i = 1 ; i <= n ; ++i)
        arr3[i] += arr3[i-1];
    sort(arr3,arr3+n);
    cout<<arr3[n-1];
}