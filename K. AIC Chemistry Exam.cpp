/*
CST
27-Aug-22
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
        cin>>n;
        while(n--){
            int num , ctr = 0;
            cin>>num;
            while(num){
                if(num % 2 != 0){
                    ctr++;
                }
                num/=2;
            }
            cout<<ctr<<' ';
        }
        cout<<'\n';
    }
}
