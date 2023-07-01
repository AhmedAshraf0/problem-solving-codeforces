//
// Created by CST on 19-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 , ls , rs , str2;//side
    cin>>str1>>str2;
    ls = str1.substr(0,str1.find('|'));
    rs = str1.substr(str1.find('|')+1 , str1.size());
    if(ls.size() < rs.size()){
        int i = 0;
        for( ; i < str2.size() ; ++i){
            if(ls.size() != rs.size()){
                ls += str2[i];
            }else{
                break;
            }
        }
        if((ls.size() == rs.size()) && str2.size()-i == 0){
            cout<<ls<<'|'<<rs;
            return 0;
        }
        if(!((str2.size() - i) % 2) && str2.size() - i != 0){
            int ctr = (str2.size() - i)/2;
            cout<<ls;
            for(int k = 0 ; k < ctr ; ++k){
                cout<<str2[k+i];
            }
            i += ctr;
            cout<<'|'<<rs;
            for(int k = 0 ; k < ctr ; ++k){
                cout<<str2[k+i];
            }
        }else{
            cout<<"Impossible";
        }
    }else if(ls.size() > rs.size()){
        int i = 0;
        for( ; i < str2.size() ; ++i){
            if(rs.size() != ls.size()){
                rs += str2[i];
            }else{
                break;
            }
        }
        if((ls.size() == rs.size()) && str2.size()-i == 0){
            cout<<ls<<'|'<<rs;
            return 0;
        }
        if(!((str2.size() - i) % 2) && str2.size() - i != 0){
            int ctr = (str2.size() - i)/2;
            cout<<ls;
            for(int k = 0 ; k < ctr ; ++k){
                cout<<str2[k+i];
            }
            i += ctr;
            cout<<'|'<<rs;
            for(int k = 0 ; k < ctr ; ++k){
                cout<<str2[k+i];
            }
        }else{
            cout<<"Impossible";
        }
    }else{
        int i = 0;
        if(!((str2.size() - i) % 2) && str2.size() - i != 0){
            int ctr = (str2.size() - i)/2;
            cout<<ls;
            for(int k = 0 ; k < ctr ; ++k){
                cout<<str2[k+i];
            }
            i += ctr;
            cout<<'|'<<rs;
            for(int k = 0 ; k < ctr ; ++k){
                cout<<str2[k+i];
            }
        }else{
            cout<<"Impossible";
        }
    }
}