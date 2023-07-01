//
// Created by CST on 30-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k , l , c , d , p , nl , np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k *= l;
    k /= nl;
    c *= d;
    p /= np;
    cout<<min(min(k,c),p)/n;
}