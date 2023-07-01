/*
CST
06-Dec-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        cout<<str;
        reverse(str.begin(),str.end());
        cout<<str<<'\n';
    }
}
