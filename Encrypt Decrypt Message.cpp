//
// Created by CST on 17-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/" , str ,
      original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n , s;
    cin>>n>>str;
    s = (int)str.size();
    if(n == 1){
        for(int i = 0 ; i < s; ++i){
            str[i] = key[original.find(str[i])];
        }
    }else{
        for(int i = 0 ; i < s; ++i){
            str[i] = original[key.find(str[i])];
        }
    }
    cout<<str;
}
