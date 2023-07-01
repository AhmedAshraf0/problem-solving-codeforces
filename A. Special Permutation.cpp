/*
CST
24-Dec-22
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
        if(!(n%2)){
            for(int i = n ; i >= 1 ; --i)
                cout<<i<<' ';
        }else{
            for(int i = n ; i >= 1 ; --i){
                if(i == (n+1)/2)
                    cout<<1;
                else if(i == 1)
                    cout<<(n+1)/2;
                else
                    cout<<i;
                cout<<' ';
            }
        }
        cout<<'\n';
    }
}
