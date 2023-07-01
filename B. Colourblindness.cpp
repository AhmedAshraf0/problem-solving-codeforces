/*
CST
31-Aug-22
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
        string str1 , str2;
        cin>>n>>str1>>str2;
        for(int i = 0 ; i < n ; ++i){
            if((str1[i]=='R'&&str2[i]!='R') || (str1[i]!='R'&&str2[i]=='R')){
                cout<<"no";
                break;
            }
            if(i == n-1)
                cout<<"yes";
        }
        cout<<'\n';
    }
}
