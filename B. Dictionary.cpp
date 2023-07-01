/*
CST
30-Oct-22
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
        string str;
        cin>>str;
        int op2;
        op2 = str[1]-97;
        if(str[0]!=97)
            if (str[0] > str[1])
                op2++;
        cout<<op2 + 25*(str[0]-97)<<'\n';
    }
}
