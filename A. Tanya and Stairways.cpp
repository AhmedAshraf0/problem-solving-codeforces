//
// Created by CST on 02-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    vector<int> v1;
    for(int i = 0 ; i < n ; ++i){
        if(arr[i+1] <= arr[i] || i == (n-1))
            v1.push_back(arr[i]);
    }
    cout<<v1.size()<<'\n';
    for(int i = 0 ; i < (int)v1.size() ; ++i){
        cout<<v1[i]<<' ';
    }
}
