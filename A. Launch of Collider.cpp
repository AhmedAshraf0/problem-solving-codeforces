//
// Created by CST on 20-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int>v(n);
    for (auto &item: v)
        cin>>item;
    int mi = 1e9;
    for(int i = 0 ; i < n - 1 ; ++i){
        if(str[i] == 'R' && str[i+1] == 'L'){
            mi = min(mi,(v[i+1] - v[i])/2);
        }

    }
    if(mi == 1e9)
        cout<<-1;
    else
        cout<<mi;
}