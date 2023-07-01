/*
CST
21-Oct-22
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
        int n;
        string str;
        bool yes = true;
        map<int,char>map1;
        cin>>n;
        for(int i = 0 ; i < 50 ; ++i)
            map1[i] = 'A';
        vector<int>v1(n);
        for(int i = 0 ; i < n ; ++i)
            cin>>v1[i];
        cin>>str;
        for(int i = 0 ; i < n ; ++i){
            if(map1[v1[i]-1] == 'A'){
                map1[v1[i]-1] = str[i];
            }else if(map1[v1[i]-1] != str[i]){
                yes = false;
                i = n;
            }
        }
        if(yes)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<'\n';
    }
}
