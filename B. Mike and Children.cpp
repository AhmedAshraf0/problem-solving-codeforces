/*
CST
30-Nov-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , mx = 0;
    cin>>n;
    int arr[n];
    map<long long,int>m1;
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = 0 ; i < n ; ++i){
        for(int j = i+1 ; j < n ; ++j){
            m1[(long long)arr[i]+arr[j]]++;
        }
    }
    for(auto it = m1.begin() ; it != m1.end() ; it++){
        mx = max(mx,it->second);
    }
    cout<<mx;
}

