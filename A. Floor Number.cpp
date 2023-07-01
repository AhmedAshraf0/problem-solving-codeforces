//
// Created by CST on 14-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , x , total = 2 , floor = 1;
        cin>>n>>x;
        if(n <= total){
            cout<<floor<<endl;
        }else{
            for( ; true ; ++floor){
                if(n <= total){
                    cout<<floor<<endl;
                    break;
                }else{
                    total += x;
                }
            }
        }
    }
}
