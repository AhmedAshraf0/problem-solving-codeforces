/*
CST
15-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int a[n] , b[n] , ctr = 0;
    for(int i = 0 ; i < n ; ++i)
        cin>>a[i];
    for(int i = 0 ; i < n ; ++i)
        cin>>b[i];
    sort(a,a+n,greater<int>());
    sort(b,b+n);
    int j = 0;
    for(int i = n-1 ; i >= 0 ; --i){
        if(b[i] < a[j]){
            ctr++;
            j++;
        }else
            continue;
    }
    if(ctr > n/2)
        cout<<"YES"<<'\n'<<ctr;
    else
        cout<<"NO";
}
