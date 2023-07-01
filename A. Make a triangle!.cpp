/*
CST
10-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if((arr[0]*arr[0] + arr[1]*arr[1] == arr[2]*arr[2]) || (arr[0] == arr[1] && arr[1] == arr[2]) || (arr[2]==arr[1]) || (arr[2]<arr[1]+arr[0]))
        cout<<0;
    else{
        if(arr[1] == arr[2])
            cout<<arr[2]-arr[0];
        else{
            cout<<(arr[2]-(arr[1]+arr[0]))+1;
        }
    }
}
