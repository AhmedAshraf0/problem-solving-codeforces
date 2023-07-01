/*
CST
19-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m  , x = 0;
    cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i){
        x += arr[i];
        cout<<x/m<<' ';
        x %= m;
    }
}
