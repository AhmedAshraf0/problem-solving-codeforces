/*
CST
16-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int>fab = {0,1};
    int n;
    cin>>n;
    if(!n){
        cout<<0<<' '<<0<<' '<<0;
        return 0;
    }else if(n == 1){
        cout<<1<<' '<<0<<' '<<0;
        return 0;
    }
    for(int i = 2 ; fab[fab.size()-1] != n ; ++i)
        fab.push_back(fab[i-1]+fab[i-2]);
    cout<<0<<' '<<fab[fab.size()-2]<<' '<<fab[fab.size()-3];
}
