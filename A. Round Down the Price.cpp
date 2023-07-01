/*
CST
11-Jul-22
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
        string str , str2 = "0";
        cin>>str;
        str2 += str;
        int pw = str.size()-1;
        cout<<stoi(str2)- int(pow(10,pw))<<'\n';
    }
}
