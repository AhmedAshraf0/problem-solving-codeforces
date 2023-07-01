//
// Created by CST on 14-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str , substr;
    cin>>n>>str;
    for(int i = 0 ; i < n ; ++i){
        if(i == 0){
            substr = str[0];
            continue;
        }
        if(str[i] == substr[i-1]){
            continue;
        }else{
            substr.push_back(str[i]);
        }
    }
    cout<<substr.size();
}
