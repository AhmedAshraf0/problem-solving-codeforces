//
// Created by CST on 25-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , total = 0;
    cin>>n;
    if(n >= 100){
        total += n / 100;
        n -= (n / 100) * 100;
    }
    if(n >= 20){
        total += n / 20;
        n -= (n / 20) * 20;
    }
    if(n >= 10){
        total += n / 10;
        n -= (n / 10) * 10;
    }
    if(n >= 5){
        total += n / 5;
        n -= (n / 5) * 5;
    }
    if(n < 5)
        total += n;
    cout<<total;
}
