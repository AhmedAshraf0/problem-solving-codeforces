//
// Created by CST on 01-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,pair<string,vector<int>>> p1, pair<int,pair<string,vector<int>>> p2){
    if(p1.first > p2.first){
        return true;
    }else if(p1.first == p2.first){
        if(p1.second.first < p2.second.first)
            return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,pair<string,vector<int>>>> v(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>v[i].second.first;
        for(int j = 0 ; j < 4 ; ++j){
            int val;
            cin>>val;
            v[i].second.second.push_back(val);
        }
    }
    for(int i = 0 ; i < n ; ++i){
        int sum = 0;
        for(int j = 0 ; j < 4 ; ++j){
            sum += v[i].second.second[j];
        }
        v[i].first = sum;
    }
    sort(v.begin(),v.end(),compare);
    for(int i = 0 ; i < n ; ++i){
        cout<<v[i].second.first<<' '<<v[i].first<<' ';
        for(int j = 0 ; j < 4 ; ++j){
            cout<<v[i].second.second[j]<<' ';
        }
        cout<<'\n';
    }
}