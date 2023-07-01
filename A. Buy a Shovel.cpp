//
// Created by CST on 29-Dec-21.
//
#include<iostream>
using namespace std;
int main(){
    int price , coin , i = 1 , total;
    cin>>price>>coin;
    for(; true ; ++i){
        total = i * price;
        if(total % 10 == coin || total % 10 == 0)
            break;
    }
    cout<<i;
}
