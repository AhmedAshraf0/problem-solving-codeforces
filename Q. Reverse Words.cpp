//
// Created by CST on 15-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str , str2;
    getline(cin,str);
    str += ' ';
    int s = (int)str.size();
    for(int i = 0 ; i <  s; ++i){
        if(str[i] == ' '){
            reverse(str.begin(), str.begin()+i);
            str2 += str.substr(0 , i);
            if(str2[(int)str2.size()-1] != ' ')
                str2 += ' ';
            str.erase(0,i);
        }
    }
    cout<<str2;
}
