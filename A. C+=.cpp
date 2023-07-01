//
// Created by CST on 30-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b , n , ctr = 0;
        cin>>a>>b>>n;
        if(a >= b){
            while(n >= a && n >= b){
                ctr++;
                if(a >= b)
                    b += a;
                else
                    a += b;
            }
        }else{
            while(n >= a && n >= b){
                ctr++;
                if(a <= b)
                    a += b;
                else
                    b += a;
            }
        }
        cout<<ctr<<'\n';
    }
}