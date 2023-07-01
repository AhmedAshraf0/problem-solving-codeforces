/*
CST
01-Nov-22
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
        if(n!=1){
            for(int i = 2 ; i <= n+1 ; ++i)
                cout<<i<<' ';
        }else{
            cout<<1;
        }
        cout<<'\n';
    }
}
