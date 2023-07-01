/*
CST
29-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tt;
    cin>>tt;
    while(tt--){
        int n , r =0 , l = 0 , t = 0 , b = 0;
        long long sum;
        cin>>n;
        while(n--){
            int x ,y;
            cin>>x>>y;
            if(y == 0){
                if(x > 0){
                    r = max(r,x);
                }else if (x < 0){
                    l = min(l,x);
                }
            }else if(x == 0){
                if(y > 0){
                    t = max(t,y);
                }else if (y < 0){
                    b = min(b,y);
                }
            }
        }
        sum = r + abs(l) + t + abs(b);
        cout<<sum*2;
        cout<<'\n';
    }
}
