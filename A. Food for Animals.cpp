//
// Created by CST on 03-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a , b , c , t , x , y;
    cin>>t;
    while(t--){
        long long sum = 0;
        cin>>a>>b>>c>>x>>y;
        if(x > a)
            sum += x-a;
        if(y > b)
            sum += y-b;
        if(c >= sum)
            cout<<"yes";
        else
            cout<<"no";
        cout<<'\n';
    }
}