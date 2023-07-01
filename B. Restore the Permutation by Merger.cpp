/*
CST
20-Nov-22
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
        int n;
        cin>>n;
        vector<bool>v(n,true);
        n*=2;
        int arr[n];
        for(int i = 0 ; i < n ;++i)
            cin>>arr[i];
        for(int i = 0 ; i < n ;++i){
            if(i == 0 || i == n-1){
                if(v[arr[i]-1])
                    cout<<arr[i]<<' ';
                v[arr[i]-1] = false;

            }else{
                if(v[arr[i]-1] && arr[i] != arr[n-1]){
                    cout<<arr[i]<<' ';
                    v[arr[i]-1] = false;
                }
            }
        }
        cout<<'\n';
    }
}
