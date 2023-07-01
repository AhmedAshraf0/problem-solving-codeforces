//
// Created by CST on 23-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 , str2;
    cin>>str1>>str2;
    int s1 = 0 , s2 = 0;
    for(int i = 0 ; i < str1.size() ; i += 2){
        if(str1.substr(i,2) == "8<"){
            if(str2.substr(i,2) == "[]"){
                s1++;
            }else if(str2.substr(i,2) == "()"){
                s2++;
            }
        }else if(str1.substr(i,2) == "[]"){
            if(str2.substr(i,2) == "8<"){
                s2++;
            }else if(str2.substr(i,2) == "()"){
                s1++;
            }
        }else if(str1.substr(i,2) == "()"){
            if(str2.substr(i,2) == "8<"){
                s1++;
            }else if(str2.substr(i,2) == "[]"){
                s2++;
            }
        }
    }
    if(s1 > s2)
        cout<<"TEAM 1 WINS";
    else if(s1 < s2)
        cout<<"TEAM 2 WINS";
    else
        cout<<"TIE";
}