//
// Created by CST on 05-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int t , l , ctr = 0;
    cin>>t>>l;
    while(t--){
        int v , test = 0;
        cin>>v;
        while(v != 0){
            if(v % 10 == 4 || v % 10 == 7){
                test++;
            }
            v /= 10;
            if(v == 0 && test <= l)
                ctr++;
        }
    }
    cout<<ctr;
}