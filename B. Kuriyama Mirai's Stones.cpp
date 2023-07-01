//
// Created by CST on 29-May-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , m;
    cin>>n;
    int arr[n];
    long long arr2[n+1] , arr3[n+1];
    arr2[0] = 0; arr3[0] = 0;
    for (auto &item : arr)
        cin>>item;
    for(int i = 1 ; i <= n ; ++i)
        arr2[i] = arr2[i-1] + arr[i-1];
    sort(arr , arr+n);
    for(int i = 1 ; i <= n ; ++i)
        arr3[i] = arr3[i-1] + arr[i-1];
    cin>>m;
    while(m--){
        int t , l , r;
        cin>>t>>l>>r;
        if(t == 1)
            cout<<arr2[r]-arr2[l-1];
        else if(t == 2)
            cout<<arr3[r]-arr3[l-1];
        cout<<'\n';
    }
}
