/*
CST
19-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , l = 0 , len = 0;
    long long s , sum = 0;
    cin>>n>>s;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    //at most means that <= s
    for(int r = 0 ; r < n ; ++r){
        sum += arr[r];
        while(sum > s){
            sum -= arr[l];
            l++;
        }
        len = max(len,r-l+1);
    }
    cout<<len;
}
