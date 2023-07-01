/*
CST
11-Sep-22
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
    long long arr[n];
    set<long long>s1;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i){
        for(int j = i+1 ; j < n ; ++j){
            s1.emplace(arr[i]+arr[j]);
        }
    }
    cout<<s1.size();
}
