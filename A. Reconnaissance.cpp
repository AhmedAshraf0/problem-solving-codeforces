/*
CST
13-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , d , ctr= 0;
    cin>>n>>d;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i){
        for(int j = i+1 ; j < n; ++j){
            if(abs(arr[j]-arr[i]) <= d)
                ctr++;
        }
    }
    cout<<ctr*2;
}
