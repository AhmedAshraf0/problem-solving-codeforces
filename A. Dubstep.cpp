//
// Created by CST on 24-Jan-22.
//substr with one parameter means print from this index till the index
//substr with two parameters mean print from the first IS INDEX the second is LENGTH 3 means 3 chars and so on...
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str , str2 , check = "WUB";
    cin>>str;
    int size = (int)str.size();
    for(int i = 0 ; i < size ; ){
        if(str.substr(i , 3) == check){
            i += 3;
            continue;
        }else{
            int j = i;
            for(; j < size ; ++j){
                if((j+1) != size){
                    if(str.substr(j+1 , 3) == check){
                        if(i == j){
                            str2 += str.substr(i , 1);
                            str2 += ' ';
                            i += 4;
                            break;
                        }else{
                            str2 += str.substr(i , (j+1)-i);
                            str2 += ' ';
                            i += ((j+1) - i);
                            break;
                        }
                    }
                }else{
                    str2 += str.substr(i , (j+1)-i);
                    str2 += ' ';
                    i += ((j+1) - i);
                    break;
                }
            }
        }
    }
    cout<<str2;
}
