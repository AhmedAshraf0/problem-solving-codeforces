/*
CST
18-Dec-22
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
        string str , op1= "0" , op2="0";
        cin>>str;
        op1 += str[0];
        op2 += str[2];
        cout<<stoi(op1)+stoi(op2)<<'\n';
    }
}
