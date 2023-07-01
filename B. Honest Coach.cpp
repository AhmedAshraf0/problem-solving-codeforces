/*
CST
04-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , m = INT_MAX;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; ++i)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i = 0 ; i < n - 1 ; ++i){
            int test = abs(arr[i] - arr[i+1]);
            if(test < m)
                m = test;
        }
        cout<<m<<'\n';
    }
}
