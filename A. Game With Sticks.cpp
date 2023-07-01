//
// Created by CST on 17-Mar-22.
//Akshat and Malvika
#include<iostream>
using namespace std;
int main(){
    string str = "Akshat" , str2 = "Malvika";
    bool check , check2 = true;
    int n , m , t;
    cin>>n>>m;
    t = m * n;
    while(t > 0){
        if(check2){
            if(t == m * n){
                check2 = false;
                t -=2;
                check = false;
                continue;
            }
        }
        if(check){
            check = false;
        }else{
            check = true;
        }
        t -= 2;
    }
    if(check){
        cout<<str2;
    }else{
        cout<<str;
    }
}
