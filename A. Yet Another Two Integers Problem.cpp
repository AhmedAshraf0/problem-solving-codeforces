//
// Created by CST on 17-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,  b , ctr = 0 , d;
        cin>>a>>b;
        d = abs(a-b);
        ctr += d / 10;
        if(d%10 != 0)
            ctr++;
        cout<<ctr<<endl;
    }
}
