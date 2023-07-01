//
// Created by CST on 01-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<pair<int,int>,int> p1 , pair<pair<int,int>,int> p2){
    if(p1.first.second > p2.first.second)
        return p1.first.second;
    else
        return false;
}
bool compare2(pair<pair<int,int>,int> p1 , pair<pair<int,int>,int> p2){
    if(p1.first.first < p2.first.first)
        return p1.first.first;
    else
        return false;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>v(n);//price , quality , index
    for(int i = 0 ; i < n ; ++i)
        cin>>v[i].first.first>>v[i].first.second;
    sort(v.begin(),v.end(),compare);//descending quality
    for(int i = 0 ; i < n ; ++i)
        v[i].second = i;
    vector<pair<pair<int,int>,int>>v2(v);
    sort(v2.begin(),v2.end(),compare2);//ascending price
    for(int i = 0 ; i < n ; ++i){//v2
        //int currentQuality = ;
        if(v2[i].second+1 != n){
            for(int j = v2[i].second+1 ; j < n ; ++j){
                if(v[j].first.second < v[v2[i].second].first.second)
                    if(v[j].first.first > v[v2[i].second].first.first){
                        cout<<"Happy Alex";
                        return 0;
                    }
            }
        }
    }
    cout<<"Poor Alex";
}
/*
 * for loop will compare the first price in v2 with second price in v
 * it supposed to search in a specific indexes with lower quality
 * */