/*
CST
30-Dec-22
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
        long long arr[n];
        for(int i = 0 ; i < n ; ++i)
            cin>>arr[i];
        for(int i = 1 ; i < n ; ++i){
            arr[0] = arr[0]*arr[i];
            arr[i] = 1;
        }
        cout<<2022*(arr[0]+(n-1))<<'\n';
    }
}
