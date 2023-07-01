//
// Created by CST on 11-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int m , n;
    cin>>n>>m;
    for(int i = 1 ; i <= n ; ++i){
        if((i % m) == 0){
            n++;
        }
    }
    cout<<n;
}
