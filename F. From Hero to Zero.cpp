/*
CST
14-Aug-22
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t ;
    cin >> t ;
    while(t--){
        long long counter = 0 ;
        long long n , k ;
        cin >> n >> k ;
        if(k > n){
            cout<<n<<'\n';
            continue;
        }else if(k == n){
            cout<<2<<'\n';
            continue;
        }else{
            while(n!=0){
                if(n%k==0){
                    n/=k ;
                    counter++;
                }else{
                    long long x = n%k ;
                    counter+= x ;
                    n-=x ;
                }
            }
            cout << counter << '\n';
        }

    }
}
