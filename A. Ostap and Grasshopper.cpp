//
// Created by CST on 15-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k , gidx , tidx;
    cin>>n>>k;
    string str;
    cin>>str;
    gidx = str.find('G');
    tidx = str.find('T');
    if(gidx < tidx){
        for(int i = gidx + k ; i <= tidx ; i += k){
            if(i == tidx){
                cout<<"YES";
                return 0;
            }else if(str[i] == '#'){
                cout<<"NO";
                return 0;
            }
        }
    }else{
        for(int i = gidx - k ; i >= tidx ; i -= k){
            if(i == tidx){
                cout<<"YES";
                return 0;
            }else if(str[i] == '#'){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"NO";
}