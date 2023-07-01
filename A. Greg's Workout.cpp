//
// Created by CST on 14-Feb-22.
//
#include<iostream>
using namespace std;
int main(){
    int n , c = 0 , bi = 0 , ba = 0 , ptr = 1;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        int temp;
        if(ptr == 1){
            cin>>temp;
            c+= temp;
            ptr++;
        }else if(ptr == 2){
            cin>>temp;
            bi+= temp;
            ptr++;
        }else{
            cin>>temp;
            ba+= temp;
            ptr++;
        }
        if(ptr == 4)
            ptr = 1;
    }
    if(c > bi && c > ba)
        cout<<"chest";
    else if(bi > c && bi > ba)
        cout<<"biceps";
    else
        cout<<"back";
}
