/*
CST
21-Sep-22
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
        int a , b ,c;
        cin>>a>>b>>c;
        if((a < b) || ((a==b) && (c > b))){
            cout<<1;
        }else if((a == b) && c < b){
            cout<<3;
        }else{
            if(c < b){
                cout<<2;
            }else{
                if(a-1 < (c-b)+c-1){
                    cout<<1;
                }else if(a-1 == (c-b)+c-1){
                    cout<<3;
                }else{
                    cout<<2;
                }
            }
        }
        cout<<'\n';
    }
}
