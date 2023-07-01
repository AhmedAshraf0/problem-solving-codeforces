//
// Created by CST on 28-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 , str2 , str3;
    cin>>str1>>str2>>str3;
    int size = (int)str3.size() , size2 = (int)str2.size() , size3 = (int)str1.size();
    for(int i = 0 ; i < (int)str3.size() ; ++i){
        bool found , found2;
        for(int j = 0 ; j < (int)str1.size() ; ++j){
            found = false;
            if(str3[i] == str1[j]){
                str1[j] = ' ';
                found = true;
                --size;
                --size3;
                break;
            }
        }
        if(!found){//if I didn't find the letter get in here
            for(int k = 0 ; k < (int)str2.size() ; ++k){
                found2 = false;
                if(str3[i] == str2[k]){
                    str2[k] = ' ';
                    found2 = true;
                    --size;
                    --size2;
                    break;
                }
            }
        }
        if(!found && !found2){
            cout<<"NO";
            return 0;
        }
    }
    if(size || size3 || size2){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
