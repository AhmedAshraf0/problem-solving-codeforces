//
// Created by CST on 26-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int t = str.size();
    while(t--){
        string str2 = "0";
        str2 += str[t];
        int n = stoi(str2);
        if(n >= 5){
            cout<<"-O";
            n -= 5;
        }else{
            cout<<"O-";
        }
        cout<<'|';
        int r = 4 - n;
        for(; n > 0 ; --n)
            cout<<"O";
        cout<<"-";
        for(; r > 0 ; --r)
            cout<<"O";
        cout<<'\n';
    }
}
