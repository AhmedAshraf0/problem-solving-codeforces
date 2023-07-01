/*
CST
09-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;
bool compare(pair<string,pair<int,int>> p1 , pair<string,pair<int,int>> p2){
    if(p1.second.first > p2.second.first){
        return true;
    }else if(p1.second.first == p2.second.first){
        if(p1.second.second < p2.second.second){
            return true;
        }
        return false;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<string,pair<int,int>>>v1(n);
        for(int i = 0 ; i < n ; ++i)
            cin>>v1[i].first>>v1[i].second.first>>v1[i].second.second;
        sort(v1.begin(),v1.end() , compare);
        cout<<v1[0].first<<'\n';
    }
}
