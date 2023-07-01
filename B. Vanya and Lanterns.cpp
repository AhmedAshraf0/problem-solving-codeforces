/*
CST
14-Nov-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , l , opr2 = 0;
    double res = 0;
    cin>>n>>l;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i = 0 ; i < n ; ++i){
        if(arr[i] != 0 && i != 0)
            res = max((arr[i]-opr2)/2.0,res);
        else
            res = arr[i];
        opr2 = arr[i];
    }
    res = max(res,(double)l-arr[n-1]);
    cout<<fixed<<setprecision(10)<<res;
}
