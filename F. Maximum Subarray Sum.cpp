/*
CST
17-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n , ans = INT_MIN;
    long long a = 0;
    cin>>n;
    vector<int>v1(n,0);
    for(int i = 0 ; i < n ; ++i)
        cin>>v1[i];
    for(int i = 0 ; i < n ; ++i){
        a += v1[i];
        ans = max(ans,a);
        a = max(a,(long long)0);
    }
    cout<<ans;
}
