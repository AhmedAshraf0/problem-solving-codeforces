//
// Created by CST on 12-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int k , n , w , total = 0;
    cin>>k>>n>>w;
    for(int i = 1 ; i <= w ; ++i){
        total += k * i;
    }
    cout<<total-n;
}
