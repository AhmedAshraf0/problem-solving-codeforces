/*
CST
18-Aug-22
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
        long long k , x , totalMsgs , totalEmotes;
        cin>>k>>x;
        totalMsgs = k * 2 -1;
        totalEmotes = (k*(k+1)/2)+(k*(k-1)/2);
        if(totalEmotes <= x){
            cout<<totalMsgs;
        }else if(x <= k*(k+1)/2){
            cout<< (long long)ceil((-1+ sqrtl(1+8*x))/2.0);
        }else{
            x -= k*(k+1)/2;
            x = k*(k-1)/2 - x;
            cout<<k + ((long long)ceil(k - (-1+ sqrtl(1+8*x))/2.0) -1);
        }
        cout<<'\n';
    }
}
