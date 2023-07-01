/*
CST
04-Jul-22
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
    int s = str.size();
    for(int i = 0 ; i < s ;){
        if(str[i] == '.'){
            cout<<0;
            ++i;
        }else if(str[i] == '-'){
            if(str[i+1] == '.')
                cout<<1;
            else if(str[i+1] == '-')
                cout<<2;
            i += 2;
        }
    }
}
