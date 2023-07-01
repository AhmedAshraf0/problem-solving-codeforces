/*
CST
05-Jul-22
*/
#include<bits/stdc++.h>
using namespace std;
int w , h , n;
bool good(long long x){
    return (x/w) * (x/h) >= n;
}
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>w>>h>>n;
    long long l = 0, r = 1;// the least (maybe) good number
    while(!good(r)) r *= 2;//that's to get faster to some number which achieve the equation then i will get the min num
    while(r > l+1){
        long long m = (l+r) / 2;
        if(good(m))
            r = m;
        else
            l = m; //not m+1 because I will remove a possible value under l try from 0 to 16
    }
    cout<<r;
}
