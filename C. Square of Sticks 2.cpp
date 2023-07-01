/*
CST
22-Jul-22
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
    if(n < 4){
        cout<<0;
        return 0;
    }
    long long arr[n];
    for (auto &item: arr)
        cin>>item;
    sort(arr,arr+n);
    cout<<arr[n-4]*arr[n-4];
}
