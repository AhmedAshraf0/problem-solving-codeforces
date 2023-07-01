/*
CST
27-Aug-22
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
        int n;
        cin>>n;
        if(n == 4 || n == 1){
            cout<<2<<'\n';
            continue;
        }
        if(!(n%3))
            cout<<n/3;
        else if((!(n%2) && (n%3 == 1)) || ((n%3 == 1) &&( n%2 == 1)))
            cout<<n/3 + 2;
        else if(!(n%2) && (n%3 == 2) || ((n%3 == 2) &&( n%2 == 1)))
            cout<<n/3 + 1;
        cout<<'\n';
    }
}
