/*
CST
23-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i = 0 ; i < n ; ++i){
        m -= arr[i];
        if(m <= 0){
            cout<<i+1;
            i = n;
        }
    }
}
