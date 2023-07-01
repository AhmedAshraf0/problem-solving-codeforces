/*
CST
24-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n , d , mx , ctr = 0;
    cin>>n>>d;
    long long arr[n];
    for(int i  = 0  ; i < n ; ++i)
        cin>>arr[i];
    mx = arr[0];
    for(int i = 1  ; i < n ; ++i){
        if(arr[i] < mx){
            int test = ((mx-arr[i])%d)+((mx-arr[i])/d);
            ctr += test;
            if((mx-arr[i])%d == 0){
                ctr++;
                test++;
            }
            mx = test * d;
        }else if(arr[i] == mx){
            ctr++;
            mx = arr[i]+d;
        }else
            mx = arr[i];
    }
    cout<<ctr;
}
