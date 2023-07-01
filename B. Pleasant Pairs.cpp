/*
CST
13-Nov-22
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
        int n , ctr = 0;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; ++i)
            cin>>arr[i];
        for(int i = 0 ; i < n - 1 ; ++i){
            for(int j = i + 1 ; j < n ; ++j){
                if(i+j+2 == (long long)arr[i]*arr[j])
                    ctr++;
            }
        }
        cout<<ctr<<'\n';
    }
}
