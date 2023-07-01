/*
CST
11-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<bool>v1(1e9+1);
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(!v1[num])
            v1[num] = true;
        else
            v1[num] = false;
    }
    cout<<find(v1.begin(),v1.end(),true)-v1.begin();
}
