/*
CST
17-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n;
    cin>>n;
    if(n == 2)
        cout<<3;
    else if(n == 4)
        cout<<6;
    else{
        cout<<n*2-3;
    }
}
