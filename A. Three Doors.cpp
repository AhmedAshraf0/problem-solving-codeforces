/*
CST
24-Jul-22
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
        int key , arr[3];
        cin>>key>>arr[0]>>arr[1]>>arr[2];
        if(arr[key-1])
            if(arr[arr[key-1]-1])
                cout<<"YES";
            else
                cout<<"NO";
        else
            cout<<"NO";
        cout<<'\n';
    }
}
