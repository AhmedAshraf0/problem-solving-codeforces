//
// Created by CST on 18-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str , username = "username: " , pwd  = "pwd: " , profile = "profile: " , role = "role: " , key = "key: ";
    cin>>str;
    int i = str.find("username") + 9;
    for( ; str[i] != '&' ; ++i){
        username += str[i];
    }

    for(i += 5 ; str[i] != '&' ; ++i){
        pwd += str[i];
    }

    for(i  += 9 ; str[i] != '&' ; ++i){
        profile += str[i];
    }

    for(i += 6 ; str[i] != '&' ; ++i){
        role += str[i];
    }

    int s = (int)str.size();
    for(i += 5 ; i < s ; ++i){
        key += str[i];
    }

    cout<<username<<endl<<pwd<<endl<<profile<<endl<<role<<endl<<key;
}
