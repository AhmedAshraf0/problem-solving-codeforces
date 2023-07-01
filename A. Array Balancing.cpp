/*
CST
17-Dec-22
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
        int n , sum = 0;
        cin>>n;
        n *= 2;
        int arr[n];
        for(int i = 0 ; i < n ; ++i)
            cin>>arr[i];
        for(int i = 0 ; i < n-1 ; ++i){
            if(i != n-1)
                sum += arr[i]-arr[i+1];
        }
        cout<<abs(sum)<<'\n';
    }
}
