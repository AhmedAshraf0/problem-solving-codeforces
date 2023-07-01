/*
CST
17-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;
int prearr[102];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    prearr[0] = 0;
    int n , m , ctr = 0;
    cin>>n>>m;
    while(n--){
        int l , r;
        cin>>l>>r;
        prearr[l]++;
        prearr[r+1] -= 1;
    }
    for(int i = 1 ; i <= m ; ++i){
        prearr[i] += prearr[i-1];
        if(prearr[i] == 0)
            ctr++;
    }
    cout<<ctr<<'\n';
    for(int i = 1 ; i <= m ; ++i){
        if(prearr[i] == 0)
            cout<<i<<' ';
    }
}
