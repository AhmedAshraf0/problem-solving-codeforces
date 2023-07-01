/*
CST
02-Sep-22
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
        if(str.size() == 2)
            cout<<str[1];
        else{
            sort(str.begin(),str.end());
            cout<<str[0];
        }
        cout<<'\n';
    }
}
