//
// Created by CST on 15-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<pair<int,int>,int> p1, pair<pair<int,int>,int> p2){
    if(p2.first.first >= p1.first.first)
        return false;
    return true;
}
bool compare2(pair<pair<int,int>,int> p1, pair<pair<int,int>,int> p2){
    if(p2.second < p1.second)
        return false;
    return true;
}
int main(){
    int n , idx = 1;
    cin>>n;
    bool first = true;
    vector<pair<pair<int,int>,int>>v1;
    while(n--){
        int num1;
        cin>>num1;
        if(first){
            first = false;
            v1.push_back(make_pair(make_pair(num1,0),0));
            continue;
        }
        v1.push_back(make_pair(make_pair(num1,-1),idx));
        idx++;
        sort(v1.begin(),v1.end(),compare);
        for(int i = 0 ; i < v1.size() ; ++i)
            if(v1[i].first.second == -1){
                v1[i].first.second = i;
                break;
            }
    }
    sort(v1.begin(),v1.end(),compare2);
    int s = v1.size();
    for(int i = 0 ; i < s ;  ++i)
        cout<<v1[i].first.second+1<<'\n';
    sort(v1.begin(),v1.end(),compare);
    for(int i = 0 ; i < s ;  ++i)
        cout<<v1[i].first.first<<' ';
}
