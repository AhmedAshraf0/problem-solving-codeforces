/*
CST
02-Jul-22
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n , t;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i)
        cin>>v[i];
    sort(v.begin(),v.end());
    cin>>t;
    while(t--){
        int l , r;
        vector<int>::iterator ll , rr;
        cin>>l>>r;
        ll = lower_bound(v.begin(),v.end(),l);
        rr = upper_bound(v.begin(),v.end(),r);
        cout<<(((rr-v.begin())-1)-(ll-v.begin()))+1<<' ';
    }
}
