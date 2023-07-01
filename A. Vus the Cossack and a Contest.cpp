/*
CST
28-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m ,k;
    cin>>n>>m>>k;
    if(m >= n && k >= n)
        cout<<"Yes";
    else
        cout<<"No";
}
