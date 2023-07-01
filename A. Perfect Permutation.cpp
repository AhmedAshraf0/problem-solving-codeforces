/*
CST
12-Nov-22
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
    cin>>n;
    if(n%2){
        cout<<-1;
    }else{
        for(int i = n ; i > 0 ; --i)
            cout<<i<<' ';
    }
}
