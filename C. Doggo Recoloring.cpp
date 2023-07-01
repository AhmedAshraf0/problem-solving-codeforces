/*
CST
05-Dec-22
*/
#include<bits/stdc++.h>

using namespace std;
int arr[26];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    string str;
    bool ans = false;
    cin>>n>>str;
    for(int i = 0 ;i  < n; ++i)
        arr[str[i]-97]++;
    for(int i = 0 ; i < 26 ;++i)
        if(arr[i] >= 2)
            ans = true;
    if(ans || n == 1)
        cout<<"Yes";
    else
        cout<<"No";
    cout<<'\n';
}
