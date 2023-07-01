/*
CST
09-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , t;
    cin>>n>>t;
    if(n == 1 && t == 10){
        cout<<-1;
        return 0;
    }
    if(t == 10){
        for(int i = 1 ; i < n ; ++i)
            cout<<1;
        cout<<0;
        return 0;
    }
    for(int i = 1 ; i <= n ; ++i)
        cout<<t;
}
