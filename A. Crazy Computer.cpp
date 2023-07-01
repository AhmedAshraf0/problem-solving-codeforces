/*
CST
22-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , c , mx = 1;
    cin>>n>>c;
    int arr[n];
    for(int i = 0 ;i < n ; ++i)
        cin>>arr[i];
    for(int i = 1 ;i < n ; ++i){
        if(arr[i] - arr[i-1] <= c)
            mx++;
        else
            mx = 1;
    }
    cout<<mx;
}
