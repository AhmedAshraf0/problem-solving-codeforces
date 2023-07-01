/*
CST
18-Oct-22
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
        int x , n , m;
        cin>>x>>n>>m;
        if(x-m*10 <= 0){
            cout<<"YES";
        }else{
            for(int i = 0 ; i < n ; ++i){
                x/=2;
                x+=10;
            }
            x-=m*10;
            if(x<=0)
                cout<<"YES";
            else
                cout<<"NO";
        }
        cout<<'\n';
    }
}
