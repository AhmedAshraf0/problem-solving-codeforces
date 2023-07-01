//
// Created by CST on 09-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , up = 0;
    string str;
    cin>>n>>str;
    for(int i = 0 ; i < n ; ++i){
        if(str[i] == 'X')
            up++;
    }
    if(up == (n/2)){
        cout<<0<<endl<<str;
        return 0;
    }else if(up < (n/2)){
        int need = (n/2) - up;
        for(int i = 0 ; i < n ; ++i){
            if(str[i] == 'x'){
                str[i] = 'X';
                need--;
                if(!need)
                    break;
            }
        }
    }else{
        int down = n - up , copy = down;
        for(int i = 0 ; i < n ; ++i){
            if(str[i] == 'X'){
                str[i] = 'x';
                down++;
                if(down == (n/2)){
                    cout<<n/2 - copy<<endl<<str;
                    return 0;
                }
            }
        }
    }
    cout<<((n/2) - up)<<endl<<str;
}
