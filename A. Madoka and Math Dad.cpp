//
// Created by CST on 29-Apr-22.
//
#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int start , sum = 0;
        if(n % 3 == 1)
            start = 1;
        else
            start = 2;
        while(sum != n){
            cout<<start;
            sum += start;
            start = 3 - start;
        }
        cout<<'\n';
    }
}
