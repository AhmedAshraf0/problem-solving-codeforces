/*
CST
05-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m ;
    long long total = 0;
    cin>>n>>m;
    vector<pair<int,int>>v1(m);
    for(int i = 0 ; i < m;  ++i)
        cin>>v1[i].second>>v1[i].first;
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());
    for(int i = 0 ; i < m;  ++i){
        if(n-v1[i].second>0){
            total += (long long)v1[i].first*v1[i].second;
            n -= v1[i].second;
        }else{
            total += (long long)v1[i].first*(v1[i].second+(n -v1[i].second));
            cout<<total;
            return 0;
        }
    }
    cout<<total;
}
