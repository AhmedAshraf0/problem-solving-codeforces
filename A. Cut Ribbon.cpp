/*
CST
13-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , a ,b , c;
    cin>>n>>a>>b>>c;
    int res = 0;
    for(int i = 0 ; i <= n ; ++i){
        for(int j = 0 ; j <= n ; ++j){
            int currentLen = i*a + j*b;
            int val = n-currentLen;
            if(val % c || val < 0)
                continue;
            res = max(res , i+j+val/c);
        }
    }
    cout<<res;
}
