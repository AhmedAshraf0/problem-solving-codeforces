//
// Created by CST on 01-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string , int>p1 , pair<string , int> p2){
    if(p1.second > p2.second)
        return true;
    else if(p1.second == p2.second){
        if(p1.first < p2.first){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>>v(n);
    for(int i = 0 ; i < n ; ++i)
        cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end(),compare);
    for(int i = 0 ; i < n ; ++i)
        cout<<v[i].first<<' '<<v[i].second<<'\n';
}