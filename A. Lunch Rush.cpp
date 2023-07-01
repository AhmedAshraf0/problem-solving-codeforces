/*
CST
14-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , k , mx = INT_MIN;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>v[i].first>>v[i].second;
    }
    for(int i = 0 ; i < n ; ++i){
        if(v[i].second <= k){
            mx = max(v[i].first , mx);
        }else{
            mx = max(mx,v[i].first-(v[i].second-k));
        }
    }
    cout<<mx;
}
