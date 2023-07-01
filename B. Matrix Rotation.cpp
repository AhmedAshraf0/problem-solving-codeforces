/*
CST
20-Dec-22
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
        bool ans = false;
        int i = 0 , arr[2][2];
        cin>>arr[0][0]>>arr[0][1]>>arr[1][0]>>arr[1][1];
        do{
            if(arr[0][0]<arr[0][1]&&arr[1][0]<arr[1][1]&&arr[0][0]<arr[1][0]&&arr[0][1]<arr[1][1]){
                ans = true;
                break;
            }else{
                swap(arr[0][0],arr[0][1]);
                swap(arr[0][0],arr[1][0]);
                swap(arr[1][0],arr[1][1]);
            }
            ++i;
        }while(i <= 3);
        if(ans) {
            cout<<"YES\n";
            ans = false;
        }else
            cout<<"NO\n";
    }
}
