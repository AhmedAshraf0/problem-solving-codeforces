//
// Created by CST on 01-Jul-22.
//
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int s, int arr[] , int k){
    int l = 0 , r = s-1 , m;
    while(l <= r){
        m = (l+r) / 2;
        if(arr[m] == k)
            return true;
        else if(arr[m] < k){
            l = m + 1;
        }else{
            r = m - 1;
        }
    }
    return false;
}
int lowerBound(int s , int arr[] , int k){
    int l = -1 , r = s;
    while(l+1 < r){
        int m = (l+r) / 2;
        if(arr[m] <= k)
            l = m;
        else
            r = m;
    }
    return l;
}
int upperBound(int s , int arr[] , int k){
    int l = -1 , r = s;
    while(l+1 < r){
        int m = (l+r) / 2;
        if(arr[m] < k)
            l = m;
        else
            r = m;
    }
    return r;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    while(k--){
        int num;
        cin>>num;
        int val = upperBound(n,arr,num);
        if(val != n)
            cout<<val+1;
        else
            cout<<n+1;
        cout<<'\n';
    }
}