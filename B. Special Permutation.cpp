/*
CST
18-Aug-22
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
        int n , a ,b;
        cin>>n>>a>>b;
        vector<int>v1,v2;
        for(int i = 1 ; i <= n ; ++i)
            v1.push_back(i);
        v2.push_back(a);
        v1[a-1] = 0;
        for(int i = n-1 ; i >= 0 ; --i){
            if(v2.size() == n/2)
                break;
            if(v1[i]>a && v1[i] != b) {
                v2.push_back(i+1);
                v1[i] = 0;
            }
        }
        if(v2.size() != n/2){
            for(int i = n-1 ; i >= 0 ; --i){
                if(v2.size() == n/2)
                    break;
                if(a != v1[i] && v1[i] > 0){
                    v2.push_back(i+1);
                    v1[i] = 0;
                }
            }
        }
        if(*min_element(v2.begin(),v2.end()) == a && *max_element(v1.begin(),v1.end()) == b){
            for (const auto &item: v2)
                cout<<item<<' ';
            for(int i = 0 ; i < n ; ++i)
                if(v1[i])
                    cout<<v1[i]<<' ';
        }
        else
            cout<<-1;
        cout<<'\n';
    }
}