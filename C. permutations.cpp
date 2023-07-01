/*
CST
02-Jul-22
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , q;
    string str;
    cin>>n>>q>>str;
    while(q--){
        string str2;
        int num;
        cin>>str2>>num;
        if(str2 == "prev_permutation")
            while(num--)prev_permutation(str.begin(),str.end());
        else if(str2 == "next_permutation")
            while(num--)next_permutation(str.begin(),str.end());
        cout<<str<<'\n';
    }
}
