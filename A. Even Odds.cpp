//
// Created by CST on 03-Jan-22.
//
#include<iostream>
using namespace std;
int main(){
    long long n , k;
    cin>>n>>k;
    if(n % 2 == 0){
        if(k <= (n/2)){
            cout<<(k*2)-1;
        }else{
            cout<<(k-(n/2))*2;
        }
    }else{
        if(k <= ((n/2)+1)){
            cout<<(k*2)-1;
        }else{
            cout<<(k-((n/2) + 1))*2;
        }
    }
}
