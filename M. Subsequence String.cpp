//
// Created by CST on 13-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int failed(){
    cout<<"NO";
    exit(0);
}
int main(){
    string str;
    cin>>str;
    int n = (int)str.size();
    for(int i = 0 ; i < n ; ++i){
        if(str[i] == 'h'){
            for(int j = ++i ; j < n ; ++j){
                if(str[j] == 'e'){
                    for(int k = ++j ; k < n ; ++k){
                        if(str[k] == 'l'){
                            for(int x = ++k ; x < n ; ++x){
                                if(str[x] == 'l'){
                                    for(int z = ++x ; z < n ; ++z){
                                        if(str[z] == 'o'){
                                            cout<<"YES";
                                            return 0;
                                        }
                                    }
                                    failed();
                                }
                            }
                            failed();
                        }
                    }
                    failed();
                }
            }
            failed();
        }
    }
    failed();
}
