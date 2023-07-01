/*
CST
08-Sep-22
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
    vector<int>v1;
    cin>>n;
    for(int i = 1 ; i <= sqrt(n) ; ++i){
        if(n%i == 0){
            if(n/i != i){
                v1.push_back(i);
                v1.push_back(n/i);
                continue;
            }
            v1.push_back(i);
        }
    }
    sort(v1.begin(),v1.end());
    cout<<v1.size()<<'\n';
    for (const auto &item: v1)
        cout<<item<<' ';
}
