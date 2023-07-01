//
// Created by CST on 22-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b , test;
        double rest , x;
        cin>>a>>b;
        if(a % b == 0){
            cout<<0<<endl;
        }else{
            rest = (double)a / b;
            test = a / b;
            test++;
            rest = test - rest;
            x = rest * b;
            cout<<fixed<<setprecision(0)<<x<<endl;
        }
    }
}
