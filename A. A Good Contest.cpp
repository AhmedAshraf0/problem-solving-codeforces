//
// Created by CST on 07-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        int  b , a;
        cin>>str>>b>>a;
        if(b >= 2400){
            if(a > b){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
