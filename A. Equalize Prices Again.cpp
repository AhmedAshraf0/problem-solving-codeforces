//
// Created by CST on 26-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        double sum = 0;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i  < n ; ++i){
            cin>>arr[i];
            sum += arr[i];
        }
        cout<<ceil(sum/n);
        cout<<'\n';
    }
}
