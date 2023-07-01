/*
CST
31-Dec-22
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
        long long sum1 = 0;
        cin>>n>>m;
        int arr[n+m];
        for(int i = 0 ;i < n+m ; ++i)
            cin>>arr[i];
        sort(arr,arr+n+m-1);
        reverse(arr,arr+n+m);
        for(int i = 0; i < n ; ++i){
            sum1 += arr[i];
        }
        cout<<sum1<<'\n';
    }
}
