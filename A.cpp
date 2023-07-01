/*
CST
04-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n , h , m , mins;
        cin>>n>>h>>m;
        vector<pair<int,int>>v1(n);
        pair<int,int>v1p;
        for(int i = 0 ; i < n ; ++i)
            cin>>v1[i].first>>v1[i].second;
        sort(v1.begin(),v1.end());
        for(int i  = 0 ; i < n ; ++i){
            if(v1[i].first > h){
                v1p = v1[i];
                break;
            }else if(v1[i].first == h && v1[i].second >= m){
                v1p = v1[i];
                break;
            }else{
                v1p = v1[0];
            }
        }
        if(m < v1p.second){
            mins = v1p.second -m;
        }else if(m > v1p.second){
            mins = (60-m)+v1p.second;
            h++;
        }else
            mins = 0;
        if(h < v1p.first){
            cout<<v1p.first-h<<' '<<mins;
        }else if(h > v1p.first){
            if(h != 0){
                cout<<(24-h)+v1p.first<<' '<<mins;
            }else{
                cout<<v1p.first<<' '<<mins;
            }
        }else{
            cout<<0<<' '<<mins;
        }
        cout<<'\n';
    }
}
