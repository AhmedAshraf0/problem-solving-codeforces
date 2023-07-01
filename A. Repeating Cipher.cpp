//
// Created by CST on 28-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , ctr = 1;
    string str;
    cin>>n>>str;
    for(int i = 0 ; i < n ; i += ctr , ctr++)
        cout<<str[i];
}