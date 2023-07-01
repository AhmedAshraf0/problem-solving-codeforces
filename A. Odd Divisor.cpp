//
// Created by CST on 29-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        if((x%2 || (x/2)%2) && x > 2){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<'\n';
    }
}