/*
CST
31-Oct-22
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
        int n , h;
        cin>>n>>h;
        long long arr[n];
        for(int i = 0 ; i < n ;++i)
            cin>>arr[i];
        sort(arr,arr+n);
        if(h%(arr[n-1]+arr[n-2]) == 0){
            cout<<2*(h/(arr[n-1]+arr[n-2]));
        }else if(h%(arr[n-1]+arr[n-2]) <= arr[n-1]){
            cout<<2*(h/(arr[n-1]+arr[n-2]))+1;
        }else{
            cout<<2*(h/(arr[n-1]+arr[n-2]))+2;
        }
        cout<<'\n';
    }
}
