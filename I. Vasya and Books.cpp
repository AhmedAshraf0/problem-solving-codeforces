/*
CST
15-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;
const int si = 1e6;
int frqarr[si];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , nc;
    deque<int>dq;
    cin>>n;
    nc = n;
    for(int i = 0 ; i < n ; ++i){
        int n2;
        cin>>n2;
        frqarr[n2]++;
        dq.push_back(n2);
    }
    while(nc--){
        int n2 , ctr = 0;
        cin>>n2;
        if(frqarr[n2]){
            frqarr[n2]--;
            while(true){
                ctr++;
                if(dq[0] == n2){
                    dq.pop_front();
                    cout<<ctr;
                    break;
                }
                frqarr[dq[0]]--;
                dq.pop_front();
            }
        }else
            cout<<0;
        cout<<' ';
    }
}
