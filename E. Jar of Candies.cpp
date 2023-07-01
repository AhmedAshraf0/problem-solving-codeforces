/*
CST
07-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m , n;
    cin>>m>>n;
    while(n--){
        int val;cin>>val;
        cout<<m-val<<'\n';
        m = val;
    }
}
