//
// Created by CST on 05-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k , f , c = 97;
        cin>>n>>k;
        f = n / k;
        for(int i = 1 ; i <= n ;  ++i){
            cout<<char(c);
            if(i % f == 0){
                if(c < k-1 + 97)
                    c++;
                else
                    c = 97;
            }
        }
        cout<<'\n';
    }
}