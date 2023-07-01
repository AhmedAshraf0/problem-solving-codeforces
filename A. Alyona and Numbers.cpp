/*
CST
06-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;
int calc(int x , int y){return abs(((y+x)/5)-(y/5));}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m , ma , mi;
    long long ctr = 0;
    cin>>n>>m;
    mi = max(m,n);
    ma = min(m,n);
    for(int i = 1 ; i <= ma ; ++i){
        ctr += calc(mi,i);
    }
    cout<<ctr;
}
