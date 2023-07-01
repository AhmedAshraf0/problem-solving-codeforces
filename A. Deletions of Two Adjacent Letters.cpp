//
// Created by CST on 09-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        char c;
        cin>>str>>c;
        int s = (int)str.size();
        for(int i = 0 ; i < s ; ++i){
            if(str[i] == c && ((i+1) % 2) != 0){
                cout<<"YES\n";
                goto end;
            }
        }
        cout<<"NO\n";
        end:
        continue;
    }
}
