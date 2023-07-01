//
// Created by CST on 09-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str;
    cin>>str;
    int i = 0;
    if(str[i] == '9')
        ++i;
    for(; i < str.size() ; ++i){
        string str2 = "0";
        str2 += str[i];
        int num = stoi(str2);
        if(9 - num <  num)
            cout<<9-num;
        else
            cout<<num;
    }
}