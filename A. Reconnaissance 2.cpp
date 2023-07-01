//
// Created by CST on 18-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    arr[n] = arr[0];
    pair<int,int>p1;
    p1.first = 0;//initial values;
    p1.second = 1;
    for(int i = 1 ; i < n ; ++i){
        if(abs(arr[i]-arr[i+1]) < abs(arr[p1.first]-arr[p1.second])){
            p1.first = i;
            if(i == n-1){
                p1.second = 0;
            }else{
                p1.second = i+1;
            }
        }
    }
    cout<<p1.first+1<<' '<<p1.second+1;
}