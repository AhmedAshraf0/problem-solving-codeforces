/*
CST
20-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    map<string,int>map1;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        map1[str]++;
        if(map1[str] == 1)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<'\n';
    }
}
