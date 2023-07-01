//
// Created by CST on 19-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        bool flag = false;
        cin>>n>>str;
        for(int i = 0 ; i < (n-1) ; ++i){
            if(str[i] != str[i+1]){
                for(int j = i+1 ;  j < n ; ++j){
                    if(str[i] == str[j]){
                        cout<<"NO"<<endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }
    }
}
