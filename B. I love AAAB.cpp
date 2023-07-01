//
// Created by CST on 24-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int current = -1;
        string str;
        cin>>str;
        int s = str.size();
        for(int i = 0 ; i < s ; ++i){
            if(current == -1){
                if(str[i] == 'A'){
                    current = 1;
                }else if(str[i] == 'B'){
                    current = 3;
                    break;
                }
            }else if(current == 1){
                if(str[i] == 'B'){
                    current = 2;
                }
            }else if(current == 2){
                if(str[i] == 'A' || str[i] == 'B'){
                    current = 1;
                }
            }
        }
        if(current == 2)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}