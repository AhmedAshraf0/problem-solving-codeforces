/*
CST
08-Aug-22
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
        int n , k , res  = INT_MAX;
        string str;
        cin>>n>>k>>str;
        vector<int>v1(n+1);
        v1[0] = 0;
        for(int i = 0 ; i < n ; ++i)
            if(str[i] == 'W')
                v1[i+1] = 1;
        for(int i = 1 ; i <= n ; ++i)
            v1[i] += v1[i-1];
        for(int i = k ; i <= n ; ++i)
            res = min(res,v1[i]-v1[i-k]);
        cout<<res<<'\n';
    }
}
