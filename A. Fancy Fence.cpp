/*
CST
10-Dec-22
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(360%(180-n) == 0)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<'\n';
    }
}
