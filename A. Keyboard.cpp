//
// Created by CST on 07-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str;
    string arr[3] = {"qwertyuiop" , "asdfghjkl;" ,  "zxcvbnm,./"};
    char c;
    int m = 0;
    cin>>c;
    if(c == 'R')
        m = -1;
    else if(c == 'L')
        m = 1;
    cin>>str;
    for(int i = 0 ; i < str.size() ; ++i){
        for(int j = 0 ; j < 3 ; ++j){
            if(arr[j].find(str[i]) >= 0 && arr[j].find(str[i]) < 10 ){
                cout<<arr[j][arr[j].find(str[i])+m];
            }
        }
    }
}