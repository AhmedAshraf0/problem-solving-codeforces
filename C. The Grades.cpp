/*
CST
04-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;
bool compare(pair<string,vector<int>> p1, pair<string,vector<int>> p2){
    if(abs(p1.second[0] - p2.second[0]) > 10){
        if(p1.second[0] > p2.second[0])
            return true;
        else
            return false;
    }else{
        if(p1.first < p2.first)
            return true;
        else
            return false;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<pair<string,vector<int>>>v1(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>v1[i].first;
        int sum = 0;
        for(int j = 0 ; j < 4 ; ++j){
            int num;
            cin>>num;
            sum += num;
            v1[i].second.push_back(num);
        }
        v1[i].second.insert(v1[i].second.begin(),sum);
    }
    sort(v1.begin(),v1.end(), compare);
    for(int i = 0 ; i < n ; ++i){
        cout<<v1[i].first<<' ';
        for(int j = 0 ; j < 5 ; ++j)
            cout<<v1[i].second[j]<<' ';
        cout<<'\n';
    }
}
