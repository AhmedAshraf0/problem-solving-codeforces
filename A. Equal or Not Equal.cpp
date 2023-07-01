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
        string str;
        cin>>str;
        if(str[0] == str[str.size()-1])
            cout<<"YES";
        else
            cout<<"NO";
        cout<<'\n';
    }
}
