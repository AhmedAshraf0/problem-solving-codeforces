/*
CST
21-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a , b;
    cin>>a>>b;
    if(a > b)
        cout<<a-b<<" R";
    else if(a < b)
        cout<<b-a<<" L";
    else
        cout<<0;
}
