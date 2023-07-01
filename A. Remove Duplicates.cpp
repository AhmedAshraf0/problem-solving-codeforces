//
// Created by CST on 01-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , ctr = 0;
    cin>>n;
    vector<int> v1;
    for(int i = 0 ; i < n ; ++i){
        int value;
        cin>>value;
        v1.push_back(value);
    }
    for(int i = 0 ; i < n ; ++i){
        for(int j = i + 1 ; j < n ; ++j){
            if(v1[i] == v1[j]){
                v1[i] = 0;
                ctr++;
            }
        }
    }
    cout<<(int)v1.size() - ctr<<'\n';
    for(int i = 0 ; i < (int)v1.size() ; ++i){
        if(v1[i] != 0)
            cout<<v1[i]<<' ';
    }
}
