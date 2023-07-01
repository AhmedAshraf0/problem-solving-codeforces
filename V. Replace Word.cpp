//
// Created by CST on 17-Feb-22.
//EGYPT IS 4
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    while(1){
        if(str.find("EGYPT") <= 999){
            str.replace(str.find("EGYPT") , 5 , " ");
        }else{
            break;
        }
    }
    cout<<str;
}
