//
// Created by CST on 27-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    if(a>b){
        cout<<b<<' ';
        a -= b;
        b -= b;
    }else{
        cout<<a<<' ';
        b -= a;
        a -=a;
    }
    if(a){
        cout<<a/2;
    }else{//use b
        cout<<b/2;
    }
}
