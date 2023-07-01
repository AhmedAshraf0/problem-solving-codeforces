/*
CST
24-Nov-22
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
        int arr[n] , mx = -1 , mx2 = -2;
        for(int i = 0 ;i < n ;++i){
            cin>>arr[i];
            if(arr[i] > mx){
                if(mx > mx2)
                    mx2 = mx;
                mx = arr[i];
            }else if(arr[i] > mx2){
                mx2 = arr[i];
            }
        }
        for(int i = 0 ;i < n ;++i){
            if(arr[i] == mx){
                cout<<arr[i]-mx2;
            }else{
                cout<<arr[i]-mx;
            }
            cout<<' ';
        }
        cout<<'\n';
    }
}
