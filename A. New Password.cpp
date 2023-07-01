//
// Created by CST on 12-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , c = 97 , k;
    cin>>n>>k;
    string str;
    for(int i = 0 ; i < n ; ++i){
        if(c == 123)
            c = 97;
        if(i % k != 0){
            str += int(c);
            c++;
        }else{
            if(i == 0){
                str += int(c);
                c++;
                continue;
            }
            c = 97;
            str += int(c);
            c++;
        }
    }
    cout<<str;
}
