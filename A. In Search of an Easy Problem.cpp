//
// Created by CST on 15-Jan-22.
//
#include<iostream>
using namespace std;
int main(){
    int n;
    bool b;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        cin>>b;
        if(b){// when b = 1
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
}
