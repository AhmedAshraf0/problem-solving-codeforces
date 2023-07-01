/*
CST
15-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long arr2[30] ,arr[30] ; arr2[0] = 1 ;arr[0] = 1;
    for(int i = 1 ; i < 30 ; ++i)
        arr[i] = arr[i-1]*2;
    for(int i = 1 ; i < 30 ; ++i)
        arr2[i] = arr2[i-1]+arr[i];
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        for(int i = 0 ; i < 30 ; ++i){
            if(arr[i] > n){
                cout<<((n*(n+1))/2)-(arr2[i-1]*2)<<'\n';
                break;
            }else if(arr[i] == n){
                cout<<((n*(n+1))/2)-(arr2[i]*2)<<'\n';
                break;
            }
            if(i == 29){
                cout<<((n*(n+1))/2)-(arr2[29]*2)<<'\n';;
            }
        }
    }
}
