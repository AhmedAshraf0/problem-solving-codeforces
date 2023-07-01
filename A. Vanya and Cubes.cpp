//
// Created by CST on 15-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = 1;
    int i = 1;
    for( ; true ; ++i){
        if(c >= n)
            break;
        else{
            c = c + 1 + i;
        }
    }
    cout<<i;
}
