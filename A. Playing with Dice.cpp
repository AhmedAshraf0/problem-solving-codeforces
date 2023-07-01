//
// Created by CST on 06-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b , aWon = 0 , bWon = 0 , draw = 0;
    cin>>a>>b;
    for(int i = 1 ; i <= 6 ; ++i){
        if(abs((a - i)) < abs((b - i))){
            aWon++;
        }else if(abs((a - i)) > abs((b - i))){
            bWon++;
        }else{
            draw++;
        }
    }
    cout<<aWon<<' '<<draw<<' '<<bWon;
}
