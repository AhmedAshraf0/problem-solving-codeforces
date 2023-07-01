/*
CST
26-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n;
    long long sum;
    cin>>n;
    sum = n*(n+1)/2;
    --n;
    while(n--){
        int num;
        cin>>num;
        sum -= num;
    }
    cout<<sum;
}
