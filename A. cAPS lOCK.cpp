//
// Created by CST on 18-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str;
    cin>>str;
    int size = (int)str.size();
    if(isupper(str[0]) && islower(str[0])){
        cout<<str;
    }else if(islower(str[0])){
        string backUpStr = str;
        str[0] = toupper(str[0]);
        for(int i = 1 ; i < size ; ++i){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }else{
                cout<<backUpStr;
                return 0;
            }
        }
        cout<<str;
    }else{
        string backUpStr = str;
        str[0] = tolower(str[0]);
        for(int i = 1 ; i < size ; ++i){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }else{
                cout<<backUpStr;
                return 0;
            }
        }
        cout<<str;
    }
}
