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
        int x , y;
        cin>>x>>y;
        if(x== 0 && y == 0){
            cout<<0<<' '<<0;
            continue;
        }
        int sum = x+y;
        if(!(sum%2)){
            if(x == 0) {
                cout<<0<<' '<<(sum/2);
            }else if(y == 0) {
                cout<<(sum/2)<<' '<<0;
            }else if(x >= y){
                    cout<<(sum/2)-1<<' '<<1;
            }else
                cout<<1<<' '<<(sum/2)-1;
        }else{
            cout<<-1<<' '<<-1;
        }
        cout<<'\n';
    }
}
