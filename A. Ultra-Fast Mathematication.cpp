//
// Created by CST on 16-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 , str2 , str3 = "";
    cin>>str1>>str2;
    int ptr = 0;
    for(int i = 0 ; i < (int)str1.size() ; ++i){
        if(str1[ptr] != str2[ptr]){
            str3 += '1';
        }else{
            str3 += '0';
        }
        ptr++;
    }
    cout<<str3;
}
