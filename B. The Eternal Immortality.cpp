//
// Created by CST on 19-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a , b;
    cin>>a>>b;
    b -= a;
    for(long long i = b-1; i >= 2 ; i--)
        b *= i;
    string str = to_string(b);
    cout<<str[str.size()-1];
}