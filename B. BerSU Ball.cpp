/*
CST
18-Nov-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<pair<int,int>>s1;
    vector<int>v1,v2;
    int n , m;
    cin>>n;
    for(int i = 0 ;i < n; ++i){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    cin>>m;
    for(int i = 0 ;i < m; ++i){
        int num;
        cin>>num;
        v2.push_back(num);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            if(abs(v1[i]-v2[j]) <= 1){
                s1.push_back(make_pair(v1[i],v2[j]));
                v2[j] = 1000;
                break;
            }
        }
    }
    cout<<s1.size();
}
