//
// Created by CST on 06-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    long long n;
    int ctr = 0;
    cin>>n;
    while(n != 0){
        if(n % 10 == 4 || n % 10 == 7)
            ctr++;
        n /= 10;
    }
    if(ctr == 4 || ctr == 7)
        cout<<"YES";
    else
        cout<<"NO";
}
