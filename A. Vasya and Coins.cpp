//
// Created by CST on 31-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b , total = 0;
        cin>>a>>b;
        if(a==0){
            cout<<1<<endl;
            continue;
        }
        total = a + b*2;
        cout<<total+1<<endl;
    }
}
