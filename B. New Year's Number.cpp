//
// Created by CST on 29-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , n2;
        cin>>n;
        n2 = n;
        if(n > 2021){
            bool check = true;
            for(int i = 0 ; i < n2 % 10 ; ++i){
                if(n % 2021){
                    n -= 2021;
                }else if(n < 2021){
                    cout<<"NO\n";
                    check = false;
                    break;
                }else{
                    cout<<"YES\n";
                    check = false;
                    break;
                }
            }
            if(check){
                if(!(n % 2020)){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
        }else if(n == 2020 || n == 2021){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}