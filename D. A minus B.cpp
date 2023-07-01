/*
CST
08-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a , b;cin>>a>>b;
    string str = to_string(a-b);
    if(to_string(a-b-1).size()==str.size())
        cout<<a-b-1;
    else
        cout<<a-b+2;
}
