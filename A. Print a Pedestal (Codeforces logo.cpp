/*
CST
07-Aug-22
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
        int val = n/3;
        if(!(n%3))
            cout<<val<<' '<<val+1<<' '<<val-1;
        else if(n%3 == 1){
            if(val-2){
                cout<<val+1<<' '<<val+2<<' '<<val-2;
            }else{
                cout<<val<<' '<<val+2<<' '<<val-1;
            }
        }else if(n%3 == 2)
            cout<<val+1<<' '<<val+2<<' '<<val-1;
        cout<<'\n';
    }
}
