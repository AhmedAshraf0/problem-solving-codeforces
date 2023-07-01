/*
CST
29-Oct-22
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
        int n , octr = 0;
        cin>>n;
        n*=2;
        int arr[n];
        for(int i = 0 ; i< n ;++i){
            cin>>arr[i];
            if(arr[i]%2)
                octr++;
        }
        if(octr == n/2)
            cout<<"yes";
        else
            cout<<"no";
        cout<<'\n';

    }
}
