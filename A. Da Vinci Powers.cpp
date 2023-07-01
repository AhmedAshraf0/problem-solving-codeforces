/*
CST
24-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<long long> v(36,1);
    for(int i = 1 ; i < 36 ; ++i){
        v[i] = v[i-1]*2;
        if(i == 13)
            v[i] -= (100*(i-12));
    }
    int n;
    cin>>n;
    cout<<v[n];
}
