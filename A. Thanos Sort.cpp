/*
CST
08-Dec-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , res = 1 , ctr = 1;
    cin>>n;
    int arr[n];
    for(int i =0 ; i < n ; ++i)
        cin>>arr[i];
    for(int i = n ; i > 1 ; i/=2){
        int k = 0;
        for(int j = i ; j <= n ; j += i){
            for( ; k < j - 1 ; ++k){
                if(arr[k]<=arr[k+1]){
                    ctr++;
                    res = max(res,ctr);
                }else{
                    res = ctr = 1;
                    k = j;
                    break;
                }
                if(res == i){
                    j = k = n+1;
                    i = 0;
                    break;
                }
            }
        }
    }
    cout<<res;
}
