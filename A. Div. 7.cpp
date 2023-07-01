/*
CST
28-Sep-22
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
        int n , n2;
        cin>>n;
        n2 = n%7;
        string str;
        if(n2 == 0){
            cout<<n;
        }else{
            int ans = -1;
            for(int j = 1 ; j < 10 ; ++j){
                if ((n - n % 10 + j) % 7 == 0)
                    ans = n - n % 10 + j;
            }
            cout<<ans;
        }
        cout<<'\n';
    }
}
