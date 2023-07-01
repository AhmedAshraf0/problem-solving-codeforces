/*
CST
05-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , sf = 0 , fs = 0;string str;
    cin>>n>>str;
    for(int i = 0 ; i < n ; ++i){
        if(str.substr(i,2) == "SF")
            sf++;
        else if(str.substr(i,2) == "FS"){
            fs++;
        }
    }
    if(sf > fs)
        cout<<"YES";
    else
        cout<<"NO";
}
