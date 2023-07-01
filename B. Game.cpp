/*
CST
15-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i = 0 ; i < n ; ++i)
        cin>>v[i];
    while(q--){
        int num;
        cin>>num;
        if(upper_bound(v.begin(),v.end(),num) != v.end()){
            cout<<*upper_bound(v.begin(),v.end(),num);
        }else{
            cout<<-1;
        }
        cout<<'\n';
    }
}
