/*
CST
20-Nov-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , t , ans = 0 ,tt;
    cin>>n>>t;
    int arr[n];
    for(int i = 0 ;i < n ;++i)
        cin>>arr[i];
    int j = 0;
    tt = t;
    for(int i = 0 ; i < n ; ++i){
        tt -= arr[i];
        if(tt > 0){
            ans = max(ans,1);
            for( ; j < n ;++j){
                tt -=arr[j];
                if(tt < 0){
                    ans = max(ans,j-i);
                    j = n;
                }else if(tt == 0){
                    ans = max(ans,j-i+1);
                    j = n;
                }else{
                    ans = max(ans,j-i+1);
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
