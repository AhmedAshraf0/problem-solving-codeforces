/*
CST
07-Jul-22
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
    cin>>str;
    long long n;
    cin>>n;
    while(n--){
        char c;
        cin>>c;
        str.erase(remove(str.begin(),str.end(),c),str.end());
    }
    cout<<str;
}
