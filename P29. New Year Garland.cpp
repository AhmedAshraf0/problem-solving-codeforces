/*
CST
21-Jul-22
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
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        if(arr[0] == arr[1] && arr[1] == arr[2])
            cout<<"Yes\n";
        else{
            sort(arr,arr+3);
            long long val = arr[1] + arr[0];
            if(arr[2] - val > 1){
                cout<<"No\n";
                goto con;
            }
            cout<<"Yes\n";
        con:
            continue;
        }
    }

}
