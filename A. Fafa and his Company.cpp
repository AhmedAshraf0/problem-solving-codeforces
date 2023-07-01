/*
CST
27-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , ctr = 1;
    cin>>n;
    for(int i = 2 ;  i < n-1 ; ++i)
        if(!(n%i))
            ctr++;
    cout<<ctr;
}
