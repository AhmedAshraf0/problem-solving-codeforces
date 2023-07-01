//
// Created by CST on 12-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n1 , test = 0;
    string str2 , str3;
    cin>>n1>>str2>>str3;
    while(n1){
        stringstream var1 , var2;
        int n2 , n3;
        var1<<str2[n1-1];
        var1>>n2;
        var2<<str3[n1-1];
        var2>>n3;
        test += min(abs(n2-n3) , abs(10-abs(n2-n3)));
        n1--;
    }
    cout<<test;
}
