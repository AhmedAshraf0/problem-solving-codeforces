/*
CST
09-Dec-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int>v1(5);
    int ans;
    for(int i = 0 ; i < 5 ; ++i)
        cin>>v1[i];
    ans = min(v1[0],min(v1[1],min(v1[2]/2,min(v1[3]/7,v1[4]/4))));
    cout<<ans;
}
