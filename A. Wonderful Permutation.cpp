/*
CST
13-Aug-22
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
        int n , k , ctr = 0;
        cin>>n>>k;
        int arr[n] , arr2[n];
        for(int i = 0 ; i < n ; ++i){
            cin>>arr[i];
            arr2[i] = arr[i];
        }
        sort(arr2,arr2+n);
        for(int i = 0 ; i < k ;++i){
            if(find(arr,arr+k,arr2[i])==arr+k)
                ctr++;
        }
        cout<<ctr<<'\n';
    }
}
