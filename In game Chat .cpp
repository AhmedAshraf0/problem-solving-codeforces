//
// Created by CST on 01-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , ctr = 0 , i , s;
        string str;
        cin>>n>>str;
        s = str.size();
        i = s -1;
        for( ; i >= 0 ; --i){
            if(str[i] == ')'){
                ctr++;
                s--;
            }
            if(ctr > s || str[i] != ')' || i == 0){
                if(ctr > s){
                    cout<<"yes"<<'\n';
                    break;
                }else{
                    cout<<"no"<<'\n';
                    break;
                }
            }
        }
    }
}
