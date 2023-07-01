/*
CST
22-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int q;
    cin>>q;
    while(q--){
        int n;
        string str;
        cin>>n>>str;
        for(int i = 0 ; i < n ; ++i){
            if(n-1-i < 2){
                string str2 = "";
                str2 += str[i];
                cout<<char(97+stoi(str2)-1);
            }else{
                if(str[i+2] == '0' && str[i+3] != '0'){
                    string str2 = str.substr(i,2);
                    cout<<char(97+stoi(str2)-1);
                    i += 2;
                }else{
                    string str2 = "";
                    str2 += str[i];
                    cout<<char(97+stoi(str2)-1);
                }
            }
        }
        cout<<'\n';
    }
}
