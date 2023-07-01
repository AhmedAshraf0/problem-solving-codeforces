/*
CST
30-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str , str2[5];
    cin>>str;
    for(int i = 0 ; i < 5 ; ++i)
        cin>>str2[i];
    for(int i = 0 ; i < 5 ; ++i){
        if(str[0] == str2[i][0] || str[0] == str2[i][1] || str[1] == str2[i][0] || str[1] == str2[i][1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
