/*
CST
13-Oct-22
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
    cin >> t;
    while (t--) {
        char arr[8][8];
        bool yesRed = false;
        for (int i = 0; i < 8; ++i)
            for (int j = 0; j < 8; ++j)
                cin >> arr[i][j];
        for (int i = 0; i < 8; ++i) {
            int rctr = 0;
            for (int j = 0; j < 8; ++j)
                if (arr[i][j] == '.') {
                    break;
                } else if (arr[i][j] == 'R') {
                    rctr++;
                } else {//R
                    break;
                }
            if(rctr == 8)
                yesRed = true;
        }
        if(yesRed)
            cout<<"R";
        else
            cout<<"B";
        cout<<'\n';
    }
}
