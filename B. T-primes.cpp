/*
CST
22-Sep-22
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
    vector<int>v(1000001,1);
    v[0] = v[1] = 0;
    for(int i = 2 ; i*i < v.size()  ; ++i){
        if(v[i]){
            for(int j = i*i ; j < v.size() ; j+=i)
                v[j]=0;
        }
    }
    cin>>t;
    while(t--){
        long long n , ans;
        cin>>n;
        ans = sqrt(n);
        if(n == 1)
            cout<<"NO\n";
        else if(ans * ans == n && v[ans])//instead of checking with double
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
