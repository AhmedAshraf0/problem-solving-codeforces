/*
CST
06-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    if(n-10 <= 11 && n-10 > 0){
        if(n-10 < 10 || n-10 == 11){
            cout<<4;
        }else if(n- 10 == 10){
            cout<<15;
        }
    }else{
        cout<<0;
    }
}
