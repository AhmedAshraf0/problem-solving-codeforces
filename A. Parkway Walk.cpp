/*
CST
10-Jul-22
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
        int n , m;
        cin>>n>>m;
        int arr[n+1];
        arr[0] = 0;
        for(int i = 1 ; i <= n ; ++i)
            cin>>arr[i];
        for(int i = 1 ; i <= n ; ++i)
            arr[i] += arr[i-1];
        if(arr[n] <= m)
            cout<<0;
        else
            cout<<arr[n]-m;
        cout<<'\n';
    }
}
