/*
CST
08-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n] , b[n] , n2 = 2 * n;
        for(int i = 0 ; i < n2 ; ++i){
            if(i < n){
                cin>>a[i];
            }else{
                cin>>b[i-n];
                if(!(i-n)){
                    cout<<b[i-n]-a[i-n]<<' ';
                }else{
                    if(b[i-n-1] > a[i-n]){
                        cout<<b[i-n]-b[i-n-1]<<' ';
                    }else{
                        cout<<b[i-n]-a[i-n]<<' ';
                    }
                }
            }
        }
        cout<<'\n';
    }
}
