//
// Created by CST on 18-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i = 0 ; i < n ;  ++i){
            cin>>v1[i];
        }
        for(int i = 0 ; i < v1.size() ;  ++i){
            for(int j = i+1 ; j <v1.size() ; ++j){
                if(v1[i] == v1[j]){
                    v1.erase(v1.begin()+j,v1.begin()+j+1);
                    v1.erase(v1.begin()+i,v1.begin()+i+1);
                    j--;
                }
            }
        }
        cout<<v1.size()<<'\n';
    }
}