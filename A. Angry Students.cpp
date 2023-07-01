/*
CST
28-Oct-22
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
        int n , mx = 0;
        string str;
        cin>>n>>str;
        for(int i = 0 ; i < n-1 ; ++i){
            if(str[i] == 'A' && str[i+1] == 'P'){
                int j=i+1;
                for( ; j < n ; ++j){
                    if(str[j] != 'P')
                        break;
                }
                mx = max(j-1-i,mx);
            }
        }
        cout<<mx<<'\n';
    }
}
