/*
CST
01-Sep-22
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
        int n , x;
        cin>>n>>x;
        int arr[n*2];
        for(int i = 0 ; i < n*2  ; ++i){
            cin>>arr[i];
        }
        sort(arr,arr+n*2);
        for(int i = 0 ; i < n  ; ++i){
            if(arr[i+n]-arr[i] < x){
                cout<<"no\n";
                goto here;
            }
        }
        cout<<"yes\n";
    here:
        continue;
    }
}
