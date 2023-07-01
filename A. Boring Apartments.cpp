//
// Created by CST on 07-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , total , size;
        string str;
        cin>>n;
        total = ((n % 10) - 1) * 10;
        str = to_string(n);
        size = str.size();
        for(; size >= 1 ; --size)
            total +=size;
        cout<<total<<endl;
    }
}
