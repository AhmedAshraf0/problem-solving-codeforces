/*
CST
29-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(!i)
                arr[i][j] = 1;
            if(!j && i>0)
                arr[i][j] = 1;
        }
    }
    for(int i = 1 ; i < n ; ++i)
        for(int j = 1 ; j < n ; ++j)
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
    cout<<arr[n-1][n-1];
}
