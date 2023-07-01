/*
CST
10-Aug-22
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    long long lw  = 0, rw = 0;
    cin>>str;
    int idx = find(str.begin(),str.end(),'^')-str.begin();
    for(int i = idx-1 ; i >= 0 ; --i)
        if(str[i] > 48 && str[i] < 58)
            lw += int(str[i]-48) * (idx - i);
    for(int i = idx+1 ; i < str.size() ; ++i)
        if(str[i] > 48 && str[i] < 58)
            rw += int(str[i]-48) * (i - idx);
    if(lw == rw)
        cout<<"balance";
    else if(lw < rw)
        cout<<"right";
    else
        cout<<"left";
}
