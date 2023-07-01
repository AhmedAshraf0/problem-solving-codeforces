/*
CST
12-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , m;
    vector<double>v1;
    cin>>n>>m;
    while(n--){
        int a , b;
        cin>>a>>b;
        v1.push_back(a*1.0/b);
    }
    sort(v1.begin(),v1.end());
    cout<<fixed<<setprecision(8)<<v1[0]*m;
}
