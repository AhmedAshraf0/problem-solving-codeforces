/*
CST
09-Oct-22
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
        int b , p , f , h , c , total;
        cin>>b>>p>>f>>h>>c;
        if(b%2!=0){
            b--;
        }
        b /= 2;
        if(h >= c){
            if(p <= b){
                total = p*h;
                b -= p;
                if(b != 0){
                    total += c*min(f,b);
                }
            }else{
                total = b*h;
            }
        }else{
            if(f <= b){
                total = c*f;
                b -= f;
                if(b != 0){
                    total += h*min(p,b);
                }
            }else{
                total = b*c;
            }
        }
        cout<<total<<'\n';
    }
}
