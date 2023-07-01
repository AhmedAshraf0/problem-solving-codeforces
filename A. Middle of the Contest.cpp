//
// Created by CST on 05-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
void print(string s){
    if((int)s.size() == 1){
        cout<<'0'<<s;
    }else{
        cout<<s;
    }
}
int main(){
    string str1 , str2;
    cin>>str1>>str2;
    int n1 , n2 , final;
    for(int i = 0 ; i < 2 ; ++i){
        int temp = 0;
        stringstream s1,s2;
        if(!i){
            s1 << str1.substr(0,2);
            s1 >> n1;
            n1 *= 60;
            s2 << str1.substr(3,2);
            s2 >> temp;
            n1 += temp;
        }else{//taking n2
            s1 << str2.substr(0,2);
            s1 >> n2;
            n2 *= 60;
            s2 << str2.substr(3,2);
            s2 >> temp;
            n2 += temp;
        }
    }
    final = n2 - n1;
    final /= 2;
    n1 += final;
    str1 = to_string(n1/60);
    str2 = to_string(n1%60);
    if((int)str1.size() == 1){
        cout<<'0'<<str1<<':';
        print(str2);
    }else{
        cout<<str1<<':';
        print(str2);
    }
}
