/*
CST
24-Oct-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , ctr = 0;
    string str;
    cin>>n>>str;
    for(int i = 0 ; i < n ; ++i){
        if(str[i] == 'x' && str[i+1] == 'x' && str[i+2] == 'x')
            ctr++;
    }
    cout<<ctr;
}
