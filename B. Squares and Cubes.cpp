/*
CST
25-Sep-22
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
        int n;
        set<int>s;
        cin>>n;
        for(int i = 1 ; pow(i,2) <= n ; i++){
            s.insert(pow(i,2));
        }
        for(int i = 1 ; pow(i,3) <= n ; i++){
            s.insert(pow(i,3));
        }
        cout<<s.size()<<'\n';
    }
}
