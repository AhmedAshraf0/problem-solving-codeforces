//
// Created by CST on 29-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str , str2;
        cin>>str;
        for(int i = 1 ; i < (int)str.size() ; i += 2){
            if(((int)str.size()) == 2){
                str2 += str.substr(0,2);
                break;
            }
            if(str[i] == str[i+1]){
                str[i+1] = ' ';
                if(str[i-1] != ' '){
                    str2 += str.substr(i-1,2);
                }else{
                    str2 += str[i];
                }
            }
            if((i == (int)str.size() - 1) && str[i] != ' '){
                str2 += str[i];
            }
        }
        cout<<str2<<endl;
    }
}
