//
// Created by CST on 20-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1;
    int i = 1;
    while((int)v1.size() <= 1000){
        if ((i % 3 != 0) && (i % 10 != 3))
            v1.push_back(i);
        i++;
    }
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<v1[--k]<<endl;
    }
}
