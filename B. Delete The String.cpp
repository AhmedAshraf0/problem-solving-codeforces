/*
CST
03-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    int q;
    cin>>str>>q;
    while(q--){
        int num;
        cin>>num;
        str[num] = '0';
    }
    for(int i = 0 ; i < str.size() ; ++i)
        if(str[i] != '0')
            cout<<str[i];
}
